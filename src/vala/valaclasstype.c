/* valaclasstype.c generated by valac, the Vala compiler
 * generated from valaclasstype.vala, do not modify */

/* valaclasstype.vala
 *
 * Copyright (C) 2007-2008  Jürg Billeter
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
#include <valagee.h>

#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))

struct _ValaClassTypePrivate {
	ValaClass* _class_symbol;
};


static gpointer vala_class_type_parent_class = NULL;

#define VALA_CLASS_TYPE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_CLASS_TYPE, ValaClassTypePrivate))
static ValaDataType* vala_class_type_real_copy (ValaDataType* base);
static void vala_class_type_finalize (ValaCodeNode * obj);


ValaClassType*
vala_class_type_construct (GType object_type,
                           ValaClass* class_symbol)
{
	ValaClassType* self = NULL;
	g_return_val_if_fail (class_symbol != NULL, NULL);
	self = (ValaClassType*) vala_reference_type_construct (object_type);
	vala_class_type_set_class_symbol (self, class_symbol);
	return self;
}


ValaClassType*
vala_class_type_new (ValaClass* class_symbol)
{
	return vala_class_type_construct (VALA_TYPE_CLASS_TYPE, class_symbol);
}


static ValaDataType*
vala_class_type_real_copy (ValaDataType* base)
{
	ValaClassType * self;
	ValaDataType* result = NULL;
	ValaClassType* _result_ = NULL;
	ValaClass* _tmp0_;
	ValaClassType* _tmp1_;
	ValaClassType* _tmp2_;
	ValaSourceReference* _tmp3_;
	ValaSourceReference* _tmp4_;
	ValaClassType* _tmp5_;
	gboolean _tmp6_;
	gboolean _tmp7_;
	ValaClassType* _tmp8_;
	gboolean _tmp9_;
	gboolean _tmp10_;
	ValaClassType* _tmp11_;
	gboolean _tmp12_;
	gboolean _tmp13_;
	ValaClassType* _tmp14_;
	gboolean _tmp15_;
	gboolean _tmp16_;
	self = (ValaClassType*) base;
	_tmp0_ = self->priv->_class_symbol;
	_tmp1_ = vala_class_type_new (_tmp0_);
	_result_ = _tmp1_;
	_tmp2_ = _result_;
	_tmp3_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp4_ = _tmp3_;
	vala_code_node_set_source_reference ((ValaCodeNode*) _tmp2_, _tmp4_);
	_tmp5_ = _result_;
	_tmp6_ = vala_data_type_get_value_owned ((ValaDataType*) self);
	_tmp7_ = _tmp6_;
	vala_data_type_set_value_owned ((ValaDataType*) _tmp5_, _tmp7_);
	_tmp8_ = _result_;
	_tmp9_ = vala_data_type_get_nullable ((ValaDataType*) self);
	_tmp10_ = _tmp9_;
	vala_data_type_set_nullable ((ValaDataType*) _tmp8_, _tmp10_);
	_tmp11_ = _result_;
	_tmp12_ = vala_data_type_get_is_dynamic ((ValaDataType*) self);
	_tmp13_ = _tmp12_;
	vala_data_type_set_is_dynamic ((ValaDataType*) _tmp11_, _tmp13_);
	_tmp14_ = _result_;
	_tmp15_ = vala_data_type_get_floating_reference ((ValaDataType*) self);
	_tmp16_ = _tmp15_;
	vala_data_type_set_floating_reference ((ValaDataType*) _tmp14_, _tmp16_);
	{
		ValaList* _arg_list = NULL;
		ValaList* _tmp17_;
		gint _arg_size = 0;
		ValaList* _tmp18_;
		gint _tmp19_;
		gint _tmp20_;
		gint _arg_index = 0;
		_tmp17_ = vala_data_type_get_type_arguments ((ValaDataType*) self);
		_arg_list = _tmp17_;
		_tmp18_ = _arg_list;
		_tmp19_ = vala_collection_get_size ((ValaCollection*) _tmp18_);
		_tmp20_ = _tmp19_;
		_arg_size = _tmp20_;
		_arg_index = -1;
		while (TRUE) {
			gint _tmp21_;
			gint _tmp22_;
			gint _tmp23_;
			ValaDataType* arg = NULL;
			ValaList* _tmp24_;
			gint _tmp25_;
			gpointer _tmp26_;
			ValaClassType* _tmp27_;
			ValaDataType* _tmp28_;
			ValaDataType* _tmp29_;
			ValaDataType* _tmp30_;
			_tmp21_ = _arg_index;
			_arg_index = _tmp21_ + 1;
			_tmp22_ = _arg_index;
			_tmp23_ = _arg_size;
			if (!(_tmp22_ < _tmp23_)) {
				break;
			}
			_tmp24_ = _arg_list;
			_tmp25_ = _arg_index;
			_tmp26_ = vala_list_get (_tmp24_, _tmp25_);
			arg = (ValaDataType*) _tmp26_;
			_tmp27_ = _result_;
			_tmp28_ = arg;
			_tmp29_ = vala_data_type_copy (_tmp28_);
			_tmp30_ = _tmp29_;
			vala_data_type_add_type_argument ((ValaDataType*) _tmp27_, _tmp30_);
			_vala_code_node_unref0 (_tmp30_);
			_vala_code_node_unref0 (arg);
		}
		_vala_iterable_unref0 (_arg_list);
	}
	result = (ValaDataType*) _result_;
	return result;
}


ValaClass*
vala_class_type_get_class_symbol (ValaClassType* self)
{
	ValaClass* result;
	ValaClass* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_class_symbol;
	result = _tmp0_;
	return result;
}


void
vala_class_type_set_class_symbol (ValaClassType* self,
                                  ValaClass* value)
{
	g_return_if_fail (self != NULL);
	self->priv->_class_symbol = value;
}


static void
vala_class_type_class_init (ValaClassTypeClass * klass)
{
	vala_class_type_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_class_type_finalize;
	g_type_class_add_private (klass, sizeof (ValaClassTypePrivate));
	((ValaDataTypeClass *) klass)->copy = (ValaDataType* (*) (ValaDataType *)) vala_class_type_real_copy;
}


static void
vala_class_type_instance_init (ValaClassType * self)
{
	self->priv = VALA_CLASS_TYPE_GET_PRIVATE (self);
}


static void
vala_class_type_finalize (ValaCodeNode * obj)
{
	ValaClassType * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_CLASS_TYPE, ValaClassType);
	VALA_CODE_NODE_CLASS (vala_class_type_parent_class)->finalize (obj);
}


/**
 * A class type.
 */
GType
vala_class_type_get_type (void)
{
	static volatile gsize vala_class_type_type_id__volatile = 0;
	if (g_once_init_enter (&vala_class_type_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaClassTypeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_class_type_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaClassType), 0, (GInstanceInitFunc) vala_class_type_instance_init, NULL };
		GType vala_class_type_type_id;
		vala_class_type_type_id = g_type_register_static (VALA_TYPE_REFERENCE_TYPE, "ValaClassType", &g_define_type_info, 0);
		g_once_init_leave (&vala_class_type_type_id__volatile, vala_class_type_type_id);
	}
	return vala_class_type_type_id__volatile;
}



