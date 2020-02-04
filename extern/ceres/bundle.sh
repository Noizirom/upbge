#!/bin/sh

if [ "x$1" = "x--i-really-know-what-im-doing" ] ; then
  echo Proceeding as requested by command line ...
else
  echo "*** Please run again with --i-really-know-what-im-doing ..."
  exit 1
fi

repo="https://ceres-solver.googlesource.com/ceres-solver"
branch="master"
#tag="1.4.0"
tag=""
tmp=`mktemp -d`
checkout="$tmp/ceres"

GIT="git --git-dir $tmp/ceres/.git --work-tree $checkout"

git clone $repo $checkout

if [ $branch != "master" ]; then
    $GIT checkout -t remotes/origin/$branch
else
  if [ "x$tag" != "x" ]; then
      $GIT checkout $tag
  fi
fi

$GIT log -n 50 > ChangeLog

for p in `cat ./patches/series`; do
  echo "Applying patch $p..."
  cat ./patches/$p | patch -d $tmp/ceres -p1
done

find include -type f -not -iwholename '*.svn*' -exec rm -rf {} \;
find internal -type f -not -iwholename '*.svn*' -exec rm -rf {} \;

cat "files.txt" | while read f; do
  mkdir -p `dirname $f`
  cp $tmp/ceres/$f $f
done

rm -rf $tmp

sources=`find ./include ./internal -type f -iname '*.cc' -or -iname '*.cpp' -or -iname '*.c' | sed -r 's/^\.\//\t/' | \
  grep -v -E 'schur_eliminator_[0-9]_[0-9d]_[0-9d].cc' | \
  grep -v -E 'partitioned_matrix_view_[0-9]_[0-9d]_[0-9d].cc' | sort -d`
generated_sources=`find ./include ./internal -type f -iname '*.cc' -or -iname '*.cpp' -or -iname '*.c' | sed -r 's/^\.\//\t\t/' | \
  grep -E 'schur_eliminator_[0-9]_[0-9d]_[0-9d].cc|partitioned_matrix_view_[0-9]_[0-9d]_[0-9d].cc' | sort -d`
headers=`find ./include ./internal -type f -iname '*.h' | sed -r 's/^\.\//\t/' | sort -d`

src_dir=`find ./internal -type f -iname '*.cc' -exec dirname {} \; -or -iname '*.cpp' -exec dirname {} \; -or -iname '*.c' -exec dirname {} \; | sed -r 's/^\.\//\t/' | sort -d | uniq`
src=""
for x in $src_dir $src_third_dir; do
  t=""

  if test  `echo "$x" | grep -c glog ` -eq 1; then
    continue;
  fi

  if test  `echo "$x" | grep -c generated` -eq 1; then
    continue;
  fi

  if stat $x/*.cpp > /dev/null 2>&1; then
    t="src += env.Glob('`echo $x'/*.cpp'`')"
  fi

  if stat $x/*.c > /dev/null 2>&1; then
    if [ -z "$t" ]; then
      t="src += env.Glob('`echo $x'/*.c'`')"
    else
      t="$t + env.Glob('`echo $x'/*.c'`')"
    fi
  fi

  if stat $x/*.cc > /dev/null 2>&1; then
    if [ -z "$t" ]; then
      t="src += env.Glob('`echo $x'/*.cc'`')"
    else
      t="$t + env.Glob('`echo $x'/*.cc'`')"
    fi
  fi

  if [ -z "$src" ]; then
    src=$t
  else
    src=`echo "$src\n$t"`
  fi
done

cat > CMakeLists.txt << EOF
# ***** BEGIN GPL LICENSE BLOCK *****
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License
# as published by the Free Software Foundation; either version 2
# of the License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software Foundation,
# Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
#
# The Original Code is Copyright (C) 2012, Blender Foundation
# All rights reserved.
# ***** END GPL LICENSE BLOCK *****

# NOTE: This file is automatically generated by bundle.sh script
#       If you're doing changes in this file, please update template
#       in that script too

set(INC
  .
  include
  internal
  config
  ../gflags/src
)

set(INC_SYS
  \${EIGEN3_INCLUDE_DIRS}
  \${GFLAGS_INCLUDE_DIRS}
  \${GLOG_INCLUDE_DIRS}
)

set(SRC
${sources}

${headers}
)

set(LIB
  \${GLOG_LIBRARIES}
  \${GFLAGS_LIBRARIES}
)

if(WITH_LIBMV_SCHUR_SPECIALIZATIONS)
  list(APPEND SRC
${generated_sources}
  )
else()
  add_definitions(-DCERES_RESTRICT_SCHUR_SPECIALIZATION)
endif()

add_definitions(\${GFLAGS_DEFINES})
add_definitions(\${GLOG_DEFINES})
add_definitions(\${CERES_DEFINES})

add_definitions(
  -DCERES_HAVE_PTHREAD
  -DCERES_NO_SUITESPARSE
  -DCERES_NO_CXSPARSE
  -DCERES_NO_LAPACK
  -DCERES_HAVE_RWLOCK
)

if(WITH_OPENMP)
  add_definitions(
    -DCERES_USE_OPENMP
  )
endif()

blender_add_lib(extern_ceres "\${SRC}" "\${INC}" "\${INC_SYS}" "\${LIB}")
EOF
