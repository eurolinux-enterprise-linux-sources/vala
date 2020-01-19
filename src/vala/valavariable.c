/* valavariable.c generated by valac, the Vala compiler
 * generated from valavariable.vala, do not modify */

/* valavariable.vala
 *
 * Copyright (C) 2010  Jürg Billeter
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
typedef struct _ValaSymbolPrivate ValaSymbolPrivate;

#define VALA_TYPE_NAMESPACE (vala_namespace_get_type ())
#define VALA_NAMESPACE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_NAMESPACE, ValaNamespace))
#define VALA_NAMESPACE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_NAMESPACE, ValaNamespaceClass))
#define VALA_IS_NAMESPACE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_NAMESPACE))
#define VALA_IS_NAMESPACE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_NAMESPACE))
#define VALA_NAMESPACE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_NAMESPACE, ValaNamespaceClass))

typedef struct _ValaNamespace ValaNamespace;
typedef struct _ValaNamespaceClass ValaNamespaceClass;

#define VALA_TYPE_TYPESYMBOL (vala_typesymbol_get_type ())
#define VALA_TYPESYMBOL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_TYPESYMBOL, ValaTypeSymbol))
#define VALA_TYPESYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_TYPESYMBOL, ValaTypeSymbolClass))
#define VALA_IS_TYPESYMBOL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_TYPESYMBOL))
#define VALA_IS_TYPESYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_TYPESYMBOL))
#define VALA_TYPESYMBOL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_TYPESYMBOL, ValaTypeSymbolClass))

typedef struct _ValaTypeSymbol ValaTypeSymbol;
typedef struct _ValaTypeSymbolClass ValaTypeSymbolClass;

#define VALA_TYPE_OBJECT_TYPE_SYMBOL (vala_object_type_symbol_get_type ())
#define VALA_OBJECT_TYPE_SYMBOL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_OBJECT_TYPE_SYMBOL, ValaObjectTypeSymbol))
#define VALA_OBJECT_TYPE_SYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_OBJECT_TYPE_SYMBOL, ValaObjectTypeSymbolClass))
#define VALA_IS_OBJECT_TYPE_SYMBOL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_OBJECT_TYPE_SYMBOL))
#define VALA_IS_OBJECT_TYPE_SYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_OBJECT_TYPE_SYMBOL))
#define VALA_OBJECT_TYPE_SYMBOL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_OBJECT_TYPE_SYMBOL, ValaObjectTypeSymbolClass))

typedef struct _ValaObjectTypeSymbol ValaObjectTypeSymbol;
typedef struct _ValaObjectTypeSymbolClass ValaObjectTypeSymbolClass;

#define VALA_TYPE_CLASS (vala_class_get_type ())
#define VALA_CLASS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CLASS, ValaClass))
#define VALA_CLASS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CLASS, ValaClassClass))
#define VALA_IS_CLASS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CLASS))
#define VALA_IS_CLASS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CLASS))
#define VALA_CLASS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CLASS, ValaClassClass))

typedef struct _ValaClass ValaClass;
typedef struct _ValaClassClass ValaClassClass;

#define VALA_TYPE_INTERFACE (vala_interface_get_type ())
#define VALA_INTERFACE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_INTERFACE, ValaInterface))
#define VALA_INTERFACE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_INTERFACE, ValaInterfaceClass))
#define VALA_IS_INTERFACE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_INTERFACE))
#define VALA_IS_INTERFACE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_INTERFACE))
#define VALA_INTERFACE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_INTERFACE, ValaInterfaceClass))

typedef struct _ValaInterface ValaInterface;
typedef struct _ValaInterfaceClass ValaInterfaceClass;

#define VALA_TYPE_STRUCT (vala_struct_get_type ())
#define VALA_STRUCT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_STRUCT, ValaStruct))
#define VALA_STRUCT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_STRUCT, ValaStructClass))
#define VALA_IS_STRUCT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_STRUCT))
#define VALA_IS_STRUCT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_STRUCT))
#define VALA_STRUCT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_STRUCT, ValaStructClass))

typedef struct _ValaStruct ValaStruct;
typedef struct _ValaStructClass ValaStructClass;

#define VALA_TYPE_ENUM (vala_enum_get_type ())
#define VALA_ENUM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_ENUM, ValaEnum))
#define VALA_ENUM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_ENUM, ValaEnumClass))
#define VALA_IS_ENUM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_ENUM))
#define VALA_IS_ENUM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_ENUM))
#define VALA_ENUM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_ENUM, ValaEnumClass))

typedef struct _ValaEnum ValaEnum;
typedef struct _ValaEnumClass ValaEnumClass;

#define VALA_TYPE_ERROR_DOMAIN (vala_error_domain_get_type ())
#define VALA_ERROR_DOMAIN(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_ERROR_DOMAIN, ValaErrorDomain))
#define VALA_ERROR_DOMAIN_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_ERROR_DOMAIN, ValaErrorDomainClass))
#define VALA_IS_ERROR_DOMAIN(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_ERROR_DOMAIN))
#define VALA_IS_ERROR_DOMAIN_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_ERROR_DOMAIN))
#define VALA_ERROR_DOMAIN_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_ERROR_DOMAIN, ValaErrorDomainClass))

typedef struct _ValaErrorDomain ValaErrorDomain;
typedef struct _ValaErrorDomainClass ValaErrorDomainClass;

#define VALA_TYPE_DELEGATE (vala_delegate_get_type ())
#define VALA_DELEGATE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_DELEGATE, ValaDelegate))
#define VALA_DELEGATE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_DELEGATE, ValaDelegateClass))
#define VALA_IS_DELEGATE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_DELEGATE))
#define VALA_IS_DELEGATE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_DELEGATE))
#define VALA_DELEGATE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_DELEGATE, ValaDelegateClass))

typedef struct _ValaDelegate ValaDelegate;
typedef struct _ValaDelegateClass ValaDelegateClass;

#define VALA_TYPE_CONSTANT (vala_constant_get_type ())
#define VALA_CONSTANT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CONSTANT, ValaConstant))
#define VALA_CONSTANT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CONSTANT, ValaConstantClass))
#define VALA_IS_CONSTANT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CONSTANT))
#define VALA_IS_CONSTANT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CONSTANT))
#define VALA_CONSTANT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CONSTANT, ValaConstantClass))

typedef struct _ValaConstant ValaConstant;
typedef struct _ValaConstantClass ValaConstantClass;

#define VALA_TYPE_FIELD (vala_field_get_type ())
#define VALA_FIELD(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_FIELD, ValaField))
#define VALA_FIELD_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_FIELD, ValaFieldClass))
#define VALA_IS_FIELD(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_FIELD))
#define VALA_IS_FIELD_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_FIELD))
#define VALA_FIELD_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_FIELD, ValaFieldClass))

typedef struct _ValaField ValaField;
typedef struct _ValaFieldClass ValaFieldClass;

#define VALA_TYPE_SUBROUTINE (vala_subroutine_get_type ())
#define VALA_SUBROUTINE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SUBROUTINE, ValaSubroutine))
#define VALA_SUBROUTINE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SUBROUTINE, ValaSubroutineClass))
#define VALA_IS_SUBROUTINE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SUBROUTINE))
#define VALA_IS_SUBROUTINE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SUBROUTINE))
#define VALA_SUBROUTINE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SUBROUTINE, ValaSubroutineClass))

typedef struct _ValaSubroutine ValaSubroutine;
typedef struct _ValaSubroutineClass ValaSubroutineClass;

#define VALA_TYPE_METHOD (vala_method_get_type ())
#define VALA_METHOD(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_METHOD, ValaMethod))
#define VALA_METHOD_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_METHOD, ValaMethodClass))
#define VALA_IS_METHOD(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_METHOD))
#define VALA_IS_METHOD_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_METHOD))
#define VALA_METHOD_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_METHOD, ValaMethodClass))

typedef struct _ValaMethod ValaMethod;
typedef struct _ValaMethodClass ValaMethodClass;

#define VALA_TYPE_PROPERTY (vala_property_get_type ())
#define VALA_PROPERTY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_PROPERTY, ValaProperty))
#define VALA_PROPERTY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_PROPERTY, ValaPropertyClass))
#define VALA_IS_PROPERTY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_PROPERTY))
#define VALA_IS_PROPERTY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_PROPERTY))
#define VALA_PROPERTY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_PROPERTY, ValaPropertyClass))

typedef struct _ValaProperty ValaProperty;
typedef struct _ValaPropertyClass ValaPropertyClass;

#define VALA_TYPE_SIGNAL (vala_signal_get_type ())
#define VALA_SIGNAL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SIGNAL, ValaSignal))
#define VALA_SIGNAL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SIGNAL, ValaSignalClass))
#define VALA_IS_SIGNAL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SIGNAL))
#define VALA_IS_SIGNAL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SIGNAL))
#define VALA_SIGNAL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SIGNAL, ValaSignalClass))

typedef struct _ValaSignal ValaSignal;
typedef struct _ValaSignalClass ValaSignalClass;

#define VALA_TYPE_CONSTRUCTOR (vala_constructor_get_type ())
#define VALA_CONSTRUCTOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CONSTRUCTOR, ValaConstructor))
#define VALA_CONSTRUCTOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CONSTRUCTOR, ValaConstructorClass))
#define VALA_IS_CONSTRUCTOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CONSTRUCTOR))
#define VALA_IS_CONSTRUCTOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CONSTRUCTOR))
#define VALA_CONSTRUCTOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CONSTRUCTOR, ValaConstructorClass))

typedef struct _ValaConstructor ValaConstructor;
typedef struct _ValaConstructorClass ValaConstructorClass;

#define VALA_TYPE_DESTRUCTOR (vala_destructor_get_type ())
#define VALA_DESTRUCTOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_DESTRUCTOR, ValaDestructor))
#define VALA_DESTRUCTOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_DESTRUCTOR, ValaDestructorClass))
#define VALA_IS_DESTRUCTOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_DESTRUCTOR))
#define VALA_IS_DESTRUCTOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_DESTRUCTOR))
#define VALA_DESTRUCTOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_DESTRUCTOR, ValaDestructorClass))

typedef struct _ValaDestructor ValaDestructor;
typedef struct _ValaDestructorClass ValaDestructorClass;
typedef struct _ValaVariablePrivate ValaVariablePrivate;
#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))

#define VALA_TYPE_SOURCE_REFERENCE (vala_source_reference_get_type ())
#define VALA_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReference))
#define VALA_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))
#define VALA_IS_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_IS_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_SOURCE_REFERENCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))

typedef struct _ValaSourceReference ValaSourceReference;
typedef struct _ValaSourceReferenceClass ValaSourceReferenceClass;

#define VALA_TYPE_COMMENT (vala_comment_get_type ())
#define VALA_COMMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_COMMENT, ValaComment))
#define VALA_COMMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_COMMENT, ValaCommentClass))
#define VALA_IS_COMMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_COMMENT))
#define VALA_IS_COMMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_COMMENT))
#define VALA_COMMENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_COMMENT, ValaCommentClass))

typedef struct _ValaComment ValaComment;
typedef struct _ValaCommentClass ValaCommentClass;

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

struct _ValaSymbol {
	ValaCodeNode parent_instance;
	ValaSymbolPrivate * priv;
};

struct _ValaSymbolClass {
	ValaCodeNodeClass parent_class;
	gboolean (*is_instance_member) (ValaSymbol* self);
	gboolean (*is_class_member) (ValaSymbol* self);
	void (*add_namespace) (ValaSymbol* self, ValaNamespace* ns);
	void (*add_class) (ValaSymbol* self, ValaClass* cl);
	void (*add_interface) (ValaSymbol* self, ValaInterface* iface);
	void (*add_struct) (ValaSymbol* self, ValaStruct* st);
	void (*add_enum) (ValaSymbol* self, ValaEnum* en);
	void (*add_error_domain) (ValaSymbol* self, ValaErrorDomain* edomain);
	void (*add_delegate) (ValaSymbol* self, ValaDelegate* d);
	void (*add_constant) (ValaSymbol* self, ValaConstant* constant);
	void (*add_field) (ValaSymbol* self, ValaField* f);
	void (*add_method) (ValaSymbol* self, ValaMethod* m);
	void (*add_property) (ValaSymbol* self, ValaProperty* prop);
	void (*add_signal) (ValaSymbol* self, ValaSignal* sig);
	void (*add_constructor) (ValaSymbol* self, ValaConstructor* c);
	void (*add_destructor) (ValaSymbol* self, ValaDestructor* d);
};

struct _ValaVariable {
	ValaSymbol parent_instance;
	ValaVariablePrivate * priv;
};

struct _ValaVariableClass {
	ValaSymbolClass parent_class;
};

struct _ValaVariablePrivate {
	gboolean _single_assignment;
	ValaExpression* _initializer;
	ValaDataType* _variable_type;
};


static gpointer vala_variable_parent_class = NULL;

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
GType vala_namespace_get_type (void) G_GNUC_CONST;
GType vala_typesymbol_get_type (void) G_GNUC_CONST;
GType vala_object_type_symbol_get_type (void) G_GNUC_CONST;
GType vala_class_get_type (void) G_GNUC_CONST;
GType vala_interface_get_type (void) G_GNUC_CONST;
GType vala_struct_get_type (void) G_GNUC_CONST;
GType vala_enum_get_type (void) G_GNUC_CONST;
GType vala_error_domain_get_type (void) G_GNUC_CONST;
GType vala_delegate_get_type (void) G_GNUC_CONST;
GType vala_constant_get_type (void) G_GNUC_CONST;
GType vala_field_get_type (void) G_GNUC_CONST;
GType vala_subroutine_get_type (void) G_GNUC_CONST;
GType vala_method_get_type (void) G_GNUC_CONST;
GType vala_property_get_type (void) G_GNUC_CONST;
GType vala_signal_get_type (void) G_GNUC_CONST;
GType vala_constructor_get_type (void) G_GNUC_CONST;
GType vala_destructor_get_type (void) G_GNUC_CONST;
#define VALA_VARIABLE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_VARIABLE, ValaVariablePrivate))
enum  {
	VALA_VARIABLE_DUMMY_PROPERTY
};
gpointer vala_source_reference_ref (gpointer instance);
void vala_source_reference_unref (gpointer instance);
GParamSpec* vala_param_spec_source_reference (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_source_reference (GValue* value, gpointer v_object);
void vala_value_take_source_reference (GValue* value, gpointer v_object);
gpointer vala_value_get_source_reference (const GValue* value);
GType vala_source_reference_get_type (void) G_GNUC_CONST;
gpointer vala_comment_ref (gpointer instance);
void vala_comment_unref (gpointer instance);
GParamSpec* vala_param_spec_comment (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_comment (GValue* value, gpointer v_object);
void vala_value_take_comment (GValue* value, gpointer v_object);
gpointer vala_value_get_comment (const GValue* value);
GType vala_comment_get_type (void) G_GNUC_CONST;
ValaVariable* vala_variable_new (ValaDataType* variable_type, const gchar* name, ValaExpression* initializer, ValaSourceReference* source_reference, ValaComment* comment);
ValaVariable* vala_variable_construct (GType object_type, ValaDataType* variable_type, const gchar* name, ValaExpression* initializer, ValaSourceReference* source_reference, ValaComment* comment);
ValaSymbol* vala_symbol_construct (GType object_type, const gchar* name, ValaSourceReference* source_reference, ValaComment* comment);
void vala_variable_set_variable_type (ValaVariable* self, ValaDataType* value);
void vala_variable_set_initializer (ValaVariable* self, ValaExpression* value);
ValaExpression* vala_variable_get_initializer (ValaVariable* self);
void vala_code_node_set_parent_node (ValaCodeNode* self, ValaCodeNode* value);
ValaDataType* vala_variable_get_variable_type (ValaVariable* self);
gboolean vala_variable_get_single_assignment (ValaVariable* self);
void vala_variable_set_single_assignment (ValaVariable* self, gboolean value);
static void vala_variable_finalize (ValaCodeNode* obj);


ValaVariable* vala_variable_construct (GType object_type, ValaDataType* variable_type, const gchar* name, ValaExpression* initializer, ValaSourceReference* source_reference, ValaComment* comment) {
	ValaVariable* self = NULL;
	const gchar* _tmp0_ = NULL;
	ValaSourceReference* _tmp1_ = NULL;
	ValaComment* _tmp2_ = NULL;
	ValaDataType* _tmp3_ = NULL;
	ValaExpression* _tmp4_ = NULL;
	_tmp0_ = name;
	_tmp1_ = source_reference;
	_tmp2_ = comment;
	self = (ValaVariable*) vala_symbol_construct (object_type, _tmp0_, _tmp1_, _tmp2_);
	_tmp3_ = variable_type;
	vala_variable_set_variable_type (self, _tmp3_);
	_tmp4_ = initializer;
	vala_variable_set_initializer (self, _tmp4_);
	return self;
}


ValaVariable* vala_variable_new (ValaDataType* variable_type, const gchar* name, ValaExpression* initializer, ValaSourceReference* source_reference, ValaComment* comment) {
	return vala_variable_construct (VALA_TYPE_VARIABLE, variable_type, name, initializer, source_reference, comment);
}


ValaExpression* vala_variable_get_initializer (ValaVariable* self) {
	ValaExpression* result;
	ValaExpression* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_initializer;
	result = _tmp0_;
	return result;
}


static gpointer _vala_code_node_ref0 (gpointer self) {
	return self ? vala_code_node_ref (self) : NULL;
}


void vala_variable_set_initializer (ValaVariable* self, ValaExpression* value) {
	ValaExpression* _tmp0_ = NULL;
	ValaExpression* _tmp1_ = NULL;
	ValaExpression* _tmp2_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _vala_code_node_ref0 (_tmp0_);
	_vala_code_node_unref0 (self->priv->_initializer);
	self->priv->_initializer = _tmp1_;
	_tmp2_ = self->priv->_initializer;
	if (_tmp2_ != NULL) {
		ValaExpression* _tmp3_ = NULL;
		_tmp3_ = self->priv->_initializer;
		vala_code_node_set_parent_node ((ValaCodeNode*) _tmp3_, (ValaCodeNode*) self);
	}
}


ValaDataType* vala_variable_get_variable_type (ValaVariable* self) {
	ValaDataType* result;
	ValaDataType* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_variable_type;
	result = _tmp0_;
	return result;
}


void vala_variable_set_variable_type (ValaVariable* self, ValaDataType* value) {
	ValaDataType* _tmp0_ = NULL;
	ValaDataType* _tmp1_ = NULL;
	ValaDataType* _tmp2_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _vala_code_node_ref0 (_tmp0_);
	_vala_code_node_unref0 (self->priv->_variable_type);
	self->priv->_variable_type = _tmp1_;
	_tmp2_ = self->priv->_variable_type;
	if (_tmp2_ != NULL) {
		ValaDataType* _tmp3_ = NULL;
		_tmp3_ = self->priv->_variable_type;
		vala_code_node_set_parent_node ((ValaCodeNode*) _tmp3_, (ValaCodeNode*) self);
	}
}


gboolean vala_variable_get_single_assignment (ValaVariable* self) {
	gboolean result;
	gboolean _tmp0_ = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->priv->_single_assignment;
	result = _tmp0_;
	return result;
}


void vala_variable_set_single_assignment (ValaVariable* self, gboolean value) {
	gboolean _tmp0_ = FALSE;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_single_assignment = _tmp0_;
}


static void vala_variable_class_init (ValaVariableClass * klass) {
	vala_variable_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_variable_finalize;
	g_type_class_add_private (klass, sizeof (ValaVariablePrivate));
}


static void vala_variable_instance_init (ValaVariable * self) {
	self->priv = VALA_VARIABLE_GET_PRIVATE (self);
}


static void vala_variable_finalize (ValaCodeNode* obj) {
	ValaVariable * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_VARIABLE, ValaVariable);
	_vala_code_node_unref0 (self->priv->_initializer);
	_vala_code_node_unref0 (self->priv->_variable_type);
	VALA_CODE_NODE_CLASS (vala_variable_parent_class)->finalize (obj);
}


GType vala_variable_get_type (void) {
	static volatile gsize vala_variable_type_id__volatile = 0;
	if (g_once_init_enter (&vala_variable_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaVariableClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_variable_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaVariable), 0, (GInstanceInitFunc) vala_variable_instance_init, NULL };
		GType vala_variable_type_id;
		vala_variable_type_id = g_type_register_static (VALA_TYPE_SYMBOL, "ValaVariable", &g_define_type_info, 0);
		g_once_init_leave (&vala_variable_type_id__volatile, vala_variable_type_id);
	}
	return vala_variable_type_id__volatile;
}



