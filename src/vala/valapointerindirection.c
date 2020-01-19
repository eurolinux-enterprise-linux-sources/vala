/* valapointerindirection.c generated by valac, the Vala compiler
 * generated from valapointerindirection.vala, do not modify */

/* valapointerindirection.vala
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
typedef struct _ValaExpressionPrivate ValaExpressionPrivate;

#define VALA_TYPE_POINTER_INDIRECTION (vala_pointer_indirection_get_type ())
#define VALA_POINTER_INDIRECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_POINTER_INDIRECTION, ValaPointerIndirection))
#define VALA_POINTER_INDIRECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_POINTER_INDIRECTION, ValaPointerIndirectionClass))
#define VALA_IS_POINTER_INDIRECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_POINTER_INDIRECTION))
#define VALA_IS_POINTER_INDIRECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_POINTER_INDIRECTION))
#define VALA_POINTER_INDIRECTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_POINTER_INDIRECTION, ValaPointerIndirectionClass))

typedef struct _ValaPointerIndirection ValaPointerIndirection;
typedef struct _ValaPointerIndirectionClass ValaPointerIndirectionClass;
typedef struct _ValaPointerIndirectionPrivate ValaPointerIndirectionPrivate;
#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))

#define VALA_TYPE_SOURCE_REFERENCE (vala_source_reference_get_type ())
#define VALA_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReference))
#define VALA_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))
#define VALA_IS_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_IS_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_SOURCE_REFERENCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))

typedef struct _ValaSourceReference ValaSourceReference;
typedef struct _ValaSourceReferenceClass ValaSourceReferenceClass;

#define VALA_TYPE_POINTER_TYPE (vala_pointer_type_get_type ())
#define VALA_POINTER_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_POINTER_TYPE, ValaPointerType))
#define VALA_POINTER_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_POINTER_TYPE, ValaPointerTypeClass))
#define VALA_IS_POINTER_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_POINTER_TYPE))
#define VALA_IS_POINTER_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_POINTER_TYPE))
#define VALA_POINTER_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_POINTER_TYPE, ValaPointerTypeClass))

typedef struct _ValaPointerType ValaPointerType;
typedef struct _ValaPointerTypeClass ValaPointerTypeClass;

#define VALA_TYPE_REFERENCE_TYPE (vala_reference_type_get_type ())
#define VALA_REFERENCE_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_REFERENCE_TYPE, ValaReferenceType))
#define VALA_REFERENCE_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_REFERENCE_TYPE, ValaReferenceTypeClass))
#define VALA_IS_REFERENCE_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_REFERENCE_TYPE))
#define VALA_IS_REFERENCE_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_REFERENCE_TYPE))
#define VALA_REFERENCE_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_REFERENCE_TYPE, ValaReferenceTypeClass))

typedef struct _ValaReferenceType ValaReferenceType;
typedef struct _ValaReferenceTypeClass ValaReferenceTypeClass;

#define VALA_TYPE_VOID_TYPE (vala_void_type_get_type ())
#define VALA_VOID_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_VOID_TYPE, ValaVoidType))
#define VALA_VOID_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_VOID_TYPE, ValaVoidTypeClass))
#define VALA_IS_VOID_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_VOID_TYPE))
#define VALA_IS_VOID_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_VOID_TYPE))
#define VALA_VOID_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_VOID_TYPE, ValaVoidTypeClass))

typedef struct _ValaVoidType ValaVoidType;
typedef struct _ValaVoidTypeClass ValaVoidTypeClass;

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

struct _ValaExpression {
	ValaCodeNode parent_instance;
	ValaExpressionPrivate * priv;
};

struct _ValaExpressionClass {
	ValaCodeNodeClass parent_class;
	gboolean (*is_constant) (ValaExpression* self);
	gboolean (*is_pure) (ValaExpression* self);
	gboolean (*is_non_null) (ValaExpression* self);
};

struct _ValaPointerIndirection {
	ValaExpression parent_instance;
	ValaPointerIndirectionPrivate * priv;
};

struct _ValaPointerIndirectionClass {
	ValaExpressionClass parent_class;
};

struct _ValaPointerIndirectionPrivate {
	ValaExpression* _inner;
};


static gpointer vala_pointer_indirection_parent_class = NULL;

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
GType vala_pointer_indirection_get_type (void) G_GNUC_CONST;
#define VALA_POINTER_INDIRECTION_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_POINTER_INDIRECTION, ValaPointerIndirectionPrivate))
enum  {
	VALA_POINTER_INDIRECTION_DUMMY_PROPERTY
};
gpointer vala_source_reference_ref (gpointer instance);
void vala_source_reference_unref (gpointer instance);
GParamSpec* vala_param_spec_source_reference (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_source_reference (GValue* value, gpointer v_object);
void vala_value_take_source_reference (GValue* value, gpointer v_object);
gpointer vala_value_get_source_reference (const GValue* value);
GType vala_source_reference_get_type (void) G_GNUC_CONST;
ValaPointerIndirection* vala_pointer_indirection_new (ValaExpression* inner, ValaSourceReference* source_reference);
ValaPointerIndirection* vala_pointer_indirection_construct (GType object_type, ValaExpression* inner, ValaSourceReference* source_reference);
ValaExpression* vala_expression_construct (GType object_type);
void vala_code_node_set_source_reference (ValaCodeNode* self, ValaSourceReference* value);
void vala_pointer_indirection_set_inner (ValaPointerIndirection* self, ValaExpression* value);
static void vala_pointer_indirection_real_accept (ValaCodeNode* base, ValaCodeVisitor* visitor);
ValaExpression* vala_pointer_indirection_get_inner (ValaPointerIndirection* self);
void vala_code_node_accept (ValaCodeNode* self, ValaCodeVisitor* visitor);
void vala_code_visitor_visit_pointer_indirection (ValaCodeVisitor* self, ValaPointerIndirection* expr);
void vala_code_visitor_visit_expression (ValaCodeVisitor* self, ValaExpression* expr);
static void vala_pointer_indirection_real_replace_expression (ValaCodeNode* base, ValaExpression* old_node, ValaExpression* new_node);
static gboolean vala_pointer_indirection_real_is_pure (ValaExpression* base);
gboolean vala_expression_is_pure (ValaExpression* self);
static gboolean vala_pointer_indirection_real_check (ValaCodeNode* base, ValaCodeContext* context);
gboolean vala_code_node_get_checked (ValaCodeNode* self);
gboolean vala_code_node_get_error (ValaCodeNode* self);
void vala_code_node_set_checked (ValaCodeNode* self, gboolean value);
gboolean vala_code_node_check (ValaCodeNode* self, ValaCodeContext* context);
ValaDataType* vala_expression_get_value_type (ValaExpression* self);
void vala_code_node_set_error (ValaCodeNode* self, gboolean value);
void vala_report_error (ValaSourceReference* source, const gchar* message);
ValaSourceReference* vala_code_node_get_source_reference (ValaCodeNode* self);
GType vala_pointer_type_get_type (void) G_GNUC_CONST;
ValaDataType* vala_pointer_type_get_base_type (ValaPointerType* self);
GType vala_reference_type_get_type (void) G_GNUC_CONST;
GType vala_void_type_get_type (void) G_GNUC_CONST;
void vala_expression_set_value_type (ValaExpression* self, ValaDataType* value);
static void vala_pointer_indirection_real_emit (ValaCodeNode* base, ValaCodeGenerator* codegen);
void vala_code_node_emit (ValaCodeNode* self, ValaCodeGenerator* codegen);
static void vala_pointer_indirection_real_get_defined_variables (ValaCodeNode* base, ValaCollection* collection);
void vala_code_node_get_defined_variables (ValaCodeNode* self, ValaCollection* collection);
static void vala_pointer_indirection_real_get_used_variables (ValaCodeNode* base, ValaCollection* collection);
void vala_code_node_get_used_variables (ValaCodeNode* self, ValaCollection* collection);
void vala_code_node_set_parent_node (ValaCodeNode* self, ValaCodeNode* value);
static void vala_pointer_indirection_finalize (ValaCodeNode* obj);


/**
 * Creates a new pointer indirection.
 *
 * @param inner pointer to be dereferenced
 * @return      newly created pointer indirection
 */
ValaPointerIndirection* vala_pointer_indirection_construct (GType object_type, ValaExpression* inner, ValaSourceReference* source_reference) {
	ValaPointerIndirection* self = NULL;
	ValaSourceReference* _tmp0_ = NULL;
	ValaExpression* _tmp1_ = NULL;
	g_return_val_if_fail (inner != NULL, NULL);
	self = (ValaPointerIndirection*) vala_expression_construct (object_type);
	_tmp0_ = source_reference;
	vala_code_node_set_source_reference ((ValaCodeNode*) self, _tmp0_);
	_tmp1_ = inner;
	vala_pointer_indirection_set_inner (self, _tmp1_);
	return self;
}


ValaPointerIndirection* vala_pointer_indirection_new (ValaExpression* inner, ValaSourceReference* source_reference) {
	return vala_pointer_indirection_construct (VALA_TYPE_POINTER_INDIRECTION, inner, source_reference);
}


static void vala_pointer_indirection_real_accept (ValaCodeNode* base, ValaCodeVisitor* visitor) {
	ValaPointerIndirection * self;
	ValaExpression* _tmp0_ = NULL;
	ValaExpression* _tmp1_ = NULL;
	ValaCodeVisitor* _tmp2_ = NULL;
	ValaCodeVisitor* _tmp3_ = NULL;
	ValaCodeVisitor* _tmp4_ = NULL;
	self = (ValaPointerIndirection*) base;
	g_return_if_fail (visitor != NULL);
	_tmp0_ = vala_pointer_indirection_get_inner (self);
	_tmp1_ = _tmp0_;
	_tmp2_ = visitor;
	vala_code_node_accept ((ValaCodeNode*) _tmp1_, _tmp2_);
	_tmp3_ = visitor;
	vala_code_visitor_visit_pointer_indirection (_tmp3_, self);
	_tmp4_ = visitor;
	vala_code_visitor_visit_expression (_tmp4_, (ValaExpression*) self);
}


static void vala_pointer_indirection_real_replace_expression (ValaCodeNode* base, ValaExpression* old_node, ValaExpression* new_node) {
	ValaPointerIndirection * self;
	ValaExpression* _tmp0_ = NULL;
	ValaExpression* _tmp1_ = NULL;
	ValaExpression* _tmp2_ = NULL;
	self = (ValaPointerIndirection*) base;
	g_return_if_fail (old_node != NULL);
	g_return_if_fail (new_node != NULL);
	_tmp0_ = vala_pointer_indirection_get_inner (self);
	_tmp1_ = _tmp0_;
	_tmp2_ = old_node;
	if (_tmp1_ == _tmp2_) {
		ValaExpression* _tmp3_ = NULL;
		_tmp3_ = new_node;
		vala_pointer_indirection_set_inner (self, _tmp3_);
	}
}


static gboolean vala_pointer_indirection_real_is_pure (ValaExpression* base) {
	ValaPointerIndirection * self;
	gboolean result = FALSE;
	ValaExpression* _tmp0_ = NULL;
	ValaExpression* _tmp1_ = NULL;
	gboolean _tmp2_ = FALSE;
	self = (ValaPointerIndirection*) base;
	_tmp0_ = vala_pointer_indirection_get_inner (self);
	_tmp1_ = _tmp0_;
	_tmp2_ = vala_expression_is_pure (_tmp1_);
	result = _tmp2_;
	return result;
}


static gpointer _vala_code_node_ref0 (gpointer self) {
	return self ? vala_code_node_ref (self) : NULL;
}


static gboolean vala_pointer_indirection_real_check (ValaCodeNode* base, ValaCodeContext* context) {
	ValaPointerIndirection * self;
	gboolean result = FALSE;
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	ValaExpression* _tmp4_ = NULL;
	ValaExpression* _tmp5_ = NULL;
	ValaCodeContext* _tmp6_ = NULL;
	gboolean _tmp7_ = FALSE;
	ValaExpression* _tmp8_ = NULL;
	ValaExpression* _tmp9_ = NULL;
	ValaDataType* _tmp10_ = NULL;
	ValaDataType* _tmp11_ = NULL;
	ValaExpression* _tmp14_ = NULL;
	ValaExpression* _tmp15_ = NULL;
	ValaDataType* _tmp16_ = NULL;
	ValaDataType* _tmp17_ = NULL;
	gboolean _tmp37_ = FALSE;
	gboolean _tmp38_ = FALSE;
	self = (ValaPointerIndirection*) base;
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
	_tmp4_ = vala_pointer_indirection_get_inner (self);
	_tmp5_ = _tmp4_;
	_tmp6_ = context;
	_tmp7_ = vala_code_node_check ((ValaCodeNode*) _tmp5_, _tmp6_);
	if (!_tmp7_) {
		result = FALSE;
		return result;
	}
	_tmp8_ = vala_pointer_indirection_get_inner (self);
	_tmp9_ = _tmp8_;
	_tmp10_ = vala_expression_get_value_type (_tmp9_);
	_tmp11_ = _tmp10_;
	if (_tmp11_ == NULL) {
		ValaSourceReference* _tmp12_ = NULL;
		ValaSourceReference* _tmp13_ = NULL;
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		_tmp12_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp13_ = _tmp12_;
		vala_report_error (_tmp13_, "internal error: unknown type of inner expression");
		result = FALSE;
		return result;
	}
	_tmp14_ = vala_pointer_indirection_get_inner (self);
	_tmp15_ = _tmp14_;
	_tmp16_ = vala_expression_get_value_type (_tmp15_);
	_tmp17_ = _tmp16_;
	if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp17_, VALA_TYPE_POINTER_TYPE)) {
		ValaPointerType* pointer_type = NULL;
		ValaExpression* _tmp18_ = NULL;
		ValaExpression* _tmp19_ = NULL;
		ValaDataType* _tmp20_ = NULL;
		ValaDataType* _tmp21_ = NULL;
		ValaPointerType* _tmp22_ = NULL;
		gboolean _tmp23_ = FALSE;
		ValaPointerType* _tmp24_ = NULL;
		ValaDataType* _tmp25_ = NULL;
		ValaDataType* _tmp26_ = NULL;
		ValaPointerType* _tmp32_ = NULL;
		ValaDataType* _tmp33_ = NULL;
		ValaDataType* _tmp34_ = NULL;
		_tmp18_ = vala_pointer_indirection_get_inner (self);
		_tmp19_ = _tmp18_;
		_tmp20_ = vala_expression_get_value_type (_tmp19_);
		_tmp21_ = _tmp20_;
		_tmp22_ = _vala_code_node_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp21_, VALA_TYPE_POINTER_TYPE, ValaPointerType));
		pointer_type = _tmp22_;
		_tmp24_ = pointer_type;
		_tmp25_ = vala_pointer_type_get_base_type (_tmp24_);
		_tmp26_ = _tmp25_;
		if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp26_, VALA_TYPE_REFERENCE_TYPE)) {
			_tmp23_ = TRUE;
		} else {
			ValaPointerType* _tmp27_ = NULL;
			ValaDataType* _tmp28_ = NULL;
			ValaDataType* _tmp29_ = NULL;
			_tmp27_ = pointer_type;
			_tmp28_ = vala_pointer_type_get_base_type (_tmp27_);
			_tmp29_ = _tmp28_;
			_tmp23_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp29_, VALA_TYPE_VOID_TYPE);
		}
		if (_tmp23_) {
			ValaSourceReference* _tmp30_ = NULL;
			ValaSourceReference* _tmp31_ = NULL;
			vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
			_tmp30_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
			_tmp31_ = _tmp30_;
			vala_report_error (_tmp31_, "Pointer indirection not supported for this expression");
			result = FALSE;
			_vala_code_node_unref0 (pointer_type);
			return result;
		}
		_tmp32_ = pointer_type;
		_tmp33_ = vala_pointer_type_get_base_type (_tmp32_);
		_tmp34_ = _tmp33_;
		vala_expression_set_value_type ((ValaExpression*) self, _tmp34_);
		_vala_code_node_unref0 (pointer_type);
	} else {
		ValaSourceReference* _tmp35_ = NULL;
		ValaSourceReference* _tmp36_ = NULL;
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		_tmp35_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp36_ = _tmp35_;
		vala_report_error (_tmp36_, "Pointer indirection not supported for this expression");
		result = FALSE;
		return result;
	}
	_tmp37_ = vala_code_node_get_error ((ValaCodeNode*) self);
	_tmp38_ = _tmp37_;
	result = !_tmp38_;
	return result;
}


static void vala_pointer_indirection_real_emit (ValaCodeNode* base, ValaCodeGenerator* codegen) {
	ValaPointerIndirection * self;
	ValaExpression* _tmp0_ = NULL;
	ValaExpression* _tmp1_ = NULL;
	ValaCodeGenerator* _tmp2_ = NULL;
	ValaCodeGenerator* _tmp3_ = NULL;
	ValaCodeGenerator* _tmp4_ = NULL;
	self = (ValaPointerIndirection*) base;
	g_return_if_fail (codegen != NULL);
	_tmp0_ = vala_pointer_indirection_get_inner (self);
	_tmp1_ = _tmp0_;
	_tmp2_ = codegen;
	vala_code_node_emit ((ValaCodeNode*) _tmp1_, _tmp2_);
	_tmp3_ = codegen;
	vala_code_visitor_visit_pointer_indirection ((ValaCodeVisitor*) _tmp3_, self);
	_tmp4_ = codegen;
	vala_code_visitor_visit_expression ((ValaCodeVisitor*) _tmp4_, (ValaExpression*) self);
}


static void vala_pointer_indirection_real_get_defined_variables (ValaCodeNode* base, ValaCollection* collection) {
	ValaPointerIndirection * self;
	ValaExpression* _tmp0_ = NULL;
	ValaExpression* _tmp1_ = NULL;
	ValaCollection* _tmp2_ = NULL;
	self = (ValaPointerIndirection*) base;
	g_return_if_fail (collection != NULL);
	_tmp0_ = vala_pointer_indirection_get_inner (self);
	_tmp1_ = _tmp0_;
	_tmp2_ = collection;
	vala_code_node_get_defined_variables ((ValaCodeNode*) _tmp1_, _tmp2_);
}


static void vala_pointer_indirection_real_get_used_variables (ValaCodeNode* base, ValaCollection* collection) {
	ValaPointerIndirection * self;
	ValaExpression* _tmp0_ = NULL;
	ValaExpression* _tmp1_ = NULL;
	ValaCollection* _tmp2_ = NULL;
	self = (ValaPointerIndirection*) base;
	g_return_if_fail (collection != NULL);
	_tmp0_ = vala_pointer_indirection_get_inner (self);
	_tmp1_ = _tmp0_;
	_tmp2_ = collection;
	vala_code_node_get_used_variables ((ValaCodeNode*) _tmp1_, _tmp2_);
}


ValaExpression* vala_pointer_indirection_get_inner (ValaPointerIndirection* self) {
	ValaExpression* result;
	ValaExpression* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_inner;
	result = _tmp0_;
	return result;
}


void vala_pointer_indirection_set_inner (ValaPointerIndirection* self, ValaExpression* value) {
	ValaExpression* _tmp0_ = NULL;
	ValaExpression* _tmp1_ = NULL;
	ValaExpression* _tmp2_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _vala_code_node_ref0 (_tmp0_);
	_vala_code_node_unref0 (self->priv->_inner);
	self->priv->_inner = _tmp1_;
	_tmp2_ = self->priv->_inner;
	vala_code_node_set_parent_node ((ValaCodeNode*) _tmp2_, (ValaCodeNode*) self);
}


static void vala_pointer_indirection_class_init (ValaPointerIndirectionClass * klass) {
	vala_pointer_indirection_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_pointer_indirection_finalize;
	g_type_class_add_private (klass, sizeof (ValaPointerIndirectionPrivate));
	((ValaCodeNodeClass *) klass)->accept = (void (*)(ValaCodeNode*, ValaCodeVisitor*)) vala_pointer_indirection_real_accept;
	((ValaCodeNodeClass *) klass)->replace_expression = (void (*)(ValaCodeNode*, ValaExpression*, ValaExpression*)) vala_pointer_indirection_real_replace_expression;
	((ValaExpressionClass *) klass)->is_pure = (gboolean (*)(ValaExpression*)) vala_pointer_indirection_real_is_pure;
	((ValaCodeNodeClass *) klass)->check = (gboolean (*)(ValaCodeNode*, ValaCodeContext*)) vala_pointer_indirection_real_check;
	((ValaCodeNodeClass *) klass)->emit = (void (*)(ValaCodeNode*, ValaCodeGenerator*)) vala_pointer_indirection_real_emit;
	((ValaCodeNodeClass *) klass)->get_defined_variables = (void (*)(ValaCodeNode*, ValaCollection*)) vala_pointer_indirection_real_get_defined_variables;
	((ValaCodeNodeClass *) klass)->get_used_variables = (void (*)(ValaCodeNode*, ValaCollection*)) vala_pointer_indirection_real_get_used_variables;
}


static void vala_pointer_indirection_instance_init (ValaPointerIndirection * self) {
	self->priv = VALA_POINTER_INDIRECTION_GET_PRIVATE (self);
}


static void vala_pointer_indirection_finalize (ValaCodeNode* obj) {
	ValaPointerIndirection * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_POINTER_INDIRECTION, ValaPointerIndirection);
	_vala_code_node_unref0 (self->priv->_inner);
	VALA_CODE_NODE_CLASS (vala_pointer_indirection_parent_class)->finalize (obj);
}


/**
 * Represents a pointer indirection in the source code, e.g. `*pointer`.
 */
GType vala_pointer_indirection_get_type (void) {
	static volatile gsize vala_pointer_indirection_type_id__volatile = 0;
	if (g_once_init_enter (&vala_pointer_indirection_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaPointerIndirectionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_pointer_indirection_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaPointerIndirection), 0, (GInstanceInitFunc) vala_pointer_indirection_instance_init, NULL };
		GType vala_pointer_indirection_type_id;
		vala_pointer_indirection_type_id = g_type_register_static (VALA_TYPE_EXPRESSION, "ValaPointerIndirection", &g_define_type_info, 0);
		g_once_init_leave (&vala_pointer_indirection_type_id__volatile, vala_pointer_indirection_type_id);
	}
	return vala_pointer_indirection_type_id__volatile;
}



