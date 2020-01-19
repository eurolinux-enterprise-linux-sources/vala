/* attribute.c generated by valac, the Vala compiler
 * generated from attribute.vala, do not modify */

/* attribute.vala
 *
 * Copyright (C) 2011 Florian Brosch
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 * Author:
 * 	Florian Brosch <flo.brosch@gmail.com>
 */


#include <glib.h>
#include <glib-object.h>
#include "valadoc.h"
#include <valagee.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <math.h>

enum  {
	VALADOC_API_ATTRIBUTE_0_PROPERTY,
	VALADOC_API_ATTRIBUTE_NAME_PROPERTY,
	VALADOC_API_ATTRIBUTE_NUM_PROPERTIES
};
static GParamSpec* valadoc_api_attribute_properties[VALADOC_API_ATTRIBUTE_NUM_PROPERTIES];
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _valadoc_api_signature_builder_unref0(var) ((var == NULL) ? NULL : (var = (valadoc_api_signature_builder_unref (var), NULL)))

struct _ValadocApiAttributePrivate {
	ValaArrayList* args;
	ValadocApiSourceFile* file;
	gchar* _name;
};


static gpointer valadoc_api_attribute_parent_class = NULL;

#define VALADOC_API_ATTRIBUTE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALADOC_API_TYPE_ATTRIBUTE, ValadocApiAttributePrivate))
static void valadoc_api_attribute_set_name (ValadocApiAttribute* self,
                                     const gchar* value);
static ValadocContentInline* valadoc_api_attribute_real_build_signature (ValadocApiItem* base);
static void valadoc_api_attribute_finalize (GObject * obj);
static void _vala_valadoc_api_attribute_get_property (GObject * object,
                                               guint property_id,
                                               GValue * value,
                                               GParamSpec * pspec);
static void _vala_valadoc_api_attribute_set_property (GObject * object,
                                               guint property_id,
                                               const GValue * value,
                                               GParamSpec * pspec);


static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}


ValadocApiAttribute*
valadoc_api_attribute_construct (GType object_type,
                                 ValadocApiNode* parent,
                                 ValadocApiSourceFile* file,
                                 const gchar* name,
                                 void* data)
{
	ValadocApiAttribute * self = NULL;
	ValadocApiSourceFile* _tmp0_;
	g_return_val_if_fail (parent != NULL, NULL);
	g_return_val_if_fail (file != NULL, NULL);
	g_return_val_if_fail (name != NULL, NULL);
	self = (ValadocApiAttribute*) valadoc_api_item_construct (object_type, data);
	valadoc_api_item_set_parent ((ValadocApiItem*) self, (ValadocApiItem*) parent);
	valadoc_api_attribute_set_name (self, name);
	_tmp0_ = _g_object_ref0 (file);
	_g_object_unref0 (self->priv->file);
	self->priv->file = _tmp0_;
	return self;
}


ValadocApiAttribute*
valadoc_api_attribute_new (ValadocApiNode* parent,
                           ValadocApiSourceFile* file,
                           const gchar* name,
                           void* data)
{
	return valadoc_api_attribute_construct (VALADOC_API_TYPE_ATTRIBUTE, parent, file, name, data);
}


static gpointer
_vala_iterable_ref0 (gpointer self)
{
	return self ? vala_iterable_ref (self) : NULL;
}


ValadocApiAttributeArgument*
valadoc_api_attribute_get_argument (ValadocApiAttribute* self,
                                    const gchar* name)
{
	ValadocApiAttributeArgument* result = NULL;
	ValaArrayList* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (name != NULL, NULL);
	_tmp0_ = self->priv->args;
	if (_tmp0_ != NULL) {
		{
			ValaArrayList* _arg_list = NULL;
			ValaArrayList* _tmp1_;
			ValaArrayList* _tmp2_;
			gint _arg_size = 0;
			ValaArrayList* _tmp3_;
			gint _tmp4_;
			gint _tmp5_;
			gint _arg_index = 0;
			_tmp1_ = self->priv->args;
			_tmp2_ = _vala_iterable_ref0 (_tmp1_);
			_arg_list = _tmp2_;
			_tmp3_ = _arg_list;
			_tmp4_ = vala_collection_get_size ((ValaCollection*) _tmp3_);
			_tmp5_ = _tmp4_;
			_arg_size = _tmp5_;
			_arg_index = -1;
			while (TRUE) {
				gint _tmp6_;
				gint _tmp7_;
				gint _tmp8_;
				ValadocApiAttributeArgument* arg = NULL;
				ValaArrayList* _tmp9_;
				gint _tmp10_;
				gpointer _tmp11_;
				ValadocApiAttributeArgument* _tmp12_;
				const gchar* _tmp13_;
				const gchar* _tmp14_;
				_tmp6_ = _arg_index;
				_arg_index = _tmp6_ + 1;
				_tmp7_ = _arg_index;
				_tmp8_ = _arg_size;
				if (!(_tmp7_ < _tmp8_)) {
					break;
				}
				_tmp9_ = _arg_list;
				_tmp10_ = _arg_index;
				_tmp11_ = vala_list_get ((ValaList*) _tmp9_, _tmp10_);
				arg = (ValadocApiAttributeArgument*) _tmp11_;
				_tmp12_ = arg;
				_tmp13_ = valadoc_api_attribute_argument_get_name (_tmp12_);
				_tmp14_ = _tmp13_;
				if (g_strcmp0 (_tmp14_, name) == 0) {
					result = arg;
					_vala_iterable_unref0 (_arg_list);
					return result;
				}
				_g_object_unref0 (arg);
			}
			_vala_iterable_unref0 (_arg_list);
		}
	}
	result = NULL;
	return result;
}


ValadocApiAttributeArgument*
valadoc_api_attribute_add_boolean (ValadocApiAttribute* self,
                                   const gchar* name,
                                   gboolean value,
                                   void* data)
{
	ValadocApiAttributeArgument* result = NULL;
	ValadocApiAttributeArgument* arg = NULL;
	ValadocApiSourceFile* _tmp0_;
	ValadocApiAttributeArgument* _tmp1_;
	ValaArrayList* _tmp2_;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (name != NULL, NULL);
	_tmp0_ = self->priv->file;
	_tmp1_ = valadoc_api_attribute_argument_new_boolean (self, _tmp0_, name, value, data);
	arg = _tmp1_;
	_tmp2_ = self->priv->args;
	vala_collection_add ((ValaCollection*) _tmp2_, arg);
	result = arg;
	return result;
}


ValadocApiAttributeArgument*
valadoc_api_attribute_add_integer (ValadocApiAttribute* self,
                                   const gchar* name,
                                   gint value,
                                   void* data)
{
	ValadocApiAttributeArgument* result = NULL;
	ValadocApiAttributeArgument* arg = NULL;
	ValadocApiSourceFile* _tmp0_;
	ValadocApiAttributeArgument* _tmp1_;
	ValaArrayList* _tmp2_;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (name != NULL, NULL);
	_tmp0_ = self->priv->file;
	_tmp1_ = valadoc_api_attribute_argument_new_integer (self, _tmp0_, name, value, data);
	arg = _tmp1_;
	_tmp2_ = self->priv->args;
	vala_collection_add ((ValaCollection*) _tmp2_, arg);
	result = arg;
	return result;
}


ValadocApiAttributeArgument*
valadoc_api_attribute_add_double (ValadocApiAttribute* self,
                                  const gchar* name,
                                  gdouble value,
                                  void* data)
{
	ValadocApiAttributeArgument* result = NULL;
	ValadocApiAttributeArgument* arg = NULL;
	ValadocApiSourceFile* _tmp0_;
	ValadocApiAttributeArgument* _tmp1_;
	ValaArrayList* _tmp2_;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (name != NULL, NULL);
	_tmp0_ = self->priv->file;
	_tmp1_ = valadoc_api_attribute_argument_new_double (self, _tmp0_, name, value, data);
	arg = _tmp1_;
	_tmp2_ = self->priv->args;
	vala_collection_add ((ValaCollection*) _tmp2_, arg);
	result = arg;
	return result;
}


ValadocApiAttributeArgument*
valadoc_api_attribute_add_string (ValadocApiAttribute* self,
                                  const gchar* name,
                                  const gchar* value,
                                  void* data)
{
	ValadocApiAttributeArgument* result = NULL;
	ValadocApiAttributeArgument* arg = NULL;
	ValadocApiSourceFile* _tmp0_;
	ValadocApiAttributeArgument* _tmp1_;
	ValaArrayList* _tmp2_;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (name != NULL, NULL);
	g_return_val_if_fail (value != NULL, NULL);
	_tmp0_ = self->priv->file;
	_tmp1_ = valadoc_api_attribute_argument_new_string (self, _tmp0_, name, value, data);
	arg = _tmp1_;
	_tmp2_ = self->priv->args;
	vala_collection_add ((ValaCollection*) _tmp2_, arg);
	result = arg;
	return result;
}


ValadocApiSourceFile*
valadoc_api_attribute_get_source_file (ValadocApiAttribute* self)
{
	ValadocApiSourceFile* result = NULL;
	ValadocApiSourceFile* _tmp0_;
	ValadocApiSourceFile* _tmp1_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->file;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	result = _tmp1_;
	return result;
}


static ValadocContentInline*
valadoc_api_attribute_real_build_signature (ValadocApiItem* base)
{
	ValadocApiAttribute * self;
	ValadocContentInline* result = NULL;
	ValadocApiSignatureBuilder* builder = NULL;
	ValadocApiSignatureBuilder* _tmp0_;
	ValadocApiSignatureBuilder* _tmp1_;
	ValadocApiSignatureBuilder* _tmp2_;
	ValadocApiSignatureBuilder* _tmp3_;
	ValadocApiSignatureBuilder* _tmp4_;
	const gchar* _tmp5_;
	ValadocApiSignatureBuilder* _tmp6_;
	ValadocApiSignatureBuilder* _tmp7_;
	ValaArrayList* _tmp8_;
	gint _tmp9_;
	gint _tmp10_;
	ValadocApiSignatureBuilder* _tmp38_;
	ValadocApiSignatureBuilder* _tmp39_;
	ValadocApiSignatureBuilder* _tmp40_;
	ValadocApiSignatureBuilder* _tmp41_;
	ValadocContentRun* _tmp42_;
	self = (ValadocApiAttribute*) base;
	_tmp0_ = valadoc_api_signature_builder_new ();
	builder = _tmp0_;
	_tmp1_ = builder;
	_tmp2_ = valadoc_api_signature_builder_append_attribute (_tmp1_, "[", TRUE);
	_tmp3_ = _tmp2_;
	_valadoc_api_signature_builder_unref0 (_tmp3_);
	_tmp4_ = builder;
	_tmp5_ = self->priv->_name;
	_tmp6_ = valadoc_api_signature_builder_append_type_name (_tmp4_, _tmp5_, TRUE);
	_tmp7_ = _tmp6_;
	_valadoc_api_signature_builder_unref0 (_tmp7_);
	_tmp8_ = self->priv->args;
	_tmp9_ = vala_collection_get_size ((ValaCollection*) _tmp8_);
	_tmp10_ = _tmp9_;
	if (_tmp10_ > 0) {
		ValadocApiSignatureBuilder* _tmp11_;
		ValadocApiSignatureBuilder* _tmp12_;
		ValadocApiSignatureBuilder* _tmp13_;
		gboolean first = FALSE;
		ValadocApiSignatureBuilder* _tmp35_;
		ValadocApiSignatureBuilder* _tmp36_;
		ValadocApiSignatureBuilder* _tmp37_;
		_tmp11_ = builder;
		_tmp12_ = valadoc_api_signature_builder_append_attribute (_tmp11_, "(", TRUE);
		_tmp13_ = _tmp12_;
		_valadoc_api_signature_builder_unref0 (_tmp13_);
		first = TRUE;
		{
			ValaArrayList* _arg_list = NULL;
			ValaArrayList* _tmp14_;
			ValaArrayList* _tmp15_;
			gint _arg_size = 0;
			ValaArrayList* _tmp16_;
			gint _tmp17_;
			gint _tmp18_;
			gint _arg_index = 0;
			_tmp14_ = self->priv->args;
			_tmp15_ = _vala_iterable_ref0 (_tmp14_);
			_arg_list = _tmp15_;
			_tmp16_ = _arg_list;
			_tmp17_ = vala_collection_get_size ((ValaCollection*) _tmp16_);
			_tmp18_ = _tmp17_;
			_arg_size = _tmp18_;
			_arg_index = -1;
			while (TRUE) {
				gint _tmp19_;
				gint _tmp20_;
				gint _tmp21_;
				ValadocApiAttributeArgument* arg = NULL;
				ValaArrayList* _tmp22_;
				gint _tmp23_;
				gpointer _tmp24_;
				gboolean _tmp25_;
				ValadocApiSignatureBuilder* _tmp29_;
				ValadocApiAttributeArgument* _tmp30_;
				ValadocContentInline* _tmp31_;
				ValadocContentInline* _tmp32_;
				ValadocApiSignatureBuilder* _tmp33_;
				ValadocApiSignatureBuilder* _tmp34_;
				_tmp19_ = _arg_index;
				_arg_index = _tmp19_ + 1;
				_tmp20_ = _arg_index;
				_tmp21_ = _arg_size;
				if (!(_tmp20_ < _tmp21_)) {
					break;
				}
				_tmp22_ = _arg_list;
				_tmp23_ = _arg_index;
				_tmp24_ = vala_list_get ((ValaList*) _tmp22_, _tmp23_);
				arg = (ValadocApiAttributeArgument*) _tmp24_;
				_tmp25_ = first;
				if (_tmp25_ == FALSE) {
					ValadocApiSignatureBuilder* _tmp26_;
					ValadocApiSignatureBuilder* _tmp27_;
					ValadocApiSignatureBuilder* _tmp28_;
					_tmp26_ = builder;
					_tmp27_ = valadoc_api_signature_builder_append_attribute (_tmp26_, ", ", TRUE);
					_tmp28_ = _tmp27_;
					_valadoc_api_signature_builder_unref0 (_tmp28_);
				}
				_tmp29_ = builder;
				_tmp30_ = arg;
				_tmp31_ = valadoc_api_item_get_signature ((ValadocApiItem*) _tmp30_);
				_tmp32_ = _tmp31_;
				_tmp33_ = valadoc_api_signature_builder_append_content (_tmp29_, _tmp32_, TRUE);
				_tmp34_ = _tmp33_;
				_valadoc_api_signature_builder_unref0 (_tmp34_);
				first = FALSE;
				_g_object_unref0 (arg);
			}
			_vala_iterable_unref0 (_arg_list);
		}
		_tmp35_ = builder;
		_tmp36_ = valadoc_api_signature_builder_append_attribute (_tmp35_, ")", TRUE);
		_tmp37_ = _tmp36_;
		_valadoc_api_signature_builder_unref0 (_tmp37_);
	}
	_tmp38_ = builder;
	_tmp39_ = valadoc_api_signature_builder_append_attribute (_tmp38_, "]", TRUE);
	_tmp40_ = _tmp39_;
	_valadoc_api_signature_builder_unref0 (_tmp40_);
	_tmp41_ = builder;
	_tmp42_ = valadoc_api_signature_builder_get (_tmp41_);
	result = (ValadocContentInline*) _tmp42_;
	_valadoc_api_signature_builder_unref0 (builder);
	return result;
}


const gchar*
valadoc_api_attribute_get_name (ValadocApiAttribute* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_name;
	result = _tmp0_;
	return result;
}


static void
valadoc_api_attribute_set_name (ValadocApiAttribute* self,
                                const gchar* value)
{
	g_return_if_fail (self != NULL);
	if (g_strcmp0 (value, valadoc_api_attribute_get_name (self)) != 0) {
		gchar* _tmp0_;
		_tmp0_ = g_strdup (value);
		_g_free0 (self->priv->_name);
		self->priv->_name = _tmp0_;
		g_object_notify_by_pspec ((GObject *) self, valadoc_api_attribute_properties[VALADOC_API_ATTRIBUTE_NAME_PROPERTY]);
	}
}


static void
valadoc_api_attribute_class_init (ValadocApiAttributeClass * klass)
{
	valadoc_api_attribute_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (ValadocApiAttributePrivate));
	((ValadocApiItemClass *) klass)->build_signature = (ValadocContentInline* (*) (ValadocApiItem *)) valadoc_api_attribute_real_build_signature;
	G_OBJECT_CLASS (klass)->get_property = _vala_valadoc_api_attribute_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_valadoc_api_attribute_set_property;
	G_OBJECT_CLASS (klass)->finalize = valadoc_api_attribute_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_API_ATTRIBUTE_NAME_PROPERTY, valadoc_api_attribute_properties[VALADOC_API_ATTRIBUTE_NAME_PROPERTY] = g_param_spec_string ("name", "name", "name", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
}


static void
valadoc_api_attribute_instance_init (ValadocApiAttribute * self)
{
	GEqualFunc _tmp0_;
	ValaArrayList* _tmp1_;
	self->priv = VALADOC_API_ATTRIBUTE_GET_PRIVATE (self);
	_tmp0_ = g_direct_equal;
	_tmp1_ = vala_array_list_new (VALADOC_API_TYPE_ATTRIBUTE_ARGUMENT, (GBoxedCopyFunc) g_object_ref, (GDestroyNotify) g_object_unref, _tmp0_);
	self->priv->args = _tmp1_;
}


static void
valadoc_api_attribute_finalize (GObject * obj)
{
	ValadocApiAttribute * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALADOC_API_TYPE_ATTRIBUTE, ValadocApiAttribute);
	_vala_iterable_unref0 (self->priv->args);
	_g_object_unref0 (self->priv->file);
	_g_free0 (self->priv->_name);
	G_OBJECT_CLASS (valadoc_api_attribute_parent_class)->finalize (obj);
}


GType
valadoc_api_attribute_get_type (void)
{
	static volatile gsize valadoc_api_attribute_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_api_attribute_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValadocApiAttributeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_api_attribute_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocApiAttribute), 0, (GInstanceInitFunc) valadoc_api_attribute_instance_init, NULL };
		GType valadoc_api_attribute_type_id;
		valadoc_api_attribute_type_id = g_type_register_static (VALADOC_API_TYPE_ITEM, "ValadocApiAttribute", &g_define_type_info, 0);
		g_once_init_leave (&valadoc_api_attribute_type_id__volatile, valadoc_api_attribute_type_id);
	}
	return valadoc_api_attribute_type_id__volatile;
}


static void
_vala_valadoc_api_attribute_get_property (GObject * object,
                                          guint property_id,
                                          GValue * value,
                                          GParamSpec * pspec)
{
	ValadocApiAttribute * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALADOC_API_TYPE_ATTRIBUTE, ValadocApiAttribute);
	switch (property_id) {
		case VALADOC_API_ATTRIBUTE_NAME_PROPERTY:
		g_value_set_string (value, valadoc_api_attribute_get_name (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void
_vala_valadoc_api_attribute_set_property (GObject * object,
                                          guint property_id,
                                          const GValue * value,
                                          GParamSpec * pspec)
{
	ValadocApiAttribute * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALADOC_API_TYPE_ATTRIBUTE, ValadocApiAttribute);
	switch (property_id) {
		case VALADOC_API_ATTRIBUTE_NAME_PROPERTY:
		valadoc_api_attribute_set_name (self, g_value_get_string (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



