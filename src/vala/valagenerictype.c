/* valagenerictype.c generated by valac, the Vala compiler
 * generated from valagenerictype.vala, do not modify */

/* valagenerictype.vala
 *
 * Copyright (C) 2008-2009  Jürg Billeter
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
#include <stdlib.h>
#include <string.h>
#include <valagee.h>


#define VALA_TYPE_CODE_NODE (vala_code_node_get_type ())
#define VALA_CODE_NODE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_NODE, ValaCodeNode))
#define VALA_CODE_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_NODE, ValaCodeNodeClass))
#define VALA_IS_CODE_NODE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_NODE))
#define VALA_IS_CODE_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_NODE))
#define VALA_CODE_NODE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_NODE, ValaCodeNodeClass))

typedef struct _ValaCodeNode ValaCodeNode;
typedef struct _ValaCodeNodeClass ValaCodeNodeClass;
typedef struct _ValaCodeNodePrivate ValaCodeNodePrivate;

#define VALA_TYPE_CODE_VISITOR (vala_code_visitor_get_type ())
#define VALA_CODE_VISITOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_VISITOR, ValaCodeVisitor))
#define VALA_CODE_VISITOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_VISITOR, ValaCodeVisitorClass))
#define VALA_IS_CODE_VISITOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_VISITOR))
#define VALA_IS_CODE_VISITOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_VISITOR))
#define VALA_CODE_VISITOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_VISITOR, ValaCodeVisitorClass))

typedef struct _ValaCodeVisitor ValaCodeVisitor;
typedef struct _ValaCodeVisitorClass ValaCodeVisitorClass;

#define VALA_TYPE_CODE_CONTEXT (vala_code_context_get_type ())
#define VALA_CODE_CONTEXT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_CONTEXT, ValaCodeContext))
#define VALA_CODE_CONTEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_CONTEXT, ValaCodeContextClass))
#define VALA_IS_CODE_CONTEXT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_CONTEXT))
#define VALA_IS_CODE_CONTEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_CONTEXT))
#define VALA_CODE_CONTEXT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_CONTEXT, ValaCodeContextClass))

typedef struct _ValaCodeContext ValaCodeContext;
typedef struct _ValaCodeContextClass ValaCodeContextClass;

#define VALA_TYPE_CODE_GENERATOR (vala_code_generator_get_type ())
#define VALA_CODE_GENERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_GENERATOR, ValaCodeGenerator))
#define VALA_CODE_GENERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_GENERATOR, ValaCodeGeneratorClass))
#define VALA_IS_CODE_GENERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_GENERATOR))
#define VALA_IS_CODE_GENERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_GENERATOR))
#define VALA_CODE_GENERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_GENERATOR, ValaCodeGeneratorClass))

typedef struct _ValaCodeGenerator ValaCodeGenerator;
typedef struct _ValaCodeGeneratorClass ValaCodeGeneratorClass;

#define VALA_TYPE_DATA_TYPE (vala_data_type_get_type ())
#define VALA_DATA_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_DATA_TYPE, ValaDataType))
#define VALA_DATA_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_DATA_TYPE, ValaDataTypeClass))
#define VALA_IS_DATA_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_DATA_TYPE))
#define VALA_IS_DATA_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_DATA_TYPE))
#define VALA_DATA_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_DATA_TYPE, ValaDataTypeClass))

typedef struct _ValaDataType ValaDataType;
typedef struct _ValaDataTypeClass ValaDataTypeClass;

#define VALA_TYPE_EXPRESSION (vala_expression_get_type ())
#define VALA_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_EXPRESSION, ValaExpression))
#define VALA_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_EXPRESSION, ValaExpressionClass))
#define VALA_IS_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_EXPRESSION))
#define VALA_IS_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_EXPRESSION))
#define VALA_EXPRESSION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_EXPRESSION, ValaExpressionClass))

typedef struct _ValaExpression ValaExpression;
typedef struct _ValaExpressionClass ValaExpressionClass;

#define VALA_TYPE_SYMBOL (vala_symbol_get_type ())
#define VALA_SYMBOL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SYMBOL, ValaSymbol))
#define VALA_SYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SYMBOL, ValaSymbolClass))
#define VALA_IS_SYMBOL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SYMBOL))
#define VALA_IS_SYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SYMBOL))
#define VALA_SYMBOL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SYMBOL, ValaSymbolClass))

typedef struct _ValaSymbol ValaSymbol;
typedef struct _ValaSymbolClass ValaSymbolClass;

#define VALA_TYPE_VARIABLE (vala_variable_get_type ())
#define VALA_VARIABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_VARIABLE, ValaVariable))
#define VALA_VARIABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_VARIABLE, ValaVariableClass))
#define VALA_IS_VARIABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_VARIABLE))
#define VALA_IS_VARIABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_VARIABLE))
#define VALA_VARIABLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_VARIABLE, ValaVariableClass))

typedef struct _ValaVariable ValaVariable;
typedef struct _ValaVariableClass ValaVariableClass;

#define VALA_TYPE_ATTRIBUTE (vala_attribute_get_type ())
#define VALA_ATTRIBUTE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_ATTRIBUTE, ValaAttribute))
#define VALA_ATTRIBUTE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_ATTRIBUTE, ValaAttributeClass))
#define VALA_IS_ATTRIBUTE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_ATTRIBUTE))
#define VALA_IS_ATTRIBUTE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_ATTRIBUTE))
#define VALA_ATTRIBUTE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_ATTRIBUTE, ValaAttributeClass))

typedef struct _ValaAttribute ValaAttribute;
typedef struct _ValaAttributeClass ValaAttributeClass;
typedef struct _ValaDataTypePrivate ValaDataTypePrivate;

#define VALA_TYPE_SCOPE (vala_scope_get_type ())
#define VALA_SCOPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SCOPE, ValaScope))
#define VALA_SCOPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SCOPE, ValaScopeClass))
#define VALA_IS_SCOPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SCOPE))
#define VALA_IS_SCOPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SCOPE))
#define VALA_SCOPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SCOPE, ValaScopeClass))

typedef struct _ValaScope ValaScope;
typedef struct _ValaScopeClass ValaScopeClass;

#define VALA_TYPE_PARAMETER (vala_parameter_get_type ())
#define VALA_PARAMETER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_PARAMETER, ValaParameter))
#define VALA_PARAMETER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_PARAMETER, ValaParameterClass))
#define VALA_IS_PARAMETER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_PARAMETER))
#define VALA_IS_PARAMETER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_PARAMETER))
#define VALA_PARAMETER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_PARAMETER, ValaParameterClass))

typedef struct _ValaParameter ValaParameter;
typedef struct _ValaParameterClass ValaParameterClass;

#define VALA_TYPE_TYPEPARAMETER (vala_typeparameter_get_type ())
#define VALA_TYPEPARAMETER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_TYPEPARAMETER, ValaTypeParameter))
#define VALA_TYPEPARAMETER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_TYPEPARAMETER, ValaTypeParameterClass))
#define VALA_IS_TYPEPARAMETER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_TYPEPARAMETER))
#define VALA_IS_TYPEPARAMETER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_TYPEPARAMETER))
#define VALA_TYPEPARAMETER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_TYPEPARAMETER, ValaTypeParameterClass))

typedef struct _ValaTypeParameter ValaTypeParameter;
typedef struct _ValaTypeParameterClass ValaTypeParameterClass;

#define VALA_TYPE_GENERIC_TYPE (vala_generic_type_get_type ())
#define VALA_GENERIC_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_GENERIC_TYPE, ValaGenericType))
#define VALA_GENERIC_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_GENERIC_TYPE, ValaGenericTypeClass))
#define VALA_IS_GENERIC_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_GENERIC_TYPE))
#define VALA_IS_GENERIC_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_GENERIC_TYPE))
#define VALA_GENERIC_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_GENERIC_TYPE, ValaGenericTypeClass))

typedef struct _ValaGenericType ValaGenericType;
typedef struct _ValaGenericTypeClass ValaGenericTypeClass;
typedef struct _ValaGenericTypePrivate ValaGenericTypePrivate;

#define VALA_TYPE_SOURCE_REFERENCE (vala_source_reference_get_type ())
#define VALA_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReference))
#define VALA_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))
#define VALA_IS_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_IS_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_SOURCE_REFERENCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))

typedef struct _ValaSourceReference ValaSourceReference;
typedef struct _ValaSourceReferenceClass ValaSourceReferenceClass;
#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))

struct _ValaCodeNode {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ValaCodeNodePrivate * priv;
	GList* attributes;
};

struct _ValaCodeNodeClass {
	GTypeClass parent_class;
	void (*finalize) (ValaCodeNode *self);
	void (*accept) (ValaCodeNode* self, ValaCodeVisitor* visitor);
	void (*accept_children) (ValaCodeNode* self, ValaCodeVisitor* visitor);
	gboolean (*check) (ValaCodeNode* self, ValaCodeContext* context);
	void (*emit) (ValaCodeNode* self, ValaCodeGenerator* codegen);
	void (*replace_type) (ValaCodeNode* self, ValaDataType* old_type, ValaDataType* new_type);
	void (*replace_expression) (ValaCodeNode* self, ValaExpression* old_node, ValaExpression* new_node);
	gchar* (*to_string) (ValaCodeNode* self);
	void (*get_defined_variables) (ValaCodeNode* self, ValaCollection* collection);
	void (*get_used_variables) (ValaCodeNode* self, ValaCollection* collection);
};

struct _ValaDataType {
	ValaCodeNode parent_instance;
	ValaDataTypePrivate * priv;
};

struct _ValaDataTypeClass {
	ValaCodeNodeClass parent_class;
	gchar* (*to_qualified_string) (ValaDataType* self, ValaScope* scope);
	ValaDataType* (*copy) (ValaDataType* self);
	gboolean (*equals) (ValaDataType* self, ValaDataType* type2);
	gboolean (*stricter) (ValaDataType* self, ValaDataType* type2);
	gboolean (*compatible) (ValaDataType* self, ValaDataType* target_type);
	gboolean (*is_invokable) (ValaDataType* self);
	ValaDataType* (*get_return_type) (ValaDataType* self);
	ValaList* (*get_parameters) (ValaDataType* self);
	gboolean (*is_reference_type_or_type_parameter) (ValaDataType* self);
	gboolean (*is_array) (ValaDataType* self);
	gboolean (*is_accessible) (ValaDataType* self, ValaSymbol* sym);
	ValaSymbol* (*get_member) (ValaDataType* self, const gchar* member_name);
	ValaSymbol* (*get_pointer_member) (ValaDataType* self, const gchar* member_name);
	gboolean (*is_real_struct_type) (ValaDataType* self);
	gboolean (*is_disposable) (ValaDataType* self);
	ValaDataType* (*get_actual_type) (ValaDataType* self, ValaDataType* derived_instance_type, ValaList* method_type_arguments, ValaCodeNode* node_reference);
	ValaDataType* (*infer_type_argument) (ValaDataType* self, ValaTypeParameter* type_param, ValaDataType* value_type);
};

struct _ValaGenericType {
	ValaDataType parent_instance;
	ValaGenericTypePrivate * priv;
};

struct _ValaGenericTypeClass {
	ValaDataTypeClass parent_class;
};


static gpointer vala_generic_type_parent_class = NULL;

gpointer vala_code_node_ref (gpointer instance);
void vala_code_node_unref (gpointer instance);
GParamSpec* vala_param_spec_code_node (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_code_node (GValue* value, gpointer v_object);
void vala_value_take_code_node (GValue* value, gpointer v_object);
gpointer vala_value_get_code_node (const GValue* value);
GType vala_code_node_get_type (void) G_GNUC_CONST;
gpointer vala_code_visitor_ref (gpointer instance);
void vala_code_visitor_unref (gpointer instance);
GParamSpec* vala_param_spec_code_visitor (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_code_visitor (GValue* value, gpointer v_object);
void vala_value_take_code_visitor (GValue* value, gpointer v_object);
gpointer vala_value_get_code_visitor (const GValue* value);
GType vala_code_visitor_get_type (void) G_GNUC_CONST;
gpointer vala_code_context_ref (gpointer instance);
void vala_code_context_unref (gpointer instance);
GParamSpec* vala_param_spec_code_context (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_code_context (GValue* value, gpointer v_object);
void vala_value_take_code_context (GValue* value, gpointer v_object);
gpointer vala_value_get_code_context (const GValue* value);
GType vala_code_context_get_type (void) G_GNUC_CONST;
GType vala_code_generator_get_type (void) G_GNUC_CONST;
GType vala_data_type_get_type (void) G_GNUC_CONST;
GType vala_expression_get_type (void) G_GNUC_CONST;
GType vala_symbol_get_type (void) G_GNUC_CONST;
GType vala_variable_get_type (void) G_GNUC_CONST;
GType vala_attribute_get_type (void) G_GNUC_CONST;
gpointer vala_scope_ref (gpointer instance);
void vala_scope_unref (gpointer instance);
GParamSpec* vala_param_spec_scope (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_scope (GValue* value, gpointer v_object);
void vala_value_take_scope (GValue* value, gpointer v_object);
gpointer vala_value_get_scope (const GValue* value);
GType vala_scope_get_type (void) G_GNUC_CONST;
GType vala_parameter_get_type (void) G_GNUC_CONST;
GType vala_typeparameter_get_type (void) G_GNUC_CONST;
GType vala_generic_type_get_type (void) G_GNUC_CONST;
enum  {
	VALA_GENERIC_TYPE_DUMMY_PROPERTY
};
ValaGenericType* vala_generic_type_new (ValaTypeParameter* type_parameter);
ValaGenericType* vala_generic_type_construct (GType object_type, ValaTypeParameter* type_parameter);
ValaDataType* vala_data_type_construct (GType object_type);
void vala_data_type_set_type_parameter (ValaDataType* self, ValaTypeParameter* value);
void vala_data_type_set_nullable (ValaDataType* self, gboolean value);
static ValaDataType* vala_generic_type_real_copy (ValaDataType* base);
ValaTypeParameter* vala_data_type_get_type_parameter (ValaDataType* self);
gpointer vala_source_reference_ref (gpointer instance);
void vala_source_reference_unref (gpointer instance);
GParamSpec* vala_param_spec_source_reference (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_source_reference (GValue* value, gpointer v_object);
void vala_value_take_source_reference (GValue* value, gpointer v_object);
gpointer vala_value_get_source_reference (const GValue* value);
GType vala_source_reference_get_type (void) G_GNUC_CONST;
ValaSourceReference* vala_code_node_get_source_reference (ValaCodeNode* self);
void vala_code_node_set_source_reference (ValaCodeNode* self, ValaSourceReference* value);
gboolean vala_data_type_get_value_owned (ValaDataType* self);
void vala_data_type_set_value_owned (ValaDataType* self, gboolean value);
gboolean vala_data_type_get_nullable (ValaDataType* self);
gboolean vala_data_type_get_floating_reference (ValaDataType* self);
void vala_data_type_set_floating_reference (ValaDataType* self, gboolean value);
static ValaDataType* vala_generic_type_real_infer_type_argument (ValaDataType* base, ValaTypeParameter* type_param, ValaDataType* value_type);
ValaDataType* vala_data_type_copy (ValaDataType* self);
static gchar* vala_generic_type_real_to_qualified_string (ValaDataType* base, ValaScope* scope);
const gchar* vala_symbol_get_name (ValaSymbol* self);
static ValaSymbol* vala_generic_type_real_get_member (ValaDataType* base, const gchar* member_name);


ValaGenericType* vala_generic_type_construct (GType object_type, ValaTypeParameter* type_parameter) {
	ValaGenericType* self = NULL;
	ValaTypeParameter* _tmp0_ = NULL;
	g_return_val_if_fail (type_parameter != NULL, NULL);
	self = (ValaGenericType*) vala_data_type_construct (object_type);
	_tmp0_ = type_parameter;
	vala_data_type_set_type_parameter ((ValaDataType*) self, _tmp0_);
	vala_data_type_set_nullable ((ValaDataType*) self, TRUE);
	return self;
}


ValaGenericType* vala_generic_type_new (ValaTypeParameter* type_parameter) {
	return vala_generic_type_construct (VALA_TYPE_GENERIC_TYPE, type_parameter);
}


static ValaDataType* vala_generic_type_real_copy (ValaDataType* base) {
	ValaGenericType * self;
	ValaDataType* result = NULL;
	ValaGenericType* _result_ = NULL;
	ValaTypeParameter* _tmp0_ = NULL;
	ValaTypeParameter* _tmp1_ = NULL;
	ValaGenericType* _tmp2_ = NULL;
	ValaSourceReference* _tmp3_ = NULL;
	ValaSourceReference* _tmp4_ = NULL;
	gboolean _tmp5_ = FALSE;
	gboolean _tmp6_ = FALSE;
	gboolean _tmp7_ = FALSE;
	gboolean _tmp8_ = FALSE;
	gboolean _tmp9_ = FALSE;
	gboolean _tmp10_ = FALSE;
	self = (ValaGenericType*) base;
	_tmp0_ = vala_data_type_get_type_parameter ((ValaDataType*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = vala_generic_type_new (_tmp1_);
	_result_ = _tmp2_;
	_tmp3_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp4_ = _tmp3_;
	vala_code_node_set_source_reference ((ValaCodeNode*) _result_, _tmp4_);
	_tmp5_ = vala_data_type_get_value_owned ((ValaDataType*) self);
	_tmp6_ = _tmp5_;
	vala_data_type_set_value_owned ((ValaDataType*) _result_, _tmp6_);
	_tmp7_ = vala_data_type_get_nullable ((ValaDataType*) self);
	_tmp8_ = _tmp7_;
	vala_data_type_set_nullable ((ValaDataType*) _result_, _tmp8_);
	_tmp9_ = vala_data_type_get_floating_reference ((ValaDataType*) self);
	_tmp10_ = _tmp9_;
	vala_data_type_set_floating_reference ((ValaDataType*) _result_, _tmp10_);
	result = (ValaDataType*) _result_;
	return result;
}


static ValaDataType* vala_generic_type_real_infer_type_argument (ValaDataType* base, ValaTypeParameter* type_param, ValaDataType* value_type) {
	ValaGenericType * self;
	ValaDataType* result = NULL;
	ValaTypeParameter* _tmp0_ = NULL;
	ValaTypeParameter* _tmp1_ = NULL;
	ValaTypeParameter* _tmp2_ = NULL;
	self = (ValaGenericType*) base;
	g_return_val_if_fail (type_param != NULL, NULL);
	g_return_val_if_fail (value_type != NULL, NULL);
	_tmp0_ = vala_data_type_get_type_parameter ((ValaDataType*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = type_param;
	if (_tmp1_ == _tmp2_) {
		ValaDataType* ret = NULL;
		ValaDataType* _tmp3_ = NULL;
		ValaDataType* _tmp4_ = NULL;
		ValaDataType* _tmp5_ = NULL;
		_tmp3_ = value_type;
		_tmp4_ = vala_data_type_copy (_tmp3_);
		ret = _tmp4_;
		_tmp5_ = ret;
		vala_data_type_set_value_owned (_tmp5_, TRUE);
		result = ret;
		return result;
	}
	result = NULL;
	return result;
}


static gchar* vala_generic_type_real_to_qualified_string (ValaDataType* base, ValaScope* scope) {
	ValaGenericType * self;
	gchar* result = NULL;
	ValaTypeParameter* _tmp0_ = NULL;
	ValaTypeParameter* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
	self = (ValaGenericType*) base;
	_tmp0_ = vala_data_type_get_type_parameter ((ValaDataType*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = vala_symbol_get_name ((ValaSymbol*) _tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = g_strdup (_tmp3_);
	result = _tmp4_;
	return result;
}


static ValaSymbol* vala_generic_type_real_get_member (ValaDataType* base, const gchar* member_name) {
	ValaGenericType * self;
	ValaSymbol* result = NULL;
	self = (ValaGenericType*) base;
	g_return_val_if_fail (member_name != NULL, NULL);
	result = NULL;
	return result;
}


static void vala_generic_type_class_init (ValaGenericTypeClass * klass) {
	vala_generic_type_parent_class = g_type_class_peek_parent (klass);
	((ValaDataTypeClass *) klass)->copy = (ValaDataType* (*)(ValaDataType*)) vala_generic_type_real_copy;
	((ValaDataTypeClass *) klass)->infer_type_argument = (ValaDataType* (*)(ValaDataType*, ValaTypeParameter*, ValaDataType*)) vala_generic_type_real_infer_type_argument;
	((ValaDataTypeClass *) klass)->to_qualified_string = (gchar* (*)(ValaDataType*, ValaScope*)) vala_generic_type_real_to_qualified_string;
	((ValaDataTypeClass *) klass)->get_member = (ValaSymbol* (*)(ValaDataType*, const gchar*)) vala_generic_type_real_get_member;
}


static void vala_generic_type_instance_init (ValaGenericType * self) {
}


/**
 * The type of a generic type parameter.
 */
GType vala_generic_type_get_type (void) {
	static volatile gsize vala_generic_type_type_id__volatile = 0;
	if (g_once_init_enter (&vala_generic_type_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaGenericTypeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_generic_type_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaGenericType), 0, (GInstanceInitFunc) vala_generic_type_instance_init, NULL };
		GType vala_generic_type_type_id;
		vala_generic_type_type_id = g_type_register_static (VALA_TYPE_DATA_TYPE, "ValaGenericType", &g_define_type_info, 0);
		g_once_init_leave (&vala_generic_type_type_id__volatile, vala_generic_type_type_id);
	}
	return vala_generic_type_type_id__volatile;
}



