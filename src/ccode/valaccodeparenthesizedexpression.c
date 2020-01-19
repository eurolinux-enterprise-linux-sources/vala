/* valaccodeparenthesizedexpression.c generated by valac, the Vala compiler
 * generated from valaccodeparenthesizedexpression.vala, do not modify */

/* valaccodeparenthesizedexpression.vala
 *
 * Copyright (C) 2006  Jürg Billeter
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

#define _vala_ccode_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_ccode_node_unref (var), NULL)))

struct _ValaCCodeParenthesizedExpressionPrivate {
	ValaCCodeExpression* _inner;
};


static gpointer vala_ccode_parenthesized_expression_parent_class = NULL;

#define VALA_CCODE_PARENTHESIZED_EXPRESSION_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_CCODE_PARENTHESIZED_EXPRESSION, ValaCCodeParenthesizedExpressionPrivate))
static void vala_ccode_parenthesized_expression_real_write (ValaCCodeNode* base,
                                                     ValaCCodeWriter* writer);
static void vala_ccode_parenthesized_expression_finalize (ValaCCodeNode * obj);


ValaCCodeParenthesizedExpression*
vala_ccode_parenthesized_expression_construct (GType object_type,
                                               ValaCCodeExpression* expr)
{
	ValaCCodeParenthesizedExpression* self = NULL;
	g_return_val_if_fail (expr != NULL, NULL);
	self = (ValaCCodeParenthesizedExpression*) vala_ccode_expression_construct (object_type);
	vala_ccode_parenthesized_expression_set_inner (self, expr);
	return self;
}


ValaCCodeParenthesizedExpression*
vala_ccode_parenthesized_expression_new (ValaCCodeExpression* expr)
{
	return vala_ccode_parenthesized_expression_construct (VALA_TYPE_CCODE_PARENTHESIZED_EXPRESSION, expr);
}


static void
vala_ccode_parenthesized_expression_real_write (ValaCCodeNode* base,
                                                ValaCCodeWriter* writer)
{
	ValaCCodeParenthesizedExpression * self;
	ValaCCodeExpression* _tmp0_;
	self = (ValaCCodeParenthesizedExpression*) base;
	g_return_if_fail (writer != NULL);
	vala_ccode_writer_write_string (writer, "(");
	_tmp0_ = self->priv->_inner;
	vala_ccode_node_write ((ValaCCodeNode*) _tmp0_, writer);
	vala_ccode_writer_write_string (writer, ")");
}


ValaCCodeExpression*
vala_ccode_parenthesized_expression_get_inner (ValaCCodeParenthesizedExpression* self)
{
	ValaCCodeExpression* result;
	ValaCCodeExpression* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_inner;
	result = _tmp0_;
	return result;
}


static gpointer
_vala_ccode_node_ref0 (gpointer self)
{
	return self ? vala_ccode_node_ref (self) : NULL;
}


void
vala_ccode_parenthesized_expression_set_inner (ValaCCodeParenthesizedExpression* self,
                                               ValaCCodeExpression* value)
{
	ValaCCodeExpression* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_ccode_node_ref0 (value);
	_vala_ccode_node_unref0 (self->priv->_inner);
	self->priv->_inner = _tmp0_;
}


static void
vala_ccode_parenthesized_expression_class_init (ValaCCodeParenthesizedExpressionClass * klass)
{
	vala_ccode_parenthesized_expression_parent_class = g_type_class_peek_parent (klass);
	((ValaCCodeNodeClass *) klass)->finalize = vala_ccode_parenthesized_expression_finalize;
	g_type_class_add_private (klass, sizeof (ValaCCodeParenthesizedExpressionPrivate));
	((ValaCCodeNodeClass *) klass)->write = (void (*) (ValaCCodeNode *, ValaCCodeWriter*)) vala_ccode_parenthesized_expression_real_write;
}


static void
vala_ccode_parenthesized_expression_instance_init (ValaCCodeParenthesizedExpression * self)
{
	self->priv = VALA_CCODE_PARENTHESIZED_EXPRESSION_GET_PRIVATE (self);
}


static void
vala_ccode_parenthesized_expression_finalize (ValaCCodeNode * obj)
{
	ValaCCodeParenthesizedExpression * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_CCODE_PARENTHESIZED_EXPRESSION, ValaCCodeParenthesizedExpression);
	_vala_ccode_node_unref0 (self->priv->_inner);
	VALA_CCODE_NODE_CLASS (vala_ccode_parenthesized_expression_parent_class)->finalize (obj);
}


/**
 * Represents a parenthesized expression in the C code.
 */
GType
vala_ccode_parenthesized_expression_get_type (void)
{
	static volatile gsize vala_ccode_parenthesized_expression_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_parenthesized_expression_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeParenthesizedExpressionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_parenthesized_expression_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeParenthesizedExpression), 0, (GInstanceInitFunc) vala_ccode_parenthesized_expression_instance_init, NULL };
		GType vala_ccode_parenthesized_expression_type_id;
		vala_ccode_parenthesized_expression_type_id = g_type_register_static (VALA_TYPE_CCODE_EXPRESSION, "ValaCCodeParenthesizedExpression", &g_define_type_info, 0);
		g_once_init_leave (&vala_ccode_parenthesized_expression_type_id__volatile, vala_ccode_parenthesized_expression_type_id);
	}
	return vala_ccode_parenthesized_expression_type_id__volatile;
}



