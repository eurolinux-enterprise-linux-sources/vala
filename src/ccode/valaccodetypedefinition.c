/* valaccodetypedefinition.c generated by valac, the Vala compiler
 * generated from valaccodetypedefinition.vala, do not modify */

/* valaccodetypedefinition.vala
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

#define VALA_TYPE_CCODE_TYPE_DEFINITION (vala_ccode_type_definition_get_type ())
#define VALA_CCODE_TYPE_DEFINITION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_TYPE_DEFINITION, ValaCCodeTypeDefinition))
#define VALA_CCODE_TYPE_DEFINITION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_TYPE_DEFINITION, ValaCCodeTypeDefinitionClass))
#define VALA_IS_CCODE_TYPE_DEFINITION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_TYPE_DEFINITION))
#define VALA_IS_CCODE_TYPE_DEFINITION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_TYPE_DEFINITION))
#define VALA_CCODE_TYPE_DEFINITION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_TYPE_DEFINITION, ValaCCodeTypeDefinitionClass))

typedef struct _ValaCCodeTypeDefinition ValaCCodeTypeDefinition;
typedef struct _ValaCCodeTypeDefinitionClass ValaCCodeTypeDefinitionClass;
typedef struct _ValaCCodeTypeDefinitionPrivate ValaCCodeTypeDefinitionPrivate;

#define VALA_TYPE_CCODE_DECLARATOR (vala_ccode_declarator_get_type ())
#define VALA_CCODE_DECLARATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_DECLARATOR, ValaCCodeDeclarator))
#define VALA_CCODE_DECLARATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_DECLARATOR, ValaCCodeDeclaratorClass))
#define VALA_IS_CCODE_DECLARATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_DECLARATOR))
#define VALA_IS_CCODE_DECLARATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_DECLARATOR))
#define VALA_CCODE_DECLARATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_DECLARATOR, ValaCCodeDeclaratorClass))

typedef struct _ValaCCodeDeclarator ValaCCodeDeclarator;
typedef struct _ValaCCodeDeclaratorClass ValaCCodeDeclaratorClass;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _vala_ccode_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_ccode_node_unref (var), NULL)))

#define VALA_TYPE_CCODE_LINE_DIRECTIVE (vala_ccode_line_directive_get_type ())
#define VALA_CCODE_LINE_DIRECTIVE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_LINE_DIRECTIVE, ValaCCodeLineDirective))
#define VALA_CCODE_LINE_DIRECTIVE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_LINE_DIRECTIVE, ValaCCodeLineDirectiveClass))
#define VALA_IS_CCODE_LINE_DIRECTIVE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_LINE_DIRECTIVE))
#define VALA_IS_CCODE_LINE_DIRECTIVE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_LINE_DIRECTIVE))
#define VALA_CCODE_LINE_DIRECTIVE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_LINE_DIRECTIVE, ValaCCodeLineDirectiveClass))

typedef struct _ValaCCodeLineDirective ValaCCodeLineDirective;
typedef struct _ValaCCodeLineDirectiveClass ValaCCodeLineDirectiveClass;

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

struct _ValaCCodeTypeDefinition {
	ValaCCodeNode parent_instance;
	ValaCCodeTypeDefinitionPrivate * priv;
};

struct _ValaCCodeTypeDefinitionClass {
	ValaCCodeNodeClass parent_class;
};

struct _ValaCCodeTypeDefinitionPrivate {
	gchar* _type_name;
	ValaCCodeDeclarator* _declarator;
	gboolean _deprecated;
};


static gpointer vala_ccode_type_definition_parent_class = NULL;

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
GType vala_ccode_type_definition_get_type (void) G_GNUC_CONST;
GType vala_ccode_declarator_get_type (void) G_GNUC_CONST;
#define VALA_CCODE_TYPE_DEFINITION_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_CCODE_TYPE_DEFINITION, ValaCCodeTypeDefinitionPrivate))
enum  {
	VALA_CCODE_TYPE_DEFINITION_DUMMY_PROPERTY
};
ValaCCodeTypeDefinition* vala_ccode_type_definition_new (const gchar* type, ValaCCodeDeclarator* decl);
ValaCCodeTypeDefinition* vala_ccode_type_definition_construct (GType object_type, const gchar* type, ValaCCodeDeclarator* decl);
ValaCCodeNode* vala_ccode_node_construct (GType object_type);
void vala_ccode_type_definition_set_type_name (ValaCCodeTypeDefinition* self, const gchar* value);
void vala_ccode_type_definition_set_declarator (ValaCCodeTypeDefinition* self, ValaCCodeDeclarator* value);
static void vala_ccode_type_definition_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer);
static void vala_ccode_type_definition_real_write_declaration (ValaCCodeNode* base, ValaCCodeWriter* writer);
GType vala_ccode_line_directive_get_type (void) G_GNUC_CONST;
void vala_ccode_writer_write_indent (ValaCCodeWriter* self, ValaCCodeLineDirective* line);
void vala_ccode_writer_write_string (ValaCCodeWriter* self, const gchar* s);
const gchar* vala_ccode_type_definition_get_type_name (ValaCCodeTypeDefinition* self);
ValaCCodeDeclarator* vala_ccode_type_definition_get_declarator (ValaCCodeTypeDefinition* self);
void vala_ccode_node_write_declaration (ValaCCodeNode* self, ValaCCodeWriter* writer);
gboolean vala_ccode_type_definition_get_deprecated (ValaCCodeTypeDefinition* self);
void vala_ccode_writer_write_newline (ValaCCodeWriter* self);
void vala_ccode_type_definition_set_deprecated (ValaCCodeTypeDefinition* self, gboolean value);
static void vala_ccode_type_definition_finalize (ValaCCodeNode* obj);


ValaCCodeTypeDefinition* vala_ccode_type_definition_construct (GType object_type, const gchar* type, ValaCCodeDeclarator* decl) {
	ValaCCodeTypeDefinition* self = NULL;
	const gchar* _tmp0_ = NULL;
	ValaCCodeDeclarator* _tmp1_ = NULL;
	g_return_val_if_fail (type != NULL, NULL);
	g_return_val_if_fail (decl != NULL, NULL);
	self = (ValaCCodeTypeDefinition*) vala_ccode_node_construct (object_type);
	_tmp0_ = type;
	vala_ccode_type_definition_set_type_name (self, _tmp0_);
	_tmp1_ = decl;
	vala_ccode_type_definition_set_declarator (self, _tmp1_);
	return self;
}


ValaCCodeTypeDefinition* vala_ccode_type_definition_new (const gchar* type, ValaCCodeDeclarator* decl) {
	return vala_ccode_type_definition_construct (VALA_TYPE_CCODE_TYPE_DEFINITION, type, decl);
}


static void vala_ccode_type_definition_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer) {
	ValaCCodeTypeDefinition * self;
	self = (ValaCCodeTypeDefinition*) base;
	g_return_if_fail (writer != NULL);
}


static void vala_ccode_type_definition_real_write_declaration (ValaCCodeNode* base, ValaCCodeWriter* writer) {
	ValaCCodeTypeDefinition * self;
	ValaCCodeWriter* _tmp0_ = NULL;
	ValaCCodeWriter* _tmp1_ = NULL;
	ValaCCodeWriter* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	ValaCCodeWriter* _tmp4_ = NULL;
	ValaCCodeDeclarator* _tmp5_ = NULL;
	ValaCCodeWriter* _tmp6_ = NULL;
	gboolean _tmp7_ = FALSE;
	ValaCCodeWriter* _tmp9_ = NULL;
	ValaCCodeWriter* _tmp10_ = NULL;
	self = (ValaCCodeTypeDefinition*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = writer;
	vala_ccode_writer_write_indent (_tmp0_, NULL);
	_tmp1_ = writer;
	vala_ccode_writer_write_string (_tmp1_, "typedef ");
	_tmp2_ = writer;
	_tmp3_ = self->priv->_type_name;
	vala_ccode_writer_write_string (_tmp2_, _tmp3_);
	_tmp4_ = writer;
	vala_ccode_writer_write_string (_tmp4_, " ");
	_tmp5_ = self->priv->_declarator;
	_tmp6_ = writer;
	vala_ccode_node_write_declaration ((ValaCCodeNode*) _tmp5_, _tmp6_);
	_tmp7_ = self->priv->_deprecated;
	if (_tmp7_) {
		ValaCCodeWriter* _tmp8_ = NULL;
		_tmp8_ = writer;
		vala_ccode_writer_write_string (_tmp8_, " G_GNUC_DEPRECATED");
	}
	_tmp9_ = writer;
	vala_ccode_writer_write_string (_tmp9_, ";");
	_tmp10_ = writer;
	vala_ccode_writer_write_newline (_tmp10_);
}


const gchar* vala_ccode_type_definition_get_type_name (ValaCCodeTypeDefinition* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_type_name;
	result = _tmp0_;
	return result;
}


void vala_ccode_type_definition_set_type_name (ValaCCodeTypeDefinition* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_type_name);
	self->priv->_type_name = _tmp1_;
}


ValaCCodeDeclarator* vala_ccode_type_definition_get_declarator (ValaCCodeTypeDefinition* self) {
	ValaCCodeDeclarator* result;
	ValaCCodeDeclarator* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_declarator;
	result = _tmp0_;
	return result;
}


static gpointer _vala_ccode_node_ref0 (gpointer self) {
	return self ? vala_ccode_node_ref (self) : NULL;
}


void vala_ccode_type_definition_set_declarator (ValaCCodeTypeDefinition* self, ValaCCodeDeclarator* value) {
	ValaCCodeDeclarator* _tmp0_ = NULL;
	ValaCCodeDeclarator* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _vala_ccode_node_ref0 (_tmp0_);
	_vala_ccode_node_unref0 (self->priv->_declarator);
	self->priv->_declarator = _tmp1_;
}


gboolean vala_ccode_type_definition_get_deprecated (ValaCCodeTypeDefinition* self) {
	gboolean result;
	gboolean _tmp0_ = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->priv->_deprecated;
	result = _tmp0_;
	return result;
}


void vala_ccode_type_definition_set_deprecated (ValaCCodeTypeDefinition* self, gboolean value) {
	gboolean _tmp0_ = FALSE;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_deprecated = _tmp0_;
}


static void vala_ccode_type_definition_class_init (ValaCCodeTypeDefinitionClass * klass) {
	vala_ccode_type_definition_parent_class = g_type_class_peek_parent (klass);
	((ValaCCodeNodeClass *) klass)->finalize = vala_ccode_type_definition_finalize;
	g_type_class_add_private (klass, sizeof (ValaCCodeTypeDefinitionPrivate));
	((ValaCCodeNodeClass *) klass)->write = (void (*)(ValaCCodeNode*, ValaCCodeWriter*)) vala_ccode_type_definition_real_write;
	((ValaCCodeNodeClass *) klass)->write_declaration = (void (*)(ValaCCodeNode*, ValaCCodeWriter*)) vala_ccode_type_definition_real_write_declaration;
}


static void vala_ccode_type_definition_instance_init (ValaCCodeTypeDefinition * self) {
	self->priv = VALA_CCODE_TYPE_DEFINITION_GET_PRIVATE (self);
	self->priv->_deprecated = FALSE;
}


static void vala_ccode_type_definition_finalize (ValaCCodeNode* obj) {
	ValaCCodeTypeDefinition * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_CCODE_TYPE_DEFINITION, ValaCCodeTypeDefinition);
	_g_free0 (self->priv->_type_name);
	_vala_ccode_node_unref0 (self->priv->_declarator);
	VALA_CCODE_NODE_CLASS (vala_ccode_type_definition_parent_class)->finalize (obj);
}


/**
 * Represents a typedef in the C code.
 */
GType vala_ccode_type_definition_get_type (void) {
	static volatile gsize vala_ccode_type_definition_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_type_definition_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeTypeDefinitionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_type_definition_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeTypeDefinition), 0, (GInstanceInitFunc) vala_ccode_type_definition_instance_init, NULL };
		GType vala_ccode_type_definition_type_id;
		vala_ccode_type_definition_type_id = g_type_register_static (VALA_TYPE_CCODE_NODE, "ValaCCodeTypeDefinition", &g_define_type_info, 0);
		g_once_init_leave (&vala_ccode_type_definition_type_id__volatile, vala_ccode_type_definition_type_id);
	}
	return vala_ccode_type_definition_type_id__volatile;
}



