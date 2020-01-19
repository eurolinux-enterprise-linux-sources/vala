/* valaccodeinvalidexpression.c generated by valac, the Vala compiler
 * generated from valaccodeinvalidexpression.vala, do not modify */

/* valaccodeinvalidexpression.vala
 *
 * Copyright (C) 2009  Jürg Billeter
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



static gpointer vala_ccode_invalid_expression_parent_class = NULL;

static void vala_ccode_invalid_expression_real_write (ValaCCodeNode* base,
                                               ValaCCodeWriter* writer);


ValaCCodeInvalidExpression*
vala_ccode_invalid_expression_construct (GType object_type)
{
	ValaCCodeInvalidExpression* self = NULL;
	self = (ValaCCodeInvalidExpression*) vala_ccode_expression_construct (object_type);
	return self;
}


ValaCCodeInvalidExpression*
vala_ccode_invalid_expression_new (void)
{
	return vala_ccode_invalid_expression_construct (VALA_TYPE_CCODE_INVALID_EXPRESSION);
}


static void
vala_ccode_invalid_expression_real_write (ValaCCodeNode* base,
                                          ValaCCodeWriter* writer)
{
	ValaCCodeInvalidExpression * self;
	self = (ValaCCodeInvalidExpression*) base;
	g_return_if_fail (writer != NULL);
	g_assert_not_reached ();
}


static void
vala_ccode_invalid_expression_class_init (ValaCCodeInvalidExpressionClass * klass)
{
	vala_ccode_invalid_expression_parent_class = g_type_class_peek_parent (klass);
	((ValaCCodeNodeClass *) klass)->write = (void (*) (ValaCCodeNode *, ValaCCodeWriter*)) vala_ccode_invalid_expression_real_write;
}


static void
vala_ccode_invalid_expression_instance_init (ValaCCodeInvalidExpression * self)
{
}


/**
 * Represents an invalid expression.
 */
GType
vala_ccode_invalid_expression_get_type (void)
{
	static volatile gsize vala_ccode_invalid_expression_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_invalid_expression_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeInvalidExpressionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_invalid_expression_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeInvalidExpression), 0, (GInstanceInitFunc) vala_ccode_invalid_expression_instance_init, NULL };
		GType vala_ccode_invalid_expression_type_id;
		vala_ccode_invalid_expression_type_id = g_type_register_static (VALA_TYPE_CCODE_EXPRESSION, "ValaCCodeInvalidExpression", &g_define_type_info, 0);
		g_once_init_leave (&vala_ccode_invalid_expression_type_id__volatile, vala_ccode_invalid_expression_type_id);
	}
	return vala_ccode_invalid_expression_type_id__volatile;
}



