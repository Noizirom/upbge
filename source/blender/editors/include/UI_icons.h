/*
 * ***** BEGIN GPL LICENSE BLOCK *****
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * The Original Code is Copyright (C) 2009 Blender Foundation.
 * All rights reserved.
 *
 *
 * Contributor(s): Blender Foundation
 *
 * ***** END GPL LICENSE BLOCK *****
 */

/** \file UI_icons.h
 *  \ingroup editorui
 */

/* Note: this is included twice with different #defines for DEF_ICON
 * once from UI_resources.h for the internal icon enum and
 * once for interface_api.c for the definition of the RNA enum for the icons */

/* ICON_ prefix added */
DEF_ICON(NONE)
DEF_ICON(QUESTION)
DEF_ICON(ERROR)
DEF_ICON(CANCEL)
DEF_ICON_MONO(TRIA_RIGHT)
DEF_ICON_MONO(TRIA_DOWN)
DEF_ICON_MONO(TRIA_LEFT)
DEF_ICON_MONO(TRIA_UP)
DEF_ICON_MONO(ARROW_LEFTRIGHT)
DEF_ICON_MONO(PLUS)
DEF_ICON_MONO(DISCLOSURE_TRI_RIGHT)
DEF_ICON_MONO(DISCLOSURE_TRI_DOWN)
DEF_ICON_MONO(RADIOBUT_OFF)
DEF_ICON_MONO(RADIOBUT_ON)
DEF_ICON(MENU_PANEL)
DEF_ICON(BLENDER)
DEF_ICON_MONO(GRIP)
DEF_ICON_MONO(DOT)
DEF_ICON_MONO(COLLAPSEMENU)
DEF_ICON_MONO(X)
DEF_ICON_BLANK(5)  /* XXX 'DOWNARROW' icon! */
DEF_ICON(GO_LEFT)
DEF_ICON(PLUG)
DEF_ICON(UI)
DEF_ICON(NODE)
DEF_ICON(NODE_SEL)

	/* ui */
DEF_ICON(FULLSCREEN)
DEF_ICON(SPLITSCREEN)
DEF_ICON_MONO(RIGHTARROW_THIN)
DEF_ICON_MONO(BORDERMOVE)
DEF_ICON_MONO(VIEWZOOM)
DEF_ICON_MONO(ZOOMIN)
DEF_ICON_MONO(ZOOMOUT)
DEF_ICON_MONO(PANEL_CLOSE)
DEF_ICON(COPY_ID)
DEF_ICON(EYEDROPPER)
DEF_ICON(LINK_AREA)
DEF_ICON(AUTO)
DEF_ICON_MONO(CHECKBOX_DEHLT)
DEF_ICON_MONO(CHECKBOX_HLT)
DEF_ICON_MONO(UNLOCKED)
DEF_ICON_MONO(LOCKED)
DEF_ICON_MONO(UNPINNED)
DEF_ICON_MONO(PINNED)
DEF_ICON_MONO(SCREEN_BACK)
DEF_ICON_MONO(RIGHTARROW)
DEF_ICON_MONO(DOWNARROW_HLT)
DEF_ICON(DOTSUP)
DEF_ICON(DOTSDOWN)
DEF_ICON(LINK)
DEF_ICON(INLINK)
DEF_ICON(PLUGIN)

	/* various ui */
DEF_ICON(HELP)
DEF_ICON(GHOST_ENABLED)
DEF_ICON(COLOR)  /* see COLOR_RED/GREEN/BLUE */
DEF_ICON_MONO(LINKED)
DEF_ICON_MONO(UNLINKED)
DEF_ICON_MONO(HAND)
DEF_ICON_MONO(ZOOM_ALL)
DEF_ICON_MONO(ZOOM_SELECTED)
DEF_ICON_MONO(ZOOM_PREVIOUS)
DEF_ICON_MONO(ZOOM_IN)
DEF_ICON_MONO(ZOOM_OUT)
DEF_ICON(RENDER_REGION)
DEF_ICON(BORDER_RECT)
DEF_ICON(BORDER_LASSO)
DEF_ICON(FREEZE)
DEF_ICON(STYLUS_PRESSURE)
DEF_ICON(GHOST_DISABLED)
DEF_ICON(NEW)
DEF_ICON(FILE_TICK)
DEF_ICON(QUIT)
DEF_ICON(URL)
DEF_ICON(RECOVER_LAST)
DEF_ICON_BLANK(30)
DEF_ICON_MONO(FULLSCREEN_ENTER)
DEF_ICON_MONO(FULLSCREEN_EXIT)
DEF_ICON(BLANK1)	// Not actually blank - this is used all over the place

	/* BUTTONS */
DEF_ICON(LIGHT)
DEF_ICON(MATERIAL)
DEF_ICON(TEXTURE)
DEF_ICON(ANIM)
DEF_ICON(WORLD)
DEF_ICON(SCENE)
DEF_ICON(EDIT)
DEF_ICON(GAME)
DEF_ICON(RADIO)
DEF_ICON(SCRIPT)
DEF_ICON(PARTICLES)
DEF_ICON(PHYSICS)
DEF_ICON(SPEAKER)
DEF_ICON(TEXTURE_SHADED)
DEF_ICON(TOOL_SETTINGS)
DEF_ICON(SHADERFX)
DEF_ICON_BLANK(44)
DEF_ICON_BLANK(45)
DEF_ICON_BLANK(46)
DEF_ICON_BLANK(47)
DEF_ICON_BLANK(48)
DEF_ICON_BLANK(49)
DEF_ICON_BLANK(50)
DEF_ICON_BLANK(51)
DEF_ICON_BLANK(52)
DEF_ICON_BLANK(52b)
	/* EDITORS */
DEF_ICON(VIEW3D)
DEF_ICON(IPO)
DEF_ICON(OOPS)
DEF_ICON(BUTS)
DEF_ICON(FILESEL)
DEF_ICON(IMAGE_COL)
DEF_ICON(INFO)
DEF_ICON(SEQUENCE)
DEF_ICON(TEXT)
DEF_ICON(IMASEL)
DEF_ICON(SOUND)
DEF_ICON(ACTION)
DEF_ICON(NLA)
DEF_ICON(SCRIPTWIN)
DEF_ICON(TIME)
DEF_ICON(NODETREE)
DEF_ICON(LOGIC)
DEF_ICON(CONSOLE)
DEF_ICON(PREFERENCES)
DEF_ICON(CLIP)
DEF_ICON(ASSET_MANAGER)
DEF_ICON_BLANK(57)
DEF_ICON_BLANK(58)
DEF_ICON_BLANK(59)
DEF_ICON_BLANK(60)
DEF_ICON_BLANK(61)

	/* MODES */
DEF_ICON(OBJECT_DATAMODE)	// XXX fix this up
DEF_ICON(EDITMODE_HLT)
DEF_ICON(FACESEL_HLT)
DEF_ICON(VPAINT_HLT)
DEF_ICON(TPAINT_HLT)
DEF_ICON(WPAINT_HLT)
DEF_ICON(SCULPTMODE_HLT)
DEF_ICON(POSE_HLT)
DEF_ICON(PARTICLEMODE)
DEF_ICON(LIGHTPAINT)
DEF_ICON(GREASEPENCIL_STROKE_PAINT)
DEF_ICON_BLANK(64)
DEF_ICON_BLANK(65)
DEF_ICON_BLANK(66)
DEF_ICON_BLANK(67)
DEF_ICON_BLANK(68)
DEF_ICON_BLANK(69)
DEF_ICON_BLANK(70)
DEF_ICON_BLANK(71)
DEF_ICON_BLANK(72)
DEF_ICON_BLANK(73)
DEF_ICON_BLANK(74)
DEF_ICON_BLANK(75)
DEF_ICON_BLANK(76)
DEF_ICON_BLANK(77)
DEF_ICON_BLANK(77b)

	/* DATA */
DEF_ICON(SCENE_DATA)
DEF_ICON(RENDERLAYERS)
DEF_ICON(WORLD_DATA)
DEF_ICON(OBJECT_DATA)
DEF_ICON(MESH_DATA)
DEF_ICON(CURVE_DATA)
DEF_ICON(META_DATA)
DEF_ICON(LATTICE_DATA)
DEF_ICON(LIGHT_DATA)
DEF_ICON(MATERIAL_DATA)
DEF_ICON(TEXTURE_DATA)
DEF_ICON(ANIM_DATA)
DEF_ICON(CAMERA_DATA)
DEF_ICON(PARTICLE_DATA)
DEF_ICON(LIBRARY_DATA_DIRECT)
DEF_ICON(GROUP)
DEF_ICON(ARMATURE_DATA)
DEF_ICON(POSE_DATA)
DEF_ICON(BONE_DATA)
DEF_ICON(CONSTRAINT)
DEF_ICON(SHAPEKEY_DATA)
DEF_ICON(CONSTRAINT_BONE)
DEF_ICON(CAMERA_STEREO)
DEF_ICON(PACKAGE)
DEF_ICON(UGLYPACKAGE)
DEF_ICON_BLANK(79b)

	/* DATA */
DEF_ICON(BRUSH_DATA)
DEF_ICON(IMAGE_DATA)
DEF_ICON(FILE)
DEF_ICON(FCURVE)
DEF_ICON(FONT_DATA)
DEF_ICON(RENDER_RESULT)
DEF_ICON(SURFACE_DATA)
DEF_ICON(EMPTY_DATA)
DEF_ICON(SETTINGS)
DEF_ICON(RENDER_ANIMATION)
DEF_ICON(RENDER_STILL)
DEF_ICON(LIBRARY_DATA_BROKEN)
DEF_ICON(BOIDS)
DEF_ICON(STRANDS)
DEF_ICON(LIBRARY_DATA_INDIRECT)
DEF_ICON(GREASEPENCIL)
DEF_ICON(LINE_DATA)
DEF_ICON(LIBRARY_DATA_OVERRIDE)
DEF_ICON(GROUP_BONE)
DEF_ICON(GROUP_VERTEX)
DEF_ICON(GROUP_VCOL)
DEF_ICON(GROUP_UVS)
DEF_ICON_BLANK(89)
DEF_ICON_BLANK(90)
DEF_ICON(RNA)
DEF_ICON(RNA_ADD)

	/* INPUT + DECORATOR */
DEF_ICON_MONO(MOUSE_LMB)
DEF_ICON_MONO(MOUSE_MMB)
DEF_ICON_MONO(MOUSE_RMB)
DEF_ICON_MONO(MOUSE_MOVE)
DEF_ICON_MONO(MOUSE_LMB_DRAG)
DEF_ICON_MONO(MOUSE_MMB_DRAG)
DEF_ICON_MONO(MOUSE_RMB_DRAG)
DEF_ICON_BLANK(99)
DEF_ICON_MONO(PRESET)
DEF_ICON_BLANK(101)
DEF_ICON_MONO(DECORATE)
DEF_ICON_MONO(DECORATE_KEYFRAME)
DEF_ICON_MONO(DECORATE_ANIMATE)
DEF_ICON_MONO(DECORATE_DRIVER)
DEF_ICON_MONO(DECORATE_LINKED)
DEF_ICON_MONO(DECORATE_OVERRIDE)
DEF_ICON_MONO(DECORATE_UNLOCKED)
DEF_ICON_MONO(DECORATE_LOCKED)
DEF_ICON_BLANK(110)
DEF_ICON_BLANK(111)
DEF_ICON_BLANK(112)
DEF_ICON_BLANK(113)
DEF_ICON_BLANK(114)
DEF_ICON_MONO(USER)
DEF_ICON_BLANK(116)
DEF_ICON_BLANK(116b)

	/* OUTLINER */
DEF_ICON(OUTLINER_OB_EMPTY)
DEF_ICON(OUTLINER_OB_MESH)
DEF_ICON(OUTLINER_OB_CURVE)
DEF_ICON(OUTLINER_OB_LATTICE)
DEF_ICON(OUTLINER_OB_META)
DEF_ICON(OUTLINER_OB_LIGHT)
DEF_ICON(OUTLINER_OB_CAMERA)
DEF_ICON(OUTLINER_OB_ARMATURE)
DEF_ICON(OUTLINER_OB_FONT)
DEF_ICON(OUTLINER_OB_SURFACE)
DEF_ICON(OUTLINER_OB_SPEAKER)
DEF_ICON(OUTLINER_OB_FORCE_FIELD)
DEF_ICON(OUTLINER_OB_GROUP_INSTANCE)
DEF_ICON(OUTLINER_OB_GREASEPENCIL)
DEF_ICON(OUTLINER_OB_LIGHTPROBE)
DEF_ICON(OUTLINER_OB_IMAGE)
DEF_ICON_BLANK(125)
DEF_ICON(RESTRICT_COLOR_OFF)
DEF_ICON(RESTRICT_COLOR_ON)
DEF_ICON_MONO(HIDE_OFF)
DEF_ICON_MONO(HIDE_ON)
DEF_ICON_MONO(RESTRICT_SELECT_OFF)
DEF_ICON_MONO(RESTRICT_SELECT_ON)
DEF_ICON_MONO(RESTRICT_RENDER_OFF)
DEF_ICON_MONO(RESTRICT_RENDER_ON)
DEF_ICON_BLANK(127b)

	/* OUTLINER */
DEF_ICON(OUTLINER_DATA_EMPTY)
DEF_ICON(OUTLINER_DATA_MESH)
DEF_ICON(OUTLINER_DATA_CURVE)
DEF_ICON(OUTLINER_DATA_LATTICE)
DEF_ICON(OUTLINER_DATA_META)
DEF_ICON(OUTLINER_DATA_LIGHT)
DEF_ICON(OUTLINER_DATA_CAMERA)
DEF_ICON(OUTLINER_DATA_ARMATURE)
DEF_ICON(OUTLINER_DATA_FONT)
DEF_ICON(OUTLINER_DATA_SURFACE)
DEF_ICON(OUTLINER_DATA_SPEAKER)
DEF_ICON(OUTLINER_DATA_POSE)
DEF_ICON(OUTLINER_DATA_GREASEPENCIL)
DEF_ICON_BLANK(131)
DEF_ICON_BLANK(132)
DEF_ICON_BLANK(133)
DEF_ICON_BLANK(134)
DEF_ICON_BLANK(135)
DEF_ICON_BLANK(136)
DEF_ICON_BLANK(137)
DEF_ICON_BLANK(138)
DEF_ICON_BLANK(139)
DEF_ICON_BLANK(140)
DEF_ICON_MONO(RESTRICT_VIEW_OFF)
DEF_ICON_MONO(RESTRICT_VIEW_ON)
DEF_ICON_BLANK(142b)

	/* PRIMITIVES */
DEF_ICON(MESH_PLANE)
DEF_ICON(MESH_CUBE)
DEF_ICON(MESH_CIRCLE)
DEF_ICON(MESH_UVSPHERE)
DEF_ICON(MESH_ICOSPHERE)
DEF_ICON(MESH_GRID)
DEF_ICON(MESH_MONKEY)
DEF_ICON(MESH_CYLINDER)
DEF_ICON(MESH_TORUS)
DEF_ICON(MESH_CONE)
DEF_ICON(MESH_CAPSULE)
DEF_ICON_BLANK(611)
DEF_ICON(LIGHT_POINT)
DEF_ICON(LIGHT_SUN)
DEF_ICON(LIGHT_SPOT)
DEF_ICON(LIGHT_HEMI)
DEF_ICON(LIGHT_AREA)
DEF_ICON_BLANK(617)
DEF_ICON_BLANK(618)
DEF_ICON(META_EMPTY)
DEF_ICON(META_PLANE)
DEF_ICON(META_CUBE)
DEF_ICON(META_BALL)
DEF_ICON(META_ELLIPSOID)
DEF_ICON(META_CAPSULE)
DEF_ICON_BLANK(625)

	/* PRIMITIVES */
DEF_ICON(SURFACE_NCURVE)
DEF_ICON(SURFACE_NCIRCLE)
DEF_ICON(SURFACE_NSURFACE)
DEF_ICON(SURFACE_NCYLINDER)
DEF_ICON(SURFACE_NSPHERE)
DEF_ICON(SURFACE_NTORUS)
DEF_ICON_BLANK(636)
DEF_ICON_BLANK(637)
DEF_ICON_BLANK(638)
DEF_ICON(CURVE_BEZCURVE)
DEF_ICON(CURVE_BEZCIRCLE)
DEF_ICON(CURVE_NCURVE)
DEF_ICON(CURVE_NCIRCLE)
DEF_ICON(CURVE_PATH)
DEF_ICON(LIGHTPROBE_CUBEMAP)
DEF_ICON(LIGHTPROBE_PLANAR)
DEF_ICON(LIGHTPROBE_GRID)
DEF_ICON_BLANK(647)
DEF_ICON_BLANK(648)
DEF_ICON(COLOR_RED)
DEF_ICON(COLOR_GREEN)
DEF_ICON(COLOR_BLUE)
DEF_ICON_MONO(TRIA_RIGHT_BAR)
DEF_ICON_MONO(TRIA_DOWN_BAR)
DEF_ICON_MONO(TRIA_LEFT_BAR)
DEF_ICON_MONO(TRIA_UP_BAR)

	/* EMPTY */
DEF_ICON(FORCE_FORCE)
DEF_ICON(FORCE_WIND)
DEF_ICON(FORCE_VORTEX)
DEF_ICON(FORCE_MAGNETIC)
DEF_ICON(FORCE_HARMONIC)
DEF_ICON(FORCE_CHARGE)
DEF_ICON(FORCE_LENNARDJONES)
DEF_ICON(FORCE_TEXTURE)
DEF_ICON(FORCE_CURVE)
DEF_ICON(FORCE_BOID)
DEF_ICON(FORCE_TURBULENCE)
DEF_ICON(FORCE_DRAG)
DEF_ICON(FORCE_SMOKEFLOW)
DEF_ICON_BLANK(673)
DEF_ICON_BLANK(674)
DEF_ICON_BLANK(675)
DEF_ICON_BLANK(676)
DEF_ICON_BLANK(677)
DEF_ICON_BLANK(678)
DEF_ICON_BLANK(679)
DEF_ICON_BLANK(680)
DEF_ICON_BLANK(681)
DEF_ICON_BLANK(682)
DEF_ICON_BLANK(683)
DEF_ICON_BLANK(684)
DEF_ICON_BLANK(685)

	/* EMPTY */
DEF_ICON_BLANK(690)  /* XXX 'Temperature' icon! */
DEF_ICON_BLANK(691)  /* XXX 'Temperature' icon! */
DEF_ICON_BLANK(692)  /* XXX 'Gear' icon! */
DEF_ICON(NODE_INSERT_ON)
DEF_ICON(NODE_INSERT_OFF)
DEF_ICON_BLANK(695)
DEF_ICON_BLANK(696)
DEF_ICON_BLANK(697)
DEF_ICON_BLANK(698)
DEF_ICON_BLANK(699)
DEF_ICON_BLANK(700)
DEF_ICON_BLANK(701)
DEF_ICON_BLANK(702)
DEF_ICON_BLANK(703)
DEF_ICON_BLANK(704)
DEF_ICON_BLANK(705)
DEF_ICON_BLANK(706)
DEF_ICON_BLANK(707)
DEF_ICON_BLANK(708)
DEF_ICON_BLANK(709)
DEF_ICON_BLANK(710)
DEF_ICON_BLANK(711)
DEF_ICON_BLANK(712)
DEF_ICON_BLANK(713)
DEF_ICON_BLANK(714)
DEF_ICON_BLANK(715)

	/* EMPTY */
DEF_ICON_MONO(ALIGN_LEFT)
DEF_ICON_MONO(ALIGN_CENTER)
DEF_ICON_MONO(ALIGN_RIGHT)
DEF_ICON_MONO(ALIGN_JUSTIFY)
DEF_ICON_MONO(ALIGN_FLUSH)
DEF_ICON_MONO(ALIGN_TOP)
DEF_ICON_MONO(ALIGN_MIDDLE)
DEF_ICON_MONO(ALIGN_BOTTOM)
DEF_ICON_MONO(BOLD)
DEF_ICON_MONO(ITALIC)
DEF_ICON_MONO(UNDERLINE)
DEF_ICON_MONO(SMALL_CAPS_ON)
DEF_ICON_MONO(SMALL_CAPS_OFF)
DEF_ICON_BLANK(743)
DEF_ICON_BLANK(744)
DEF_ICON_BLANK(745)
DEF_ICON_BLANK(746)
DEF_ICON_BLANK(747)
DEF_ICON_BLANK(748)
DEF_ICON_BLANK(749)
DEF_ICON_BLANK(750)
DEF_ICON_BLANK(751)
DEF_ICON_BLANK(752)
DEF_ICON_BLANK(753)
DEF_ICON_BLANK(754)
DEF_ICON_BLANK(755)

	/* EMPTY */
DEF_ICON_BLANK(760)
DEF_ICON_BLANK(761)
DEF_ICON_BLANK(762)
DEF_ICON_BLANK(763)
DEF_ICON_BLANK(764)
DEF_ICON_BLANK(765)
DEF_ICON_BLANK(766)
DEF_ICON_BLANK(767)
DEF_ICON_BLANK(768)
DEF_ICON_BLANK(769)
DEF_ICON_BLANK(770)
DEF_ICON_BLANK(771)
DEF_ICON_BLANK(772)
DEF_ICON_BLANK(773)
DEF_ICON_BLANK(774)
DEF_ICON_BLANK(775)
DEF_ICON_BLANK(776)
DEF_ICON_BLANK(777)
DEF_ICON_BLANK(778)
DEF_ICON_BLANK(779)
DEF_ICON_BLANK(780)
DEF_ICON_BLANK(781)
DEF_ICON_BLANK(782)
DEF_ICON_BLANK(783)
DEF_ICON_BLANK(784)
DEF_ICON_BLANK(785)

	/* MODIFIERS */
DEF_ICON(MODIFIER)
DEF_ICON(MOD_WAVE)
DEF_ICON(MOD_BUILD)
DEF_ICON(MOD_DECIM)
DEF_ICON(MOD_MIRROR)
DEF_ICON(MOD_SOFT)
DEF_ICON(MOD_SUBSURF)
DEF_ICON(HOOK)
DEF_ICON(MOD_PHYSICS)
DEF_ICON(MOD_PARTICLES)
DEF_ICON(MOD_BOOLEAN)
DEF_ICON(MOD_EDGESPLIT)
DEF_ICON(MOD_ARRAY)
DEF_ICON(MOD_UVPROJECT)
DEF_ICON(MOD_DISPLACE)
DEF_ICON(MOD_CURVE)
DEF_ICON(MOD_LATTICE)
DEF_ICON(CONSTRAINT_DATA)
DEF_ICON(MOD_ARMATURE)
DEF_ICON(MOD_SHRINKWRAP)
DEF_ICON(MOD_CAST)
DEF_ICON(MOD_MESHDEFORM)
DEF_ICON(MOD_BEVEL)
DEF_ICON(MOD_SMOOTH)
DEF_ICON(MOD_SIMPLEDEFORM)
DEF_ICON(MOD_MASK)

	/* MODIFIERS */
DEF_ICON(MOD_CLOTH)
DEF_ICON(MOD_EXPLODE)
DEF_ICON(MOD_FLUIDSIM)
DEF_ICON(MOD_MULTIRES)
DEF_ICON(MOD_SMOKE)
DEF_ICON(MOD_SOLIDIFY)
DEF_ICON(MOD_SCREW)
DEF_ICON(MOD_VERTEX_WEIGHT)
DEF_ICON(MOD_DYNAMICPAINT)
DEF_ICON(MOD_REMESH)
DEF_ICON(MOD_OCEAN)
DEF_ICON(MOD_WARP)
DEF_ICON(MOD_SKIN)
DEF_ICON(MOD_TRIANGULATE)
DEF_ICON(MOD_WIREFRAME)
DEF_ICON(MOD_DATA_TRANSFER)
DEF_ICON(MOD_NORMALEDIT)
DEF_ICON_BLANK(169)
DEF_ICON_BLANK(170)
DEF_ICON_BLANK(171)
DEF_ICON_BLANK(172)
DEF_ICON_BLANK(173)
DEF_ICON_BLANK(174)
DEF_ICON_BLANK(175)
DEF_ICON_BLANK(176)
DEF_ICON_BLANK(177)

	/* ANIMATION */
DEF_ICON_MONO(REC)
DEF_ICON_MONO(PLAY)
DEF_ICON_MONO(FF)
DEF_ICON_MONO(REW)
DEF_ICON_MONO(PAUSE)
DEF_ICON_MONO(PREV_KEYFRAME)
DEF_ICON_MONO(NEXT_KEYFRAME)
DEF_ICON_BLANK(185)
DEF_ICON_MONO(PLAY_REVERSE)
DEF_ICON(PREVIEW_RANGE)
DEF_ICON(ACTION_TWEAK)
DEF_ICON(PMARKER_ACT)
DEF_ICON(PMARKER_SEL)
DEF_ICON(PMARKER)
DEF_ICON(MARKER_HLT)
DEF_ICON(MARKER)
DEF_ICON(SPACE2)	// XXX
DEF_ICON(SPACE3)	// XXX
DEF_ICON(KEYINGSET)
DEF_ICON(KEY_DEHLT)
DEF_ICON(KEY_HLT)
DEF_ICON(MUTE_IPO_OFF)
DEF_ICON(MUTE_IPO_ON)
DEF_ICON(VISIBLE_IPO_OFF)
DEF_ICON(VISIBLE_IPO_ON)
DEF_ICON(DRIVER)

	/* ANIMATION */
DEF_ICON(SOLO_OFF)
DEF_ICON(SOLO_ON)
DEF_ICON_MONO(FRAME_PREV)
DEF_ICON_MONO(FRAME_NEXT)
DEF_ICON(NLA_PUSHDOWN)
DEF_ICON(IPO_CONSTANT)
DEF_ICON(IPO_LINEAR)
DEF_ICON(IPO_BEZIER)
DEF_ICON(IPO_SINE)
DEF_ICON(IPO_QUAD)
DEF_ICON(IPO_CUBIC)
DEF_ICON(IPO_QUART)
DEF_ICON(IPO_QUINT)
DEF_ICON(IPO_EXPO)
DEF_ICON(IPO_CIRC)
DEF_ICON(IPO_BOUNCE)
DEF_ICON(IPO_ELASTIC)
DEF_ICON(IPO_BACK)
DEF_ICON(IPO_EASE_IN)
DEF_ICON(IPO_EASE_OUT)
DEF_ICON(IPO_EASE_IN_OUT)
DEF_ICON(NORMALIZE_FCURVES)
	/* available */
DEF_ICON_BLANK(204)
DEF_ICON_BLANK(205)
DEF_ICON_BLANK(206)
DEF_ICON_BLANK(207)

	/* EDITING */
DEF_ICON(VERTEXSEL)
DEF_ICON(EDGESEL)
DEF_ICON(FACESEL)
DEF_ICON(LOOPSEL)
DEF_ICON_BLANK(210)
DEF_ICON(ROTATE)
DEF_ICON(CURSOR)
DEF_ICON(ROTATECOLLECTION)
DEF_ICON(ROTATECENTER)
DEF_ICON(ROTACTIVE)
DEF_ICON(ALIGN)
DEF_ICON_BLANK(211)
DEF_ICON(SMOOTHCURVE)
DEF_ICON(SPHERECURVE)
DEF_ICON(ROOTCURVE)
DEF_ICON(SHARPCURVE)
DEF_ICON(LINCURVE)
DEF_ICON(NOCURVE)
DEF_ICON(RNDCURVE)
DEF_ICON(PROP_OFF)
DEF_ICON(PROP_ON)
DEF_ICON(PROP_CON)
DEF_ICON(SCULPT_DYNTOPO)  /* XXX Empty icon! */
DEF_ICON(PARTICLE_POINT)
DEF_ICON(PARTICLE_TIP)
DEF_ICON(PARTICLE_PATH)

	/* EDITING */
DEF_ICON(MAN_TRANS)
DEF_ICON(MAN_ROT)
DEF_ICON(MAN_SCALE)
DEF_ICON(MANIPUL)
DEF_ICON(SNAP_OFF)
DEF_ICON(SNAP_ON)
DEF_ICON(SNAP_NORMAL)
DEF_ICON(SNAP_GRID)
DEF_ICON(SNAP_VERTEX)
DEF_ICON(SNAP_EDGE)
DEF_ICON(SNAP_FACE)
DEF_ICON(SNAP_VOLUME)
DEF_ICON(SNAP_INCREMENT)
DEF_ICON(STICKY_UVS_LOC)
DEF_ICON(STICKY_UVS_DISABLE)
DEF_ICON(STICKY_UVS_VERT)
DEF_ICON(CLIPUV_DEHLT)
DEF_ICON(CLIPUV_HLT)
DEF_ICON(SNAP_PEEL_OBJECT)
DEF_ICON(GRID)
DEF_ICON(OBJECT_ORIGIN)
DEF_ICON_BLANK(222)
DEF_ICON_BLANK(224)
DEF_ICON_BLANK(225)
DEF_ICON_BLANK(226)
DEF_ICON_BLANK(226b)

	/* EDITING */
DEF_ICON(PASTEDOWN)
DEF_ICON(COPYDOWN)
DEF_ICON(PASTEFLIPUP)
DEF_ICON(PASTEFLIPDOWN)
DEF_ICON(VIS_SEL_11)
DEF_ICON(VIS_SEL_10)
DEF_ICON(VIS_SEL_01)
DEF_ICON(VIS_SEL_00)
DEF_ICON(SNAP_SURFACE)
DEF_ICON(AUTOMERGE_ON)
DEF_ICON(AUTOMERGE_OFF)
DEF_ICON(RETOPO)
DEF_ICON(UV_VERTEXSEL)
DEF_ICON(UV_EDGESEL)
DEF_ICON(UV_FACESEL)
DEF_ICON(UV_ISLANDSEL)
DEF_ICON(UV_SYNC_SELECT)
DEF_ICON_BLANK(240)
DEF_ICON_BLANK(241)
DEF_ICON_BLANK(242)
DEF_ICON_BLANK(243)
DEF_ICON_BLANK(244)
DEF_ICON_BLANK(245)
DEF_ICON_BLANK(246)
DEF_ICON_BLANK(247)
DEF_ICON_BLANK(247b)

	/* 3D VIEW */
DEF_ICON(BBOX)
DEF_ICON(WIRE)
DEF_ICON(SOLID)
DEF_ICON(SMOOTH)
DEF_ICON(POTATO)
DEF_ICON(OVERLAY)
DEF_ICON(ORTHO)
DEF_ICON_BLANK(249)
DEF_ICON_BLANK(250)
DEF_ICON(LOCKVIEW_OFF)
DEF_ICON(LOCKVIEW_ON)
DEF_ICON_BLANK(251)
DEF_ICON(AXIS_SIDE)
DEF_ICON(AXIS_FRONT)
DEF_ICON(AXIS_TOP)
DEF_ICON(NDOF_DOM)
DEF_ICON(NDOF_TURN)
DEF_ICON(NDOF_FLY)
DEF_ICON(NDOF_TRANS)
DEF_ICON(LAYER_USED)
DEF_ICON(LAYER_ACTIVE)
	/* available */
DEF_ICON_BLANK(254)
DEF_ICON_BLANK(255)
DEF_ICON_BLANK(256)
DEF_ICON_BLANK(257)
DEF_ICON_BLANK(257b)
DEF_ICON_BLANK(258)
DEF_ICON_BLANK(259)
DEF_ICON_BLANK(260)
DEF_ICON_BLANK(261)
DEF_ICON_BLANK(262)
DEF_ICON_BLANK(263)
DEF_ICON_BLANK(264)
DEF_ICON_BLANK(265)
DEF_ICON_BLANK(266)
DEF_ICON_BLANK(267)
DEF_ICON_BLANK(268)
DEF_ICON_BLANK(269)
DEF_ICON_BLANK(270)
DEF_ICON_BLANK(271)
DEF_ICON_BLANK(272)
DEF_ICON_BLANK(273)
DEF_ICON_BLANK(274)
DEF_ICON_BLANK(275)
DEF_ICON_BLANK(276)
DEF_ICON_BLANK(277)
DEF_ICON_BLANK(278)
DEF_ICON_BLANK(279)
DEF_ICON_BLANK(280)
DEF_ICON_BLANK(281)
DEF_ICON_BLANK(282)
DEF_ICON_BLANK(282b)

	/* FILE SELECT */
DEF_ICON(SORTALPHA)
DEF_ICON(SORTBYEXT)
DEF_ICON(SORTTIME)
DEF_ICON(SORTSIZE)
DEF_ICON(LONGDISPLAY)
DEF_ICON(SHORTDISPLAY)
DEF_ICON(GHOST)
DEF_ICON(IMGDISPLAY)
DEF_ICON(SAVE_AS)
DEF_ICON(SAVE_COPY)
DEF_ICON(BOOKMARKS)
DEF_ICON(FONTPREVIEW)
DEF_ICON(FILTER)
DEF_ICON(NEWFOLDER)
DEF_ICON(OPEN_RECENT)
DEF_ICON_MONO(FILE_PARENT)
DEF_ICON_MONO(FILE_REFRESH)
DEF_ICON(FILE_FOLDER)
DEF_ICON(FILE_BLANK)
DEF_ICON(FILE_BLEND)
DEF_ICON(FILE_IMAGE)
DEF_ICON(FILE_MOVIE)
DEF_ICON(FILE_SCRIPT)
DEF_ICON(FILE_SOUND)
DEF_ICON(FILE_FONT)
DEF_ICON(FILE_TEXT)

	/* FILE SELECT */
DEF_ICON_MONO(RECOVER_AUTO)
DEF_ICON_MONO(SAVE_PREFS)
DEF_ICON_MONO(LINK_BLEND)
DEF_ICON_MONO(APPEND_BLEND)
DEF_ICON_MONO(IMPORT)
DEF_ICON_MONO(EXPORT)
DEF_ICON(EXTERNAL_DATA)
DEF_ICON(LOAD_FACTORY)
DEF_ICON_BLANK(300)
DEF_ICON_BLANK(301)
DEF_ICON_BLANK(302)
DEF_ICON_BLANK(303)
DEF_ICON_BLANK(304)
DEF_ICON_MONO(LOOP_BACK)
DEF_ICON_MONO(LOOP_FORWARDS)
DEF_ICON_MONO(BACK)
DEF_ICON_MONO(FORWARD)
DEF_ICON_BLANK(309)
DEF_ICON_BLANK(310)
DEF_ICON_BLANK(311)
DEF_ICON_BLANK(312)
DEF_ICON_BLANK(313)
DEF_ICON_BLANK(314)
DEF_ICON(FILE_HIDDEN)
DEF_ICON(FILE_BACKUP)
DEF_ICON(DISK_DRIVE)

	/* SHADING / TEXT */
DEF_ICON(MATPLANE)
DEF_ICON(MATSPHERE)
DEF_ICON(MATCUBE)
DEF_ICON(MONKEY)
DEF_ICON(HAIR)
DEF_ICON(ALIASED)
DEF_ICON(ANTIALIASED)
DEF_ICON(MAT_SPHERE_SKY)
DEF_ICON_BLANK(319)
DEF_ICON_BLANK(320)
DEF_ICON_BLANK(321)
DEF_ICON_BLANK(322)
DEF_ICON(WORDWRAP_OFF)
DEF_ICON(WORDWRAP_ON)
DEF_ICON(SYNTAX_OFF)
DEF_ICON(SYNTAX_ON)
DEF_ICON(LINENUMBERS_OFF)
DEF_ICON(LINENUMBERS_ON)
DEF_ICON(SCRIPTPLUGINS)		// XXX CREATE NEW
DEF_ICON_BLANK(323)
DEF_ICON_BLANK(324)
DEF_ICON_BLANK(325)
DEF_ICON_BLANK(326)
DEF_ICON_BLANK(327)
DEF_ICON_BLANK(328)
DEF_ICON_BLANK(328b)

	/* SEQUENCE / IMAGE EDITOR */
DEF_ICON(SEQ_SEQUENCER)
DEF_ICON(SEQ_PREVIEW)
DEF_ICON(SEQ_LUMA_WAVEFORM)
DEF_ICON(SEQ_CHROMA_SCOPE)
DEF_ICON(SEQ_HISTOGRAM)
DEF_ICON(SEQ_SPLITVIEW)
DEF_ICON_BLANK(331)
DEF_ICON_BLANK(332)
DEF_ICON_BLANK(333)
DEF_ICON(IMAGE_RGB)	// XXX CHANGE TO STRAIGHT ALPHA, Z ETC
DEF_ICON(IMAGE_RGB_ALPHA)
DEF_ICON(IMAGE_ALPHA)
DEF_ICON(IMAGE_ZDEPTH)
DEF_ICON(IMAGEFILE)
DEF_ICON_BLANK(336)
DEF_ICON_BLANK(337)
DEF_ICON_BLANK(338)
DEF_ICON_BLANK(339)
DEF_ICON_BLANK(340)
DEF_ICON_BLANK(341)
DEF_ICON_BLANK(342)
DEF_ICON(VIEW_PERSPECTIVE)
DEF_ICON(VIEW_ORTHO)
DEF_ICON(VIEW_CAMERA)
DEF_ICON(VIEW_PAN)
DEF_ICON(VIEW_ZOOM)

	/* brush icons */

DEF_ICON(BRUSH_ADD)
DEF_ICON(BRUSH_BLOB)
DEF_ICON(BRUSH_BLUR)
DEF_ICON(BRUSH_CLAY)
DEF_ICON(BRUSH_CLAY_STRIPS)
DEF_ICON(BRUSH_CLONE)
DEF_ICON(BRUSH_CREASE)
DEF_ICON(BRUSH_DARKEN)
DEF_ICON(BRUSH_FILL)
DEF_ICON(BRUSH_FLATTEN)
DEF_ICON(BRUSH_GRAB)
DEF_ICON(BRUSH_INFLATE)
DEF_ICON(BRUSH_LAYER)
DEF_ICON(BRUSH_LIGHTEN)
DEF_ICON(BRUSH_MASK)
DEF_ICON(BRUSH_MIX)
DEF_ICON(BRUSH_MULTIPLY)
DEF_ICON(BRUSH_NUDGE)
DEF_ICON(BRUSH_PINCH)
DEF_ICON(BRUSH_SCRAPE)
DEF_ICON(BRUSH_SCULPT_DRAW)
DEF_ICON(BRUSH_SMEAR)
DEF_ICON(BRUSH_SMOOTH)
DEF_ICON(BRUSH_SNAKE_HOOK)
DEF_ICON(BRUSH_SOFTEN)
DEF_ICON(BRUSH_SUBTRACT)
DEF_ICON(BRUSH_TEXDRAW)
DEF_ICON(BRUSH_TEXFILL)
DEF_ICON(BRUSH_TEXMASK)
DEF_ICON(BRUSH_THUMB)
DEF_ICON(BRUSH_ROTATE)
DEF_ICON(BRUSH_VERTEXDRAW)

	/* Matcaps */
DEF_ICON(MATCAP_01)
DEF_ICON(MATCAP_02)
DEF_ICON(MATCAP_03)
DEF_ICON(MATCAP_04)
DEF_ICON(MATCAP_05)
DEF_ICON(MATCAP_06)
DEF_ICON(MATCAP_07)
DEF_ICON(MATCAP_08)
DEF_ICON(MATCAP_09)
DEF_ICON(MATCAP_10)
DEF_ICON(MATCAP_11)
DEF_ICON(MATCAP_12)
DEF_ICON(MATCAP_13)
DEF_ICON(MATCAP_14)
DEF_ICON(MATCAP_15)
DEF_ICON(MATCAP_16)
DEF_ICON(MATCAP_17)
DEF_ICON(MATCAP_18)
DEF_ICON(MATCAP_19)
DEF_ICON(MATCAP_20)
DEF_ICON(MATCAP_21)
DEF_ICON(MATCAP_22)
DEF_ICON(MATCAP_23)
DEF_ICON(MATCAP_24)

/* grease pencil sculpt */
DEF_ICON(GPBRUSH_SMOOTH)
DEF_ICON(GPBRUSH_THICKNESS)
DEF_ICON(GPBRUSH_STRENGTH)
DEF_ICON(GPBRUSH_GRAB)
DEF_ICON(GPBRUSH_PUSH)
DEF_ICON(GPBRUSH_TWIST)
DEF_ICON(GPBRUSH_PINCH)
DEF_ICON(GPBRUSH_RANDOMIZE)
DEF_ICON(GPBRUSH_CLONE)
DEF_ICON(GPBRUSH_WEIGHT)

DEF_ICON(GPBRUSH_PENCIL)
DEF_ICON(GPBRUSH_PEN)
DEF_ICON(GPBRUSH_INK)
DEF_ICON(GPBRUSH_INKNOISE)
DEF_ICON(GPBRUSH_BLOCK)
DEF_ICON(GPBRUSH_MARKER)
DEF_ICON(GPBRUSH_CUSTOM)
DEF_ICON(GPBRUSH_FILL)
DEF_ICON(GPBRUSH_ERASE_SOFT)
DEF_ICON(GPBRUSH_ERASE_HARD)
DEF_ICON(GPBRUSH_ERASE_STROKE)

/* Vector Icons */
DEF_ICON_VECTOR(SMALL_TRI_RIGHT_VEC)

DEF_ICON_VECTOR(KEYTYPE_KEYFRAME_VEC)
DEF_ICON_VECTOR(KEYTYPE_BREAKDOWN_VEC)
DEF_ICON_VECTOR(KEYTYPE_EXTREME_VEC)
DEF_ICON_VECTOR(KEYTYPE_JITTER_VEC)
DEF_ICON_VECTOR(KEYTYPE_MOVING_HOLD_VEC)

DEF_ICON_VECTOR(COLORSET_01_VEC)
DEF_ICON_VECTOR(COLORSET_02_VEC)
DEF_ICON_VECTOR(COLORSET_03_VEC)
DEF_ICON_VECTOR(COLORSET_04_VEC)
DEF_ICON_VECTOR(COLORSET_05_VEC)
DEF_ICON_VECTOR(COLORSET_06_VEC)
DEF_ICON_VECTOR(COLORSET_07_VEC)
DEF_ICON_VECTOR(COLORSET_08_VEC)
DEF_ICON_VECTOR(COLORSET_09_VEC)
DEF_ICON_VECTOR(COLORSET_10_VEC)
DEF_ICON_VECTOR(COLORSET_11_VEC)
DEF_ICON_VECTOR(COLORSET_12_VEC)
DEF_ICON_VECTOR(COLORSET_13_VEC)
DEF_ICON_VECTOR(COLORSET_14_VEC)
DEF_ICON_VECTOR(COLORSET_15_VEC)
DEF_ICON_VECTOR(COLORSET_16_VEC)
DEF_ICON_VECTOR(COLORSET_17_VEC)
DEF_ICON_VECTOR(COLORSET_18_VEC)
DEF_ICON_VECTOR(COLORSET_19_VEC)
DEF_ICON_VECTOR(COLORSET_20_VEC)

/* Events  */
DEF_ICON(EVENT_A)
DEF_ICON(EVENT_B)
DEF_ICON(EVENT_C)
DEF_ICON(EVENT_D)
DEF_ICON(EVENT_E)
DEF_ICON(EVENT_F)
DEF_ICON(EVENT_G)
DEF_ICON(EVENT_H)
DEF_ICON(EVENT_I)
DEF_ICON(EVENT_J)
DEF_ICON(EVENT_K)
DEF_ICON(EVENT_L)
DEF_ICON(EVENT_M)
DEF_ICON(EVENT_N)
DEF_ICON(EVENT_O)
DEF_ICON(EVENT_P)
DEF_ICON(EVENT_Q)
DEF_ICON(EVENT_R)
DEF_ICON(EVENT_S)
DEF_ICON(EVENT_T)
DEF_ICON(EVENT_U)
DEF_ICON(EVENT_V)
DEF_ICON(EVENT_W)
DEF_ICON(EVENT_X)
DEF_ICON(EVENT_Y)
DEF_ICON(EVENT_Z)
DEF_ICON(EVENT_SHIFT)
DEF_ICON(EVENT_CTRL)
DEF_ICON(EVENT_ALT)
DEF_ICON(EVENT_OS)
DEF_ICON(EVENT_F1)
DEF_ICON(EVENT_F2)
DEF_ICON(EVENT_F3)
DEF_ICON(EVENT_F4)
DEF_ICON(EVENT_F5)
DEF_ICON(EVENT_F6)
DEF_ICON(EVENT_F7)
DEF_ICON(EVENT_F8)
DEF_ICON(EVENT_F9)
DEF_ICON(EVENT_F10)
DEF_ICON(EVENT_F11)
DEF_ICON(EVENT_F12)
DEF_ICON(EVENT_ESC)
DEF_ICON(EVENT_TAB)
DEF_ICON(EVENT_PAGEUP)
DEF_ICON(EVENT_PAGEDOWN)
DEF_ICON(EVENT_HOME)
DEF_ICON(EVENT_END)
DEF_ICON(EVENT_RETURN)
/* add as needed. */
