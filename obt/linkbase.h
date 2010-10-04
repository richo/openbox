/* -*- indent-tabs-mode: nil; tab-width: 4; c-basic-offset: 4; -*-
 
   obt/linkbase.h for the Openbox window manager
   Copyright (c) 2010        Dana Jansens
 
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.
 
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
 
   See the COPYING file for a copy of the GNU General Public License.
*/

#ifndef __obt_linkbase_h
#define __obt_linkbase_h

struct _ObtPaths;

#include <glib.h>

G_BEGIN_DECLS

typedef struct _ObtLinkBase ObtLinkBase;

/*! Create a new database of ObtLinks.
  @param paths An ObtPaths structure.
  @param locale The value of LC_MESSAGES.
*/
ObtLinkBase* obt_linkbase_new(struct _ObtPaths *paths, const gchar *locale);
void obt_linkbase_ref(ObtLinkBase *lb);
void obt_linkbase_unref(ObtLinkBase *lb);

G_END_DECLS

#endif
