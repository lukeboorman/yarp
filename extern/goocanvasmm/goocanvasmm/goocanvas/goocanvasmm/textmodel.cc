// Generated by gtkmmproc -- DO NOT MODIFY!


#include <goocanvasmm/textmodel.h>
#include <goocanvasmm/private/textmodel_p.h>

/* Copyright (C) 1998-2006 The gtkmm Development Team
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
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */


#include <goocanvastext.h>


namespace Goocanvas
{

TextModel::TextModel(const Glib::ustring& string, double x, double y, double width, Gtk::AnchorType anchor)
: 
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Goocanvas::ItemModelSimple(Glib::ConstructParams(textmodel_class_.init(), "text",string.c_str(),"x",x,"y",y,"width",width,"anchor",(GtkAnchorType)anchor, static_cast<char*>(0)))
{
}

} //namespace GooCanvas


namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Goocanvas::TextModel> wrap(GooCanvasTextModel* object, bool take_copy)
{
  return Glib::RefPtr<Goocanvas::TextModel>( dynamic_cast<Goocanvas::TextModel*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Goocanvas
{


/* The *_Class implementation: */

const Glib::Class& TextModel_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &TextModel_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(goo_canvas_text_model_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void TextModel_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* TextModel_Class::wrap_new(GObject* object)
{
  return new TextModel((GooCanvasTextModel*)object);
}


/* The implementation: */

GooCanvasTextModel* TextModel::gobj_copy()
{
  reference();
  return gobj();
}

TextModel::TextModel(const Glib::ConstructParams& construct_params)
:
  Goocanvas::ItemModelSimple(construct_params)
{

}

TextModel::TextModel(GooCanvasTextModel* castitem)
:
  Goocanvas::ItemModelSimple((GooCanvasItemModelSimple*)(castitem))
{}


TextModel::~TextModel()
{}


TextModel::CppClassType TextModel::textmodel_class_; // initialize static member

GType TextModel::get_type()
{
  return textmodel_class_.init().get_type();
}


GType TextModel::get_base_type()
{
  return goo_canvas_text_model_get_type();
}


Glib::RefPtr<TextModel> TextModel::create(const Glib::ustring& string, double x, double y, double width, Gtk::AnchorType anchor)
{
  return Glib::RefPtr<TextModel>( new TextModel(string, x, y, width, anchor) );
}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Pango::Alignment> TextModel::property_alignment() 
{
  return Glib::PropertyProxy<Pango::Alignment>(this, "alignment");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Pango::Alignment> TextModel::property_alignment() const
{
  return Glib::PropertyProxy_ReadOnly<Pango::Alignment>(this, "alignment");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Gtk::AnchorType> TextModel::property_anchor() 
{
  return Glib::PropertyProxy<Gtk::AnchorType>(this, "anchor");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Gtk::AnchorType> TextModel::property_anchor() const
{
  return Glib::PropertyProxy_ReadOnly<Gtk::AnchorType>(this, "anchor");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Glib::ustring> TextModel::property_font() 
{
  return Glib::PropertyProxy<Glib::ustring>(this, "font");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Glib::ustring> TextModel::property_font() const
{
  return Glib::PropertyProxy_ReadOnly<Glib::ustring>(this, "font");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Pango::FontDescription> TextModel::property_font_desc() 
{
  return Glib::PropertyProxy<Pango::FontDescription>(this, "font-desc");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Pango::FontDescription> TextModel::property_font_desc() const
{
  return Glib::PropertyProxy_ReadOnly<Pango::FontDescription>(this, "font-desc");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Glib::ustring> TextModel::property_text() 
{
  return Glib::PropertyProxy<Glib::ustring>(this, "text");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Glib::ustring> TextModel::property_text() const
{
  return Glib::PropertyProxy_ReadOnly<Glib::ustring>(this, "text");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TextModel::property_use_markup() 
{
  return Glib::PropertyProxy<bool>(this, "use-markup");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TextModel::property_use_markup() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "use-markup");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<double> TextModel::property_width() 
{
  return Glib::PropertyProxy<double>(this, "width");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<double> TextModel::property_width() const
{
  return Glib::PropertyProxy_ReadOnly<double>(this, "width");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<double> TextModel::property_x() 
{
  return Glib::PropertyProxy<double>(this, "x");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<double> TextModel::property_x() const
{
  return Glib::PropertyProxy_ReadOnly<double>(this, "x");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<double> TextModel::property_y() 
{
  return Glib::PropertyProxy<double>(this, "y");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<double> TextModel::property_y() const
{
  return Glib::PropertyProxy_ReadOnly<double>(this, "y");
}
#endif //GLIBMM_PROPERTIES_ENABLED


} // namespace Goocanvas


