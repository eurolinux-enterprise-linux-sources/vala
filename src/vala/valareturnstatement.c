/* valareturnstatement.c generated by valac, the Vala compiler
 * generated from valareturnstatement.vala, do not modify */

/* valareturnstatement.vala
 *
 * Copyright (C) 2006-2010  Jürg Billeter
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
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))

struct _ValaReturnStatementPrivate {
	ValaExpression* _return_expression;
};


static gpointer vala_return_statement_parent_class = NULL;
static ValaStatementIface * vala_return_statement_vala_statement_parent_iface = NULL;

#define VALA_RETURN_STATEMENT_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_RETURN_STATEMENT, ValaReturnStatementPrivate))
static void vala_return_statement_real_accept (ValaCodeNode* base,
                                        ValaCodeVisitor* visitor);
static void vala_return_statement_real_accept_children (ValaCodeNode* base,
                                                 ValaCodeVisitor* visitor);
static void vala_return_statement_real_replace_expression (ValaCodeNode* base,
                                                    ValaExpression* old_node,
                                                    ValaExpression* new_node);
static gboolean vala_return_statement_real_check (ValaCodeNode* base,
                                           ValaCodeContext* context);
static void vala_return_statement_real_emit (ValaCodeNode* base,
                                      ValaCodeGenerator* codegen);
static void vala_return_statement_real_get_defined_variables (ValaCodeNode* base,
                                                       ValaCollection* collection);
static void vala_return_statement_real_get_used_variables (ValaCodeNode* base,
                                                    ValaCollection* collection);
static void vala_return_statement_finalize (ValaCodeNode * obj);


/**
 * Creates a new return statement.
 *
 * @param return_expression the return expression
 * @param source_reference  reference to source code
 * @return                  newly created return statement
 */
ValaReturnStatement*
vala_return_statement_construct (GType object_type,
                                 ValaExpression* return_expression,
                                 ValaSourceReference* source_reference)
{
	ValaReturnStatement* self = NULL;
	self = (ValaReturnStatement*) vala_code_node_construct (object_type);
	vala_code_node_set_source_reference ((ValaCodeNode*) self, source_reference);
	vala_return_statement_set_return_expression (self, return_expression);
	return self;
}


ValaReturnStatement*
vala_return_statement_new (ValaExpression* return_expression,
                           ValaSourceReference* source_reference)
{
	return vala_return_statement_construct (VALA_TYPE_RETURN_STATEMENT, return_expression, source_reference);
}


static void
vala_return_statement_real_accept (ValaCodeNode* base,
                                   ValaCodeVisitor* visitor)
{
	ValaReturnStatement * self;
	self = (ValaReturnStatement*) base;
	g_return_if_fail (visitor != NULL);
	vala_code_visitor_visit_return_statement (visitor, self);
}


static void
vala_return_statement_real_accept_children (ValaCodeNode* base,
                                            ValaCodeVisitor* visitor)
{
	ValaReturnStatement * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaReturnStatement*) base;
	g_return_if_fail (visitor != NULL);
	_tmp0_ = vala_return_statement_get_return_expression (self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ != NULL) {
		ValaExpression* _tmp2_;
		ValaExpression* _tmp3_;
		ValaExpression* _tmp4_;
		ValaExpression* _tmp5_;
		_tmp2_ = vala_return_statement_get_return_expression (self);
		_tmp3_ = _tmp2_;
		vala_code_node_accept ((ValaCodeNode*) _tmp3_, visitor);
		_tmp4_ = vala_return_statement_get_return_expression (self);
		_tmp5_ = _tmp4_;
		vala_code_visitor_visit_end_full_expression (visitor, _tmp5_);
	}
}


static void
vala_return_statement_real_replace_expression (ValaCodeNode* base,
                                               ValaExpression* old_node,
                                               ValaExpression* new_node)
{
	ValaReturnStatement * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaReturnStatement*) base;
	g_return_if_fail (old_node != NULL);
	g_return_if_fail (new_node != NULL);
	_tmp0_ = vala_return_statement_get_return_expression (self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ == old_node) {
		vala_return_statement_set_return_expression (self, new_node);
	}
}


static gpointer
_vala_code_node_ref0 (gpointer self)
{
	return self ? vala_code_node_ref (self) : NULL;
}


static gboolean
vala_return_statement_real_check (ValaCodeNode* base,
                                  ValaCodeContext* context)
{
	ValaReturnStatement * self;
	gboolean result = FALSE;
	gboolean _tmp0_;
	gboolean _tmp1_;
	ValaExpression* _tmp4_;
	ValaExpression* _tmp5_;
	gboolean _tmp12_ = FALSE;
	ValaExpression* _tmp13_;
	ValaExpression* _tmp14_;
	ValaSemanticAnalyzer* _tmp17_;
	ValaSemanticAnalyzer* _tmp18_;
	ValaDataType* _tmp19_;
	ValaDataType* _tmp20_;
	ValaExpression* _tmp23_;
	ValaExpression* _tmp24_;
	ValaSemanticAnalyzer* _tmp33_;
	ValaSemanticAnalyzer* _tmp34_;
	ValaDataType* _tmp35_;
	ValaDataType* _tmp36_;
	ValaExpression* _tmp39_;
	ValaExpression* _tmp40_;
	ValaDataType* _tmp41_;
	ValaDataType* _tmp42_;
	ValaExpression* _tmp45_;
	ValaExpression* _tmp46_;
	ValaDataType* _tmp47_;
	ValaDataType* _tmp48_;
	ValaSemanticAnalyzer* _tmp49_;
	ValaSemanticAnalyzer* _tmp50_;
	ValaDataType* _tmp51_;
	ValaDataType* _tmp52_;
	gboolean _tmp69_ = FALSE;
	ValaExpression* _tmp70_;
	ValaExpression* _tmp71_;
	ValaDataType* _tmp72_;
	ValaDataType* _tmp73_;
	ValaLocalVariable* local = NULL;
	ValaExpression* _tmp82_;
	ValaExpression* _tmp83_;
	ValaSymbol* _tmp84_;
	ValaSymbol* _tmp85_;
	ValaLocalVariable* _tmp86_;
	gboolean _tmp87_ = FALSE;
	gboolean _tmp88_ = FALSE;
	ValaLocalVariable* _tmp89_;
	gboolean _tmp101_ = FALSE;
	ValaExpression* _tmp102_;
	ValaExpression* _tmp103_;
	ValaExpression* _tmp120_;
	ValaExpression* _tmp121_;
	ValaList* _tmp122_;
	ValaList* _tmp123_;
	gboolean _tmp124_;
	gboolean _tmp125_;
	self = (ValaReturnStatement*) base;
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
	_tmp4_ = vala_return_statement_get_return_expression (self);
	_tmp5_ = _tmp4_;
	if (_tmp5_ != NULL) {
		ValaExpression* _tmp6_;
		ValaExpression* _tmp7_;
		ValaSemanticAnalyzer* _tmp8_;
		ValaSemanticAnalyzer* _tmp9_;
		ValaDataType* _tmp10_;
		ValaDataType* _tmp11_;
		_tmp6_ = vala_return_statement_get_return_expression (self);
		_tmp7_ = _tmp6_;
		_tmp8_ = vala_code_context_get_analyzer (context);
		_tmp9_ = _tmp8_;
		_tmp10_ = vala_semantic_analyzer_get_current_return_type (_tmp9_);
		_tmp11_ = _tmp10_;
		vala_expression_set_target_type (_tmp7_, _tmp11_);
	}
	_tmp13_ = vala_return_statement_get_return_expression (self);
	_tmp14_ = _tmp13_;
	if (_tmp14_ != NULL) {
		ValaExpression* _tmp15_;
		ValaExpression* _tmp16_;
		_tmp15_ = vala_return_statement_get_return_expression (self);
		_tmp16_ = _tmp15_;
		_tmp12_ = !vala_code_node_check ((ValaCodeNode*) _tmp16_, context);
	} else {
		_tmp12_ = FALSE;
	}
	if (_tmp12_) {
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		result = FALSE;
		return result;
	}
	_tmp17_ = vala_code_context_get_analyzer (context);
	_tmp18_ = _tmp17_;
	_tmp19_ = vala_semantic_analyzer_get_current_return_type (_tmp18_);
	_tmp20_ = _tmp19_;
	if (_tmp20_ == NULL) {
		ValaSourceReference* _tmp21_;
		ValaSourceReference* _tmp22_;
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		_tmp21_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp22_ = _tmp21_;
		vala_report_error (_tmp22_, "Return not allowed in this context");
		result = FALSE;
		return result;
	}
	_tmp23_ = vala_return_statement_get_return_expression (self);
	_tmp24_ = _tmp23_;
	if (_tmp24_ == NULL) {
		ValaSemanticAnalyzer* _tmp25_;
		ValaSemanticAnalyzer* _tmp26_;
		ValaDataType* _tmp27_;
		ValaDataType* _tmp28_;
		gboolean _tmp31_;
		gboolean _tmp32_;
		_tmp25_ = vala_code_context_get_analyzer (context);
		_tmp26_ = _tmp25_;
		_tmp27_ = vala_semantic_analyzer_get_current_return_type (_tmp26_);
		_tmp28_ = _tmp27_;
		if (!G_TYPE_CHECK_INSTANCE_TYPE (_tmp28_, VALA_TYPE_VOID_TYPE)) {
			ValaSourceReference* _tmp29_;
			ValaSourceReference* _tmp30_;
			vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
			_tmp29_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
			_tmp30_ = _tmp29_;
			vala_report_error (_tmp30_, "Return without value in non-void function");
		}
		_tmp31_ = vala_code_node_get_error ((ValaCodeNode*) self);
		_tmp32_ = _tmp31_;
		result = !_tmp32_;
		return result;
	}
	_tmp33_ = vala_code_context_get_analyzer (context);
	_tmp34_ = _tmp33_;
	_tmp35_ = vala_semantic_analyzer_get_current_return_type (_tmp34_);
	_tmp36_ = _tmp35_;
	if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp36_, VALA_TYPE_VOID_TYPE)) {
		ValaSourceReference* _tmp37_;
		ValaSourceReference* _tmp38_;
		_tmp37_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp38_ = _tmp37_;
		vala_report_error (_tmp38_, "Return with value in void function");
		result = FALSE;
		return result;
	}
	_tmp39_ = vala_return_statement_get_return_expression (self);
	_tmp40_ = _tmp39_;
	_tmp41_ = vala_expression_get_value_type (_tmp40_);
	_tmp42_ = _tmp41_;
	if (_tmp42_ == NULL) {
		ValaSourceReference* _tmp43_;
		ValaSourceReference* _tmp44_;
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		_tmp43_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp44_ = _tmp43_;
		vala_report_error (_tmp44_, "Invalid expression in return value");
		result = FALSE;
		return result;
	}
	_tmp45_ = vala_return_statement_get_return_expression (self);
	_tmp46_ = _tmp45_;
	_tmp47_ = vala_expression_get_value_type (_tmp46_);
	_tmp48_ = _tmp47_;
	_tmp49_ = vala_code_context_get_analyzer (context);
	_tmp50_ = _tmp49_;
	_tmp51_ = vala_semantic_analyzer_get_current_return_type (_tmp50_);
	_tmp52_ = _tmp51_;
	if (!vala_data_type_compatible (_tmp48_, _tmp52_)) {
		ValaSourceReference* _tmp53_;
		ValaSourceReference* _tmp54_;
		ValaExpression* _tmp55_;
		ValaExpression* _tmp56_;
		ValaDataType* _tmp57_;
		ValaDataType* _tmp58_;
		gchar* _tmp59_;
		gchar* _tmp60_;
		ValaSemanticAnalyzer* _tmp61_;
		ValaSemanticAnalyzer* _tmp62_;
		ValaDataType* _tmp63_;
		ValaDataType* _tmp64_;
		gchar* _tmp65_;
		gchar* _tmp66_;
		gchar* _tmp67_;
		gchar* _tmp68_;
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		_tmp53_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp54_ = _tmp53_;
		_tmp55_ = vala_return_statement_get_return_expression (self);
		_tmp56_ = _tmp55_;
		_tmp57_ = vala_expression_get_value_type (_tmp56_);
		_tmp58_ = _tmp57_;
		_tmp59_ = vala_code_node_to_string ((ValaCodeNode*) _tmp58_);
		_tmp60_ = _tmp59_;
		_tmp61_ = vala_code_context_get_analyzer (context);
		_tmp62_ = _tmp61_;
		_tmp63_ = vala_semantic_analyzer_get_current_return_type (_tmp62_);
		_tmp64_ = _tmp63_;
		_tmp65_ = vala_code_node_to_string ((ValaCodeNode*) _tmp64_);
		_tmp66_ = _tmp65_;
		_tmp67_ = g_strdup_printf ("Return: Cannot convert from `%s' to `%s'", _tmp60_, _tmp66_);
		_tmp68_ = _tmp67_;
		vala_report_error (_tmp54_, _tmp68_);
		_g_free0 (_tmp68_);
		_g_free0 (_tmp66_);
		_g_free0 (_tmp60_);
		result = FALSE;
		return result;
	}
	_tmp70_ = vala_return_statement_get_return_expression (self);
	_tmp71_ = _tmp70_;
	_tmp72_ = vala_expression_get_value_type (_tmp71_);
	_tmp73_ = _tmp72_;
	if (vala_data_type_is_disposable (_tmp73_)) {
		ValaSemanticAnalyzer* _tmp74_;
		ValaSemanticAnalyzer* _tmp75_;
		ValaDataType* _tmp76_;
		ValaDataType* _tmp77_;
		gboolean _tmp78_;
		gboolean _tmp79_;
		_tmp74_ = vala_code_context_get_analyzer (context);
		_tmp75_ = _tmp74_;
		_tmp76_ = vala_semantic_analyzer_get_current_return_type (_tmp75_);
		_tmp77_ = _tmp76_;
		_tmp78_ = vala_data_type_get_value_owned (_tmp77_);
		_tmp79_ = _tmp78_;
		_tmp69_ = !_tmp79_;
	} else {
		_tmp69_ = FALSE;
	}
	if (_tmp69_) {
		ValaSourceReference* _tmp80_;
		ValaSourceReference* _tmp81_;
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		_tmp80_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp81_ = _tmp80_;
		vala_report_error (_tmp81_, "Return value transfers ownership but method return type hasn't been de" \
"clared to transfer ownership");
		result = FALSE;
		return result;
	}
	_tmp82_ = vala_return_statement_get_return_expression (self);
	_tmp83_ = _tmp82_;
	_tmp84_ = vala_expression_get_symbol_reference (_tmp83_);
	_tmp85_ = _tmp84_;
	_tmp86_ = _vala_code_node_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp85_, VALA_TYPE_LOCAL_VARIABLE) ? ((ValaLocalVariable*) _tmp85_) : NULL);
	local = _tmp86_;
	_tmp89_ = local;
	if (_tmp89_ != NULL) {
		ValaLocalVariable* _tmp90_;
		ValaDataType* _tmp91_;
		ValaDataType* _tmp92_;
		_tmp90_ = local;
		_tmp91_ = vala_variable_get_variable_type ((ValaVariable*) _tmp90_);
		_tmp92_ = _tmp91_;
		_tmp88_ = vala_data_type_is_disposable (_tmp92_);
	} else {
		_tmp88_ = FALSE;
	}
	if (_tmp88_) {
		ValaSemanticAnalyzer* _tmp93_;
		ValaSemanticAnalyzer* _tmp94_;
		ValaDataType* _tmp95_;
		ValaDataType* _tmp96_;
		gboolean _tmp97_;
		gboolean _tmp98_;
		_tmp93_ = vala_code_context_get_analyzer (context);
		_tmp94_ = _tmp93_;
		_tmp95_ = vala_semantic_analyzer_get_current_return_type (_tmp94_);
		_tmp96_ = _tmp95_;
		_tmp97_ = vala_data_type_get_value_owned (_tmp96_);
		_tmp98_ = _tmp97_;
		_tmp87_ = !_tmp98_;
	} else {
		_tmp87_ = FALSE;
	}
	if (_tmp87_) {
		ValaSourceReference* _tmp99_;
		ValaSourceReference* _tmp100_;
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		_tmp99_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp100_ = _tmp99_;
		vala_report_error (_tmp100_, "Local variable with strong reference used as return value and method r" \
"eturn type has not been declared to transfer ownership");
		result = FALSE;
		_vala_code_node_unref0 (local);
		return result;
	}
	_tmp102_ = vala_return_statement_get_return_expression (self);
	_tmp103_ = _tmp102_;
	if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp103_, VALA_TYPE_NULL_LITERAL)) {
		ValaSemanticAnalyzer* _tmp104_;
		ValaSemanticAnalyzer* _tmp105_;
		ValaDataType* _tmp106_;
		ValaDataType* _tmp107_;
		gboolean _tmp108_;
		gboolean _tmp109_;
		_tmp104_ = vala_code_context_get_analyzer (context);
		_tmp105_ = _tmp104_;
		_tmp106_ = vala_semantic_analyzer_get_current_return_type (_tmp105_);
		_tmp107_ = _tmp106_;
		_tmp108_ = vala_data_type_get_nullable (_tmp107_);
		_tmp109_ = _tmp108_;
		_tmp101_ = !_tmp109_;
	} else {
		_tmp101_ = FALSE;
	}
	if (_tmp101_) {
		ValaSourceReference* _tmp110_;
		ValaSourceReference* _tmp111_;
		ValaSemanticAnalyzer* _tmp112_;
		ValaSemanticAnalyzer* _tmp113_;
		ValaDataType* _tmp114_;
		ValaDataType* _tmp115_;
		gchar* _tmp116_;
		gchar* _tmp117_;
		gchar* _tmp118_;
		gchar* _tmp119_;
		_tmp110_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp111_ = _tmp110_;
		_tmp112_ = vala_code_context_get_analyzer (context);
		_tmp113_ = _tmp112_;
		_tmp114_ = vala_semantic_analyzer_get_current_return_type (_tmp113_);
		_tmp115_ = _tmp114_;
		_tmp116_ = vala_code_node_to_string ((ValaCodeNode*) _tmp115_);
		_tmp117_ = _tmp116_;
		_tmp118_ = g_strdup_printf ("`null' incompatible with return type `%s`", _tmp117_);
		_tmp119_ = _tmp118_;
		vala_report_warning (_tmp111_, _tmp119_);
		_g_free0 (_tmp119_);
		_g_free0 (_tmp117_);
	}
	_tmp120_ = vala_return_statement_get_return_expression (self);
	_tmp121_ = _tmp120_;
	_tmp122_ = vala_code_node_get_error_types ((ValaCodeNode*) _tmp121_);
	_tmp123_ = _tmp122_;
	vala_code_node_add_error_types ((ValaCodeNode*) self, _tmp123_);
	_vala_iterable_unref0 (_tmp123_);
	_tmp124_ = vala_code_node_get_error ((ValaCodeNode*) self);
	_tmp125_ = _tmp124_;
	result = !_tmp125_;
	_vala_code_node_unref0 (local);
	return result;
}


static void
vala_return_statement_real_emit (ValaCodeNode* base,
                                 ValaCodeGenerator* codegen)
{
	ValaReturnStatement * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaReturnStatement*) base;
	g_return_if_fail (codegen != NULL);
	_tmp0_ = vala_return_statement_get_return_expression (self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ != NULL) {
		ValaExpression* _tmp2_;
		ValaExpression* _tmp3_;
		ValaExpression* _tmp4_;
		ValaExpression* _tmp5_;
		_tmp2_ = vala_return_statement_get_return_expression (self);
		_tmp3_ = _tmp2_;
		vala_code_node_emit ((ValaCodeNode*) _tmp3_, codegen);
		_tmp4_ = vala_return_statement_get_return_expression (self);
		_tmp5_ = _tmp4_;
		vala_code_visitor_visit_end_full_expression ((ValaCodeVisitor*) codegen, _tmp5_);
	}
	vala_code_visitor_visit_return_statement ((ValaCodeVisitor*) codegen, self);
}


static void
vala_return_statement_real_get_defined_variables (ValaCodeNode* base,
                                                  ValaCollection* collection)
{
	ValaReturnStatement * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaReturnStatement*) base;
	g_return_if_fail (collection != NULL);
	_tmp0_ = vala_return_statement_get_return_expression (self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ != NULL) {
		ValaExpression* _tmp2_;
		ValaExpression* _tmp3_;
		_tmp2_ = vala_return_statement_get_return_expression (self);
		_tmp3_ = _tmp2_;
		vala_code_node_get_defined_variables ((ValaCodeNode*) _tmp3_, collection);
	}
}


static void
vala_return_statement_real_get_used_variables (ValaCodeNode* base,
                                               ValaCollection* collection)
{
	ValaReturnStatement * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaReturnStatement*) base;
	g_return_if_fail (collection != NULL);
	_tmp0_ = vala_return_statement_get_return_expression (self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ != NULL) {
		ValaExpression* _tmp2_;
		ValaExpression* _tmp3_;
		_tmp2_ = vala_return_statement_get_return_expression (self);
		_tmp3_ = _tmp2_;
		vala_code_node_get_used_variables ((ValaCodeNode*) _tmp3_, collection);
	}
}


ValaExpression*
vala_return_statement_get_return_expression (ValaReturnStatement* self)
{
	ValaExpression* result;
	ValaExpression* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_return_expression;
	result = _tmp0_;
	return result;
}


void
vala_return_statement_set_return_expression (ValaReturnStatement* self,
                                             ValaExpression* value)
{
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_code_node_ref0 (value);
	_vala_code_node_unref0 (self->priv->_return_expression);
	self->priv->_return_expression = _tmp0_;
	_tmp1_ = self->priv->_return_expression;
	if (_tmp1_ != NULL) {
		ValaExpression* _tmp2_;
		_tmp2_ = self->priv->_return_expression;
		vala_code_node_set_parent_node ((ValaCodeNode*) _tmp2_, (ValaCodeNode*) self);
	}
}


static void
vala_return_statement_class_init (ValaReturnStatementClass * klass)
{
	vala_return_statement_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_return_statement_finalize;
	g_type_class_add_private (klass, sizeof (ValaReturnStatementPrivate));
	((ValaCodeNodeClass *) klass)->accept = (void (*) (ValaCodeNode *, ValaCodeVisitor*)) vala_return_statement_real_accept;
	((ValaCodeNodeClass *) klass)->accept_children = (void (*) (ValaCodeNode *, ValaCodeVisitor*)) vala_return_statement_real_accept_children;
	((ValaCodeNodeClass *) klass)->replace_expression = (void (*) (ValaCodeNode *, ValaExpression*, ValaExpression*)) vala_return_statement_real_replace_expression;
	((ValaCodeNodeClass *) klass)->check = (gboolean (*) (ValaCodeNode *, ValaCodeContext*)) vala_return_statement_real_check;
	((ValaCodeNodeClass *) klass)->emit = (void (*) (ValaCodeNode *, ValaCodeGenerator*)) vala_return_statement_real_emit;
	((ValaCodeNodeClass *) klass)->get_defined_variables = (void (*) (ValaCodeNode *, ValaCollection*)) vala_return_statement_real_get_defined_variables;
	((ValaCodeNodeClass *) klass)->get_used_variables = (void (*) (ValaCodeNode *, ValaCollection*)) vala_return_statement_real_get_used_variables;
}


static void
vala_return_statement_vala_statement_interface_init (ValaStatementIface * iface)
{
	vala_return_statement_vala_statement_parent_iface = g_type_interface_peek_parent (iface);
}


static void
vala_return_statement_instance_init (ValaReturnStatement * self)
{
	self->priv = VALA_RETURN_STATEMENT_GET_PRIVATE (self);
}


static void
vala_return_statement_finalize (ValaCodeNode * obj)
{
	ValaReturnStatement * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_RETURN_STATEMENT, ValaReturnStatement);
	_vala_code_node_unref0 (self->priv->_return_expression);
	VALA_CODE_NODE_CLASS (vala_return_statement_parent_class)->finalize (obj);
}


/**
 * Represents a return statement in the source code.
 */
GType
vala_return_statement_get_type (void)
{
	static volatile gsize vala_return_statement_type_id__volatile = 0;
	if (g_once_init_enter (&vala_return_statement_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaReturnStatementClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_return_statement_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaReturnStatement), 0, (GInstanceInitFunc) vala_return_statement_instance_init, NULL };
		static const GInterfaceInfo vala_statement_info = { (GInterfaceInitFunc) vala_return_statement_vala_statement_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType vala_return_statement_type_id;
		vala_return_statement_type_id = g_type_register_static (VALA_TYPE_CODE_NODE, "ValaReturnStatement", &g_define_type_info, 0);
		g_type_add_interface_static (vala_return_statement_type_id, VALA_TYPE_STATEMENT, &vala_statement_info);
		g_once_init_leave (&vala_return_statement_type_id__volatile, vala_return_statement_type_id);
	}
	return vala_return_statement_type_id__volatile;
}



