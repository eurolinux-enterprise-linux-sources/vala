/* cssclassresolver.c generated by valac, the Vala compiler
 * generated from cssclassresolver.vala, do not modify */

/* globals.vala
 *
 * Copyright (C) 2008-2009 Florian Brosch
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
#include <stdlib.h>
#include <string.h>

enum  {
	VALADOC_HTML_CSS_CLASS_RESOLVER_0_PROPERTY,
	VALADOC_HTML_CSS_CLASS_RESOLVER_NUM_PROPERTIES
};
static GParamSpec* valadoc_html_css_class_resolver_properties[VALADOC_HTML_CSS_CLASS_RESOLVER_NUM_PROPERTIES];
#define _g_free0(var) (var = (g_free (var), NULL))

struct _ValadocHtmlCssClassResolverPrivate {
	gchar* css_class;
};


static gpointer valadoc_html_css_class_resolver_parent_class = NULL;

#define VALADOC_HTML_CSS_CLASS_RESOLVER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALADOC_HTML_TYPE_CSS_CLASS_RESOLVER, ValadocHtmlCssClassResolverPrivate))
static void valadoc_html_css_class_resolver_real_visit_package (ValadocApiVisitor* base,
                                                         ValadocApiPackage* item);
static void valadoc_html_css_class_resolver_real_visit_namespace (ValadocApiVisitor* base,
                                                           ValadocApiNamespace* item);
static void valadoc_html_css_class_resolver_real_visit_interface (ValadocApiVisitor* base,
                                                           ValadocApiInterface* item);
static void valadoc_html_css_class_resolver_real_visit_class (ValadocApiVisitor* base,
                                                       ValadocApiClass* item);
static void valadoc_html_css_class_resolver_real_visit_struct (ValadocApiVisitor* base,
                                                        ValadocApiStruct* item);
static void valadoc_html_css_class_resolver_real_visit_property (ValadocApiVisitor* base,
                                                          ValadocApiProperty* item);
static void valadoc_html_css_class_resolver_real_visit_field (ValadocApiVisitor* base,
                                                       ValadocApiField* item);
static void valadoc_html_css_class_resolver_real_visit_constant (ValadocApiVisitor* base,
                                                          ValadocApiConstant* item);
static void valadoc_html_css_class_resolver_real_visit_delegate (ValadocApiVisitor* base,
                                                          ValadocApiDelegate* item);
static void valadoc_html_css_class_resolver_real_visit_signal (ValadocApiVisitor* base,
                                                        ValadocApiSignal* item);
static void valadoc_html_css_class_resolver_real_visit_method (ValadocApiVisitor* base,
                                                        ValadocApiMethod* item);
static void valadoc_html_css_class_resolver_real_visit_error_domain (ValadocApiVisitor* base,
                                                              ValadocApiErrorDomain* item);
static void valadoc_html_css_class_resolver_real_visit_error_code (ValadocApiVisitor* base,
                                                            ValadocApiErrorCode* item);
static void valadoc_html_css_class_resolver_real_visit_enum (ValadocApiVisitor* base,
                                                      ValadocApiEnum* item);
static void valadoc_html_css_class_resolver_real_visit_enum_value (ValadocApiVisitor* base,
                                                            ValadocApiEnumValue* item);
static void valadoc_html_css_class_resolver_finalize (GObject * obj);


gchar*
valadoc_html_css_class_resolver_resolve (ValadocHtmlCssClassResolver* self,
                                         ValadocApiNode* node)
{
	gchar* result = NULL;
	gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (node != NULL, NULL);
	valadoc_api_node_accept (node, (ValadocApiVisitor*) self);
	_tmp0_ = self->priv->css_class;
	self->priv->css_class = NULL;
	result = _tmp0_;
	return result;
}


static void
valadoc_html_css_class_resolver_real_visit_package (ValadocApiVisitor* base,
                                                    ValadocApiPackage* item)
{
	ValadocHtmlCssClassResolver * self;
	gchar* _tmp0_;
	self = (ValadocHtmlCssClassResolver*) base;
	g_return_if_fail (item != NULL);
	_tmp0_ = g_strdup ("package");
	_g_free0 (self->priv->css_class);
	self->priv->css_class = _tmp0_;
}


static void
valadoc_html_css_class_resolver_real_visit_namespace (ValadocApiVisitor* base,
                                                      ValadocApiNamespace* item)
{
	ValadocHtmlCssClassResolver * self;
	gchar* _tmp0_;
	self = (ValadocHtmlCssClassResolver*) base;
	g_return_if_fail (item != NULL);
	_tmp0_ = g_strdup ("namespace");
	_g_free0 (self->priv->css_class);
	self->priv->css_class = _tmp0_;
}


static void
valadoc_html_css_class_resolver_real_visit_interface (ValadocApiVisitor* base,
                                                      ValadocApiInterface* item)
{
	ValadocHtmlCssClassResolver * self;
	gchar* _tmp0_;
	self = (ValadocHtmlCssClassResolver*) base;
	g_return_if_fail (item != NULL);
	_tmp0_ = g_strdup ("interface");
	_g_free0 (self->priv->css_class);
	self->priv->css_class = _tmp0_;
}


static void
valadoc_html_css_class_resolver_real_visit_class (ValadocApiVisitor* base,
                                                  ValadocApiClass* item)
{
	ValadocHtmlCssClassResolver * self;
	gboolean _tmp0_;
	gboolean _tmp1_;
	self = (ValadocHtmlCssClassResolver*) base;
	g_return_if_fail (item != NULL);
	_tmp0_ = valadoc_api_class_get_is_abstract (item);
	_tmp1_ = _tmp0_;
	if (_tmp1_) {
		gchar* _tmp2_;
		_tmp2_ = g_strdup ("abstract_class");
		_g_free0 (self->priv->css_class);
		self->priv->css_class = _tmp2_;
	} else {
		gchar* _tmp3_;
		_tmp3_ = g_strdup ("class");
		_g_free0 (self->priv->css_class);
		self->priv->css_class = _tmp3_;
	}
}


static void
valadoc_html_css_class_resolver_real_visit_struct (ValadocApiVisitor* base,
                                                   ValadocApiStruct* item)
{
	ValadocHtmlCssClassResolver * self;
	gchar* _tmp0_;
	self = (ValadocHtmlCssClassResolver*) base;
	g_return_if_fail (item != NULL);
	_tmp0_ = g_strdup ("struct");
	_g_free0 (self->priv->css_class);
	self->priv->css_class = _tmp0_;
}


static void
valadoc_html_css_class_resolver_real_visit_property (ValadocApiVisitor* base,
                                                     ValadocApiProperty* item)
{
	ValadocHtmlCssClassResolver * self;
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_;
	gboolean _tmp2_;
	self = (ValadocHtmlCssClassResolver*) base;
	g_return_if_fail (item != NULL);
	_tmp1_ = valadoc_api_property_get_is_virtual (item);
	_tmp2_ = _tmp1_;
	if (_tmp2_) {
		_tmp0_ = TRUE;
	} else {
		gboolean _tmp3_;
		gboolean _tmp4_;
		_tmp3_ = valadoc_api_property_get_is_override (item);
		_tmp4_ = _tmp3_;
		_tmp0_ = _tmp4_;
	}
	if (_tmp0_) {
		gchar* _tmp5_;
		_tmp5_ = g_strdup ("virtual_property");
		_g_free0 (self->priv->css_class);
		self->priv->css_class = _tmp5_;
	} else {
		gboolean _tmp6_;
		gboolean _tmp7_;
		_tmp6_ = valadoc_api_property_get_is_abstract (item);
		_tmp7_ = _tmp6_;
		if (_tmp7_) {
			gchar* _tmp8_;
			_tmp8_ = g_strdup ("abstract_property");
			_g_free0 (self->priv->css_class);
			self->priv->css_class = _tmp8_;
		} else {
			gchar* _tmp9_;
			_tmp9_ = g_strdup ("property");
			_g_free0 (self->priv->css_class);
			self->priv->css_class = _tmp9_;
		}
	}
}


static void
valadoc_html_css_class_resolver_real_visit_field (ValadocApiVisitor* base,
                                                  ValadocApiField* item)
{
	ValadocHtmlCssClassResolver * self;
	gchar* _tmp0_;
	self = (ValadocHtmlCssClassResolver*) base;
	g_return_if_fail (item != NULL);
	_tmp0_ = g_strdup ("field");
	_g_free0 (self->priv->css_class);
	self->priv->css_class = _tmp0_;
}


static void
valadoc_html_css_class_resolver_real_visit_constant (ValadocApiVisitor* base,
                                                     ValadocApiConstant* item)
{
	ValadocHtmlCssClassResolver * self;
	gchar* _tmp0_;
	self = (ValadocHtmlCssClassResolver*) base;
	g_return_if_fail (item != NULL);
	_tmp0_ = g_strdup ("constant");
	_g_free0 (self->priv->css_class);
	self->priv->css_class = _tmp0_;
}


static void
valadoc_html_css_class_resolver_real_visit_delegate (ValadocApiVisitor* base,
                                                     ValadocApiDelegate* item)
{
	ValadocHtmlCssClassResolver * self;
	gchar* _tmp0_;
	self = (ValadocHtmlCssClassResolver*) base;
	g_return_if_fail (item != NULL);
	_tmp0_ = g_strdup ("delegate");
	_g_free0 (self->priv->css_class);
	self->priv->css_class = _tmp0_;
}


static void
valadoc_html_css_class_resolver_real_visit_signal (ValadocApiVisitor* base,
                                                   ValadocApiSignal* item)
{
	ValadocHtmlCssClassResolver * self;
	gchar* _tmp0_;
	self = (ValadocHtmlCssClassResolver*) base;
	g_return_if_fail (item != NULL);
	_tmp0_ = g_strdup ("signal");
	_g_free0 (self->priv->css_class);
	self->priv->css_class = _tmp0_;
}


static void
valadoc_html_css_class_resolver_real_visit_method (ValadocApiVisitor* base,
                                                   ValadocApiMethod* item)
{
	ValadocHtmlCssClassResolver * self;
	gboolean _tmp0_;
	gboolean _tmp1_;
	self = (ValadocHtmlCssClassResolver*) base;
	g_return_if_fail (item != NULL);
	_tmp0_ = valadoc_api_method_get_is_static (item);
	_tmp1_ = _tmp0_;
	if (_tmp1_) {
		gchar* _tmp2_;
		_tmp2_ = g_strdup ("static_method");
		_g_free0 (self->priv->css_class);
		self->priv->css_class = _tmp2_;
	} else {
		gboolean _tmp3_;
		gboolean _tmp4_;
		_tmp3_ = valadoc_api_method_get_is_abstract (item);
		_tmp4_ = _tmp3_;
		if (_tmp4_) {
			gchar* _tmp5_;
			_tmp5_ = g_strdup ("abstract_method");
			_g_free0 (self->priv->css_class);
			self->priv->css_class = _tmp5_;
		} else {
			gboolean _tmp6_ = FALSE;
			gboolean _tmp7_;
			gboolean _tmp8_;
			_tmp7_ = valadoc_api_method_get_is_virtual (item);
			_tmp8_ = _tmp7_;
			if (_tmp8_) {
				_tmp6_ = TRUE;
			} else {
				gboolean _tmp9_;
				gboolean _tmp10_;
				_tmp9_ = valadoc_api_method_get_is_override (item);
				_tmp10_ = _tmp9_;
				_tmp6_ = _tmp10_;
			}
			if (_tmp6_) {
				gchar* _tmp11_;
				_tmp11_ = g_strdup ("virtual_method");
				_g_free0 (self->priv->css_class);
				self->priv->css_class = _tmp11_;
			} else {
				gboolean _tmp12_;
				gboolean _tmp13_;
				_tmp12_ = valadoc_api_method_get_is_constructor (item);
				_tmp13_ = _tmp12_;
				if (_tmp13_) {
					gchar* _tmp14_;
					_tmp14_ = g_strdup ("creation_method");
					_g_free0 (self->priv->css_class);
					self->priv->css_class = _tmp14_;
				} else {
					gchar* _tmp15_;
					_tmp15_ = g_strdup ("method");
					_g_free0 (self->priv->css_class);
					self->priv->css_class = _tmp15_;
				}
			}
		}
	}
}


static void
valadoc_html_css_class_resolver_real_visit_error_domain (ValadocApiVisitor* base,
                                                         ValadocApiErrorDomain* item)
{
	ValadocHtmlCssClassResolver * self;
	gchar* _tmp0_;
	self = (ValadocHtmlCssClassResolver*) base;
	g_return_if_fail (item != NULL);
	_tmp0_ = g_strdup ("errordomain");
	_g_free0 (self->priv->css_class);
	self->priv->css_class = _tmp0_;
}


static void
valadoc_html_css_class_resolver_real_visit_error_code (ValadocApiVisitor* base,
                                                       ValadocApiErrorCode* item)
{
	ValadocHtmlCssClassResolver * self;
	gchar* _tmp0_;
	self = (ValadocHtmlCssClassResolver*) base;
	g_return_if_fail (item != NULL);
	_tmp0_ = g_strdup ("errorcode");
	_g_free0 (self->priv->css_class);
	self->priv->css_class = _tmp0_;
}


static void
valadoc_html_css_class_resolver_real_visit_enum (ValadocApiVisitor* base,
                                                 ValadocApiEnum* item)
{
	ValadocHtmlCssClassResolver * self;
	gchar* _tmp0_;
	self = (ValadocHtmlCssClassResolver*) base;
	g_return_if_fail (item != NULL);
	_tmp0_ = g_strdup ("enum");
	_g_free0 (self->priv->css_class);
	self->priv->css_class = _tmp0_;
}


static void
valadoc_html_css_class_resolver_real_visit_enum_value (ValadocApiVisitor* base,
                                                       ValadocApiEnumValue* item)
{
	ValadocHtmlCssClassResolver * self;
	gchar* _tmp0_;
	self = (ValadocHtmlCssClassResolver*) base;
	g_return_if_fail (item != NULL);
	_tmp0_ = g_strdup ("enumvalue");
	_g_free0 (self->priv->css_class);
	self->priv->css_class = _tmp0_;
}


ValadocHtmlCssClassResolver*
valadoc_html_css_class_resolver_construct (GType object_type)
{
	ValadocHtmlCssClassResolver * self = NULL;
	self = (ValadocHtmlCssClassResolver*) valadoc_api_visitor_construct (object_type);
	return self;
}


ValadocHtmlCssClassResolver*
valadoc_html_css_class_resolver_new (void)
{
	return valadoc_html_css_class_resolver_construct (VALADOC_HTML_TYPE_CSS_CLASS_RESOLVER);
}


static void
valadoc_html_css_class_resolver_class_init (ValadocHtmlCssClassResolverClass * klass)
{
	valadoc_html_css_class_resolver_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (ValadocHtmlCssClassResolverPrivate));
	((ValadocApiVisitorClass *) klass)->visit_package = (void (*) (ValadocApiVisitor *, ValadocApiPackage*)) valadoc_html_css_class_resolver_real_visit_package;
	((ValadocApiVisitorClass *) klass)->visit_namespace = (void (*) (ValadocApiVisitor *, ValadocApiNamespace*)) valadoc_html_css_class_resolver_real_visit_namespace;
	((ValadocApiVisitorClass *) klass)->visit_interface = (void (*) (ValadocApiVisitor *, ValadocApiInterface*)) valadoc_html_css_class_resolver_real_visit_interface;
	((ValadocApiVisitorClass *) klass)->visit_class = (void (*) (ValadocApiVisitor *, ValadocApiClass*)) valadoc_html_css_class_resolver_real_visit_class;
	((ValadocApiVisitorClass *) klass)->visit_struct = (void (*) (ValadocApiVisitor *, ValadocApiStruct*)) valadoc_html_css_class_resolver_real_visit_struct;
	((ValadocApiVisitorClass *) klass)->visit_property = (void (*) (ValadocApiVisitor *, ValadocApiProperty*)) valadoc_html_css_class_resolver_real_visit_property;
	((ValadocApiVisitorClass *) klass)->visit_field = (void (*) (ValadocApiVisitor *, ValadocApiField*)) valadoc_html_css_class_resolver_real_visit_field;
	((ValadocApiVisitorClass *) klass)->visit_constant = (void (*) (ValadocApiVisitor *, ValadocApiConstant*)) valadoc_html_css_class_resolver_real_visit_constant;
	((ValadocApiVisitorClass *) klass)->visit_delegate = (void (*) (ValadocApiVisitor *, ValadocApiDelegate*)) valadoc_html_css_class_resolver_real_visit_delegate;
	((ValadocApiVisitorClass *) klass)->visit_signal = (void (*) (ValadocApiVisitor *, ValadocApiSignal*)) valadoc_html_css_class_resolver_real_visit_signal;
	((ValadocApiVisitorClass *) klass)->visit_method = (void (*) (ValadocApiVisitor *, ValadocApiMethod*)) valadoc_html_css_class_resolver_real_visit_method;
	((ValadocApiVisitorClass *) klass)->visit_error_domain = (void (*) (ValadocApiVisitor *, ValadocApiErrorDomain*)) valadoc_html_css_class_resolver_real_visit_error_domain;
	((ValadocApiVisitorClass *) klass)->visit_error_code = (void (*) (ValadocApiVisitor *, ValadocApiErrorCode*)) valadoc_html_css_class_resolver_real_visit_error_code;
	((ValadocApiVisitorClass *) klass)->visit_enum = (void (*) (ValadocApiVisitor *, ValadocApiEnum*)) valadoc_html_css_class_resolver_real_visit_enum;
	((ValadocApiVisitorClass *) klass)->visit_enum_value = (void (*) (ValadocApiVisitor *, ValadocApiEnumValue*)) valadoc_html_css_class_resolver_real_visit_enum_value;
	G_OBJECT_CLASS (klass)->finalize = valadoc_html_css_class_resolver_finalize;
}


static void
valadoc_html_css_class_resolver_instance_init (ValadocHtmlCssClassResolver * self)
{
	self->priv = VALADOC_HTML_CSS_CLASS_RESOLVER_GET_PRIVATE (self);
	self->priv->css_class = NULL;
}


static void
valadoc_html_css_class_resolver_finalize (GObject * obj)
{
	ValadocHtmlCssClassResolver * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALADOC_HTML_TYPE_CSS_CLASS_RESOLVER, ValadocHtmlCssClassResolver);
	_g_free0 (self->priv->css_class);
	G_OBJECT_CLASS (valadoc_html_css_class_resolver_parent_class)->finalize (obj);
}


GType
valadoc_html_css_class_resolver_get_type (void)
{
	static volatile gsize valadoc_html_css_class_resolver_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_html_css_class_resolver_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValadocHtmlCssClassResolverClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_html_css_class_resolver_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocHtmlCssClassResolver), 0, (GInstanceInitFunc) valadoc_html_css_class_resolver_instance_init, NULL };
		GType valadoc_html_css_class_resolver_type_id;
		valadoc_html_css_class_resolver_type_id = g_type_register_static (VALADOC_API_TYPE_VISITOR, "ValadocHtmlCssClassResolver", &g_define_type_info, 0);
		g_once_init_leave (&valadoc_html_css_class_resolver_type_id__volatile, valadoc_html_css_class_resolver_type_id);
	}
	return valadoc_html_css_class_resolver_type_id__volatile;
}



