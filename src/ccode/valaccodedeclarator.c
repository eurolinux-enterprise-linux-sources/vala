/* valaccodedeclarator.c generated by valac, the Vala compiler
 * generated from valaccodedeclarator.vala, do not modify */

/* valaccodedeclarator.vala
 *
 * Copyright (C) 2006-2007  Jürg Billeter
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
#include "valaccode.h"



static gpointer vala_ccode_declarator_parent_class = NULL;

static void vala_ccode_declarator_real_write_initialization (ValaCCodeDeclarator* self,
                                                      ValaCCodeWriter* writer);


/**
 * Writes initialization statements for this declarator with the
 * specified C code writer if necessary.
 *
 * @param writer a C code writer
 */
static void
vala_ccode_declarator_real_write_initialization (ValaCCodeDeclarator* self,
                                                 ValaCCodeWriter* writer)
{
	g_return_if_fail (writer != NULL);
}


void
vala_ccode_declarator_write_initialization (ValaCCodeDeclarator* self,
                                            ValaCCodeWriter* writer)
{
	g_return_if_fail (self != NULL);
	VALA_CCODE_DECLARATOR_GET_CLASS (self)->write_initialization (self, writer);
}


ValaCCodeDeclarator*
vala_ccode_declarator_construct (GType object_type)
{
	ValaCCodeDeclarator* self = NULL;
	self = (ValaCCodeDeclarator*) vala_ccode_node_construct (object_type);
	return self;
}


static void
vala_ccode_declarator_class_init (ValaCCodeDeclaratorClass * klass)
{
	vala_ccode_declarator_parent_class = g_type_class_peek_parent (klass);
	((ValaCCodeDeclaratorClass *) klass)->write_initialization = (void (*) (ValaCCodeDeclarator *, ValaCCodeWriter*)) vala_ccode_declarator_real_write_initialization;
}


static void
vala_ccode_declarator_instance_init (ValaCCodeDeclarator * self)
{
}


/**
 * Represents a variable or function pointer declarator in the C code.
 */
GType
vala_ccode_declarator_get_type (void)
{
	static volatile gsize vala_ccode_declarator_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_declarator_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeDeclaratorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_declarator_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeDeclarator), 0, (GInstanceInitFunc) vala_ccode_declarator_instance_init, NULL };
		GType vala_ccode_declarator_type_id;
		vala_ccode_declarator_type_id = g_type_register_static (VALA_TYPE_CCODE_NODE, "ValaCCodeDeclarator", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&vala_ccode_declarator_type_id__volatile, vala_ccode_declarator_type_id);
	}
	return vala_ccode_declarator_type_id__volatile;
}



