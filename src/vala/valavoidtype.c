/* valavoidtype.c generated by valac, the Vala compiler
 * generated from valavoidtype.vala, do not modify */

/* valavoidtype.vala
 *
 * Copyright (C) 2007-2008  Jürg Billeter
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

#define VALA_TYPE_MEMBER_ACCESS (vala_member_access_get_type ())
#define VALA_MEMBER_ACCESS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_MEMBER_ACCESS, ValaMemberAccess))
#define VALA_MEMBER_ACCESS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_MEMBER_ACCESS, ValaMemberAccessClass))
#define VALA_IS_MEMBER_ACCESS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_MEMBER_ACCESS))
#define VALA_IS_MEMBER_ACCESS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_MEMBER_ACCESS))
#define VALA_MEMBER_ACCESS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_MEMBER_ACCESS, ValaMemberAccessClass))

typedef struct _ValaMemberAccess ValaMemberAccess;
typedef struct _ValaMemberAccessClass ValaMemberAccessClass;

#define VALA_TYPE_VOID_TYPE (vala_void_type_get_type ())
#define VALA_VOID_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_VOID_TYPE, ValaVoidType))
#define VALA_VOID_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_VOID_TYPE, ValaVoidTypeClass))
#define VALA_IS_VOID_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_VOID_TYPE))
#define VALA_IS_VOID_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_VOID_TYPE))
#define VALA_VOID_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_VOID_TYPE, ValaVoidTypeClass))

typedef struct _ValaVoidType ValaVoidType;
typedef struct _ValaVoidTypeClass ValaVoidTypeClass;
typedef struct _ValaVoidTypePrivate ValaVoidTypePrivate;

#define VALA_TYPE_SOURCE_REFERENCE (vala_source_reference_get_type ())
#define VALA_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReference))
#define VALA_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))
#define VALA_IS_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_IS_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_SOURCE_REFERENCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))

typedef struct _ValaSourceReference ValaSourceReference;
typedef struct _ValaSourceReferenceClass ValaSourceReferenceClass;

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
	ValaDataType* (*get_actual_type) (ValaDataType* self, ValaDataType* derived_instance_type, ValaMemberAccess* method_access, ValaCodeNode* node_reference);
};

struct _ValaVoidType {
	ValaDataType parent_instance;
	ValaVoidTypePrivate * priv;
};

struct _ValaVoidTypeClass {
	ValaDataTypeClass parent_class;
};


static gpointer vala_void_type_parent_class = NULL;

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
GType vala_member_access_get_type (void) G_GNUC_CONST;
GType vala_void_type_get_type (void) G_GNUC_CONST;
enum  {
	VALA_VOID_TYPE_DUMMY_PROPERTY
};
gpointer vala_source_reference_ref (gpointer instance);
void vala_source_reference_unref (gpointer instance);
GParamSpec* vala_param_spec_source_reference (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_source_reference (GValue* value, gpointer v_object);
void vala_value_take_source_reference (GValue* value, gpointer v_object);
gpointer vala_value_get_source_reference (const GValue* value);
GType vala_source_reference_get_type (void) G_GNUC_CONST;
ValaVoidType* vala_void_type_new (ValaSourceReference* source_reference);
ValaVoidType* vala_void_type_construct (GType object_type, ValaSourceReference* source_reference);
ValaDataType* vala_data_type_construct (GType object_type);
void vala_code_node_set_source_reference (ValaCodeNode* self, ValaSourceReference* value);
static gboolean vala_void_type_real_stricter (ValaDataType* base, ValaDataType* type2);
static gchar* vala_void_type_real_to_qualified_string (ValaDataType* base, ValaScope* scope);
static ValaDataType* vala_void_type_real_copy (ValaDataType* base);
ValaSourceReference* vala_code_node_get_source_reference (ValaCodeNode* self);


ValaVoidType* vala_void_type_construct (GType object_type, ValaSourceReference* source_reference) {
	ValaVoidType* self = NULL;
	ValaSourceReference* _tmp0_ = NULL;
	self = (ValaVoidType*) vala_data_type_construct (object_type);
	_tmp0_ = source_reference;
	vala_code_node_set_source_reference ((ValaCodeNode*) self, _tmp0_);
	return self;
}


ValaVoidType* vala_void_type_new (ValaSourceReference* source_reference) {
	return vala_void_type_construct (VALA_TYPE_VOID_TYPE, source_reference);
}


static gboolean vala_void_type_real_stricter (ValaDataType* base, ValaDataType* type2) {
	ValaVoidType * self;
	gboolean result = FALSE;
	ValaDataType* _tmp0_ = NULL;
	self = (ValaVoidType*) base;
	g_return_val_if_fail (type2 != NULL, FALSE);
	_tmp0_ = type2;
	result = G_TYPE_CHECK_INSTANCE_TYPE (_tmp0_, VALA_TYPE_VOID_TYPE);
	return result;
}


static gchar* vala_void_type_real_to_qualified_string (ValaDataType* base, ValaScope* scope) {
	ValaVoidType * self;
	gchar* result = NULL;
	gchar* _tmp0_ = NULL;
	self = (ValaVoidType*) base;
	_tmp0_ = g_strdup ("void");
	result = _tmp0_;
	return result;
}


static ValaDataType* vala_void_type_real_copy (ValaDataType* base) {
	ValaVoidType * self;
	ValaDataType* result = NULL;
	ValaSourceReference* _tmp0_ = NULL;
	ValaSourceReference* _tmp1_ = NULL;
	ValaVoidType* _tmp2_ = NULL;
	self = (ValaVoidType*) base;
	_tmp0_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = vala_void_type_new (_tmp1_);
	result = (ValaDataType*) _tmp2_;
	return result;
}


static void vala_void_type_class_init (ValaVoidTypeClass * klass) {
	vala_void_type_parent_class = g_type_class_peek_parent (klass);
	((ValaDataTypeClass *) klass)->stricter = vala_void_type_real_stricter;
	((ValaDataTypeClass *) klass)->to_qualified_string = vala_void_type_real_to_qualified_string;
	((ValaDataTypeClass *) klass)->copy = vala_void_type_real_copy;
}


static void vala_void_type_instance_init (ValaVoidType * self) {
}


/**
 * The void type.
 */
GType vala_void_type_get_type (void) {
	static volatile gsize vala_void_type_type_id__volatile = 0;
	if (g_once_init_enter (&vala_void_type_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaVoidTypeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_void_type_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaVoidType), 0, (GInstanceInitFunc) vala_void_type_instance_init, NULL };
		GType vala_void_type_type_id;
		vala_void_type_type_id = g_type_register_static (VALA_TYPE_DATA_TYPE, "ValaVoidType", &g_define_type_info, 0);
		g_once_init_leave (&vala_void_type_type_id__volatile, vala_void_type_type_id);
	}
	return vala_void_type_type_id__volatile;
}



