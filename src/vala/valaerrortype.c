/* valaerrortype.c generated by valac, the Vala compiler
 * generated from valaerrortype.vala, do not modify */

/* valaerrortype.vala
 *
 * Copyright (C) 2008-2010  Jürg Billeter
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
 *	Raffaele Sandrini <raffaele@sandrini.ch>
 */


#include <glib.h>
#include <glib-object.h>
#include "vala.h"
#include <stdlib.h>
#include <string.h>

#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _ValaErrorTypePrivate {
	ValaErrorDomain* _error_domain;
	ValaErrorCode* _error_code;
	gboolean _dynamic_error;
};


static gpointer vala_error_type_parent_class = NULL;

#define VALA_ERROR_TYPE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_ERROR_TYPE, ValaErrorTypePrivate))
static gboolean vala_error_type_real_compatible (ValaDataType* base,
                                          ValaDataType* target_type);
static gchar* vala_error_type_real_to_qualified_string (ValaDataType* base,
                                                 ValaScope* scope);
static ValaDataType* vala_error_type_real_copy (ValaDataType* base);
static gboolean vala_error_type_real_equals (ValaDataType* base,
                                      ValaDataType* type2);
static ValaSymbol* vala_error_type_real_get_member (ValaDataType* base,
                                             const gchar* member_name);
static gboolean vala_error_type_real_is_reference_type_or_type_parameter (ValaDataType* base);
static gboolean vala_error_type_real_check (ValaCodeNode* base,
                                     ValaCodeContext* context);
static void vala_error_type_finalize (ValaCodeNode * obj);


ValaErrorType*
vala_error_type_construct (GType object_type,
                           ValaErrorDomain* error_domain,
                           ValaErrorCode* error_code,
                           ValaSourceReference* source_reference)
{
	ValaErrorType* self = NULL;
	self = (ValaErrorType*) vala_reference_type_construct (object_type);
	vala_error_type_set_error_domain (self, error_domain);
	vala_data_type_set_data_type ((ValaDataType*) self, (ValaTypeSymbol*) error_domain);
	vala_error_type_set_error_code (self, error_code);
	vala_code_node_set_source_reference ((ValaCodeNode*) self, source_reference);
	return self;
}


ValaErrorType*
vala_error_type_new (ValaErrorDomain* error_domain,
                     ValaErrorCode* error_code,
                     ValaSourceReference* source_reference)
{
	return vala_error_type_construct (VALA_TYPE_ERROR_TYPE, error_domain, error_code, source_reference);
}


static gpointer
_vala_code_node_ref0 (gpointer self)
{
	return self ? vala_code_node_ref (self) : NULL;
}


static gboolean
vala_error_type_real_compatible (ValaDataType* base,
                                 ValaDataType* target_type)
{
	ValaErrorType * self;
	gboolean result = FALSE;
	ValaErrorType* et = NULL;
	ValaErrorType* _tmp0_;
	ValaErrorType* _tmp1_;
	ValaErrorType* _tmp2_;
	ValaErrorDomain* _tmp3_;
	ValaErrorType* _tmp4_;
	ValaErrorDomain* _tmp5_;
	ValaErrorDomain* _tmp6_;
	ValaErrorType* _tmp7_;
	ValaErrorCode* _tmp8_;
	ValaErrorType* _tmp9_;
	ValaErrorCode* _tmp10_;
	ValaErrorCode* _tmp11_;
	self = (ValaErrorType*) base;
	g_return_val_if_fail (target_type != NULL, FALSE);
	if (G_TYPE_CHECK_INSTANCE_TYPE (target_type, VALA_TYPE_GENERIC_TYPE)) {
		result = TRUE;
		return result;
	}
	_tmp0_ = _vala_code_node_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (target_type, VALA_TYPE_ERROR_TYPE) ? ((ValaErrorType*) target_type) : NULL);
	et = _tmp0_;
	_tmp1_ = et;
	if (_tmp1_ == NULL) {
		result = FALSE;
		_vala_code_node_unref0 (et);
		return result;
	}
	_tmp2_ = et;
	_tmp3_ = _tmp2_->priv->_error_domain;
	if (_tmp3_ == NULL) {
		result = TRUE;
		_vala_code_node_unref0 (et);
		return result;
	}
	_tmp4_ = et;
	_tmp5_ = _tmp4_->priv->_error_domain;
	_tmp6_ = self->priv->_error_domain;
	if (_tmp5_ != _tmp6_) {
		result = FALSE;
		_vala_code_node_unref0 (et);
		return result;
	}
	_tmp7_ = et;
	_tmp8_ = _tmp7_->priv->_error_code;
	if (_tmp8_ == NULL) {
		result = TRUE;
		_vala_code_node_unref0 (et);
		return result;
	}
	_tmp9_ = et;
	_tmp10_ = _tmp9_->priv->_error_code;
	_tmp11_ = self->priv->_error_code;
	result = _tmp10_ == _tmp11_;
	_vala_code_node_unref0 (et);
	return result;
}


static gchar*
vala_error_type_real_to_qualified_string (ValaDataType* base,
                                          ValaScope* scope)
{
	ValaErrorType * self;
	gchar* result = NULL;
	gchar* _result_ = NULL;
	ValaErrorDomain* _tmp0_;
	gboolean _tmp4_;
	gboolean _tmp5_;
	self = (ValaErrorType*) base;
	_tmp0_ = self->priv->_error_domain;
	if (_tmp0_ == NULL) {
		gchar* _tmp1_;
		_tmp1_ = g_strdup ("GLib.Error");
		_g_free0 (_result_);
		_result_ = _tmp1_;
	} else {
		ValaErrorDomain* _tmp2_;
		gchar* _tmp3_;
		_tmp2_ = self->priv->_error_domain;
		_tmp3_ = vala_symbol_get_full_name ((ValaSymbol*) _tmp2_);
		_g_free0 (_result_);
		_result_ = _tmp3_;
	}
	_tmp4_ = vala_data_type_get_nullable ((ValaDataType*) self);
	_tmp5_ = _tmp4_;
	if (_tmp5_) {
		const gchar* _tmp6_;
		gchar* _tmp7_;
		_tmp6_ = _result_;
		_tmp7_ = g_strconcat (_tmp6_, "?", NULL);
		_g_free0 (_result_);
		_result_ = _tmp7_;
	}
	result = _result_;
	return result;
}


static ValaDataType*
vala_error_type_real_copy (ValaDataType* base)
{
	ValaErrorType * self;
	ValaDataType* result = NULL;
	ValaErrorType* _result_ = NULL;
	ValaErrorDomain* _tmp0_;
	ValaErrorCode* _tmp1_;
	ValaSourceReference* _tmp2_;
	ValaSourceReference* _tmp3_;
	ValaErrorType* _tmp4_;
	gboolean _tmp5_;
	gboolean _tmp6_;
	gboolean _tmp7_;
	gboolean _tmp8_;
	gboolean _tmp9_;
	self = (ValaErrorType*) base;
	_tmp0_ = self->priv->_error_domain;
	_tmp1_ = self->priv->_error_code;
	_tmp2_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp3_ = _tmp2_;
	_tmp4_ = vala_error_type_new (_tmp0_, _tmp1_, _tmp3_);
	_result_ = _tmp4_;
	_tmp5_ = vala_data_type_get_value_owned ((ValaDataType*) self);
	_tmp6_ = _tmp5_;
	vala_data_type_set_value_owned ((ValaDataType*) _result_, _tmp6_);
	_tmp7_ = vala_data_type_get_nullable ((ValaDataType*) self);
	_tmp8_ = _tmp7_;
	vala_data_type_set_nullable ((ValaDataType*) _result_, _tmp8_);
	_tmp9_ = self->priv->_dynamic_error;
	vala_error_type_set_dynamic_error (_result_, _tmp9_);
	result = (ValaDataType*) _result_;
	return result;
}


static gboolean
vala_error_type_real_equals (ValaDataType* base,
                             ValaDataType* type2)
{
	ValaErrorType * self;
	gboolean result = FALSE;
	ValaErrorType* et = NULL;
	ValaErrorType* _tmp0_;
	ValaErrorType* _tmp1_;
	ValaErrorDomain* _tmp2_;
	ValaErrorType* _tmp3_;
	ValaErrorDomain* _tmp4_;
	self = (ValaErrorType*) base;
	g_return_val_if_fail (type2 != NULL, FALSE);
	_tmp0_ = _vala_code_node_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (type2, VALA_TYPE_ERROR_TYPE) ? ((ValaErrorType*) type2) : NULL);
	et = _tmp0_;
	_tmp1_ = et;
	if (_tmp1_ == NULL) {
		result = FALSE;
		_vala_code_node_unref0 (et);
		return result;
	}
	_tmp2_ = self->priv->_error_domain;
	_tmp3_ = et;
	_tmp4_ = _tmp3_->priv->_error_domain;
	result = _tmp2_ == _tmp4_;
	_vala_code_node_unref0 (et);
	return result;
}


static ValaSymbol*
vala_error_type_real_get_member (ValaDataType* base,
                                 const gchar* member_name)
{
	ValaErrorType * self;
	ValaSymbol* result = NULL;
	ValaNamespace* root_symbol = NULL;
	ValaSourceReference* _tmp0_;
	ValaSourceReference* _tmp1_;
	ValaSourceFile* _tmp2_;
	ValaSourceFile* _tmp3_;
	ValaCodeContext* _tmp4_;
	ValaCodeContext* _tmp5_;
	ValaNamespace* _tmp6_;
	ValaNamespace* _tmp7_;
	ValaNamespace* _tmp8_;
	ValaSymbol* gerror_symbol = NULL;
	ValaScope* _tmp9_;
	ValaScope* _tmp10_;
	ValaSymbol* _tmp11_;
	ValaSymbol* _tmp12_;
	ValaScope* _tmp13_;
	ValaScope* _tmp14_;
	ValaSymbol* _tmp15_;
	ValaSymbol* _tmp16_;
	ValaScope* _tmp17_;
	ValaScope* _tmp18_;
	ValaSymbol* _tmp19_;
	self = (ValaErrorType*) base;
	g_return_val_if_fail (member_name != NULL, NULL);
	_tmp0_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = vala_source_reference_get_file (_tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = vala_source_file_get_context (_tmp3_);
	_tmp5_ = _tmp4_;
	_tmp6_ = vala_code_context_get_root (_tmp5_);
	_tmp7_ = _tmp6_;
	_tmp8_ = _vala_code_node_ref0 (_tmp7_);
	root_symbol = _tmp8_;
	_tmp9_ = vala_symbol_get_scope ((ValaSymbol*) root_symbol);
	_tmp10_ = _tmp9_;
	_tmp11_ = vala_scope_lookup (_tmp10_, "GLib");
	_tmp12_ = _tmp11_;
	_tmp13_ = vala_symbol_get_scope (_tmp12_);
	_tmp14_ = _tmp13_;
	_tmp15_ = vala_scope_lookup (_tmp14_, "Error");
	_tmp16_ = _tmp15_;
	_vala_code_node_unref0 (_tmp12_);
	gerror_symbol = _tmp16_;
	_tmp17_ = vala_symbol_get_scope (gerror_symbol);
	_tmp18_ = _tmp17_;
	_tmp19_ = vala_scope_lookup (_tmp18_, member_name);
	result = _tmp19_;
	_vala_code_node_unref0 (gerror_symbol);
	_vala_code_node_unref0 (root_symbol);
	return result;
}


static gboolean
vala_error_type_real_is_reference_type_or_type_parameter (ValaDataType* base)
{
	ValaErrorType * self;
	gboolean result = FALSE;
	self = (ValaErrorType*) base;
	result = TRUE;
	return result;
}


static gboolean
vala_error_type_real_check (ValaCodeNode* base,
                            ValaCodeContext* context)
{
	ValaErrorType * self;
	gboolean result = FALSE;
	ValaErrorDomain* _tmp0_;
	self = (ValaErrorType*) base;
	g_return_val_if_fail (context != NULL, FALSE);
	_tmp0_ = self->priv->_error_domain;
	if (_tmp0_ != NULL) {
		ValaErrorDomain* _tmp1_;
		_tmp1_ = self->priv->_error_domain;
		result = vala_code_node_check ((ValaCodeNode*) _tmp1_, context);
		return result;
	}
	result = TRUE;
	return result;
}


ValaErrorDomain*
vala_error_type_get_error_domain (ValaErrorType* self)
{
	ValaErrorDomain* result;
	ValaErrorDomain* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_error_domain;
	result = _tmp0_;
	return result;
}


void
vala_error_type_set_error_domain (ValaErrorType* self,
                                  ValaErrorDomain* value)
{
	g_return_if_fail (self != NULL);
	self->priv->_error_domain = value;
}


ValaErrorCode*
vala_error_type_get_error_code (ValaErrorType* self)
{
	ValaErrorCode* result;
	ValaErrorCode* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_error_code;
	result = _tmp0_;
	return result;
}


void
vala_error_type_set_error_code (ValaErrorType* self,
                                ValaErrorCode* value)
{
	g_return_if_fail (self != NULL);
	self->priv->_error_code = value;
}


gboolean
vala_error_type_get_dynamic_error (ValaErrorType* self)
{
	gboolean result;
	gboolean _tmp0_;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->priv->_dynamic_error;
	result = _tmp0_;
	return result;
}


void
vala_error_type_set_dynamic_error (ValaErrorType* self,
                                   gboolean value)
{
	g_return_if_fail (self != NULL);
	self->priv->_dynamic_error = value;
}


static void
vala_error_type_class_init (ValaErrorTypeClass * klass)
{
	vala_error_type_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_error_type_finalize;
	g_type_class_add_private (klass, sizeof (ValaErrorTypePrivate));
	((ValaDataTypeClass *) klass)->compatible = (gboolean (*) (ValaDataType *, ValaDataType*)) vala_error_type_real_compatible;
	((ValaDataTypeClass *) klass)->to_qualified_string = (gchar* (*) (ValaDataType *, ValaScope*)) vala_error_type_real_to_qualified_string;
	((ValaDataTypeClass *) klass)->copy = (ValaDataType* (*) (ValaDataType *)) vala_error_type_real_copy;
	((ValaDataTypeClass *) klass)->equals = (gboolean (*) (ValaDataType *, ValaDataType*)) vala_error_type_real_equals;
	((ValaDataTypeClass *) klass)->get_member = (ValaSymbol* (*) (ValaDataType *, const gchar*)) vala_error_type_real_get_member;
	((ValaDataTypeClass *) klass)->is_reference_type_or_type_parameter = (gboolean (*) (ValaDataType *)) vala_error_type_real_is_reference_type_or_type_parameter;
	((ValaCodeNodeClass *) klass)->check = (gboolean (*) (ValaCodeNode *, ValaCodeContext*)) vala_error_type_real_check;
}


static void
vala_error_type_instance_init (ValaErrorType * self)
{
	self->priv = VALA_ERROR_TYPE_GET_PRIVATE (self);
}


static void
vala_error_type_finalize (ValaCodeNode * obj)
{
	ValaErrorType * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_ERROR_TYPE, ValaErrorType);
	VALA_CODE_NODE_CLASS (vala_error_type_parent_class)->finalize (obj);
}


/**
 * A class type.
 */
GType
vala_error_type_get_type (void)
{
	static volatile gsize vala_error_type_type_id__volatile = 0;
	if (g_once_init_enter (&vala_error_type_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaErrorTypeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_error_type_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaErrorType), 0, (GInstanceInitFunc) vala_error_type_instance_init, NULL };
		GType vala_error_type_type_id;
		vala_error_type_type_id = g_type_register_static (VALA_TYPE_REFERENCE_TYPE, "ValaErrorType", &g_define_type_info, 0);
		g_once_init_leave (&vala_error_type_type_id__volatile, vala_error_type_type_id);
	}
	return vala_error_type_type_id__volatile;
}



