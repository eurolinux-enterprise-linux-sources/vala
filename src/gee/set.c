/* set.c generated by valac, the Vala compiler
 * generated from set.vala, do not modify */

/* set.vala
 *
 * Copyright (C) 2007  Jürg Billeter
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.

 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 * Author:
 * 	Jürg Billeter <j@bitron.ch>
 */


#include <glib.h>
#include <glib-object.h>
#include "valagee.h"


struct _ValaSetPrivate {
	GType g_type;
	GBoxedCopyFunc g_dup_func;
	GDestroyNotify g_destroy_func;
};


static gpointer vala_set_parent_class = NULL;

#define VALA_SET_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_SET, ValaSetPrivate))


ValaSet*
vala_set_construct (GType object_type,
                    GType g_type,
                    GBoxedCopyFunc g_dup_func,
                    GDestroyNotify g_destroy_func)
{
	ValaSet* self = NULL;
	self = (ValaSet*) vala_collection_construct (object_type, g_type, (GBoxedCopyFunc) g_dup_func, (GDestroyNotify) g_destroy_func);
	self->priv->g_type = g_type;
	self->priv->g_dup_func = g_dup_func;
	self->priv->g_destroy_func = g_destroy_func;
	return self;
}


static void
vala_set_class_init (ValaSetClass * klass)
{
	vala_set_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (ValaSetPrivate));
}


static void
vala_set_instance_init (ValaSet * self)
{
	self->priv = VALA_SET_GET_PRIVATE (self);
}


/**
 * A set is a collection without duplicates.
 */
GType
vala_set_get_type (void)
{
	static volatile gsize vala_set_type_id__volatile = 0;
	if (g_once_init_enter (&vala_set_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaSetClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_set_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaSet), 0, (GInstanceInitFunc) vala_set_instance_init, NULL };
		GType vala_set_type_id;
		vala_set_type_id = g_type_register_static (VALA_TYPE_COLLECTION, "ValaSet", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&vala_set_type_id__volatile, vala_set_type_id);
	}
	return vala_set_type_id__volatile;
}



