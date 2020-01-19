/* valadynamicmethod.c generated by valac, the Vala compiler
 * generated from valadynamicmethod.vala, do not modify */

/* valadynamicmethod.vala
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
#include <stdlib.h>
#include <string.h>

#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))

struct _ValaDynamicMethodPrivate {
	ValaDataType* _dynamic_type;
	ValaMethodCall* _invocation;
};


static gpointer vala_dynamic_method_parent_class = NULL;

#define VALA_DYNAMIC_METHOD_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_DYNAMIC_METHOD, ValaDynamicMethodPrivate))
static gboolean vala_dynamic_method_real_check (ValaCodeNode* base,
                                         ValaCodeContext* context);
static void vala_dynamic_method_finalize (ValaCodeNode * obj);


ValaDynamicMethod*
vala_dynamic_method_construct (GType object_type,
                               ValaDataType* dynamic_type,
                               const gchar* name,
                               ValaDataType* return_type,
                               ValaSourceReference* source_reference,
                               ValaComment* comment)
{
	ValaDynamicMethod* self = NULL;
	g_return_val_if_fail (dynamic_type != NULL, NULL);
	g_return_val_if_fail (name != NULL, NULL);
	g_return_val_if_fail (return_type != NULL, NULL);
	self = (ValaDynamicMethod*) vala_method_construct (object_type, name, return_type, source_reference, comment);
	vala_dynamic_method_set_dynamic_type (self, dynamic_type);
	return self;
}


ValaDynamicMethod*
vala_dynamic_method_new (ValaDataType* dynamic_type,
                         const gchar* name,
                         ValaDataType* return_type,
                         ValaSourceReference* source_reference,
                         ValaComment* comment)
{
	return vala_dynamic_method_construct (VALA_TYPE_DYNAMIC_METHOD, dynamic_type, name, return_type, source_reference, comment);
}


static gboolean
vala_dynamic_method_real_check (ValaCodeNode* base,
                                ValaCodeContext* context)
{
	ValaDynamicMethod * self;
	gboolean result = FALSE;
	self = (ValaDynamicMethod*) base;
	g_return_val_if_fail (context != NULL, FALSE);
	result = TRUE;
	return result;
}


ValaDataType*
vala_dynamic_method_get_dynamic_type (ValaDynamicMethod* self)
{
	ValaDataType* result;
	ValaDataType* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_dynamic_type;
	result = _tmp0_;
	return result;
}


static gpointer
_vala_code_node_ref0 (gpointer self)
{
	return self ? vala_code_node_ref (self) : NULL;
}


void
vala_dynamic_method_set_dynamic_type (ValaDynamicMethod* self,
                                      ValaDataType* value)
{
	ValaDataType* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_code_node_ref0 (value);
	_vala_code_node_unref0 (self->priv->_dynamic_type);
	self->priv->_dynamic_type = _tmp0_;
}


ValaMethodCall*
vala_dynamic_method_get_invocation (ValaDynamicMethod* self)
{
	ValaMethodCall* result;
	ValaMethodCall* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_invocation;
	result = _tmp0_;
	return result;
}


void
vala_dynamic_method_set_invocation (ValaDynamicMethod* self,
                                    ValaMethodCall* value)
{
	ValaMethodCall* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_code_node_ref0 (value);
	_vala_code_node_unref0 (self->priv->_invocation);
	self->priv->_invocation = _tmp0_;
}


static void
vala_dynamic_method_class_init (ValaDynamicMethodClass * klass)
{
	vala_dynamic_method_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_dynamic_method_finalize;
	g_type_class_add_private (klass, sizeof (ValaDynamicMethodPrivate));
	((ValaCodeNodeClass *) klass)->check = (gboolean (*) (ValaCodeNode *, ValaCodeContext*)) vala_dynamic_method_real_check;
}


static void
vala_dynamic_method_instance_init (ValaDynamicMethod * self)
{
	self->priv = VALA_DYNAMIC_METHOD_GET_PRIVATE (self);
}


static void
vala_dynamic_method_finalize (ValaCodeNode * obj)
{
	ValaDynamicMethod * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_DYNAMIC_METHOD, ValaDynamicMethod);
	_vala_code_node_unref0 (self->priv->_dynamic_type);
	_vala_code_node_unref0 (self->priv->_invocation);
	VALA_CODE_NODE_CLASS (vala_dynamic_method_parent_class)->finalize (obj);
}


/**
 * Represents a late bound method.
 */
GType
vala_dynamic_method_get_type (void)
{
	static volatile gsize vala_dynamic_method_type_id__volatile = 0;
	if (g_once_init_enter (&vala_dynamic_method_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaDynamicMethodClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_dynamic_method_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaDynamicMethod), 0, (GInstanceInitFunc) vala_dynamic_method_instance_init, NULL };
		GType vala_dynamic_method_type_id;
		vala_dynamic_method_type_id = g_type_register_static (VALA_TYPE_METHOD, "ValaDynamicMethod", &g_define_type_info, 0);
		g_once_init_leave (&vala_dynamic_method_type_id__volatile, vala_dynamic_method_type_id);
	}
	return vala_dynamic_method_type_id__volatile;
}



