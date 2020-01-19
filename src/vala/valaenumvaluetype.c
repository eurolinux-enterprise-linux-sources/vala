/* valaenumvaluetype.c generated by valac, the Vala compiler
 * generated from valaenumvaluetype.vala, do not modify */

/* valaenumvaluetype.vala
 *
 * Copyright (C) 2009-2011  Jürg Billeter
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
#define _vala_code_context_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_context_unref (var), NULL)))

struct _ValaEnumValueTypePrivate {
	ValaMethod* to_string_method;
};


static gpointer vala_enum_value_type_parent_class = NULL;

#define VALA_ENUM_VALUE_TYPE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_ENUM_VALUE_TYPE, ValaEnumValueTypePrivate))
static ValaDataType* vala_enum_value_type_real_copy (ValaDataType* base);
static ValaSymbol* vala_enum_value_type_real_get_member (ValaDataType* base,
                                                  const gchar* member_name);
static void vala_enum_value_type_finalize (ValaCodeNode * obj);


ValaEnumValueType*
vala_enum_value_type_construct (GType object_type,
                                ValaEnum* type_symbol)
{
	ValaEnumValueType* self = NULL;
	g_return_val_if_fail (type_symbol != NULL, NULL);
	self = (ValaEnumValueType*) vala_value_type_construct (object_type, (ValaTypeSymbol*) type_symbol);
	return self;
}


ValaEnumValueType*
vala_enum_value_type_new (ValaEnum* type_symbol)
{
	return vala_enum_value_type_construct (VALA_TYPE_ENUM_VALUE_TYPE, type_symbol);
}


static ValaDataType*
vala_enum_value_type_real_copy (ValaDataType* base)
{
	ValaEnumValueType * self;
	ValaDataType* result = NULL;
	ValaEnumValueType* _result_ = NULL;
	ValaTypeSymbol* _tmp0_;
	ValaTypeSymbol* _tmp1_;
	ValaEnumValueType* _tmp2_;
	ValaSourceReference* _tmp3_;
	ValaSourceReference* _tmp4_;
	gboolean _tmp5_;
	gboolean _tmp6_;
	gboolean _tmp7_;
	gboolean _tmp8_;
	self = (ValaEnumValueType*) base;
	_tmp0_ = vala_value_type_get_type_symbol ((ValaValueType*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = vala_enum_value_type_new (G_TYPE_CHECK_INSTANCE_CAST (_tmp1_, VALA_TYPE_ENUM, ValaEnum));
	_result_ = _tmp2_;
	_tmp3_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp4_ = _tmp3_;
	vala_code_node_set_source_reference ((ValaCodeNode*) _result_, _tmp4_);
	_tmp5_ = vala_data_type_get_value_owned ((ValaDataType*) self);
	_tmp6_ = _tmp5_;
	vala_data_type_set_value_owned ((ValaDataType*) _result_, _tmp6_);
	_tmp7_ = vala_data_type_get_nullable ((ValaDataType*) self);
	_tmp8_ = _tmp7_;
	vala_data_type_set_nullable ((ValaDataType*) _result_, _tmp8_);
	result = (ValaDataType*) _result_;
	return result;
}


static gpointer
_vala_code_node_ref0 (gpointer self)
{
	return self ? vala_code_node_ref (self) : NULL;
}


ValaMethod*
vala_enum_value_type_get_to_string_method (ValaEnumValueType* self)
{
	ValaMethod* result = NULL;
	ValaMethod* _tmp0_;
	ValaMethod* _tmp35_;
	ValaMethod* _tmp36_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->to_string_method;
	if (_tmp0_ == NULL) {
		ValaObjectType* string_type = NULL;
		ValaCodeContext* _tmp1_;
		ValaCodeContext* _tmp2_;
		ValaNamespace* _tmp3_;
		ValaNamespace* _tmp4_;
		ValaScope* _tmp5_;
		ValaScope* _tmp6_;
		ValaSymbol* _tmp7_;
		ValaClass* _tmp8_;
		ValaObjectType* _tmp9_;
		ValaObjectType* _tmp10_;
		ValaObjectType* _tmp11_;
		ValaObjectType* _tmp12_;
		ValaMethod* _tmp13_;
		ValaMethod* _tmp14_;
		ValaMethod* _tmp15_;
		ValaMethod* _tmp16_;
		ValaTypeSymbol* _tmp17_;
		ValaTypeSymbol* _tmp18_;
		ValaScope* _tmp19_;
		ValaScope* _tmp20_;
		ValaMethod* _tmp21_;
		ValaParameter* _tmp22_;
		ValaParameter* _tmp23_;
		ValaMethod* _tmp24_;
		ValaScope* _tmp25_;
		ValaScope* _tmp26_;
		ValaMethod* _tmp27_;
		ValaParameter* _tmp28_;
		ValaParameter* _tmp29_;
		const gchar* _tmp30_;
		const gchar* _tmp31_;
		ValaMethod* _tmp32_;
		ValaParameter* _tmp33_;
		ValaParameter* _tmp34_;
		_tmp1_ = vala_code_context_get ();
		_tmp2_ = _tmp1_;
		_tmp3_ = vala_code_context_get_root (_tmp2_);
		_tmp4_ = _tmp3_;
		_tmp5_ = vala_symbol_get_scope ((ValaSymbol*) _tmp4_);
		_tmp6_ = _tmp5_;
		_tmp7_ = vala_scope_lookup (_tmp6_, "string");
		_tmp8_ = G_TYPE_CHECK_INSTANCE_CAST (_tmp7_, VALA_TYPE_CLASS, ValaClass);
		_tmp9_ = vala_object_type_new ((ValaObjectTypeSymbol*) _tmp8_);
		_tmp10_ = _tmp9_;
		_vala_code_node_unref0 (_tmp8_);
		_vala_code_context_unref0 (_tmp2_);
		string_type = _tmp10_;
		_tmp11_ = string_type;
		vala_data_type_set_value_owned ((ValaDataType*) _tmp11_, FALSE);
		_tmp12_ = string_type;
		_tmp13_ = vala_method_new ("to_string", (ValaDataType*) _tmp12_, NULL, NULL);
		_vala_code_node_unref0 (self->priv->to_string_method);
		self->priv->to_string_method = _tmp13_;
		_tmp14_ = self->priv->to_string_method;
		vala_symbol_set_access ((ValaSymbol*) _tmp14_, VALA_SYMBOL_ACCESSIBILITY_PUBLIC);
		_tmp15_ = self->priv->to_string_method;
		vala_symbol_set_external ((ValaSymbol*) _tmp15_, TRUE);
		_tmp16_ = self->priv->to_string_method;
		_tmp17_ = vala_value_type_get_type_symbol ((ValaValueType*) self);
		_tmp18_ = _tmp17_;
		_tmp19_ = vala_symbol_get_scope ((ValaSymbol*) _tmp18_);
		_tmp20_ = _tmp19_;
		vala_symbol_set_owner ((ValaSymbol*) _tmp16_, _tmp20_);
		_tmp21_ = self->priv->to_string_method;
		_tmp22_ = vala_parameter_new ("this", (ValaDataType*) self, NULL);
		_tmp23_ = _tmp22_;
		vala_method_set_this_parameter (_tmp21_, _tmp23_);
		_vala_code_node_unref0 (_tmp23_);
		_tmp24_ = self->priv->to_string_method;
		_tmp25_ = vala_symbol_get_scope ((ValaSymbol*) _tmp24_);
		_tmp26_ = _tmp25_;
		_tmp27_ = self->priv->to_string_method;
		_tmp28_ = vala_method_get_this_parameter (_tmp27_);
		_tmp29_ = _tmp28_;
		_tmp30_ = vala_symbol_get_name ((ValaSymbol*) _tmp29_);
		_tmp31_ = _tmp30_;
		_tmp32_ = self->priv->to_string_method;
		_tmp33_ = vala_method_get_this_parameter (_tmp32_);
		_tmp34_ = _tmp33_;
		vala_scope_add (_tmp26_, _tmp31_, (ValaSymbol*) _tmp34_);
		_vala_code_node_unref0 (string_type);
	}
	_tmp35_ = self->priv->to_string_method;
	_tmp36_ = _vala_code_node_ref0 (_tmp35_);
	result = _tmp36_;
	return result;
}


static ValaSymbol*
vala_enum_value_type_real_get_member (ValaDataType* base,
                                      const gchar* member_name)
{
	ValaEnumValueType * self;
	ValaSymbol* result = NULL;
	ValaSymbol* _result_ = NULL;
	ValaSymbol* _tmp0_;
	gboolean _tmp1_ = FALSE;
	ValaSymbol* _tmp2_;
	self = (ValaEnumValueType*) base;
	g_return_val_if_fail (member_name != NULL, NULL);
	_tmp0_ = VALA_DATA_TYPE_CLASS (vala_enum_value_type_parent_class)->get_member ((ValaDataType*) G_TYPE_CHECK_INSTANCE_CAST (self, VALA_TYPE_VALUE_TYPE, ValaValueType), member_name);
	_result_ = _tmp0_;
	_tmp2_ = _result_;
	if (_tmp2_ == NULL) {
		_tmp1_ = g_strcmp0 (member_name, "to_string") == 0;
	} else {
		_tmp1_ = FALSE;
	}
	if (_tmp1_) {
		ValaMethod* _tmp3_;
		_tmp3_ = vala_enum_value_type_get_to_string_method (self);
		result = (ValaSymbol*) _tmp3_;
		_vala_code_node_unref0 (_result_);
		return result;
	}
	result = _result_;
	return result;
}


static void
vala_enum_value_type_class_init (ValaEnumValueTypeClass * klass)
{
	vala_enum_value_type_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_enum_value_type_finalize;
	g_type_class_add_private (klass, sizeof (ValaEnumValueTypePrivate));
	((ValaDataTypeClass *) klass)->copy = (ValaDataType* (*) (ValaDataType *)) vala_enum_value_type_real_copy;
	((ValaDataTypeClass *) klass)->get_member = (ValaSymbol* (*) (ValaDataType *, const gchar*)) vala_enum_value_type_real_get_member;
}


static void
vala_enum_value_type_instance_init (ValaEnumValueType * self)
{
	self->priv = VALA_ENUM_VALUE_TYPE_GET_PRIVATE (self);
}


static void
vala_enum_value_type_finalize (ValaCodeNode * obj)
{
	ValaEnumValueType * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_ENUM_VALUE_TYPE, ValaEnumValueType);
	_vala_code_node_unref0 (self->priv->to_string_method);
	VALA_CODE_NODE_CLASS (vala_enum_value_type_parent_class)->finalize (obj);
}


/**
 * An enum value type.
 */
GType
vala_enum_value_type_get_type (void)
{
	static volatile gsize vala_enum_value_type_type_id__volatile = 0;
	if (g_once_init_enter (&vala_enum_value_type_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaEnumValueTypeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_enum_value_type_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaEnumValueType), 0, (GInstanceInitFunc) vala_enum_value_type_instance_init, NULL };
		GType vala_enum_value_type_type_id;
		vala_enum_value_type_type_id = g_type_register_static (VALA_TYPE_VALUE_TYPE, "ValaEnumValueType", &g_define_type_info, 0);
		g_once_init_leave (&vala_enum_value_type_type_id__volatile, vala_enum_value_type_type_id);
	}
	return vala_enum_value_type_type_id__volatile;
}



