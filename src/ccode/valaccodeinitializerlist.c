/* valaccodeinitializerlist.c generated by valac, the Vala compiler
 * generated from valaccodeinitializerlist.vala, do not modify */

/* valaccodeinitializerlist.vala
 *
 * Copyright (C) 2006-2007  Jürg Billeter
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
#include <valagee.h>
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

#define VALA_TYPE_CCODE_INITIALIZER_LIST (vala_ccode_initializer_list_get_type ())
#define VALA_CCODE_INITIALIZER_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_INITIALIZER_LIST, ValaCCodeInitializerList))
#define VALA_CCODE_INITIALIZER_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_INITIALIZER_LIST, ValaCCodeInitializerListClass))
#define VALA_IS_CCODE_INITIALIZER_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_INITIALIZER_LIST))
#define VALA_IS_CCODE_INITIALIZER_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_INITIALIZER_LIST))
#define VALA_CCODE_INITIALIZER_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_INITIALIZER_LIST, ValaCCodeInitializerListClass))

typedef struct _ValaCCodeInitializerList ValaCCodeInitializerList;
typedef struct _ValaCCodeInitializerListClass ValaCCodeInitializerListClass;
typedef struct _ValaCCodeInitializerListPrivate ValaCCodeInitializerListPrivate;
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))
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

struct _ValaCCodeExpression {
	ValaCCodeNode parent_instance;
	ValaCCodeExpressionPrivate * priv;
};

struct _ValaCCodeExpressionClass {
	ValaCCodeNodeClass parent_class;
	void (*write_inner) (ValaCCodeExpression* self, ValaCCodeWriter* writer);
};

struct _ValaCCodeInitializerList {
	ValaCCodeExpression parent_instance;
	ValaCCodeInitializerListPrivate * priv;
};

struct _ValaCCodeInitializerListClass {
	ValaCCodeExpressionClass parent_class;
};

struct _ValaCCodeInitializerListPrivate {
	ValaList* initializers;
};


static gpointer vala_ccode_initializer_list_parent_class = NULL;

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
GType vala_ccode_initializer_list_get_type (void) G_GNUC_CONST;
#define VALA_CCODE_INITIALIZER_LIST_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_CCODE_INITIALIZER_LIST, ValaCCodeInitializerListPrivate))
enum  {
	VALA_CCODE_INITIALIZER_LIST_DUMMY_PROPERTY
};
void vala_ccode_initializer_list_append (ValaCCodeInitializerList* self, ValaCCodeExpression* expr);
static void vala_ccode_initializer_list_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer);
void vala_ccode_writer_write_string (ValaCCodeWriter* self, const gchar* s);
void vala_ccode_node_write (ValaCCodeNode* self, ValaCCodeWriter* writer);
ValaCCodeInitializerList* vala_ccode_initializer_list_new (void);
ValaCCodeInitializerList* vala_ccode_initializer_list_construct (GType object_type);
ValaCCodeExpression* vala_ccode_expression_construct (GType object_type);
static void vala_ccode_initializer_list_finalize (ValaCCodeNode* obj);


/**
 * Appends the specified expression to this initializer list.
 *
 * @param expr an expression
 */
void vala_ccode_initializer_list_append (ValaCCodeInitializerList* self, ValaCCodeExpression* expr) {
	ValaList* _tmp0_;
	ValaCCodeExpression* _tmp1_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (expr != NULL);
	_tmp0_ = self->priv->initializers;
	_tmp1_ = expr;
	vala_collection_add ((ValaCollection*) _tmp0_, _tmp1_);
}


static gpointer _vala_iterable_ref0 (gpointer self) {
	return self ? vala_iterable_ref (self) : NULL;
}


static void vala_ccode_initializer_list_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer) {
	ValaCCodeInitializerList * self;
	ValaCCodeWriter* _tmp0_;
	gboolean first;
	ValaCCodeWriter* _tmp17_;
	self = (ValaCCodeInitializerList*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = writer;
	vala_ccode_writer_write_string (_tmp0_, "{");
	first = TRUE;
	{
		ValaList* _tmp1_;
		ValaList* _tmp2_;
		ValaList* _expr_list;
		ValaList* _tmp3_;
		gint _tmp4_;
		gint _tmp5_;
		gint _expr_size;
		gint _expr_index;
		_tmp1_ = self->priv->initializers;
		_tmp2_ = _vala_iterable_ref0 (_tmp1_);
		_expr_list = _tmp2_;
		_tmp3_ = _expr_list;
		_tmp4_ = vala_collection_get_size ((ValaCollection*) _tmp3_);
		_tmp5_ = _tmp4_;
		_expr_size = _tmp5_;
		_expr_index = -1;
		while (TRUE) {
			gint _tmp6_;
			gint _tmp7_;
			gint _tmp8_;
			ValaList* _tmp9_;
			gint _tmp10_;
			gpointer _tmp11_ = NULL;
			ValaCCodeExpression* expr;
			gboolean _tmp12_;
			ValaCCodeExpression* _tmp14_;
			_tmp6_ = _expr_index;
			_expr_index = _tmp6_ + 1;
			_tmp7_ = _expr_index;
			_tmp8_ = _expr_size;
			if (!(_tmp7_ < _tmp8_)) {
				break;
			}
			_tmp9_ = _expr_list;
			_tmp10_ = _expr_index;
			_tmp11_ = vala_list_get (_tmp9_, _tmp10_);
			expr = (ValaCCodeExpression*) _tmp11_;
			_tmp12_ = first;
			if (!_tmp12_) {
				ValaCCodeWriter* _tmp13_;
				_tmp13_ = writer;
				vala_ccode_writer_write_string (_tmp13_, ", ");
			} else {
				first = FALSE;
			}
			_tmp14_ = expr;
			if (_tmp14_ != NULL) {
				ValaCCodeExpression* _tmp15_;
				ValaCCodeWriter* _tmp16_;
				_tmp15_ = expr;
				_tmp16_ = writer;
				vala_ccode_node_write ((ValaCCodeNode*) _tmp15_, _tmp16_);
			}
			_vala_ccode_node_unref0 (expr);
		}
		_vala_iterable_unref0 (_expr_list);
	}
	_tmp17_ = writer;
	vala_ccode_writer_write_string (_tmp17_, "}");
}


ValaCCodeInitializerList* vala_ccode_initializer_list_construct (GType object_type) {
	ValaCCodeInitializerList* self = NULL;
	self = (ValaCCodeInitializerList*) vala_ccode_expression_construct (object_type);
	return self;
}


ValaCCodeInitializerList* vala_ccode_initializer_list_new (void) {
	return vala_ccode_initializer_list_construct (VALA_TYPE_CCODE_INITIALIZER_LIST);
}


static void vala_ccode_initializer_list_class_init (ValaCCodeInitializerListClass * klass) {
	vala_ccode_initializer_list_parent_class = g_type_class_peek_parent (klass);
	VALA_CCODE_NODE_CLASS (klass)->finalize = vala_ccode_initializer_list_finalize;
	g_type_class_add_private (klass, sizeof (ValaCCodeInitializerListPrivate));
	VALA_CCODE_NODE_CLASS (klass)->write = vala_ccode_initializer_list_real_write;
}


static void vala_ccode_initializer_list_instance_init (ValaCCodeInitializerList * self) {
	GEqualFunc _tmp0_;
	ValaArrayList* _tmp1_;
	self->priv = VALA_CCODE_INITIALIZER_LIST_GET_PRIVATE (self);
	_tmp0_ = g_direct_equal;
	_tmp1_ = vala_array_list_new (VALA_TYPE_CCODE_EXPRESSION, (GBoxedCopyFunc) vala_ccode_node_ref, vala_ccode_node_unref, _tmp0_);
	self->priv->initializers = (ValaList*) _tmp1_;
}


static void vala_ccode_initializer_list_finalize (ValaCCodeNode* obj) {
	ValaCCodeInitializerList * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_CCODE_INITIALIZER_LIST, ValaCCodeInitializerList);
	_vala_iterable_unref0 (self->priv->initializers);
	VALA_CCODE_NODE_CLASS (vala_ccode_initializer_list_parent_class)->finalize (obj);
}


/**
 * Represents a struct or array initializer list in the C code.
 */
GType vala_ccode_initializer_list_get_type (void) {
	static volatile gsize vala_ccode_initializer_list_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_initializer_list_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeInitializerListClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_initializer_list_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeInitializerList), 0, (GInstanceInitFunc) vala_ccode_initializer_list_instance_init, NULL };
		GType vala_ccode_initializer_list_type_id;
		vala_ccode_initializer_list_type_id = g_type_register_static (VALA_TYPE_CCODE_EXPRESSION, "ValaCCodeInitializerList", &g_define_type_info, 0);
		g_once_init_leave (&vala_ccode_initializer_list_type_id__volatile, vala_ccode_initializer_list_type_id);
	}
	return vala_ccode_initializer_list_type_id__volatile;
}



