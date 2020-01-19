/* valaregexliteral.c generated by valac, the Vala compiler
 * generated from valaregexliteral.vala, do not modify */

/* valaregexliteral.vala
 *
 * Copyright (C) 2010  Jukka-Pekka Iivonen
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
 * 	Jukka-Pekka Iivonen <jp0409@jippii.fi>
 */


#include <glib.h>
#include <glib-object.h>
#include "vala.h"
#include <stdlib.h>
#include <string.h>

#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_regex_unref0(var) ((var == NULL) ? NULL : (var = (g_regex_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))

struct _ValaRegexLiteralPrivate {
	gchar* _value;
};


static gpointer vala_regex_literal_parent_class = NULL;

#define VALA_REGEX_LITERAL_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_REGEX_LITERAL, ValaRegexLiteralPrivate))
static void vala_regex_literal_real_accept (ValaCodeNode* base,
                                     ValaCodeVisitor* visitor);
static gboolean vala_regex_literal_real_is_pure (ValaExpression* base);
static gboolean vala_regex_literal_real_is_non_null (ValaExpression* base);
static gchar* vala_regex_literal_real_to_string (ValaCodeNode* base);
static gboolean vala_regex_literal_real_check (ValaCodeNode* base,
                                        ValaCodeContext* context);
static void vala_regex_literal_real_emit (ValaCodeNode* base,
                                   ValaCodeGenerator* codegen);
static void vala_regex_literal_finalize (ValaCodeNode * obj);


/**
 * Creates a new regular expression literal.
 *
 * @param value             the literal value
 * @param source_reference  reference to source code
 * @return                  newly created string literal
 */
ValaRegexLiteral*
vala_regex_literal_construct (GType object_type,
                              const gchar* value,
                              ValaSourceReference* source_reference)
{
	ValaRegexLiteral* self = NULL;
	g_return_val_if_fail (value != NULL, NULL);
	self = (ValaRegexLiteral*) vala_literal_construct (object_type);
	vala_regex_literal_set_value (self, value);
	vala_code_node_set_source_reference ((ValaCodeNode*) self, source_reference);
	return self;
}


ValaRegexLiteral*
vala_regex_literal_new (const gchar* value,
                        ValaSourceReference* source_reference)
{
	return vala_regex_literal_construct (VALA_TYPE_REGEX_LITERAL, value, source_reference);
}


static void
vala_regex_literal_real_accept (ValaCodeNode* base,
                                ValaCodeVisitor* visitor)
{
	ValaRegexLiteral * self;
	self = (ValaRegexLiteral*) base;
	g_return_if_fail (visitor != NULL);
	vala_code_visitor_visit_regex_literal (visitor, self);
	vala_code_visitor_visit_expression (visitor, (ValaExpression*) self);
}


static gboolean
vala_regex_literal_real_is_pure (ValaExpression* base)
{
	ValaRegexLiteral * self;
	gboolean result = FALSE;
	self = (ValaRegexLiteral*) base;
	result = TRUE;
	return result;
}


static gboolean
vala_regex_literal_real_is_non_null (ValaExpression* base)
{
	ValaRegexLiteral * self;
	gboolean result = FALSE;
	self = (ValaRegexLiteral*) base;
	result = TRUE;
	return result;
}


static gchar*
vala_regex_literal_real_to_string (ValaCodeNode* base)
{
	ValaRegexLiteral * self;
	gchar* result = NULL;
	const gchar* _tmp0_;
	gchar* _tmp1_;
	self = (ValaRegexLiteral*) base;
	_tmp0_ = self->priv->_value;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}


static gboolean
vala_regex_literal_real_check (ValaCodeNode* base,
                               ValaCodeContext* context)
{
	ValaRegexLiteral * self;
	gboolean result = FALSE;
	gboolean _tmp0_;
	gboolean _tmp1_;
	ValaSemanticAnalyzer* _tmp14_;
	ValaSemanticAnalyzer* _tmp15_;
	ValaDataType* _tmp16_;
	ValaDataType* _tmp17_;
	ValaDataType* _tmp18_;
	gboolean _tmp19_;
	gboolean _tmp20_;
	GError * _inner_error_ = NULL;
	self = (ValaRegexLiteral*) base;
	g_return_val_if_fail (context != NULL, FALSE);
	_tmp0_ = vala_code_node_get_checked ((ValaCodeNode*) self);
	_tmp1_ = _tmp0_;
	if (_tmp1_) {
		gboolean _tmp2_;
		gboolean _tmp3_;
		_tmp2_ = vala_code_node_get_error ((ValaCodeNode*) self);
		_tmp3_ = _tmp2_;
		result = !_tmp3_;
		return result;
	}
	vala_code_node_set_checked ((ValaCodeNode*) self, TRUE);
	{
		GRegex* regex = NULL;
		const gchar* _tmp4_;
		GRegex* _tmp5_;
		GRegex* _tmp7_;
		_tmp4_ = self->priv->_value;
		_tmp5_ = g_regex_new (_tmp4_, 0, 0, &_inner_error_);
		regex = _tmp5_;
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			gboolean _tmp6_ = FALSE;
			if (_inner_error_->domain == G_REGEX_ERROR) {
				goto __catch20_g_regex_error;
			}
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return _tmp6_;
		}
		_tmp7_ = regex;
		if (_tmp7_ != NULL) {
		}
		_g_regex_unref0 (regex);
	}
	goto __finally20;
	__catch20_g_regex_error:
	{
		GError* err = NULL;
		ValaSourceReference* _tmp8_;
		ValaSourceReference* _tmp9_;
		const gchar* _tmp10_;
		gchar* _tmp11_;
		gchar* _tmp12_;
		err = _inner_error_;
		_inner_error_ = NULL;
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		_tmp8_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp9_ = _tmp8_;
		_tmp10_ = self->priv->_value;
		_tmp11_ = g_strdup_printf ("Invalid regular expression `%s'.", _tmp10_);
		_tmp12_ = _tmp11_;
		vala_report_error (_tmp9_, _tmp12_);
		_g_free0 (_tmp12_);
		result = FALSE;
		_g_error_free0 (err);
		return result;
	}
	__finally20:
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		gboolean _tmp13_ = FALSE;
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return _tmp13_;
	}
	_tmp14_ = vala_code_context_get_analyzer (context);
	_tmp15_ = _tmp14_;
	_tmp16_ = _tmp15_->regex_type;
	_tmp17_ = vala_data_type_copy (_tmp16_);
	_tmp18_ = _tmp17_;
	vala_expression_set_value_type ((ValaExpression*) self, _tmp18_);
	_vala_code_node_unref0 (_tmp18_);
	_tmp19_ = vala_code_node_get_error ((ValaCodeNode*) self);
	_tmp20_ = _tmp19_;
	result = !_tmp20_;
	return result;
}


static void
vala_regex_literal_real_emit (ValaCodeNode* base,
                              ValaCodeGenerator* codegen)
{
	ValaRegexLiteral * self;
	self = (ValaRegexLiteral*) base;
	g_return_if_fail (codegen != NULL);
	vala_code_visitor_visit_regex_literal ((ValaCodeVisitor*) codegen, self);
	vala_code_visitor_visit_expression ((ValaCodeVisitor*) codegen, (ValaExpression*) self);
}


const gchar*
vala_regex_literal_get_value (ValaRegexLiteral* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_value;
	result = _tmp0_;
	return result;
}


void
vala_regex_literal_set_value (ValaRegexLiteral* self,
                              const gchar* value)
{
	gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_g_free0 (self->priv->_value);
	self->priv->_value = _tmp0_;
}


static void
vala_regex_literal_class_init (ValaRegexLiteralClass * klass)
{
	vala_regex_literal_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_regex_literal_finalize;
	g_type_class_add_private (klass, sizeof (ValaRegexLiteralPrivate));
	((ValaCodeNodeClass *) klass)->accept = (void (*) (ValaCodeNode *, ValaCodeVisitor*)) vala_regex_literal_real_accept;
	((ValaExpressionClass *) klass)->is_pure = (gboolean (*) (ValaExpression *)) vala_regex_literal_real_is_pure;
	((ValaExpressionClass *) klass)->is_non_null = (gboolean (*) (ValaExpression *)) vala_regex_literal_real_is_non_null;
	((ValaCodeNodeClass *) klass)->to_string = (gchar* (*) (ValaCodeNode *)) vala_regex_literal_real_to_string;
	((ValaCodeNodeClass *) klass)->check = (gboolean (*) (ValaCodeNode *, ValaCodeContext*)) vala_regex_literal_real_check;
	((ValaCodeNodeClass *) klass)->emit = (void (*) (ValaCodeNode *, ValaCodeGenerator*)) vala_regex_literal_real_emit;
}


static void
vala_regex_literal_instance_init (ValaRegexLiteral * self)
{
	self->priv = VALA_REGEX_LITERAL_GET_PRIVATE (self);
}


static void
vala_regex_literal_finalize (ValaCodeNode * obj)
{
	ValaRegexLiteral * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_REGEX_LITERAL, ValaRegexLiteral);
	_g_free0 (self->priv->_value);
	VALA_CODE_NODE_CLASS (vala_regex_literal_parent_class)->finalize (obj);
}


/**
 * Represents a regular expression literal in the source code.
 */
GType
vala_regex_literal_get_type (void)
{
	static volatile gsize vala_regex_literal_type_id__volatile = 0;
	if (g_once_init_enter (&vala_regex_literal_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaRegexLiteralClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_regex_literal_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaRegexLiteral), 0, (GInstanceInitFunc) vala_regex_literal_instance_init, NULL };
		GType vala_regex_literal_type_id;
		vala_regex_literal_type_id = g_type_register_static (VALA_TYPE_LITERAL, "ValaRegexLiteral", &g_define_type_info, 0);
		g_once_init_leave (&vala_regex_literal_type_id__volatile, vala_regex_literal_type_id);
	}
	return vala_regex_literal_type_id__volatile;
}



