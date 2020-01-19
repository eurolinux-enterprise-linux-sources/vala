/* valaccodecontinuestatement.c generated by valac, the Vala compiler
 * generated from valaccodecontinuestatement.vala, do not modify */

/* valaccodecontinuestatement.vala
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

#define VALA_TYPE_CCODE_STATEMENT (vala_ccode_statement_get_type ())
#define VALA_CCODE_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_STATEMENT, ValaCCodeStatement))
#define VALA_CCODE_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_STATEMENT, ValaCCodeStatementClass))
#define VALA_IS_CCODE_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_STATEMENT))
#define VALA_IS_CCODE_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_STATEMENT))
#define VALA_CCODE_STATEMENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_STATEMENT, ValaCCodeStatementClass))

typedef struct _ValaCCodeStatement ValaCCodeStatement;
typedef struct _ValaCCodeStatementClass ValaCCodeStatementClass;
typedef struct _ValaCCodeStatementPrivate ValaCCodeStatementPrivate;

#define VALA_TYPE_CCODE_CONTINUE_STATEMENT (vala_ccode_continue_statement_get_type ())
#define VALA_CCODE_CONTINUE_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_CONTINUE_STATEMENT, ValaCCodeContinueStatement))
#define VALA_CCODE_CONTINUE_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_CONTINUE_STATEMENT, ValaCCodeContinueStatementClass))
#define VALA_IS_CCODE_CONTINUE_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_CONTINUE_STATEMENT))
#define VALA_IS_CCODE_CONTINUE_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_CONTINUE_STATEMENT))
#define VALA_CCODE_CONTINUE_STATEMENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_CONTINUE_STATEMENT, ValaCCodeContinueStatementClass))

typedef struct _ValaCCodeContinueStatement ValaCCodeContinueStatement;
typedef struct _ValaCCodeContinueStatementClass ValaCCodeContinueStatementClass;
typedef struct _ValaCCodeContinueStatementPrivate ValaCCodeContinueStatementPrivate;

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

struct _ValaCCodeStatement {
	ValaCCodeNode parent_instance;
	ValaCCodeStatementPrivate * priv;
};

struct _ValaCCodeStatementClass {
	ValaCCodeNodeClass parent_class;
};

struct _ValaCCodeContinueStatement {
	ValaCCodeStatement parent_instance;
	ValaCCodeContinueStatementPrivate * priv;
};

struct _ValaCCodeContinueStatementClass {
	ValaCCodeStatementClass parent_class;
};


static gpointer vala_ccode_continue_statement_parent_class = NULL;

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
GType vala_ccode_statement_get_type (void) G_GNUC_CONST;
GType vala_ccode_continue_statement_get_type (void) G_GNUC_CONST;
enum  {
	VALA_CCODE_CONTINUE_STATEMENT_DUMMY_PROPERTY
};
static void vala_ccode_continue_statement_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer);
GType vala_ccode_line_directive_get_type (void) G_GNUC_CONST;
void vala_ccode_writer_write_indent (ValaCCodeWriter* self, ValaCCodeLineDirective* line);
ValaCCodeLineDirective* vala_ccode_node_get_line (ValaCCodeNode* self);
void vala_ccode_writer_write_string (ValaCCodeWriter* self, const gchar* s);
void vala_ccode_writer_write_newline (ValaCCodeWriter* self);
ValaCCodeContinueStatement* vala_ccode_continue_statement_new (void);
ValaCCodeContinueStatement* vala_ccode_continue_statement_construct (GType object_type);
ValaCCodeStatement* vala_ccode_statement_construct (GType object_type);


static void vala_ccode_continue_statement_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer) {
	ValaCCodeContinueStatement * self;
	ValaCCodeWriter* _tmp0_ = NULL;
	ValaCCodeLineDirective* _tmp1_ = NULL;
	ValaCCodeLineDirective* _tmp2_ = NULL;
	ValaCCodeWriter* _tmp3_ = NULL;
	ValaCCodeWriter* _tmp4_ = NULL;
	self = (ValaCCodeContinueStatement*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = writer;
	_tmp1_ = vala_ccode_node_get_line ((ValaCCodeNode*) self);
	_tmp2_ = _tmp1_;
	vala_ccode_writer_write_indent (_tmp0_, _tmp2_);
	_tmp3_ = writer;
	vala_ccode_writer_write_string (_tmp3_, "continue;");
	_tmp4_ = writer;
	vala_ccode_writer_write_newline (_tmp4_);
}


ValaCCodeContinueStatement* vala_ccode_continue_statement_construct (GType object_type) {
	ValaCCodeContinueStatement* self = NULL;
	self = (ValaCCodeContinueStatement*) vala_ccode_statement_construct (object_type);
	return self;
}


ValaCCodeContinueStatement* vala_ccode_continue_statement_new (void) {
	return vala_ccode_continue_statement_construct (VALA_TYPE_CCODE_CONTINUE_STATEMENT);
}


static void vala_ccode_continue_statement_class_init (ValaCCodeContinueStatementClass * klass) {
	vala_ccode_continue_statement_parent_class = g_type_class_peek_parent (klass);
	((ValaCCodeNodeClass *) klass)->write = (void (*)(ValaCCodeNode*, ValaCCodeWriter*)) vala_ccode_continue_statement_real_write;
}


static void vala_ccode_continue_statement_instance_init (ValaCCodeContinueStatement * self) {
}


/**
 * Represents a continue statement in the C code.
 */
GType vala_ccode_continue_statement_get_type (void) {
	static volatile gsize vala_ccode_continue_statement_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_continue_statement_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeContinueStatementClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_continue_statement_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeContinueStatement), 0, (GInstanceInitFunc) vala_ccode_continue_statement_instance_init, NULL };
		GType vala_ccode_continue_statement_type_id;
		vala_ccode_continue_statement_type_id = g_type_register_static (VALA_TYPE_CCODE_STATEMENT, "ValaCCodeContinueStatement", &g_define_type_info, 0);
		g_once_init_leave (&vala_ccode_continue_statement_type_id__volatile, vala_ccode_continue_statement_type_id);
	}
	return vala_ccode_continue_statement_type_id__volatile;
}



