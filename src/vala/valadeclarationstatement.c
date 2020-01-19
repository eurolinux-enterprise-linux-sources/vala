/* valadeclarationstatement.c generated by valac, the Vala compiler
 * generated from valadeclarationstatement.vala, do not modify */

/* valadeclarationstatement.vala
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

#define VALA_TYPE_STATEMENT (vala_statement_get_type ())
#define VALA_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_STATEMENT, ValaStatement))
#define VALA_IS_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_STATEMENT))
#define VALA_STATEMENT_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), VALA_TYPE_STATEMENT, ValaStatementIface))

typedef struct _ValaStatement ValaStatement;
typedef struct _ValaStatementIface ValaStatementIface;

#define VALA_TYPE_DECLARATION_STATEMENT (vala_declaration_statement_get_type ())
#define VALA_DECLARATION_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_DECLARATION_STATEMENT, ValaDeclarationStatement))
#define VALA_DECLARATION_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_DECLARATION_STATEMENT, ValaDeclarationStatementClass))
#define VALA_IS_DECLARATION_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_DECLARATION_STATEMENT))
#define VALA_IS_DECLARATION_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_DECLARATION_STATEMENT))
#define VALA_DECLARATION_STATEMENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_DECLARATION_STATEMENT, ValaDeclarationStatementClass))

typedef struct _ValaDeclarationStatement ValaDeclarationStatement;
typedef struct _ValaDeclarationStatementClass ValaDeclarationStatementClass;
typedef struct _ValaDeclarationStatementPrivate ValaDeclarationStatementPrivate;
#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))

#define VALA_TYPE_SOURCE_REFERENCE (vala_source_reference_get_type ())
#define VALA_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReference))
#define VALA_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))
#define VALA_IS_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_IS_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_SOURCE_REFERENCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))

typedef struct _ValaSourceReference ValaSourceReference;
typedef struct _ValaSourceReferenceClass ValaSourceReferenceClass;

#define VALA_TYPE_LOCAL_VARIABLE (vala_local_variable_get_type ())
#define VALA_LOCAL_VARIABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_LOCAL_VARIABLE, ValaLocalVariable))
#define VALA_LOCAL_VARIABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_LOCAL_VARIABLE, ValaLocalVariableClass))
#define VALA_IS_LOCAL_VARIABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_LOCAL_VARIABLE))
#define VALA_IS_LOCAL_VARIABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_LOCAL_VARIABLE))
#define VALA_LOCAL_VARIABLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_LOCAL_VARIABLE, ValaLocalVariableClass))

typedef struct _ValaLocalVariable ValaLocalVariable;
typedef struct _ValaLocalVariableClass ValaLocalVariableClass;
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))

#define VALA_TYPE_REFERENCE_TYPE (vala_reference_type_get_type ())
#define VALA_REFERENCE_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_REFERENCE_TYPE, ValaReferenceType))
#define VALA_REFERENCE_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_REFERENCE_TYPE, ValaReferenceTypeClass))
#define VALA_IS_REFERENCE_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_REFERENCE_TYPE))
#define VALA_IS_REFERENCE_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_REFERENCE_TYPE))
#define VALA_REFERENCE_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_REFERENCE_TYPE, ValaReferenceTypeClass))

typedef struct _ValaReferenceType ValaReferenceType;
typedef struct _ValaReferenceTypeClass ValaReferenceTypeClass;

#define VALA_TYPE_ARRAY_TYPE (vala_array_type_get_type ())
#define VALA_ARRAY_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_ARRAY_TYPE, ValaArrayType))
#define VALA_ARRAY_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_ARRAY_TYPE, ValaArrayTypeClass))
#define VALA_IS_ARRAY_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_ARRAY_TYPE))
#define VALA_IS_ARRAY_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_ARRAY_TYPE))
#define VALA_ARRAY_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_ARRAY_TYPE, ValaArrayTypeClass))

typedef struct _ValaArrayType ValaArrayType;
typedef struct _ValaArrayTypeClass ValaArrayTypeClass;

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

struct _ValaStatementIface {
	GTypeInterface parent_iface;
};

struct _ValaDeclarationStatement {
	ValaCodeNode parent_instance;
	ValaDeclarationStatementPrivate * priv;
};

struct _ValaDeclarationStatementClass {
	ValaCodeNodeClass parent_class;
};

struct _ValaDeclarationStatementPrivate {
	ValaSymbol* _declaration;
};


static gpointer vala_declaration_statement_parent_class = NULL;
static ValaStatementIface* vala_declaration_statement_vala_statement_parent_iface = NULL;

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
GType vala_statement_get_type (void) G_GNUC_CONST;
GType vala_declaration_statement_get_type (void) G_GNUC_CONST;
#define VALA_DECLARATION_STATEMENT_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_DECLARATION_STATEMENT, ValaDeclarationStatementPrivate))
enum  {
	VALA_DECLARATION_STATEMENT_DUMMY_PROPERTY
};
gpointer vala_source_reference_ref (gpointer instance);
void vala_source_reference_unref (gpointer instance);
GParamSpec* vala_param_spec_source_reference (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_source_reference (GValue* value, gpointer v_object);
void vala_value_take_source_reference (GValue* value, gpointer v_object);
gpointer vala_value_get_source_reference (const GValue* value);
GType vala_source_reference_get_type (void) G_GNUC_CONST;
ValaDeclarationStatement* vala_declaration_statement_new (ValaSymbol* declaration, ValaSourceReference* source_reference);
ValaDeclarationStatement* vala_declaration_statement_construct (GType object_type, ValaSymbol* declaration, ValaSourceReference* source_reference);
ValaCodeNode* vala_code_node_construct (GType object_type);
void vala_declaration_statement_set_declaration (ValaDeclarationStatement* self, ValaSymbol* value);
void vala_code_node_set_source_reference (ValaCodeNode* self, ValaSourceReference* value);
static void vala_declaration_statement_real_accept (ValaCodeNode* base, ValaCodeVisitor* visitor);
void vala_code_visitor_visit_declaration_statement (ValaCodeVisitor* self, ValaDeclarationStatement* stmt);
static void vala_declaration_statement_real_accept_children (ValaCodeNode* base, ValaCodeVisitor* visitor);
ValaSymbol* vala_declaration_statement_get_declaration (ValaDeclarationStatement* self);
void vala_code_node_accept (ValaCodeNode* self, ValaCodeVisitor* visitor);
static gboolean vala_declaration_statement_real_check (ValaCodeNode* base, ValaCodeContext* context);
gboolean vala_code_node_get_checked (ValaCodeNode* self);
gboolean vala_code_node_get_error (ValaCodeNode* self);
void vala_code_node_set_checked (ValaCodeNode* self, gboolean value);
gboolean vala_code_node_check (ValaCodeNode* self, ValaCodeContext* context);
GType vala_local_variable_get_type (void) G_GNUC_CONST;
ValaExpression* vala_variable_get_initializer (ValaVariable* self);
ValaList* vala_code_node_get_error_types (ValaCodeNode* self);
ValaDataType* vala_data_type_copy (ValaDataType* self);
ValaSourceReference* vala_code_node_get_source_reference (ValaCodeNode* self);
void vala_code_node_add_error_type (ValaCodeNode* self, ValaDataType* error_type);
static void vala_declaration_statement_real_emit (ValaCodeNode* base, ValaCodeGenerator* codegen);
static void vala_declaration_statement_real_get_defined_variables (ValaCodeNode* base, ValaCollection* collection);
GType vala_reference_type_get_type (void) G_GNUC_CONST;
GType vala_array_type_get_type (void) G_GNUC_CONST;
ValaDataType* vala_variable_get_variable_type (ValaVariable* self);
void vala_code_node_get_defined_variables (ValaCodeNode* self, ValaCollection* collection);
gboolean vala_array_type_get_fixed_length (ValaArrayType* self);
static void vala_declaration_statement_real_get_used_variables (ValaCodeNode* base, ValaCollection* collection);
void vala_code_node_get_used_variables (ValaCodeNode* self, ValaCollection* collection);
void vala_code_node_set_parent_node (ValaCodeNode* self, ValaCodeNode* value);
static void vala_declaration_statement_finalize (ValaCodeNode* obj);


/**
 * Creates a new declaration statement.
 *
 * @param decl   local variable declaration
 * @param source reference to source code
 * @return       newly created declaration statement
 */
ValaDeclarationStatement* vala_declaration_statement_construct (GType object_type, ValaSymbol* declaration, ValaSourceReference* source_reference) {
	ValaDeclarationStatement* self = NULL;
	ValaSymbol* _tmp0_ = NULL;
	ValaSourceReference* _tmp1_ = NULL;
	g_return_val_if_fail (declaration != NULL, NULL);
	self = (ValaDeclarationStatement*) vala_code_node_construct (object_type);
	_tmp0_ = declaration;
	vala_declaration_statement_set_declaration (self, _tmp0_);
	_tmp1_ = source_reference;
	vala_code_node_set_source_reference ((ValaCodeNode*) self, _tmp1_);
	return self;
}


ValaDeclarationStatement* vala_declaration_statement_new (ValaSymbol* declaration, ValaSourceReference* source_reference) {
	return vala_declaration_statement_construct (VALA_TYPE_DECLARATION_STATEMENT, declaration, source_reference);
}


static void vala_declaration_statement_real_accept (ValaCodeNode* base, ValaCodeVisitor* visitor) {
	ValaDeclarationStatement * self;
	ValaCodeVisitor* _tmp0_ = NULL;
	self = (ValaDeclarationStatement*) base;
	g_return_if_fail (visitor != NULL);
	_tmp0_ = visitor;
	vala_code_visitor_visit_declaration_statement (_tmp0_, self);
}


static void vala_declaration_statement_real_accept_children (ValaCodeNode* base, ValaCodeVisitor* visitor) {
	ValaDeclarationStatement * self;
	ValaSymbol* _tmp0_ = NULL;
	ValaSymbol* _tmp1_ = NULL;
	ValaCodeVisitor* _tmp2_ = NULL;
	self = (ValaDeclarationStatement*) base;
	g_return_if_fail (visitor != NULL);
	_tmp0_ = vala_declaration_statement_get_declaration (self);
	_tmp1_ = _tmp0_;
	_tmp2_ = visitor;
	vala_code_node_accept ((ValaCodeNode*) _tmp1_, _tmp2_);
}


static gpointer _vala_code_node_ref0 (gpointer self) {
	return self ? vala_code_node_ref (self) : NULL;
}


static gboolean vala_declaration_statement_real_check (ValaCodeNode* base, ValaCodeContext* context) {
	ValaDeclarationStatement * self;
	gboolean result = FALSE;
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	ValaSymbol* _tmp4_ = NULL;
	ValaSymbol* _tmp5_ = NULL;
	ValaCodeContext* _tmp6_ = NULL;
	ValaLocalVariable* local = NULL;
	ValaSymbol* _tmp7_ = NULL;
	ValaSymbol* _tmp8_ = NULL;
	ValaLocalVariable* _tmp9_ = NULL;
	gboolean _tmp10_ = FALSE;
	ValaLocalVariable* _tmp11_ = NULL;
	gboolean _tmp37_ = FALSE;
	gboolean _tmp38_ = FALSE;
	self = (ValaDeclarationStatement*) base;
	g_return_val_if_fail (context != NULL, FALSE);
	_tmp0_ = vala_code_node_get_checked ((ValaCodeNode*) self);
	_tmp1_ = _tmp0_;
	if (_tmp1_) {
		gboolean _tmp2_ = FALSE;
		gboolean _tmp3_ = FALSE;
		_tmp2_ = vala_code_node_get_error ((ValaCodeNode*) self);
		_tmp3_ = _tmp2_;
		result = !_tmp3_;
		return result;
	}
	vala_code_node_set_checked ((ValaCodeNode*) self, TRUE);
	_tmp4_ = vala_declaration_statement_get_declaration (self);
	_tmp5_ = _tmp4_;
	_tmp6_ = context;
	vala_code_node_check ((ValaCodeNode*) _tmp5_, _tmp6_);
	_tmp7_ = vala_declaration_statement_get_declaration (self);
	_tmp8_ = _tmp7_;
	_tmp9_ = _vala_code_node_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp8_, VALA_TYPE_LOCAL_VARIABLE) ? ((ValaLocalVariable*) _tmp8_) : NULL);
	local = _tmp9_;
	_tmp11_ = local;
	if (_tmp11_ != NULL) {
		ValaLocalVariable* _tmp12_ = NULL;
		ValaExpression* _tmp13_ = NULL;
		ValaExpression* _tmp14_ = NULL;
		_tmp12_ = local;
		_tmp13_ = vala_variable_get_initializer ((ValaVariable*) _tmp12_);
		_tmp14_ = _tmp13_;
		_tmp10_ = _tmp14_ != NULL;
	} else {
		_tmp10_ = FALSE;
	}
	if (_tmp10_) {
		{
			ValaList* _error_type_list = NULL;
			ValaLocalVariable* _tmp15_ = NULL;
			ValaExpression* _tmp16_ = NULL;
			ValaExpression* _tmp17_ = NULL;
			ValaList* _tmp18_ = NULL;
			gint _error_type_size = 0;
			ValaList* _tmp19_ = NULL;
			gint _tmp20_ = 0;
			gint _tmp21_ = 0;
			gint _error_type_index = 0;
			_tmp15_ = local;
			_tmp16_ = vala_variable_get_initializer ((ValaVariable*) _tmp15_);
			_tmp17_ = _tmp16_;
			_tmp18_ = vala_code_node_get_error_types ((ValaCodeNode*) _tmp17_);
			_error_type_list = _tmp18_;
			_tmp19_ = _error_type_list;
			_tmp20_ = vala_collection_get_size ((ValaCollection*) _tmp19_);
			_tmp21_ = _tmp20_;
			_error_type_size = _tmp21_;
			_error_type_index = -1;
			while (TRUE) {
				gint _tmp22_ = 0;
				gint _tmp23_ = 0;
				gint _tmp24_ = 0;
				ValaDataType* error_type = NULL;
				ValaList* _tmp25_ = NULL;
				gint _tmp26_ = 0;
				gpointer _tmp27_ = NULL;
				ValaDataType* initializer_error_type = NULL;
				ValaDataType* _tmp28_ = NULL;
				ValaDataType* _tmp29_ = NULL;
				ValaDataType* _tmp30_ = NULL;
				ValaLocalVariable* _tmp31_ = NULL;
				ValaExpression* _tmp32_ = NULL;
				ValaExpression* _tmp33_ = NULL;
				ValaSourceReference* _tmp34_ = NULL;
				ValaSourceReference* _tmp35_ = NULL;
				ValaDataType* _tmp36_ = NULL;
				_tmp22_ = _error_type_index;
				_error_type_index = _tmp22_ + 1;
				_tmp23_ = _error_type_index;
				_tmp24_ = _error_type_size;
				if (!(_tmp23_ < _tmp24_)) {
					break;
				}
				_tmp25_ = _error_type_list;
				_tmp26_ = _error_type_index;
				_tmp27_ = vala_list_get (_tmp25_, _tmp26_);
				error_type = (ValaDataType*) _tmp27_;
				_tmp28_ = error_type;
				_tmp29_ = vala_data_type_copy (_tmp28_);
				initializer_error_type = _tmp29_;
				_tmp30_ = initializer_error_type;
				_tmp31_ = local;
				_tmp32_ = vala_variable_get_initializer ((ValaVariable*) _tmp31_);
				_tmp33_ = _tmp32_;
				_tmp34_ = vala_code_node_get_source_reference ((ValaCodeNode*) _tmp33_);
				_tmp35_ = _tmp34_;
				vala_code_node_set_source_reference ((ValaCodeNode*) _tmp30_, _tmp35_);
				_tmp36_ = initializer_error_type;
				vala_code_node_add_error_type ((ValaCodeNode*) self, _tmp36_);
				_vala_code_node_unref0 (initializer_error_type);
				_vala_code_node_unref0 (error_type);
			}
			_vala_iterable_unref0 (_error_type_list);
		}
	}
	_tmp37_ = vala_code_node_get_error ((ValaCodeNode*) self);
	_tmp38_ = _tmp37_;
	result = !_tmp38_;
	_vala_code_node_unref0 (local);
	return result;
}


static void vala_declaration_statement_real_emit (ValaCodeNode* base, ValaCodeGenerator* codegen) {
	ValaDeclarationStatement * self;
	ValaCodeGenerator* _tmp0_ = NULL;
	self = (ValaDeclarationStatement*) base;
	g_return_if_fail (codegen != NULL);
	_tmp0_ = codegen;
	vala_code_visitor_visit_declaration_statement ((ValaCodeVisitor*) _tmp0_, self);
}


static void vala_declaration_statement_real_get_defined_variables (ValaCodeNode* base, ValaCollection* collection) {
	ValaDeclarationStatement * self;
	ValaLocalVariable* local = NULL;
	ValaSymbol* _tmp0_ = NULL;
	ValaSymbol* _tmp1_ = NULL;
	ValaLocalVariable* _tmp2_ = NULL;
	ValaLocalVariable* _tmp3_ = NULL;
	self = (ValaDeclarationStatement*) base;
	g_return_if_fail (collection != NULL);
	_tmp0_ = vala_declaration_statement_get_declaration (self);
	_tmp1_ = _tmp0_;
	_tmp2_ = _vala_code_node_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp1_, VALA_TYPE_LOCAL_VARIABLE) ? ((ValaLocalVariable*) _tmp1_) : NULL);
	local = _tmp2_;
	_tmp3_ = local;
	if (_tmp3_ != NULL) {
		ValaArrayType* array_type = NULL;
		ValaLocalVariable* _tmp4_ = NULL;
		ValaDataType* _tmp5_ = NULL;
		ValaDataType* _tmp6_ = NULL;
		ValaArrayType* _tmp7_ = NULL;
		ValaLocalVariable* _tmp8_ = NULL;
		ValaExpression* _tmp9_ = NULL;
		ValaExpression* _tmp10_ = NULL;
		_tmp4_ = local;
		_tmp5_ = vala_variable_get_variable_type ((ValaVariable*) _tmp4_);
		_tmp6_ = _tmp5_;
		_tmp7_ = _vala_code_node_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp6_, VALA_TYPE_ARRAY_TYPE) ? ((ValaArrayType*) _tmp6_) : NULL);
		array_type = _tmp7_;
		_tmp8_ = local;
		_tmp9_ = vala_variable_get_initializer ((ValaVariable*) _tmp8_);
		_tmp10_ = _tmp9_;
		if (_tmp10_ != NULL) {
			ValaLocalVariable* _tmp11_ = NULL;
			ValaExpression* _tmp12_ = NULL;
			ValaExpression* _tmp13_ = NULL;
			ValaCollection* _tmp14_ = NULL;
			ValaCollection* _tmp15_ = NULL;
			ValaLocalVariable* _tmp16_ = NULL;
			_tmp11_ = local;
			_tmp12_ = vala_variable_get_initializer ((ValaVariable*) _tmp11_);
			_tmp13_ = _tmp12_;
			_tmp14_ = collection;
			vala_code_node_get_defined_variables ((ValaCodeNode*) _tmp13_, _tmp14_);
			_tmp15_ = collection;
			_tmp16_ = local;
			vala_collection_add (_tmp15_, (ValaVariable*) _tmp16_);
		} else {
			gboolean _tmp17_ = FALSE;
			ValaArrayType* _tmp18_ = NULL;
			_tmp18_ = array_type;
			if (_tmp18_ != NULL) {
				ValaArrayType* _tmp19_ = NULL;
				gboolean _tmp20_ = FALSE;
				gboolean _tmp21_ = FALSE;
				_tmp19_ = array_type;
				_tmp20_ = vala_array_type_get_fixed_length (_tmp19_);
				_tmp21_ = _tmp20_;
				_tmp17_ = _tmp21_;
			} else {
				_tmp17_ = FALSE;
			}
			if (_tmp17_) {
				ValaCollection* _tmp22_ = NULL;
				ValaLocalVariable* _tmp23_ = NULL;
				_tmp22_ = collection;
				_tmp23_ = local;
				vala_collection_add (_tmp22_, (ValaVariable*) _tmp23_);
			}
		}
		_vala_code_node_unref0 (array_type);
	}
	_vala_code_node_unref0 (local);
}


static void vala_declaration_statement_real_get_used_variables (ValaCodeNode* base, ValaCollection* collection) {
	ValaDeclarationStatement * self;
	ValaLocalVariable* local = NULL;
	ValaSymbol* _tmp0_ = NULL;
	ValaSymbol* _tmp1_ = NULL;
	ValaLocalVariable* _tmp2_ = NULL;
	gboolean _tmp3_ = FALSE;
	ValaLocalVariable* _tmp4_ = NULL;
	self = (ValaDeclarationStatement*) base;
	g_return_if_fail (collection != NULL);
	_tmp0_ = vala_declaration_statement_get_declaration (self);
	_tmp1_ = _tmp0_;
	_tmp2_ = _vala_code_node_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp1_, VALA_TYPE_LOCAL_VARIABLE) ? ((ValaLocalVariable*) _tmp1_) : NULL);
	local = _tmp2_;
	_tmp4_ = local;
	if (_tmp4_ != NULL) {
		ValaLocalVariable* _tmp5_ = NULL;
		ValaExpression* _tmp6_ = NULL;
		ValaExpression* _tmp7_ = NULL;
		_tmp5_ = local;
		_tmp6_ = vala_variable_get_initializer ((ValaVariable*) _tmp5_);
		_tmp7_ = _tmp6_;
		_tmp3_ = _tmp7_ != NULL;
	} else {
		_tmp3_ = FALSE;
	}
	if (_tmp3_) {
		ValaLocalVariable* _tmp8_ = NULL;
		ValaExpression* _tmp9_ = NULL;
		ValaExpression* _tmp10_ = NULL;
		ValaCollection* _tmp11_ = NULL;
		_tmp8_ = local;
		_tmp9_ = vala_variable_get_initializer ((ValaVariable*) _tmp8_);
		_tmp10_ = _tmp9_;
		_tmp11_ = collection;
		vala_code_node_get_used_variables ((ValaCodeNode*) _tmp10_, _tmp11_);
	}
	_vala_code_node_unref0 (local);
}


ValaSymbol* vala_declaration_statement_get_declaration (ValaDeclarationStatement* self) {
	ValaSymbol* result;
	ValaSymbol* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_declaration;
	result = _tmp0_;
	return result;
}


void vala_declaration_statement_set_declaration (ValaDeclarationStatement* self, ValaSymbol* value) {
	ValaSymbol* _tmp0_ = NULL;
	ValaSymbol* _tmp1_ = NULL;
	ValaSymbol* _tmp2_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _vala_code_node_ref0 (_tmp0_);
	_vala_code_node_unref0 (self->priv->_declaration);
	self->priv->_declaration = _tmp1_;
	_tmp2_ = self->priv->_declaration;
	if (_tmp2_ != NULL) {
		ValaSymbol* _tmp3_ = NULL;
		_tmp3_ = self->priv->_declaration;
		vala_code_node_set_parent_node ((ValaCodeNode*) _tmp3_, (ValaCodeNode*) self);
	}
}


static void vala_declaration_statement_class_init (ValaDeclarationStatementClass * klass) {
	vala_declaration_statement_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_declaration_statement_finalize;
	g_type_class_add_private (klass, sizeof (ValaDeclarationStatementPrivate));
	((ValaCodeNodeClass *) klass)->accept = vala_declaration_statement_real_accept;
	((ValaCodeNodeClass *) klass)->accept_children = vala_declaration_statement_real_accept_children;
	((ValaCodeNodeClass *) klass)->check = vala_declaration_statement_real_check;
	((ValaCodeNodeClass *) klass)->emit = vala_declaration_statement_real_emit;
	((ValaCodeNodeClass *) klass)->get_defined_variables = vala_declaration_statement_real_get_defined_variables;
	((ValaCodeNodeClass *) klass)->get_used_variables = vala_declaration_statement_real_get_used_variables;
}


static void vala_declaration_statement_vala_statement_interface_init (ValaStatementIface * iface) {
	vala_declaration_statement_vala_statement_parent_iface = g_type_interface_peek_parent (iface);
}


static void vala_declaration_statement_instance_init (ValaDeclarationStatement * self) {
	self->priv = VALA_DECLARATION_STATEMENT_GET_PRIVATE (self);
}


static void vala_declaration_statement_finalize (ValaCodeNode* obj) {
	ValaDeclarationStatement * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_DECLARATION_STATEMENT, ValaDeclarationStatement);
	_vala_code_node_unref0 (self->priv->_declaration);
	VALA_CODE_NODE_CLASS (vala_declaration_statement_parent_class)->finalize (obj);
}


/**
 * Represents a local variable or constant declaration statement in the source code.
 */
GType vala_declaration_statement_get_type (void) {
	static volatile gsize vala_declaration_statement_type_id__volatile = 0;
	if (g_once_init_enter (&vala_declaration_statement_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaDeclarationStatementClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_declaration_statement_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaDeclarationStatement), 0, (GInstanceInitFunc) vala_declaration_statement_instance_init, NULL };
		static const GInterfaceInfo vala_statement_info = { (GInterfaceInitFunc) vala_declaration_statement_vala_statement_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType vala_declaration_statement_type_id;
		vala_declaration_statement_type_id = g_type_register_static (VALA_TYPE_CODE_NODE, "ValaDeclarationStatement", &g_define_type_info, 0);
		g_type_add_interface_static (vala_declaration_statement_type_id, VALA_TYPE_STATEMENT, &vala_statement_info);
		g_once_init_leave (&vala_declaration_statement_type_id__volatile, vala_declaration_statement_type_id);
	}
	return vala_declaration_statement_type_id__volatile;
}



