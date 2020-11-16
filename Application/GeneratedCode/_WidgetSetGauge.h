/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This file was generated automatically by Embedded Wizard Studio.
*
* Please do not make any modifications of this file! The modifications are lost
* when the file is generated again by Embedded Wizard Studio!
*
* The template of this heading text can be found in the file 'head.ewt' in the
* directory 'Platforms' of your Embedded Wizard installation directory. If you
* wish to adapt this text, please copy the template file 'head.ewt' into your
* project directory and edit the copy only. Please avoid any modifications of
* the original template file!
*
* Version  : 10.00
* Profile  : NxpLpc
* Platform : NXP.LPC.RGB565
*
*******************************************************************************/

#ifndef _WidgetSetGauge_H
#define _WidgetSetGauge_H

#ifdef __cplusplus
  extern "C"
  {
#endif

#include "ewrte.h"
#if EW_RTE_VERSION != 0x000A0000
  #error Wrong version of Embedded Wizard Runtime Environment.
#endif

#include "ewgfx.h"
#if EW_GFX_VERSION != 0x000A0000
  #error Wrong version of Embedded Wizard Graphics Engine.
#endif

#include "_CoreGroup.h"
#include "_EffectsFloatEffect.h"

/* Forward declaration of the class Core::DialogContext */
#ifndef _CoreDialogContext_
  EW_DECLARE_CLASS( CoreDialogContext )
#define _CoreDialogContext_
#endif

/* Forward declaration of the class Core::KeyPressHandler */
#ifndef _CoreKeyPressHandler_
  EW_DECLARE_CLASS( CoreKeyPressHandler )
#define _CoreKeyPressHandler_
#endif

/* Forward declaration of the class Core::LayoutContext */
#ifndef _CoreLayoutContext_
  EW_DECLARE_CLASS( CoreLayoutContext )
#define _CoreLayoutContext_
#endif

/* Forward declaration of the class Core::TaskQueue */
#ifndef _CoreTaskQueue_
  EW_DECLARE_CLASS( CoreTaskQueue )
#define _CoreTaskQueue_
#endif

/* Forward declaration of the class Core::View */
#ifndef _CoreView_
  EW_DECLARE_CLASS( CoreView )
#define _CoreView_
#endif

/* Forward declaration of the class Effects::Fader */
#ifndef _EffectsFader_
  EW_DECLARE_CLASS( EffectsFader )
#define _EffectsFader_
#endif

/* Forward declaration of the class Graphics::ArcPath */
#ifndef _GraphicsArcPath_
  EW_DECLARE_CLASS( GraphicsArcPath )
#define _GraphicsArcPath_
#endif

/* Forward declaration of the class Graphics::Canvas */
#ifndef _GraphicsCanvas_
  EW_DECLARE_CLASS( GraphicsCanvas )
#define _GraphicsCanvas_
#endif

/* Forward declaration of the class Views::FillPath */
#ifndef _ViewsFillPath_
  EW_DECLARE_CLASS( ViewsFillPath )
#define _ViewsFillPath_
#endif

/* Forward declaration of the class Views::Image */
#ifndef _ViewsImage_
  EW_DECLARE_CLASS( ViewsImage )
#define _ViewsImage_
#endif

/* Forward declaration of the class Views::WarpImage */
#ifndef _ViewsWarpImage_
  EW_DECLARE_CLASS( ViewsWarpImage )
#define _ViewsWarpImage_
#endif

/* Forward declaration of the class WidgetSet::Gauge */
#ifndef _WidgetSetGauge_
  EW_DECLARE_CLASS( WidgetSetGauge )
#define _WidgetSetGauge_
#endif

/* Forward declaration of the class WidgetSet::GaugeConfig */
#ifndef _WidgetSetGaugeConfig_
  EW_DECLARE_CLASS( WidgetSetGaugeConfig )
#define _WidgetSetGaugeConfig_
#endif


/* This class implements an 'analog instrument' (circular gauge), intended to display 
   a value as a needle that rotates above a scale. The rotation of the needle corresponds 
   to the value specified in the property @CurrentValue, which lies in range determined 
   by the properties @MinValue and @MaxValue.
   Alternatively the property @Outlet can refer to any other 'int32' property the 
   widget should remain synchronized with. When the referred property is modified 
   by another one, the widget is automatically notified to remain in sync with the 
   property.
   This approach follows the Controller-View programming paradigm. Here the gauge 
   widget represents the 'View' and the property referred via 'Outlet' can be seen 
   as a part of the 'Controller'.
   The exact look and feel of the gauge is determined by the 'Gauge Configuration' 
   object assigned to the property @Appearance. The configuration object provides 
   bitmaps, colors and other configuration parameters needed to construct and display 
   the gauge widget. Usually, you will manage in your project your own configuration 
   objects and customize the gauge widgets according to your design expectations. 
   Depending on the information provided in the associated configuration object, 
   the gauge widget will be composed of following views:
   - 'Scale' is an image view (Views::Image) displayed centered in the background 
   within the widget area. In the configuration object you can specify the desired 
   bitmap, its opacity, frame number (if the bitmap is multi-frame) and tint color 
   (if the bitmap contains Alpha8 information only). The gauge widget can automatically 
   play animated bitmaps.
   - 'TrackLeft' is a vector graphic view (Views::FillPath) displaying a circle 
   segment between the needle's leftmost position (clockwise) and its actual position. 
   From this results the effect of a track behind the needle. In the configuration 
   object you can specify the track thickness, color and the appearance of its caps.
   - 'TrackRight' is a vector graphic view (Views::FillPath) displaying a circle 
   segment between the actual position of the needle and its rightmost position 
   (clockwise). From this results the effect of a track behind the needle. In the 
   configuration object you can specify the track thickness, color and the appearance 
   of its caps.
   - 'Needle' is a warp image view (Views::WarpImage) displayed and rotated around 
   predetermined pivot position. In the configuration object you can specify the 
   desired bitmap, its opacity, frame number (if the bitmap is multi-frame) and 
   tint color (if the bitmap contains Alpha8 information only). The gauge widget 
   can automatically play animated bitmaps. The desired rotation range (the angles 
   corresponding to the values @MinValue and @MaxValue) and the pivot position are 
   also specify in the configuration object.
   - 'Cover' is an image view (Views::Image) displayed centered within the widget 
   area and covering so eventually the scale and needle images. In the configuration 
   object you can specify the desired bitmap, its opacity, frame number (if the 
   bitmap is multi-frame) and tint color (if the bitmap contains Alpha8 information 
   only). The gauge widget can automatically play animated bitmaps.
   The gauge widget implements a 'swing' animation effect to rotate the needle smoothly. 
   You can configure the duration and the timing of this effect in the configuration 
   object. Gauge widgets are not intended to be controlled by the user. The widget 
   ignores all touch and keyboard events and it can't be focused.
   The gauge widget provides an additional set of methods useful to query the actual 
   rotation angle of the needle, its possible rotation range and the position around 
   which the needle is rotated (@GetCenterPosition(), @GetNeedleAngle(), @GetNeedleMaxAngle(), 
   @GetNeedleMinAngle()). These methods can be invoked from a slot method assigned 
   to the property @OnUpdate. In this manner you can automatically arrange and updated 
   additional decoration according to the actual state of the gauge widget. For 
   example, you can arrange a Views::Text view to follow the needle and to display 
   the actual value of the widget (@CurrentValue).
   For more details regarding the customization of the gauge widget see the description 
   of WidgetSet::GaugeConfig class. */
EW_DEFINE_FIELDS( WidgetSetGauge, CoreGroup )
  EW_VARIABLE( imageView1,      ViewsImage )
  EW_VARIABLE( imageView2,      ViewsImage )
  EW_VARIABLE( warpView,        ViewsWarpImage )
  EW_VARIABLE( pathView1,       ViewsFillPath )
  EW_VARIABLE( pathView2,       ViewsFillPath )
  EW_VARIABLE( path1,           GraphicsArcPath )
  EW_VARIABLE( path2,           GraphicsArcPath )
  EW_PROPERTY( Appearance,      WidgetSetGaugeConfig )
  EW_PROPERTY( OnUpdate,        XSlot )
  EW_PROPERTY( Outlet,          XRef )
  EW_OBJECT  ( FloatEffect,     EffectsFloatEffect )
  EW_VARIABLE( currentAngle,    XFloat )
  EW_PROPERTY( MaxValue,        XInt32 )
  EW_PROPERTY( MinValue,        XInt32 )
  EW_PROPERTY( CurrentValue,    XInt32 )
  EW_VARIABLE( setupCurrentAngle, XBool )
EW_END_OF_FIELDS( WidgetSetGauge )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::Gauge' */
EW_DEFINE_METHODS( WidgetSetGauge, CoreGroup )
  EW_METHOD( initLayoutContext, void )( CoreRectView _this, XRect aBounds, CoreOutline 
    aOutline )
  EW_METHOD( GetRoot,           CoreRoot )( CoreView _this )
  EW_METHOD( Draw,              void )( CoreGroup _this, GraphicsCanvas aCanvas, 
    XRect aClip, XPoint aOffset, XInt32 aOpacity, XBool aBlend )
  EW_METHOD( HandleEvent,       XObject )( CoreView _this, CoreEvent aEvent )
  EW_METHOD( CursorHitTest,     CoreCursorHit )( CoreGroup _this, XRect aArea, XInt32 
    aFinger, XInt32 aStrikeCount, CoreView aDedicatedView, XSet aRetargetReason )
  EW_METHOD( ArrangeView,       XPoint )( CoreRectView _this, XRect aBounds, XEnum 
    aFormation )
  EW_METHOD( MoveView,          void )( CoreRectView _this, XPoint aOffset, XBool 
    aFastMove )
  EW_METHOD( GetExtent,         XRect )( CoreRectView _this )
  EW_METHOD( ChangeViewState,   void )( CoreGroup _this, XSet aSetState, XSet aClearState )
  EW_METHOD( OnSetBounds,       void )( WidgetSetGauge _this, XRect value )
  EW_METHOD( OnSetFocus,        void )( CoreGroup _this, CoreView value )
  EW_METHOD( OnSetOpacity,      void )( CoreGroup _this, XInt32 value )
  EW_METHOD( IsDialog,          XBool )( CoreGroup _this, XBool aRecursive )
  EW_METHOD( DispatchEvent,     XObject )( CoreGroup _this, CoreEvent aEvent )
  EW_METHOD( BroadcastEvent,    XObject )( CoreGroup _this, CoreEvent aEvent, XSet 
    aFilter )
  EW_METHOD( UpdateViewState,   void )( WidgetSetGauge _this, XSet aState )
  EW_METHOD( InvalidateArea,    void )( CoreGroup _this, XRect aArea )
EW_END_OF_METHODS( WidgetSetGauge )

/* 'C' function for method : 'WidgetSet::Gauge.OnSetBounds()' */
void WidgetSetGauge_OnSetBounds( WidgetSetGauge _this, XRect value );

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void WidgetSetGauge_UpdateViewState( WidgetSetGauge _this, XSet aState );

/* 'C' function for method : 'WidgetSet::Gauge.onUpdateAngle()' */
void WidgetSetGauge_onUpdateAngle( WidgetSetGauge _this, XObject sender );

/* 'C' function for method : 'WidgetSet::Gauge.onEndFloatEffect()' */
void WidgetSetGauge_onEndFloatEffect( WidgetSetGauge _this, XObject sender );

/* 'C' function for method : 'WidgetSet::Gauge.onFloatEffect()' */
void WidgetSetGauge_onFloatEffect( WidgetSetGauge _this, XObject sender );

/* 'C' function for method : 'WidgetSet::Gauge.onConfigChanged()' */
void WidgetSetGauge_onConfigChanged( WidgetSetGauge _this, XObject sender );

/* 'C' function for method : 'WidgetSet::Gauge.onOutlet()' */
void WidgetSetGauge_onOutlet( WidgetSetGauge _this, XObject sender );

/* 'C' function for method : 'WidgetSet::Gauge.OnSetOutlet()' */
void WidgetSetGauge_OnSetOutlet( WidgetSetGauge _this, XRef value );

/* 'C' function for method : 'WidgetSet::Gauge.OnGetCurrentValue()' */
XInt32 WidgetSetGauge_OnGetCurrentValue( WidgetSetGauge _this );

/* 'C' function for method : 'WidgetSet::Gauge.OnSetCurrentValue()' */
void WidgetSetGauge_OnSetCurrentValue( WidgetSetGauge _this, XInt32 value );

/* 'C' function for method : 'WidgetSet::Gauge.OnSetAppearance()' */
void WidgetSetGauge_OnSetAppearance( WidgetSetGauge _this, WidgetSetGaugeConfig 
  value );

#ifdef __cplusplus
  }
#endif

#endif /* _WidgetSetGauge_H */

/* Embedded Wizard */
