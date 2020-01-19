/* valaccodefunctiondeclarator.c generated by valac, the Vala compiler
 * generated from valaccodefunctiondeclarator.vala, do not modify */

/* valaccodefunctiondeclarator.vala
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

#define VALA_TYPE_CCODE_DECLARATOR (vala_ccode_declarator_get_type ())
#define VALA_CCODE_DECLARATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_DECLARATOR, ValaCCodeDeclarator))
#define VALA_CCODE_DECLARATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_DECLARATOR, ValaCCodeDeclaratorClass))
#define VALA_IS_CCODE_DECLARATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_DECLARATOR))
#define VALA_IS_CCODE_DECLARATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_DECLARATOR))
#define VALA_CCODE_DECLARATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_DECLARATOR, ValaCCodeDeclaratorClass))

typedef struct _ValaCCodeDeclarator ValaCCodeDeclarator;
typedef struct _ValaCCodeDeclaratorClass ValaCCodeDeclaratorClass;
typedef struct _ValaCCodeDeclaratorPrivate ValaCCodeDeclaratorPrivate;

#define VALA_TYPE_CCODE_FUNCTION_DECLARATOR (vala_ccode_function_declarator_get_type ())
#define VALA_CCODE_FUNCTION_DECLARATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_FUNCTION_DECLARATOR, ValaCCodeFunctionDeclarator))
#define VALA_CCODE_FUNCTION_DECLARATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_FUNCTION_DECLARATOR, ValaCCodeFunctionDeclaratorClass))
#define VALA_IS_CCODE_FUNCTION_DECLARATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_FUNCTION_DECLARATOR))
#define VALA_IS_CCODE_FUNCTION_DECLARATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_FUNCTION_DECLARATOR))
#define VALA_CCODE_FUNCTION_DECLARATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_FUNCTION_DECLARATOR, ValaCCodeFunctionDeclaratorClass))

typedef struct _ValaCCodeFunctionDeclarator ValaCCodeFunctionDeclarator;
typedef struct _ValaCCodeFunctionDeclaratorClass ValaCCodeFunctionDeclaratorClass;
typedef struct _ValaCCodeFunctionDeclaratorPrivate ValaCCodeFunctionDeclaratorPrivate;

#define VALA_TYPE_CCODE_PARAMETER (vala_ccode_parameter_get_type ())
#define VALA_CCODE_PARAMETER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_PARAMETER, ValaCCodeParameter))
#define VALA_CCODE_PARAMETER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_PARAMETER, ValaCCodeParameterClass))
#define VALA_IS_CCODE_PARAMETER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_PARAMETER))
#define VALA_IS_CCODE_PARAMETER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_PARAMETER))
#define VALA_CCODE_PARAMETER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_PARAMETER, ValaCCodeParameterClass))

typedef struct _ValaCCodeParameter ValaCCodeParameter;
typedef struct _ValaCCodeParameterClass ValaCCodeParameterClass;
#define _g_free0(var) (var = (g_free (var), NULL))
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

struct _ValaCCodeDeclarator {
	ValaCCodeNode parent_instance;
	ValaCCodeDeclaratorPrivate * priv;
};

struct _ValaCCodeDeclaratorClass {
	ValaCCodeNodeClass parent_class;
	void (*write_initialization) (ValaCCodeDeclarator* self, ValaCCodeWriter* writer);
};

struct _ValaCCodeFunctionDeclarator {
	ValaCCodeDeclarator parent_instance;
	ValaCCodeFunctionDeclaratorPrivate * priv;
};

struct _ValaCCodeFunctionDeclaratorClass {
	ValaCCodeDeclaratorClass parent_class;
};

struct _ValaCCodeFunctionDeclaratorPrivate {
	gchar* _name;
	ValaList* parameters;
};


static gpointer vala_ccode_function_declarator_parent_class = NULL;

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
GType vala_ccode_declarator_get_type (void) G_GNUC_CONST;
GType vala_ccode_function_declarator_get_type (void) G_GNUC_CONST;
GType vala_ccode_parameter_get_type (void) G_GNUC_CONST;
#define VALA_CCODE_FUNCTION_DECLARATOR_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_CCODE_FUNCTION_DECLARATOR, ValaCCodeFunctionDeclaratorPrivate))
enum  {
	VALA_CCODE_FUNCTION_DECLARATOR_DUMMY_PROPERTY
};
ValaCCodeFunctionDeclarator* vala_ccode_function_declarator_new (const gchar* name);
ValaCCodeFunctionDeclarator* vala_ccode_function_declarator_construct (GType object_type, const gchar* name);
ValaCCodeDeclarator* vala_ccode_declarator_construct (GType object_type);
void vala_ccode_function_declarator_set_name (ValaCCodeFunctionDeclarator* self, const gchar* value);
void vala_ccode_function_declarator_add_parameter (ValaCCodeFunctionDeclarator* self, ValaCCodeParameter* param);
static void vala_ccode_function_declarator_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer);
void vala_ccode_node_write_declaration (ValaCCodeNode* self, ValaCCodeWriter* writer);
static void vala_ccode_function_declarator_real_write_declaration (ValaCCodeNode* base, ValaCCodeWriter* writer);
void vala_ccode_writer_write_string (ValaCCodeWriter* self, const gchar* s);
const gchar* vala_ccode_function_declarator_get_name (ValaCCodeFunctionDeclarator* self);
void vala_ccode_node_write (ValaCCodeNode* self, ValaCCodeWriter* writer);
static void vala_ccode_function_declarator_finalize (ValaCCodeNode* obj);


ValaCCodeFunctionDeclarator* vala_ccode_function_declarator_construct (GType object_type, const gchar* name) {
	ValaCCodeFunctionDeclarator* self = NULL;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (name != NULL, NULL);
	self = (ValaCCodeFunctionDeclarator*) vala_ccode_declarator_construct (object_type);
	_tmp0_ = name;
	vala_ccode_function_declarator_set_name (self, _tmp0_);
	return self;
}


ValaCCodeFunctionDeclarator* vala_ccode_function_declarator_new (const gchar* name) {
	return vala_ccode_function_declarator_construct (VALA_TYPE_CCODE_FUNCTION_DECLARATOR, name);
}


/**
 * Appends the specified parameter to the list of function parameters.
 *
 * @param param a formal parameter
 */
void vala_ccode_function_declarator_add_parameter (ValaCCodeFunctionDeclarator* self, ValaCCodeParameter* param) {
	ValaList* _tmp0_ = NULL;
	ValaCCodeParameter* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (param != NULL);
	_tmp0_ = self->priv->parameters;
	_tmp1_ = param;
	vala_collection_add ((ValaCollection*) _tmp0_, _tmp1_);
}


static void vala_ccode_function_declarator_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer) {
	ValaCCodeFunctionDeclarator * self;
	ValaCCodeWriter* _tmp0_ = NULL;
	self = (ValaCCodeFunctionDeclarator*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = writer;
	vala_ccode_node_write_declaration ((ValaCCodeNode*) self, _tmp0_);
}


static gpointer _vala_iterable_ref0 (gpointer self) {
	return self ? vala_iterable_ref (self) : NULL;
}


static void vala_ccode_function_declarator_real_write_declaration (ValaCCodeNode* base, ValaCCodeWriter* writer) {
	ValaCCodeFunctionDeclarator * self;
	ValaCCodeWriter* _tmp0_ = NULL;
	ValaCCodeWriter* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	ValaCCodeWriter* _tmp3_ = NULL;
	gboolean first = FALSE;
	ValaCCodeWriter* _tmp19_ = NULL;
	self = (ValaCCodeFunctionDeclarator*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = writer;
	vala_ccode_writer_write_string (_tmp0_, "(*");
	_tmp1_ = writer;
	_tmp2_ = self->priv->_name;
	vala_ccode_writer_write_string (_tmp1_, _tmp2_);
	_tmp3_ = writer;
	vala_ccode_writer_write_string (_tmp3_, ") (");
	first = TRUE;
	{
		ValaList* _param_list = NULL;
		ValaList* _tmp4_ = NULL;
		ValaList* _tmp5_ = NULL;
		gint _param_size = 0;
		ValaList* _tmp6_ = NULL;
		gint _tmp7_ = 0;
		gint _tmp8_ = 0;
		gint _param_index = 0;
		_tmp4_ = self->priv->parameters;
		_tmp5_ = _vala_iterable_ref0 (_tmp4_);
		_param_list = _tmp5_;
		_tmp6_ = _param_list;
		_tmp7_ = vala_collection_get_size ((ValaCollection*) _tmp6_);
		_tmp8_ = _tmp7_;
		_param_size = _tmp8_;
		_param_index = -1;
		while (TRUE) {
			gint _tmp9_ = 0;
			gint _tmp10_ = 0;
			gint _tmp11_ = 0;
			ValaCCodeParameter* param = NULL;
			ValaList* _tmp12_ = NULL;
			gint _tmp13_ = 0;
			gpointer _tmp14_ = NULL;
			gboolean _tmp15_ = FALSE;
			ValaCCodeParameter* _tmp17_ = NULL;
			ValaCCodeWriter* _tmp18_ = NULL;
			_tmp9_ = _param_index;
			_param_index = _tmp9_ + 1;
			_tmp10_ = _param_index;
			_tmp11_ = _param_size;
			if (!(_tmp10_ < _tmp11_)) {
				break;
			}
			_tmp12_ = _param_list;
			_tmp13_ = _param_index;
			_tmp14_ = vala_list_get (_tmp12_, _tmp13_);
			param = (ValaCCodeParameter*) _tmp14_;
			_tmp15_ = first;
			if (!_tmp15_) {
				ValaCCodeWriter* _tmp16_ = NULL;
				_tmp16_ = writer;
				vala_ccode_writer_write_string (_tmp16_, ", ");
			} else {
				first = FALSE;
			}
			_tmp17_ = param;
			_tmp18_ = writer;
			vala_ccode_node_write ((ValaCCodeNode*) _tmp17_, _tmp18_);
			_vala_ccode_node_unref0 (param);
		}
		_vala_iterable_unref0 (_param_list);
	}
	_tmp19_ = writer;
	vala_ccode_writer_write_string (_tmp19_, ")");
}


const gchar* vala_ccode_function_declarator_get_name (ValaCCodeFunctionDeclarator* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_name;
	result = _tmp0_;
	return result;
}


void vala_ccode_function_declarator_set_name (ValaCCodeFunctionDeclarator* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_name);
	self->priv->_name = _tmp1_;
}


static void vala_ccode_function_declarator_class_init (ValaCCodeFunctionDeclaratorClass * klass) {
	vala_ccode_function_declarator_parent_class = g_type_class_peek_parent (klass);
	((ValaCCodeNodeClass *) klass)->finalize = vala_ccode_function_declarator_finalize;
	g_type_class_add_private (klass, sizeof (ValaCCodeFunctionDeclaratorPrivate));
	((ValaCCodeNodeClass *) klass)->write = (void (*)(ValaCCodeNode*, ValaCCodeWriter*)) vala_ccode_function_declarator_real_write;
	((ValaCCodeNodeClass *) klass)->write_declaration = (void (*)(ValaCCodeNode*, ValaCCodeWriter*)) vala_ccode_function_declarator_real_write_declaration;
}


static void vala_ccode_function_declarator_instance_init (ValaCCodeFunctionDeclarator * self) {
	GEqualFunc _tmp0_ = NULL;
	ValaArrayList* _tmp1_ = NULL;
	self->priv = VALA_CCODE_FUNCTION_DECLARATOR_GET_PRIVATE (self);
	_tmp0_ = g_direct_equal;
	_tmp1_ = vala_array_list_new (VALA_TYPE_CCODE_PARAMETER, (GBoxedCopyFunc) vala_ccode_node_ref, (GDestroyNotify) vala_ccode_node_unref, _tmp0_);
	self->priv->parameters = (ValaList*) _tmp1_;
}


static void vala_ccode_function_declarator_finalize (ValaCCodeNode* obj) {
	ValaCCodeFunctionDeclarator * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_CCODE_FUNCTION_DECLARATOR, ValaCCodeFunctionDeclarator);
	_g_free0 (self->priv->_name);
	_vala_iterable_unref0 (self->priv->parameters);
	VALA_CCODE_NODE_CLASS (vala_ccode_function_declarator_parent_class)->finalize (obj);
}


/**
 * Represents a function pointer declarator in the C code.
 */
GType vala_ccode_function_declarator_get_type (void) {
	static volatile gsize vala_ccode_function_declarator_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_function_declarator_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeFunctionDeclaratorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_function_declarator_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeFunctionDeclarator), 0, (GInstanceInitFunc) vala_ccode_function_declarator_instance_init, NULL };
		GType vala_ccode_function_declarator_type_id;
		vala_ccode_function_declarator_type_id = g_type_register_static (VALA_TYPE_CCODE_DECLARATOR, "ValaCCodeFunctionDeclarator", &g_define_type_info, 0);
		g_once_init_leave (&vala_ccode_function_declarator_type_id__volatile, vala_ccode_function_declarator_type_id);
	}
	return vala_ccode_function_declarator_type_id__volatile;
}



