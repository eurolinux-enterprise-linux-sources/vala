/* valagenerictype.c generated by valac, the Vala compiler
 * generated from valagenerictype.vala, do not modify */

/* valagenerictype.vala
 *
 * Copyright (C) 2008-2009  Jürg Billeter
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
#include "vala.h"
#include <stdlib.h>
#include <string.h>

#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))

struct _ValaGenericTypePrivate {
	ValaTypeParameter* _type_parameter;
};


static gpointer vala_generic_type_parent_class = NULL;

#define VALA_GENERIC_TYPE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_GENERIC_TYPE, ValaGenericTypePrivate))
static ValaDataType* vala_generic_type_real_copy (ValaDataType* base);
static ValaDataType* vala_generic_type_real_infer_type_argument (ValaDataType* base,
                                                          ValaTypeParameter* type_param,
                                                          ValaDataType* value_type);
static gchar* vala_generic_type_real_to_qualified_string (ValaDataType* base,
                                                   ValaScope* scope);
static ValaSymbol* vala_generic_type_real_get_member (ValaDataType* base,
                                               const gchar* member_name);
static void vala_generic_type_finalize (ValaCodeNode * obj);


ValaGenericType*
vala_generic_type_construct (GType object_type,
                             ValaTypeParameter* type_parameter)
{
	ValaGenericType* self = NULL;
	g_return_val_if_fail (type_parameter != NULL, NULL);
	self = (ValaGenericType*) vala_data_type_construct (object_type);
	vala_generic_type_set_type_parameter (self, type_parameter);
	vala_data_type_set_nullable ((ValaDataType*) self, TRUE);
	return self;
}


ValaGenericType*
vala_generic_type_new (ValaTypeParameter* type_parameter)
{
	return vala_generic_type_construct (VALA_TYPE_GENERIC_TYPE, type_parameter);
}


static ValaDataType*
vala_generic_type_real_copy (ValaDataType* base)
{
	ValaGenericType * self;
	ValaDataType* result = NULL;
	ValaGenericType* _result_ = NULL;
	ValaTypeParameter* _tmp0_;
	ValaGenericType* _tmp1_;
	ValaSourceReference* _tmp2_;
	ValaSourceReference* _tmp3_;
	gboolean _tmp4_;
	gboolean _tmp5_;
	gboolean _tmp6_;
	gboolean _tmp7_;
	gboolean _tmp8_;
	gboolean _tmp9_;
	self = (ValaGenericType*) base;
	_tmp0_ = self->priv->_type_parameter;
	_tmp1_ = vala_generic_type_new (_tmp0_);
	_result_ = _tmp1_;
	_tmp2_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp3_ = _tmp2_;
	vala_code_node_set_source_reference ((ValaCodeNode*) _result_, _tmp3_);
	_tmp4_ = vala_data_type_get_value_owned ((ValaDataType*) self);
	_tmp5_ = _tmp4_;
	vala_data_type_set_value_owned ((ValaDataType*) _result_, _tmp5_);
	_tmp6_ = vala_data_type_get_nullable ((ValaDataType*) self);
	_tmp7_ = _tmp6_;
	vala_data_type_set_nullable ((ValaDataType*) _result_, _tmp7_);
	_tmp8_ = vala_data_type_get_floating_reference ((ValaDataType*) self);
	_tmp9_ = _tmp8_;
	vala_data_type_set_floating_reference ((ValaDataType*) _result_, _tmp9_);
	result = (ValaDataType*) _result_;
	return result;
}


static ValaDataType*
vala_generic_type_real_infer_type_argument (ValaDataType* base,
                                            ValaTypeParameter* type_param,
                                            ValaDataType* value_type)
{
	ValaGenericType * self;
	ValaDataType* result = NULL;
	ValaTypeParameter* _tmp0_;
	self = (ValaGenericType*) base;
	g_return_val_if_fail (type_param != NULL, NULL);
	g_return_val_if_fail (value_type != NULL, NULL);
	_tmp0_ = self->priv->_type_parameter;
	if (_tmp0_ == type_param) {
		ValaDataType* ret = NULL;
		ValaDataType* _tmp1_;
		ValaDataType* _tmp2_;
		_tmp1_ = vala_data_type_copy (value_type);
		ret = _tmp1_;
		_tmp2_ = ret;
		vala_data_type_set_value_owned (_tmp2_, TRUE);
		result = ret;
		return result;
	}
	result = NULL;
	return result;
}


static gchar*
vala_generic_type_real_to_qualified_string (ValaDataType* base,
                                            ValaScope* scope)
{
	ValaGenericType * self;
	gchar* result = NULL;
	ValaTypeParameter* _tmp0_;
	const gchar* _tmp1_;
	const gchar* _tmp2_;
	gchar* _tmp3_;
	self = (ValaGenericType*) base;
	_tmp0_ = self->priv->_type_parameter;
	_tmp1_ = vala_symbol_get_name ((ValaSymbol*) _tmp0_);
	_tmp2_ = _tmp1_;
	_tmp3_ = g_strdup (_tmp2_);
	result = _tmp3_;
	return result;
}


static ValaSymbol*
vala_generic_type_real_get_member (ValaDataType* base,
                                   const gchar* member_name)
{
	ValaGenericType * self;
	ValaSymbol* result = NULL;
	self = (ValaGenericType*) base;
	g_return_val_if_fail (member_name != NULL, NULL);
	result = NULL;
	return result;
}


ValaTypeParameter*
vala_generic_type_get_type_parameter (ValaGenericType* self)
{
	ValaTypeParameter* result;
	ValaTypeParameter* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_type_parameter;
	result = _tmp0_;
	return result;
}


static gpointer
_vala_code_node_ref0 (gpointer self)
{
	return self ? vala_code_node_ref (self) : NULL;
}


void
vala_generic_type_set_type_parameter (ValaGenericType* self,
                                      ValaTypeParameter* value)
{
	ValaTypeParameter* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_code_node_ref0 (value);
	_vala_code_node_unref0 (self->priv->_type_parameter);
	self->priv->_type_parameter = _tmp0_;
}


static void
vala_generic_type_class_init (ValaGenericTypeClass * klass)
{
	vala_generic_type_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_generic_type_finalize;
	g_type_class_add_private (klass, sizeof (ValaGenericTypePrivate));
	((ValaDataTypeClass *) klass)->copy = (ValaDataType* (*) (ValaDataType *)) vala_generic_type_real_copy;
	((ValaDataTypeClass *) klass)->infer_type_argument = (ValaDataType* (*) (ValaDataType *, ValaTypeParameter*, ValaDataType*)) vala_generic_type_real_infer_type_argument;
	((ValaDataTypeClass *) klass)->to_qualified_string = (gchar* (*) (ValaDataType *, ValaScope*)) vala_generic_type_real_to_qualified_string;
	((ValaDataTypeClass *) klass)->get_member = (ValaSymbol* (*) (ValaDataType *, const gchar*)) vala_generic_type_real_get_member;
}


static void
vala_generic_type_instance_init (ValaGenericType * self)
{
	self->priv = VALA_GENERIC_TYPE_GET_PRIVATE (self);
}


static void
vala_generic_type_finalize (ValaCodeNode * obj)
{
	ValaGenericType * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_GENERIC_TYPE, ValaGenericType);
	_vala_code_node_unref0 (self->priv->_type_parameter);
	VALA_CODE_NODE_CLASS (vala_generic_type_parent_class)->finalize (obj);
}


/**
 * The type of a generic type parameter.
 */
GType
vala_generic_type_get_type (void)
{
	static volatile gsize vala_generic_type_type_id__volatile = 0;
	if (g_once_init_enter (&vala_generic_type_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaGenericTypeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_generic_type_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaGenericType), 0, (GInstanceInitFunc) vala_generic_type_instance_init, NULL };
		GType vala_generic_type_type_id;
		vala_generic_type_type_id = g_type_register_static (VALA_TYPE_DATA_TYPE, "ValaGenericType", &g_define_type_info, 0);
		g_once_init_leave (&vala_generic_type_type_id__volatile, vala_generic_type_type_id);
	}
	return vala_generic_type_type_id__volatile;
}



