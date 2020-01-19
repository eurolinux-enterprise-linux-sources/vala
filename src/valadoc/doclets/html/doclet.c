/* doclet.c generated by valac, the Vala compiler
 * generated from doclet.vala, do not modify */

/* doclet.vala
 *
 * Copyright (C) 2008-2012 Florian Brosch
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
#include <valadoc.h>
#include <stdlib.h>
#include <string.h>
#include <glib/gstdio.h>
#include <stdio.h>


#define VALADOC_HTML_TYPE_DOCLET (valadoc_html_doclet_get_type ())
#define VALADOC_HTML_DOCLET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALADOC_HTML_TYPE_DOCLET, ValadocHtmlDoclet))
#define VALADOC_HTML_DOCLET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALADOC_HTML_TYPE_DOCLET, ValadocHtmlDocletClass))
#define VALADOC_HTML_IS_DOCLET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALADOC_HTML_TYPE_DOCLET))
#define VALADOC_HTML_IS_DOCLET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALADOC_HTML_TYPE_DOCLET))
#define VALADOC_HTML_DOCLET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALADOC_HTML_TYPE_DOCLET, ValadocHtmlDocletClass))

typedef struct _ValadocHtmlDoclet ValadocHtmlDoclet;
typedef struct _ValadocHtmlDocletClass ValadocHtmlDocletClass;
typedef struct _ValadocHtmlDocletPrivate ValadocHtmlDocletPrivate;
enum  {
	VALADOC_HTML_DOCLET_0_PROPERTY,
	VALADOC_HTML_DOCLET_NUM_PROPERTIES
};
static GParamSpec* valadoc_html_doclet_properties[VALADOC_HTML_DOCLET_NUM_PROPERTIES];
#define _g_free0(var) (var = (g_free (var), NULL))

#define VALADOC_HTML_DOCLET_TYPE_INDEX_LINK_HELPER (valadoc_html_doclet_index_link_helper_get_type ())
#define VALADOC_HTML_DOCLET_INDEX_LINK_HELPER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALADOC_HTML_DOCLET_TYPE_INDEX_LINK_HELPER, ValadocHtmlDocletIndexLinkHelper))
#define VALADOC_HTML_DOCLET_INDEX_LINK_HELPER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALADOC_HTML_DOCLET_TYPE_INDEX_LINK_HELPER, ValadocHtmlDocletIndexLinkHelperClass))
#define VALADOC_HTML_DOCLET_IS_INDEX_LINK_HELPER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALADOC_HTML_DOCLET_TYPE_INDEX_LINK_HELPER))
#define VALADOC_HTML_DOCLET_IS_INDEX_LINK_HELPER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALADOC_HTML_DOCLET_TYPE_INDEX_LINK_HELPER))
#define VALADOC_HTML_DOCLET_INDEX_LINK_HELPER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALADOC_HTML_DOCLET_TYPE_INDEX_LINK_HELPER, ValadocHtmlDocletIndexLinkHelperClass))

typedef struct _ValadocHtmlDocletIndexLinkHelper ValadocHtmlDocletIndexLinkHelper;
typedef struct _ValadocHtmlDocletIndexLinkHelperClass ValadocHtmlDocletIndexLinkHelperClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _valadoc_markup_writer_unref0(var) ((var == NULL) ? NULL : (var = (valadoc_markup_writer_unref (var), NULL)))
#define _fclose0(var) ((var == NULL) ? NULL : (var = (fclose (var), NULL)))
typedef struct _ValadocHtmlDocletIndexLinkHelperPrivate ValadocHtmlDocletIndexLinkHelperPrivate;
enum  {
	VALADOC_HTML_DOCLET_INDEX_LINK_HELPER_0_PROPERTY,
	VALADOC_HTML_DOCLET_INDEX_LINK_HELPER_NUM_PROPERTIES
};
static GParamSpec* valadoc_html_doclet_index_link_helper_properties[VALADOC_HTML_DOCLET_INDEX_LINK_HELPER_NUM_PROPERTIES];

struct _ValadocHtmlDoclet {
	ValadocHtmlBasicDoclet parent_instance;
	ValadocHtmlDocletPrivate * priv;
};

struct _ValadocHtmlDocletClass {
	ValadocHtmlBasicDocletClass parent_class;
};

struct _ValadocHtmlDocletIndexLinkHelper {
	ValadocHtmlLinkHelper parent_instance;
	ValadocHtmlDocletIndexLinkHelperPrivate * priv;
};

struct _ValadocHtmlDocletIndexLinkHelperClass {
	ValadocHtmlLinkHelperClass parent_class;
};


static gpointer valadoc_html_doclet_parent_class = NULL;
static gpointer valadoc_html_doclet_index_link_helper_parent_class = NULL;

GType valadoc_html_doclet_get_type (void) G_GNUC_CONST;
#define VALADOC_HTML_DOCLET_css_path_package "style.css"
#define VALADOC_HTML_DOCLET_css_path_wiki "../style.css"
#define VALADOC_HTML_DOCLET_css_path "../style.css"
#define VALADOC_HTML_DOCLET_js_path_package "scripts.js"
#define VALADOC_HTML_DOCLET_js_path_wiki "../scripts.js"
#define VALADOC_HTML_DOCLET_js_path "../scripts.js"
static gchar* valadoc_html_doclet_get_real_path (ValadocHtmlDoclet* self,
                                          ValadocApiNode* element);
static void valadoc_html_doclet_real_process (ValadocHtmlBasicDoclet* base,
                                       ValadocSettings* settings,
                                       ValadocApiTree* tree,
                                       ValadocErrorReporter* reporter);
static GType valadoc_html_doclet_index_link_helper_get_type (void) G_GNUC_CONST G_GNUC_UNUSED;
static ValadocHtmlDocletIndexLinkHelper* valadoc_html_doclet_index_link_helper_new (void);
static ValadocHtmlDocletIndexLinkHelper* valadoc_html_doclet_index_link_helper_construct (GType object_type);
static gboolean _vala_string_array_contains (gchar* * stack,
                                      int stack_length,
                                      gchar* needle);
static void valadoc_html_doclet_real_visit_tree (ValadocApiVisitor* base,
                                          ValadocApiTree* tree);
static void valadoc_html_doclet_real_visit_package (ValadocApiVisitor* base,
                                             ValadocApiPackage* package);
static void valadoc_html_doclet_real_visit_namespace (ValadocApiVisitor* base,
                                               ValadocApiNamespace* ns);
static void valadoc_html_doclet_process_node (ValadocHtmlDoclet* self,
                                       ValadocApiNode* node,
                                       gboolean accept_all_children);
static void valadoc_html_doclet_real_visit_interface (ValadocApiVisitor* base,
                                               ValadocApiInterface* item);
static void valadoc_html_doclet_real_visit_class (ValadocApiVisitor* base,
                                           ValadocApiClass* item);
static void valadoc_html_doclet_real_visit_struct (ValadocApiVisitor* base,
                                            ValadocApiStruct* item);
static void valadoc_html_doclet_real_visit_error_domain (ValadocApiVisitor* base,
                                                  ValadocApiErrorDomain* item);
static void valadoc_html_doclet_real_visit_enum (ValadocApiVisitor* base,
                                          ValadocApiEnum* item);
static void valadoc_html_doclet_real_visit_property (ValadocApiVisitor* base,
                                              ValadocApiProperty* item);
static void valadoc_html_doclet_real_visit_constant (ValadocApiVisitor* base,
                                              ValadocApiConstant* item);
static void valadoc_html_doclet_real_visit_field (ValadocApiVisitor* base,
                                           ValadocApiField* item);
static void valadoc_html_doclet_real_visit_error_code (ValadocApiVisitor* base,
                                                ValadocApiErrorCode* item);
static void valadoc_html_doclet_real_visit_enum_value (ValadocApiVisitor* base,
                                                ValadocApiEnumValue* item);
static void valadoc_html_doclet_real_visit_delegate (ValadocApiVisitor* base,
                                              ValadocApiDelegate* item);
static void valadoc_html_doclet_real_visit_signal (ValadocApiVisitor* base,
                                            ValadocApiSignal* item);
static void valadoc_html_doclet_real_visit_method (ValadocApiVisitor* base,
                                            ValadocApiMethod* item);
ValadocHtmlDoclet* valadoc_html_doclet_new (void);
ValadocHtmlDoclet* valadoc_html_doclet_construct (GType object_type);
static gchar* valadoc_html_doclet_index_link_helper_real_from_wiki_to_package (ValadocHtmlLinkHelper* base,
                                                                        ValadocWikiPage* from,
                                                                        ValadocApiPackage* to);
static gchar* valadoc_html_doclet_index_link_helper_real_from_wiki_to_wiki (ValadocHtmlLinkHelper* base,
                                                                     ValadocWikiPage* from,
                                                                     ValadocWikiPage* to);
static gchar* valadoc_html_doclet_index_link_helper_real_from_wiki_to_node (ValadocHtmlLinkHelper* base,
                                                                     ValadocWikiPage* from,
                                                                     ValadocApiNode* to);
GType register_plugin (ValadocModuleLoader* module_loader);


static gchar*
valadoc_html_doclet_get_real_path (ValadocHtmlDoclet* self,
                                   ValadocApiNode* element)
{
	gchar* result = NULL;
	ValadocSettings* _tmp0_;
	ValadocSettings* _tmp1_;
	const gchar* _tmp2_;
	ValadocApiPackage* _tmp3_;
	ValadocApiPackage* _tmp4_;
	const gchar* _tmp5_;
	const gchar* _tmp6_;
	gchar* _tmp7_;
	gchar* _tmp8_;
	gchar* _tmp9_;
	gchar* _tmp10_;
	gchar* _tmp11_;
	gchar* _tmp12_;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (element != NULL, NULL);
	_tmp0_ = valadoc_html_basic_doclet_get_settings ((ValadocHtmlBasicDoclet*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = _tmp1_->path;
	_tmp3_ = valadoc_documentation_get_package ((ValadocDocumentation*) element);
	_tmp4_ = _tmp3_;
	_tmp5_ = valadoc_api_node_get_name ((ValadocApiNode*) _tmp4_);
	_tmp6_ = _tmp5_;
	_tmp7_ = valadoc_api_node_get_full_name (element);
	_tmp8_ = _tmp7_;
	_tmp9_ = g_strconcat (_tmp8_, ".html", NULL);
	_tmp10_ = _tmp9_;
	_tmp11_ = g_build_filename (_tmp2_, _tmp6_, _tmp10_, NULL);
	_tmp12_ = _tmp11_;
	_g_free0 (_tmp10_);
	_g_free0 (_tmp8_);
	result = _tmp12_;
	return result;
}


static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}


static gboolean
_vala_string_array_contains (gchar* * stack,
                             int stack_length,
                             gchar* needle)
{
	int i;
	for (i = 0; i < stack_length; i++) {
		if (g_strcmp0 (stack[i], needle) == 0) {
			return TRUE;
		}
	}
	return FALSE;
}


static void
valadoc_html_doclet_real_process (ValadocHtmlBasicDoclet* base,
                                  ValadocSettings* settings,
                                  ValadocApiTree* tree,
                                  ValadocErrorReporter* reporter)
{
	ValadocHtmlDoclet * self;
	ValadocSettings* _tmp0_;
	ValadocSettings* _tmp1_;
	const gchar* _tmp2_;
	const gchar* _tmp3_;
	const gchar* _tmp4_;
	const gchar* _tmp5_;
	gchar* _tmp6_;
	gchar* _tmp7_;
	ValadocHtmlHtmlRenderer* tmp = NULL;
	ValadocHtmlHtmlRenderer* _tmp8_;
	ValadocHtmlHtmlRenderer* _tmp9_;
	ValadocHtmlDocletIndexLinkHelper* link_helper = NULL;
	ValadocHtmlDocletIndexLinkHelper* _tmp10_;
	gboolean _tmp11_ = FALSE;
	gchar** _tmp12_;
	gint _tmp12__length1;
	ValadocHtmlDocletIndexLinkHelper* _tmp15_;
	ValadocHtmlCssClassResolver* _tmp16_;
	ValadocHtmlHtmlRenderer* _tmp17_;
	FILE* file = NULL;
	const gchar* _tmp18_;
	gchar* _tmp19_;
	gchar* _tmp20_;
	FILE* _tmp21_;
	FILE* _tmp22_;
	FILE* _tmp23_;
	ValadocHtmlMarkupWriter* _tmp24_;
	ValadocHtmlHtmlRenderer* _tmp25_;
	ValadocHtmlMarkupWriter* _tmp26_;
	const gchar* _tmp27_;
	ValadocHtmlHtmlRenderer* _tmp28_;
	ValadocHtmlHtmlRenderer* _tmp29_;
	self = (ValadocHtmlDoclet*) base;
	g_return_if_fail (settings != NULL);
	g_return_if_fail (tree != NULL);
	g_return_if_fail (reporter != NULL);
	VALADOC_HTML_BASIC_DOCLET_CLASS (valadoc_html_doclet_parent_class)->process (G_TYPE_CHECK_INSTANCE_CAST (self, VALADOC_HTML_TYPE_BASIC_DOCLET, ValadocHtmlBasicDoclet), settings, tree, reporter);
	_tmp0_ = valadoc_html_basic_doclet_get_settings ((ValadocHtmlBasicDoclet*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = _tmp1_->path;
	g_mkdir_with_parents (_tmp2_, 0777);
	_tmp3_ = settings->path;
	valadoc_copy_directory (PACKAGE_ICONDIR, _tmp3_);
	_tmp4_ = settings->path;
	_tmp5_ = settings->pkg_name;
	_tmp6_ = g_build_filename (_tmp4_, _tmp5_, NULL);
	_tmp7_ = _tmp6_;
	valadoc_html_basic_doclet_write_wiki_pages ((ValadocHtmlBasicDoclet*) self, tree, VALADOC_HTML_DOCLET_css_path_wiki, VALADOC_HTML_DOCLET_js_path_wiki, _tmp7_);
	_g_free0 (_tmp7_);
	_tmp8_ = ((ValadocHtmlBasicDoclet*) self)->_renderer;
	_tmp9_ = _g_object_ref0 (_tmp8_);
	tmp = _tmp9_;
	_tmp10_ = valadoc_html_doclet_index_link_helper_new ();
	link_helper = _tmp10_;
	_tmp12_ = settings->pluginargs;
	_tmp12__length1 = settings->pluginargs_length1;
	if (_tmp12_ != NULL) {
		gchar** _tmp13_;
		gint _tmp13__length1;
		_tmp13_ = settings->pluginargs;
		_tmp13__length1 = settings->pluginargs_length1;
		_tmp11_ = _vala_string_array_contains (_tmp13_, _tmp13__length1, "--no-browsable-check");
	} else {
		_tmp11_ = FALSE;
	}
	if (_tmp11_) {
		ValadocHtmlDocletIndexLinkHelper* _tmp14_;
		_tmp14_ = link_helper;
		valadoc_html_link_helper_set_enable_browsable_check ((ValadocHtmlLinkHelper*) _tmp14_, FALSE);
	}
	_tmp15_ = link_helper;
	_tmp16_ = ((ValadocHtmlBasicDoclet*) self)->cssresolver;
	_tmp17_ = valadoc_html_html_renderer_new (settings, (ValadocHtmlLinkHelper*) _tmp15_, _tmp16_);
	_g_object_unref0 (((ValadocHtmlBasicDoclet*) self)->_renderer);
	((ValadocHtmlBasicDoclet*) self)->_renderer = _tmp17_;
	_tmp18_ = settings->path;
	_tmp19_ = g_build_filename (_tmp18_, "index.html", NULL);
	_tmp20_ = _tmp19_;
	_tmp21_ = g_fopen (_tmp20_, "w");
	_tmp22_ = _tmp21_;
	_g_free0 (_tmp20_);
	file = _tmp22_;
	_tmp23_ = file;
	_tmp24_ = valadoc_html_markup_writer_new (_tmp23_, TRUE);
	_valadoc_markup_writer_unref0 (((ValadocHtmlBasicDoclet*) self)->writer);
	((ValadocHtmlBasicDoclet*) self)->writer = _tmp24_;
	_tmp25_ = ((ValadocHtmlBasicDoclet*) self)->_renderer;
	_tmp26_ = ((ValadocHtmlBasicDoclet*) self)->writer;
	valadoc_html_html_renderer_set_writer (_tmp25_, _tmp26_);
	_tmp27_ = settings->pkg_name;
	valadoc_html_basic_doclet_write_file_header ((ValadocHtmlBasicDoclet*) self, VALADOC_HTML_DOCLET_css_path_package, VALADOC_HTML_DOCLET_js_path_package, _tmp27_);
	valadoc_html_basic_doclet_write_navi_packages ((ValadocHtmlBasicDoclet*) self, tree);
	valadoc_html_basic_doclet_write_package_index_content ((ValadocHtmlBasicDoclet*) self, tree);
	valadoc_html_basic_doclet_write_file_footer ((ValadocHtmlBasicDoclet*) self);
	_tmp28_ = tmp;
	_tmp29_ = _g_object_ref0 (_tmp28_);
	_g_object_unref0 (((ValadocHtmlBasicDoclet*) self)->_renderer);
	((ValadocHtmlBasicDoclet*) self)->_renderer = _tmp29_;
	_fclose0 (file);
	file = NULL;
	valadoc_api_tree_accept (tree, (ValadocApiVisitor*) self);
	_fclose0 (file);
	_g_object_unref0 (link_helper);
	_g_object_unref0 (tmp);
}


static void
valadoc_html_doclet_real_visit_tree (ValadocApiVisitor* base,
                                     ValadocApiTree* tree)
{
	ValadocHtmlDoclet * self;
	self = (ValadocHtmlDoclet*) base;
	g_return_if_fail (tree != NULL);
	valadoc_api_tree_accept_children (tree, (ValadocApiVisitor*) self);
}


static void
valadoc_html_doclet_real_visit_package (ValadocApiVisitor* base,
                                        ValadocApiPackage* package)
{
	ValadocHtmlDoclet * self;
	ValadocSettings* _tmp0_;
	ValadocSettings* _tmp1_;
	gchar* pkg_name = NULL;
	const gchar* _tmp2_;
	const gchar* _tmp3_;
	gchar* _tmp4_;
	gchar* path = NULL;
	ValadocSettings* _tmp5_;
	ValadocSettings* _tmp6_;
	const gchar* _tmp7_;
	const gchar* _tmp8_;
	gchar* _tmp9_;
	gint rt = 0;
	const gchar* _tmp10_;
	const gchar* _tmp11_;
	gchar* _tmp12_;
	gchar* _tmp13_;
	FILE* file = NULL;
	const gchar* _tmp14_;
	gchar* _tmp15_;
	gchar* _tmp16_;
	FILE* _tmp17_;
	FILE* _tmp18_;
	FILE* _tmp19_;
	ValadocHtmlMarkupWriter* _tmp20_;
	ValadocHtmlHtmlRenderer* _tmp21_;
	ValadocHtmlMarkupWriter* _tmp22_;
	const gchar* _tmp23_;
	self = (ValadocHtmlDoclet*) base;
	g_return_if_fail (package != NULL);
	_tmp0_ = valadoc_html_basic_doclet_get_settings ((ValadocHtmlBasicDoclet*) self);
	_tmp1_ = _tmp0_;
	if (!valadoc_api_node_is_browsable ((ValadocApiNode*) package, _tmp1_)) {
		return;
	}
	_tmp2_ = valadoc_api_node_get_name ((ValadocApiNode*) package);
	_tmp3_ = _tmp2_;
	_tmp4_ = g_strdup (_tmp3_);
	pkg_name = _tmp4_;
	_tmp5_ = valadoc_html_basic_doclet_get_settings ((ValadocHtmlBasicDoclet*) self);
	_tmp6_ = _tmp5_;
	_tmp7_ = _tmp6_->path;
	_tmp8_ = pkg_name;
	_tmp9_ = g_build_filename (_tmp7_, _tmp8_, NULL);
	path = _tmp9_;
	_tmp10_ = path;
	rt = g_mkdir (_tmp10_, 0777);
	_tmp11_ = path;
	_tmp12_ = g_build_filename (_tmp11_, "img", NULL);
	_tmp13_ = _tmp12_;
	rt = g_mkdir (_tmp13_, 0777);
	_g_free0 (_tmp13_);
	_tmp14_ = path;
	_tmp15_ = g_build_filename (_tmp14_, "index.htm", NULL);
	_tmp16_ = _tmp15_;
	_tmp17_ = g_fopen (_tmp16_, "w");
	_tmp18_ = _tmp17_;
	_g_free0 (_tmp16_);
	file = _tmp18_;
	_tmp19_ = file;
	_tmp20_ = valadoc_html_markup_writer_new (_tmp19_, TRUE);
	_valadoc_markup_writer_unref0 (((ValadocHtmlBasicDoclet*) self)->writer);
	((ValadocHtmlBasicDoclet*) self)->writer = _tmp20_;
	_tmp21_ = ((ValadocHtmlBasicDoclet*) self)->_renderer;
	_tmp22_ = ((ValadocHtmlBasicDoclet*) self)->writer;
	valadoc_html_html_renderer_set_writer (_tmp21_, _tmp22_);
	_tmp23_ = pkg_name;
	valadoc_html_basic_doclet_write_file_header ((ValadocHtmlBasicDoclet*) self, VALADOC_HTML_DOCLET_css_path, VALADOC_HTML_DOCLET_js_path, _tmp23_);
	valadoc_html_basic_doclet_write_navi_package ((ValadocHtmlBasicDoclet*) self, package);
	valadoc_html_basic_doclet_write_package_content ((ValadocHtmlBasicDoclet*) self, package, (ValadocApiNode*) package);
	valadoc_html_basic_doclet_write_file_footer ((ValadocHtmlBasicDoclet*) self);
	_fclose0 (file);
	file = NULL;
	valadoc_api_node_accept_all_children ((ValadocApiNode*) package, (ValadocApiVisitor*) self, TRUE);
	_fclose0 (file);
	_g_free0 (path);
	_g_free0 (pkg_name);
}


static void
valadoc_html_doclet_real_visit_namespace (ValadocApiVisitor* base,
                                          ValadocApiNamespace* ns)
{
	ValadocHtmlDoclet * self;
	gchar* rpath = NULL;
	gchar* _tmp0_;
	const gchar* _tmp1_;
	const gchar* _tmp2_;
	self = (ValadocHtmlDoclet*) base;
	g_return_if_fail (ns != NULL);
	_tmp0_ = valadoc_html_doclet_get_real_path (self, (ValadocApiNode*) ns);
	rpath = _tmp0_;
	_tmp1_ = valadoc_api_node_get_name ((ValadocApiNode*) ns);
	_tmp2_ = _tmp1_;
	if (_tmp2_ != NULL) {
		FILE* file = NULL;
		const gchar* _tmp3_;
		FILE* _tmp4_;
		FILE* _tmp5_;
		ValadocHtmlMarkupWriter* _tmp6_;
		ValadocHtmlHtmlRenderer* _tmp7_;
		ValadocHtmlMarkupWriter* _tmp8_;
		gchar* _tmp9_;
		gchar* _tmp10_;
		gchar* _tmp11_;
		gchar* _tmp12_;
		ValadocApiPackage* _tmp13_;
		ValadocApiPackage* _tmp14_;
		const gchar* _tmp15_;
		const gchar* _tmp16_;
		gchar* _tmp17_;
		gchar* _tmp18_;
		_tmp3_ = rpath;
		_tmp4_ = g_fopen (_tmp3_, "w");
		file = _tmp4_;
		_tmp5_ = file;
		_tmp6_ = valadoc_html_markup_writer_new (_tmp5_, TRUE);
		_valadoc_markup_writer_unref0 (((ValadocHtmlBasicDoclet*) self)->writer);
		((ValadocHtmlBasicDoclet*) self)->writer = _tmp6_;
		_tmp7_ = ((ValadocHtmlBasicDoclet*) self)->_renderer;
		_tmp8_ = ((ValadocHtmlBasicDoclet*) self)->writer;
		valadoc_html_html_renderer_set_writer (_tmp7_, _tmp8_);
		_tmp9_ = valadoc_api_node_get_full_name ((ValadocApiNode*) ns);
		_tmp10_ = _tmp9_;
		_tmp11_ = g_strconcat (_tmp10_, " &ndash; ", NULL);
		_tmp12_ = _tmp11_;
		_tmp13_ = valadoc_documentation_get_package ((ValadocDocumentation*) ns);
		_tmp14_ = _tmp13_;
		_tmp15_ = valadoc_api_node_get_name ((ValadocApiNode*) _tmp14_);
		_tmp16_ = _tmp15_;
		_tmp17_ = g_strconcat (_tmp12_, _tmp16_, NULL);
		_tmp18_ = _tmp17_;
		valadoc_html_basic_doclet_write_file_header ((ValadocHtmlBasicDoclet*) self, VALADOC_HTML_DOCLET_css_path, VALADOC_HTML_DOCLET_js_path, _tmp18_);
		_g_free0 (_tmp18_);
		_g_free0 (_tmp12_);
		_g_free0 (_tmp10_);
		valadoc_html_basic_doclet_write_navi_symbol ((ValadocHtmlBasicDoclet*) self, (ValadocApiNode*) ns);
		valadoc_html_basic_doclet_write_namespace_content ((ValadocHtmlBasicDoclet*) self, ns, (ValadocApiNode*) ns);
		valadoc_html_basic_doclet_write_file_footer ((ValadocHtmlBasicDoclet*) self);
		_fclose0 (file);
		file = NULL;
		_fclose0 (file);
	}
	valadoc_api_node_accept_all_children ((ValadocApiNode*) ns, (ValadocApiVisitor*) self, TRUE);
	_g_free0 (rpath);
}


static void
valadoc_html_doclet_process_node (ValadocHtmlDoclet* self,
                                  ValadocApiNode* node,
                                  gboolean accept_all_children)
{
	gchar* rpath = NULL;
	gchar* _tmp0_;
	FILE* file = NULL;
	const gchar* _tmp1_;
	FILE* _tmp2_;
	FILE* _tmp3_;
	ValadocHtmlMarkupWriter* _tmp4_;
	ValadocHtmlHtmlRenderer* _tmp5_;
	ValadocHtmlMarkupWriter* _tmp6_;
	gchar* _tmp7_;
	gchar* _tmp8_;
	gchar* _tmp9_;
	gchar* _tmp10_;
	ValadocApiPackage* _tmp11_;
	ValadocApiPackage* _tmp12_;
	const gchar* _tmp13_;
	const gchar* _tmp14_;
	gchar* _tmp15_;
	gchar* _tmp16_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (node != NULL);
	_tmp0_ = valadoc_html_doclet_get_real_path (self, node);
	rpath = _tmp0_;
	_tmp1_ = rpath;
	_tmp2_ = g_fopen (_tmp1_, "w");
	file = _tmp2_;
	_tmp3_ = file;
	_tmp4_ = valadoc_html_markup_writer_new (_tmp3_, TRUE);
	_valadoc_markup_writer_unref0 (((ValadocHtmlBasicDoclet*) self)->writer);
	((ValadocHtmlBasicDoclet*) self)->writer = _tmp4_;
	_tmp5_ = ((ValadocHtmlBasicDoclet*) self)->_renderer;
	_tmp6_ = ((ValadocHtmlBasicDoclet*) self)->writer;
	valadoc_html_html_renderer_set_writer (_tmp5_, _tmp6_);
	_tmp7_ = valadoc_api_node_get_full_name (node);
	_tmp8_ = _tmp7_;
	_tmp9_ = g_strconcat (_tmp8_, " &ndash; ", NULL);
	_tmp10_ = _tmp9_;
	_tmp11_ = valadoc_documentation_get_package ((ValadocDocumentation*) node);
	_tmp12_ = _tmp11_;
	_tmp13_ = valadoc_api_node_get_name ((ValadocApiNode*) _tmp12_);
	_tmp14_ = _tmp13_;
	_tmp15_ = g_strconcat (_tmp10_, _tmp14_, NULL);
	_tmp16_ = _tmp15_;
	valadoc_html_basic_doclet_write_file_header ((ValadocHtmlBasicDoclet*) self, VALADOC_HTML_DOCLET_css_path, VALADOC_HTML_DOCLET_js_path, _tmp16_);
	_g_free0 (_tmp16_);
	_g_free0 (_tmp10_);
	_g_free0 (_tmp8_);
	if (valadoc_html_basic_doclet_is_internal_node ((ValadocHtmlBasicDoclet*) self, node)) {
		valadoc_html_basic_doclet_write_navi_symbol ((ValadocHtmlBasicDoclet*) self, node);
	} else {
		valadoc_html_basic_doclet_write_navi_leaf_symbol ((ValadocHtmlBasicDoclet*) self, node);
	}
	valadoc_html_basic_doclet_write_symbol_content ((ValadocHtmlBasicDoclet*) self, node);
	valadoc_html_basic_doclet_write_file_footer ((ValadocHtmlBasicDoclet*) self);
	_fclose0 (file);
	file = NULL;
	if (accept_all_children) {
		valadoc_api_node_accept_all_children (node, (ValadocApiVisitor*) self, TRUE);
	}
	_fclose0 (file);
	_g_free0 (rpath);
}


static void
valadoc_html_doclet_real_visit_interface (ValadocApiVisitor* base,
                                          ValadocApiInterface* item)
{
	ValadocHtmlDoclet * self;
	self = (ValadocHtmlDoclet*) base;
	g_return_if_fail (item != NULL);
	valadoc_html_doclet_process_node (self, (ValadocApiNode*) item, TRUE);
}


static void
valadoc_html_doclet_real_visit_class (ValadocApiVisitor* base,
                                      ValadocApiClass* item)
{
	ValadocHtmlDoclet * self;
	self = (ValadocHtmlDoclet*) base;
	g_return_if_fail (item != NULL);
	valadoc_html_doclet_process_node (self, (ValadocApiNode*) item, TRUE);
}


static void
valadoc_html_doclet_real_visit_struct (ValadocApiVisitor* base,
                                       ValadocApiStruct* item)
{
	ValadocHtmlDoclet * self;
	self = (ValadocHtmlDoclet*) base;
	g_return_if_fail (item != NULL);
	valadoc_html_doclet_process_node (self, (ValadocApiNode*) item, TRUE);
}


static void
valadoc_html_doclet_real_visit_error_domain (ValadocApiVisitor* base,
                                             ValadocApiErrorDomain* item)
{
	ValadocHtmlDoclet * self;
	self = (ValadocHtmlDoclet*) base;
	g_return_if_fail (item != NULL);
	valadoc_html_doclet_process_node (self, (ValadocApiNode*) item, TRUE);
}


static void
valadoc_html_doclet_real_visit_enum (ValadocApiVisitor* base,
                                     ValadocApiEnum* item)
{
	ValadocHtmlDoclet * self;
	self = (ValadocHtmlDoclet*) base;
	g_return_if_fail (item != NULL);
	valadoc_html_doclet_process_node (self, (ValadocApiNode*) item, TRUE);
}


static void
valadoc_html_doclet_real_visit_property (ValadocApiVisitor* base,
                                         ValadocApiProperty* item)
{
	ValadocHtmlDoclet * self;
	self = (ValadocHtmlDoclet*) base;
	g_return_if_fail (item != NULL);
	valadoc_html_doclet_process_node (self, (ValadocApiNode*) item, FALSE);
}


static void
valadoc_html_doclet_real_visit_constant (ValadocApiVisitor* base,
                                         ValadocApiConstant* item)
{
	ValadocHtmlDoclet * self;
	self = (ValadocHtmlDoclet*) base;
	g_return_if_fail (item != NULL);
	valadoc_html_doclet_process_node (self, (ValadocApiNode*) item, FALSE);
}


static void
valadoc_html_doclet_real_visit_field (ValadocApiVisitor* base,
                                      ValadocApiField* item)
{
	ValadocHtmlDoclet * self;
	self = (ValadocHtmlDoclet*) base;
	g_return_if_fail (item != NULL);
	valadoc_html_doclet_process_node (self, (ValadocApiNode*) item, FALSE);
}


static void
valadoc_html_doclet_real_visit_error_code (ValadocApiVisitor* base,
                                           ValadocApiErrorCode* item)
{
	ValadocHtmlDoclet * self;
	self = (ValadocHtmlDoclet*) base;
	g_return_if_fail (item != NULL);
	valadoc_html_doclet_process_node (self, (ValadocApiNode*) item, FALSE);
}


static void
valadoc_html_doclet_real_visit_enum_value (ValadocApiVisitor* base,
                                           ValadocApiEnumValue* item)
{
	ValadocHtmlDoclet * self;
	self = (ValadocHtmlDoclet*) base;
	g_return_if_fail (item != NULL);
	valadoc_html_doclet_process_node (self, (ValadocApiNode*) item, FALSE);
}


static void
valadoc_html_doclet_real_visit_delegate (ValadocApiVisitor* base,
                                         ValadocApiDelegate* item)
{
	ValadocHtmlDoclet * self;
	self = (ValadocHtmlDoclet*) base;
	g_return_if_fail (item != NULL);
	valadoc_html_doclet_process_node (self, (ValadocApiNode*) item, FALSE);
}


static void
valadoc_html_doclet_real_visit_signal (ValadocApiVisitor* base,
                                       ValadocApiSignal* item)
{
	ValadocHtmlDoclet * self;
	self = (ValadocHtmlDoclet*) base;
	g_return_if_fail (item != NULL);
	valadoc_html_doclet_process_node (self, (ValadocApiNode*) item, FALSE);
}


static void
valadoc_html_doclet_real_visit_method (ValadocApiVisitor* base,
                                       ValadocApiMethod* item)
{
	ValadocHtmlDoclet * self;
	self = (ValadocHtmlDoclet*) base;
	g_return_if_fail (item != NULL);
	valadoc_html_doclet_process_node (self, (ValadocApiNode*) item, FALSE);
}


ValadocHtmlDoclet*
valadoc_html_doclet_construct (GType object_type)
{
	ValadocHtmlDoclet * self = NULL;
	self = (ValadocHtmlDoclet*) valadoc_html_basic_doclet_construct (object_type);
	return self;
}


ValadocHtmlDoclet*
valadoc_html_doclet_new (void)
{
	return valadoc_html_doclet_construct (VALADOC_HTML_TYPE_DOCLET);
}


static gchar*
valadoc_html_doclet_index_link_helper_real_from_wiki_to_package (ValadocHtmlLinkHelper* base,
                                                                 ValadocWikiPage* from,
                                                                 ValadocApiPackage* to)
{
	ValadocHtmlDocletIndexLinkHelper * self;
	gchar* result = NULL;
	const gchar* _tmp0_;
	const gchar* _tmp1_;
	const gchar* _tmp3_;
	const gchar* _tmp4_;
	const gchar* _tmp5_;
	const gchar* _tmp6_;
	gchar* _tmp7_;
	gchar* _tmp8_;
	gchar* _tmp9_;
	gchar* _tmp10_;
	self = (ValadocHtmlDocletIndexLinkHelper*) base;
	g_return_val_if_fail (from != NULL, NULL);
	g_return_val_if_fail (to != NULL, NULL);
	_tmp0_ = valadoc_wiki_page_get_name (from);
	_tmp1_ = _tmp0_;
	if (g_strcmp0 (_tmp1_, "index.valadoc") != 0) {
		gchar* _tmp2_;
		_tmp2_ = VALADOC_HTML_LINK_HELPER_CLASS (valadoc_html_doclet_index_link_helper_parent_class)->from_wiki_to_package (G_TYPE_CHECK_INSTANCE_CAST (self, VALADOC_HTML_TYPE_LINK_HELPER, ValadocHtmlLinkHelper), from, to);
		result = _tmp2_;
		return result;
	}
	_tmp3_ = valadoc_api_node_get_name ((ValadocApiNode*) to);
	_tmp4_ = _tmp3_;
	_tmp5_ = valadoc_api_node_get_name ((ValadocApiNode*) to);
	_tmp6_ = _tmp5_;
	_tmp7_ = g_strconcat (_tmp6_, ".htm", NULL);
	_tmp8_ = _tmp7_;
	_tmp9_ = g_build_filename (_tmp4_, _tmp8_, NULL);
	_tmp10_ = _tmp9_;
	_g_free0 (_tmp8_);
	result = _tmp10_;
	return result;
}


static gchar*
valadoc_html_doclet_index_link_helper_real_from_wiki_to_wiki (ValadocHtmlLinkHelper* base,
                                                              ValadocWikiPage* from,
                                                              ValadocWikiPage* to)
{
	ValadocHtmlDocletIndexLinkHelper * self;
	gchar* result = NULL;
	const gchar* _tmp0_;
	const gchar* _tmp1_;
	ValadocSettings* _tmp3_;
	const gchar* _tmp4_;
	gchar* _tmp5_;
	gchar* _tmp6_;
	gchar* _tmp7_;
	gchar* _tmp8_;
	self = (ValadocHtmlDocletIndexLinkHelper*) base;
	g_return_val_if_fail (from != NULL, NULL);
	g_return_val_if_fail (to != NULL, NULL);
	_tmp0_ = valadoc_wiki_page_get_name (from);
	_tmp1_ = _tmp0_;
	if (g_strcmp0 (_tmp1_, "index.valadoc") != 0) {
		gchar* _tmp2_;
		_tmp2_ = VALADOC_HTML_LINK_HELPER_CLASS (valadoc_html_doclet_index_link_helper_parent_class)->from_wiki_to_wiki (G_TYPE_CHECK_INSTANCE_CAST (self, VALADOC_HTML_TYPE_LINK_HELPER, ValadocHtmlLinkHelper), from, to);
		result = _tmp2_;
		return result;
	}
	_tmp3_ = ((ValadocHtmlLinkHelper*) self)->_settings;
	_tmp4_ = _tmp3_->pkg_name;
	_tmp5_ = valadoc_html_link_helper_translate_wiki_name ((ValadocHtmlLinkHelper*) self, to);
	_tmp6_ = _tmp5_;
	_tmp7_ = g_build_filename (_tmp4_, _tmp6_, NULL);
	_tmp8_ = _tmp7_;
	_g_free0 (_tmp6_);
	result = _tmp8_;
	return result;
}


static gchar*
valadoc_html_doclet_index_link_helper_real_from_wiki_to_node (ValadocHtmlLinkHelper* base,
                                                              ValadocWikiPage* from,
                                                              ValadocApiNode* to)
{
	ValadocHtmlDocletIndexLinkHelper * self;
	gchar* result = NULL;
	const gchar* _tmp0_;
	const gchar* _tmp1_;
	gboolean _tmp3_ = FALSE;
	gboolean _tmp4_;
	gboolean _tmp5_;
	ValadocApiPackage* _tmp11_;
	ValadocApiPackage* _tmp12_;
	const gchar* _tmp13_;
	const gchar* _tmp14_;
	gchar* _tmp15_;
	gchar* _tmp16_;
	gchar* _tmp17_;
	gchar* _tmp18_;
	gchar* _tmp19_;
	gchar* _tmp20_;
	self = (ValadocHtmlDocletIndexLinkHelper*) base;
	g_return_val_if_fail (from != NULL, NULL);
	g_return_val_if_fail (to != NULL, NULL);
	_tmp0_ = valadoc_wiki_page_get_name (from);
	_tmp1_ = _tmp0_;
	if (g_strcmp0 (_tmp1_, "index.valadoc") != 0) {
		gchar* _tmp2_;
		_tmp2_ = VALADOC_HTML_LINK_HELPER_CLASS (valadoc_html_doclet_index_link_helper_parent_class)->from_wiki_to_node (G_TYPE_CHECK_INSTANCE_CAST (self, VALADOC_HTML_TYPE_LINK_HELPER, ValadocHtmlLinkHelper), from, to);
		result = _tmp2_;
		return result;
	}
	_tmp4_ = valadoc_html_link_helper_get_enable_browsable_check ((ValadocHtmlLinkHelper*) self);
	_tmp5_ = _tmp4_;
	if (_tmp5_) {
		gboolean _tmp6_ = FALSE;
		ValadocSettings* _tmp7_;
		_tmp7_ = ((ValadocHtmlLinkHelper*) self)->_settings;
		if (!valadoc_api_node_is_browsable (to, _tmp7_)) {
			_tmp6_ = TRUE;
		} else {
			ValadocApiPackage* _tmp8_;
			ValadocApiPackage* _tmp9_;
			ValadocSettings* _tmp10_;
			_tmp8_ = valadoc_documentation_get_package ((ValadocDocumentation*) to);
			_tmp9_ = _tmp8_;
			_tmp10_ = ((ValadocHtmlLinkHelper*) self)->_settings;
			_tmp6_ = !valadoc_api_node_is_browsable ((ValadocApiNode*) _tmp9_, _tmp10_);
		}
		_tmp3_ = _tmp6_;
	} else {
		_tmp3_ = FALSE;
	}
	if (_tmp3_) {
		result = NULL;
		return result;
	}
	_tmp11_ = valadoc_documentation_get_package ((ValadocDocumentation*) to);
	_tmp12_ = _tmp11_;
	_tmp13_ = valadoc_api_node_get_name ((ValadocApiNode*) _tmp12_);
	_tmp14_ = _tmp13_;
	_tmp15_ = valadoc_api_node_get_full_name (to);
	_tmp16_ = _tmp15_;
	_tmp17_ = g_strconcat (_tmp16_, ".html", NULL);
	_tmp18_ = _tmp17_;
	_tmp19_ = g_build_filename (_tmp14_, _tmp18_, NULL);
	_tmp20_ = _tmp19_;
	_g_free0 (_tmp18_);
	_g_free0 (_tmp16_);
	result = _tmp20_;
	return result;
}


static ValadocHtmlDocletIndexLinkHelper*
valadoc_html_doclet_index_link_helper_construct (GType object_type)
{
	ValadocHtmlDocletIndexLinkHelper * self = NULL;
	self = (ValadocHtmlDocletIndexLinkHelper*) valadoc_html_link_helper_construct (object_type);
	return self;
}


static ValadocHtmlDocletIndexLinkHelper*
valadoc_html_doclet_index_link_helper_new (void)
{
	return valadoc_html_doclet_index_link_helper_construct (VALADOC_HTML_DOCLET_TYPE_INDEX_LINK_HELPER);
}


static void
valadoc_html_doclet_index_link_helper_class_init (ValadocHtmlDocletIndexLinkHelperClass * klass)
{
	valadoc_html_doclet_index_link_helper_parent_class = g_type_class_peek_parent (klass);
	((ValadocHtmlLinkHelperClass *) klass)->from_wiki_to_package = (gchar* (*) (ValadocHtmlLinkHelper *, ValadocWikiPage*, ValadocApiPackage*)) valadoc_html_doclet_index_link_helper_real_from_wiki_to_package;
	((ValadocHtmlLinkHelperClass *) klass)->from_wiki_to_wiki = (gchar* (*) (ValadocHtmlLinkHelper *, ValadocWikiPage*, ValadocWikiPage*)) valadoc_html_doclet_index_link_helper_real_from_wiki_to_wiki;
	((ValadocHtmlLinkHelperClass *) klass)->from_wiki_to_node = (gchar* (*) (ValadocHtmlLinkHelper *, ValadocWikiPage*, ValadocApiNode*)) valadoc_html_doclet_index_link_helper_real_from_wiki_to_node;
}


static void
valadoc_html_doclet_index_link_helper_instance_init (ValadocHtmlDocletIndexLinkHelper * self)
{
}


static GType
valadoc_html_doclet_index_link_helper_get_type (void)
{
	static volatile gsize valadoc_html_doclet_index_link_helper_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_html_doclet_index_link_helper_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValadocHtmlDocletIndexLinkHelperClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_html_doclet_index_link_helper_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocHtmlDocletIndexLinkHelper), 0, (GInstanceInitFunc) valadoc_html_doclet_index_link_helper_instance_init, NULL };
		GType valadoc_html_doclet_index_link_helper_type_id;
		valadoc_html_doclet_index_link_helper_type_id = g_type_register_static (VALADOC_HTML_TYPE_LINK_HELPER, "ValadocHtmlDocletIndexLinkHelper", &g_define_type_info, 0);
		g_once_init_leave (&valadoc_html_doclet_index_link_helper_type_id__volatile, valadoc_html_doclet_index_link_helper_type_id);
	}
	return valadoc_html_doclet_index_link_helper_type_id__volatile;
}


static void
valadoc_html_doclet_class_init (ValadocHtmlDocletClass * klass)
{
	valadoc_html_doclet_parent_class = g_type_class_peek_parent (klass);
	((ValadocHtmlBasicDocletClass *) klass)->process = (void (*) (ValadocHtmlBasicDoclet *, ValadocSettings*, ValadocApiTree*, ValadocErrorReporter*)) valadoc_html_doclet_real_process;
	((ValadocApiVisitorClass *) klass)->visit_tree = (void (*) (ValadocApiVisitor *, ValadocApiTree*)) valadoc_html_doclet_real_visit_tree;
	((ValadocApiVisitorClass *) klass)->visit_package = (void (*) (ValadocApiVisitor *, ValadocApiPackage*)) valadoc_html_doclet_real_visit_package;
	((ValadocApiVisitorClass *) klass)->visit_namespace = (void (*) (ValadocApiVisitor *, ValadocApiNamespace*)) valadoc_html_doclet_real_visit_namespace;
	((ValadocApiVisitorClass *) klass)->visit_interface = (void (*) (ValadocApiVisitor *, ValadocApiInterface*)) valadoc_html_doclet_real_visit_interface;
	((ValadocApiVisitorClass *) klass)->visit_class = (void (*) (ValadocApiVisitor *, ValadocApiClass*)) valadoc_html_doclet_real_visit_class;
	((ValadocApiVisitorClass *) klass)->visit_struct = (void (*) (ValadocApiVisitor *, ValadocApiStruct*)) valadoc_html_doclet_real_visit_struct;
	((ValadocApiVisitorClass *) klass)->visit_error_domain = (void (*) (ValadocApiVisitor *, ValadocApiErrorDomain*)) valadoc_html_doclet_real_visit_error_domain;
	((ValadocApiVisitorClass *) klass)->visit_enum = (void (*) (ValadocApiVisitor *, ValadocApiEnum*)) valadoc_html_doclet_real_visit_enum;
	((ValadocApiVisitorClass *) klass)->visit_property = (void (*) (ValadocApiVisitor *, ValadocApiProperty*)) valadoc_html_doclet_real_visit_property;
	((ValadocApiVisitorClass *) klass)->visit_constant = (void (*) (ValadocApiVisitor *, ValadocApiConstant*)) valadoc_html_doclet_real_visit_constant;
	((ValadocApiVisitorClass *) klass)->visit_field = (void (*) (ValadocApiVisitor *, ValadocApiField*)) valadoc_html_doclet_real_visit_field;
	((ValadocApiVisitorClass *) klass)->visit_error_code = (void (*) (ValadocApiVisitor *, ValadocApiErrorCode*)) valadoc_html_doclet_real_visit_error_code;
	((ValadocApiVisitorClass *) klass)->visit_enum_value = (void (*) (ValadocApiVisitor *, ValadocApiEnumValue*)) valadoc_html_doclet_real_visit_enum_value;
	((ValadocApiVisitorClass *) klass)->visit_delegate = (void (*) (ValadocApiVisitor *, ValadocApiDelegate*)) valadoc_html_doclet_real_visit_delegate;
	((ValadocApiVisitorClass *) klass)->visit_signal = (void (*) (ValadocApiVisitor *, ValadocApiSignal*)) valadoc_html_doclet_real_visit_signal;
	((ValadocApiVisitorClass *) klass)->visit_method = (void (*) (ValadocApiVisitor *, ValadocApiMethod*)) valadoc_html_doclet_real_visit_method;
}


static void
valadoc_html_doclet_instance_init (ValadocHtmlDoclet * self)
{
}


GType
valadoc_html_doclet_get_type (void)
{
	static volatile gsize valadoc_html_doclet_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_html_doclet_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValadocHtmlDocletClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_html_doclet_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocHtmlDoclet), 0, (GInstanceInitFunc) valadoc_html_doclet_instance_init, NULL };
		GType valadoc_html_doclet_type_id;
		valadoc_html_doclet_type_id = g_type_register_static (VALADOC_HTML_TYPE_BASIC_DOCLET, "ValadocHtmlDoclet", &g_define_type_info, 0);
		g_once_init_leave (&valadoc_html_doclet_type_id__volatile, valadoc_html_doclet_type_id);
	}
	return valadoc_html_doclet_type_id__volatile;
}


GType
register_plugin (ValadocModuleLoader* module_loader)
{
	GType result = 0UL;
	g_return_val_if_fail (module_loader != NULL, 0UL);
	result = VALADOC_HTML_TYPE_DOCLET;
	return result;
}



