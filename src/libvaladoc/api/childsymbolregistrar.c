/* childsymbolregistrar.c generated by valac, the Vala compiler
 * generated from childsymbolregistrar.vala, do not modify */

/* childsymbolregistrar.vala
 *
 * Copyright (C) 2011  Florian Brosch
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

enum  {
	VALADOC_API_CHILD_SYMBOL_REGISTRAR_0_PROPERTY,
	VALADOC_API_CHILD_SYMBOL_REGISTRAR_NUM_PROPERTIES
};
static GParamSpec* valadoc_api_child_symbol_registrar_properties[VALADOC_API_CHILD_SYMBOL_REGISTRAR_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _vala_iterator_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterator_unref (var), NULL)))
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))


static gpointer valadoc_api_child_symbol_registrar_parent_class = NULL;

static void valadoc_api_child_symbol_registrar_real_visit_tree (ValadocApiVisitor* base,
                                                         ValadocApiTree* item);
static void valadoc_api_child_symbol_registrar_real_visit_package (ValadocApiVisitor* base,
                                                            ValadocApiPackage* item);
static void valadoc_api_child_symbol_registrar_real_visit_namespace (ValadocApiVisitor* base,
                                                              ValadocApiNamespace* item);
static void valadoc_api_child_symbol_registrar_real_visit_interface (ValadocApiVisitor* base,
                                                              ValadocApiInterface* item);
static void valadoc_api_child_symbol_registrar_real_visit_class (ValadocApiVisitor* base,
                                                          ValadocApiClass* item);
static void valadoc_api_child_symbol_registrar_real_visit_struct (ValadocApiVisitor* base,
                                                           ValadocApiStruct* item);
static void valadoc_api_child_symbol_registrar_real_visit_property (ValadocApiVisitor* base,
                                                             ValadocApiProperty* item);


/**
 * {@inheritDoc}
 */
static void
valadoc_api_child_symbol_registrar_real_visit_tree (ValadocApiVisitor* base,
                                                    ValadocApiTree* item)
{
	ValadocApiChildSymbolRegistrar * self;
	self = (ValadocApiChildSymbolRegistrar*) base;
	g_return_if_fail (item != NULL);
	valadoc_api_tree_accept_children (item, (ValadocApiVisitor*) self);
}


/**
 * {@inheritDoc}
 */
static void
valadoc_api_child_symbol_registrar_real_visit_package (ValadocApiVisitor* base,
                                                       ValadocApiPackage* item)
{
	ValadocApiChildSymbolRegistrar * self;
	self = (ValadocApiChildSymbolRegistrar*) base;
	g_return_if_fail (item != NULL);
	valadoc_api_node_accept_all_children ((ValadocApiNode*) item, (ValadocApiVisitor*) self, FALSE);
}


/**
 * {@inheritDoc}
 */
static void
valadoc_api_child_symbol_registrar_real_visit_namespace (ValadocApiVisitor* base,
                                                         ValadocApiNamespace* item)
{
	ValadocApiChildSymbolRegistrar * self;
	self = (ValadocApiChildSymbolRegistrar*) base;
	g_return_if_fail (item != NULL);
	valadoc_api_node_accept_all_children ((ValadocApiNode*) item, (ValadocApiVisitor*) self, FALSE);
}


/**
 * {@inheritDoc}
 */
static void
valadoc_api_child_symbol_registrar_real_visit_interface (ValadocApiVisitor* base,
                                                         ValadocApiInterface* item)
{
	ValadocApiChildSymbolRegistrar * self;
	ValaCollection* interfaces = NULL;
	ValaCollection* _tmp0_;
	ValadocApiTypeReference* _tmp9_;
	ValadocApiTypeReference* _tmp10_;
	self = (ValadocApiChildSymbolRegistrar*) base;
	g_return_if_fail (item != NULL);
	_tmp0_ = valadoc_api_interface_get_implemented_interface_list (item);
	interfaces = _tmp0_;
	{
		ValaIterator* _type_ref_it = NULL;
		ValaCollection* _tmp1_;
		ValaIterator* _tmp2_;
		_tmp1_ = interfaces;
		_tmp2_ = vala_iterable_iterator ((ValaIterable*) _tmp1_);
		_type_ref_it = _tmp2_;
		while (TRUE) {
			ValaIterator* _tmp3_;
			ValadocApiTypeReference* type_ref = NULL;
			ValaIterator* _tmp4_;
			gpointer _tmp5_;
			ValadocApiTypeReference* _tmp6_;
			ValadocApiItem* _tmp7_;
			ValadocApiItem* _tmp8_;
			_tmp3_ = _type_ref_it;
			if (!vala_iterator_next (_tmp3_)) {
				break;
			}
			_tmp4_ = _type_ref_it;
			_tmp5_ = vala_iterator_get (_tmp4_);
			type_ref = (ValadocApiTypeReference*) _tmp5_;
			_tmp6_ = type_ref;
			_tmp7_ = valadoc_api_typereference_get_data_type (_tmp6_);
			_tmp8_ = _tmp7_;
			valadoc_api_interface_register_related_interface (G_TYPE_CHECK_INSTANCE_CAST (_tmp8_, VALADOC_API_TYPE_INTERFACE, ValadocApiInterface), item);
			_g_object_unref0 (type_ref);
		}
		_vala_iterator_unref0 (_type_ref_it);
	}
	_tmp9_ = valadoc_api_interface_get_base_type (item);
	_tmp10_ = _tmp9_;
	if (_tmp10_ != NULL) {
		ValadocApiTypeReference* _tmp11_;
		ValadocApiTypeReference* _tmp12_;
		ValadocApiItem* _tmp13_;
		ValadocApiItem* _tmp14_;
		_tmp11_ = valadoc_api_interface_get_base_type (item);
		_tmp12_ = _tmp11_;
		_tmp13_ = valadoc_api_typereference_get_data_type (_tmp12_);
		_tmp14_ = _tmp13_;
		valadoc_api_class_register_derived_interface (G_TYPE_CHECK_INSTANCE_CAST (_tmp14_, VALADOC_API_TYPE_CLASS, ValadocApiClass), item);
	}
	valadoc_api_node_accept_all_children ((ValadocApiNode*) item, (ValadocApiVisitor*) self, FALSE);
	_vala_iterable_unref0 (interfaces);
}


/**
 * {@inheritDoc}
 */
static void
valadoc_api_child_symbol_registrar_real_visit_class (ValadocApiVisitor* base,
                                                     ValadocApiClass* item)
{
	ValadocApiChildSymbolRegistrar * self;
	ValaCollection* interfaces = NULL;
	ValaCollection* _tmp0_;
	ValadocApiTypeReference* _tmp9_;
	ValadocApiTypeReference* _tmp10_;
	self = (ValadocApiChildSymbolRegistrar*) base;
	g_return_if_fail (item != NULL);
	_tmp0_ = valadoc_api_class_get_implemented_interface_list (item);
	interfaces = _tmp0_;
	{
		ValaIterator* _type_ref_it = NULL;
		ValaCollection* _tmp1_;
		ValaIterator* _tmp2_;
		_tmp1_ = interfaces;
		_tmp2_ = vala_iterable_iterator ((ValaIterable*) _tmp1_);
		_type_ref_it = _tmp2_;
		while (TRUE) {
			ValaIterator* _tmp3_;
			ValadocApiTypeReference* type_ref = NULL;
			ValaIterator* _tmp4_;
			gpointer _tmp5_;
			ValadocApiTypeReference* _tmp6_;
			ValadocApiItem* _tmp7_;
			ValadocApiItem* _tmp8_;
			_tmp3_ = _type_ref_it;
			if (!vala_iterator_next (_tmp3_)) {
				break;
			}
			_tmp4_ = _type_ref_it;
			_tmp5_ = vala_iterator_get (_tmp4_);
			type_ref = (ValadocApiTypeReference*) _tmp5_;
			_tmp6_ = type_ref;
			_tmp7_ = valadoc_api_typereference_get_data_type (_tmp6_);
			_tmp8_ = _tmp7_;
			valadoc_api_interface_register_implementation (G_TYPE_CHECK_INSTANCE_CAST (_tmp8_, VALADOC_API_TYPE_INTERFACE, ValadocApiInterface), item);
			_g_object_unref0 (type_ref);
		}
		_vala_iterator_unref0 (_type_ref_it);
	}
	_tmp9_ = valadoc_api_class_get_base_type (item);
	_tmp10_ = _tmp9_;
	if (_tmp10_ != NULL) {
		ValadocApiTypeReference* _tmp11_;
		ValadocApiTypeReference* _tmp12_;
		ValadocApiItem* _tmp13_;
		ValadocApiItem* _tmp14_;
		_tmp11_ = valadoc_api_class_get_base_type (item);
		_tmp12_ = _tmp11_;
		_tmp13_ = valadoc_api_typereference_get_data_type (_tmp12_);
		_tmp14_ = _tmp13_;
		valadoc_api_class_register_child_class (G_TYPE_CHECK_INSTANCE_CAST (_tmp14_, VALADOC_API_TYPE_CLASS, ValadocApiClass), item);
	}
	valadoc_api_node_accept_all_children ((ValadocApiNode*) item, (ValadocApiVisitor*) self, FALSE);
	_vala_iterable_unref0 (interfaces);
}


/**
 * {@inheritDoc}
 */
static void
valadoc_api_child_symbol_registrar_real_visit_struct (ValadocApiVisitor* base,
                                                      ValadocApiStruct* item)
{
	ValadocApiChildSymbolRegistrar * self;
	ValadocApiTypeReference* _tmp0_;
	ValadocApiTypeReference* _tmp1_;
	self = (ValadocApiChildSymbolRegistrar*) base;
	g_return_if_fail (item != NULL);
	_tmp0_ = valadoc_api_struct_get_base_type (item);
	_tmp1_ = _tmp0_;
	if (_tmp1_ != NULL) {
		ValadocApiTypeReference* _tmp2_;
		ValadocApiTypeReference* _tmp3_;
		ValadocApiItem* _tmp4_;
		ValadocApiItem* _tmp5_;
		_tmp2_ = valadoc_api_struct_get_base_type (item);
		_tmp3_ = _tmp2_;
		_tmp4_ = valadoc_api_typereference_get_data_type (_tmp3_);
		_tmp5_ = _tmp4_;
		valadoc_api_struct_register_child_struct (G_TYPE_CHECK_INSTANCE_CAST (_tmp5_, VALADOC_API_TYPE_STRUCT, ValadocApiStruct), item);
	}
	valadoc_api_node_accept_all_children ((ValadocApiNode*) item, (ValadocApiVisitor*) self, FALSE);
}


/**
 * {@inheritDoc}
 */
static void
valadoc_api_child_symbol_registrar_real_visit_property (ValadocApiVisitor* base,
                                                        ValadocApiProperty* item)
{
	ValadocApiChildSymbolRegistrar * self;
	self = (ValadocApiChildSymbolRegistrar*) base;
	g_return_if_fail (item != NULL);
	valadoc_api_node_accept_all_children ((ValadocApiNode*) item, (ValadocApiVisitor*) self, FALSE);
}


ValadocApiChildSymbolRegistrar*
valadoc_api_child_symbol_registrar_construct (GType object_type)
{
	ValadocApiChildSymbolRegistrar * self = NULL;
	self = (ValadocApiChildSymbolRegistrar*) valadoc_api_visitor_construct (object_type);
	return self;
}


ValadocApiChildSymbolRegistrar*
valadoc_api_child_symbol_registrar_new (void)
{
	return valadoc_api_child_symbol_registrar_construct (VALADOC_API_TYPE_CHILD_SYMBOL_REGISTRAR);
}


static void
valadoc_api_child_symbol_registrar_class_init (ValadocApiChildSymbolRegistrarClass * klass)
{
	valadoc_api_child_symbol_registrar_parent_class = g_type_class_peek_parent (klass);
	((ValadocApiVisitorClass *) klass)->visit_tree = (void (*) (ValadocApiVisitor *, ValadocApiTree*)) valadoc_api_child_symbol_registrar_real_visit_tree;
	((ValadocApiVisitorClass *) klass)->visit_package = (void (*) (ValadocApiVisitor *, ValadocApiPackage*)) valadoc_api_child_symbol_registrar_real_visit_package;
	((ValadocApiVisitorClass *) klass)->visit_namespace = (void (*) (ValadocApiVisitor *, ValadocApiNamespace*)) valadoc_api_child_symbol_registrar_real_visit_namespace;
	((ValadocApiVisitorClass *) klass)->visit_interface = (void (*) (ValadocApiVisitor *, ValadocApiInterface*)) valadoc_api_child_symbol_registrar_real_visit_interface;
	((ValadocApiVisitorClass *) klass)->visit_class = (void (*) (ValadocApiVisitor *, ValadocApiClass*)) valadoc_api_child_symbol_registrar_real_visit_class;
	((ValadocApiVisitorClass *) klass)->visit_struct = (void (*) (ValadocApiVisitor *, ValadocApiStruct*)) valadoc_api_child_symbol_registrar_real_visit_struct;
	((ValadocApiVisitorClass *) klass)->visit_property = (void (*) (ValadocApiVisitor *, ValadocApiProperty*)) valadoc_api_child_symbol_registrar_real_visit_property;
}


static void
valadoc_api_child_symbol_registrar_instance_init (ValadocApiChildSymbolRegistrar * self)
{
}


GType
valadoc_api_child_symbol_registrar_get_type (void)
{
	static volatile gsize valadoc_api_child_symbol_registrar_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_api_child_symbol_registrar_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValadocApiChildSymbolRegistrarClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_api_child_symbol_registrar_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocApiChildSymbolRegistrar), 0, (GInstanceInitFunc) valadoc_api_child_symbol_registrar_instance_init, NULL };
		GType valadoc_api_child_symbol_registrar_type_id;
		valadoc_api_child_symbol_registrar_type_id = g_type_register_static (VALADOC_API_TYPE_VISITOR, "ValadocApiChildSymbolRegistrar", &g_define_type_info, 0);
		g_once_init_leave (&valadoc_api_child_symbol_registrar_type_id__volatile, valadoc_api_child_symbol_registrar_type_id);
	}
	return valadoc_api_child_symbol_registrar_type_id__volatile;
}



