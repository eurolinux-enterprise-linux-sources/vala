/* valathrowstatement.c generated by valac, the Vala compiler
 * generated from valathrowstatement.vala, do not modify */

/* valathrowstatement.vala
 *
 * Copyright (C) 2007-2010  Jürg Billeter
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
#include "vala.h"
#include <valagee.h>
#include <stdlib.h>
#include <string.h>

#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _ValaThrowStatementPrivate {
	ValaExpression* _error_expression;
};


static gpointer vala_throw_statement_parent_class = NULL;
static ValaStatementIface * vala_throw_statement_vala_statement_parent_iface = NULL;

#define VALA_THROW_STATEMENT_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_THROW_STATEMENT, ValaThrowStatementPrivate))
static void vala_throw_statement_real_accept (ValaCodeNode* base,
                                       ValaCodeVisitor* visitor);
static void vala_throw_statement_real_accept_children (ValaCodeNode* base,
                                                ValaCodeVisitor* visitor);
static void vala_throw_statement_real_replace_expression (ValaCodeNode* base,
                                                   ValaExpression* old_node,
                                                   ValaExpression* new_node);
static gboolean vala_throw_statement_real_check (ValaCodeNode* base,
                                          ValaCodeContext* context);
static void vala_throw_statement_real_emit (ValaCodeNode* base,
                                     ValaCodeGenerator* codegen);
static void vala_throw_statement_real_get_defined_variables (ValaCodeNode* base,
                                                      ValaCollection* collection);
static void vala_throw_statement_real_get_used_variables (ValaCodeNode* base,
                                                   ValaCollection* collection);
static void vala_throw_statement_finalize (ValaCodeNode * obj);


/**
 * Creates a new throw statement.
 *
 * @param error_expression the error expression
 * @param source_reference reference to source code
 * @return                 newly created throw statement
 */
ValaThrowStatement*
vala_throw_statement_construct (GType object_type,
                                ValaExpression* error_expression,
                                ValaSourceReference* source_reference)
{
	ValaThrowStatement* self = NULL;
	g_return_val_if_fail (error_expression != NULL, NULL);
	self = (ValaThrowStatement*) vala_code_node_construct (object_type);
	vala_code_node_set_source_reference ((ValaCodeNode*) self, source_reference);
	vala_throw_statement_set_error_expression (self, error_expression);
	return self;
}


ValaThrowStatement*
vala_throw_statement_new (ValaExpression* error_expression,
                          ValaSourceReference* source_reference)
{
	return vala_throw_statement_construct (VALA_TYPE_THROW_STATEMENT, error_expression, source_reference);
}


static void
vala_throw_statement_real_accept (ValaCodeNode* base,
                                  ValaCodeVisitor* visitor)
{
	ValaThrowStatement * self;
	self = (ValaThrowStatement*) base;
	g_return_if_fail (visitor != NULL);
	vala_code_visitor_visit_throw_statement (visitor, self);
}


static void
vala_throw_statement_real_accept_children (ValaCodeNode* base,
                                           ValaCodeVisitor* visitor)
{
	ValaThrowStatement * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaThrowStatement*) base;
	g_return_if_fail (visitor != NULL);
	_tmp0_ = vala_throw_statement_get_error_expression (self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ != NULL) {
		ValaExpression* _tmp2_;
		ValaExpression* _tmp3_;
		ValaExpression* _tmp4_;
		ValaExpression* _tmp5_;
		_tmp2_ = vala_throw_statement_get_error_expression (self);
		_tmp3_ = _tmp2_;
		vala_code_node_accept ((ValaCodeNode*) _tmp3_, visitor);
		_tmp4_ = vala_throw_statement_get_error_expression (self);
		_tmp5_ = _tmp4_;
		vala_code_visitor_visit_end_full_expression (visitor, _tmp5_);
	}
}


static void
vala_throw_statement_real_replace_expression (ValaCodeNode* base,
                                              ValaExpression* old_node,
                                              ValaExpression* new_node)
{
	ValaThrowStatement * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaThrowStatement*) base;
	g_return_if_fail (old_node != NULL);
	g_return_if_fail (new_node != NULL);
	_tmp0_ = vala_throw_statement_get_error_expression (self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ == old_node) {
		vala_throw_statement_set_error_expression (self, new_node);
	}
}


static gboolean
vala_throw_statement_real_check (ValaCodeNode* base,
                                 ValaCodeContext* context)
{
	ValaThrowStatement * self;
	gboolean result = FALSE;
	gboolean _tmp0_;
	gboolean _tmp1_;
	ValaExpression* _tmp4_;
	ValaExpression* _tmp5_;
	ValaSourceReference* _tmp6_;
	ValaSourceReference* _tmp7_;
	ValaErrorType* _tmp8_;
	ValaErrorType* _tmp9_;
	ValaExpression* _tmp10_;
	ValaExpression* _tmp11_;
	ValaDataType* _tmp12_;
	ValaDataType* _tmp13_;
	ValaExpression* _tmp14_;
	ValaExpression* _tmp15_;
	ValaDataType* error_type = NULL;
	ValaExpression* _tmp42_;
	ValaExpression* _tmp43_;
	ValaDataType* _tmp44_;
	ValaDataType* _tmp45_;
	ValaDataType* _tmp46_;
	ValaDataType* _tmp47_;
	ValaSourceReference* _tmp48_;
	ValaSourceReference* _tmp49_;
	ValaDataType* _tmp50_;
	gboolean _tmp51_;
	gboolean _tmp52_;
	self = (ValaThrowStatement*) base;
	g_return_val_if_fail (context != NULL, FALSE);
	_tmp0_ = vala_code_node_get_checked ((ValaCodeNode*) self);
	_tmp1_ = _tmp0_;
	if (_tmp1_) {
		gboolean _tmp2_;
		gboolean _tmp3_;
		_tmp2_ = vala_code_node_get_error ((ValaCodeNode*) self);
		_tmp3_ = _tmp2_;
		result = !_tmp3_;
		return result;
	}
	vala_code_node_set_checked ((ValaCodeNode*) self, TRUE);
	_tmp4_ = vala_throw_statement_get_error_expression (self);
	_tmp5_ = _tmp4_;
	_tmp6_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp7_ = _tmp6_;
	_tmp8_ = vala_error_type_new (NULL, NULL, _tmp7_);
	_tmp9_ = _tmp8_;
	vala_expression_set_target_type (_tmp5_, (ValaDataType*) _tmp9_);
	_vala_code_node_unref0 (_tmp9_);
	_tmp10_ = vala_throw_statement_get_error_expression (self);
	_tmp11_ = _tmp10_;
	_tmp12_ = vala_expression_get_target_type (_tmp11_);
	_tmp13_ = _tmp12_;
	vala_data_type_set_value_owned (_tmp13_, TRUE);
	_tmp14_ = vala_throw_statement_get_error_expression (self);
	_tmp15_ = _tmp14_;
	if (_tmp15_ != NULL) {
		ValaExpression* _tmp16_;
		ValaExpression* _tmp17_;
		ValaExpression* _tmp18_;
		ValaExpression* _tmp19_;
		ValaDataType* _tmp20_;
		ValaDataType* _tmp21_;
		ValaExpression* _tmp26_;
		ValaExpression* _tmp27_;
		ValaDataType* _tmp28_;
		ValaDataType* _tmp29_;
		_tmp16_ = vala_throw_statement_get_error_expression (self);
		_tmp17_ = _tmp16_;
		if (!vala_code_node_check ((ValaCodeNode*) _tmp17_, context)) {
			vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
			result = FALSE;
			return result;
		}
		_tmp18_ = vala_throw_statement_get_error_expression (self);
		_tmp19_ = _tmp18_;
		_tmp20_ = vala_expression_get_value_type (_tmp19_);
		_tmp21_ = _tmp20_;
		if (_tmp21_ == NULL) {
			ValaExpression* _tmp22_;
			ValaExpression* _tmp23_;
			ValaSourceReference* _tmp24_;
			ValaSourceReference* _tmp25_;
			_tmp22_ = vala_throw_statement_get_error_expression (self);
			_tmp23_ = _tmp22_;
			_tmp24_ = vala_code_node_get_source_reference ((ValaCodeNode*) _tmp23_);
			_tmp25_ = _tmp24_;
			vala_report_error (_tmp25_, "invalid error expression");
			vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
			result = FALSE;
			return result;
		}
		_tmp26_ = vala_throw_statement_get_error_expression (self);
		_tmp27_ = _tmp26_;
		_tmp28_ = vala_expression_get_value_type (_tmp27_);
		_tmp29_ = _tmp28_;
		if (!G_TYPE_CHECK_INSTANCE_TYPE (_tmp29_, VALA_TYPE_ERROR_TYPE)) {
			ValaExpression* _tmp30_;
			ValaExpression* _tmp31_;
			ValaSourceReference* _tmp32_;
			ValaSourceReference* _tmp33_;
			ValaExpression* _tmp34_;
			ValaExpression* _tmp35_;
			ValaDataType* _tmp36_;
			ValaDataType* _tmp37_;
			gchar* _tmp38_;
			gchar* _tmp39_;
			gchar* _tmp40_;
			gchar* _tmp41_;
			_tmp30_ = vala_throw_statement_get_error_expression (self);
			_tmp31_ = _tmp30_;
			_tmp32_ = vala_code_node_get_source_reference ((ValaCodeNode*) _tmp31_);
			_tmp33_ = _tmp32_;
			_tmp34_ = vala_throw_statement_get_error_expression (self);
			_tmp35_ = _tmp34_;
			_tmp36_ = vala_expression_get_value_type (_tmp35_);
			_tmp37_ = _tmp36_;
			_tmp38_ = vala_code_node_to_string ((ValaCodeNode*) _tmp37_);
			_tmp39_ = _tmp38_;
			_tmp40_ = g_strdup_printf ("`%s' is not an error type", _tmp39_);
			_tmp41_ = _tmp40_;
			vala_report_error (_tmp33_, _tmp41_);
			_g_free0 (_tmp41_);
			_g_free0 (_tmp39_);
			vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
			result = FALSE;
			return result;
		}
	}
	_tmp42_ = vala_throw_statement_get_error_expression (self);
	_tmp43_ = _tmp42_;
	_tmp44_ = vala_expression_get_value_type (_tmp43_);
	_tmp45_ = _tmp44_;
	_tmp46_ = vala_data_type_copy (_tmp45_);
	error_type = _tmp46_;
	_tmp47_ = error_type;
	_tmp48_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp49_ = _tmp48_;
	vala_code_node_set_source_reference ((ValaCodeNode*) _tmp47_, _tmp49_);
	_tmp50_ = error_type;
	vala_code_node_add_error_type ((ValaCodeNode*) self, _tmp50_);
	_tmp51_ = vala_code_node_get_error ((ValaCodeNode*) self);
	_tmp52_ = _tmp51_;
	result = !_tmp52_;
	_vala_code_node_unref0 (error_type);
	return result;
}


static void
vala_throw_statement_real_emit (ValaCodeNode* base,
                                ValaCodeGenerator* codegen)
{
	ValaThrowStatement * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaThrowStatement*) base;
	g_return_if_fail (codegen != NULL);
	_tmp0_ = vala_throw_statement_get_error_expression (self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ != NULL) {
		ValaExpression* _tmp2_;
		ValaExpression* _tmp3_;
		ValaExpression* _tmp4_;
		ValaExpression* _tmp5_;
		_tmp2_ = vala_throw_statement_get_error_expression (self);
		_tmp3_ = _tmp2_;
		vala_code_node_emit ((ValaCodeNode*) _tmp3_, codegen);
		_tmp4_ = vala_throw_statement_get_error_expression (self);
		_tmp5_ = _tmp4_;
		vala_code_visitor_visit_end_full_expression ((ValaCodeVisitor*) codegen, _tmp5_);
	}
	vala_code_visitor_visit_throw_statement ((ValaCodeVisitor*) codegen, self);
}


static void
vala_throw_statement_real_get_defined_variables (ValaCodeNode* base,
                                                 ValaCollection* collection)
{
	ValaThrowStatement * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaThrowStatement*) base;
	g_return_if_fail (collection != NULL);
	_tmp0_ = vala_throw_statement_get_error_expression (self);
	_tmp1_ = _tmp0_;
	vala_code_node_get_defined_variables ((ValaCodeNode*) _tmp1_, collection);
}


static void
vala_throw_statement_real_get_used_variables (ValaCodeNode* base,
                                              ValaCollection* collection)
{
	ValaThrowStatement * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaThrowStatement*) base;
	g_return_if_fail (collection != NULL);
	_tmp0_ = vala_throw_statement_get_error_expression (self);
	_tmp1_ = _tmp0_;
	vala_code_node_get_used_variables ((ValaCodeNode*) _tmp1_, collection);
}


ValaExpression*
vala_throw_statement_get_error_expression (ValaThrowStatement* self)
{
	ValaExpression* result;
	ValaExpression* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_error_expression;
	result = _tmp0_;
	return result;
}


static gpointer
_vala_code_node_ref0 (gpointer self)
{
	return self ? vala_code_node_ref (self) : NULL;
}


void
vala_throw_statement_set_error_expression (ValaThrowStatement* self,
                                           ValaExpression* value)
{
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_code_node_ref0 (value);
	_vala_code_node_unref0 (self->priv->_error_expression);
	self->priv->_error_expression = _tmp0_;
	_tmp1_ = self->priv->_error_expression;
	if (_tmp1_ != NULL) {
		ValaExpression* _tmp2_;
		_tmp2_ = self->priv->_error_expression;
		vala_code_node_set_parent_node ((ValaCodeNode*) _tmp2_, (ValaCodeNode*) self);
	}
}


static void
vala_throw_statement_class_init (ValaThrowStatementClass * klass)
{
	vala_throw_statement_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_throw_statement_finalize;
	g_type_class_add_private (klass, sizeof (ValaThrowStatementPrivate));
	((ValaCodeNodeClass *) klass)->accept = (void (*) (ValaCodeNode *, ValaCodeVisitor*)) vala_throw_statement_real_accept;
	((ValaCodeNodeClass *) klass)->accept_children = (void (*) (ValaCodeNode *, ValaCodeVisitor*)) vala_throw_statement_real_accept_children;
	((ValaCodeNodeClass *) klass)->replace_expression = (void (*) (ValaCodeNode *, ValaExpression*, ValaExpression*)) vala_throw_statement_real_replace_expression;
	((ValaCodeNodeClass *) klass)->check = (gboolean (*) (ValaCodeNode *, ValaCodeContext*)) vala_throw_statement_real_check;
	((ValaCodeNodeClass *) klass)->emit = (void (*) (ValaCodeNode *, ValaCodeGenerator*)) vala_throw_statement_real_emit;
	((ValaCodeNodeClass *) klass)->get_defined_variables = (void (*) (ValaCodeNode *, ValaCollection*)) vala_throw_statement_real_get_defined_variables;
	((ValaCodeNodeClass *) klass)->get_used_variables = (void (*) (ValaCodeNode *, ValaCollection*)) vala_throw_statement_real_get_used_variables;
}


static void
vala_throw_statement_vala_statement_interface_init (ValaStatementIface * iface)
{
	vala_throw_statement_vala_statement_parent_iface = g_type_interface_peek_parent (iface);
}


static void
vala_throw_statement_instance_init (ValaThrowStatement * self)
{
	self->priv = VALA_THROW_STATEMENT_GET_PRIVATE (self);
}


static void
vala_throw_statement_finalize (ValaCodeNode * obj)
{
	ValaThrowStatement * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_THROW_STATEMENT, ValaThrowStatement);
	_vala_code_node_unref0 (self->priv->_error_expression);
	VALA_CODE_NODE_CLASS (vala_throw_statement_parent_class)->finalize (obj);
}


/**
 * Represents a throw statement in the source code.
 */
GType
vala_throw_statement_get_type (void)
{
	static volatile gsize vala_throw_statement_type_id__volatile = 0;
	if (g_once_init_enter (&vala_throw_statement_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaThrowStatementClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_throw_statement_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaThrowStatement), 0, (GInstanceInitFunc) vala_throw_statement_instance_init, NULL };
		static const GInterfaceInfo vala_statement_info = { (GInterfaceInitFunc) vala_throw_statement_vala_statement_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType vala_throw_statement_type_id;
		vala_throw_statement_type_id = g_type_register_static (VALA_TYPE_CODE_NODE, "ValaThrowStatement", &g_define_type_info, 0);
		g_type_add_interface_static (vala_throw_statement_type_id, VALA_TYPE_STATEMENT, &vala_statement_info);
		g_once_init_leave (&vala_throw_statement_type_id__volatile, vala_throw_statement_type_id);
	}
	return vala_throw_statement_type_id__volatile;
}



