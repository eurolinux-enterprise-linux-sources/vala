/* valaccodeidentifier.c generated by valac, the Vala compiler
 * generated from valaccodeidentifier.vala, do not modify */

/* valaccodeidentifier.vala
 *
 * Copyright (C) 2006  Jürg Billeter
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

#define VALA_TYPE_CCODE_EXPRESSION (vala_ccode_expression_get_type ())
#define VALA_CCODE_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpression))
#define VALA_CCODE_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpressionClass))
#define VALA_IS_CCODE_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_EXPRESSION))
#define VALA_IS_CCODE_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_EXPRESSION))
#define VALA_CCODE_EXPRESSION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpressionClass))

typedef struct _ValaCCodeExpression ValaCCodeExpression;
typedef struct _ValaCCodeExpressionClass ValaCCodeExpressionClass;
typedef struct _ValaCCodeExpressionPrivate ValaCCodeExpressionPrivate;

#define VALA_TYPE_CCODE_IDENTIFIER (vala_ccode_identifier_get_type ())
#define VALA_CCODE_IDENTIFIER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_IDENTIFIER, ValaCCodeIdentifier))
#define VALA_CCODE_IDENTIFIER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_IDENTIFIER, ValaCCodeIdentifierClass))
#define VALA_IS_CCODE_IDENTIFIER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_IDENTIFIER))
#define VALA_IS_CCODE_IDENTIFIER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_IDENTIFIER))
#define VALA_CCODE_IDENTIFIER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_IDENTIFIER, ValaCCodeIdentifierClass))

typedef struct _ValaCCodeIdentifier ValaCCodeIdentifier;
typedef struct _ValaCCodeIdentifierClass ValaCCodeIdentifierClass;
typedef struct _ValaCCodeIdentifierPrivate ValaCCodeIdentifierPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))

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

struct _ValaCCodeExpression {
	ValaCCodeNode parent_instance;
	ValaCCodeExpressionPrivate * priv;
};

struct _ValaCCodeExpressionClass {
	ValaCCodeNodeClass parent_class;
	void (*write_inner) (ValaCCodeExpression* self, ValaCCodeWriter* writer);
};

struct _ValaCCodeIdentifier {
	ValaCCodeExpression parent_instance;
	ValaCCodeIdentifierPrivate * priv;
};

struct _ValaCCodeIdentifierClass {
	ValaCCodeExpressionClass parent_class;
};

struct _ValaCCodeIdentifierPrivate {
	gchar* _name;
};


static gpointer vala_ccode_identifier_parent_class = NULL;

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
GType vala_ccode_expression_get_type (void) G_GNUC_CONST;
GType vala_ccode_identifier_get_type (void) G_GNUC_CONST;
#define VALA_CCODE_IDENTIFIER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_CCODE_IDENTIFIER, ValaCCodeIdentifierPrivate))
enum  {
	VALA_CCODE_IDENTIFIER_DUMMY_PROPERTY
};
ValaCCodeIdentifier* vala_ccode_identifier_new (const gchar* _name);
ValaCCodeIdentifier* vala_ccode_identifier_construct (GType object_type, const gchar* _name);
ValaCCodeExpression* vala_ccode_expression_construct (GType object_type);
void vala_ccode_identifier_set_name (ValaCCodeIdentifier* self, const gchar* value);
static void vala_ccode_identifier_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer);
void vala_ccode_writer_write_string (ValaCCodeWriter* self, const gchar* s);
const gchar* vala_ccode_identifier_get_name (ValaCCodeIdentifier* self);
static void vala_ccode_identifier_finalize (ValaCCodeNode* obj);


ValaCCodeIdentifier* vala_ccode_identifier_construct (GType object_type, const gchar* _name) {
	ValaCCodeIdentifier* self = NULL;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (_name != NULL, NULL);
	self = (ValaCCodeIdentifier*) vala_ccode_expression_construct (object_type);
	_tmp0_ = _name;
	vala_ccode_identifier_set_name (self, _tmp0_);
	return self;
}


ValaCCodeIdentifier* vala_ccode_identifier_new (const gchar* _name) {
	return vala_ccode_identifier_construct (VALA_TYPE_CCODE_IDENTIFIER, _name);
}


static void vala_ccode_identifier_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer) {
	ValaCCodeIdentifier * self;
	ValaCCodeWriter* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	self = (ValaCCodeIdentifier*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = writer;
	_tmp1_ = self->priv->_name;
	vala_ccode_writer_write_string (_tmp0_, _tmp1_);
}


const gchar* vala_ccode_identifier_get_name (ValaCCodeIdentifier* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_name;
	result = _tmp0_;
	return result;
}


void vala_ccode_identifier_set_name (ValaCCodeIdentifier* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_name);
	self->priv->_name = _tmp1_;
}


static void vala_ccode_identifier_class_init (ValaCCodeIdentifierClass * klass) {
	vala_ccode_identifier_parent_class = g_type_class_peek_parent (klass);
	((ValaCCodeNodeClass *) klass)->finalize = vala_ccode_identifier_finalize;
	g_type_class_add_private (klass, sizeof (ValaCCodeIdentifierPrivate));
	((ValaCCodeNodeClass *) klass)->write = (void (*)(ValaCCodeNode*, ValaCCodeWriter*)) vala_ccode_identifier_real_write;
}


static void vala_ccode_identifier_instance_init (ValaCCodeIdentifier * self) {
	self->priv = VALA_CCODE_IDENTIFIER_GET_PRIVATE (self);
}


static void vala_ccode_identifier_finalize (ValaCCodeNode* obj) {
	ValaCCodeIdentifier * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_CCODE_IDENTIFIER, ValaCCodeIdentifier);
	_g_free0 (self->priv->_name);
	VALA_CCODE_NODE_CLASS (vala_ccode_identifier_parent_class)->finalize (obj);
}


/**
 * Represents a identifier in the C code.
 */
GType vala_ccode_identifier_get_type (void) {
	static volatile gsize vala_ccode_identifier_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_identifier_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeIdentifierClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_identifier_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeIdentifier), 0, (GInstanceInitFunc) vala_ccode_identifier_instance_init, NULL };
		GType vala_ccode_identifier_type_id;
		vala_ccode_identifier_type_id = g_type_register_static (VALA_TYPE_CCODE_EXPRESSION, "ValaCCodeIdentifier", &g_define_type_info, 0);
		g_once_init_leave (&vala_ccode_identifier_type_id__volatile, vala_ccode_identifier_type_id);
	}
	return vala_ccode_identifier_type_id__volatile;
}



