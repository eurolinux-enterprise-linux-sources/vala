/* valaccodedeclaration.c generated by valac, the Vala compiler
 * generated from valaccodedeclaration.vala, do not modify */

/* valaccodedeclaration.vala
 *
 * Copyright (C) 2006-2010  Jürg Billeter
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
#include "valaccode.h"
#include <stdlib.h>
#include <string.h>
#include <valagee.h>

#define _g_free0(var) (var = (g_free (var), NULL))
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))
#define _vala_ccode_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_ccode_node_unref (var), NULL)))

struct _ValaCCodeDeclarationPrivate {
	gchar* _type_name;
	ValaList* declarators;
};


static gpointer vala_ccode_declaration_parent_class = NULL;

#define VALA_CCODE_DECLARATION_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_CCODE_DECLARATION, ValaCCodeDeclarationPrivate))
static void vala_ccode_declaration_real_write (ValaCCodeNode* base,
                                        ValaCCodeWriter* writer);
static gboolean vala_ccode_declaration_has_initializer (ValaCCodeDeclaration* self);
static void vala_ccode_declaration_real_write_declaration (ValaCCodeNode* base,
                                                    ValaCCodeWriter* writer);
static void vala_ccode_declaration_finalize (ValaCCodeNode * obj);


ValaCCodeDeclaration*
vala_ccode_declaration_construct (GType object_type,
                                  const gchar* type_name)
{
	ValaCCodeDeclaration* self = NULL;
	g_return_val_if_fail (type_name != NULL, NULL);
	self = (ValaCCodeDeclaration*) vala_ccode_statement_construct (object_type);
	vala_ccode_declaration_set_type_name (self, type_name);
	return self;
}


ValaCCodeDeclaration*
vala_ccode_declaration_new (const gchar* type_name)
{
	return vala_ccode_declaration_construct (VALA_TYPE_CCODE_DECLARATION, type_name);
}


/**
 * Adds the specified declarator to this declaration.
 *
 * @param decl a declarator
 */
void
vala_ccode_declaration_add_declarator (ValaCCodeDeclaration* self,
                                       ValaCCodeDeclarator* decl)
{
	ValaList* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (decl != NULL);
	_tmp0_ = self->priv->declarators;
	vala_collection_add ((ValaCollection*) _tmp0_, decl);
}


static gpointer
_vala_iterable_ref0 (gpointer self)
{
	return self ? vala_iterable_ref (self) : NULL;
}


static void
vala_ccode_declaration_real_write (ValaCCodeNode* base,
                                   ValaCCodeWriter* writer)
{
	ValaCCodeDeclaration * self;
	ValaCCodeModifiers _tmp0_;
	ValaCCodeModifiers _tmp1_;
	self = (ValaCCodeDeclaration*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) self);
	_tmp1_ = _tmp0_;
	if ((_tmp1_ & ((VALA_CCODE_MODIFIERS_STATIC | VALA_CCODE_MODIFIERS_INTERNAL) | VALA_CCODE_MODIFIERS_EXTERN)) == 0) {
		{
			ValaList* _decl_list = NULL;
			ValaList* _tmp2_;
			ValaList* _tmp3_;
			gint _decl_size = 0;
			ValaList* _tmp4_;
			gint _tmp5_;
			gint _tmp6_;
			gint _decl_index = 0;
			_tmp2_ = self->priv->declarators;
			_tmp3_ = _vala_iterable_ref0 (_tmp2_);
			_decl_list = _tmp3_;
			_tmp4_ = _decl_list;
			_tmp5_ = vala_collection_get_size ((ValaCollection*) _tmp4_);
			_tmp6_ = _tmp5_;
			_decl_size = _tmp6_;
			_decl_index = -1;
			while (TRUE) {
				gint _tmp7_;
				gint _tmp8_;
				gint _tmp9_;
				ValaCCodeDeclarator* decl = NULL;
				ValaList* _tmp10_;
				gint _tmp11_;
				gpointer _tmp12_;
				ValaCCodeDeclarator* _tmp13_;
				_tmp7_ = _decl_index;
				_decl_index = _tmp7_ + 1;
				_tmp8_ = _decl_index;
				_tmp9_ = _decl_size;
				if (!(_tmp8_ < _tmp9_)) {
					break;
				}
				_tmp10_ = _decl_list;
				_tmp11_ = _decl_index;
				_tmp12_ = vala_list_get (_tmp10_, _tmp11_);
				decl = (ValaCCodeDeclarator*) _tmp12_;
				_tmp13_ = decl;
				vala_ccode_declarator_write_initialization (_tmp13_, writer);
				_vala_ccode_node_unref0 (decl);
			}
			_vala_iterable_unref0 (_decl_list);
		}
	}
}


static gpointer
_vala_ccode_node_ref0 (gpointer self)
{
	return self ? vala_ccode_node_ref (self) : NULL;
}


static gboolean
vala_ccode_declaration_has_initializer (ValaCCodeDeclaration* self)
{
	gboolean result = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	{
		ValaList* _decl_list = NULL;
		ValaList* _tmp0_;
		ValaList* _tmp1_;
		gint _decl_size = 0;
		ValaList* _tmp2_;
		gint _tmp3_;
		gint _tmp4_;
		gint _decl_index = 0;
		_tmp0_ = self->priv->declarators;
		_tmp1_ = _vala_iterable_ref0 (_tmp0_);
		_decl_list = _tmp1_;
		_tmp2_ = _decl_list;
		_tmp3_ = vala_collection_get_size ((ValaCollection*) _tmp2_);
		_tmp4_ = _tmp3_;
		_decl_size = _tmp4_;
		_decl_index = -1;
		while (TRUE) {
			gint _tmp5_;
			gint _tmp6_;
			gint _tmp7_;
			ValaCCodeDeclarator* decl = NULL;
			ValaList* _tmp8_;
			gint _tmp9_;
			gpointer _tmp10_;
			ValaCCodeVariableDeclarator* var_decl = NULL;
			ValaCCodeDeclarator* _tmp11_;
			ValaCCodeVariableDeclarator* _tmp12_;
			gboolean _tmp13_ = FALSE;
			ValaCCodeVariableDeclarator* _tmp14_;
			_tmp5_ = _decl_index;
			_decl_index = _tmp5_ + 1;
			_tmp6_ = _decl_index;
			_tmp7_ = _decl_size;
			if (!(_tmp6_ < _tmp7_)) {
				break;
			}
			_tmp8_ = _decl_list;
			_tmp9_ = _decl_index;
			_tmp10_ = vala_list_get (_tmp8_, _tmp9_);
			decl = (ValaCCodeDeclarator*) _tmp10_;
			_tmp11_ = decl;
			_tmp12_ = _vala_ccode_node_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp11_, VALA_TYPE_CCODE_VARIABLE_DECLARATOR) ? ((ValaCCodeVariableDeclarator*) _tmp11_) : NULL);
			var_decl = _tmp12_;
			_tmp14_ = var_decl;
			if (_tmp14_ != NULL) {
				ValaCCodeVariableDeclarator* _tmp15_;
				ValaCCodeExpression* _tmp16_;
				ValaCCodeExpression* _tmp17_;
				_tmp15_ = var_decl;
				_tmp16_ = vala_ccode_variable_declarator_get_initializer (_tmp15_);
				_tmp17_ = _tmp16_;
				_tmp13_ = _tmp17_ == NULL;
			} else {
				_tmp13_ = FALSE;
			}
			if (_tmp13_) {
				result = FALSE;
				_vala_ccode_node_unref0 (var_decl);
				_vala_ccode_node_unref0 (decl);
				_vala_iterable_unref0 (_decl_list);
				return result;
			}
			_vala_ccode_node_unref0 (var_decl);
			_vala_ccode_node_unref0 (decl);
		}
		_vala_iterable_unref0 (_decl_list);
	}
	result = TRUE;
	return result;
}


static void
vala_ccode_declaration_real_write_declaration (ValaCCodeNode* base,
                                               ValaCCodeWriter* writer)
{
	ValaCCodeDeclaration * self;
	ValaCCodeModifiers _tmp0_;
	ValaCCodeModifiers _tmp1_;
	ValaCCodeModifiers _tmp29_;
	ValaCCodeModifiers _tmp30_;
	ValaCCodeModifiers _tmp31_;
	ValaCCodeModifiers _tmp32_;
	const gchar* _tmp33_;
	gboolean first = FALSE;
	ValaCCodeModifiers _tmp47_;
	ValaCCodeModifiers _tmp48_;
	self = (ValaCCodeDeclaration*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) self);
	_tmp1_ = _tmp0_;
	if ((_tmp1_ & ((VALA_CCODE_MODIFIERS_STATIC | VALA_CCODE_MODIFIERS_INTERNAL) | VALA_CCODE_MODIFIERS_EXTERN)) != 0) {
		ValaCCodeLineDirective* _tmp2_;
		ValaCCodeLineDirective* _tmp3_;
		ValaCCodeModifiers _tmp4_;
		ValaCCodeModifiers _tmp5_;
		ValaCCodeModifiers _tmp6_;
		ValaCCodeModifiers _tmp7_;
		ValaCCodeModifiers _tmp8_;
		ValaCCodeModifiers _tmp9_;
		gboolean _tmp10_ = FALSE;
		ValaCCodeModifiers _tmp11_;
		ValaCCodeModifiers _tmp12_;
		ValaCCodeModifiers _tmp13_;
		ValaCCodeModifiers _tmp14_;
		const gchar* _tmp15_;
		gboolean first = FALSE;
		_tmp2_ = vala_ccode_node_get_line ((ValaCCodeNode*) self);
		_tmp3_ = _tmp2_;
		vala_ccode_writer_write_indent (writer, _tmp3_);
		_tmp4_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) self);
		_tmp5_ = _tmp4_;
		if ((_tmp5_ & VALA_CCODE_MODIFIERS_INTERNAL) != 0) {
			vala_ccode_writer_write_string (writer, "G_GNUC_INTERNAL ");
		}
		_tmp6_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) self);
		_tmp7_ = _tmp6_;
		if ((_tmp7_ & VALA_CCODE_MODIFIERS_STATIC) != 0) {
			vala_ccode_writer_write_string (writer, "static ");
		}
		_tmp8_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) self);
		_tmp9_ = _tmp8_;
		if ((_tmp9_ & VALA_CCODE_MODIFIERS_VOLATILE) != 0) {
			vala_ccode_writer_write_string (writer, "volatile ");
		}
		_tmp11_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) self);
		_tmp12_ = _tmp11_;
		if ((_tmp12_ & VALA_CCODE_MODIFIERS_EXTERN) != 0) {
			_tmp10_ = !vala_ccode_declaration_has_initializer (self);
		} else {
			_tmp10_ = FALSE;
		}
		if (_tmp10_) {
			vala_ccode_writer_write_string (writer, "extern ");
		}
		_tmp13_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) self);
		_tmp14_ = _tmp13_;
		if ((_tmp14_ & VALA_CCODE_MODIFIERS_THREAD_LOCAL) != 0) {
			vala_ccode_writer_write_string (writer, "thread_local ");
		}
		_tmp15_ = self->priv->_type_name;
		vala_ccode_writer_write_string (writer, _tmp15_);
		vala_ccode_writer_write_string (writer, " ");
		first = TRUE;
		{
			ValaList* _decl_list = NULL;
			ValaList* _tmp16_;
			ValaList* _tmp17_;
			gint _decl_size = 0;
			ValaList* _tmp18_;
			gint _tmp19_;
			gint _tmp20_;
			gint _decl_index = 0;
			_tmp16_ = self->priv->declarators;
			_tmp17_ = _vala_iterable_ref0 (_tmp16_);
			_decl_list = _tmp17_;
			_tmp18_ = _decl_list;
			_tmp19_ = vala_collection_get_size ((ValaCollection*) _tmp18_);
			_tmp20_ = _tmp19_;
			_decl_size = _tmp20_;
			_decl_index = -1;
			while (TRUE) {
				gint _tmp21_;
				gint _tmp22_;
				gint _tmp23_;
				ValaCCodeDeclarator* decl = NULL;
				ValaList* _tmp24_;
				gint _tmp25_;
				gpointer _tmp26_;
				gboolean _tmp27_;
				ValaCCodeDeclarator* _tmp28_;
				_tmp21_ = _decl_index;
				_decl_index = _tmp21_ + 1;
				_tmp22_ = _decl_index;
				_tmp23_ = _decl_size;
				if (!(_tmp22_ < _tmp23_)) {
					break;
				}
				_tmp24_ = _decl_list;
				_tmp25_ = _decl_index;
				_tmp26_ = vala_list_get (_tmp24_, _tmp25_);
				decl = (ValaCCodeDeclarator*) _tmp26_;
				_tmp27_ = first;
				if (!_tmp27_) {
					vala_ccode_writer_write_string (writer, ", ");
				} else {
					first = FALSE;
				}
				_tmp28_ = decl;
				vala_ccode_node_write ((ValaCCodeNode*) _tmp28_, writer);
				_vala_ccode_node_unref0 (decl);
			}
			_vala_iterable_unref0 (_decl_list);
		}
		vala_ccode_writer_write_string (writer, ";");
		vala_ccode_writer_write_newline (writer);
		return;
	}
	vala_ccode_writer_write_indent (writer, NULL);
	_tmp29_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) self);
	_tmp30_ = _tmp29_;
	if ((_tmp30_ & VALA_CCODE_MODIFIERS_REGISTER) == VALA_CCODE_MODIFIERS_REGISTER) {
		vala_ccode_writer_write_string (writer, "register ");
	}
	_tmp31_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) self);
	_tmp32_ = _tmp31_;
	if ((_tmp32_ & VALA_CCODE_MODIFIERS_VOLATILE) != 0) {
		vala_ccode_writer_write_string (writer, "volatile ");
	}
	_tmp33_ = self->priv->_type_name;
	vala_ccode_writer_write_string (writer, _tmp33_);
	vala_ccode_writer_write_string (writer, " ");
	first = TRUE;
	{
		ValaList* _decl_list = NULL;
		ValaList* _tmp34_;
		ValaList* _tmp35_;
		gint _decl_size = 0;
		ValaList* _tmp36_;
		gint _tmp37_;
		gint _tmp38_;
		gint _decl_index = 0;
		_tmp34_ = self->priv->declarators;
		_tmp35_ = _vala_iterable_ref0 (_tmp34_);
		_decl_list = _tmp35_;
		_tmp36_ = _decl_list;
		_tmp37_ = vala_collection_get_size ((ValaCollection*) _tmp36_);
		_tmp38_ = _tmp37_;
		_decl_size = _tmp38_;
		_decl_index = -1;
		while (TRUE) {
			gint _tmp39_;
			gint _tmp40_;
			gint _tmp41_;
			ValaCCodeDeclarator* decl = NULL;
			ValaList* _tmp42_;
			gint _tmp43_;
			gpointer _tmp44_;
			gboolean _tmp45_;
			ValaCCodeDeclarator* _tmp46_;
			_tmp39_ = _decl_index;
			_decl_index = _tmp39_ + 1;
			_tmp40_ = _decl_index;
			_tmp41_ = _decl_size;
			if (!(_tmp40_ < _tmp41_)) {
				break;
			}
			_tmp42_ = _decl_list;
			_tmp43_ = _decl_index;
			_tmp44_ = vala_list_get (_tmp42_, _tmp43_);
			decl = (ValaCCodeDeclarator*) _tmp44_;
			_tmp45_ = first;
			if (!_tmp45_) {
				vala_ccode_writer_write_string (writer, ", ");
			} else {
				first = FALSE;
			}
			_tmp46_ = decl;
			vala_ccode_node_write_declaration ((ValaCCodeNode*) _tmp46_, writer);
			_vala_ccode_node_unref0 (decl);
		}
		_vala_iterable_unref0 (_decl_list);
	}
	_tmp47_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) self);
	_tmp48_ = _tmp47_;
	if ((_tmp48_ & VALA_CCODE_MODIFIERS_DEPRECATED) == VALA_CCODE_MODIFIERS_DEPRECATED) {
		vala_ccode_writer_write_string (writer, " G_GNUC_DEPRECATED");
	}
	vala_ccode_writer_write_string (writer, ";");
	vala_ccode_writer_write_newline (writer);
}


const gchar*
vala_ccode_declaration_get_type_name (ValaCCodeDeclaration* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_type_name;
	result = _tmp0_;
	return result;
}


void
vala_ccode_declaration_set_type_name (ValaCCodeDeclaration* self,
                                      const gchar* value)
{
	gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_g_free0 (self->priv->_type_name);
	self->priv->_type_name = _tmp0_;
}


static void
vala_ccode_declaration_class_init (ValaCCodeDeclarationClass * klass)
{
	vala_ccode_declaration_parent_class = g_type_class_peek_parent (klass);
	((ValaCCodeNodeClass *) klass)->finalize = vala_ccode_declaration_finalize;
	g_type_class_add_private (klass, sizeof (ValaCCodeDeclarationPrivate));
	((ValaCCodeNodeClass *) klass)->write = (void (*) (ValaCCodeNode *, ValaCCodeWriter*)) vala_ccode_declaration_real_write;
	((ValaCCodeNodeClass *) klass)->write_declaration = (void (*) (ValaCCodeNode *, ValaCCodeWriter*)) vala_ccode_declaration_real_write_declaration;
}


static void
vala_ccode_declaration_instance_init (ValaCCodeDeclaration * self)
{
	GEqualFunc _tmp0_;
	ValaArrayList* _tmp1_;
	self->priv = VALA_CCODE_DECLARATION_GET_PRIVATE (self);
	_tmp0_ = g_direct_equal;
	_tmp1_ = vala_array_list_new (VALA_TYPE_CCODE_DECLARATOR, (GBoxedCopyFunc) vala_ccode_node_ref, (GDestroyNotify) vala_ccode_node_unref, _tmp0_);
	self->priv->declarators = (ValaList*) _tmp1_;
}


static void
vala_ccode_declaration_finalize (ValaCCodeNode * obj)
{
	ValaCCodeDeclaration * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_CCODE_DECLARATION, ValaCCodeDeclaration);
	_g_free0 (self->priv->_type_name);
	_vala_iterable_unref0 (self->priv->declarators);
	VALA_CCODE_NODE_CLASS (vala_ccode_declaration_parent_class)->finalize (obj);
}


/**
 * Represents a local variable declaration in the C code.
 */
GType
vala_ccode_declaration_get_type (void)
{
	static volatile gsize vala_ccode_declaration_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_declaration_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeDeclarationClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_declaration_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeDeclaration), 0, (GInstanceInitFunc) vala_ccode_declaration_instance_init, NULL };
		GType vala_ccode_declaration_type_id;
		vala_ccode_declaration_type_id = g_type_register_static (VALA_TYPE_CCODE_STATEMENT, "ValaCCodeDeclaration", &g_define_type_info, 0);
		g_once_init_leave (&vala_ccode_declaration_type_id__volatile, vala_ccode_declaration_type_id);
	}
	return vala_ccode_declaration_type_id__volatile;
}



