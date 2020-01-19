/* propertybindingtype.c generated by valac, the Vala compiler
 * generated from propertybindingtype.vala, do not modify */

/* propertybindingtype.vala
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
#include <stdlib.h>
#include <string.h>






const gchar*
valadoc_api_property_binding_type_to_string (ValadocApiPropertyBindingType self)
{
	const gchar* result = NULL;
	switch (self) {
		case VALADOC_API_PROPERTY_BINDING_TYPE_OVERRIDE:
		{
			result = "override";
			return result;
		}
		case VALADOC_API_PROPERTY_BINDING_TYPE_ABSTRACT:
		{
			result = "abstract";
			return result;
		}
		case VALADOC_API_PROPERTY_BINDING_TYPE_VIRTUAL:
		{
			result = "virtual";
			return result;
		}
		case VALADOC_API_PROPERTY_BINDING_TYPE_UNMODIFIED:
		{
			result = "";
			return result;
		}
		default:
		break;
	}
	g_assert_not_reached ();
}


GType
valadoc_api_property_binding_type_get_type (void)
{
	static volatile gsize valadoc_api_property_binding_type_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_api_property_binding_type_type_id__volatile)) {
		static const GEnumValue values[] = {{VALADOC_API_PROPERTY_BINDING_TYPE_UNMODIFIED, "VALADOC_API_PROPERTY_BINDING_TYPE_UNMODIFIED", "unmodified"}, {VALADOC_API_PROPERTY_BINDING_TYPE_OVERRIDE, "VALADOC_API_PROPERTY_BINDING_TYPE_OVERRIDE", "override"}, {VALADOC_API_PROPERTY_BINDING_TYPE_ABSTRACT, "VALADOC_API_PROPERTY_BINDING_TYPE_ABSTRACT", "abstract"}, {VALADOC_API_PROPERTY_BINDING_TYPE_VIRTUAL, "VALADOC_API_PROPERTY_BINDING_TYPE_VIRTUAL", "virtual"}, {0, NULL, NULL}};
		GType valadoc_api_property_binding_type_type_id;
		valadoc_api_property_binding_type_type_id = g_enum_register_static ("ValadocApiPropertyBindingType", values);
		g_once_init_leave (&valadoc_api_property_binding_type_type_id__volatile, valadoc_api_property_binding_type_type_id);
	}
	return valadoc_api_property_binding_type_type_id__volatile;
}



