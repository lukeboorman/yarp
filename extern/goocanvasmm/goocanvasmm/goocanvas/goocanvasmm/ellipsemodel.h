// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GOOCANVASMM_ELLIPSEMODEL_H
#define _GOOCANVASMM_ELLIPSEMODEL_H


#include <glibmm.h>

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


#include <goocanvasmm/itemmodelsimple.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GooCanvasEllipseModel GooCanvasEllipseModel;
typedef struct _GooCanvasEllipseModelClass GooCanvasEllipseModelClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Goocanvas
{ class EllipseModel_Class; } // namespace Goocanvas
namespace Goocanvas
{


class EllipseModel : public Goocanvas::ItemModelSimple
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef EllipseModel CppObjectType;
  typedef EllipseModel_Class CppClassType;
  typedef GooCanvasEllipseModel BaseObjectType;
  typedef GooCanvasEllipseModelClass BaseClassType;

private:  friend class EllipseModel_Class;
  static CppClassType ellipsemodel_class_;

private:
  // noncopyable
  EllipseModel(const EllipseModel&);
  EllipseModel& operator=(const EllipseModel&);

protected:
  explicit EllipseModel(const Glib::ConstructParams& construct_params);
  explicit EllipseModel(GooCanvasEllipseModel* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~EllipseModel();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GooCanvasEllipseModel*       gobj()       { return reinterpret_cast<GooCanvasEllipseModel*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GooCanvasEllipseModel* gobj() const { return reinterpret_cast<GooCanvasEllipseModel*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GooCanvasEllipseModel* gobj_copy();

private:

protected:

  EllipseModel(double center_x = 0.0, double center_y = 0., double radius_x = 0.0, double radius_y = 0.0);
  

public:

  
  static Glib::RefPtr<EllipseModel> create(double center_x =  0.0, double center_y =  0.0, double radius_x =  0.0, double radius_y =  0.0);


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The x coordinate of the center of the ellipse.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<double> property_center_x() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The x coordinate of the center of the ellipse.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<double> property_center_x() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The y coordinate of the center of the ellipse.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<double> property_center_y() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The y coordinate of the center of the ellipse.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<double> property_center_y() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The horizontal radius of the ellipse.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<double> property_radius_x() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The horizontal radius of the ellipse.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<double> property_radius_x() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The vertical radius of the ellipse.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<double> property_radius_y() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The vertical radius of the ellipse.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<double> property_radius_y() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};


}


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Goocanvas::EllipseModel
   */
  Glib::RefPtr<Goocanvas::EllipseModel> wrap(GooCanvasEllipseModel* object, bool take_copy = false);
}


#endif /* _GOOCANVASMM_ELLIPSEMODEL_H */

