/* valaunresolvedtype.c generated by valac, the Vala compiler
 * generated from valaunresolvedtype.vala, do not modify */

/* valaunresolvedtype.vala
 *
 * Copyright (C) 2006-2008  Jürg Billeter, Raffaele Sandrini
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
 *	Raffaele Sandrini <raffaele@sandrini.ch>
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

#define VALA_TYPE_UNRESOLVED_TYPE (vala_unresolved_type_get_type ())
#define VALA_UNRESOLVED_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_UNRESOLVED_TYPE, ValaUnresolvedType))
#define VALA_UNRESOLVED_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_UNRESOLVED_TYPE, ValaUnresolvedTypeClass))
#define VALA_IS_UNRESOLVED_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_UNRESOLVED_TYPE))
#define VALA_IS_UNRESOLVED_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_UNRESOLVED_TYPE))
#define VALA_UNRESOLVED_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_UNRESOLVED_TYPE, ValaUnresolvedTypeClass))

typedef struct _ValaUnresolvedType ValaUnresolvedType;
typedef struct _ValaUnresolvedTypeClass ValaUnresolvedTypeClass;
typedef struct _ValaUnresolvedTypePrivate ValaUnresolvedTypePrivate;

#define VALA_TYPE_UNRESOLVED_SYMBOL (vala_unresolved_symbol_get_type ())
#define VALA_UNRESOLVED_SYMBOL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_UNRESOLVED_SYMBOL, ValaUnresolvedSymbol))
#define VALA_UNRESOLVED_SYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_UNRESOLVED_SYMBOL, ValaUnresolvedSymbolClass))
#define VALA_IS_UNRESOLVED_SYMBOL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_UNRESOLVED_SYMBOL))
#define VALA_IS_UNRESOLVED_SYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_UNRESOLVED_SYMBOL))
#define VALA_UNRESOLVED_SYMBOL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_UNRESOLVED_SYMBOL, ValaUnresolvedSymbolClass))

typedef struct _ValaUnresolvedSymbol ValaUnresolvedSymbol;
typedef struct _ValaUnresolvedSymbolClass ValaUnresolvedSymbolClass;
#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))

#define VALA_TYPE_SOURCE_REFERENCE (vala_source_reference_get_type ())
#define VALA_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReference))
#define VALA_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))
#define VALA_IS_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_IS_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_SOURCE_REFERENCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))

typedef struct _ValaSourceReference ValaSourceReference;
typedef struct _ValaSourceReferenceClass ValaSourceReferenceClass;

#define VALA_TYPE_MEMBER_ACCESS (vala_member_access_get_type ())
#define VALA_MEMBER_ACCESS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_MEMBER_ACCESS, ValaMemberAccess))
#define VALA_MEMBER_ACCESS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_MEMBER_ACCESS, ValaMemberAccessClass))
#define VALA_IS_MEMBER_ACCESS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_MEMBER_ACCESS))
#define VALA_IS_MEMBER_ACCESS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_MEMBER_ACCESS))
#define VALA_MEMBER_ACCESS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_MEMBER_ACCESS, ValaMemberAccessClass))

typedef struct _ValaMemberAccess ValaMemberAccess;
typedef struct _ValaMemberAccessClass ValaMemberAccessClass;
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

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

struct _ValaUnresolvedType {
	ValaDataType parent_instance;
	ValaUnresolvedTypePrivate * priv;
};

struct _ValaUnresolvedTypeClass {
	ValaDataTypeClass parent_class;
};

struct _ValaUnresolvedTypePrivate {
	ValaUnresolvedSymbol* _unresolved_symbol;
};


static gpointer vala_unresolved_type_parent_class = NULL;

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
GType vala_unresolved_type_get_type (void) G_GNUC_CONST;
GType vala_unresolved_symbol_get_type (void) G_GNUC_CONST;
#define VALA_UNRESOLVED_TYPE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_UNRESOLVED_TYPE, ValaUnresolvedTypePrivate))
enum  {
	VALA_UNRESOLVED_TYPE_DUMMY_PROPERTY
};
ValaUnresolvedType* vala_unresolved_type_new (void);
ValaUnresolvedType* vala_unresolved_type_construct (GType object_type);
ValaDataType* vala_data_type_construct (GType object_type);
gpointer vala_source_reference_ref (gpointer instance);
void vala_source_reference_unref (gpointer instance);
GParamSpec* vala_param_spec_source_reference (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_source_reference (GValue* value, gpointer v_object);
void vala_value_take_source_reference (GValue* value, gpointer v_object);
gpointer vala_value_get_source_reference (const GValue* value);
GType vala_source_reference_get_type (void) G_GNUC_CONST;
ValaUnresolvedType* vala_unresolved_type_new_from_symbol (ValaUnresolvedSymbol* symbol, ValaSourceReference* source);
ValaUnresolvedType* vala_unresolved_type_construct_from_symbol (GType object_type, ValaUnresolvedSymbol* symbol, ValaSourceReference* source);
void vala_unresolved_type_set_unresolved_symbol (ValaUnresolvedType* self, ValaUnresolvedSymbol* value);
void vala_code_node_set_source_reference (ValaCodeNode* self, ValaSourceReference* value);
ValaUnresolvedType* vala_unresolved_type_new_from_expression (ValaExpression* expr);
ValaUnresolvedSymbol* vala_unresolved_symbol_new_from_expression (ValaExpression* expr);
ValaSourceReference* vala_code_node_get_source_reference (ValaCodeNode* self);
void vala_data_type_set_value_owned (ValaDataType* self, gboolean value);
GType vala_member_access_get_type (void) G_GNUC_CONST;
ValaList* vala_member_access_get_type_arguments (ValaMemberAccess* self);
void vala_data_type_add_type_argument (ValaDataType* self, ValaDataType* arg);
static ValaDataType* vala_unresolved_type_real_copy (ValaDataType* base);
gboolean vala_data_type_get_value_owned (ValaDataType* self);
gboolean vala_data_type_get_nullable (ValaDataType* self);
void vala_data_type_set_nullable (ValaDataType* self, gboolean value);
gboolean vala_data_type_get_is_dynamic (ValaDataType* self);
void vala_data_type_set_is_dynamic (ValaDataType* self, gboolean value);
ValaUnresolvedSymbol* vala_unresolved_type_get_unresolved_symbol (ValaUnresolvedType* self);
ValaUnresolvedSymbol* vala_unresolved_symbol_copy (ValaUnresolvedSymbol* self);
ValaList* vala_data_type_get_type_arguments (ValaDataType* self);
ValaDataType* vala_data_type_copy (ValaDataType* self);
static gchar* vala_unresolved_type_real_to_qualified_string (ValaDataType* base, ValaScope* scope);
gchar* vala_code_node_to_string (ValaCodeNode* self);
gchar* vala_data_type_to_qualified_string (ValaDataType* self, ValaScope* scope);
static gboolean vala_unresolved_type_real_is_disposable (ValaDataType* base);
static void vala_unresolved_type_finalize (ValaCodeNode* obj);


ValaUnresolvedType* vala_unresolved_type_construct (GType object_type) {
	ValaUnresolvedType* self = NULL;
	self = (ValaUnresolvedType*) vala_data_type_construct (object_type);
	return self;
}


ValaUnresolvedType* vala_unresolved_type_new (void) {
	return vala_unresolved_type_construct (VALA_TYPE_UNRESOLVED_TYPE);
}


/**
 * Creates a new type reference.
 *
 * @param symbol    unresolved type symbol
 * @param source    reference to source code
 * @return          newly created type reference
 */
ValaUnresolvedType* vala_unresolved_type_construct_from_symbol (GType object_type, ValaUnresolvedSymbol* symbol, ValaSourceReference* source) {
	ValaUnresolvedType* self = NULL;
	ValaUnresolvedSymbol* _tmp0_ = NULL;
	ValaSourceReference* _tmp1_ = NULL;
	g_return_val_if_fail (symbol != NULL, NULL);
	self = (ValaUnresolvedType*) vala_data_type_construct (object_type);
	_tmp0_ = symbol;
	vala_unresolved_type_set_unresolved_symbol (self, _tmp0_);
	_tmp1_ = source;
	vala_code_node_set_source_reference ((ValaCodeNode*) self, _tmp1_);
	return self;
}


ValaUnresolvedType* vala_unresolved_type_new_from_symbol (ValaUnresolvedSymbol* symbol, ValaSourceReference* source) {
	return vala_unresolved_type_construct_from_symbol (VALA_TYPE_UNRESOLVED_TYPE, symbol, source);
}


/**
 * Creates a new type reference from a code expression.
 *
 * @param expr   member access expression
 * @return       newly created type reference
 */
static gpointer _vala_code_node_ref0 (gpointer self) {
	return self ? vala_code_node_ref (self) : NULL;
}


ValaUnresolvedType* vala_unresolved_type_new_from_expression (ValaExpression* expr) {
	ValaUnresolvedType* result = NULL;
	ValaUnresolvedSymbol* sym = NULL;
	ValaExpression* _tmp0_ = NULL;
	ValaUnresolvedSymbol* _tmp1_ = NULL;
	ValaUnresolvedSymbol* _tmp2_ = NULL;
	g_return_val_if_fail (expr != NULL, NULL);
	_tmp0_ = expr;
	_tmp1_ = vala_unresolved_symbol_new_from_expression (_tmp0_);
	sym = _tmp1_;
	_tmp2_ = sym;
	if (_tmp2_ != NULL) {
		ValaUnresolvedType* type_ref = NULL;
		ValaUnresolvedSymbol* _tmp3_ = NULL;
		ValaExpression* _tmp4_ = NULL;
		ValaSourceReference* _tmp5_ = NULL;
		ValaSourceReference* _tmp6_ = NULL;
		ValaUnresolvedType* _tmp7_ = NULL;
		ValaUnresolvedType* _tmp8_ = NULL;
		ValaMemberAccess* ma = NULL;
		ValaExpression* _tmp9_ = NULL;
		ValaMemberAccess* _tmp10_ = NULL;
		_tmp3_ = sym;
		_tmp4_ = expr;
		_tmp5_ = vala_code_node_get_source_reference ((ValaCodeNode*) _tmp4_);
		_tmp6_ = _tmp5_;
		_tmp7_ = vala_unresolved_type_new_from_symbol (_tmp3_, _tmp6_);
		type_ref = _tmp7_;
		_tmp8_ = type_ref;
		vala_data_type_set_value_owned ((ValaDataType*) _tmp8_, TRUE);
		_tmp9_ = expr;
		_tmp10_ = _vala_code_node_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp9_, VALA_TYPE_MEMBER_ACCESS, ValaMemberAccess));
		ma = _tmp10_;
		{
			ValaList* _arg_list = NULL;
			ValaMemberAccess* _tmp11_ = NULL;
			ValaList* _tmp12_ = NULL;
			gint _arg_size = 0;
			ValaList* _tmp13_ = NULL;
			gint _tmp14_ = 0;
			gint _tmp15_ = 0;
			gint _arg_index = 0;
			_tmp11_ = ma;
			_tmp12_ = vala_member_access_get_type_arguments (_tmp11_);
			_arg_list = _tmp12_;
			_tmp13_ = _arg_list;
			_tmp14_ = vala_collection_get_size ((ValaCollection*) _tmp13_);
			_tmp15_ = _tmp14_;
			_arg_size = _tmp15_;
			_arg_index = -1;
			while (TRUE) {
				gint _tmp16_ = 0;
				gint _tmp17_ = 0;
				gint _tmp18_ = 0;
				ValaDataType* arg = NULL;
				ValaList* _tmp19_ = NULL;
				gint _tmp20_ = 0;
				gpointer _tmp21_ = NULL;
				ValaUnresolvedType* _tmp22_ = NULL;
				ValaDataType* _tmp23_ = NULL;
				_tmp16_ = _arg_index;
				_arg_index = _tmp16_ + 1;
				_tmp17_ = _arg_index;
				_tmp18_ = _arg_size;
				if (!(_tmp17_ < _tmp18_)) {
					break;
				}
				_tmp19_ = _arg_list;
				_tmp20_ = _arg_index;
				_tmp21_ = vala_list_get (_tmp19_, _tmp20_);
				arg = (ValaDataType*) _tmp21_;
				_tmp22_ = type_ref;
				_tmp23_ = arg;
				vala_data_type_add_type_argument ((ValaDataType*) _tmp22_, _tmp23_);
				_vala_code_node_unref0 (arg);
			}
			_vala_iterable_unref0 (_arg_list);
		}
		result = type_ref;
		_vala_code_node_unref0 (ma);
		_vala_code_node_unref0 (sym);
		return result;
	}
	result = NULL;
	_vala_code_node_unref0 (sym);
	return result;
}


static ValaDataType* vala_unresolved_type_real_copy (ValaDataType* base) {
	ValaUnresolvedType * self;
	ValaDataType* result = NULL;
	ValaUnresolvedType* _result_ = NULL;
	ValaUnresolvedType* _tmp0_ = NULL;
	ValaUnresolvedType* _tmp1_ = NULL;
	ValaSourceReference* _tmp2_ = NULL;
	ValaSourceReference* _tmp3_ = NULL;
	ValaUnresolvedType* _tmp4_ = NULL;
	gboolean _tmp5_ = FALSE;
	gboolean _tmp6_ = FALSE;
	ValaUnresolvedType* _tmp7_ = NULL;
	gboolean _tmp8_ = FALSE;
	gboolean _tmp9_ = FALSE;
	ValaUnresolvedType* _tmp10_ = NULL;
	gboolean _tmp11_ = FALSE;
	gboolean _tmp12_ = FALSE;
	ValaUnresolvedType* _tmp13_ = NULL;
	ValaUnresolvedSymbol* _tmp14_ = NULL;
	ValaUnresolvedSymbol* _tmp15_ = NULL;
	ValaUnresolvedSymbol* _tmp16_ = NULL;
	self = (ValaUnresolvedType*) base;
	_tmp0_ = vala_unresolved_type_new ();
	_result_ = _tmp0_;
	_tmp1_ = _result_;
	_tmp2_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp3_ = _tmp2_;
	vala_code_node_set_source_reference ((ValaCodeNode*) _tmp1_, _tmp3_);
	_tmp4_ = _result_;
	_tmp5_ = vala_data_type_get_value_owned ((ValaDataType*) self);
	_tmp6_ = _tmp5_;
	vala_data_type_set_value_owned ((ValaDataType*) _tmp4_, _tmp6_);
	_tmp7_ = _result_;
	_tmp8_ = vala_data_type_get_nullable ((ValaDataType*) self);
	_tmp9_ = _tmp8_;
	vala_data_type_set_nullable ((ValaDataType*) _tmp7_, _tmp9_);
	_tmp10_ = _result_;
	_tmp11_ = vala_data_type_get_is_dynamic ((ValaDataType*) self);
	_tmp12_ = _tmp11_;
	vala_data_type_set_is_dynamic ((ValaDataType*) _tmp10_, _tmp12_);
	_tmp13_ = _result_;
	_tmp14_ = self->priv->_unresolved_symbol;
	_tmp15_ = vala_unresolved_symbol_copy (_tmp14_);
	_tmp16_ = _tmp15_;
	vala_unresolved_type_set_unresolved_symbol (_tmp13_, _tmp16_);
	_vala_code_node_unref0 (_tmp16_);
	{
		ValaList* _arg_list = NULL;
		ValaList* _tmp17_ = NULL;
		gint _arg_size = 0;
		ValaList* _tmp18_ = NULL;
		gint _tmp19_ = 0;
		gint _tmp20_ = 0;
		gint _arg_index = 0;
		_tmp17_ = vala_data_type_get_type_arguments ((ValaDataType*) self);
		_arg_list = _tmp17_;
		_tmp18_ = _arg_list;
		_tmp19_ = vala_collection_get_size ((ValaCollection*) _tmp18_);
		_tmp20_ = _tmp19_;
		_arg_size = _tmp20_;
		_arg_index = -1;
		while (TRUE) {
			gint _tmp21_ = 0;
			gint _tmp22_ = 0;
			gint _tmp23_ = 0;
			ValaDataType* arg = NULL;
			ValaList* _tmp24_ = NULL;
			gint _tmp25_ = 0;
			gpointer _tmp26_ = NULL;
			ValaUnresolvedType* _tmp27_ = NULL;
			ValaDataType* _tmp28_ = NULL;
			ValaDataType* _tmp29_ = NULL;
			ValaDataType* _tmp30_ = NULL;
			_tmp21_ = _arg_index;
			_arg_index = _tmp21_ + 1;
			_tmp22_ = _arg_index;
			_tmp23_ = _arg_size;
			if (!(_tmp22_ < _tmp23_)) {
				break;
			}
			_tmp24_ = _arg_list;
			_tmp25_ = _arg_index;
			_tmp26_ = vala_list_get (_tmp24_, _tmp25_);
			arg = (ValaDataType*) _tmp26_;
			_tmp27_ = _result_;
			_tmp28_ = arg;
			_tmp29_ = vala_data_type_copy (_tmp28_);
			_tmp30_ = _tmp29_;
			vala_data_type_add_type_argument ((ValaDataType*) _tmp27_, _tmp30_);
			_vala_code_node_unref0 (_tmp30_);
			_vala_code_node_unref0 (arg);
		}
		_vala_iterable_unref0 (_arg_list);
	}
	result = (ValaDataType*) _result_;
	return result;
}


static gpointer _vala_iterable_ref0 (gpointer self) {
	return self ? vala_iterable_ref (self) : NULL;
}


static gchar* vala_unresolved_type_real_to_qualified_string (ValaDataType* base, ValaScope* scope) {
	ValaUnresolvedType * self;
	gchar* result = NULL;
	gchar* s = NULL;
	ValaUnresolvedSymbol* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	ValaList* type_args = NULL;
	ValaList* _tmp2_ = NULL;
	ValaList* _tmp3_ = NULL;
	gint _tmp4_ = 0;
	gint _tmp5_ = 0;
	gboolean _tmp35_ = FALSE;
	gboolean _tmp36_ = FALSE;
	self = (ValaUnresolvedType*) base;
	_tmp0_ = self->priv->_unresolved_symbol;
	_tmp1_ = vala_code_node_to_string ((ValaCodeNode*) _tmp0_);
	s = _tmp1_;
	_tmp2_ = vala_data_type_get_type_arguments ((ValaDataType*) self);
	type_args = _tmp2_;
	_tmp3_ = type_args;
	_tmp4_ = vala_collection_get_size ((ValaCollection*) _tmp3_);
	_tmp5_ = _tmp4_;
	if (_tmp5_ > 0) {
		const gchar* _tmp6_ = NULL;
		gchar* _tmp7_ = NULL;
		gboolean first = FALSE;
		const gchar* _tmp33_ = NULL;
		gchar* _tmp34_ = NULL;
		_tmp6_ = s;
		_tmp7_ = g_strconcat (_tmp6_, "<", NULL);
		_g_free0 (s);
		s = _tmp7_;
		first = TRUE;
		{
			ValaList* _type_arg_list = NULL;
			ValaList* _tmp8_ = NULL;
			ValaList* _tmp9_ = NULL;
			gint _type_arg_size = 0;
			ValaList* _tmp10_ = NULL;
			gint _tmp11_ = 0;
			gint _tmp12_ = 0;
			gint _type_arg_index = 0;
			_tmp8_ = type_args;
			_tmp9_ = _vala_iterable_ref0 (_tmp8_);
			_type_arg_list = _tmp9_;
			_tmp10_ = _type_arg_list;
			_tmp11_ = vala_collection_get_size ((ValaCollection*) _tmp10_);
			_tmp12_ = _tmp11_;
			_type_arg_size = _tmp12_;
			_type_arg_index = -1;
			while (TRUE) {
				gint _tmp13_ = 0;
				gint _tmp14_ = 0;
				gint _tmp15_ = 0;
				ValaDataType* type_arg = NULL;
				ValaList* _tmp16_ = NULL;
				gint _tmp17_ = 0;
				gpointer _tmp18_ = NULL;
				gboolean _tmp19_ = FALSE;
				ValaDataType* _tmp22_ = NULL;
				gboolean _tmp23_ = FALSE;
				gboolean _tmp24_ = FALSE;
				const gchar* _tmp27_ = NULL;
				ValaDataType* _tmp28_ = NULL;
				ValaScope* _tmp29_ = NULL;
				gchar* _tmp30_ = NULL;
				gchar* _tmp31_ = NULL;
				gchar* _tmp32_ = NULL;
				_tmp13_ = _type_arg_index;
				_type_arg_index = _tmp13_ + 1;
				_tmp14_ = _type_arg_index;
				_tmp15_ = _type_arg_size;
				if (!(_tmp14_ < _tmp15_)) {
					break;
				}
				_tmp16_ = _type_arg_list;
				_tmp17_ = _type_arg_index;
				_tmp18_ = vala_list_get (_tmp16_, _tmp17_);
				type_arg = (ValaDataType*) _tmp18_;
				_tmp19_ = first;
				if (!_tmp19_) {
					const gchar* _tmp20_ = NULL;
					gchar* _tmp21_ = NULL;
					_tmp20_ = s;
					_tmp21_ = g_strconcat (_tmp20_, ",", NULL);
					_g_free0 (s);
					s = _tmp21_;
				} else {
					first = FALSE;
				}
				_tmp22_ = type_arg;
				_tmp23_ = vala_data_type_get_value_owned (_tmp22_);
				_tmp24_ = _tmp23_;
				if (!_tmp24_) {
					const gchar* _tmp25_ = NULL;
					gchar* _tmp26_ = NULL;
					_tmp25_ = s;
					_tmp26_ = g_strconcat (_tmp25_, "weak ", NULL);
					_g_free0 (s);
					s = _tmp26_;
				}
				_tmp27_ = s;
				_tmp28_ = type_arg;
				_tmp29_ = scope;
				_tmp30_ = vala_data_type_to_qualified_string (_tmp28_, _tmp29_);
				_tmp31_ = _tmp30_;
				_tmp32_ = g_strconcat (_tmp27_, _tmp31_, NULL);
				_g_free0 (s);
				s = _tmp32_;
				_g_free0 (_tmp31_);
				_vala_code_node_unref0 (type_arg);
			}
			_vala_iterable_unref0 (_type_arg_list);
		}
		_tmp33_ = s;
		_tmp34_ = g_strconcat (_tmp33_, ">", NULL);
		_g_free0 (s);
		s = _tmp34_;
	}
	_tmp35_ = vala_data_type_get_nullable ((ValaDataType*) self);
	_tmp36_ = _tmp35_;
	if (_tmp36_) {
		const gchar* _tmp37_ = NULL;
		gchar* _tmp38_ = NULL;
		_tmp37_ = s;
		_tmp38_ = g_strconcat (_tmp37_, "?", NULL);
		_g_free0 (s);
		s = _tmp38_;
	}
	result = s;
	_vala_iterable_unref0 (type_args);
	return result;
}


static gboolean vala_unresolved_type_real_is_disposable (ValaDataType* base) {
	ValaUnresolvedType * self;
	gboolean result = FALSE;
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	self = (ValaUnresolvedType*) base;
	_tmp0_ = vala_data_type_get_value_owned ((ValaDataType*) self);
	_tmp1_ = _tmp0_;
	result = _tmp1_;
	return result;
}


ValaUnresolvedSymbol* vala_unresolved_type_get_unresolved_symbol (ValaUnresolvedType* self) {
	ValaUnresolvedSymbol* result;
	ValaUnresolvedSymbol* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_unresolved_symbol;
	result = _tmp0_;
	return result;
}


void vala_unresolved_type_set_unresolved_symbol (ValaUnresolvedType* self, ValaUnresolvedSymbol* value) {
	ValaUnresolvedSymbol* _tmp0_ = NULL;
	ValaUnresolvedSymbol* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _vala_code_node_ref0 (_tmp0_);
	_vala_code_node_unref0 (self->priv->_unresolved_symbol);
	self->priv->_unresolved_symbol = _tmp1_;
}


static void vala_unresolved_type_class_init (ValaUnresolvedTypeClass * klass) {
	vala_unresolved_type_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_unresolved_type_finalize;
	g_type_class_add_private (klass, sizeof (ValaUnresolvedTypePrivate));
	((ValaDataTypeClass *) klass)->copy = (ValaDataType* (*)(ValaDataType*)) vala_unresolved_type_real_copy;
	((ValaDataTypeClass *) klass)->to_qualified_string = (gchar* (*)(ValaDataType*, ValaScope*)) vala_unresolved_type_real_to_qualified_string;
	((ValaDataTypeClass *) klass)->is_disposable = (gboolean (*)(ValaDataType*)) vala_unresolved_type_real_is_disposable;
}


static void vala_unresolved_type_instance_init (ValaUnresolvedType * self) {
	self->priv = VALA_UNRESOLVED_TYPE_GET_PRIVATE (self);
}


static void vala_unresolved_type_finalize (ValaCodeNode* obj) {
	ValaUnresolvedType * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_UNRESOLVED_TYPE, ValaUnresolvedType);
	_vala_code_node_unref0 (self->priv->_unresolved_symbol);
	VALA_CODE_NODE_CLASS (vala_unresolved_type_parent_class)->finalize (obj);
}


/**
 * An unresolved reference to a data type.
 */
GType vala_unresolved_type_get_type (void) {
	static volatile gsize vala_unresolved_type_type_id__volatile = 0;
	if (g_once_init_enter (&vala_unresolved_type_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaUnresolvedTypeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_unresolved_type_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaUnresolvedType), 0, (GInstanceInitFunc) vala_unresolved_type_instance_init, NULL };
		GType vala_unresolved_type_type_id;
		vala_unresolved_type_type_id = g_type_register_static (VALA_TYPE_DATA_TYPE, "ValaUnresolvedType", &g_define_type_info, 0);
		g_once_init_leave (&vala_unresolved_type_type_id__volatile, vala_unresolved_type_type_id);
	}
	return vala_unresolved_type_type_id__volatile;
}



