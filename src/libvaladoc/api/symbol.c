/* symbol.c generated by valac, the Vala compiler
 * generated from symbol.vala, do not modify */

/* symbol.vala
 *
 * Copyright (C) 2008-2009 Florian Brosch, Didier Villevalois
 * Copyright (C) 2011      Florian Brosch
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
 * 	Didier 'Ptitjes Villevalois <ptitjes@free.fr>
 */


#include <glib.h>
#include <glib-object.h>
#include "valadoc.h"
#include <valagee.h>
#include <stdlib.h>
#include <string.h>

enum  {
	VALADOC_API_SYMBOL_0_PROPERTY,
	VALADOC_API_SYMBOL_IS_DEPRECATED_PROPERTY,
	VALADOC_API_SYMBOL_ACCESSIBILITY_PROPERTY,
	VALADOC_API_SYMBOL_IS_PUBLIC_PROPERTY,
	VALADOC_API_SYMBOL_IS_PROTECTED_PROPERTY,
	VALADOC_API_SYMBOL_IS_INTERNAL_PROPERTY,
	VALADOC_API_SYMBOL_IS_PRIVATE_PROPERTY,
	VALADOC_API_SYMBOL_NUM_PROPERTIES
};
static GParamSpec* valadoc_api_symbol_properties[VALADOC_API_SYMBOL_NUM_PROPERTIES];
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _ValadocApiSymbolPrivate {
	ValaArrayList* attributes;
	gboolean _is_deprecated;
	ValadocApiSymbolAccessibility _accessibility;
};


static gpointer valadoc_api_symbol_parent_class = NULL;

#define VALADOC_API_SYMBOL_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALADOC_API_TYPE_SYMBOL, ValadocApiSymbolPrivate))
static void valadoc_api_symbol_set_accessibility (ValadocApiSymbol* self,
                                           ValadocApiSymbolAccessibility value);
G_GNUC_INTERNAL void valadoc_api_package_register_deprecated_symbol (ValadocApiPackage* self,
                                                     ValadocApiSymbol* symbol,
                                                     const gchar* version);
static void valadoc_api_symbol_set_is_deprecated (ValadocApiSymbol* self,
                                           gboolean value);
static gboolean valadoc_api_symbol_real_is_browsable (ValadocApiNode* base,
                                               ValadocSettings* settings);
static void valadoc_api_symbol_finalize (GObject * obj);
static void _vala_valadoc_api_symbol_get_property (GObject * object,
                                            guint property_id,
                                            GValue * value,
                                            GParamSpec * pspec);
static void _vala_valadoc_api_symbol_set_property (GObject * object,
                                            guint property_id,
                                            const GValue * value,
                                            GParamSpec * pspec);


ValadocApiSymbol*
valadoc_api_symbol_construct (GType object_type,
                              ValadocApiNode* parent,
                              ValadocApiSourceFile* file,
                              const gchar* name,
                              ValadocApiSymbolAccessibility accessibility,
                              void* data)
{
	ValadocApiSymbol * self = NULL;
	g_return_val_if_fail (parent != NULL, NULL);
	g_return_val_if_fail (file != NULL, NULL);
	self = (ValadocApiSymbol*) valadoc_api_node_construct (object_type, parent, file, name, data);
	valadoc_api_symbol_set_accessibility (self, accessibility);
	return self;
}


void
valadoc_api_symbol_add_attribute (ValadocApiSymbol* self,
                                  ValadocApiAttribute* att)
{
	ValaArrayList* _tmp0_;
	const gchar* _tmp3_;
	const gchar* _tmp4_;
	ValaArrayList* _tmp31_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (att != NULL);
	_tmp0_ = self->priv->attributes;
	if (_tmp0_ == NULL) {
		GEqualFunc _tmp1_;
		ValaArrayList* _tmp2_;
		_tmp1_ = g_direct_equal;
		_tmp2_ = vala_array_list_new (VALADOC_API_TYPE_ATTRIBUTE, (GBoxedCopyFunc) g_object_ref, (GDestroyNotify) g_object_unref, _tmp1_);
		_vala_iterable_unref0 (self->priv->attributes);
		self->priv->attributes = _tmp2_;
	}
	_tmp3_ = valadoc_api_attribute_get_name (att);
	_tmp4_ = _tmp3_;
	if (g_strcmp0 (_tmp4_, "Version") == 0) {
		ValadocApiAttributeArgument* deprecated = NULL;
		ValadocApiAttributeArgument* _tmp5_;
		ValadocApiAttributeArgument* version = NULL;
		ValadocApiAttributeArgument* _tmp6_;
		gboolean _tmp7_ = FALSE;
		gboolean _tmp8_ = FALSE;
		ValadocApiAttributeArgument* _tmp9_;
		_tmp5_ = valadoc_api_attribute_get_argument (att, "deprecated");
		deprecated = _tmp5_;
		_tmp6_ = valadoc_api_attribute_get_argument (att, "deprecated_since");
		version = _tmp6_;
		_tmp9_ = deprecated;
		if (_tmp9_ != NULL) {
			ValadocApiAttributeArgument* _tmp10_;
			_tmp10_ = deprecated;
			_tmp8_ = valadoc_api_attribute_argument_get_value_as_boolean (_tmp10_);
		} else {
			_tmp8_ = FALSE;
		}
		if (_tmp8_) {
			_tmp7_ = TRUE;
		} else {
			ValadocApiAttributeArgument* _tmp11_;
			_tmp11_ = version;
			_tmp7_ = _tmp11_ != NULL;
		}
		if (_tmp7_) {
			gchar* _tmp12_ = NULL;
			ValadocApiAttributeArgument* _tmp13_;
			gchar* version_str = NULL;
			gchar* _tmp16_;
			ValadocApiPackage* _tmp17_;
			ValadocApiPackage* _tmp18_;
			const gchar* _tmp19_;
			_tmp13_ = version;
			if (_tmp13_ != NULL) {
				ValadocApiAttributeArgument* _tmp14_;
				gchar* _tmp15_;
				_tmp14_ = version;
				_tmp15_ = valadoc_api_attribute_argument_get_value_as_string (_tmp14_);
				_g_free0 (_tmp12_);
				_tmp12_ = _tmp15_;
			} else {
				_g_free0 (_tmp12_);
				_tmp12_ = NULL;
			}
			_tmp16_ = g_strdup (_tmp12_);
			version_str = _tmp16_;
			_tmp17_ = valadoc_documentation_get_package ((ValadocDocumentation*) self);
			_tmp18_ = _tmp17_;
			_tmp19_ = version_str;
			valadoc_api_package_register_deprecated_symbol (_tmp18_, self, _tmp19_);
			valadoc_api_symbol_set_is_deprecated (self, TRUE);
			_g_free0 (version_str);
			_g_free0 (_tmp12_);
		}
		_g_object_unref0 (version);
		_g_object_unref0 (deprecated);
	} else {
		const gchar* _tmp20_;
		const gchar* _tmp21_;
		_tmp20_ = valadoc_api_attribute_get_name (att);
		_tmp21_ = _tmp20_;
		if (g_strcmp0 (_tmp21_, "Deprecated") == 0) {
			ValadocApiAttributeArgument* version = NULL;
			ValadocApiAttributeArgument* _tmp22_;
			gchar* _tmp23_ = NULL;
			ValadocApiAttributeArgument* _tmp24_;
			gchar* version_str = NULL;
			gchar* _tmp27_;
			ValadocApiPackage* _tmp28_;
			ValadocApiPackage* _tmp29_;
			const gchar* _tmp30_;
			_tmp22_ = valadoc_api_attribute_get_argument (att, "version");
			version = _tmp22_;
			_tmp24_ = version;
			if (_tmp24_ != NULL) {
				ValadocApiAttributeArgument* _tmp25_;
				gchar* _tmp26_;
				_tmp25_ = version;
				_tmp26_ = valadoc_api_attribute_argument_get_value_as_string (_tmp25_);
				_g_free0 (_tmp23_);
				_tmp23_ = _tmp26_;
			} else {
				_g_free0 (_tmp23_);
				_tmp23_ = NULL;
			}
			_tmp27_ = g_strdup (_tmp23_);
			version_str = _tmp27_;
			_tmp28_ = valadoc_documentation_get_package ((ValadocDocumentation*) self);
			_tmp29_ = _tmp28_;
			_tmp30_ = version_str;
			valadoc_api_package_register_deprecated_symbol (_tmp29_, self, _tmp30_);
			valadoc_api_symbol_set_is_deprecated (self, TRUE);
			_g_free0 (version_str);
			_g_free0 (_tmp23_);
			_g_object_unref0 (version);
		}
	}
	_tmp31_ = self->priv->attributes;
	vala_collection_add ((ValaCollection*) _tmp31_, att);
}


static gpointer
_vala_iterable_ref0 (gpointer self)
{
	return self ? vala_iterable_ref (self) : NULL;
}


ValaCollection*
valadoc_api_symbol_get_attributes (ValadocApiSymbol* self)
{
	ValaCollection* result = NULL;
	ValaArrayList* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->attributes;
	if (_tmp0_ == NULL) {
		GEqualFunc _tmp1_;
		ValaArrayList* _tmp2_;
		_tmp1_ = g_direct_equal;
		_tmp2_ = vala_array_list_new (VALADOC_API_TYPE_ATTRIBUTE, (GBoxedCopyFunc) g_object_ref, (GDestroyNotify) g_object_unref, _tmp1_);
		result = (ValaCollection*) _tmp2_;
		return result;
	} else {
		ValaArrayList* _tmp3_;
		ValaCollection* _tmp4_;
		_tmp3_ = self->priv->attributes;
		_tmp4_ = _vala_iterable_ref0 ((ValaCollection*) _tmp3_);
		result = _tmp4_;
		return result;
	}
}


ValadocApiAttribute*
valadoc_api_symbol_get_attribute (ValadocApiSymbol* self,
                                  const gchar* name)
{
	ValadocApiAttribute* result = NULL;
	ValaArrayList* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (name != NULL, NULL);
	_tmp0_ = self->priv->attributes;
	if (_tmp0_ != NULL) {
		{
			ValaArrayList* _att_list = NULL;
			ValaArrayList* _tmp1_;
			ValaArrayList* _tmp2_;
			gint _att_size = 0;
			ValaArrayList* _tmp3_;
			gint _tmp4_;
			gint _tmp5_;
			gint _att_index = 0;
			_tmp1_ = self->priv->attributes;
			_tmp2_ = _vala_iterable_ref0 (_tmp1_);
			_att_list = _tmp2_;
			_tmp3_ = _att_list;
			_tmp4_ = vala_collection_get_size ((ValaCollection*) _tmp3_);
			_tmp5_ = _tmp4_;
			_att_size = _tmp5_;
			_att_index = -1;
			while (TRUE) {
				gint _tmp6_;
				gint _tmp7_;
				gint _tmp8_;
				ValadocApiAttribute* att = NULL;
				ValaArrayList* _tmp9_;
				gint _tmp10_;
				gpointer _tmp11_;
				ValadocApiAttribute* _tmp12_;
				const gchar* _tmp13_;
				const gchar* _tmp14_;
				_tmp6_ = _att_index;
				_att_index = _tmp6_ + 1;
				_tmp7_ = _att_index;
				_tmp8_ = _att_size;
				if (!(_tmp7_ < _tmp8_)) {
					break;
				}
				_tmp9_ = _att_list;
				_tmp10_ = _att_index;
				_tmp11_ = vala_list_get ((ValaList*) _tmp9_, _tmp10_);
				att = (ValadocApiAttribute*) _tmp11_;
				_tmp12_ = att;
				_tmp13_ = valadoc_api_attribute_get_name (_tmp12_);
				_tmp14_ = _tmp13_;
				if (g_strcmp0 (_tmp14_, name) == 0) {
					result = att;
					_vala_iterable_unref0 (_att_list);
					return result;
				}
				_g_object_unref0 (att);
			}
			_vala_iterable_unref0 (_att_list);
		}
	}
	result = NULL;
	return result;
}


/**
 * {@inheritDoc}
 */
static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}


static gboolean
valadoc_api_symbol_real_is_browsable (ValadocApiNode* base,
                                      ValadocSettings* settings)
{
	ValadocApiSymbol * self;
	gboolean result = FALSE;
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_;
	gboolean _tmp4_ = FALSE;
	gboolean _tmp5_;
	gboolean _tmp8_ = FALSE;
	gboolean _tmp9_;
	ValadocApiItem* pos = NULL;
	ValadocApiItem* _tmp12_;
	ValadocApiItem* _tmp13_;
	ValadocApiItem* _tmp14_;
	self = (ValadocApiSymbol*) base;
	g_return_val_if_fail (settings != NULL, FALSE);
	_tmp1_ = settings->_private;
	if (!_tmp1_) {
		gboolean _tmp2_;
		gboolean _tmp3_;
		_tmp2_ = valadoc_api_symbol_get_is_private (self);
		_tmp3_ = _tmp2_;
		_tmp0_ = _tmp3_;
	} else {
		_tmp0_ = FALSE;
	}
	if (_tmp0_) {
		result = FALSE;
		return result;
	}
	_tmp5_ = settings->_internal;
	if (!_tmp5_) {
		gboolean _tmp6_;
		gboolean _tmp7_;
		_tmp6_ = valadoc_api_symbol_get_is_internal (self);
		_tmp7_ = _tmp6_;
		_tmp4_ = _tmp7_;
	} else {
		_tmp4_ = FALSE;
	}
	if (_tmp4_) {
		result = FALSE;
		return result;
	}
	_tmp9_ = settings->_protected;
	if (!_tmp9_) {
		gboolean _tmp10_;
		gboolean _tmp11_;
		_tmp10_ = valadoc_api_symbol_get_is_protected (self);
		_tmp11_ = _tmp10_;
		_tmp8_ = _tmp11_;
	} else {
		_tmp8_ = FALSE;
	}
	if (_tmp8_) {
		result = FALSE;
		return result;
	}
	_tmp12_ = valadoc_api_item_get_parent ((ValadocApiItem*) self);
	_tmp13_ = _tmp12_;
	_tmp14_ = _g_object_ref0 (_tmp13_);
	pos = _tmp14_;
	while (TRUE) {
		gboolean _tmp15_ = FALSE;
		gboolean _tmp16_ = FALSE;
		ValadocApiItem* _tmp17_;
		ValadocApiItem* _tmp20_;
		ValadocApiItem* _tmp21_;
		ValadocApiItem* _tmp22_;
		ValadocApiItem* _tmp23_;
		ValadocApiItem* _tmp24_;
		_tmp17_ = pos;
		if (_tmp17_ != NULL) {
			ValadocApiItem* _tmp18_;
			_tmp18_ = pos;
			_tmp16_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp18_, VALADOC_API_TYPE_SYMBOL);
		} else {
			_tmp16_ = FALSE;
		}
		if (_tmp16_) {
			ValadocApiItem* _tmp19_;
			_tmp19_ = pos;
			_tmp15_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp19_, VALADOC_API_TYPE_NAMESPACE) == FALSE;
		} else {
			_tmp15_ = FALSE;
		}
		if (!_tmp15_) {
			break;
		}
		_tmp20_ = pos;
		if (valadoc_api_node_is_browsable ((ValadocApiNode*) G_TYPE_CHECK_INSTANCE_CAST (_tmp20_, VALADOC_API_TYPE_SYMBOL, ValadocApiSymbol), settings) == FALSE) {
			result = FALSE;
			_g_object_unref0 (pos);
			return result;
		}
		_tmp21_ = pos;
		_tmp22_ = valadoc_api_item_get_parent (_tmp21_);
		_tmp23_ = _tmp22_;
		_tmp24_ = _g_object_ref0 (_tmp23_);
		_g_object_unref0 (pos);
		pos = _tmp24_;
	}
	result = TRUE;
	_g_object_unref0 (pos);
	return result;
}


gboolean
valadoc_api_symbol_get_is_deprecated (ValadocApiSymbol* self)
{
	gboolean result;
	gboolean _tmp0_;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->priv->_is_deprecated;
	result = _tmp0_;
	return result;
}


static void
valadoc_api_symbol_set_is_deprecated (ValadocApiSymbol* self,
                                      gboolean value)
{
	g_return_if_fail (self != NULL);
	if (valadoc_api_symbol_get_is_deprecated (self) != value) {
		self->priv->_is_deprecated = value;
		g_object_notify_by_pspec ((GObject *) self, valadoc_api_symbol_properties[VALADOC_API_SYMBOL_IS_DEPRECATED_PROPERTY]);
	}
}


ValadocApiSymbolAccessibility
valadoc_api_symbol_get_accessibility (ValadocApiSymbol* self)
{
	ValadocApiSymbolAccessibility result;
	ValadocApiSymbolAccessibility _tmp0_;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_accessibility;
	result = _tmp0_;
	return result;
}


static void
valadoc_api_symbol_set_accessibility (ValadocApiSymbol* self,
                                      ValadocApiSymbolAccessibility value)
{
	g_return_if_fail (self != NULL);
	if (valadoc_api_symbol_get_accessibility (self) != value) {
		self->priv->_accessibility = value;
		g_object_notify_by_pspec ((GObject *) self, valadoc_api_symbol_properties[VALADOC_API_SYMBOL_ACCESSIBILITY_PROPERTY]);
	}
}


gboolean
valadoc_api_symbol_get_is_public (ValadocApiSymbol* self)
{
	gboolean result;
	ValadocApiSymbolAccessibility _tmp0_;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->priv->_accessibility;
	result = _tmp0_ == VALADOC_API_SYMBOL_ACCESSIBILITY_PUBLIC;
	return result;
}


gboolean
valadoc_api_symbol_get_is_protected (ValadocApiSymbol* self)
{
	gboolean result;
	ValadocApiSymbolAccessibility _tmp0_;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->priv->_accessibility;
	result = _tmp0_ == VALADOC_API_SYMBOL_ACCESSIBILITY_PROTECTED;
	return result;
}


gboolean
valadoc_api_symbol_get_is_internal (ValadocApiSymbol* self)
{
	gboolean result;
	ValadocApiSymbolAccessibility _tmp0_;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->priv->_accessibility;
	result = _tmp0_ == VALADOC_API_SYMBOL_ACCESSIBILITY_INTERNAL;
	return result;
}


gboolean
valadoc_api_symbol_get_is_private (ValadocApiSymbol* self)
{
	gboolean result;
	ValadocApiSymbolAccessibility _tmp0_;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->priv->_accessibility;
	result = _tmp0_ == VALADOC_API_SYMBOL_ACCESSIBILITY_PRIVATE;
	return result;
}


static void
valadoc_api_symbol_class_init (ValadocApiSymbolClass * klass)
{
	valadoc_api_symbol_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (ValadocApiSymbolPrivate));
	((ValadocApiNodeClass *) klass)->is_browsable = (gboolean (*) (ValadocApiNode *, ValadocSettings*)) valadoc_api_symbol_real_is_browsable;
	G_OBJECT_CLASS (klass)->get_property = _vala_valadoc_api_symbol_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_valadoc_api_symbol_set_property;
	G_OBJECT_CLASS (klass)->finalize = valadoc_api_symbol_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_API_SYMBOL_IS_DEPRECATED_PROPERTY, valadoc_api_symbol_properties[VALADOC_API_SYMBOL_IS_DEPRECATED_PROPERTY] = g_param_spec_boolean ("is-deprecated", "is-deprecated", "is-deprecated", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_API_SYMBOL_ACCESSIBILITY_PROPERTY, valadoc_api_symbol_properties[VALADOC_API_SYMBOL_ACCESSIBILITY_PROPERTY] = g_param_spec_enum ("accessibility", "accessibility", "accessibility", VALADOC_API_TYPE_SYMBOL_ACCESSIBILITY, 0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	/**
	 * Specifies whether this symbol is public.
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_API_SYMBOL_IS_PUBLIC_PROPERTY, valadoc_api_symbol_properties[VALADOC_API_SYMBOL_IS_PUBLIC_PROPERTY] = g_param_spec_boolean ("is-public", "is-public", "is-public", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	/**
	 * Specifies whether this symbol is protected.
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_API_SYMBOL_IS_PROTECTED_PROPERTY, valadoc_api_symbol_properties[VALADOC_API_SYMBOL_IS_PROTECTED_PROPERTY] = g_param_spec_boolean ("is-protected", "is-protected", "is-protected", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	/**
	 * Specifies whether this symbol is internal.
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_API_SYMBOL_IS_INTERNAL_PROPERTY, valadoc_api_symbol_properties[VALADOC_API_SYMBOL_IS_INTERNAL_PROPERTY] = g_param_spec_boolean ("is-internal", "is-internal", "is-internal", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	/**
	 * Specifies whether this symbol is private.
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_API_SYMBOL_IS_PRIVATE_PROPERTY, valadoc_api_symbol_properties[VALADOC_API_SYMBOL_IS_PRIVATE_PROPERTY] = g_param_spec_boolean ("is-private", "is-private", "is-private", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
}


static void
valadoc_api_symbol_instance_init (ValadocApiSymbol * self)
{
	self->priv = VALADOC_API_SYMBOL_GET_PRIVATE (self);
	self->priv->_is_deprecated = FALSE;
}


static void
valadoc_api_symbol_finalize (GObject * obj)
{
	ValadocApiSymbol * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALADOC_API_TYPE_SYMBOL, ValadocApiSymbol);
	_vala_iterable_unref0 (self->priv->attributes);
	G_OBJECT_CLASS (valadoc_api_symbol_parent_class)->finalize (obj);
}


/**
 * Represents a node in the symbol tree.
 */
GType
valadoc_api_symbol_get_type (void)
{
	static volatile gsize valadoc_api_symbol_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_api_symbol_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValadocApiSymbolClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_api_symbol_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocApiSymbol), 0, (GInstanceInitFunc) valadoc_api_symbol_instance_init, NULL };
		GType valadoc_api_symbol_type_id;
		valadoc_api_symbol_type_id = g_type_register_static (VALADOC_API_TYPE_NODE, "ValadocApiSymbol", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&valadoc_api_symbol_type_id__volatile, valadoc_api_symbol_type_id);
	}
	return valadoc_api_symbol_type_id__volatile;
}


static void
_vala_valadoc_api_symbol_get_property (GObject * object,
                                       guint property_id,
                                       GValue * value,
                                       GParamSpec * pspec)
{
	ValadocApiSymbol * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALADOC_API_TYPE_SYMBOL, ValadocApiSymbol);
	switch (property_id) {
		case VALADOC_API_SYMBOL_IS_DEPRECATED_PROPERTY:
		g_value_set_boolean (value, valadoc_api_symbol_get_is_deprecated (self));
		break;
		case VALADOC_API_SYMBOL_ACCESSIBILITY_PROPERTY:
		g_value_set_enum (value, valadoc_api_symbol_get_accessibility (self));
		break;
		case VALADOC_API_SYMBOL_IS_PUBLIC_PROPERTY:
		g_value_set_boolean (value, valadoc_api_symbol_get_is_public (self));
		break;
		case VALADOC_API_SYMBOL_IS_PROTECTED_PROPERTY:
		g_value_set_boolean (value, valadoc_api_symbol_get_is_protected (self));
		break;
		case VALADOC_API_SYMBOL_IS_INTERNAL_PROPERTY:
		g_value_set_boolean (value, valadoc_api_symbol_get_is_internal (self));
		break;
		case VALADOC_API_SYMBOL_IS_PRIVATE_PROPERTY:
		g_value_set_boolean (value, valadoc_api_symbol_get_is_private (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void
_vala_valadoc_api_symbol_set_property (GObject * object,
                                       guint property_id,
                                       const GValue * value,
                                       GParamSpec * pspec)
{
	ValadocApiSymbol * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALADOC_API_TYPE_SYMBOL, ValadocApiSymbol);
	switch (property_id) {
		case VALADOC_API_SYMBOL_IS_DEPRECATED_PROPERTY:
		valadoc_api_symbol_set_is_deprecated (self, g_value_get_boolean (value));
		break;
		case VALADOC_API_SYMBOL_ACCESSIBILITY_PROPERTY:
		valadoc_api_symbol_set_accessibility (self, g_value_get_enum (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



