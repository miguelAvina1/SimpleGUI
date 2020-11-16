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

#include "ewlocale.h"
#include "_ApplicationApplication.h"
#include "_ApplicationCustom.h"
#include "_ApplicationDeviceClass.h"
#include "_CoreGroup.h"
#include "_CoreKeyPressHandler.h"
#include "_CorePropertyObserver.h"
#include "_CoreSystemEvent.h"
#include "_CoreSystemEventHandler.h"
#include "_CoreView.h"
#include "_EffectsBoolEffect.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsImage.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "_WidgetSetGauge.h"
#include "_WidgetSetGaugeConfig.h"
#include "_WidgetSetHorizontalValueBar.h"
#include "_WidgetSetHorizontalValueBarConfig.h"
#include "_WidgetSetPushButton.h"
#include "_WidgetSetPushButtonConfig.h"
#include "_WidgetSetToggleButton.h"
#include "_WidgetSetToggleButtonConfig.h"
#include "Application.h"
#include "Core.h"
#include "Resources.h"
#include "Views.h"
#include "WidgetSet.h"

/* Compressed strings for the language 'Default'. */
static const unsigned int _StringsDefault0[] =
{
  0x00000158, /* ratio 62.79 % */
  0xB8003300, 0x000EE452, 0x005D0683, 0x0DA00328, 0x010B3100, 0x71189190, 0x00838B62,
  0x03D000D2, 0x39000C20, 0x644E1514, 0x83000008, 0x00984581, 0x08800228, 0xA6001000,
  0x71D3A000, 0x1692C466, 0x98F94250, 0x9B1B8011, 0x40004530, 0x000D9112, 0x0E5E6FA3,
  0xA4149004, 0x4B4289D1, 0x92E94056, 0x639E9DA1, 0xE24CC222, 0x33C326D3, 0xD4D23D3C,
  0x4E27F498, 0x823D4494, 0x0853089C, 0x69363A80, 0x843A5596, 0x34AEDBE9, 0x492C8219,
  0xB5CD6D01, 0xA5C2DD4A, 0x4C2BB729, 0xFE195796, 0x00F259A4, 0x2000184A, 0xC0092E4B,
  0x11274131, 0xE92CD8F1, 0xA3432FC0, 0xB15E9548, 0x636294EB, 0x663D6E94, 0x81B9435D,
  0x3D46A4DF, 0xF7726CC2, 0x94A4C4E7, 0x00040729, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 480, 272 }};
static const XColor _Const0001 = { 0xF7, 0xF4, 0xE7, 0xFF };
static const XRect _Const0002 = {{ 10, 240 }, { 470, 275 }};
static const XStringRes _Const0003 = { _StringsDefault0, 0x0002 };
static const XColor _Const0004 = { 0x5E, 0x5E, 0x5E, 0xFF };
static const XRect _Const0005 = {{ 30, 130 }, { 230, 180 }};
static const XStringRes _Const0006 = { _StringsDefault0, 0x001B };
static const XRect _Const0007 = {{ 30, 60 }, { 250, 110 }};
static const XStringRes _Const0008 = { _StringsDefault0, 0x0027 };
static const XRect _Const0009 = {{ 279, 115 }, { 329, 165 }};
static const XColor _Const000A = { 0x00, 0x00, 0x00, 0xFF };
static const XRect _Const000B = {{ 20, 10 }, { 260, 40 }};
static const XStringRes _Const000C = { _StringsDefault0, 0x003D };
static const XRect _Const000D = {{ 270, 170 }, { 450, 205 }};
static const XStringRes _Const000E = { _StringsDefault0, 0x0052 };
static const XRect _Const000F = {{ 290, 80 }, { 450, 110 }};
static const XStringRes _Const0010 = { _StringsDefault0, 0x0068 };
static const XRect _Const0011 = {{ 30, 210 }, { 450, 240 }};
static const XRect _Const0012 = {{ 340, 120 }, { 450, 165 }};
static const XStringRes _Const0013 = { _StringsDefault0, 0x007C };
static const XRect _Const0014 = {{ 360, 10 }, { 454, 60 }};
static const XStringRes _Const0015 = { _StringsDefault0, 0x0083 };
static const XStringRes _Const0016 = { _StringsDefault0, 0x008A };
static const XRect _Const0017 = {{ 360, 14 }, { 451, 64 }};
static const XStringRes _Const0018 = { _StringsDefault0, 0x0098 };
static const XRect _Const0019 = {{ 101, 4 }, { 360, 75 }};
static const XStringRes _Const001A = { _StringsDefault0, 0x009F };
static const XColor _Const001B = { 0x03, 0x33, 0x99, 0xFF };
static const XRect _Const001C = {{ 138, 75 }, { 322, 242 }};
static const XColor _Const001D = { 0x64, 0x81, 0xD3, 0xFF };
static const XPoint _Const001E = { -39, 12 };
static const XPoint _Const001F = { 0, 10 };
static const XPoint _Const0020 = { 171, 151 };

/* This is an inline code block. */
/* include the device driver header file to get access for the device class */
#include "DeviceDriver.h"


/* Initializer for the class 'Application::Application' */
void ApplicationApplication__Init( ApplicationApplication _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRoot__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( ApplicationApplication );

  /* ... then construct all embedded objects */
  ApplicationCustom__Init( &_this->Custom, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text3, &_this->_XObject, 0 );
  WidgetSetToggleButton__Init( &_this->CheckBox, &_this->_XObject, 0 );
  WidgetSetPushButton__Init( &_this->ActionButton, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->Indicator, &_this->_XObject, 0 );
  ViewsText__Init( &_this->CaptionText, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text4, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text5, &_this->_XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_XObject, 0 );
  WidgetSetHorizontalValueBar__Init( &_this->HorzBar, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Counter, &_this->_XObject, 0 );
  CoreSystemEventHandler__Init( &_this->HardButtonEventHandler, &_this->_XObject, 0 );
  EffectsBoolEffect__Init( &_this->BoolEffect, &_this->_XObject, 0 );
  CorePropertyObserver__Init( &_this->HardButtonCounterObserver, &_this->_XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyUpHandler, &_this->_XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyDownHandler, &_this->_XObject, 0 );
  WidgetSetPushButton__Init( &_this->PushButton, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationApplication );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Custom, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0000 );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const0001 );
  CoreRectView__OnSetBounds( &_this->Text3, _Const0002 );
  ViewsText_OnSetWrapText( &_this->Text3, 1 );
  ViewsText_OnSetAlignment( &_this->Text3, ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text3, EwLoadString( &_Const0003 ));
  ViewsText_OnSetColor( &_this->Text3, _Const0004 );
  CoreRectView__OnSetBounds( &_this->CheckBox, _Const0005 );
  WidgetSetToggleButton_OnSetLabel( &_this->CheckBox, EwLoadString( &_Const0006 ));
  CoreRectView__OnSetBounds( &_this->ActionButton, _Const0007 );
  WidgetSetPushButton_OnSetLabel( &_this->ActionButton, EwLoadString( &_Const0008 ));
  CoreRectView__OnSetBounds( &_this->Indicator, _Const0009 );
  ViewsImage_OnSetColor( &_this->Indicator, _Const000A );
  ViewsImage_OnSetFrameNumber( &_this->Indicator, 24 );
  ViewsImage_OnSetVisible( &_this->Indicator, 0 );
  CoreRectView__OnSetBounds( &_this->CaptionText, _Const000B );
  ViewsText_OnSetAlignment( &_this->CaptionText, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->CaptionText, EwLoadString( &_Const000C ));
  ViewsText_OnSetColor( &_this->CaptionText, _Const000A );
  CoreRectView__OnSetBounds( &_this->Text4, _Const000D );
  ViewsText_OnSetWrapText( &_this->Text4, 1 );
  ViewsText_OnSetAlignment( &_this->Text4, ViewsTextAlignmentAlignHorzRight | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text4, EwLoadString( &_Const000E ));
  ViewsText_OnSetColor( &_this->Text4, _Const0004 );
  CoreRectView__OnSetBounds( &_this->Text5, _Const000F );
  ViewsText_OnSetWrapText( &_this->Text5, 1 );
  ViewsText_OnSetAlignment( &_this->Text5, ViewsTextAlignmentAlignHorzRight | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Text5, EwLoadString( &_Const0010 ));
  ViewsText_OnSetColor( &_this->Text5, _Const0004 );
  _this->KeyHandler.Filter = CoreKeyCodeSpace;
  CoreRectView__OnSetBounds( &_this->HorzBar, _Const0011 );
  CoreRectView__OnSetBounds( &_this->Counter, _Const0012 );
  ViewsText_OnSetAlignment( &_this->Counter, ViewsTextAlignmentAlignHorzRight | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Counter, EwLoadString( &_Const0013 ));
  ViewsText_OnSetColor( &_this->Counter, _Const000A );
  _this->BoolEffect.Value2 = 0;
  _this->BoolEffect.Value1 = 1;
  EffectsBoolEffect_OnSetNoOfCycles( &_this->BoolEffect, 1 );
  EffectsBoolEffect_OnSetCycleDuration( &_this->BoolEffect, 100 );
  _this->KeyUpHandler.Filter = CoreKeyCodeUp;
  _this->KeyDownHandler.Filter = CoreKeyCodeDown;
  CoreRectView__OnSetBounds( &_this->PushButton, _Const0014 );
  WidgetSetPushButton_OnSetLabel( &_this->PushButton, EwLoadString( &_Const0015 ));
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Custom ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text3 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->CheckBox ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->ActionButton ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Indicator ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->CaptionText ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text4 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text5 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->HorzBar ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Counter ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->PushButton ), 0 );
  ViewsText_OnSetFont( &_this->Text3, EwLoadResource( &ResourcesFontSmall, ResourcesFont ));
  WidgetSetToggleButton_OnSetOutlet( &_this->CheckBox, EwNewRef( EwGetAutoObject( 
  &ApplicationDevice, ApplicationDeviceClass ), ApplicationDeviceClass_OnGetLedStatus, 
  ApplicationDeviceClass_OnSetLedStatus ));
  WidgetSetToggleButton_OnSetAppearance( &_this->CheckBox, EwGetAutoObject( &WidgetSetCheckBox_Medium, 
  WidgetSetToggleButtonConfig ));
  _this->ActionButton.OnActivate = EwNewSlot( _this, ApplicationApplication_SlotHelloWorld );
  WidgetSetPushButton_OnSetAppearance( &_this->ActionButton, EwGetAutoObject( &WidgetSetPushButton_Medium, 
  WidgetSetPushButtonConfig ));
  ViewsImage_OnSetBitmap( &_this->Indicator, EwLoadResource( &ResourcesSymbolIconsLarge, 
  ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->CaptionText, EwLoadResource( &ResourcesFontMedium, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text4, EwLoadResource( &ResourcesFontSmall, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text5, EwLoadResource( &ResourcesFontSmall, ResourcesFont ));
  _this->KeyHandler.OnPress = EwNewSlot( _this, ApplicationApplication_TestSlot );
  _this->KeyHandler.OnHold = EwNewSlot( _this, ApplicationApplication_TestSlot );
  WidgetSetHorizontalValueBar_OnSetOutlet( &_this->HorzBar, EwNewRef( EwGetAutoObject( 
  &ApplicationDevice, ApplicationDeviceClass ), ApplicationDeviceClass_OnGetHardButtonCounter, 
  ApplicationDeviceClass_OnSetHardButtonCounter ));
  WidgetSetHorizontalValueBar_OnSetAppearance( &_this->HorzBar, EwGetAutoObject( 
  &WidgetSetHorizontalValueBar_Medium, WidgetSetHorizontalValueBarConfig ));
  _this->Device = EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass );
  ViewsText_OnSetFont( &_this->Counter, EwLoadResource( &ResourcesFontExtraLarge, 
  ResourcesFont ));
  _this->HardButtonEventHandler.OnEvent = EwNewSlot( _this, ApplicationApplication_onHardButtonEvent );
  CoreSystemEventHandler_OnSetEvent( &_this->HardButtonEventHandler, &EwGetAutoObject( 
  &ApplicationDevice, ApplicationDeviceClass )->HardButtonEvent );
  _this->BoolEffect.Outlet = EwNewRef( &_this->Indicator, ViewsImage_OnGetVisible, 
  ViewsImage_OnSetVisible );
  _this->HardButtonCounterObserver.OnEvent = EwNewSlot( _this, ApplicationApplication_onCounterEvent );
  CorePropertyObserver_OnSetOutlet( &_this->HardButtonCounterObserver, EwNewRef( 
  EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass ), ApplicationDeviceClass_OnGetHardButtonCounter, 
  ApplicationDeviceClass_OnSetHardButtonCounter ));
  _this->KeyUpHandler.OnPress = EwNewSlot( _this, ApplicationApplication_UpSlot );
  _this->KeyDownHandler.OnPress = EwNewSlot( _this, ApplicationApplication_DownSlot );
  _this->PushButton.OnActivate = EwNewSlot( _this, ApplicationApplication_SlotMoveNext );
  WidgetSetPushButton_OnSetAppearance( &_this->PushButton, EwGetAutoObject( &WidgetSetPushButton_Medium, 
  WidgetSetPushButtonConfig ));

  /* Call the user defined constructor */
  ApplicationApplication_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::Application' */
void ApplicationApplication__ReInit( ApplicationApplication _this )
{
  /* At first re-initialize the super class ... */
  CoreRoot__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ApplicationCustom__ReInit( &_this->Custom );
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsText__ReInit( &_this->Text3 );
  WidgetSetToggleButton__ReInit( &_this->CheckBox );
  WidgetSetPushButton__ReInit( &_this->ActionButton );
  ViewsImage__ReInit( &_this->Indicator );
  ViewsText__ReInit( &_this->CaptionText );
  ViewsText__ReInit( &_this->Text4 );
  ViewsText__ReInit( &_this->Text5 );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  WidgetSetHorizontalValueBar__ReInit( &_this->HorzBar );
  ViewsText__ReInit( &_this->Counter );
  CoreSystemEventHandler__ReInit( &_this->HardButtonEventHandler );
  EffectsBoolEffect__ReInit( &_this->BoolEffect );
  CorePropertyObserver__ReInit( &_this->HardButtonCounterObserver );
  CoreKeyPressHandler__ReInit( &_this->KeyUpHandler );
  CoreKeyPressHandler__ReInit( &_this->KeyDownHandler );
  WidgetSetPushButton__ReInit( &_this->PushButton );
}

/* Finalizer method for the class 'Application::Application' */
void ApplicationApplication__Done( ApplicationApplication _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( CoreRoot );

  /* Finalize all embedded objects */
  ApplicationCustom__Done( &_this->Custom );
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsText__Done( &_this->Text3 );
  WidgetSetToggleButton__Done( &_this->CheckBox );
  WidgetSetPushButton__Done( &_this->ActionButton );
  ViewsImage__Done( &_this->Indicator );
  ViewsText__Done( &_this->CaptionText );
  ViewsText__Done( &_this->Text4 );
  ViewsText__Done( &_this->Text5 );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  WidgetSetHorizontalValueBar__Done( &_this->HorzBar );
  ViewsText__Done( &_this->Counter );
  CoreSystemEventHandler__Done( &_this->HardButtonEventHandler );
  EffectsBoolEffect__Done( &_this->BoolEffect );
  CorePropertyObserver__Done( &_this->HardButtonCounterObserver );
  CoreKeyPressHandler__Done( &_this->KeyUpHandler );
  CoreKeyPressHandler__Done( &_this->KeyDownHandler );
  WidgetSetPushButton__Done( &_this->PushButton );

  /* Don't forget to deinitialize the super class ... */
  CoreRoot__Done( &_this->_Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationApplication_Init( ApplicationApplication _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aArg );
}

/* This is a slot method. */
void ApplicationApplication_SlotHelloWorld( ApplicationApplication _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );

  ApplicationDeviceClass_CommandPrint( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass ), 
  EwLoadString( &_Const0016 ));
}

/* This is a slot method. */
void ApplicationApplication_TestSlot( ApplicationApplication _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );
}

/* This slot method is executed when the associated system event handler receives 
   an event. */
void ApplicationApplication_onHardButtonEvent( ApplicationApplication _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( EwNewSlot( &_this->BoolEffect, EffectsBoolEffect_StartEffect ), 
    ((XObject)_this ));
}

/* This slot method is executed when the associated property observer is notified. */
void ApplicationApplication_onCounterEvent( ApplicationApplication _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsText_OnSetString( &_this->Counter, EwNewStringInt( _this->Device->HardButtonCounter 
  % 1000, 4, 10 ));
}

/* 'C' function for method : 'Application::Application.UpSlot()' */
void ApplicationApplication_UpSlot( ApplicationApplication _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup__OnSetFocus( _this, ((CoreView)&_this->ActionButton ));
}

/* 'C' function for method : 'Application::Application.DownSlot()' */
void ApplicationApplication_DownSlot( ApplicationApplication _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup__OnSetFocus( _this, ((CoreView)&_this->CheckBox ));
}

/* 'C' function for method : 'Application::Application.SlotMoveNext()' */
void ApplicationApplication_SlotMoveNext( ApplicationApplication _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_PresentDialog((CoreGroup)_this, ((CoreGroup)&_this->Custom ), 0, 0, 
  0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* Variants derived from the class : 'Application::Application' */
EW_DEFINE_CLASS_VARIANTS( ApplicationApplication )
EW_END_OF_CLASS_VARIANTS( ApplicationApplication )

/* Virtual Method Table (VMT) for the class : 'Application::Application' */
EW_DEFINE_CLASS( ApplicationApplication, CoreRoot, Device, Custom, Custom, Custom, 
                 _None, _None, "Application::Application" )
  CoreRectView_initLayoutContext,
  CoreRoot_GetRoot,
  CoreRoot_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreRoot_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreRoot_OnSetFocus,
  CoreRoot_OnSetOpacity,
  CoreRoot_IsDialog,
  CoreRoot_DispatchEvent,
  CoreRoot_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreRoot_InvalidateArea,
EW_END_OF_CLASS( ApplicationApplication )

/* Initializer for the class 'Application::DeviceClass' */
void ApplicationDeviceClass__Init( ApplicationDeviceClass _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( ApplicationDeviceClass );

  /* ... then construct all embedded objects */
  CoreSystemEvent__Init( &_this->HardButtonEvent, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationDeviceClass );

  /* ... and initialize objects, variables, properties, etc. */
  _this->GaugeValue = 75;
}

/* Re-Initializer for the class 'Application::DeviceClass' */
void ApplicationDeviceClass__ReInit( ApplicationDeviceClass _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  CoreSystemEvent__ReInit( &_this->HardButtonEvent );
}

/* Finalizer method for the class 'Application::DeviceClass' */
void ApplicationDeviceClass__Done( ApplicationDeviceClass _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( XObject );

  /* Finalize all embedded objects */
  CoreSystemEvent__Done( &_this->HardButtonEvent );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_Super );
}

/* This method is intended to be called by the device driver to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateHardButtonCounter( ApplicationDeviceClass _this, 
  XInt32 aNewValue )
{
  if ( aNewValue != _this->HardButtonCounter )
  {
    _this->HardButtonCounter = aNewValue;
    EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetHardButtonCounter, 
      ApplicationDeviceClass_OnSetHardButtonCounter ), 0 );
  }
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateHardButtonCounter()' */
void ApplicationDeviceClass__UpdateHardButtonCounter( void* _this, XInt32 aNewValue )
{
  ApplicationDeviceClass_UpdateHardButtonCounter((ApplicationDeviceClass)_this, 
  aNewValue );
}

/* This method is intended to be called by the device to notify the GUI application 
   about a particular system event. */
void ApplicationDeviceClass_TriggerHardButtonEvent( ApplicationDeviceClass _this )
{
  CoreSystemEvent_Trigger( &_this->HardButtonEvent, 0, 0 );
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.TriggerHardButtonEvent()' */
void ApplicationDeviceClass__TriggerHardButtonEvent( void* _this )
{
  ApplicationDeviceClass_TriggerHardButtonEvent((ApplicationDeviceClass)_this );
}

/* This method implements a device command that calls the underlying device driver 
   to print the given string (e.g. via serial interface). */
void ApplicationDeviceClass_CommandPrint( ApplicationDeviceClass _this, XString 
  aMessage )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  DeviceDriver_PrintMessage( aMessage );
}

/* 'C' function for method : 'Application::DeviceClass.OnSetLedStatus()' */
void ApplicationDeviceClass_OnSetLedStatus( ApplicationDeviceClass _this, XBool 
  value )
{
  if ( _this->LedStatus == value )
    return;

  _this->LedStatus = value;
  DeviceDriver_SetLedStatus( value );
  EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetLedStatus, 
    ApplicationDeviceClass_OnSetLedStatus ), 0 );
}

/* This method is intended to be called by the device driver to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateGaugeValue( ApplicationDeviceClass _this, XInt32 
  aNewValue )
{
  if ( aNewValue != _this->GaugeValue )
  {
    _this->GaugeValue = aNewValue;
    EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetGaugeValue, 
      ApplicationDeviceClass_OnSetGaugeValue ), 0 );
  }
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateGaugeValue()' */
void ApplicationDeviceClass__UpdateGaugeValue( void* _this, XInt32 aNewValue )
{
  ApplicationDeviceClass_UpdateGaugeValue((ApplicationDeviceClass)_this, aNewValue );
}

/* Default onget method for the property 'HardButtonCounter' */
XInt32 ApplicationDeviceClass_OnGetHardButtonCounter( ApplicationDeviceClass _this )
{
  return _this->HardButtonCounter;
}

/* Default onset method for the property 'HardButtonCounter' */
void ApplicationDeviceClass_OnSetHardButtonCounter( ApplicationDeviceClass _this, 
  XInt32 value )
{
  _this->HardButtonCounter = value;
}

/* Default onget method for the property 'LedStatus' */
XBool ApplicationDeviceClass_OnGetLedStatus( ApplicationDeviceClass _this )
{
  return _this->LedStatus;
}

/* Default onget method for the property 'GaugeValue' */
XInt32 ApplicationDeviceClass_OnGetGaugeValue( ApplicationDeviceClass _this )
{
  return _this->GaugeValue;
}

/* Default onset method for the property 'GaugeValue' */
void ApplicationDeviceClass_OnSetGaugeValue( ApplicationDeviceClass _this, XInt32 
  value )
{
  _this->GaugeValue = value;
}

/* Variants derived from the class : 'Application::DeviceClass' */
EW_DEFINE_CLASS_VARIANTS( ApplicationDeviceClass )
EW_END_OF_CLASS_VARIANTS( ApplicationDeviceClass )

/* Virtual Method Table (VMT) for the class : 'Application::DeviceClass' */
EW_DEFINE_CLASS( ApplicationDeviceClass, XObject, HardButtonEvent, HardButtonEvent, 
                 HardButtonEvent, HardButtonEvent, HardButtonCounter, HardButtonCounter, 
                 "Application::DeviceClass" )
EW_END_OF_CLASS( ApplicationDeviceClass )

/* This object represents an instance of the device interface implemented in the 
   class Application::DeviceClass. */
EW_DEFINE_AUTOOBJECT( ApplicationDevice, ApplicationDeviceClass )

/* Initializer for the auto object 'Application::Device' */
void ApplicationDevice__Init( ApplicationDeviceClass _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'Application::Device' */
EW_DEFINE_AUTOOBJECT_VARIANTS( ApplicationDevice )
EW_END_OF_AUTOOBJECT_VARIANTS( ApplicationDevice )

/* Initializer for the class 'Application::Custom' */
void ApplicationCustom__Init( ApplicationCustom _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( ApplicationCustom );

  /* ... then construct all embedded objects */
  ViewsImage__Init( &_this->Image, &_this->_XObject, 0 );
  WidgetSetPushButton__Init( &_this->PushButton, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_XObject, 0 );
  WidgetSetGauge__Init( &_this->Gauge, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationCustom );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( &_this->Image, _Const0000 );
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->PushButton, _Const0017 );
  WidgetSetPushButton_OnSetLabel( &_this->PushButton, EwLoadString( &_Const0018 ));
  CoreRectView__OnSetBounds( &_this->Text, _Const0019 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const001A ));
  ViewsText_OnSetColor( &_this->Text, _Const001B );
  CoreRectView__OnSetBounds( &_this->Gauge, _Const001C );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->Gauge, 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Image ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->PushButton ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Gauge ), 0 );
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ApplicationCustomBackground, 
  ResourcesBitmap ));
  _this->PushButton.OnActivate = EwNewSlot( _this, ApplicationCustom_SlotMoveBack );
  WidgetSetPushButton_OnSetAppearance( &_this->PushButton, EwGetAutoObject( &WidgetSetPushButton_Medium, 
  WidgetSetPushButtonConfig ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ApplicationFont, ResourcesFont ));
  WidgetSetGauge_OnSetOutlet( &_this->Gauge, EwNewRef( EwGetAutoObject( &ApplicationDevice, 
  ApplicationDeviceClass ), ApplicationDeviceClass_OnGetGaugeValue, ApplicationDeviceClass_OnSetGaugeValue ));
  WidgetSetGauge_OnSetAppearance( &_this->Gauge, EwGetAutoObject( &ApplicationGauge_custom, 
  WidgetSetGaugeConfig ));
}

/* Re-Initializer for the class 'Application::Custom' */
void ApplicationCustom__ReInit( ApplicationCustom _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsImage__ReInit( &_this->Image );
  WidgetSetPushButton__ReInit( &_this->PushButton );
  ViewsText__ReInit( &_this->Text );
  WidgetSetGauge__ReInit( &_this->Gauge );
}

/* Finalizer method for the class 'Application::Custom' */
void ApplicationCustom__Done( ApplicationCustom _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsImage__Done( &_this->Image );
  WidgetSetPushButton__Done( &_this->PushButton );
  ViewsText__Done( &_this->Text );
  WidgetSetGauge__Done( &_this->Gauge );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* 'C' function for method : 'Application::Custom.SlotMoveBack()' */
void ApplicationCustom_SlotMoveBack( ApplicationCustom _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( CoreGroup__IsDialog( _this, 0 ))
    CoreGroup_DismissDialog( _this->Super3.Owner, ((CoreGroup)_this ), 0, 0, 0, 
    EwNullSlot, EwNullSlot, 0 );
}

/* Variants derived from the class : 'Application::Custom' */
EW_DEFINE_CLASS_VARIANTS( ApplicationCustom )
EW_END_OF_CLASS_VARIANTS( ApplicationCustom )

/* Virtual Method Table (VMT) for the class : 'Application::Custom' */
EW_DEFINE_CLASS( ApplicationCustom, CoreGroup, Image, Image, Image, Image, _None, 
                 _None, "Application::Custom" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( ApplicationCustom )

/* Include a file containing the bitmap resource : 'Application::CustomBackground' */
#include "_ApplicationCustomBackground.h"

/* Table with links to derived variants of the bitmap resource : 'Application::CustomBackground' */
EW_RES_WITHOUT_VARIANTS( ApplicationCustomBackground )

/* Include a file containing the font resource : 'Application::Font' */
#include "_ApplicationFont.h"

/* Table with links to derived variants of the font resource : 'Application::Font' */
EW_RES_WITHOUT_VARIANTS( ApplicationFont )

/* This autoobject provides the default customization for the 'analog gauge' widget 
   (WidgetSet::Gauge) in its medium size variant. */
EW_DEFINE_AUTOOBJECT( ApplicationGauge_custom, WidgetSetGaugeConfig )

/* Initializer for the auto object 'Application::Gauge_custom' */
void ApplicationGauge_custom__Init( WidgetSetGaugeConfig _this )
{
  WidgetSetGaugeConfig_OnSetSwingElastic( _this, 0 );
  WidgetSetGaugeConfig_OnSetSwingDuration( _this, 300 );
  WidgetSetGaugeConfig_OnSetTrackLeftRoundedStart( _this, 1 );
  WidgetSetGaugeConfig_OnSetTrackLeftColor( _this, _Const001D );
  WidgetSetGaugeConfig_OnSetTrackLeftThickness( _this, 21.000000f );
  WidgetSetGaugeConfig_OnSetTrackLeftRadius( _this, 70.000000f );
  WidgetSetGaugeConfig_OnSetNeedleMaxAngle( _this, -45.000000f );
  WidgetSetGaugeConfig_OnSetNeedleMinAngle( _this, 225.000000f );
  WidgetSetGaugeConfig_OnSetNeedlePivot( _this, _Const001E );
  WidgetSetGaugeConfig_OnSetNeedle( _this, EwLoadResource( &WidgetSetGaugeNeedleMedium, 
  ResourcesBitmap ));
  WidgetSetGaugeConfig_OnSetCenterOffset( _this, _Const001F );
  WidgetSetGaugeConfig_OnSetScale( _this, EwLoadResource( &WidgetSetGaugeTrackMedium, 
  ResourcesBitmap ));
  WidgetSetGaugeConfig_OnSetWidgetMinSize( _this, _Const0020 );
}

/* Table with links to derived variants of the auto object : 'Application::Gauge_custom' */
EW_DEFINE_AUTOOBJECT_VARIANTS( ApplicationGauge_custom )
EW_END_OF_AUTOOBJECT_VARIANTS( ApplicationGauge_custom )

/* Embedded Wizard */
