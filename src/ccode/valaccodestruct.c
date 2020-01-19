/* valaccodestruct.c generated by valac, the Vala compiler
 * generated from valaccodestruct.vala, do not modify */

/* valaccodestruct.vala
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


#define VALA_TYPE_CCODE_NODE (vala_ccode_node_get_type ())
#define VALA_CCODE_NODE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_NODE, ValaCCodeNode))
#define VALA_CCODE_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_NODE, ValaCCodeNodeClass))
#define VALA_IS_CCODE_NODE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_NODE))
#define VALA_IS_CCODE_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_NODE))
#define VALA_CCODE_NODE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_NODE, ValaCCodeNodeClass))

typedef struct _ValaCCodeNode ValaCCodeNode;
typedef struct _ValaCCodeNodeClass ValaCCodeNodeClass;
typedef struct _ValaCCodeNodePrivate ValaCCodeNodePrivate;

#define VALA_TYPE_CCODE_WRITER (vala_ccode_writer_get_type ())
#define VALA_CCODE_WRITER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_WRITER, ValaCCodeWriter))
#define VALA_CCODE_WRITER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_WRITER, ValaCCodeWriterClass))
#define VALA_IS_CCODE_WRITER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_WRITER))
#define VALA_IS_CCODE_WRITER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_WRITER))
#define VALA_CCODE_WRITER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_WRITER, ValaCCodeWriterClass))

typedef struct _ValaCCodeWriter ValaCCodeWriter;
typedef struct _ValaCCodeWriterClass ValaCCodeWriterClass;

#define VALA_TYPE_CCODE_STRUCT (vala_ccode_struct_get_type ())
#define VALA_CCODE_STRUCT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_STRUCT, ValaCCodeStruct))
#define VALA_CCODE_STRUCT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_STRUCT, ValaCCodeStructClass))
#define VALA_IS_CCODE_STRUCT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_STRUCT))
#define VALA_IS_CCODE_STRUCT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_STRUCT))
#define VALA_CCODE_STRUCT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_STRUCT, ValaCCodeStructClass))

typedef struct _ValaCCodeStruct ValaCCodeStruct;
typedef struct _ValaCCodeStructClass ValaCCodeStructClass;
typedef struct _ValaCCodeStructPrivate ValaCCodeStructPrivate;

#define VALA_TYPE_CCODE_STATEMENT (vala_ccode_statement_get_type ())
#define VALA_CCODE_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_STATEMENT, ValaCCodeStatement))
#define VALA_CCODE_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_STATEMENT, ValaCCodeStatementClass))
#define VALA_IS_CCODE_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_STATEMENT))
#define VALA_IS_CCODE_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_STATEMENT))
#define VALA_CCODE_STATEMENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_STATEMENT, ValaCCodeStatementClass))

typedef struct _ValaCCodeStatement ValaCCodeStatement;
typedef struct _ValaCCodeStatementClass ValaCCodeStatementClass;

#define VALA_TYPE_CCODE_DECLARATION (vala_ccode_declaration_get_type ())
#define VALA_CCODE_DECLARATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_DECLARATION, ValaCCodeDeclaration))
#define VALA_CCODE_DECLARATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_DECLARATION, ValaCCodeDeclarationClass))
#define VALA_IS_CCODE_DECLARATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_DECLARATION))
#define VALA_IS_CCODE_DECLARATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_DECLARATION))
#define VALA_CCODE_DECLARATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_DECLARATION, ValaCCodeDeclarationClass))

typedef struct _ValaCCodeDeclaration ValaCCodeDeclaration;
typedef struct _ValaCCodeDeclarationClass ValaCCodeDeclarationClass;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))

#define VALA_TYPE_CCODE_DECLARATOR_SUFFIX (vala_ccode_declarator_suffix_get_type ())
#define VALA_CCODE_DECLARATOR_SUFFIX(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_DECLARATOR_SUFFIX, ValaCCodeDeclaratorSuffix))
#define VALA_CCODE_DECLARATOR_SUFFIX_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_DECLARATOR_SUFFIX, ValaCCodeDeclaratorSuffixClass))
#define VALA_IS_CCODE_DECLARATOR_SUFFIX(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_DECLARATOR_SUFFIX))
#define VALA_IS_CCODE_DECLARATOR_SUFFIX_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_DECLARATOR_SUFFIX))
#define VALA_CCODE_DECLARATOR_SUFFIX_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_DECLARATOR_SUFFIX, ValaCCodeDeclaratorSuffixClass))

typedef struct _ValaCCodeDeclaratorSuffix ValaCCodeDeclaratorSuffix;
typedef struct _ValaCCodeDeclaratorSuffixClass ValaCCodeDeclaratorSuffixClass;

#define VALA_TYPE_CCODE_DECLARATOR (vala_ccode_declarator_get_type ())
#define VALA_CCODE_DECLARATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_DECLARATOR, ValaCCodeDeclarator))
#define VALA_CCODE_DECLARATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_DECLARATOR, ValaCCodeDeclaratorClass))
#define VALA_IS_CCODE_DECLARATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_DECLARATOR))
#define VALA_IS_CCODE_DECLARATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_DECLARATOR))
#define VALA_CCODE_DECLARATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_DECLARATOR, ValaCCodeDeclaratorClass))

typedef struct _ValaCCodeDeclarator ValaCCodeDeclarator;
typedef struct _ValaCCodeDeclaratorClass ValaCCodeDeclaratorClass;

#define VALA_TYPE_CCODE_EXPRESSION (vala_ccode_expression_get_type ())
#define VALA_CCODE_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpression))
#define VALA_CCODE_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpressionClass))
#define VALA_IS_CCODE_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_EXPRESSION))
#define VALA_IS_CCODE_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_EXPRESSION))
#define VALA_CCODE_EXPRESSION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpressionClass))

typedef struct _ValaCCodeExpression ValaCCodeExpression;
typedef struct _ValaCCodeExpressionClass ValaCCodeExpressionClass;

#define VALA_TYPE_CCODE_VARIABLE_DECLARATOR (vala_ccode_variable_declarator_get_type ())
#define VALA_CCODE_VARIABLE_DECLARATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_VARIABLE_DECLARATOR, ValaCCodeVariableDeclarator))
#define VALA_CCODE_VARIABLE_DECLARATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_VARIABLE_DECLARATOR, ValaCCodeVariableDeclaratorClass))
#define VALA_IS_CCODE_VARIABLE_DECLARATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_VARIABLE_DECLARATOR))
#define VALA_IS_CCODE_VARIABLE_DECLARATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_VARIABLE_DECLARATOR))
#define VALA_CCODE_VARIABLE_DECLARATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_VARIABLE_DECLARATOR, ValaCCodeVariableDeclaratorClass))

typedef struct _ValaCCodeVariableDeclarator ValaCCodeVariableDeclarator;
typedef struct _ValaCCodeVariableDeclaratorClass ValaCCodeVariableDeclaratorClass;
#define _vala_ccode_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_ccode_node_unref (var), NULL)))

struct _ValaCCodeNode {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ValaCCodeNodePrivate * priv;
};

struct _ValaCCodeNodeClass {
	GTypeClass parent_class;
	void (*finalize) (ValaCCodeNode *self);
	void (*write) (ValaCCodeNode* self, ValaCCodeWriter* writer);
	void (*write_declaration) (ValaCCodeNode* self, ValaCCodeWriter* writer);
	void (*write_combined) (ValaCCodeNode* self, ValaCCodeWriter* writer);
};

struct _ValaCCodeStruct {
	ValaCCodeNode parent_instance;
	ValaCCodeStructPrivate * priv;
};

struct _ValaCCodeStructClass {
	ValaCCodeNodeClass parent_class;
};

struct _ValaCCodeStructPrivate {
	gchar* _name;
	gboolean _deprecated;
	ValaList* declarations;
};


static gpointer vala_ccode_struct_parent_class = NULL;

gpointer vala_ccode_node_ref (gpointer instance);
void vala_ccode_node_unref (gpointer instance);
GParamSpec* vala_param_spec_ccode_node (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_ccode_node (GValue* value, gpointer v_object);
void vala_value_take_ccode_node (GValue* value, gpointer v_object);
gpointer vala_value_get_ccode_node (const GValue* value);
GType vala_ccode_node_get_type (void) G_GNUC_CONST;
gpointer vala_ccode_writer_ref (gpointer instance);
void vala_ccode_writer_unref (gpointer instance);
GParamSpec* vala_param_spec_ccode_writer (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_ccode_writer (GValue* value, gpointer v_object);
void vala_value_take_ccode_writer (GValue* value, gpointer v_object);
gpointer vala_value_get_ccode_writer (const GValue* value);
GType vala_ccode_writer_get_type (void) G_GNUC_CONST;
GType vala_ccode_struct_get_type (void) G_GNUC_CONST;
GType vala_ccode_statement_get_type (void) G_GNUC_CONST;
GType vala_ccode_declaration_get_type (void) G_GNUC_CONST;
#define VALA_CCODE_STRUCT_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_CCODE_STRUCT, ValaCCodeStructPrivate))
enum  {
	VALA_CCODE_STRUCT_DUMMY_PROPERTY
};
ValaCCodeStruct* vala_ccode_struct_new (const gchar* name);
ValaCCodeStruct* vala_ccode_struct_construct (GType object_type, const gchar* name);
ValaCCodeNode* vala_ccode_node_construct (GType object_type);
void vala_ccode_struct_set_name (ValaCCodeStruct* self, const gchar* value);
void vala_ccode_struct_add_declaration (ValaCCodeStruct* self, ValaCCodeDeclaration* decl);
gpointer vala_ccode_declarator_suffix_ref (gpointer instance);
void vala_ccode_declarator_suffix_unref (gpointer instance);
GParamSpec* vala_param_spec_ccode_declarator_suffix (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_ccode_declarator_suffix (GValue* value, gpointer v_object);
void vala_value_take_ccode_declarator_suffix (GValue* value, gpointer v_object);
gpointer vala_value_get_ccode_declarator_suffix (const GValue* value);
GType vala_ccode_declarator_suffix_get_type (void) G_GNUC_CONST;
void vala_ccode_struct_add_field (ValaCCodeStruct* self, const gchar* type_name, const gchar* name, ValaCCodeDeclaratorSuffix* declarator_suffix);
ValaCCodeDeclaration* vala_ccode_declaration_new (const gchar* type_name);
ValaCCodeDeclaration* vala_ccode_declaration_construct (GType object_type, const gchar* type_name);
GType vala_ccode_declarator_get_type (void) G_GNUC_CONST;
void vala_ccode_declaration_add_declarator (ValaCCodeDeclaration* self, ValaCCodeDeclarator* decl);
GType vala_ccode_expression_get_type (void) G_GNUC_CONST;
ValaCCodeVariableDeclarator* vala_ccode_variable_declarator_new (const gchar* name, ValaCCodeExpression* initializer, ValaCCodeDeclaratorSuffix* declarator_suffix);
ValaCCodeVariableDeclarator* vala_ccode_variable_declarator_construct (GType object_type, const gchar* name, ValaCCodeExpression* initializer, ValaCCodeDeclaratorSuffix* declarator_suffix);
GType vala_ccode_variable_declarator_get_type (void) G_GNUC_CONST;
static void vala_ccode_struct_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer);
void vala_ccode_writer_write_string (ValaCCodeWriter* self, const gchar* s);
const gchar* vala_ccode_struct_get_name (ValaCCodeStruct* self);
void vala_ccode_writer_write_begin_block (ValaCCodeWriter* self);
void vala_ccode_node_write_declaration (ValaCCodeNode* self, ValaCCodeWriter* writer);
void vala_ccode_writer_write_end_block (ValaCCodeWriter* self);
gboolean vala_ccode_struct_get_deprecated (ValaCCodeStruct* self);
void vala_ccode_writer_write_newline (ValaCCodeWriter* self);
void vala_ccode_struct_set_deprecated (ValaCCodeStruct* self, gboolean value);
gboolean vala_ccode_struct_get_is_empty (ValaCCodeStruct* self);
static void vala_ccode_struct_finalize (ValaCCodeNode* obj);


ValaCCodeStruct* vala_ccode_struct_construct (GType object_type, const gchar* name) {
	ValaCCodeStruct* self = NULL;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (name != NULL, NULL);
	self = (ValaCCodeStruct*) vala_ccode_node_construct (object_type);
	_tmp0_ = name;
	vala_ccode_struct_set_name (self, _tmp0_);
	return self;
}


ValaCCodeStruct* vala_ccode_struct_new (const gchar* name) {
	return vala_ccode_struct_construct (VALA_TYPE_CCODE_STRUCT, name);
}


/**
 * Adds the specified declaration as member to this struct.
 *
 * @param decl a variable declaration
 */
void vala_ccode_struct_add_declaration (ValaCCodeStruct* self, ValaCCodeDeclaration* decl) {
	ValaList* _tmp0_ = NULL;
	ValaCCodeDeclaration* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (decl != NULL);
	_tmp0_ = self->priv->declarations;
	_tmp1_ = decl;
	vala_collection_add ((ValaCollection*) _tmp0_, _tmp1_);
}


/**
 * Adds a variable with the specified type and name to this struct.
 *
 * @param type_name field type
 * @param name      member name
 */
void vala_ccode_struct_add_field (ValaCCodeStruct* self, const gchar* type_name, const gchar* name, ValaCCodeDeclaratorSuffix* declarator_suffix) {
	ValaCCodeDeclaration* decl = NULL;
	const gchar* _tmp0_ = NULL;
	ValaCCodeDeclaration* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	ValaCCodeDeclaratorSuffix* _tmp3_ = NULL;
	ValaCCodeVariableDeclarator* _tmp4_ = NULL;
	ValaCCodeVariableDeclarator* _tmp5_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (type_name != NULL);
	g_return_if_fail (name != NULL);
	_tmp0_ = type_name;
	_tmp1_ = vala_ccode_declaration_new (_tmp0_);
	decl = _tmp1_;
	_tmp2_ = name;
	_tmp3_ = declarator_suffix;
	_tmp4_ = vala_ccode_variable_declarator_new (_tmp2_, NULL, _tmp3_);
	_tmp5_ = _tmp4_;
	vala_ccode_declaration_add_declarator (decl, (ValaCCodeDeclarator*) _tmp5_);
	_vala_ccode_node_unref0 (_tmp5_);
	vala_ccode_struct_add_declaration (self, decl);
	_vala_ccode_node_unref0 (decl);
}


static gpointer _vala_iterable_ref0 (gpointer self) {
	return self ? vala_iterable_ref (self) : NULL;
}


static void vala_ccode_struct_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer) {
	ValaCCodeStruct * self;
	ValaCCodeWriter* _tmp0_ = NULL;
	ValaCCodeWriter* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	ValaCCodeWriter* _tmp3_ = NULL;
	ValaCCodeWriter* _tmp17_ = NULL;
	gboolean _tmp18_ = FALSE;
	ValaCCodeWriter* _tmp20_ = NULL;
	ValaCCodeWriter* _tmp21_ = NULL;
	ValaCCodeWriter* _tmp22_ = NULL;
	self = (ValaCCodeStruct*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = writer;
	vala_ccode_writer_write_string (_tmp0_, "struct ");
	_tmp1_ = writer;
	_tmp2_ = self->priv->_name;
	vala_ccode_writer_write_string (_tmp1_, _tmp2_);
	_tmp3_ = writer;
	vala_ccode_writer_write_begin_block (_tmp3_);
	{
		ValaList* _decl_list = NULL;
		ValaList* _tmp4_ = NULL;
		ValaList* _tmp5_ = NULL;
		gint _decl_size = 0;
		ValaList* _tmp6_ = NULL;
		gint _tmp7_ = 0;
		gint _tmp8_ = 0;
		gint _decl_index = 0;
		_tmp4_ = self->priv->declarations;
		_tmp5_ = _vala_iterable_ref0 (_tmp4_);
		_decl_list = _tmp5_;
		_tmp6_ = _decl_list;
		_tmp7_ = vala_collection_get_size ((ValaCollection*) _tmp6_);
		_tmp8_ = _tmp7_;
		_decl_size = _tmp8_;
		_decl_index = -1;
		while (TRUE) {
			gint _tmp9_ = 0;
			gint _tmp10_ = 0;
			gint _tmp11_ = 0;
			ValaCCodeDeclaration* decl = NULL;
			ValaList* _tmp12_ = NULL;
			gint _tmp13_ = 0;
			gpointer _tmp14_ = NULL;
			ValaCCodeDeclaration* _tmp15_ = NULL;
			ValaCCodeWriter* _tmp16_ = NULL;
			_tmp9_ = _decl_index;
			_decl_index = _tmp9_ + 1;
			_tmp10_ = _decl_index;
			_tmp11_ = _decl_size;
			if (!(_tmp10_ < _tmp11_)) {
				break;
			}
			_tmp12_ = _decl_list;
			_tmp13_ = _decl_index;
			_tmp14_ = vala_list_get (_tmp12_, _tmp13_);
			decl = (ValaCCodeDeclaration*) _tmp14_;
			_tmp15_ = decl;
			_tmp16_ = writer;
			vala_ccode_node_write_declaration ((ValaCCodeNode*) _tmp15_, _tmp16_);
			_vala_ccode_node_unref0 (decl);
		}
		_vala_iterable_unref0 (_decl_list);
	}
	_tmp17_ = writer;
	vala_ccode_writer_write_end_block (_tmp17_);
	_tmp18_ = self->priv->_deprecated;
	if (_tmp18_) {
		ValaCCodeWriter* _tmp19_ = NULL;
		_tmp19_ = writer;
		vala_ccode_writer_write_string (_tmp19_, " G_GNUC_DEPRECATED");
	}
	_tmp20_ = writer;
	vala_ccode_writer_write_string (_tmp20_, ";");
	_tmp21_ = writer;
	vala_ccode_writer_write_newline (_tmp21_);
	_tmp22_ = writer;
	vala_ccode_writer_write_newline (_tmp22_);
}


const gchar* vala_ccode_struct_get_name (ValaCCodeStruct* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_name;
	result = _tmp0_;
	return result;
}


void vala_ccode_struct_set_name (ValaCCodeStruct* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_name);
	self->priv->_name = _tmp1_;
}


gboolean vala_ccode_struct_get_deprecated (ValaCCodeStruct* self) {
	gboolean result;
	gboolean _tmp0_ = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->priv->_deprecated;
	result = _tmp0_;
	return result;
}


void vala_ccode_struct_set_deprecated (ValaCCodeStruct* self, gboolean value) {
	gboolean _tmp0_ = FALSE;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_deprecated = _tmp0_;
}


gboolean vala_ccode_struct_get_is_empty (ValaCCodeStruct* self) {
	gboolean result;
	ValaList* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	gint _tmp2_ = 0;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->priv->declarations;
	_tmp1_ = vala_collection_get_size ((ValaCollection*) _tmp0_);
	_tmp2_ = _tmp1_;
	result = _tmp2_ == 0;
	return result;
}


static void vala_ccode_struct_class_init (ValaCCodeStructClass * klass) {
	vala_ccode_struct_parent_class = g_type_class_peek_parent (klass);
	((ValaCCodeNodeClass *) klass)->finalize = vala_ccode_struct_finalize;
	g_type_class_add_private (klass, sizeof (ValaCCodeStructPrivate));
	((ValaCCodeNodeClass *) klass)->write = (void (*)(ValaCCodeNode*, ValaCCodeWriter*)) vala_ccode_struct_real_write;
}


static void vala_ccode_struct_instance_init (ValaCCodeStruct * self) {
	GEqualFunc _tmp0_ = NULL;
	ValaArrayList* _tmp1_ = NULL;
	self->priv = VALA_CCODE_STRUCT_GET_PRIVATE (self);
	self->priv->_deprecated = FALSE;
	_tmp0_ = g_direct_equal;
	_tmp1_ = vala_array_list_new (VALA_TYPE_CCODE_DECLARATION, (GBoxedCopyFunc) vala_ccode_node_ref, (GDestroyNotify) vala_ccode_node_unref, _tmp0_);
	self->priv->declarations = (ValaList*) _tmp1_;
}


static void vala_ccode_struct_finalize (ValaCCodeNode* obj) {
	ValaCCodeStruct * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_CCODE_STRUCT, ValaCCodeStruct);
	_g_free0 (self->priv->_name);
	_vala_iterable_unref0 (self->priv->declarations);
	VALA_CCODE_NODE_CLASS (vala_ccode_struct_parent_class)->finalize (obj);
}


/**
 * Represents a struct declaration in the C code.
 */
GType vala_ccode_struct_get_type (void) {
	static volatile gsize vala_ccode_struct_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_struct_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeStructClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_struct_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeStruct), 0, (GInstanceInitFunc) vala_ccode_struct_instance_init, NULL };
		GType vala_ccode_struct_type_id;
		vala_ccode_struct_type_id = g_type_register_static (VALA_TYPE_CCODE_NODE, "ValaCCodeStruct", &g_define_type_info, 0);
		g_once_init_leave (&vala_ccode_struct_type_id__volatile, vala_ccode_struct_type_id);
	}
	return vala_ccode_struct_type_id__volatile;
}



