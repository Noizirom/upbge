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
 * The Original Code is Copyright (C) 2001-2002 by NaN Holding BV.
 * All rights reserved.
 *
 * The Original Code is: all of this file.
 *
 * Contributor(s): none yet.
 *
 * ***** END GPL LICENSE BLOCK *****
 */

/** \file gameengine/Ketsji/KX_LightIpoSGController.cpp
 *  \ingroup ketsji
 */

#include "KX_LightIpoSGController.h"
#include "KX_Globals.h"
#include "KX_Light.h"
#include "KX_ScalarInterpolator.h"
#include "RAS_ILightObject.h"

extern "C" {
#include "depsgraph/DEG_depsgraph_query.h"
#include "DNA_light_types.h"
#include "WM_api.h"
#include "WM_types.h"
}

#if defined(_WIN64)
typedef unsigned __int64 uint_ptr;
#else
typedef unsigned long uint_ptr;
#endif

bool KX_LightIpoSGController::Update(double currentTime)
{
  if (m_modified) {
    T_InterpolatorList::iterator i;
    for (i = m_interpolators.begin(); !(i == m_interpolators.end()); ++i) {
      (*i)->Execute(m_ipotime);  // currentTime);
    }

    RAS_ILightObject *lightobj;

    SG_Node *ob = (SG_Node *)m_node;
    KX_LightObject* kxlight = (KX_LightObject*) ob->GetSGClientObject();
    lightobj = kxlight->GetLightData();
    KX_GameObject *kxobLight = (KX_GameObject *)ob->GetSGClientObject();
    Object *obLight = kxobLight->GetBlenderObject();
    Light *la = (Light *)obLight->data;

    if (m_modify_energy) {
      lightobj->m_energy = m_energy;
      la->energy = m_energy;
      DEG_id_tag_update(&la->id, 0);
      WM_main_add_notifier(NC_LAMP | ND_LIGHTING_DRAW, la);
      KX_GetActiveScene()->ResetTaaSamples();
    }

    if (m_modify_color) {
      lightobj->m_color[0] = m_col_rgb[0];
      lightobj->m_color[1] = m_col_rgb[1];
      lightobj->m_color[2] = m_col_rgb[2];
      la->r = m_col_rgb[0];
      la->g = m_col_rgb[1];
      la->b = m_col_rgb[2];
      DEG_id_tag_update(&la->id, 0);
      WM_main_add_notifier(NC_LAMP | ND_LIGHTING_DRAW, la);
      KX_GetActiveScene()->ResetTaaSamples();
    }

    if (m_modify_dist) {
      lightobj->m_distance = m_dist;
      la->dist = m_dist;
      DEG_id_tag_update(&la->id, 0);
      WM_main_add_notifier(NC_LAMP | ND_LIGHTING_DRAW, la);
      KX_GetActiveScene()->ResetTaaSamples();
    }

    m_modified = false;
  }
  return false;
}

void KX_LightIpoSGController::AddInterpolator(KX_IInterpolator *interp)
{
  this->m_interpolators.push_back(interp);
}

SG_Controller *KX_LightIpoSGController::GetReplica(class SG_Node *destnode)
{
  KX_LightIpoSGController *iporeplica = new KX_LightIpoSGController(*this);
  // clear object that ipo acts on
  iporeplica->ClearNode();

  // dirty hack, ask Gino for a better solution in the ipo implementation
  // hacken en zagen, in what we call datahiding, not written for replication :(

  T_InterpolatorList oldlist = m_interpolators;
  iporeplica->m_interpolators.clear();

  T_InterpolatorList::iterator i;
  for (i = oldlist.begin(); !(i == oldlist.end()); ++i) {
    KX_ScalarInterpolator *copyipo = new KX_ScalarInterpolator(*((KX_ScalarInterpolator *)*i));
    iporeplica->AddInterpolator(copyipo);

    MT_Scalar *scaal = ((KX_ScalarInterpolator *)*i)->GetTarget();
    uint_ptr orgbase = (uint_ptr)this;
    uint_ptr orgloc = (uint_ptr)scaal;
    uint_ptr offset = orgloc - orgbase;
    uint_ptr newaddrbase = (uint_ptr)iporeplica + offset;
    MT_Scalar *blaptr = (MT_Scalar *)newaddrbase;
    copyipo->SetNewTarget((MT_Scalar *)blaptr);
  }

  return iporeplica;
}

KX_LightIpoSGController::~KX_LightIpoSGController()
{

  T_InterpolatorList::iterator i;
  for (i = m_interpolators.begin(); !(i == m_interpolators.end()); ++i) {
    delete (*i);
  }
}
