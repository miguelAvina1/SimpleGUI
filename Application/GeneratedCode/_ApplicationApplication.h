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

#ifndef _ApplicationApplication_H
#define _ApplicationApplication_H

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

#include "_ApplicationCustom.h"
#include "_CoreKeyPressHandler.h"
#include "_CorePropertyObserver.h"
#include "_CoreRoot.h"
#include "_CoreSystemEventHandler.h"
#include "_CoreTimer.h"
#include "_EffectsBoolEffect.h"
#include "_ViewsImage.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "_WidgetSetHorizontalValueBar.h"
#include "_WidgetSetPushButton.h"
#include "_WidgetSetToggleButton.h"

/* Forward declaration of the class Application::Application */
#ifndef _ApplicationApplication_
  EW_DECLARE_CLASS( ApplicationApplication )
#define _ApplicationApplication_
#endif

/* Forward declaration of the class Application::DeviceClass */
#ifndef _ApplicationDeviceClass_
  EW_DECLARE_CLASS( ApplicationDeviceClass )
#define _ApplicationDeviceClass_
#endif

/* Forward declaration of the class Core::DialogContext */
#ifndef _CoreDialogContext_
  EW_DECLARE_CLASS( CoreDialogContext )
#define _CoreDialogContext_
#endif

/* Forward declaration of the class Core::Group */
#ifndef _CoreGroup_
  EW_DECLARE_CLASS( CoreGroup )
#define _CoreGroup_
#endif

/* Forward declaration of the class Core::LayoutContext */
#ifndef _CoreLayoutContext_
  EW_DECLARE_CLASS( CoreLayoutContext )
#define _CoreLayoutContext_
#endif

/* Forward declaration of the class Core::ModalContext */
#ifndef _CoreModalContext_
  EW_DECLARE_CLASS( CoreModalContext )
#define _CoreModalContext_
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

/* Forward declaration of the class Graphics::Canvas */
#ifndef _GraphicsCanvas_
  EW_DECLARE_CLASS( GraphicsCanvas )
#define _GraphicsCanvas_
#endif


/* This is the root component of the entire GUI application. */
EW_DEFINE_FIELDS( ApplicationApplication, CoreRoot )
  EW_VARIABLE( Device,          ApplicationDeviceClass )
  EW_OBJECT  ( Custom,          ApplicationCustom )
  EW_OBJECT  ( Rectangle,       ViewsRectangle )
  EW_OBJECT  ( Text3,           ViewsText )
  EW_OBJECT  ( CheckBox,        WidgetSetToggleButton )
  EW_OBJECT  ( ActionButton,    WidgetSetPushButton )
  EW_OBJECT  ( Indicator,       ViewsImage )
  EW_OBJECT  ( CaptionText,     ViewsText )
  EW_OBJECT  ( Text4,           ViewsText )
  EW_OBJECT  ( Text5,           ViewsText )
  EW_OBJECT  ( KeyHandler,      CoreKeyPressHandler )
  EW_OBJECT  ( HorzBar,         WidgetSetHorizontalValueBar )
  EW_OBJECT  ( Counter,         ViewsText )
  EW_OBJECT  ( HardButtonEventHandler, CoreSystemEventHandler )
  EW_OBJECT  ( BoolEffect,      EffectsBoolEffect )
  EW_OBJECT  ( HardButtonCounterObserver, CorePropertyObserver )
  EW_OBJECT  ( KeyUpHandler,    CoreKeyPressHandler )
  EW_OBJECT  ( KeyDownHandler,  CoreKeyPressHandler )
  EW_OBJECT  ( PushButton,      WidgetSetPushButton )
EW_END_OF_FIELDS( ApplicationApplication )

/* Virtual Method Table (VMT) for the class : 'Application::Application' */
EW_DEFINE_METHODS( ApplicationApplication, CoreRoot )
  EW_METHOD( initLayoutContext, void )( CoreRectView _this, XRect aBounds, CoreOutline 
    aOutline )
  EW_METHOD( GetRoot,           CoreRoot )( CoreRoot _this )
  EW_METHOD( Draw,              void )( CoreRoot _this, GraphicsCanvas aCanvas, 
    XRect aClip, XPoint aOffset, XInt32 aOpacity, XBool aBlend )
  EW_METHOD( HandleEvent,       XObject )( CoreView _this, CoreEvent aEvent )
  EW_METHOD( CursorHitTest,     CoreCursorHit )( CoreGroup _this, XRect aArea, XInt32 
    aFinger, XInt32 aStrikeCount, CoreView aDedicatedView, XSet aRetargetReason )
  EW_METHOD( ArrangeView,       XPoint )( CoreRectView _this, XRect aBounds, XEnum 
    aFormation )
  EW_METHOD( MoveView,          void )( CoreRectView _this, XPoint aOffset, XBool 
    aFastMove )
  EW_METHOD( GetExtent,         XRect )( CoreRectView _this )
  EW_METHOD( ChangeViewState,   void )( CoreRoot _this, XSet aSetState, XSet aClearState )
  EW_METHOD( OnSetBounds,       void )( CoreGroup _this, XRect value )
  EW_METHOD( OnSetFocus,        void )( CoreRoot _this, CoreView value )
  EW_METHOD( OnSetOpacity,      void )( CoreRoot _this, XInt32 value )
  EW_METHOD( IsDialog,          XBool )( CoreRoot _this, XBool aRecursive )
  EW_METHOD( DispatchEvent,     XObject )( CoreRoot _this, CoreEvent aEvent )
  EW_METHOD( BroadcastEvent,    XObject )( CoreRoot _this, CoreEvent aEvent, XSet 
    aFilter )
  EW_METHOD( UpdateViewState,   void )( CoreGroup _this, XSet aState )
  EW_METHOD( InvalidateArea,    void )( CoreRoot _this, XRect aArea )
EW_END_OF_METHODS( ApplicationApplication )

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationApplication_Init( ApplicationApplication _this, XHandle aArg );

/* This is a slot method. */
void ApplicationApplication_SlotHelloWorld( ApplicationApplication _this, XObject 
  sender );

/* This is a slot method. */
void ApplicationApplication_TestSlot( ApplicationApplication _this, XObject sender );

/* This slot method is executed when the associated system event handler receives 
   an event. */
void ApplicationApplication_onHardButtonEvent( ApplicationApplication _this, XObject 
  sender );

/* This slot method is executed when the associated property observer is notified. */
void ApplicationApplication_onCounterEvent( ApplicationApplication _this, XObject 
  sender );

/* 'C' function for method : 'Application::Application.UpSlot()' */
void ApplicationApplication_UpSlot( ApplicationApplication _this, XObject sender );

/* 'C' function for method : 'Application::Application.DownSlot()' */
void ApplicationApplication_DownSlot( ApplicationApplication _this, XObject sender );

/* 'C' function for method : 'Application::Application.SlotMoveNext()' */
void ApplicationApplication_SlotMoveNext( ApplicationApplication _this, XObject 
  sender );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationApplication_H */

/* Embedded Wizard */
