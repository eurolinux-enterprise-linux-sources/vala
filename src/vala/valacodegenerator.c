/* valacodegenerator.c generated by valac, the Vala compiler
 * generated from valacodegenerator.vala, do not modify */

/* valacodegenerator.vala
 *
 * Copyright (C) 2007-2011  Jürg Billeter
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



static gpointer vala_code_generator_parent_class = NULL;

static void vala_code_generator_real_emit (ValaCodeGenerator* self,
                                    ValaCodeContext* context);
static ValaTargetValue* vala_code_generator_real_load_local (ValaCodeGenerator* self,
                                                      ValaLocalVariable* local);
static void vala_code_generator_real_store_local (ValaCodeGenerator* self,
                                           ValaLocalVariable* local,
                                           ValaTargetValue* value,
                                           gboolean initializer,
                                           ValaSourceReference* source_reference);
static ValaTargetValue* vala_code_generator_real_load_parameter (ValaCodeGenerator* self,
                                                          ValaParameter* param);
static void vala_code_generator_real_store_parameter (ValaCodeGenerator* self,
                                               ValaParameter* param,
                                               ValaTargetValue* value,
                                               gboolean capturing_parameter,
                                               ValaSourceReference* source_reference);
static ValaTargetValue* vala_code_generator_real_load_field (ValaCodeGenerator* self,
                                                      ValaField* field,
                                                      ValaTargetValue* instance);
static void vala_code_generator_real_store_field (ValaCodeGenerator* self,
                                           ValaField* field,
                                           ValaTargetValue* instance,
                                           ValaTargetValue* value,
                                           ValaSourceReference* source_reference);


/**
 * Generate and emit C code for the specified code context.
 *
 * @param context a code context
 */
static void
vala_code_generator_real_emit (ValaCodeGenerator* self,
                               ValaCodeContext* context)
{
	g_return_if_fail (context != NULL);
}


void
vala_code_generator_emit (ValaCodeGenerator* self,
                          ValaCodeContext* context)
{
	g_return_if_fail (self != NULL);
	VALA_CODE_GENERATOR_GET_CLASS (self)->emit (self, context);
}


static ValaTargetValue*
vala_code_generator_real_load_local (ValaCodeGenerator* self,
                                     ValaLocalVariable* local)
{
	g_critical ("Type `%s' does not implement abstract method `vala_code_generator_load_local'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}


ValaTargetValue*
vala_code_generator_load_local (ValaCodeGenerator* self,
                                ValaLocalVariable* local)
{
	g_return_val_if_fail (self != NULL, NULL);
	return VALA_CODE_GENERATOR_GET_CLASS (self)->load_local (self, local);
}


static void
vala_code_generator_real_store_local (ValaCodeGenerator* self,
                                      ValaLocalVariable* local,
                                      ValaTargetValue* value,
                                      gboolean initializer,
                                      ValaSourceReference* source_reference)
{
	g_critical ("Type `%s' does not implement abstract method `vala_code_generator_store_local'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return;
}


void
vala_code_generator_store_local (ValaCodeGenerator* self,
                                 ValaLocalVariable* local,
                                 ValaTargetValue* value,
                                 gboolean initializer,
                                 ValaSourceReference* source_reference)
{
	g_return_if_fail (self != NULL);
	VALA_CODE_GENERATOR_GET_CLASS (self)->store_local (self, local, value, initializer, source_reference);
}


static ValaTargetValue*
vala_code_generator_real_load_parameter (ValaCodeGenerator* self,
                                         ValaParameter* param)
{
	g_critical ("Type `%s' does not implement abstract method `vala_code_generator_load_parameter'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}


ValaTargetValue*
vala_code_generator_load_parameter (ValaCodeGenerator* self,
                                    ValaParameter* param)
{
	g_return_val_if_fail (self != NULL, NULL);
	return VALA_CODE_GENERATOR_GET_CLASS (self)->load_parameter (self, param);
}


static void
vala_code_generator_real_store_parameter (ValaCodeGenerator* self,
                                          ValaParameter* param,
                                          ValaTargetValue* value,
                                          gboolean capturing_parameter,
                                          ValaSourceReference* source_reference)
{
	g_critical ("Type `%s' does not implement abstract method `vala_code_generator_store_parameter'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return;
}


void
vala_code_generator_store_parameter (ValaCodeGenerator* self,
                                     ValaParameter* param,
                                     ValaTargetValue* value,
                                     gboolean capturing_parameter,
                                     ValaSourceReference* source_reference)
{
	g_return_if_fail (self != NULL);
	VALA_CODE_GENERATOR_GET_CLASS (self)->store_parameter (self, param, value, capturing_parameter, source_reference);
}


static ValaTargetValue*
vala_code_generator_real_load_field (ValaCodeGenerator* self,
                                     ValaField* field,
                                     ValaTargetValue* instance)
{
	g_critical ("Type `%s' does not implement abstract method `vala_code_generator_load_field'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}


ValaTargetValue*
vala_code_generator_load_field (ValaCodeGenerator* self,
                                ValaField* field,
                                ValaTargetValue* instance)
{
	g_return_val_if_fail (self != NULL, NULL);
	return VALA_CODE_GENERATOR_GET_CLASS (self)->load_field (self, field, instance);
}


static void
vala_code_generator_real_store_field (ValaCodeGenerator* self,
                                      ValaField* field,
                                      ValaTargetValue* instance,
                                      ValaTargetValue* value,
                                      ValaSourceReference* source_reference)
{
	g_critical ("Type `%s' does not implement abstract method `vala_code_generator_store_field'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return;
}


void
vala_code_generator_store_field (ValaCodeGenerator* self,
                                 ValaField* field,
                                 ValaTargetValue* instance,
                                 ValaTargetValue* value,
                                 ValaSourceReference* source_reference)
{
	g_return_if_fail (self != NULL);
	VALA_CODE_GENERATOR_GET_CLASS (self)->store_field (self, field, instance, value, source_reference);
}


ValaCodeGenerator*
vala_code_generator_construct (GType object_type)
{
	ValaCodeGenerator* self = NULL;
	self = (ValaCodeGenerator*) vala_code_visitor_construct (object_type);
	return self;
}


static void
vala_code_generator_class_init (ValaCodeGeneratorClass * klass)
{
	vala_code_generator_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeGeneratorClass *) klass)->emit = (void (*) (ValaCodeGenerator *, ValaCodeContext*)) vala_code_generator_real_emit;
	((ValaCodeGeneratorClass *) klass)->load_local = (ValaTargetValue* (*) (ValaCodeGenerator *, ValaLocalVariable*)) vala_code_generator_real_load_local;
	((ValaCodeGeneratorClass *) klass)->store_local = (void (*) (ValaCodeGenerator *, ValaLocalVariable*, ValaTargetValue*, gboolean, ValaSourceReference*)) vala_code_generator_real_store_local;
	((ValaCodeGeneratorClass *) klass)->load_parameter = (ValaTargetValue* (*) (ValaCodeGenerator *, ValaParameter*)) vala_code_generator_real_load_parameter;
	((ValaCodeGeneratorClass *) klass)->store_parameter = (void (*) (ValaCodeGenerator *, ValaParameter*, ValaTargetValue*, gboolean, ValaSourceReference*)) vala_code_generator_real_store_parameter;
	((ValaCodeGeneratorClass *) klass)->load_field = (ValaTargetValue* (*) (ValaCodeGenerator *, ValaField*, ValaTargetValue*)) vala_code_generator_real_load_field;
	((ValaCodeGeneratorClass *) klass)->store_field = (void (*) (ValaCodeGenerator *, ValaField*, ValaTargetValue*, ValaTargetValue*, ValaSourceReference*)) vala_code_generator_real_store_field;
}


static void
vala_code_generator_instance_init (ValaCodeGenerator * self)
{
}


/**
 * Abstract code visitor generating code.
 */
GType
vala_code_generator_get_type (void)
{
	static volatile gsize vala_code_generator_type_id__volatile = 0;
	if (g_once_init_enter (&vala_code_generator_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCodeGeneratorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_code_generator_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCodeGenerator), 0, (GInstanceInitFunc) vala_code_generator_instance_init, NULL };
		GType vala_code_generator_type_id;
		vala_code_generator_type_id = g_type_register_static (VALA_TYPE_CODE_VISITOR, "ValaCodeGenerator", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&vala_code_generator_type_id__volatile, vala_code_generator_type_id);
	}
	return vala_code_generator_type_id__volatile;
}



