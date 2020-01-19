/* valalambdaexpression.c generated by valac, the Vala compiler
 * generated from valalambdaexpression.vala, do not modify */

/* valalambdaexpression.vala
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
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _vala_iterator_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterator_unref (var), NULL)))

struct _ValaLambdaExpressionPrivate {
	ValaExpression* _expression_body;
	ValaBlock* _statement_body;
	ValaMethod* _method;
	ValaList* parameters;
};


static gpointer vala_lambda_expression_parent_class = NULL;
static gint vala_lambda_expression_next_lambda_id;
static gint vala_lambda_expression_next_lambda_id = 0;

#define VALA_LAMBDA_EXPRESSION_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_LAMBDA_EXPRESSION, ValaLambdaExpressionPrivate))
static void vala_lambda_expression_real_accept (ValaCodeNode* base,
                                         ValaCodeVisitor* visitor);
static void vala_lambda_expression_real_accept_children (ValaCodeNode* base,
                                                  ValaCodeVisitor* visitor);
static gboolean vala_lambda_expression_real_is_pure (ValaExpression* base);
static gboolean vala_lambda_expression_real_check (ValaCodeNode* base,
                                            ValaCodeContext* context);
static void vala_lambda_expression_real_emit (ValaCodeNode* base,
                                       ValaCodeGenerator* codegen);
static void vala_lambda_expression_real_get_used_variables (ValaCodeNode* base,
                                                     ValaCollection* collection);
static void vala_lambda_expression_finalize (ValaCodeNode * obj);


/**
 * Creates a new lambda expression.
 *
 * @param expression_body  expression body
 * @param source_reference reference to source code
 * @return                 newly created lambda expression
 */
ValaLambdaExpression*
vala_lambda_expression_construct (GType object_type,
                                  ValaExpression* expression_body,
                                  ValaSourceReference* source_reference)
{
	ValaLambdaExpression* self = NULL;
	g_return_val_if_fail (expression_body != NULL, NULL);
	g_return_val_if_fail (source_reference != NULL, NULL);
	self = (ValaLambdaExpression*) vala_expression_construct (object_type);
	vala_code_node_set_source_reference ((ValaCodeNode*) self, source_reference);
	vala_lambda_expression_set_expression_body (self, expression_body);
	return self;
}


ValaLambdaExpression*
vala_lambda_expression_new (ValaExpression* expression_body,
                            ValaSourceReference* source_reference)
{
	return vala_lambda_expression_construct (VALA_TYPE_LAMBDA_EXPRESSION, expression_body, source_reference);
}


/**
 * Creates a new lambda expression with statement body.
 *
 * @param statement_body   statement body
 * @param source_reference reference to source code
 * @return                 newly created lambda expression
 */
ValaLambdaExpression*
vala_lambda_expression_construct_with_statement_body (GType object_type,
                                                      ValaBlock* statement_body,
                                                      ValaSourceReference* source_reference)
{
	ValaLambdaExpression* self = NULL;
	g_return_val_if_fail (statement_body != NULL, NULL);
	g_return_val_if_fail (source_reference != NULL, NULL);
	self = (ValaLambdaExpression*) vala_expression_construct (object_type);
	vala_lambda_expression_set_statement_body (self, statement_body);
	vala_code_node_set_source_reference ((ValaCodeNode*) self, source_reference);
	return self;
}


ValaLambdaExpression*
vala_lambda_expression_new_with_statement_body (ValaBlock* statement_body,
                                                ValaSourceReference* source_reference)
{
	return vala_lambda_expression_construct_with_statement_body (VALA_TYPE_LAMBDA_EXPRESSION, statement_body, source_reference);
}


/**
 * Appends implicitly typed parameter.
 *
 * @param param parameter name
 */
void
vala_lambda_expression_add_parameter (ValaLambdaExpression* self,
                                      ValaParameter* param)
{
	ValaList* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (param != NULL);
	_tmp0_ = self->priv->parameters;
	vala_collection_add ((ValaCollection*) _tmp0_, param);
}


/**
 * Returns copy of parameter list.
 *
 * @return parameter list
 */
static gpointer
_vala_iterable_ref0 (gpointer self)
{
	return self ? vala_iterable_ref (self) : NULL;
}


ValaList*
vala_lambda_expression_get_parameters (ValaLambdaExpression* self)
{
	ValaList* result = NULL;
	ValaList* _tmp0_;
	ValaList* _tmp1_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->parameters;
	_tmp1_ = _vala_iterable_ref0 (_tmp0_);
	result = _tmp1_;
	return result;
}


static void
vala_lambda_expression_real_accept (ValaCodeNode* base,
                                    ValaCodeVisitor* visitor)
{
	ValaLambdaExpression * self;
	self = (ValaLambdaExpression*) base;
	g_return_if_fail (visitor != NULL);
	vala_code_visitor_visit_lambda_expression (visitor, self);
	vala_code_visitor_visit_expression (visitor, (ValaExpression*) self);
}


static void
vala_lambda_expression_real_accept_children (ValaCodeNode* base,
                                             ValaCodeVisitor* visitor)
{
	ValaLambdaExpression * self;
	ValaMethod* _tmp0_;
	self = (ValaLambdaExpression*) base;
	g_return_if_fail (visitor != NULL);
	_tmp0_ = self->priv->_method;
	if (_tmp0_ == NULL) {
		ValaExpression* _tmp1_;
		_tmp1_ = self->priv->_expression_body;
		if (_tmp1_ != NULL) {
			ValaExpression* _tmp2_;
			ValaExpression* _tmp3_;
			_tmp2_ = self->priv->_expression_body;
			vala_code_node_accept ((ValaCodeNode*) _tmp2_, visitor);
			_tmp3_ = self->priv->_expression_body;
			vala_code_visitor_visit_end_full_expression (visitor, _tmp3_);
		} else {
			ValaBlock* _tmp4_;
			_tmp4_ = self->priv->_statement_body;
			if (_tmp4_ != NULL) {
				ValaBlock* _tmp5_;
				_tmp5_ = self->priv->_statement_body;
				vala_code_node_accept ((ValaCodeNode*) _tmp5_, visitor);
			}
		}
	} else {
		ValaMethod* _tmp6_;
		_tmp6_ = self->priv->_method;
		vala_code_node_accept ((ValaCodeNode*) _tmp6_, visitor);
	}
}


static gboolean
vala_lambda_expression_real_is_pure (ValaExpression* base)
{
	ValaLambdaExpression * self;
	gboolean result = FALSE;
	self = (ValaLambdaExpression*) base;
	result = FALSE;
	return result;
}


static gpointer
_vala_code_node_ref0 (gpointer self)
{
	return self ? vala_code_node_ref (self) : NULL;
}


static gboolean
vala_lambda_expression_real_check (ValaCodeNode* base,
                                   ValaCodeContext* context)
{
	ValaLambdaExpression * self;
	gboolean result = FALSE;
	gboolean _tmp0_;
	gboolean _tmp1_;
	ValaDataType* _tmp4_;
	ValaDataType* _tmp5_;
	ValaDelegate* cb = NULL;
	ValaDataType* _tmp18_;
	ValaDataType* _tmp19_;
	ValaDelegate* _tmp20_;
	ValaDelegate* _tmp21_;
	ValaDelegate* _tmp22_;
	ValaDataType* return_type = NULL;
	ValaDelegate* _tmp23_;
	ValaDataType* _tmp24_;
	ValaDataType* _tmp25_;
	ValaDataType* _tmp26_;
	ValaDataType* _tmp27_;
	ValaDataType* _tmp28_;
	gint _tmp29_;
	gchar* _tmp30_;
	gchar* _tmp31_;
	ValaDataType* _tmp32_;
	ValaSourceReference* _tmp33_;
	ValaSourceReference* _tmp34_;
	ValaMethod* _tmp35_;
	ValaMethod* _tmp36_;
	ValaMethod* _tmp37_;
	ValaMethod* _tmp38_;
	ValaVersionAttribute* _tmp39_;
	ValaVersionAttribute* _tmp40_;
	ValaSourceReference* _tmp41_;
	ValaSourceReference* _tmp42_;
	gboolean _tmp43_ = FALSE;
	ValaDelegate* _tmp44_;
	gboolean _tmp45_;
	gboolean _tmp46_;
	ValaMethod* _tmp90_;
	ValaSemanticAnalyzer* _tmp91_;
	ValaSemanticAnalyzer* _tmp92_;
	ValaSymbol* _tmp93_;
	ValaSymbol* _tmp94_;
	ValaScope* _tmp95_;
	ValaScope* _tmp96_;
	ValaList* lambda_params = NULL;
	ValaList* _tmp97_;
	ValaIterator* lambda_param_it = NULL;
	ValaList* _tmp98_;
	ValaIterator* _tmp99_;
	gboolean _tmp100_ = FALSE;
	ValaDelegate* _tmp101_;
	ValaDataType* _tmp102_;
	ValaDataType* _tmp103_;
	ValaIterator* _tmp159_;
	ValaExpression* _tmp177_;
	ValaMethod* _tmp208_;
	ValaBlock* _tmp209_;
	ValaBlock* _tmp210_;
	ValaMethod* _tmp211_;
	ValaScope* _tmp212_;
	ValaScope* _tmp213_;
	ValaMethod* m = NULL;
	ValaSemanticAnalyzer* _tmp214_;
	ValaSemanticAnalyzer* _tmp215_;
	ValaSemanticAnalyzer* _tmp216_;
	ValaSemanticAnalyzer* _tmp217_;
	ValaSymbol* _tmp218_;
	ValaSymbol* _tmp219_;
	ValaMethod* _tmp220_;
	ValaMethod* _tmp221_;
	ValaMethod* _tmp246_;
	ValaMethod* _tmp247_;
	ValaMethod* _tmp248_;
	ValaMethodType* _tmp249_;
	ValaMethodType* _tmp250_;
	ValaDataType* _tmp251_;
	ValaDataType* _tmp252_;
	ValaDataType* _tmp253_;
	ValaDataType* _tmp254_;
	gboolean _tmp255_;
	gboolean _tmp256_;
	gboolean _tmp257_;
	gboolean _tmp258_;
	self = (ValaLambdaExpression*) base;
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
	_tmp4_ = vala_expression_get_target_type ((ValaExpression*) self);
	_tmp5_ = _tmp4_;
	if (!G_TYPE_CHECK_INSTANCE_TYPE (_tmp5_, VALA_TYPE_DELEGATE_TYPE)) {
		ValaDataType* _tmp6_;
		ValaDataType* _tmp7_;
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		_tmp6_ = vala_expression_get_target_type ((ValaExpression*) self);
		_tmp7_ = _tmp6_;
		if (_tmp7_ != NULL) {
			ValaSourceReference* _tmp8_;
			ValaSourceReference* _tmp9_;
			ValaDataType* _tmp10_;
			ValaDataType* _tmp11_;
			gchar* _tmp12_;
			gchar* _tmp13_;
			gchar* _tmp14_;
			gchar* _tmp15_;
			_tmp8_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
			_tmp9_ = _tmp8_;
			_tmp10_ = vala_expression_get_target_type ((ValaExpression*) self);
			_tmp11_ = _tmp10_;
			_tmp12_ = vala_code_node_to_string ((ValaCodeNode*) _tmp11_);
			_tmp13_ = _tmp12_;
			_tmp14_ = g_strdup_printf ("Cannot convert lambda expression to `%s'", _tmp13_);
			_tmp15_ = _tmp14_;
			vala_report_error (_tmp9_, _tmp15_);
			_g_free0 (_tmp15_);
			_g_free0 (_tmp13_);
		} else {
			ValaSourceReference* _tmp16_;
			ValaSourceReference* _tmp17_;
			_tmp16_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
			_tmp17_ = _tmp16_;
			vala_report_error (_tmp17_, "lambda expression not allowed in this context");
		}
		result = FALSE;
		return result;
	}
	_tmp18_ = vala_expression_get_target_type ((ValaExpression*) self);
	_tmp19_ = _tmp18_;
	_tmp20_ = vala_delegate_type_get_delegate_symbol (G_TYPE_CHECK_INSTANCE_CAST (_tmp19_, VALA_TYPE_DELEGATE_TYPE, ValaDelegateType));
	_tmp21_ = _tmp20_;
	_tmp22_ = _vala_code_node_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp21_, VALA_TYPE_DELEGATE, ValaDelegate));
	cb = _tmp22_;
	_tmp23_ = cb;
	_tmp24_ = vala_callable_get_return_type ((ValaCallable*) _tmp23_);
	_tmp25_ = _tmp24_;
	_tmp26_ = vala_expression_get_target_type ((ValaExpression*) self);
	_tmp27_ = _tmp26_;
	_tmp28_ = vala_data_type_get_actual_type (_tmp25_, _tmp27_, NULL, (ValaCodeNode*) self);
	return_type = _tmp28_;
	_tmp29_ = vala_lambda_expression_next_lambda_id;
	vala_lambda_expression_next_lambda_id = _tmp29_ + 1;
	_tmp30_ = g_strdup_printf ("_lambda%d_", _tmp29_);
	_tmp31_ = _tmp30_;
	_tmp32_ = return_type;
	_tmp33_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp34_ = _tmp33_;
	_tmp35_ = vala_method_new (_tmp31_, _tmp32_, _tmp34_, NULL);
	_tmp36_ = _tmp35_;
	vala_lambda_expression_set_method (self, _tmp36_);
	_vala_code_node_unref0 (_tmp36_);
	_g_free0 (_tmp31_);
	_tmp37_ = self->priv->_method;
	vala_symbol_set_used ((ValaSymbol*) _tmp37_, TRUE);
	_tmp38_ = self->priv->_method;
	_tmp39_ = vala_symbol_get_version ((ValaSymbol*) _tmp38_);
	_tmp40_ = _tmp39_;
	_tmp41_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp42_ = _tmp41_;
	vala_version_attribute_check (_tmp40_, _tmp42_);
	_tmp44_ = cb;
	_tmp45_ = vala_delegate_get_has_target (_tmp44_);
	_tmp46_ = _tmp45_;
	if (!_tmp46_) {
		_tmp43_ = TRUE;
	} else {
		ValaSemanticAnalyzer* _tmp47_;
		ValaSemanticAnalyzer* _tmp48_;
		_tmp47_ = vala_code_context_get_analyzer (context);
		_tmp48_ = _tmp47_;
		_tmp43_ = !vala_semantic_analyzer_is_in_instance_method (_tmp48_);
	}
	if (_tmp43_) {
		ValaMethod* _tmp49_;
		_tmp49_ = self->priv->_method;
		vala_method_set_binding (_tmp49_, VALA_MEMBER_BINDING_STATIC);
	} else {
		ValaSymbol* sym = NULL;
		ValaSemanticAnalyzer* _tmp50_;
		ValaSemanticAnalyzer* _tmp51_;
		ValaSymbol* _tmp52_;
		ValaSymbol* _tmp53_;
		ValaSymbol* _tmp54_;
		_tmp50_ = vala_code_context_get_analyzer (context);
		_tmp51_ = _tmp50_;
		_tmp52_ = vala_semantic_analyzer_get_current_symbol (_tmp51_);
		_tmp53_ = _tmp52_;
		_tmp54_ = _vala_code_node_ref0 (_tmp53_);
		sym = _tmp54_;
		while (TRUE) {
			ValaMethod* _tmp55_;
			ValaParameter* _tmp56_;
			ValaParameter* _tmp57_;
			ValaSymbol* _tmp58_;
			ValaSymbol* _tmp86_;
			ValaSymbol* _tmp87_;
			ValaSymbol* _tmp88_;
			ValaSymbol* _tmp89_;
			_tmp55_ = self->priv->_method;
			_tmp56_ = vala_method_get_this_parameter (_tmp55_);
			_tmp57_ = _tmp56_;
			if (!(_tmp57_ == NULL)) {
				break;
			}
			_tmp58_ = sym;
			if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp58_, VALA_TYPE_PROPERTY)) {
				ValaProperty* prop = NULL;
				ValaSymbol* _tmp59_;
				ValaProperty* _tmp60_;
				ValaMethod* _tmp61_;
				ValaProperty* _tmp62_;
				ValaParameter* _tmp63_;
				ValaParameter* _tmp64_;
				_tmp59_ = sym;
				_tmp60_ = _vala_code_node_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp59_, VALA_TYPE_PROPERTY, ValaProperty));
				prop = _tmp60_;
				_tmp61_ = self->priv->_method;
				_tmp62_ = prop;
				_tmp63_ = vala_property_get_this_parameter (_tmp62_);
				_tmp64_ = _tmp63_;
				vala_method_set_this_parameter (_tmp61_, _tmp64_);
				_vala_code_node_unref0 (prop);
			} else {
				ValaSymbol* _tmp65_;
				_tmp65_ = sym;
				if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp65_, VALA_TYPE_CONSTRUCTOR)) {
					ValaConstructor* c = NULL;
					ValaSymbol* _tmp66_;
					ValaConstructor* _tmp67_;
					ValaMethod* _tmp68_;
					ValaConstructor* _tmp69_;
					ValaParameter* _tmp70_;
					ValaParameter* _tmp71_;
					_tmp66_ = sym;
					_tmp67_ = _vala_code_node_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp66_, VALA_TYPE_CONSTRUCTOR, ValaConstructor));
					c = _tmp67_;
					_tmp68_ = self->priv->_method;
					_tmp69_ = c;
					_tmp70_ = vala_constructor_get_this_parameter (_tmp69_);
					_tmp71_ = _tmp70_;
					vala_method_set_this_parameter (_tmp68_, _tmp71_);
					_vala_code_node_unref0 (c);
				} else {
					ValaSymbol* _tmp72_;
					_tmp72_ = sym;
					if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp72_, VALA_TYPE_DESTRUCTOR)) {
						ValaDestructor* d = NULL;
						ValaSymbol* _tmp73_;
						ValaDestructor* _tmp74_;
						ValaMethod* _tmp75_;
						ValaDestructor* _tmp76_;
						ValaParameter* _tmp77_;
						ValaParameter* _tmp78_;
						_tmp73_ = sym;
						_tmp74_ = _vala_code_node_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp73_, VALA_TYPE_DESTRUCTOR, ValaDestructor));
						d = _tmp74_;
						_tmp75_ = self->priv->_method;
						_tmp76_ = d;
						_tmp77_ = vala_destructor_get_this_parameter (_tmp76_);
						_tmp78_ = _tmp77_;
						vala_method_set_this_parameter (_tmp75_, _tmp78_);
						_vala_code_node_unref0 (d);
					} else {
						ValaSymbol* _tmp79_;
						_tmp79_ = sym;
						if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp79_, VALA_TYPE_METHOD)) {
							ValaMethod* m = NULL;
							ValaSymbol* _tmp80_;
							ValaMethod* _tmp81_;
							ValaMethod* _tmp82_;
							ValaMethod* _tmp83_;
							ValaParameter* _tmp84_;
							ValaParameter* _tmp85_;
							_tmp80_ = sym;
							_tmp81_ = _vala_code_node_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp80_, VALA_TYPE_METHOD, ValaMethod));
							m = _tmp81_;
							_tmp82_ = self->priv->_method;
							_tmp83_ = m;
							_tmp84_ = vala_method_get_this_parameter (_tmp83_);
							_tmp85_ = _tmp84_;
							vala_method_set_this_parameter (_tmp82_, _tmp85_);
							_vala_code_node_unref0 (m);
						}
					}
				}
			}
			_tmp86_ = sym;
			_tmp87_ = vala_symbol_get_parent_symbol (_tmp86_);
			_tmp88_ = _tmp87_;
			_tmp89_ = _vala_code_node_ref0 (_tmp88_);
			_vala_code_node_unref0 (sym);
			sym = _tmp89_;
		}
		_vala_code_node_unref0 (sym);
	}
	_tmp90_ = self->priv->_method;
	_tmp91_ = vala_code_context_get_analyzer (context);
	_tmp92_ = _tmp91_;
	_tmp93_ = vala_semantic_analyzer_get_current_symbol (_tmp92_);
	_tmp94_ = _tmp93_;
	_tmp95_ = vala_symbol_get_scope (_tmp94_);
	_tmp96_ = _tmp95_;
	vala_symbol_set_owner ((ValaSymbol*) _tmp90_, _tmp96_);
	_tmp97_ = vala_lambda_expression_get_parameters (self);
	lambda_params = _tmp97_;
	_tmp98_ = lambda_params;
	_tmp99_ = vala_iterable_iterator ((ValaIterable*) _tmp98_);
	lambda_param_it = _tmp99_;
	_tmp101_ = cb;
	_tmp102_ = vala_delegate_get_sender_type (_tmp101_);
	_tmp103_ = _tmp102_;
	if (_tmp103_ != NULL) {
		ValaList* _tmp104_;
		gint _tmp105_;
		gint _tmp106_;
		ValaDelegate* _tmp107_;
		ValaList* _tmp108_;
		ValaList* _tmp109_;
		gint _tmp110_;
		gint _tmp111_;
		_tmp104_ = lambda_params;
		_tmp105_ = vala_collection_get_size ((ValaCollection*) _tmp104_);
		_tmp106_ = _tmp105_;
		_tmp107_ = cb;
		_tmp108_ = vala_callable_get_parameters ((ValaCallable*) _tmp107_);
		_tmp109_ = _tmp108_;
		_tmp110_ = vala_collection_get_size ((ValaCollection*) _tmp109_);
		_tmp111_ = _tmp110_;
		_tmp100_ = _tmp106_ == (_tmp111_ + 1);
		_vala_iterable_unref0 (_tmp109_);
	} else {
		_tmp100_ = FALSE;
	}
	if (_tmp100_) {
		ValaIterator* _tmp112_;
		ValaParameter* lambda_param = NULL;
		ValaIterator* _tmp113_;
		gpointer _tmp114_;
		ValaParameter* _tmp115_;
		ValaDelegate* _tmp116_;
		ValaDataType* _tmp117_;
		ValaDataType* _tmp118_;
		ValaMethod* _tmp119_;
		ValaParameter* _tmp120_;
		_tmp112_ = lambda_param_it;
		vala_iterator_next (_tmp112_);
		_tmp113_ = lambda_param_it;
		_tmp114_ = vala_iterator_get (_tmp113_);
		lambda_param = (ValaParameter*) _tmp114_;
		_tmp115_ = lambda_param;
		_tmp116_ = cb;
		_tmp117_ = vala_delegate_get_sender_type (_tmp116_);
		_tmp118_ = _tmp117_;
		vala_variable_set_variable_type ((ValaVariable*) _tmp115_, _tmp118_);
		_tmp119_ = self->priv->_method;
		_tmp120_ = lambda_param;
		vala_callable_add_parameter ((ValaCallable*) _tmp119_, _tmp120_);
		_vala_code_node_unref0 (lambda_param);
	}
	{
		ValaList* _cb_param_list = NULL;
		ValaDelegate* _tmp121_;
		ValaList* _tmp122_;
		gint _cb_param_size = 0;
		ValaList* _tmp123_;
		gint _tmp124_;
		gint _tmp125_;
		gint _cb_param_index = 0;
		_tmp121_ = cb;
		_tmp122_ = vala_callable_get_parameters ((ValaCallable*) _tmp121_);
		_cb_param_list = _tmp122_;
		_tmp123_ = _cb_param_list;
		_tmp124_ = vala_collection_get_size ((ValaCollection*) _tmp123_);
		_tmp125_ = _tmp124_;
		_cb_param_size = _tmp125_;
		_cb_param_index = -1;
		while (TRUE) {
			gint _tmp126_;
			gint _tmp127_;
			gint _tmp128_;
			ValaParameter* cb_param = NULL;
			ValaList* _tmp129_;
			gint _tmp130_;
			gpointer _tmp131_;
			ValaIterator* _tmp132_;
			ValaParameter* lambda_param = NULL;
			ValaIterator* _tmp133_;
			gpointer _tmp134_;
			ValaParameter* _tmp135_;
			ValaParameterDirection _tmp136_;
			ValaParameterDirection _tmp137_;
			ValaParameter* _tmp138_;
			ValaParameterDirection _tmp139_;
			ValaParameterDirection _tmp140_;
			ValaParameter* _tmp149_;
			ValaParameter* _tmp150_;
			ValaDataType* _tmp151_;
			ValaDataType* _tmp152_;
			ValaDataType* _tmp153_;
			ValaDataType* _tmp154_;
			ValaDataType* _tmp155_;
			ValaDataType* _tmp156_;
			ValaMethod* _tmp157_;
			ValaParameter* _tmp158_;
			_tmp126_ = _cb_param_index;
			_cb_param_index = _tmp126_ + 1;
			_tmp127_ = _cb_param_index;
			_tmp128_ = _cb_param_size;
			if (!(_tmp127_ < _tmp128_)) {
				break;
			}
			_tmp129_ = _cb_param_list;
			_tmp130_ = _cb_param_index;
			_tmp131_ = vala_list_get (_tmp129_, _tmp130_);
			cb_param = (ValaParameter*) _tmp131_;
			_tmp132_ = lambda_param_it;
			if (!vala_iterator_next (_tmp132_)) {
				_vala_code_node_unref0 (cb_param);
				break;
			}
			_tmp133_ = lambda_param_it;
			_tmp134_ = vala_iterator_get (_tmp133_);
			lambda_param = (ValaParameter*) _tmp134_;
			_tmp135_ = lambda_param;
			_tmp136_ = vala_parameter_get_direction (_tmp135_);
			_tmp137_ = _tmp136_;
			_tmp138_ = cb_param;
			_tmp139_ = vala_parameter_get_direction (_tmp138_);
			_tmp140_ = _tmp139_;
			if (_tmp137_ != _tmp140_) {
				ValaParameter* _tmp141_;
				ValaSourceReference* _tmp142_;
				ValaSourceReference* _tmp143_;
				ValaParameter* _tmp144_;
				const gchar* _tmp145_;
				const gchar* _tmp146_;
				gchar* _tmp147_;
				gchar* _tmp148_;
				vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
				_tmp141_ = lambda_param;
				_tmp142_ = vala_code_node_get_source_reference ((ValaCodeNode*) _tmp141_);
				_tmp143_ = _tmp142_;
				_tmp144_ = lambda_param;
				_tmp145_ = vala_symbol_get_name ((ValaSymbol*) _tmp144_);
				_tmp146_ = _tmp145_;
				_tmp147_ = g_strdup_printf ("direction of parameter `%s' is incompatible with the target delegate", _tmp146_);
				_tmp148_ = _tmp147_;
				vala_report_error (_tmp143_, _tmp148_);
				_g_free0 (_tmp148_);
			}
			_tmp149_ = lambda_param;
			_tmp150_ = cb_param;
			_tmp151_ = vala_variable_get_variable_type ((ValaVariable*) _tmp150_);
			_tmp152_ = _tmp151_;
			_tmp153_ = vala_expression_get_target_type ((ValaExpression*) self);
			_tmp154_ = _tmp153_;
			_tmp155_ = vala_data_type_get_actual_type (_tmp152_, _tmp154_, NULL, (ValaCodeNode*) self);
			_tmp156_ = _tmp155_;
			vala_variable_set_variable_type ((ValaVariable*) _tmp149_, _tmp156_);
			_vala_code_node_unref0 (_tmp156_);
			_tmp157_ = self->priv->_method;
			_tmp158_ = lambda_param;
			vala_callable_add_parameter ((ValaCallable*) _tmp157_, _tmp158_);
			_vala_code_node_unref0 (lambda_param);
			_vala_code_node_unref0 (cb_param);
		}
		_vala_iterable_unref0 (_cb_param_list);
	}
	_tmp159_ = lambda_param_it;
	if (vala_iterator_next (_tmp159_)) {
		ValaSourceReference* _tmp160_;
		ValaSourceReference* _tmp161_;
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		_tmp160_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp161_ = _tmp160_;
		vala_report_error (_tmp161_, "lambda expression: too many parameters");
		result = FALSE;
		_vala_iterator_unref0 (lambda_param_it);
		_vala_iterable_unref0 (lambda_params);
		_vala_code_node_unref0 (return_type);
		_vala_code_node_unref0 (cb);
		return result;
	}
	{
		ValaList* _error_type_list = NULL;
		ValaDelegate* _tmp162_;
		ValaList* _tmp163_;
		gint _error_type_size = 0;
		ValaList* _tmp164_;
		gint _tmp165_;
		gint _tmp166_;
		gint _error_type_index = 0;
		_tmp162_ = cb;
		_tmp163_ = vala_code_node_get_error_types ((ValaCodeNode*) _tmp162_);
		_error_type_list = _tmp163_;
		_tmp164_ = _error_type_list;
		_tmp165_ = vala_collection_get_size ((ValaCollection*) _tmp164_);
		_tmp166_ = _tmp165_;
		_error_type_size = _tmp166_;
		_error_type_index = -1;
		while (TRUE) {
			gint _tmp167_;
			gint _tmp168_;
			gint _tmp169_;
			ValaDataType* error_type = NULL;
			ValaList* _tmp170_;
			gint _tmp171_;
			gpointer _tmp172_;
			ValaMethod* _tmp173_;
			ValaDataType* _tmp174_;
			ValaDataType* _tmp175_;
			ValaDataType* _tmp176_;
			_tmp167_ = _error_type_index;
			_error_type_index = _tmp167_ + 1;
			_tmp168_ = _error_type_index;
			_tmp169_ = _error_type_size;
			if (!(_tmp168_ < _tmp169_)) {
				break;
			}
			_tmp170_ = _error_type_list;
			_tmp171_ = _error_type_index;
			_tmp172_ = vala_list_get (_tmp170_, _tmp171_);
			error_type = (ValaDataType*) _tmp172_;
			_tmp173_ = self->priv->_method;
			_tmp174_ = error_type;
			_tmp175_ = vala_data_type_copy (_tmp174_);
			_tmp176_ = _tmp175_;
			vala_code_node_add_error_type ((ValaCodeNode*) _tmp173_, _tmp176_);
			_vala_code_node_unref0 (_tmp176_);
			_vala_code_node_unref0 (error_type);
		}
		_vala_iterable_unref0 (_error_type_list);
	}
	_tmp177_ = self->priv->_expression_body;
	if (_tmp177_ != NULL) {
		ValaBlock* block = NULL;
		ValaSourceReference* _tmp178_;
		ValaSourceReference* _tmp179_;
		ValaBlock* _tmp180_;
		ValaBlock* _tmp181_;
		ValaScope* _tmp182_;
		ValaScope* _tmp183_;
		ValaMethod* _tmp184_;
		ValaScope* _tmp185_;
		ValaScope* _tmp186_;
		ValaMethod* _tmp187_;
		ValaDataType* _tmp188_;
		ValaDataType* _tmp189_;
		ValaTypeSymbol* _tmp190_;
		ValaTypeSymbol* _tmp191_;
		ValaMethod* _tmp204_;
		ValaBlock* _tmp205_;
		_tmp178_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp179_ = _tmp178_;
		_tmp180_ = vala_block_new (_tmp179_);
		block = _tmp180_;
		_tmp181_ = block;
		_tmp182_ = vala_symbol_get_scope ((ValaSymbol*) _tmp181_);
		_tmp183_ = _tmp182_;
		_tmp184_ = self->priv->_method;
		_tmp185_ = vala_symbol_get_scope ((ValaSymbol*) _tmp184_);
		_tmp186_ = _tmp185_;
		vala_scope_set_parent_scope (_tmp183_, _tmp186_);
		_tmp187_ = self->priv->_method;
		_tmp188_ = vala_callable_get_return_type ((ValaCallable*) _tmp187_);
		_tmp189_ = _tmp188_;
		_tmp190_ = vala_data_type_get_data_type (_tmp189_);
		_tmp191_ = _tmp190_;
		if (_tmp191_ != NULL) {
			ValaBlock* _tmp192_;
			ValaExpression* _tmp193_;
			ValaSourceReference* _tmp194_;
			ValaSourceReference* _tmp195_;
			ValaReturnStatement* _tmp196_;
			ValaReturnStatement* _tmp197_;
			_tmp192_ = block;
			_tmp193_ = self->priv->_expression_body;
			_tmp194_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
			_tmp195_ = _tmp194_;
			_tmp196_ = vala_return_statement_new (_tmp193_, _tmp195_);
			_tmp197_ = _tmp196_;
			vala_block_add_statement (_tmp192_, (ValaStatement*) _tmp197_);
			_vala_code_node_unref0 (_tmp197_);
		} else {
			ValaBlock* _tmp198_;
			ValaExpression* _tmp199_;
			ValaSourceReference* _tmp200_;
			ValaSourceReference* _tmp201_;
			ValaExpressionStatement* _tmp202_;
			ValaExpressionStatement* _tmp203_;
			_tmp198_ = block;
			_tmp199_ = self->priv->_expression_body;
			_tmp200_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
			_tmp201_ = _tmp200_;
			_tmp202_ = vala_expression_statement_new (_tmp199_, _tmp201_);
			_tmp203_ = _tmp202_;
			vala_block_add_statement (_tmp198_, (ValaStatement*) _tmp203_);
			_vala_code_node_unref0 (_tmp203_);
		}
		_tmp204_ = self->priv->_method;
		_tmp205_ = block;
		vala_subroutine_set_body ((ValaSubroutine*) _tmp204_, _tmp205_);
		_vala_code_node_unref0 (block);
	} else {
		ValaMethod* _tmp206_;
		ValaBlock* _tmp207_;
		_tmp206_ = self->priv->_method;
		_tmp207_ = self->priv->_statement_body;
		vala_subroutine_set_body ((ValaSubroutine*) _tmp206_, _tmp207_);
	}
	_tmp208_ = self->priv->_method;
	_tmp209_ = vala_subroutine_get_body ((ValaSubroutine*) _tmp208_);
	_tmp210_ = _tmp209_;
	_tmp211_ = self->priv->_method;
	_tmp212_ = vala_symbol_get_scope ((ValaSymbol*) _tmp211_);
	_tmp213_ = _tmp212_;
	vala_symbol_set_owner ((ValaSymbol*) _tmp210_, _tmp213_);
	_tmp214_ = vala_code_context_get_analyzer (context);
	_tmp215_ = _tmp214_;
	_tmp216_ = vala_code_context_get_analyzer (context);
	_tmp217_ = _tmp216_;
	_tmp218_ = vala_semantic_analyzer_get_current_symbol (_tmp217_);
	_tmp219_ = _tmp218_;
	_tmp220_ = vala_semantic_analyzer_find_parent_method (_tmp215_, _tmp219_);
	m = _tmp220_;
	_tmp221_ = m;
	if (_tmp221_ != NULL) {
		{
			ValaList* _type_param_list = NULL;
			ValaMethod* _tmp222_;
			ValaList* _tmp223_;
			gint _type_param_size = 0;
			ValaList* _tmp224_;
			gint _tmp225_;
			gint _tmp226_;
			gint _type_param_index = 0;
			_tmp222_ = m;
			_tmp223_ = vala_method_get_type_parameters (_tmp222_);
			_type_param_list = _tmp223_;
			_tmp224_ = _type_param_list;
			_tmp225_ = vala_collection_get_size ((ValaCollection*) _tmp224_);
			_tmp226_ = _tmp225_;
			_type_param_size = _tmp226_;
			_type_param_index = -1;
			while (TRUE) {
				gint _tmp227_;
				gint _tmp228_;
				gint _tmp229_;
				ValaTypeParameter* type_param = NULL;
				ValaList* _tmp230_;
				gint _tmp231_;
				gpointer _tmp232_;
				ValaMethod* _tmp233_;
				ValaTypeParameter* _tmp234_;
				const gchar* _tmp235_;
				const gchar* _tmp236_;
				ValaTypeParameter* _tmp237_;
				ValaSourceReference* _tmp238_;
				ValaSourceReference* _tmp239_;
				ValaTypeParameter* _tmp240_;
				ValaTypeParameter* _tmp241_;
				ValaMethod* _tmp242_;
				ValaMethod* _tmp243_;
				ValaBlock* _tmp244_;
				ValaBlock* _tmp245_;
				_tmp227_ = _type_param_index;
				_type_param_index = _tmp227_ + 1;
				_tmp228_ = _type_param_index;
				_tmp229_ = _type_param_size;
				if (!(_tmp228_ < _tmp229_)) {
					break;
				}
				_tmp230_ = _type_param_list;
				_tmp231_ = _type_param_index;
				_tmp232_ = vala_list_get (_tmp230_, _tmp231_);
				type_param = (ValaTypeParameter*) _tmp232_;
				_tmp233_ = self->priv->_method;
				_tmp234_ = type_param;
				_tmp235_ = vala_symbol_get_name ((ValaSymbol*) _tmp234_);
				_tmp236_ = _tmp235_;
				_tmp237_ = type_param;
				_tmp238_ = vala_code_node_get_source_reference ((ValaCodeNode*) _tmp237_);
				_tmp239_ = _tmp238_;
				_tmp240_ = vala_typeparameter_new (_tmp236_, _tmp239_);
				_tmp241_ = _tmp240_;
				vala_method_add_type_parameter (_tmp233_, _tmp241_);
				_vala_code_node_unref0 (_tmp241_);
				_tmp242_ = self->priv->_method;
				vala_method_set_closure (_tmp242_, TRUE);
				_tmp243_ = m;
				_tmp244_ = vala_subroutine_get_body ((ValaSubroutine*) _tmp243_);
				_tmp245_ = _tmp244_;
				vala_block_set_captured (_tmp245_, TRUE);
				_vala_code_node_unref0 (type_param);
			}
			_vala_iterable_unref0 (_type_param_list);
		}
	}
	_tmp246_ = self->priv->_method;
	vala_expression_set_symbol_reference ((ValaExpression*) self, (ValaSymbol*) _tmp246_);
	_tmp247_ = self->priv->_method;
	vala_code_node_check ((ValaCodeNode*) _tmp247_, context);
	_tmp248_ = self->priv->_method;
	_tmp249_ = vala_method_type_new (_tmp248_);
	_tmp250_ = _tmp249_;
	vala_expression_set_value_type ((ValaExpression*) self, (ValaDataType*) _tmp250_);
	_vala_code_node_unref0 (_tmp250_);
	_tmp251_ = vala_expression_get_value_type ((ValaExpression*) self);
	_tmp252_ = _tmp251_;
	_tmp253_ = vala_expression_get_target_type ((ValaExpression*) self);
	_tmp254_ = _tmp253_;
	_tmp255_ = vala_data_type_get_value_owned (_tmp254_);
	_tmp256_ = _tmp255_;
	vala_data_type_set_value_owned (_tmp252_, _tmp256_);
	_tmp257_ = vala_code_node_get_error ((ValaCodeNode*) self);
	_tmp258_ = _tmp257_;
	result = !_tmp258_;
	_vala_code_node_unref0 (m);
	_vala_iterator_unref0 (lambda_param_it);
	_vala_iterable_unref0 (lambda_params);
	_vala_code_node_unref0 (return_type);
	_vala_code_node_unref0 (cb);
	return result;
}


static void
vala_lambda_expression_real_emit (ValaCodeNode* base,
                                  ValaCodeGenerator* codegen)
{
	ValaLambdaExpression * self;
	self = (ValaLambdaExpression*) base;
	g_return_if_fail (codegen != NULL);
	vala_code_visitor_visit_lambda_expression ((ValaCodeVisitor*) codegen, self);
	vala_code_visitor_visit_expression ((ValaCodeVisitor*) codegen, (ValaExpression*) self);
}


static void
vala_lambda_expression_real_get_used_variables (ValaCodeNode* base,
                                                ValaCollection* collection)
{
	ValaLambdaExpression * self;
	ValaMethod* _tmp0_;
	gboolean _tmp1_;
	gboolean _tmp2_;
	self = (ValaLambdaExpression*) base;
	g_return_if_fail (collection != NULL);
	_tmp0_ = self->priv->_method;
	_tmp1_ = vala_method_get_closure (_tmp0_);
	_tmp2_ = _tmp1_;
	if (_tmp2_) {
		ValaMethod* _tmp3_;
		_tmp3_ = self->priv->_method;
		vala_method_get_captured_variables (_tmp3_, G_TYPE_CHECK_INSTANCE_CAST (collection, VALA_TYPE_COLLECTION, ValaCollection));
	}
}


ValaExpression*
vala_lambda_expression_get_expression_body (ValaLambdaExpression* self)
{
	ValaExpression* result;
	ValaExpression* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_expression_body;
	result = _tmp0_;
	return result;
}


void
vala_lambda_expression_set_expression_body (ValaLambdaExpression* self,
                                            ValaExpression* value)
{
	ValaExpression* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_code_node_ref0 (value);
	_vala_code_node_unref0 (self->priv->_expression_body);
	self->priv->_expression_body = _tmp0_;
}


ValaBlock*
vala_lambda_expression_get_statement_body (ValaLambdaExpression* self)
{
	ValaBlock* result;
	ValaBlock* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_statement_body;
	result = _tmp0_;
	return result;
}


void
vala_lambda_expression_set_statement_body (ValaLambdaExpression* self,
                                           ValaBlock* value)
{
	ValaBlock* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_code_node_ref0 (value);
	_vala_code_node_unref0 (self->priv->_statement_body);
	self->priv->_statement_body = _tmp0_;
}


ValaMethod*
vala_lambda_expression_get_method (ValaLambdaExpression* self)
{
	ValaMethod* result;
	ValaMethod* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_method;
	result = _tmp0_;
	return result;
}


void
vala_lambda_expression_set_method (ValaLambdaExpression* self,
                                   ValaMethod* value)
{
	ValaMethod* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_code_node_ref0 (value);
	_vala_code_node_unref0 (self->priv->_method);
	self->priv->_method = _tmp0_;
}


static void
vala_lambda_expression_class_init (ValaLambdaExpressionClass * klass)
{
	vala_lambda_expression_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_lambda_expression_finalize;
	g_type_class_add_private (klass, sizeof (ValaLambdaExpressionPrivate));
	((ValaCodeNodeClass *) klass)->accept = (void (*) (ValaCodeNode *, ValaCodeVisitor*)) vala_lambda_expression_real_accept;
	((ValaCodeNodeClass *) klass)->accept_children = (void (*) (ValaCodeNode *, ValaCodeVisitor*)) vala_lambda_expression_real_accept_children;
	((ValaExpressionClass *) klass)->is_pure = (gboolean (*) (ValaExpression *)) vala_lambda_expression_real_is_pure;
	((ValaCodeNodeClass *) klass)->check = (gboolean (*) (ValaCodeNode *, ValaCodeContext*)) vala_lambda_expression_real_check;
	((ValaCodeNodeClass *) klass)->emit = (void (*) (ValaCodeNode *, ValaCodeGenerator*)) vala_lambda_expression_real_emit;
	((ValaCodeNodeClass *) klass)->get_used_variables = (void (*) (ValaCodeNode *, ValaCollection*)) vala_lambda_expression_real_get_used_variables;
}


static void
vala_lambda_expression_instance_init (ValaLambdaExpression * self)
{
	GEqualFunc _tmp0_;
	ValaArrayList* _tmp1_;
	self->priv = VALA_LAMBDA_EXPRESSION_GET_PRIVATE (self);
	_tmp0_ = g_direct_equal;
	_tmp1_ = vala_array_list_new (VALA_TYPE_PARAMETER, (GBoxedCopyFunc) vala_code_node_ref, (GDestroyNotify) vala_code_node_unref, _tmp0_);
	self->priv->parameters = (ValaList*) _tmp1_;
}


static void
vala_lambda_expression_finalize (ValaCodeNode * obj)
{
	ValaLambdaExpression * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_LAMBDA_EXPRESSION, ValaLambdaExpression);
	_vala_code_node_unref0 (self->priv->_expression_body);
	_vala_code_node_unref0 (self->priv->_statement_body);
	_vala_code_node_unref0 (self->priv->_method);
	_vala_iterable_unref0 (self->priv->parameters);
	VALA_CODE_NODE_CLASS (vala_lambda_expression_parent_class)->finalize (obj);
}


/**
 * Represents a lambda expression in the source code. Lambda expressions are
 * anonymous methods with implicitly typed parameters.
 */
GType
vala_lambda_expression_get_type (void)
{
	static volatile gsize vala_lambda_expression_type_id__volatile = 0;
	if (g_once_init_enter (&vala_lambda_expression_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaLambdaExpressionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_lambda_expression_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaLambdaExpression), 0, (GInstanceInitFunc) vala_lambda_expression_instance_init, NULL };
		GType vala_lambda_expression_type_id;
		vala_lambda_expression_type_id = g_type_register_static (VALA_TYPE_EXPRESSION, "ValaLambdaExpression", &g_define_type_info, 0);
		g_once_init_leave (&vala_lambda_expression_type_id__volatile, vala_lambda_expression_type_id);
	}
	return vala_lambda_expression_type_id__volatile;
}



