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
#include "_CoreKeyPressHandler.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreTimer.h"
#include "_CoreView.h"
#include "_EffectsFloatEffect.h"
#include "_GraphicsArcPath.h"
#include "_GraphicsPath.h"
#include "_GraphicsWarpMatrix.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsFillPath.h"
#include "_ViewsFrame.h"
#include "_ViewsImage.h"
#include "_ViewsText.h"
#include "_ViewsWarpImage.h"
#include "_WidgetSetGauge.h"
#include "_WidgetSetGaugeConfig.h"
#include "_WidgetSetHorizontalValueBar.h"
#include "_WidgetSetHorizontalValueBarConfig.h"
#include "_WidgetSetPushButton.h"
#include "_WidgetSetPushButtonConfig.h"
#include "_WidgetSetToggleButton.h"
#include "_WidgetSetToggleButtonConfig.h"
#include "_WidgetSetWidgetConfig.h"
#include "Core.h"
#include "Effects.h"
#include "Graphics.h"
#include "Resources.h"
#include "Views.h"
#include "WidgetSet.h"

/* Constant values used in this 'C' module only. */
static const XPoint _Const0000 = { 45, 30 };
static const XColor _Const0001 = { 0x6C, 0x6E, 0x70, 0xFF };
static const XColor _Const0002 = { 0xA8, 0xAB, 0xAB, 0xFF };
static const XColor _Const0003 = { 0xA8, 0xAB, 0xAB, 0xAA };
static const XPoint _Const0004 = { 39, 39 };
static const XColor _Const0005 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XPoint _Const0006 = { 34, 34 };
static const XColor _Const0007 = { 0x00, 0x00, 0x00, 0xFF };
static const XRect _Const0008 = {{ 0, 0 }, { 200, 50 }};
static const XPoint _Const0009 = { 0, 0 };
static const XRect _Const000A = {{ 0, 0 }, { 120, 120 }};
static const XRect _Const000B = {{ 0, 0 }, { 150, 50 }};
static const XPoint _Const000C = { 0, 50 };
static const XPoint _Const000D = { 150, 50 };
static const XPoint _Const000E = { 150, 0 };

/* Include a file containing the bitmap resource : 'WidgetSet::CheckBoxMedium' */
#include "_WidgetSetCheckBoxMedium.h"

/* Table with links to derived variants of the bitmap resource : 'WidgetSet::CheckBoxMedium' */
EW_RES_WITHOUT_VARIANTS( WidgetSetCheckBoxMedium )

/* Include a file containing the bitmap resource : 'WidgetSet::GaugeNeedleMedium' */
#include "_WidgetSetGaugeNeedleMedium.h"

/* Table with links to derived variants of the bitmap resource : 'WidgetSet::GaugeNeedleMedium' */
EW_RES_WITHOUT_VARIANTS( WidgetSetGaugeNeedleMedium )

/* Include a file containing the bitmap resource : 'WidgetSet::GaugeTrackMedium' */
#include "_WidgetSetGaugeTrackMedium.h"

/* Table with links to derived variants of the bitmap resource : 'WidgetSet::GaugeTrackMedium' */
EW_RES_WITHOUT_VARIANTS( WidgetSetGaugeTrackMedium )

/* Include a file containing the bitmap resource : 'WidgetSet::HorizontalValueBarMedium' */
#include "_WidgetSetHorizontalValueBarMedium.h"

/* Table with links to derived variants of the bitmap resource : 'WidgetSet::HorizontalValueBarMedium' */
EW_RES_WITHOUT_VARIANTS( WidgetSetHorizontalValueBarMedium )

/* Include a file containing the bitmap resource : 'WidgetSet::PushButtonMedium' */
#include "_WidgetSetPushButtonMedium.h"

/* Table with links to derived variants of the bitmap resource : 'WidgetSet::PushButtonMedium' */
EW_RES_WITHOUT_VARIANTS( WidgetSetPushButtonMedium )

/* This autoobject provides the default customization for the 'horizontal value 
   bar' widget (WidgetSet::HorizontalValueBar) in its medium size variant. */
EW_DEFINE_AUTOOBJECT( WidgetSetHorizontalValueBar_Medium, WidgetSetHorizontalValueBarConfig )

/* Initializer for the auto object 'WidgetSet::HorizontalValueBar_Medium' */
void WidgetSetHorizontalValueBar_Medium__Init( WidgetSetHorizontalValueBarConfig _this )
{
  WidgetSetHorizontalValueBarConfig_OnSetTrackRightFrame( _this, 0 );
  WidgetSetHorizontalValueBarConfig_OnSetTrackRight( _this, EwLoadResource( &WidgetSetHorizontalValueBarMedium, 
  ResourcesBitmap ));
  WidgetSetHorizontalValueBarConfig_OnSetTrackLeftFrame( _this, 1 );
  WidgetSetHorizontalValueBarConfig_OnSetTrackLeft( _this, EwLoadResource( &WidgetSetHorizontalValueBarMedium, 
  ResourcesBitmap ));
  WidgetSetHorizontalValueBarConfig_OnSetWidgetMinSize( _this, _Const0000 );
}

/* Table with links to derived variants of the auto object : 'WidgetSet::HorizontalValueBar_Medium' */
EW_DEFINE_AUTOOBJECT_VARIANTS( WidgetSetHorizontalValueBar_Medium )
EW_END_OF_AUTOOBJECT_VARIANTS( WidgetSetHorizontalValueBar_Medium )

/* This autoobject provides one of the default customizations for the 'toggle' widget 
   (WidgetSet::ToggleButton) in its medium size variant. With this customization 
   the toggle button appears as a 'check box'. */
EW_DEFINE_AUTOOBJECT( WidgetSetCheckBox_Medium, WidgetSetToggleButtonConfig )

/* Initializer for the auto object 'WidgetSet::CheckBox_Medium' */
void WidgetSetCheckBox_Medium__Init( WidgetSetToggleButtonConfig _this )
{
  WidgetSetToggleButtonConfig_OnSetLabelOnColorActive( _this, _Const0001 );
  WidgetSetToggleButtonConfig_OnSetLabelOnColorFocused( _this, _Const0001 );
  WidgetSetToggleButtonConfig_OnSetLabelOnColorDisabled( _this, _Const0002 );
  WidgetSetToggleButtonConfig_OnSetLabelOnColorDefault( _this, _Const0001 );
  WidgetSetToggleButtonConfig_OnSetLabelOffColorActive( _this, _Const0001 );
  WidgetSetToggleButtonConfig_OnSetLabelOffColorFocused( _this, _Const0001 );
  WidgetSetToggleButtonConfig_OnSetLabelOffColorDisabled( _this, _Const0002 );
  WidgetSetToggleButtonConfig_OnSetLabelOffColorDefault( _this, _Const0001 );
  WidgetSetToggleButtonConfig_OnSetLabelMarginLeft( _this, 50 );
  WidgetSetToggleButtonConfig_OnSetIconOnTintActive( _this, _Const0001 );
  WidgetSetToggleButtonConfig_OnSetIconOnTintFocused( _this, _Const0001 );
  WidgetSetToggleButtonConfig_OnSetIconOnTintDisabled( _this, _Const0003 );
  WidgetSetToggleButtonConfig_OnSetIconOnTintDefault( _this, _Const0001 );
  WidgetSetToggleButtonConfig_OnSetIconOffTintActive( _this, _Const0001 );
  WidgetSetToggleButtonConfig_OnSetIconOffTintFocused( _this, _Const0001 );
  WidgetSetToggleButtonConfig_OnSetIconOffTintDisabled( _this, _Const0003 );
  WidgetSetToggleButtonConfig_OnSetIconOffTintDefault( _this, _Const0001 );
  WidgetSetToggleButtonConfig_OnSetIconMarginLeft( _this, 50 );
  WidgetSetToggleButtonConfig_OnSetLabelAlignment( _this, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  WidgetSetToggleButtonConfig_OnSetLabelOnFont( _this, EwLoadResource( &ResourcesFontMedium, 
  ResourcesFont ));
  WidgetSetToggleButtonConfig_OnSetLabelOffFont( _this, EwLoadResource( &ResourcesFontMedium, 
  ResourcesFont ));
  WidgetSetToggleButtonConfig_OnSetIconAlignment( _this, ViewsImageAlignmentAlignHorzLeft 
  | ViewsImageAlignmentAlignVertCenter );
  WidgetSetToggleButtonConfig_OnSetFaceLayout( _this, CoreLayoutAlignToLeft );
  WidgetSetToggleButtonConfig_OnSetFaceOnFrameActive( _this, 7 );
  WidgetSetToggleButtonConfig_OnSetFaceOnFrameFocused( _this, 5 );
  WidgetSetToggleButtonConfig_OnSetFaceOnFrameDisabled( _this, 1 );
  WidgetSetToggleButtonConfig_OnSetFaceOnFrameDefault( _this, 3 );
  WidgetSetToggleButtonConfig_OnSetFaceOnActive( _this, EwLoadResource( &WidgetSetCheckBoxMedium, 
  ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOnFocused( _this, EwLoadResource( &WidgetSetCheckBoxMedium, 
  ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOnDisabled( _this, EwLoadResource( &WidgetSetCheckBoxMedium, 
  ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOnDefault( _this, EwLoadResource( &WidgetSetCheckBoxMedium, 
  ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOffFrameActive( _this, 6 );
  WidgetSetToggleButtonConfig_OnSetFaceOffFrameFocused( _this, 4 );
  WidgetSetToggleButtonConfig_OnSetFaceOffFrameDisabled( _this, 0 );
  WidgetSetToggleButtonConfig_OnSetFaceOffFrameDefault( _this, 2 );
  WidgetSetToggleButtonConfig_OnSetFaceOffActive( _this, EwLoadResource( &WidgetSetCheckBoxMedium, 
  ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOffFocused( _this, EwLoadResource( &WidgetSetCheckBoxMedium, 
  ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOffDisabled( _this, EwLoadResource( &WidgetSetCheckBoxMedium, 
  ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOffDefault( _this, EwLoadResource( &WidgetSetCheckBoxMedium, 
  ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetWidgetMinSize( _this, _Const0004 );
}

/* Table with links to derived variants of the auto object : 'WidgetSet::CheckBox_Medium' */
EW_DEFINE_AUTOOBJECT_VARIANTS( WidgetSetCheckBox_Medium )
EW_END_OF_AUTOOBJECT_VARIANTS( WidgetSetCheckBox_Medium )

/* This autoobject provides the default customization for the 'push button' widget 
   (WidgetSet::PushButton) in its medium size variant. */
EW_DEFINE_AUTOOBJECT( WidgetSetPushButton_Medium, WidgetSetPushButtonConfig )

/* Initializer for the auto object 'WidgetSet::PushButton_Medium' */
void WidgetSetPushButton_Medium__Init( WidgetSetPushButtonConfig _this )
{
  WidgetSetPushButtonConfig_OnSetLabelColorActive( _this, _Const0005 );
  WidgetSetPushButtonConfig_OnSetLabelColorFocused( _this, _Const0005 );
  WidgetSetPushButtonConfig_OnSetLabelColorDisabled( _this, _Const0002 );
  WidgetSetPushButtonConfig_OnSetLabelColorDefault( _this, _Const0001 );
  WidgetSetPushButtonConfig_OnSetLabelMarginBottom( _this, 6 );
  WidgetSetPushButtonConfig_OnSetLabelMarginTop( _this, 6 );
  WidgetSetPushButtonConfig_OnSetLabelMarginRight( _this, 6 );
  WidgetSetPushButtonConfig_OnSetLabelMarginLeft( _this, 6 );
  WidgetSetPushButtonConfig_OnSetIconTintDisabled( _this, _Const0003 );
  WidgetSetPushButtonConfig_OnSetIconTintDefault( _this, _Const0001 );
  WidgetSetPushButtonConfig_OnSetIconMarginBottom( _this, 6 );
  WidgetSetPushButtonConfig_OnSetIconMarginTop( _this, 6 );
  WidgetSetPushButtonConfig_OnSetIconMarginRight( _this, 6 );
  WidgetSetPushButtonConfig_OnSetIconMarginLeft( _this, 6 );
  WidgetSetPushButtonConfig_OnSetLabelFont( _this, EwLoadResource( &ResourcesFontMedium, 
  ResourcesFont ));
  WidgetSetPushButtonConfig_OnSetFaceFrameActive( _this, 3 );
  WidgetSetPushButtonConfig_OnSetFaceFrameFocused( _this, 2 );
  WidgetSetPushButtonConfig_OnSetFaceFrameDisabled( _this, 0 );
  WidgetSetPushButtonConfig_OnSetFaceFrameDefault( _this, 1 );
  WidgetSetPushButtonConfig_OnSetFaceActive( _this, EwLoadResource( &WidgetSetPushButtonMedium, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceFocused( _this, EwLoadResource( &WidgetSetPushButtonMedium, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceDisabled( _this, EwLoadResource( &WidgetSetPushButtonMedium, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceDefault( _this, EwLoadResource( &WidgetSetPushButtonMedium, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetWidgetMinSize( _this, _Const0006 );
}

/* Table with links to derived variants of the auto object : 'WidgetSet::PushButton_Medium' */
EW_DEFINE_AUTOOBJECT_VARIANTS( WidgetSetPushButton_Medium )
EW_END_OF_AUTOOBJECT_VARIANTS( WidgetSetPushButton_Medium )

/* Initializer for the class 'WidgetSet::HorizontalValueBarConfig' */
void WidgetSetHorizontalValueBarConfig__Init( WidgetSetHorizontalValueBarConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  WidgetSetWidgetConfig__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( WidgetSetHorizontalValueBarConfig );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WidgetSetHorizontalValueBarConfig );

  /* ... and initialize objects, variables, properties, etc. */
  _this->SwingElastic = 1;
  _this->SwingDuration = 500;
  _this->CoverTint = _Const0005;
  _this->CoverFrame = -1;
  _this->NeedleTint = _Const0005;
  _this->NeedleFrame = -1;
  _this->TrackRightTint = _Const0005;
  _this->TrackRightFrame = -1;
  _this->TrackLeftTint = _Const0005;
  _this->TrackLeftFrame = -1;
  _this->FaceTint = _Const0005;
  _this->FaceFrame = -1;
}

/* Re-Initializer for the class 'WidgetSet::HorizontalValueBarConfig' */
void WidgetSetHorizontalValueBarConfig__ReInit( WidgetSetHorizontalValueBarConfig _this )
{
  /* At first re-initialize the super class ... */
  WidgetSetWidgetConfig__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'WidgetSet::HorizontalValueBarConfig' */
void WidgetSetHorizontalValueBarConfig__Done( WidgetSetHorizontalValueBarConfig _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( WidgetSetWidgetConfig );

  /* Don't forget to deinitialize the super class ... */
  WidgetSetWidgetConfig__Done( &_this->_Super );
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackRightFrame()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackRightFrame( WidgetSetHorizontalValueBarConfig _this, 
  XInt32 value )
{
  if ( _this->TrackRightFrame == value )
    return;

  _this->TrackRightFrame = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackRight()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackRight( WidgetSetHorizontalValueBarConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackRight == value )
    return;

  _this->TrackRight = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackLeftFrame()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackLeftFrame( WidgetSetHorizontalValueBarConfig _this, 
  XInt32 value )
{
  if ( _this->TrackLeftFrame == value )
    return;

  _this->TrackLeftFrame = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackLeft()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackLeft( WidgetSetHorizontalValueBarConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackLeft == value )
    return;

  _this->TrackLeft = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetWidgetMinSize()' */
void WidgetSetHorizontalValueBarConfig_OnSetWidgetMinSize( WidgetSetHorizontalValueBarConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->WidgetMinSize, value ))
    return;

  _this->WidgetMinSize = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::HorizontalValueBarConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetHorizontalValueBarConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetHorizontalValueBarConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::HorizontalValueBarConfig' */
EW_DEFINE_CLASS( WidgetSetHorizontalValueBarConfig, WidgetSetWidgetConfig, Cover, 
                 SwingDuration, SwingDuration, SwingDuration, SwingDuration, SwingDuration, 
                 "WidgetSet::HorizontalValueBarConfig" )
EW_END_OF_CLASS( WidgetSetHorizontalValueBarConfig )

/* Initializer for the class 'WidgetSet::GaugeConfig' */
void WidgetSetGaugeConfig__Init( WidgetSetGaugeConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  WidgetSetWidgetConfig__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( WidgetSetGaugeConfig );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WidgetSetGaugeConfig );

  /* ... and initialize objects, variables, properties, etc. */
  _this->SwingElastic = 1;
  _this->SwingDuration = 500;
  _this->TrackRightColor = _Const0005;
  _this->TrackLeftColor = _Const0005;
  _this->CoverTint = _Const0005;
  _this->CoverFrame = -1;
  _this->NeedleMaxAngle = 45.000000f;
  _this->NeedleMinAngle = 135.000000f;
  _this->NeedleRotate = 1;
  _this->NeedleTint = _Const0005;
  _this->NeedleFrame = -1;
  _this->ScaleTint = _Const0005;
  _this->ScaleFrame = -1;
}

/* Re-Initializer for the class 'WidgetSet::GaugeConfig' */
void WidgetSetGaugeConfig__ReInit( WidgetSetGaugeConfig _this )
{
  /* At first re-initialize the super class ... */
  WidgetSetWidgetConfig__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'WidgetSet::GaugeConfig' */
void WidgetSetGaugeConfig__Done( WidgetSetGaugeConfig _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( WidgetSetWidgetConfig );

  /* Don't forget to deinitialize the super class ... */
  WidgetSetWidgetConfig__Done( &_this->_Super );
}

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetSwingElastic()' */
void WidgetSetGaugeConfig_OnSetSwingElastic( WidgetSetGaugeConfig _this, XBool value )
{
  if ( _this->SwingElastic == value )
    return;

  _this->SwingElastic = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetSwingDuration()' */
void WidgetSetGaugeConfig_OnSetSwingDuration( WidgetSetGaugeConfig _this, XInt32 
  value )
{
  if ( _this->SwingDuration == value )
    return;

  _this->SwingDuration = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetTrackLeftRoundedStart()' */
void WidgetSetGaugeConfig_OnSetTrackLeftRoundedStart( WidgetSetGaugeConfig _this, 
  XBool value )
{
  if ( _this->TrackLeftRoundedStart == value )
    return;

  _this->TrackLeftRoundedStart = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetTrackLeftColor()' */
void WidgetSetGaugeConfig_OnSetTrackLeftColor( WidgetSetGaugeConfig _this, XColor 
  value )
{
  if ( !EwCompColor( _this->TrackLeftColor, value ))
    return;

  _this->TrackLeftColor = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetTrackLeftThickness()' */
void WidgetSetGaugeConfig_OnSetTrackLeftThickness( WidgetSetGaugeConfig _this, XFloat 
  value )
{
  if ( _this->TrackLeftThickness == value )
    return;

  _this->TrackLeftThickness = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetTrackLeftRadius()' */
void WidgetSetGaugeConfig_OnSetTrackLeftRadius( WidgetSetGaugeConfig _this, XFloat 
  value )
{
  if ( _this->TrackLeftRadius == value )
    return;

  _this->TrackLeftRadius = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetNeedleMaxAngle()' */
void WidgetSetGaugeConfig_OnSetNeedleMaxAngle( WidgetSetGaugeConfig _this, XFloat 
  value )
{
  if ( _this->NeedleMaxAngle == value )
    return;

  _this->NeedleMaxAngle = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetNeedleMinAngle()' */
void WidgetSetGaugeConfig_OnSetNeedleMinAngle( WidgetSetGaugeConfig _this, XFloat 
  value )
{
  if ( _this->NeedleMinAngle == value )
    return;

  _this->NeedleMinAngle = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetNeedlePivot()' */
void WidgetSetGaugeConfig_OnSetNeedlePivot( WidgetSetGaugeConfig _this, XPoint value )
{
  if ( !EwCompPoint( _this->NeedlePivot, value ))
    return;

  _this->NeedlePivot = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetNeedle()' */
void WidgetSetGaugeConfig_OnSetNeedle( WidgetSetGaugeConfig _this, ResourcesBitmap 
  value )
{
  if ( _this->Needle == value )
    return;

  _this->Needle = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetCenterOffset()' */
void WidgetSetGaugeConfig_OnSetCenterOffset( WidgetSetGaugeConfig _this, XPoint 
  value )
{
  if ( !EwCompPoint( _this->CenterOffset, value ))
    return;

  _this->CenterOffset = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetScale()' */
void WidgetSetGaugeConfig_OnSetScale( WidgetSetGaugeConfig _this, ResourcesBitmap 
  value )
{
  if ( _this->Scale == value )
    return;

  _this->Scale = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetWidgetMinSize()' */
void WidgetSetGaugeConfig_OnSetWidgetMinSize( WidgetSetGaugeConfig _this, XPoint 
  value )
{
  if ( !EwCompPoint( _this->WidgetMinSize, value ))
    return;

  _this->WidgetMinSize = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::GaugeConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetGaugeConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetGaugeConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::GaugeConfig' */
EW_DEFINE_CLASS( WidgetSetGaugeConfig, WidgetSetWidgetConfig, Cover, SwingDuration, 
                 SwingDuration, SwingDuration, SwingDuration, SwingDuration, "WidgetSet::GaugeConfig" )
EW_END_OF_CLASS( WidgetSetGaugeConfig )

/* Initializer for the class 'WidgetSet::ToggleButtonConfig' */
void WidgetSetToggleButtonConfig__Init( WidgetSetToggleButtonConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  WidgetSetWidgetConfig__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( WidgetSetToggleButtonConfig );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WidgetSetToggleButtonConfig );

  /* ... and initialize objects, variables, properties, etc. */
  _this->PressedFeedbackDuration = 50;
  _this->KeyCode = CoreKeyCodeEnter;
  _this->LabelOnColorActive = _Const0007;
  _this->LabelOnColorFocused = _Const0007;
  _this->LabelOnColorDisabled = _Const0007;
  _this->LabelOnColorDefault = _Const0007;
  _this->LabelOffColorActive = _Const0007;
  _this->LabelOffColorFocused = _Const0007;
  _this->LabelOffColorDisabled = _Const0007;
  _this->LabelOffColorDefault = _Const0007;
  _this->IconOnTintActive = _Const0005;
  _this->IconOnTintFocused = _Const0005;
  _this->IconOnTintDisabled = _Const0005;
  _this->IconOnTintDefault = _Const0005;
  _this->IconOffTintActive = _Const0005;
  _this->IconOffTintFocused = _Const0005;
  _this->IconOffTintDisabled = _Const0005;
  _this->IconOffTintDefault = _Const0005;
  _this->LabelAlignment = ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter;
  _this->IconAlignment = ViewsImageAlignmentAlignHorzCenter | ViewsImageAlignmentAlignVertCenter;
  _this->FaceLayout = CoreLayoutAlignToBottom | CoreLayoutAlignToLeft | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert;
  _this->FaceOnTintActive = _Const0005;
  _this->FaceOnTintFocused = _Const0005;
  _this->FaceOnTintDisabled = _Const0005;
  _this->FaceOnTintDefault = _Const0005;
  _this->FaceOnFrameActive = -1;
  _this->FaceOnFrameFocused = -1;
  _this->FaceOnFrameDisabled = -1;
  _this->FaceOnFrameDefault = -1;
  _this->FaceOffTintActive = _Const0005;
  _this->FaceOffTintFocused = _Const0005;
  _this->FaceOffTintDisabled = _Const0005;
  _this->FaceOffTintDefault = _Const0005;
  _this->FaceOffFrameActive = -1;
  _this->FaceOffFrameFocused = -1;
  _this->FaceOffFrameDisabled = -1;
  _this->FaceOffFrameDefault = -1;
}

/* Re-Initializer for the class 'WidgetSet::ToggleButtonConfig' */
void WidgetSetToggleButtonConfig__ReInit( WidgetSetToggleButtonConfig _this )
{
  /* At first re-initialize the super class ... */
  WidgetSetWidgetConfig__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'WidgetSet::ToggleButtonConfig' */
void WidgetSetToggleButtonConfig__Done( WidgetSetToggleButtonConfig _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( WidgetSetWidgetConfig );

  /* Don't forget to deinitialize the super class ... */
  WidgetSetWidgetConfig__Done( &_this->_Super );
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnColorActive()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOnColorActive, value ))
    return;

  _this->LabelOnColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOnColorFocused, value ))
    return;

  _this->LabelOnColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOnColorDisabled, value ))
    return;

  _this->LabelOnColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOnColorDefault, value ))
    return;

  _this->LabelOnColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffColorActive()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOffColorActive, value ))
    return;

  _this->LabelOffColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOffColorFocused, value ))
    return;

  _this->LabelOffColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOffColorDisabled, value ))
    return;

  _this->LabelOffColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOffColorDefault, value ))
    return;

  _this->LabelOffColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelMarginLeft()' */
void WidgetSetToggleButtonConfig_OnSetLabelMarginLeft( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->LabelMarginLeft == value )
    return;

  _this->LabelMarginLeft = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOnTintActive()' */
void WidgetSetToggleButtonConfig_OnSetIconOnTintActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOnTintActive, value ))
    return;

  _this->IconOnTintActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOnTintFocused()' */
void WidgetSetToggleButtonConfig_OnSetIconOnTintFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOnTintFocused, value ))
    return;

  _this->IconOnTintFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOnTintDisabled()' */
void WidgetSetToggleButtonConfig_OnSetIconOnTintDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOnTintDisabled, value ))
    return;

  _this->IconOnTintDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOnTintDefault()' */
void WidgetSetToggleButtonConfig_OnSetIconOnTintDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOnTintDefault, value ))
    return;

  _this->IconOnTintDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOffTintActive()' */
void WidgetSetToggleButtonConfig_OnSetIconOffTintActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOffTintActive, value ))
    return;

  _this->IconOffTintActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOffTintFocused()' */
void WidgetSetToggleButtonConfig_OnSetIconOffTintFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOffTintFocused, value ))
    return;

  _this->IconOffTintFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOffTintDisabled()' */
void WidgetSetToggleButtonConfig_OnSetIconOffTintDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOffTintDisabled, value ))
    return;

  _this->IconOffTintDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOffTintDefault()' */
void WidgetSetToggleButtonConfig_OnSetIconOffTintDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOffTintDefault, value ))
    return;

  _this->IconOffTintDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconMarginLeft()' */
void WidgetSetToggleButtonConfig_OnSetIconMarginLeft( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->IconMarginLeft == value )
    return;

  _this->IconMarginLeft = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelAlignment()' */
void WidgetSetToggleButtonConfig_OnSetLabelAlignment( WidgetSetToggleButtonConfig _this, 
  XSet value )
{
  if ( _this->LabelAlignment == value )
    return;

  _this->LabelAlignment = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnFont()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnFont( WidgetSetToggleButtonConfig _this, 
  ResourcesFont value )
{
  if ( _this->LabelOnFont == value )
    return;

  _this->LabelOnFont = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffFont()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffFont( WidgetSetToggleButtonConfig _this, 
  ResourcesFont value )
{
  if ( _this->LabelOffFont == value )
    return;

  _this->LabelOffFont = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconAlignment()' */
void WidgetSetToggleButtonConfig_OnSetIconAlignment( WidgetSetToggleButtonConfig _this, 
  XSet value )
{
  if ( _this->IconAlignment == value )
    return;

  _this->IconAlignment = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceLayout()' */
void WidgetSetToggleButtonConfig_OnSetFaceLayout( WidgetSetToggleButtonConfig _this, 
  XSet value )
{
  if ( _this->FaceLayout == value )
    return;

  _this->FaceLayout = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnFrameActive()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnFrameActive( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOnFrameActive == value )
    return;

  _this->FaceOnFrameActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnFrameFocused()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnFrameFocused( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOnFrameFocused == value )
    return;

  _this->FaceOnFrameFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnFrameDisabled()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnFrameDisabled( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOnFrameDisabled == value )
    return;

  _this->FaceOnFrameDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnFrameDefault()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnFrameDefault( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOnFrameDefault == value )
    return;

  _this->FaceOnFrameDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnActive()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnActive( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOnActive == value )
    return;

  _this->FaceOnActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnFocused()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnFocused( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOnFocused == value )
    return;

  _this->FaceOnFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnDisabled()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnDisabled( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOnDisabled == value )
    return;

  _this->FaceOnDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnDefault()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnDefault( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOnDefault == value )
    return;

  _this->FaceOnDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffFrameActive()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffFrameActive( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOffFrameActive == value )
    return;

  _this->FaceOffFrameActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffFrameFocused()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffFrameFocused( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOffFrameFocused == value )
    return;

  _this->FaceOffFrameFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffFrameDisabled()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffFrameDisabled( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOffFrameDisabled == value )
    return;

  _this->FaceOffFrameDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffFrameDefault()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffFrameDefault( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOffFrameDefault == value )
    return;

  _this->FaceOffFrameDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffActive()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffActive( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOffActive == value )
    return;

  _this->FaceOffActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffFocused()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffFocused( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOffFocused == value )
    return;

  _this->FaceOffFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffDisabled()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffDisabled( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOffDisabled == value )
    return;

  _this->FaceOffDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffDefault()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffDefault( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOffDefault == value )
    return;

  _this->FaceOffDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetWidgetMinSize()' */
void WidgetSetToggleButtonConfig_OnSetWidgetMinSize( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->WidgetMinSize, value ))
    return;

  _this->WidgetMinSize = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::ToggleButtonConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetToggleButtonConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetToggleButtonConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::ToggleButtonConfig' */
EW_DEFINE_CLASS( WidgetSetToggleButtonConfig, WidgetSetWidgetConfig, LabelOnFont, 
                 PressedFeedbackDuration, PressedFeedbackDuration, PressedFeedbackDuration, 
                 PressedFeedbackDuration, PressedFeedbackDuration, "WidgetSet::ToggleButtonConfig" )
EW_END_OF_CLASS( WidgetSetToggleButtonConfig )

/* Initializer for the class 'WidgetSet::PushButtonConfig' */
void WidgetSetPushButtonConfig__Init( WidgetSetPushButtonConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  WidgetSetWidgetConfig__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( WidgetSetPushButtonConfig );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WidgetSetPushButtonConfig );

  /* ... and initialize objects, variables, properties, etc. */
  _this->PressedFeedbackDuration = 50;
  _this->KeyCode = CoreKeyCodeEnter;
  _this->LabelColorActive = _Const0007;
  _this->LabelColorFocused = _Const0007;
  _this->LabelColorDisabled = _Const0007;
  _this->LabelColorDefault = _Const0007;
  _this->IconTintActive = _Const0005;
  _this->IconTintFocused = _Const0005;
  _this->IconTintDisabled = _Const0005;
  _this->IconTintDefault = _Const0005;
  _this->LabelAlignment = ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter;
  _this->IconAlignment = ViewsImageAlignmentAlignHorzCenter | ViewsImageAlignmentAlignVertCenter;
  _this->FaceLayout = CoreLayoutAlignToBottom | CoreLayoutAlignToLeft | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert;
  _this->FaceTintActive = _Const0005;
  _this->FaceTintFocused = _Const0005;
  _this->FaceTintDisabled = _Const0005;
  _this->FaceTintDefault = _Const0005;
  _this->FaceFrameActive = -1;
  _this->FaceFrameFocused = -1;
  _this->FaceFrameDisabled = -1;
  _this->FaceFrameDefault = -1;
}

/* Re-Initializer for the class 'WidgetSet::PushButtonConfig' */
void WidgetSetPushButtonConfig__ReInit( WidgetSetPushButtonConfig _this )
{
  /* At first re-initialize the super class ... */
  WidgetSetWidgetConfig__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'WidgetSet::PushButtonConfig' */
void WidgetSetPushButtonConfig__Done( WidgetSetPushButtonConfig _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( WidgetSetWidgetConfig );

  /* Don't forget to deinitialize the super class ... */
  WidgetSetWidgetConfig__Done( &_this->_Super );
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelColorActive()' */
void WidgetSetPushButtonConfig_OnSetLabelColorActive( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelColorActive, value ))
    return;

  _this->LabelColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelColorFocused()' */
void WidgetSetPushButtonConfig_OnSetLabelColorFocused( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelColorFocused, value ))
    return;

  _this->LabelColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelColorDisabled()' */
void WidgetSetPushButtonConfig_OnSetLabelColorDisabled( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelColorDisabled, value ))
    return;

  _this->LabelColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelColorDefault()' */
void WidgetSetPushButtonConfig_OnSetLabelColorDefault( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelColorDefault, value ))
    return;

  _this->LabelColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelMarginBottom()' */
void WidgetSetPushButtonConfig_OnSetLabelMarginBottom( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->LabelMarginBottom == value )
    return;

  _this->LabelMarginBottom = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelMarginTop()' */
void WidgetSetPushButtonConfig_OnSetLabelMarginTop( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->LabelMarginTop == value )
    return;

  _this->LabelMarginTop = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelMarginRight()' */
void WidgetSetPushButtonConfig_OnSetLabelMarginRight( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->LabelMarginRight == value )
    return;

  _this->LabelMarginRight = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelMarginLeft()' */
void WidgetSetPushButtonConfig_OnSetLabelMarginLeft( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->LabelMarginLeft == value )
    return;

  _this->LabelMarginLeft = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconTintDisabled()' */
void WidgetSetPushButtonConfig_OnSetIconTintDisabled( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconTintDisabled, value ))
    return;

  _this->IconTintDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconTintDefault()' */
void WidgetSetPushButtonConfig_OnSetIconTintDefault( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconTintDefault, value ))
    return;

  _this->IconTintDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconMarginBottom()' */
void WidgetSetPushButtonConfig_OnSetIconMarginBottom( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->IconMarginBottom == value )
    return;

  _this->IconMarginBottom = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconMarginTop()' */
void WidgetSetPushButtonConfig_OnSetIconMarginTop( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->IconMarginTop == value )
    return;

  _this->IconMarginTop = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconMarginRight()' */
void WidgetSetPushButtonConfig_OnSetIconMarginRight( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->IconMarginRight == value )
    return;

  _this->IconMarginRight = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconMarginLeft()' */
void WidgetSetPushButtonConfig_OnSetIconMarginLeft( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->IconMarginLeft == value )
    return;

  _this->IconMarginLeft = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelFont()' */
void WidgetSetPushButtonConfig_OnSetLabelFont( WidgetSetPushButtonConfig _this, 
  ResourcesFont value )
{
  if ( _this->LabelFont == value )
    return;

  _this->LabelFont = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceFrameActive()' */
void WidgetSetPushButtonConfig_OnSetFaceFrameActive( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceFrameActive == value )
    return;

  _this->FaceFrameActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceFrameFocused()' */
void WidgetSetPushButtonConfig_OnSetFaceFrameFocused( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceFrameFocused == value )
    return;

  _this->FaceFrameFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceFrameDisabled()' */
void WidgetSetPushButtonConfig_OnSetFaceFrameDisabled( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceFrameDisabled == value )
    return;

  _this->FaceFrameDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceFrameDefault()' */
void WidgetSetPushButtonConfig_OnSetFaceFrameDefault( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceFrameDefault == value )
    return;

  _this->FaceFrameDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceActive()' */
void WidgetSetPushButtonConfig_OnSetFaceActive( WidgetSetPushButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceActive == value )
    return;

  _this->FaceActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceFocused()' */
void WidgetSetPushButtonConfig_OnSetFaceFocused( WidgetSetPushButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceFocused == value )
    return;

  _this->FaceFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceDisabled()' */
void WidgetSetPushButtonConfig_OnSetFaceDisabled( WidgetSetPushButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceDisabled == value )
    return;

  _this->FaceDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceDefault()' */
void WidgetSetPushButtonConfig_OnSetFaceDefault( WidgetSetPushButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceDefault == value )
    return;

  _this->FaceDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetWidgetMinSize()' */
void WidgetSetPushButtonConfig_OnSetWidgetMinSize( WidgetSetPushButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->WidgetMinSize, value ))
    return;

  _this->WidgetMinSize = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::PushButtonConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetPushButtonConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetPushButtonConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::PushButtonConfig' */
EW_DEFINE_CLASS( WidgetSetPushButtonConfig, WidgetSetWidgetConfig, LabelFont, PressedFeedbackDuration, 
                 PressedFeedbackDuration, PressedFeedbackDuration, PressedFeedbackDuration, 
                 PressedFeedbackDuration, "WidgetSet::PushButtonConfig" )
EW_END_OF_CLASS( WidgetSetPushButtonConfig )

/* Initializer for the class 'WidgetSet::WidgetConfig' */
void WidgetSetWidgetConfig__Init( WidgetSetWidgetConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( WidgetSetWidgetConfig );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WidgetSetWidgetConfig );
}

/* Re-Initializer for the class 'WidgetSet::WidgetConfig' */
void WidgetSetWidgetConfig__ReInit( WidgetSetWidgetConfig _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'WidgetSet::WidgetConfig' */
void WidgetSetWidgetConfig__Done( WidgetSetWidgetConfig _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_Super );
}

/* 'C' function for method : 'WidgetSet::WidgetConfig.onInvalidate()' */
void WidgetSetWidgetConfig_onInvalidate( WidgetSetWidgetConfig _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwNotifyObjObservers((XObject)_this, 0 );
}

/* Variants derived from the class : 'WidgetSet::WidgetConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetWidgetConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetWidgetConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::WidgetConfig' */
EW_DEFINE_CLASS( WidgetSetWidgetConfig, XObject, _None, _None, _None, _None, _None, 
                 _None, "WidgetSet::WidgetConfig" )
EW_END_OF_CLASS( WidgetSetWidgetConfig )

/* Initializer for the class 'WidgetSet::HorizontalValueBar' */
void WidgetSetHorizontalValueBar__Init( WidgetSetHorizontalValueBar _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( WidgetSetHorizontalValueBar );

  /* ... then construct all embedded objects */
  EffectsFloatEffect__Init( &_this->FloatEffect, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WidgetSetHorizontalValueBar );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0008 );
  _this->setupCurrentPos = 1;
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->FloatEffect, EffectsTimingBack_Out );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->FloatEffect, 1 );
  _this->MaxValue = 100;
  _this->CurrentValue = 50;
  _this->FloatEffect.Super1.OnFinished = EwNewSlot( _this, WidgetSetHorizontalValueBar_onEndFloatEffect );
  _this->FloatEffect.Super1.OnAnimate = EwNewSlot( _this, WidgetSetHorizontalValueBar_onFloatEffect );
}

/* Re-Initializer for the class 'WidgetSet::HorizontalValueBar' */
void WidgetSetHorizontalValueBar__ReInit( WidgetSetHorizontalValueBar _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  EffectsFloatEffect__ReInit( &_this->FloatEffect );
}

/* Finalizer method for the class 'WidgetSet::HorizontalValueBar' */
void WidgetSetHorizontalValueBar__Done( WidgetSetHorizontalValueBar _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  EffectsFloatEffect__Done( &_this->FloatEffect );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.OnSetBounds()' */
void WidgetSetHorizontalValueBar_OnSetBounds( WidgetSetHorizontalValueBar _this, 
  XRect value )
{
  if ( EwCompRect( _this->Super2.Bounds, value ))
    EwPostSignal( _this->OnUpdate, ((XObject)_this ));

  if ( _this->Appearance != 0 )
  {
    XPoint cs = EwGetRectSize( value );
    XPoint ns = cs;
    XPoint delta;

    if ( ns.X < _this->Appearance->WidgetMinSize.X )
      ns.X = _this->Appearance->WidgetMinSize.X;

    if ( ns.Y < _this->Appearance->WidgetMinSize.Y )
      ns.Y = _this->Appearance->WidgetMinSize.Y;

    if (( _this->Appearance->WidgetMaxSize.X > 0 ) && ( ns.X > _this->Appearance->WidgetMaxSize.X ))
      ns.X = _this->Appearance->WidgetMaxSize.X;

    if (( _this->Appearance->WidgetMaxSize.Y > 0 ) && ( ns.Y > _this->Appearance->WidgetMaxSize.Y ))
      ns.Y = _this->Appearance->WidgetMaxSize.Y;

    delta = EwMovePointNeg( ns, cs );

    if ( delta.X != 0 )
    {
      XBool alignToLeft = (( _this->Super3.Layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( _this->Super3.Layout & CoreLayoutAlignToRight ) == 
        CoreLayoutAlignToRight );

      if ( alignToLeft && !alignToRight )
        value.Point2.X = ( value.Point2.X + delta.X );
      else
        if ( !alignToLeft && alignToRight )
          value.Point1.X = ( value.Point1.X - delta.X );
        else
        {
          value.Point1.X = ( value.Point1.X - ( delta.X / 2 ));
          value.Point2.X = ( value.Point1.X + ns.X );
        }
    }

    if ( delta.Y != 0 )
    {
      XBool alignToTop = (( _this->Super3.Layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( _this->Super3.Layout & CoreLayoutAlignToBottom ) 
        == CoreLayoutAlignToBottom );

      if ( alignToTop && !alignToBottom )
        value.Point2.Y = ( value.Point2.Y + delta.Y );
      else
        if ( !alignToTop && alignToBottom )
          value.Point1.Y = ( value.Point1.Y - delta.Y );
        else
        {
          value.Point1.Y = ( value.Point1.Y - ( delta.Y / 2 ));
          value.Point2.Y = ( value.Point1.Y + ns.Y );
        }
    }
  }

  CoreGroup_OnSetBounds((CoreGroup)_this, value );
}

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
void WidgetSetHorizontalValueBar_UpdateViewState( WidgetSetHorizontalValueBar _this, 
  XSet aState )
{
  XBool needsFace;
  XBool needsTrackLeft;
  XBool needsTrackRight;
  XBool needsNeedle;
  XBool needsCover;
  XBool restack;
  XRect area;
  XPoint needleSize;
  XInt32 marginLeft;
  XInt32 marginRight;
  XInt32 pos;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  needsFace = (XBool)(( _this->Appearance != 0 ) && ( _this->Appearance->Face != 
  0 ));
  needsTrackLeft = (XBool)(( _this->Appearance != 0 ) && ( _this->Appearance->TrackLeft 
  != 0 ));
  needsTrackRight = (XBool)(( _this->Appearance != 0 ) && ( _this->Appearance->TrackRight 
  != 0 ));
  needsNeedle = (XBool)(( _this->Appearance != 0 ) && ( _this->Appearance->Needle 
  != 0 ));
  needsCover = (XBool)(( _this->Appearance != 0 ) && ( _this->Appearance->Cover 
  != 0 ));
  restack = 0;
  area = EwGetRectORect( _this->Super2.Bounds );
  needleSize = _Const0009;

  if ( needsFace && ( _this->frameView1 == 0 ))
  {
    _this->frameView1 = EwNewObject( ViewsFrame, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->frameView1 ), 0 );
    restack = 1;
  }
  else
    if ( !needsFace && ( _this->frameView1 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->frameView1 ));
      _this->frameView1 = 0;
    }

  if ( needsTrackLeft && ( _this->frameView2 == 0 ))
  {
    _this->frameView2 = EwNewObject( ViewsFrame, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->frameView2 ), 0 );
    restack = 1;
  }
  else
    if ( !needsTrackLeft && ( _this->frameView2 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->frameView2 ));
      _this->frameView2 = 0;
    }

  if ( needsTrackRight && ( _this->frameView3 == 0 ))
  {
    _this->frameView3 = EwNewObject( ViewsFrame, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->frameView3 ), 0 );
    restack = 1;
  }
  else
    if ( !needsTrackRight && ( _this->frameView3 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->frameView3 ));
      _this->frameView3 = 0;
    }

  if ( needsNeedle && ( _this->imageView == 0 ))
  {
    _this->imageView = EwNewObject( ViewsImage, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->imageView ), 0 );
    restack = 1;
  }
  else
    if ( !needsNeedle && ( _this->imageView != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->imageView ));
      _this->imageView = 0;
    }

  if ( needsCover && ( _this->frameView4 == 0 ))
  {
    _this->frameView4 = EwNewObject( ViewsFrame, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->frameView4 ), 0 );
    restack = 1;
  }
  else
    if ( !needsCover && ( _this->frameView4 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->frameView4 ));
      _this->frameView4 = 0;
    }

  if ( restack )
  {
    if ( _this->frameView1 != 0 )
      CoreGroup_RestackTop((CoreGroup)_this, ((CoreView)_this->frameView1 ));

    if ( _this->frameView2 != 0 )
      CoreGroup_RestackTop((CoreGroup)_this, ((CoreView)_this->frameView2 ));

    if ( _this->frameView3 != 0 )
      CoreGroup_RestackTop((CoreGroup)_this, ((CoreView)_this->frameView3 ));

    if ( _this->imageView != 0 )
      CoreGroup_RestackTop((CoreGroup)_this, ((CoreView)_this->imageView ));

    if ( _this->frameView4 != 0 )
      CoreGroup_RestackTop((CoreGroup)_this, ((CoreView)_this->frameView4 ));
  }

  if ( _this->frameView1 != 0 )
  {
    ViewsFrame_OnSetBitmap( _this->frameView1, _this->Appearance->Face );
    ViewsFrame_OnSetColor( _this->frameView1, _this->Appearance->FaceTint );

    if ( _this->Appearance->FaceFrame < 0 )
    {
      ViewsFrame_OnSetAnimated( _this->frameView1, 1 );
      ViewsFrame_OnSetFrameNumber( _this->frameView1, 0 );
    }
    else
    {
      ViewsFrame_OnSetAnimated( _this->frameView1, 0 );
      ViewsFrame_OnSetFrameNumber( _this->frameView1, _this->Appearance->FaceFrame );
    }
  }

  if ( _this->frameView2 != 0 )
  {
    XSet edges = GraphicsEdgesBottom | GraphicsEdgesInterior | GraphicsEdgesLeft 
      | GraphicsEdgesTop;

    if ( _this->Appearance->TrackLeftWithEdge )
      edges = GraphicsEdgesBottom | GraphicsEdgesInterior | GraphicsEdgesLeft | 
      GraphicsEdgesRight | GraphicsEdgesTop;

    ViewsFrame_OnSetBitmap( _this->frameView2, _this->Appearance->TrackLeft );
    ViewsFrame_OnSetColor( _this->frameView2, _this->Appearance->TrackLeftTint );
    ViewsFrame_OnSetEdges( _this->frameView2, edges );

    if ( _this->Appearance->TrackLeftFrame < 0 )
    {
      ViewsFrame_OnSetAnimated( _this->frameView2, 1 );
      ViewsFrame_OnSetFrameNumber( _this->frameView2, 0 );
    }
    else
    {
      ViewsFrame_OnSetAnimated( _this->frameView2, 0 );
      ViewsFrame_OnSetFrameNumber( _this->frameView2, _this->Appearance->TrackLeftFrame );
    }
  }

  if ( _this->frameView3 != 0 )
  {
    XSet edges = GraphicsEdgesBottom | GraphicsEdgesInterior | GraphicsEdgesRight 
      | GraphicsEdgesTop;

    if ( _this->Appearance->TrackRightWithEdge )
      edges = GraphicsEdgesBottom | GraphicsEdgesInterior | GraphicsEdgesLeft | 
      GraphicsEdgesRight | GraphicsEdgesTop;

    ViewsFrame_OnSetBitmap( _this->frameView3, _this->Appearance->TrackRight );
    ViewsFrame_OnSetColor( _this->frameView3, _this->Appearance->TrackRightTint );
    ViewsFrame_OnSetEdges( _this->frameView3, edges );

    if ( _this->Appearance->TrackRightFrame < 0 )
    {
      ViewsFrame_OnSetAnimated( _this->frameView3, 1 );
      ViewsFrame_OnSetFrameNumber( _this->frameView3, 0 );
    }
    else
    {
      ViewsFrame_OnSetAnimated( _this->frameView3, 0 );
      ViewsFrame_OnSetFrameNumber( _this->frameView3, _this->Appearance->TrackRightFrame );
    }
  }

  if ( _this->frameView4 != 0 )
  {
    ViewsFrame_OnSetBitmap( _this->frameView4, _this->Appearance->Cover );
    ViewsFrame_OnSetColor( _this->frameView4, _this->Appearance->CoverTint );

    if ( _this->Appearance->CoverFrame < 0 )
    {
      ViewsFrame_OnSetAnimated( _this->frameView4, 1 );
      ViewsFrame_OnSetFrameNumber( _this->frameView4, 0 );
    }
    else
    {
      ViewsFrame_OnSetAnimated( _this->frameView4, 0 );
      ViewsFrame_OnSetFrameNumber( _this->frameView4, _this->Appearance->CoverFrame );
    }
  }

  if ( _this->imageView != 0 )
  {
    ViewsImage_OnSetBitmap( _this->imageView, _this->Appearance->Needle );
    ViewsImage_OnSetColor( _this->imageView, _this->Appearance->NeedleTint );

    if ( _this->Appearance->NeedleFrame < 0 )
    {
      ViewsImage_OnSetAnimated( _this->imageView, 1 );
      ViewsImage_OnSetFrameNumber( _this->imageView, 0 );
    }
    else
    {
      ViewsImage_OnSetAnimated( _this->imageView, 0 );
      ViewsImage_OnSetFrameNumber( _this->imageView, _this->Appearance->NeedleFrame );
    }
  }

  if (( _this->imageView != 0 ) && ( _this->imageView->Bitmap != 0 ))
    needleSize = _this->imageView->Bitmap->FrameSize;

  marginLeft = needleSize.X / 2;
  marginRight = needleSize.X - marginLeft;

  if ( _this->Appearance != 0 )
  {
    marginLeft = marginLeft + _this->Appearance->NeedleMarginLeft;
    marginRight = marginRight + _this->Appearance->NeedleMarginRight;
  }

  pos = marginLeft + (XInt32)((XFloat)(( EwGetRectW( area ) - marginRight ) - marginLeft ) 
  * _this->currentPos );

  if ( pos < 0 )
    pos = 0;

  if ( pos > EwGetRectW( area ))
    pos = EwGetRectW( area );

  if (( _this->frameView1 != 0 ) && ( _this->frameView1->Bitmap != 0 ))
  {
    XInt32 h = _this->frameView1->Bitmap->FrameSize.Y;
    CoreRectView__OnSetBounds( _this->frameView1, EwNewRect( 0, ( EwGetRectH( area ) 
    / 2 ) - ( h / 2 ), EwGetRectW( area ), (( EwGetRectH( area ) / 2 ) - ( h / 2 )) 
    + h ));
  }

  if (( _this->frameView2 != 0 ) && ( _this->frameView2->Bitmap != 0 ))
  {
    XPoint s = _this->frameView2->Bitmap->FrameSize;
    CoreRectView__OnSetBounds( _this->frameView2, EwNewRect( 0, ( EwGetRectH( area ) 
    / 2 ) - ( s.Y / 2 ), pos, (( EwGetRectH( area ) / 2 ) - ( s.Y / 2 )) + s.Y ));
    ViewsFrame_OnSetNoEdgesLimit( _this->frameView2, EwSetPointX( _this->frameView2->NoEdgesLimit, 
    EwGetRectW( area ) - ( s.X / 3 )));
    ViewsFrame_OnSetVisible( _this->frameView2, (XBool)( !_this->Appearance->TrackLeftWithEdge 
    || ( pos >= (( s.X / 3 ) * 2 ))));
  }

  if (( _this->frameView3 != 0 ) && ( _this->frameView3->Bitmap != 0 ))
  {
    XPoint s = _this->frameView3->Bitmap->FrameSize;
    CoreRectView__OnSetBounds( _this->frameView3, EwNewRect( pos, ( EwGetRectH( 
    area ) / 2 ) - ( s.Y / 2 ), EwGetRectW( area ), (( EwGetRectH( area ) / 2 ) 
    - ( s.Y / 2 )) + s.Y ));
    ViewsFrame_OnSetNoEdgesLimit( _this->frameView3, EwSetPointX( _this->frameView3->NoEdgesLimit, 
    EwGetRectW( area ) - ( s.X / 3 )));
    ViewsFrame_OnSetVisible( _this->frameView3, (XBool)( !_this->Appearance->TrackRightWithEdge 
    || (( EwGetRectW( area ) - pos ) >= (( s.X / 3 ) * 2 ))));
  }

  if (( _this->frameView4 != 0 ) && ( _this->frameView4->Bitmap != 0 ))
  {
    XInt32 h = _this->frameView4->Bitmap->FrameSize.Y;
    CoreRectView__OnSetBounds( _this->frameView4, EwNewRect( 0, ( EwGetRectH( area ) 
    / 2 ) - ( h / 2 ), EwGetRectW( area ), (( EwGetRectH( area ) / 2 ) - ( h / 2 )) 
    + h ));
  }

  if ( _this->imageView != 0 )
    CoreRectView__OnSetBounds( _this->imageView, EwMoveRectPos( EwNewRect2Point( 
    _Const0009, needleSize ), EwNewPoint( pos - ( needleSize.X / 2 ), ( EwGetRectH( 
    area ) / 2 ) - ( needleSize.Y / 2 ))));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.onUpdatePos()' */
void WidgetSetHorizontalValueBar_onUpdatePos( WidgetSetHorizontalValueBar _this, 
  XObject sender )
{
  XFloat newPos;
  XInt32 swingDuration;
  XFloat ratio;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  newPos = _this->currentPos;
  swingDuration = 0;

  if ( _this->Appearance != 0 )
    swingDuration = _this->Appearance->SwingDuration;

  if ( _this->setupCurrentPos && ( _this->MaxValue != _this->MinValue ))
  {
    _this->currentPos = ((XFloat)-_this->MinValue ) / (XFloat)( _this->MaxValue 
    - _this->MinValue );
    newPos = _this->currentPos;
    _this->setupCurrentPos = 0;
    EwPostSignal( _this->OnUpdate, ((XObject)_this ));
  }

  if ( _this->MaxValue != _this->MinValue )
    newPos = (XFloat)( WidgetSetHorizontalValueBar_OnGetCurrentValue( _this ) - 
    _this->MinValue ) / (XFloat)( _this->MaxValue - _this->MinValue );

  if ( newPos == _this->currentPos )
    return;

  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FloatEffect, 0 );

  if ( swingDuration <= 0 )
  {
    _this->currentPos = newPos;
    CoreGroup_InvalidateViewState((CoreGroup)_this );
    EwPostSignal( _this->OnUpdate, ((XObject)_this ));
    return;
  }

  ratio = newPos - _this->currentPos;

  if ( ratio < 0.000000f )
    ratio = -ratio;

  if ( _this->Appearance->SwingElastic )
    EffectsEffect_OnSetTiming((EffectsEffect)&_this->FloatEffect, EffectsTimingBack_Out );
  else
    EffectsEffect_OnSetTiming((EffectsEffect)&_this->FloatEffect, EffectsTimingFastIn_EaseOut );

  _this->FloatEffect.Value1 = _this->currentPos;
  _this->FloatEffect.Value2 = newPos;
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->FloatEffect, ( 10 + ( 
  swingDuration / 2 )) + ((XInt32)((XFloat)swingDuration * ratio ) / 2 ));
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FloatEffect, 1 );
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.onEndFloatEffect()' */
void WidgetSetHorizontalValueBar_onEndFloatEffect( WidgetSetHorizontalValueBar _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( _this->OnUpdate, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.onFloatEffect()' */
void WidgetSetHorizontalValueBar_onFloatEffect( WidgetSetHorizontalValueBar _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->currentPos = _this->FloatEffect.Value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.onConfigChanged()' */
void WidgetSetHorizontalValueBar_onConfigChanged( WidgetSetHorizontalValueBar _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( EwNewSlot( _this, WidgetSetHorizontalValueBar_onUpdatePos ), ((XObject)_this ));

  if ( _this->Appearance != 0 )
    CoreRectView__OnSetBounds( _this, _this->Super2.Bounds );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnUpdate, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.onOutlet()' */
void WidgetSetHorizontalValueBar_onOutlet( WidgetSetHorizontalValueBar _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Outlet.Object != 0 )
    WidgetSetHorizontalValueBar_OnSetCurrentValue( _this, EwOnGetInt32( _this->Outlet ));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.OnSetOutlet()' */
void WidgetSetHorizontalValueBar_OnSetOutlet( WidgetSetHorizontalValueBar _this, 
  XRef value )
{
  if ( !EwCompRef( _this->Outlet, value ))
    return;

  if ( _this->Outlet.Object != 0 )
    EwDetachRefObserver( EwNewSlot( _this, WidgetSetHorizontalValueBar_onOutlet ), 
      _this->Outlet, 0 );

  _this->Outlet = value;

  if ( value.Object != 0 )
    EwAttachRefObserver( EwNewSlot( _this, WidgetSetHorizontalValueBar_onOutlet ), 
      value, 0 );

  if ( value.Object != 0 )
    EwPostSignal( EwNewSlot( _this, WidgetSetHorizontalValueBar_onOutlet ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.OnGetCurrentValue()' */
XInt32 WidgetSetHorizontalValueBar_OnGetCurrentValue( WidgetSetHorizontalValueBar _this )
{
  XInt32 value = _this->CurrentValue;

  if ( _this->MinValue > _this->MaxValue )
  {
    if ( value < _this->MaxValue )
      value = _this->MaxValue;

    if ( value > _this->MinValue )
      value = _this->MinValue;
  }
  else
  {
    if ( value < _this->MinValue )
      value = _this->MinValue;

    if ( value > _this->MaxValue )
      value = _this->MaxValue;
  }

  return value;
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.OnSetCurrentValue()' */
void WidgetSetHorizontalValueBar_OnSetCurrentValue( WidgetSetHorizontalValueBar _this, 
  XInt32 value )
{
  if ( _this->CurrentValue == value )
    return;

  _this->CurrentValue = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetHorizontalValueBar_onUpdatePos ), ((XObject)_this ));
  EwPostSignal( _this->OnUpdate, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.OnSetAppearance()' */
void WidgetSetHorizontalValueBar_OnSetAppearance( WidgetSetHorizontalValueBar _this, 
  WidgetSetHorizontalValueBarConfig value )
{
  if ( _this->Appearance == value )
    return;

  if ( _this->Appearance != 0 )
    EwDetachObjObserver( EwNewSlot( _this, WidgetSetHorizontalValueBar_onConfigChanged ), 
      (XObject)_this->Appearance, 0 );

  _this->Appearance = value;

  if ( value != 0 )
    EwAttachObjObserver( EwNewSlot( _this, WidgetSetHorizontalValueBar_onConfigChanged ), 
      (XObject)value, 0 );

  EwPostSignal( EwNewSlot( _this, WidgetSetHorizontalValueBar_onConfigChanged ), 
    ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::HorizontalValueBar' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetHorizontalValueBar )
EW_END_OF_CLASS_VARIANTS( WidgetSetHorizontalValueBar )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::HorizontalValueBar' */
EW_DEFINE_CLASS( WidgetSetHorizontalValueBar, CoreGroup, frameView4, OnUpdate, Outlet, 
                 FloatEffect, currentPos, currentPos, "WidgetSet::HorizontalValueBar" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  WidgetSetHorizontalValueBar_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  WidgetSetHorizontalValueBar_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( WidgetSetHorizontalValueBar )

/* Initializer for the class 'WidgetSet::Gauge' */
void WidgetSetGauge__Init( WidgetSetGauge _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( WidgetSetGauge );

  /* ... then construct all embedded objects */
  EffectsFloatEffect__Init( &_this->FloatEffect, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WidgetSetGauge );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const000A );
  CoreGroup_OnSetEnabled((CoreGroup)_this, 0 );
  _this->setupCurrentAngle = 1;
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->FloatEffect, EffectsTimingBack_Out );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->FloatEffect, 1 );
  _this->MaxValue = 100;
  _this->CurrentValue = 50;
  _this->FloatEffect.Super1.OnFinished = EwNewSlot( _this, WidgetSetGauge_onEndFloatEffect );
  _this->FloatEffect.Super1.OnAnimate = EwNewSlot( _this, WidgetSetGauge_onFloatEffect );
}

/* Re-Initializer for the class 'WidgetSet::Gauge' */
void WidgetSetGauge__ReInit( WidgetSetGauge _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  EffectsFloatEffect__ReInit( &_this->FloatEffect );
}

/* Finalizer method for the class 'WidgetSet::Gauge' */
void WidgetSetGauge__Done( WidgetSetGauge _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  EffectsFloatEffect__Done( &_this->FloatEffect );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* 'C' function for method : 'WidgetSet::Gauge.OnSetBounds()' */
void WidgetSetGauge_OnSetBounds( WidgetSetGauge _this, XRect value )
{
  if ( EwCompRect( _this->Super2.Bounds, value ))
    EwPostSignal( _this->OnUpdate, ((XObject)_this ));

  if ( _this->Appearance != 0 )
  {
    XPoint cs = EwGetRectSize( value );
    XPoint ns = cs;
    XPoint delta;

    if ( ns.X < _this->Appearance->WidgetMinSize.X )
      ns.X = _this->Appearance->WidgetMinSize.X;

    if ( ns.Y < _this->Appearance->WidgetMinSize.Y )
      ns.Y = _this->Appearance->WidgetMinSize.Y;

    if (( _this->Appearance->WidgetMaxSize.X > 0 ) && ( ns.X > _this->Appearance->WidgetMaxSize.X ))
      ns.X = _this->Appearance->WidgetMaxSize.X;

    if (( _this->Appearance->WidgetMaxSize.Y > 0 ) && ( ns.Y > _this->Appearance->WidgetMaxSize.Y ))
      ns.Y = _this->Appearance->WidgetMaxSize.Y;

    delta = EwMovePointNeg( ns, cs );

    if ( delta.X != 0 )
    {
      XBool alignToLeft = (( _this->Super3.Layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( _this->Super3.Layout & CoreLayoutAlignToRight ) == 
        CoreLayoutAlignToRight );

      if ( alignToLeft && !alignToRight )
        value.Point2.X = ( value.Point2.X + delta.X );
      else
        if ( !alignToLeft && alignToRight )
          value.Point1.X = ( value.Point1.X - delta.X );
        else
        {
          value.Point1.X = ( value.Point1.X - ( delta.X / 2 ));
          value.Point2.X = ( value.Point1.X + ns.X );
        }
    }

    if ( delta.Y != 0 )
    {
      XBool alignToTop = (( _this->Super3.Layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( _this->Super3.Layout & CoreLayoutAlignToBottom ) 
        == CoreLayoutAlignToBottom );

      if ( alignToTop && !alignToBottom )
        value.Point2.Y = ( value.Point2.Y + delta.Y );
      else
        if ( !alignToTop && alignToBottom )
          value.Point1.Y = ( value.Point1.Y - delta.Y );
        else
        {
          value.Point1.Y = ( value.Point1.Y - ( delta.Y / 2 ));
          value.Point2.Y = ( value.Point1.Y + ns.Y );
        }
    }
  }

  CoreGroup_OnSetBounds((CoreGroup)_this, value );
}

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
void WidgetSetGauge_UpdateViewState( WidgetSetGauge _this, XSet aState )
{
  XBool needsScale;
  XBool needsNeedle;
  XBool needsCover;
  XBool needsPath1;
  XBool needsPath2;
  XBool restack;
  XRect area;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  needsScale = (XBool)(( _this->Appearance != 0 ) && ( _this->Appearance->Scale 
  != 0 ));
  needsNeedle = (XBool)(( _this->Appearance != 0 ) && ( _this->Appearance->Needle 
  != 0 ));
  needsCover = (XBool)(( _this->Appearance != 0 ) && ( _this->Appearance->Cover 
  != 0 ));
  needsPath1 = (XBool)(( _this->Appearance != 0 ) && ( _this->Appearance->TrackLeftThickness 
  > 0.000000f ));
  needsPath2 = (XBool)(( _this->Appearance != 0 ) && ( _this->Appearance->TrackRightThickness 
  > 0.000000f ));
  restack = 0;
  area = EwGetRectORect( _this->Super2.Bounds );

  if ( needsScale && ( _this->imageView1 == 0 ))
  {
    _this->imageView1 = EwNewObject( ViewsImage, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->imageView1 ), 0 );
    restack = 1;
  }
  else
    if ( !needsScale && ( _this->imageView1 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->imageView1 ));
      _this->imageView1 = 0;
    }

  if ( needsCover && ( _this->imageView2 == 0 ))
  {
    _this->imageView2 = EwNewObject( ViewsImage, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->imageView2 ), 0 );
    restack = 1;
  }
  else
    if ( !needsCover && ( _this->imageView2 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->imageView2 ));
      _this->imageView2 = 0;
    }

  if ( needsNeedle && ( _this->warpView == 0 ))
  {
    _this->warpView = EwNewObject( ViewsWarpImage, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->warpView ), 0 );
    restack = 1;
  }
  else
    if ( !needsNeedle && ( _this->warpView != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->warpView ));
      _this->warpView = 0;
    }

  if ( needsPath1 && ( _this->path1 == 0 ))
  {
    _this->path1 = EwNewObject( GraphicsArcPath, 0 );
    _this->pathView1 = EwNewObject( ViewsFillPath, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->pathView1 ), 0 );
    ViewsFillPath_OnSetPath( _this->pathView1, ((GraphicsPath)_this->path1 ));
    ViewsFillPath_OnSetFillRule( _this->pathView1, GraphicsFillRuleNonZero );
    restack = 1;
  }
  else
    if ( !needsPath1 && ( _this->path1 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->pathView1 ));
      _this->pathView1 = 0;
      _this->path1 = 0;
    }

  if ( needsPath2 && ( _this->path2 == 0 ))
  {
    _this->path2 = EwNewObject( GraphicsArcPath, 0 );
    _this->pathView2 = EwNewObject( ViewsFillPath, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->pathView2 ), 0 );
    ViewsFillPath_OnSetPath( _this->pathView2, ((GraphicsPath)_this->path2 ));
    ViewsFillPath_OnSetFillRule( _this->pathView2, GraphicsFillRuleNonZero );
    restack = 1;
  }
  else
    if ( !needsPath2 && ( _this->path2 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->pathView2 ));
      _this->pathView2 = 0;
      _this->path2 = 0;
    }

  if ( restack )
  {
    if ( _this->imageView1 != 0 )
      CoreGroup_RestackTop((CoreGroup)_this, ((CoreView)_this->imageView1 ));

    if ( _this->pathView1 != 0 )
      CoreGroup_RestackTop((CoreGroup)_this, ((CoreView)_this->pathView1 ));

    if ( _this->pathView2 != 0 )
      CoreGroup_RestackTop((CoreGroup)_this, ((CoreView)_this->pathView2 ));

    if ( _this->warpView != 0 )
      CoreGroup_RestackTop((CoreGroup)_this, ((CoreView)_this->warpView ));

    if ( _this->imageView2 != 0 )
      CoreGroup_RestackTop((CoreGroup)_this, ((CoreView)_this->imageView2 ));
  }

  if ( _this->imageView1 != 0 )
  {
    ViewsImage_OnSetBitmap( _this->imageView1, _this->Appearance->Scale );
    ViewsImage_OnSetColor( _this->imageView1, _this->Appearance->ScaleTint );
    CoreRectView__OnSetBounds( _this->imageView1, area );

    if ( _this->Appearance->ScaleFrame < 0 )
    {
      ViewsImage_OnSetAnimated( _this->imageView1, 1 );
      ViewsImage_OnSetFrameNumber( _this->imageView1, 0 );
    }
    else
    {
      ViewsImage_OnSetAnimated( _this->imageView1, 0 );
      ViewsImage_OnSetFrameNumber( _this->imageView1, _this->Appearance->ScaleFrame );
    }
  }

  if ( _this->imageView2 != 0 )
  {
    ViewsImage_OnSetBitmap( _this->imageView2, _this->Appearance->Cover );
    ViewsImage_OnSetColor( _this->imageView2, _this->Appearance->CoverTint );
    CoreRectView__OnSetBounds( _this->imageView2, area );

    if ( _this->Appearance->CoverFrame < 0 )
    {
      ViewsImage_OnSetAnimated( _this->imageView2, 1 );
      ViewsImage_OnSetFrameNumber( _this->imageView2, 0 );
    }
    else
    {
      ViewsImage_OnSetAnimated( _this->imageView2, 0 );
      ViewsImage_OnSetFrameNumber( _this->imageView2, _this->Appearance->CoverFrame );
    }
  }

  if ( _this->warpView != 0 )
  {
    GraphicsWarpMatrix matrix = EwNewObject( GraphicsWarpMatrix, 0 );
    GraphicsWarpMatrix_Rotate( matrix, 0.000000f, 0.000000f, -_this->currentAngle );

    if ( _this->Appearance->NeedleRadius != 0.000000f )
      GraphicsWarpMatrix_Translate( matrix, _this->Appearance->NeedleRadius, 0.000000f, 
      0.000000f );

    if ( !_this->Appearance->NeedleRotate )
      GraphicsWarpMatrix_Rotate( matrix, 0.000000f, 0.000000f, _this->currentAngle );

    ViewsWarpView_OnSetSourceAnchor((ViewsWarpView)_this->warpView, _this->Appearance->NeedlePivot );
    ViewsWarpImage_OnSetBitmap( _this->warpView, _this->Appearance->Needle );
    ViewsWarpImage_OnSetColor( _this->warpView, _this->Appearance->NeedleTint );

    if ( _this->Appearance->NeedleFrame < 0 )
    {
      ViewsWarpImage_OnSetAnimated( _this->warpView, 1 );
      ViewsWarpImage_OnSetFrameNumber( _this->warpView, 0 );
    }
    else
    {
      ViewsWarpImage_OnSetAnimated( _this->warpView, 0 );
      ViewsWarpImage_OnSetFrameNumber( _this->warpView, _this->Appearance->NeedleFrame );
    }

    ViewsWarpView_Warp3D((ViewsWarpView)_this->warpView, EwMovePointPos( EwGetRectCenter( 
    area ), _this->Appearance->CenterOffset ), matrix );
  }

  if ( _this->pathView1 != 0 )
  {
    CoreRectView__OnSetBounds( _this->pathView1, area );
    ViewsFillPath_OnSetOffset( _this->pathView1, EwMovePointPos( EwGetRectCenter( 
    area ), _this->Appearance->CenterOffset ));
    ViewsFillPath_OnSetColor( _this->pathView1, _this->Appearance->TrackLeftColor );
  }

  if ( _this->pathView2 != 0 )
  {
    CoreRectView__OnSetBounds( _this->pathView2, area );
    ViewsFillPath_OnSetOffset( _this->pathView2, EwMovePointPos( EwGetRectCenter( 
    area ), _this->Appearance->CenterOffset ));
    ViewsFillPath_OnSetColor( _this->pathView2, _this->Appearance->TrackRightColor );
  }

  if ( _this->path1 != 0 )
  {
    GraphicsArcPath_OnSetStyle( _this->path1, GraphicsArcStylePie );
    GraphicsArcPath_OnSetInnerRadius( _this->path1, _this->Appearance->TrackLeftRadius 
    - ( _this->Appearance->TrackLeftThickness * 0.500000f ));
    GraphicsArcPath_OnSetRadius( _this->path1, GraphicsArcPath_OnGetInnerRadius( 
    _this->path1 ) + _this->Appearance->TrackLeftThickness );
    GraphicsArcPath_OnSetStartAngle( _this->path1, -_this->Appearance->NeedleMinAngle );
    GraphicsArcPath_OnSetEndAngle( _this->path1, -_this->currentAngle );

    if ( _this->Appearance->TrackLeftRoundedStart && _this->Appearance->TrackLeftRoundedEnd )
      GraphicsArcPath_OnSetStyle( _this->path1, GraphicsArcStylePieRounded );
    else
      if ( _this->Appearance->TrackLeftRoundedStart )
        GraphicsArcPath_OnSetStyle( _this->path1, GraphicsArcStylePieRoundedStart );
      else
        if ( _this->Appearance->TrackLeftRoundedEnd )
          GraphicsArcPath_OnSetStyle( _this->path1, GraphicsArcStylePieRoundedEnd );
        else
          GraphicsArcPath_OnSetStyle( _this->path1, GraphicsArcStylePie );
  }

  if ( _this->path2 != 0 )
  {
    GraphicsArcPath_OnSetStyle( _this->path2, GraphicsArcStylePie );
    GraphicsArcPath_OnSetInnerRadius( _this->path2, _this->Appearance->TrackRightRadius 
    - ( _this->Appearance->TrackRightThickness * 0.500000f ));
    GraphicsArcPath_OnSetRadius( _this->path2, GraphicsArcPath_OnGetInnerRadius( 
    _this->path2 ) + _this->Appearance->TrackRightThickness );
    GraphicsArcPath_OnSetStartAngle( _this->path2, -_this->currentAngle );
    GraphicsArcPath_OnSetEndAngle( _this->path2, -_this->Appearance->NeedleMaxAngle );

    if ( _this->Appearance->TrackRightRoundedStart && _this->Appearance->TrackRightRoundedEnd )
      GraphicsArcPath_OnSetStyle( _this->path2, GraphicsArcStylePieRounded );
    else
      if ( _this->Appearance->TrackRightRoundedStart )
        GraphicsArcPath_OnSetStyle( _this->path2, GraphicsArcStylePieRoundedStart );
      else
        if ( _this->Appearance->TrackRightRoundedEnd )
          GraphicsArcPath_OnSetStyle( _this->path2, GraphicsArcStylePieRoundedEnd );
        else
          GraphicsArcPath_OnSetStyle( _this->path2, GraphicsArcStylePie );
  }
}

/* 'C' function for method : 'WidgetSet::Gauge.onUpdateAngle()' */
void WidgetSetGauge_onUpdateAngle( WidgetSetGauge _this, XObject sender )
{
  XFloat angleMin;
  XFloat angleMax;
  XFloat newAngle;
  XInt32 swingDuration;
  XFloat ratio;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  angleMin = 135.000000f;
  angleMax = 45.000000f;
  newAngle = _this->currentAngle;
  swingDuration = 0;

  if ( _this->Appearance != 0 )
  {
    angleMin = _this->Appearance->NeedleMinAngle;
    angleMax = _this->Appearance->NeedleMaxAngle;
    swingDuration = _this->Appearance->SwingDuration;
  }

  if ( _this->setupCurrentAngle && ( _this->MaxValue != _this->MinValue ))
  {
    _this->currentAngle = ((((XFloat)-_this->MinValue ) * ( angleMax - angleMin )) 
    / (XFloat)( _this->MaxValue - _this->MinValue )) + angleMin;
    newAngle = _this->currentAngle;
    _this->setupCurrentAngle = 0;
    EwPostSignal( _this->OnUpdate, ((XObject)_this ));
  }

  if ( _this->MaxValue != _this->MinValue )
    newAngle = (((XFloat)( WidgetSetGauge_OnGetCurrentValue( _this ) - _this->MinValue ) 
    * ( angleMax - angleMin )) / (XFloat)( _this->MaxValue - _this->MinValue )) 
    + angleMin;

  if ( newAngle == _this->currentAngle )
    return;

  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FloatEffect, 0 );

  if (( swingDuration <= 0 ) || ( angleMax == angleMin ))
  {
    _this->currentAngle = newAngle;
    CoreGroup_InvalidateViewState((CoreGroup)_this );
    EwPostSignal( _this->OnUpdate, ((XObject)_this ));
    return;
  }

  ratio = ( newAngle - _this->currentAngle ) / ( angleMax - angleMin );

  if ( ratio < 0.000000f )
    ratio = -ratio;

  if ( _this->Appearance->SwingElastic )
    EffectsEffect_OnSetTiming((EffectsEffect)&_this->FloatEffect, EffectsTimingBack_Out );
  else
    EffectsEffect_OnSetTiming((EffectsEffect)&_this->FloatEffect, EffectsTimingFastIn_EaseOut );

  _this->FloatEffect.Value1 = _this->currentAngle;
  _this->FloatEffect.Value2 = newAngle;
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->FloatEffect, ( 10 + ( 
  swingDuration / 2 )) + ((XInt32)((XFloat)swingDuration * ratio ) / 2 ));
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FloatEffect, 1 );
}

/* 'C' function for method : 'WidgetSet::Gauge.onEndFloatEffect()' */
void WidgetSetGauge_onEndFloatEffect( WidgetSetGauge _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( _this->OnUpdate, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::Gauge.onFloatEffect()' */
void WidgetSetGauge_onFloatEffect( WidgetSetGauge _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->currentAngle = _this->FloatEffect.Value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnUpdate, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::Gauge.onConfigChanged()' */
void WidgetSetGauge_onConfigChanged( WidgetSetGauge _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( EwNewSlot( _this, WidgetSetGauge_onUpdateAngle ), ((XObject)_this ));

  if ( _this->Appearance != 0 )
    CoreRectView__OnSetBounds( _this, _this->Super2.Bounds );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnUpdate, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::Gauge.onOutlet()' */
void WidgetSetGauge_onOutlet( WidgetSetGauge _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Outlet.Object != 0 )
    WidgetSetGauge_OnSetCurrentValue( _this, EwOnGetInt32( _this->Outlet ));
}

/* 'C' function for method : 'WidgetSet::Gauge.OnSetOutlet()' */
void WidgetSetGauge_OnSetOutlet( WidgetSetGauge _this, XRef value )
{
  if ( !EwCompRef( _this->Outlet, value ))
    return;

  if ( _this->Outlet.Object != 0 )
    EwDetachRefObserver( EwNewSlot( _this, WidgetSetGauge_onOutlet ), _this->Outlet, 
      0 );

  _this->Outlet = value;

  if ( value.Object != 0 )
    EwAttachRefObserver( EwNewSlot( _this, WidgetSetGauge_onOutlet ), value, 0 );

  if ( value.Object != 0 )
    EwPostSignal( EwNewSlot( _this, WidgetSetGauge_onOutlet ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::Gauge.OnGetCurrentValue()' */
XInt32 WidgetSetGauge_OnGetCurrentValue( WidgetSetGauge _this )
{
  XInt32 value = _this->CurrentValue;

  if ( _this->MinValue > _this->MaxValue )
  {
    if ( value < _this->MaxValue )
      value = _this->MaxValue;

    if ( value > _this->MinValue )
      value = _this->MinValue;
  }
  else
  {
    if ( value < _this->MinValue )
      value = _this->MinValue;

    if ( value > _this->MaxValue )
      value = _this->MaxValue;
  }

  return value;
}

/* 'C' function for method : 'WidgetSet::Gauge.OnSetCurrentValue()' */
void WidgetSetGauge_OnSetCurrentValue( WidgetSetGauge _this, XInt32 value )
{
  if ( _this->CurrentValue == value )
    return;

  _this->CurrentValue = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetGauge_onUpdateAngle ), ((XObject)_this ));
  EwPostSignal( _this->OnUpdate, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::Gauge.OnSetAppearance()' */
void WidgetSetGauge_OnSetAppearance( WidgetSetGauge _this, WidgetSetGaugeConfig 
  value )
{
  if ( _this->Appearance == value )
    return;

  if ( _this->Appearance != 0 )
    EwDetachObjObserver( EwNewSlot( _this, WidgetSetGauge_onConfigChanged ), (XObject)_this->Appearance, 
      0 );

  _this->Appearance = value;

  if ( value != 0 )
    EwAttachObjObserver( EwNewSlot( _this, WidgetSetGauge_onConfigChanged ), (XObject)value, 
      0 );

  EwPostSignal( EwNewSlot( _this, WidgetSetGauge_onConfigChanged ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::Gauge' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetGauge )
EW_END_OF_CLASS_VARIANTS( WidgetSetGauge )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::Gauge' */
EW_DEFINE_CLASS( WidgetSetGauge, CoreGroup, imageView1, OnUpdate, Outlet, FloatEffect, 
                 currentAngle, currentAngle, "WidgetSet::Gauge" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  WidgetSetGauge_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  WidgetSetGauge_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( WidgetSetGauge )

/* Initializer for the class 'WidgetSet::ToggleButton' */
void WidgetSetToggleButton__Init( WidgetSetToggleButton _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( WidgetSetToggleButton );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WidgetSetToggleButton );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const000B );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const000C );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const000D );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const000E );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0009 );
  CoreSimpleTouchHandler_OnSetRetargetOffset( &_this->TouchHandler, 16 );
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  _this->IconOnFrameActive = -1;
  _this->IconOnFrameFocused = -1;
  _this->IconOnFrameDisabled = -1;
  _this->IconOnFrameDefault = -1;
  _this->IconOffFrameActive = -1;
  _this->IconOffFrameFocused = -1;
  _this->IconOffFrameDisabled = -1;
  _this->IconOffFrameDefault = -1;
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->TouchHandler ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, WidgetSetToggleButton_onFlashTimer );
  _this->KeyHandler.OnRelease = EwNewSlot( _this, WidgetSetToggleButton_onReleaseKey );
  _this->KeyHandler.OnPress = EwNewSlot( _this, WidgetSetToggleButton_onPressKey );
  _this->TouchHandler.OnLeave = EwNewSlot( _this, WidgetSetToggleButton_onLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, WidgetSetToggleButton_onEnterTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, WidgetSetToggleButton_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, WidgetSetToggleButton_onPressTouch );
}

/* Re-Initializer for the class 'WidgetSet::ToggleButton' */
void WidgetSetToggleButton__ReInit( WidgetSetToggleButton _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
}

/* Finalizer method for the class 'WidgetSet::ToggleButton' */
void WidgetSetToggleButton__Done( WidgetSetToggleButton _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.OnSetBounds()' */
void WidgetSetToggleButton_OnSetBounds( WidgetSetToggleButton _this, XRect value )
{
  if ( _this->Appearance != 0 )
  {
    XPoint cs = EwGetRectSize( value );
    XPoint ns = cs;
    XPoint delta;

    if ( ns.X < _this->Appearance->WidgetMinSize.X )
      ns.X = _this->Appearance->WidgetMinSize.X;

    if ( ns.Y < _this->Appearance->WidgetMinSize.Y )
      ns.Y = _this->Appearance->WidgetMinSize.Y;

    if (( _this->Appearance->WidgetMaxSize.X > 0 ) && ( ns.X > _this->Appearance->WidgetMaxSize.X ))
      ns.X = _this->Appearance->WidgetMaxSize.X;

    if (( _this->Appearance->WidgetMaxSize.Y > 0 ) && ( ns.Y > _this->Appearance->WidgetMaxSize.Y ))
      ns.Y = _this->Appearance->WidgetMaxSize.Y;

    delta = EwMovePointNeg( ns, cs );

    if ( delta.X != 0 )
    {
      XBool alignToLeft = (( _this->Super3.Layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( _this->Super3.Layout & CoreLayoutAlignToRight ) == 
        CoreLayoutAlignToRight );

      if ( alignToLeft && !alignToRight )
        value.Point2.X = ( value.Point2.X + delta.X );
      else
        if ( !alignToLeft && alignToRight )
          value.Point1.X = ( value.Point1.X - delta.X );
        else
        {
          value.Point1.X = ( value.Point1.X - ( delta.X / 2 ));
          value.Point2.X = ( value.Point1.X + ns.X );
        }
    }

    if ( delta.Y != 0 )
    {
      XBool alignToTop = (( _this->Super3.Layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( _this->Super3.Layout & CoreLayoutAlignToBottom ) 
        == CoreLayoutAlignToBottom );

      if ( alignToTop && !alignToBottom )
        value.Point2.Y = ( value.Point2.Y + delta.Y );
      else
        if ( !alignToTop && alignToBottom )
          value.Point1.Y = ( value.Point1.Y - delta.Y );
        else
        {
          value.Point1.Y = ( value.Point1.Y - ( delta.Y / 2 ));
          value.Point2.Y = ( value.Point1.Y + ns.Y );
        }
    }
  }

  CoreGroup_OnSetBounds((CoreGroup)_this, value );
}

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
void WidgetSetToggleButton_UpdateViewState( WidgetSetToggleButton _this, XSet aState )
{
  XBool needsFace;
  XBool needsIcon;
  XBool needsLabel;
  XBool restack;
  XRect area;
  XBool isEnabled;
  XBool isFocused;
  XBool isPressed;
  XBool isChecked;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  needsFace = (XBool)(( _this->Appearance != 0 ) && (((((((( _this->Appearance->FaceOffDefault 
  != 0 ) || ( _this->Appearance->FaceOffDisabled != 0 )) || ( _this->Appearance->FaceOffFocused 
  != 0 )) || ( _this->Appearance->FaceOffActive != 0 )) || ( _this->Appearance->FaceOnDefault 
  != 0 )) || ( _this->Appearance->FaceOnDisabled != 0 )) || ( _this->Appearance->FaceOnFocused 
  != 0 )) || ( _this->Appearance->FaceOnActive != 0 )));
  needsIcon = (XBool)( _this->Icon != 0 );
  needsLabel = (XBool)(( _this->Appearance != 0 ) && ((( EwCompString( _this->LabelOff, 
  0 ) != 0 ) && ( _this->Appearance->LabelOffFont != 0 )) || (( EwCompString( _this->LabelOn, 
  0 ) != 0 ) && ( _this->Appearance->LabelOnFont != 0 ))));
  restack = 0;
  area = EwGetRectORect( _this->Super2.Bounds );

  if ( needsFace && ( _this->frameView == 0 ))
  {
    _this->frameView = EwNewObject( ViewsFrame, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->frameView ), 0 );
    restack = 1;
  }
  else
    if ( !needsFace && ( _this->frameView != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->frameView ));
      _this->frameView = 0;
    }

  if ( needsIcon && ( _this->imageView == 0 ))
  {
    _this->imageView = EwNewObject( ViewsImage, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->imageView ), 0 );
    restack = 1;
  }
  else
    if ( !needsIcon && ( _this->imageView != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->imageView ));
      _this->imageView = 0;
    }

  if ( needsLabel && ( _this->textView == 0 ))
  {
    _this->textView = EwNewObject( ViewsText, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->textView ), 0 );
    restack = 1;
    ViewsText_OnSetEnableBidiText( _this->textView, 1 );
  }
  else
    if ( !needsLabel && ( _this->textView != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->textView ));
      _this->textView = 0;
    }

  if ( restack )
  {
    if ( _this->frameView != 0 )
      CoreGroup_RestackTop((CoreGroup)_this, ((CoreView)_this->frameView ));

    if ( _this->imageView != 0 )
      CoreGroup_RestackTop((CoreGroup)_this, ((CoreView)_this->imageView ));

    if ( _this->textView != 0 )
      CoreGroup_RestackTop((CoreGroup)_this, ((CoreView)_this->textView ));
  }

  isEnabled = (( aState & CoreViewStateEnabled ) == CoreViewStateEnabled );
  isFocused = (( aState & CoreViewStateFocused ) == CoreViewStateFocused );
  isPressed = (XBool)((( _this->TouchHandler.Down && _this->TouchHandler.Inside ) 
  || _this->KeyHandler.Down ) || _this->FlashTimer.Enabled );
  isChecked = _this->Checked;

  if ( _this->frameView != 0 )
  {
    ResourcesBitmap bitmap = 0;
    XInt32 frameNo = -1;
    XColor tint = _Const0005;
    XSet layout = _this->Appearance->FaceLayout;
    XRect r = area;

    if ( isChecked )
    {
      if ( !isEnabled )
      {
        bitmap = _this->Appearance->FaceOnDisabled;
        frameNo = _this->Appearance->FaceOnFrameDisabled;
        tint = _this->Appearance->FaceOnTintDisabled;
      }
      else
        if ( isPressed )
        {
          bitmap = _this->Appearance->FaceOnActive;
          frameNo = _this->Appearance->FaceOnFrameActive;
          tint = _this->Appearance->FaceOnTintActive;
        }
        else
          if ( isFocused )
          {
            bitmap = _this->Appearance->FaceOnFocused;
            frameNo = _this->Appearance->FaceOnFrameFocused;
            tint = _this->Appearance->FaceOnTintFocused;
          }
          else
          {
            bitmap = _this->Appearance->FaceOnDefault;
            frameNo = _this->Appearance->FaceOnFrameDefault;
            tint = _this->Appearance->FaceOnTintDefault;
          }
    }
    else
    {
      if ( !isEnabled )
      {
        bitmap = _this->Appearance->FaceOffDisabled;
        frameNo = _this->Appearance->FaceOffFrameDisabled;
        tint = _this->Appearance->FaceOffTintDisabled;
      }
      else
        if ( isPressed )
        {
          bitmap = _this->Appearance->FaceOffActive;
          frameNo = _this->Appearance->FaceOffFrameActive;
          tint = _this->Appearance->FaceOffTintActive;
        }
        else
          if ( isFocused )
          {
            bitmap = _this->Appearance->FaceOffFocused;
            frameNo = _this->Appearance->FaceOffFrameFocused;
            tint = _this->Appearance->FaceOffTintFocused;
          }
          else
          {
            bitmap = _this->Appearance->FaceOffDefault;
            frameNo = _this->Appearance->FaceOffFrameDefault;
            tint = _this->Appearance->FaceOffTintDefault;
          }
    }

    ViewsFrame_OnSetAnimated( _this->frameView, (XBool)( frameNo < 0 ));
    ViewsFrame_OnSetColor( _this->frameView, tint );

    if ( frameNo < 0 )
      frameNo = 0;

    if (( bitmap != 0 ) && !(( layout & CoreLayoutResizeHorz ) == CoreLayoutResizeHorz ))
    {
      XBool alignToLeft = (( layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( layout & CoreLayoutAlignToRight ) == CoreLayoutAlignToRight );
      XInt32 w = bitmap->FrameSize.X;

      if ( alignToLeft && !alignToRight )
        r.Point2.X = ( r.Point1.X + w );
      else
        if ( !alignToLeft && alignToRight )
          r.Point1.X = ( r.Point2.X - w );
        else
        {
          r.Point1.X = (( EwGetRectW( r ) / 2 ) - ( w / 2 ));
          r.Point2.X = ( r.Point1.X + w );
        }
    }

    if (( bitmap != 0 ) && !(( layout & CoreLayoutResizeVert ) == CoreLayoutResizeVert ))
    {
      XBool alignToTop = (( layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( layout & CoreLayoutAlignToBottom ) == CoreLayoutAlignToBottom );
      XInt32 h = bitmap->FrameSize.Y;

      if ( alignToTop && !alignToBottom )
        r.Point2.Y = ( r.Point1.Y + h );
      else
        if ( !alignToTop && alignToBottom )
          r.Point1.Y = ( r.Point2.Y - h );
        else
        {
          r.Point1.Y = (( EwGetRectH( r ) / 2 ) - ( h / 2 ));
          r.Point2.Y = ( r.Point1.Y + h );
        }
    }

    ViewsFrame_OnSetFrameNumber( _this->frameView, frameNo );
    ViewsFrame_OnSetBitmap( _this->frameView, bitmap );
    CoreRectView__OnSetBounds( _this->frameView, r );
  }

  if (( _this->imageView != 0 ) && ( _this->Appearance != 0 ))
  {
    XInt32 frameNo = -1;
    XColor clr = _Const0005;

    if ( isChecked )
    {
      if ( !isEnabled )
      {
        frameNo = _this->IconOnFrameDisabled;
        clr = _this->Appearance->IconOnTintDisabled;
      }
      else
        if ( isPressed )
        {
          frameNo = _this->IconOnFrameActive;
          clr = _this->Appearance->IconOnTintActive;
        }
        else
          if ( isFocused )
          {
            frameNo = _this->IconOnFrameFocused;
            clr = _this->Appearance->IconOnTintFocused;
          }
          else
          {
            frameNo = _this->IconOnFrameDefault;
            clr = _this->Appearance->IconOnTintDefault;
          }
    }
    else
    {
      if ( !isEnabled )
      {
        frameNo = _this->IconOffFrameDisabled;
        clr = _this->Appearance->IconOffTintDisabled;
      }
      else
        if ( isPressed )
        {
          frameNo = _this->IconOffFrameActive;
          clr = _this->Appearance->IconOffTintActive;
        }
        else
          if ( isFocused )
          {
            frameNo = _this->IconOffFrameFocused;
            clr = _this->Appearance->IconOffTintFocused;
          }
          else
          {
            frameNo = _this->IconOffFrameDefault;
            clr = _this->Appearance->IconOffTintDefault;
          }
    }

    ViewsImage_OnSetAnimated( _this->imageView, (XBool)( frameNo < 0 ));

    if ( frameNo < 0 )
      frameNo = 0;

    CoreRectView__OnSetBounds( _this->imageView, EwNewRect( area.Point1.X + _this->Appearance->IconMarginLeft, 
    area.Point1.Y + _this->Appearance->IconMarginTop, area.Point2.X - _this->Appearance->IconMarginRight, 
    area.Point2.Y - _this->Appearance->IconMarginBottom ));
    ViewsImage_OnSetAlignment( _this->imageView, _this->Appearance->IconAlignment );
    ViewsImage_OnSetBitmap( _this->imageView, _this->Icon );
    ViewsImage_OnSetFrameNumber( _this->imageView, frameNo );
    ViewsImage_OnSetColor( _this->imageView, clr );
  }
  else
    if ( _this->imageView != 0 )
    {
      XInt32 frameNo = -1;

      if ( isChecked )
      {
        if ( !isEnabled )
          frameNo = _this->IconOnFrameDisabled;
        else
          if ( isPressed )
            frameNo = _this->IconOnFrameActive;
          else
            if ( isFocused )
              frameNo = _this->IconOnFrameFocused;
            else
              frameNo = _this->IconOnFrameDefault;
      }
      else
      {
        if ( !isEnabled )
          frameNo = _this->IconOffFrameDisabled;
        else
          if ( isPressed )
            frameNo = _this->IconOffFrameActive;
          else
            if ( isFocused )
              frameNo = _this->IconOffFrameFocused;
            else
              frameNo = _this->IconOffFrameDefault;
      }

      CoreRectView__OnSetBounds( _this->imageView, area );
      ViewsImage_OnSetAlignment( _this->imageView, ViewsImageAlignmentAlignHorzCenter 
      | ViewsImageAlignmentAlignVertCenter );
      ViewsImage_OnSetBitmap( _this->imageView, _this->Icon );
      ViewsImage_OnSetFrameNumber( _this->imageView, frameNo );
      ViewsImage_OnSetColor( _this->imageView, _Const0005 );
    }

  if ( _this->textView != 0 )
  {
    XColor clr = _Const0005;
    ResourcesFont font = 0;
    XString label = 0;

    if ( isChecked )
    {
      font = _this->Appearance->LabelOnFont;
      label = _this->LabelOn;

      if ( !isEnabled )
        clr = _this->Appearance->LabelOnColorDisabled;
      else
        if ( isPressed )
          clr = _this->Appearance->LabelOnColorActive;
        else
          if ( isFocused )
            clr = _this->Appearance->LabelOnColorFocused;
          else
            clr = _this->Appearance->LabelOnColorDefault;
    }
    else
    {
      font = _this->Appearance->LabelOffFont;
      label = _this->LabelOff;

      if ( !isEnabled )
        clr = _this->Appearance->LabelOffColorDisabled;
      else
        if ( isPressed )
          clr = _this->Appearance->LabelOffColorActive;
        else
          if ( isFocused )
            clr = _this->Appearance->LabelOffColorFocused;
          else
            clr = _this->Appearance->LabelOffColorDefault;
    }

    CoreRectView__OnSetBounds( _this->textView, EwNewRect( area.Point1.X + _this->Appearance->LabelMarginLeft, 
    area.Point1.Y + _this->Appearance->LabelMarginTop, area.Point2.X - _this->Appearance->LabelMarginRight, 
    area.Point2.Y - _this->Appearance->LabelMarginBottom ));
    ViewsText_OnSetAlignment( _this->textView, _this->Appearance->LabelAlignment );
    ViewsText_OnSetFont( _this->textView, font );
    ViewsText_OnSetString( _this->textView, label );
    ViewsText_OnSetColor( _this->textView, clr );
    ViewsText_OnSetWrapText( _this->textView, 1 );
    ViewsText_OnSetEllipsis( _this->textView, 1 );
  }
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onConfigChanged()' */
void WidgetSetToggleButton_onConfigChanged( WidgetSetToggleButton _this, XObject 
  sender )
{
  XEnum oldKeyCode;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  oldKeyCode = _this->KeyHandler.Filter;

  if ( _this->Appearance != 0 )
    _this->KeyHandler.Filter = _this->Appearance->KeyCode;
  else
    _this->KeyHandler.Filter = CoreKeyCodeEnter;

  if (( oldKeyCode == CoreKeyCodeNoKey ) && ( _this->KeyHandler.Filter != CoreKeyCodeNoKey ))
    CoreView__ChangeViewState( _this, CoreViewStateFocusable, 0 );

  if (( oldKeyCode != CoreKeyCodeNoKey ) && ( _this->KeyHandler.Filter == CoreKeyCodeNoKey ))
    CoreView__ChangeViewState( _this, 0, CoreViewStateFocusable );

  if ( _this->Appearance != 0 )
    CoreRectView__OnSetBounds( _this, _this->Super2.Bounds );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onOutlet()' */
void WidgetSetToggleButton_onOutlet( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Outlet.Object != 0 )
    WidgetSetToggleButton_OnSetChecked( _this, EwOnGetBool( _this->Outlet ));
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onFlashTimer()' */
void WidgetSetToggleButton_onFlashTimer( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  WidgetSetToggleButton_OnSetChecked( _this, (XBool)!_this->Checked );

  if ( _this->Checked )
    EwPostSignal( _this->OnSwitchOn, ((XObject)_this ));
  else
    EwPostSignal( _this->OnSwitchOff, ((XObject)_this ));

  if ( _this->Outlet.Object != 0 )
  {
    EwOnSetBool( _this->Outlet, _this->Checked );
    EwNotifyRefObservers( _this->Outlet, 0 );
  }
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onReleaseKey()' */
void WidgetSetToggleButton_onReleaseKey( WidgetSetToggleButton _this, XObject sender )
{
  XInt32 pressFeedbackDuration;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  pressFeedbackDuration = 0;

  if ( _this->Appearance != 0 )
    pressFeedbackDuration = _this->Appearance->PressedFeedbackDuration;

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 1 );
  EwPostSignal( _this->OnLeave, ((XObject)_this ));
  EwPostSignal( _this->OnRelease, ((XObject)_this ));
  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ((XInt32)( _this->KeyHandler.Time - _this->onPressKeyTime ) >= pressFeedbackDuration )
  {
    WidgetSetToggleButton_OnSetChecked( _this, (XBool)!_this->Checked );

    if ( _this->Checked )
      EwPostSignal( _this->OnSwitchOn, ((XObject)_this ));
    else
      EwPostSignal( _this->OnSwitchOff, ((XObject)_this ));

    if ( _this->Outlet.Object != 0 )
    {
      EwOnSetBool( _this->Outlet, _this->Checked );
      EwNotifyRefObservers( _this->Outlet, 0 );
    }
  }
  else
  {
    CoreTimer_OnSetBegin( &_this->FlashTimer, pressFeedbackDuration - (XInt32)( 
    _this->KeyHandler.Time - _this->onPressKeyTime ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
  }
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onPressKey()' */
void WidgetSetToggleButton_onPressKey( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 0 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( _this->FlashTimer.Enabled )
  {
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
    WidgetSetToggleButton_OnSetChecked( _this, (XBool)!_this->Checked );

    if ( _this->Checked )
      EwPostSignal( _this->OnSwitchOn, ((XObject)_this ));
    else
      EwPostSignal( _this->OnSwitchOff, ((XObject)_this ));

    if ( _this->Outlet.Object != 0 )
    {
      EwOnSetBool( _this->Outlet, _this->Checked );
      EwNotifyRefObservers( _this->Outlet, 0 );
    }
  }

  _this->onPressKeyTime = _this->KeyHandler.Time;
  EwPostSignal( _this->OnPress, ((XObject)_this ));
  EwPostSignal( _this->OnEnter, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onLeaveTouch()' */
void WidgetSetToggleButton_onLeaveTouch( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnLeave, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onEnterTouch()' */
void WidgetSetToggleButton_onEnterTouch( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnEnter, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onReleaseTouch()' */
void WidgetSetToggleButton_onReleaseTouch( WidgetSetToggleButton _this, XObject 
  sender )
{
  XInt32 pressFeedbackDuration;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  pressFeedbackDuration = 0;

  if ( _this->Appearance != 0 )
    pressFeedbackDuration = _this->Appearance->PressedFeedbackDuration;

  _this->KeyHandler.Enabled = 1;
  EwPostSignal( _this->OnRelease, ((XObject)_this ));

  if ( !_this->TouchHandler.Inside )
    return;

  if ( _this->TouchHandler.AutoDeflected )
    return;

  if ( _this->TouchHandler.HoldPeriod >= pressFeedbackDuration )
  {
    WidgetSetToggleButton_OnSetChecked( _this, (XBool)!_this->Checked );

    if ( _this->Checked )
      EwPostSignal( _this->OnSwitchOn, ((XObject)_this ));
    else
      EwPostSignal( _this->OnSwitchOff, ((XObject)_this ));

    if ( _this->Outlet.Object != 0 )
    {
      EwOnSetBool( _this->Outlet, _this->Checked );
      EwNotifyRefObservers( _this->Outlet, 0 );
    }
  }
  else
  {
    CoreTimer_OnSetBegin( &_this->FlashTimer, pressFeedbackDuration - _this->TouchHandler.HoldPeriod );
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
  }
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onPressTouch()' */
void WidgetSetToggleButton_onPressTouch( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->KeyHandler.Enabled = 0;

  if ( _this->FlashTimer.Enabled )
  {
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
    WidgetSetToggleButton_OnSetChecked( _this, (XBool)!_this->Checked );

    if ( _this->Checked )
      EwPostSignal( _this->OnSwitchOn, ((XObject)_this ));
    else
      EwPostSignal( _this->OnSwitchOff, ((XObject)_this ));

    if ( _this->Outlet.Object != 0 )
    {
      EwOnSetBool( _this->Outlet, _this->Checked );
      EwNotifyRefObservers( _this->Outlet, 0 );
    }
  }

  EwPostSignal( _this->OnPress, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButton.OnSetOutlet()' */
void WidgetSetToggleButton_OnSetOutlet( WidgetSetToggleButton _this, XRef value )
{
  if ( !EwCompRef( _this->Outlet, value ))
    return;

  if ( _this->Outlet.Object != 0 )
    EwDetachRefObserver( EwNewSlot( _this, WidgetSetToggleButton_onOutlet ), _this->Outlet, 
      0 );

  _this->Outlet = value;

  if ( value.Object != 0 )
    EwAttachRefObserver( EwNewSlot( _this, WidgetSetToggleButton_onOutlet ), value, 
      0 );

  if ( value.Object != 0 )
    EwPostSignal( EwNewSlot( _this, WidgetSetToggleButton_onOutlet ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButton.OnSetChecked()' */
void WidgetSetToggleButton_OnSetChecked( WidgetSetToggleButton _this, XBool value )
{
  if ( _this->Checked == value )
    return;

  _this->Checked = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.OnSetLabel()' */
void WidgetSetToggleButton_OnSetLabel( WidgetSetToggleButton _this, XString value )
{
  if ( !EwCompString( value, _this->LabelOff ) && !EwCompString( value, _this->LabelOn ))
    return;

  _this->LabelOff = EwShareString( value );
  _this->LabelOn = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.OnSetAppearance()' */
void WidgetSetToggleButton_OnSetAppearance( WidgetSetToggleButton _this, WidgetSetToggleButtonConfig 
  value )
{
  if ( _this->Appearance == value )
    return;

  if ( _this->Appearance != 0 )
    EwDetachObjObserver( EwNewSlot( _this, WidgetSetToggleButton_onConfigChanged ), 
      (XObject)_this->Appearance, 0 );

  _this->Appearance = value;

  if ( value != 0 )
    EwAttachObjObserver( EwNewSlot( _this, WidgetSetToggleButton_onConfigChanged ), 
      (XObject)value, 0 );

  EwPostSignal( EwNewSlot( _this, WidgetSetToggleButton_onConfigChanged ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::ToggleButton' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetToggleButton )
EW_END_OF_CLASS_VARIANTS( WidgetSetToggleButton )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::ToggleButton' */
EW_DEFINE_CLASS( WidgetSetToggleButton, CoreGroup, textView, OnLeave, Outlet, FlashTimer, 
                 LabelOn, onPressKeyTime, "WidgetSet::ToggleButton" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  WidgetSetToggleButton_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  WidgetSetToggleButton_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( WidgetSetToggleButton )

/* Initializer for the class 'WidgetSet::PushButton' */
void WidgetSetPushButton__Init( WidgetSetPushButton _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( WidgetSetPushButton );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WidgetSetPushButton );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const000B );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const000C );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const000D );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const000E );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0009 );
  CoreSimpleTouchHandler_OnSetRetargetOffset( &_this->TouchHandler, 16 );
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  _this->IconFrameActive = -1;
  _this->IconFrameFocused = -1;
  _this->IconFrameDisabled = -1;
  _this->IconFrameDefault = -1;
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->TouchHandler ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, WidgetSetPushButton_onFlashTimer );
  _this->KeyHandler.OnRelease = EwNewSlot( _this, WidgetSetPushButton_onReleaseKey );
  _this->KeyHandler.OnPress = EwNewSlot( _this, WidgetSetPushButton_onPressKey );
  _this->TouchHandler.OnLeave = EwNewSlot( _this, WidgetSetPushButton_onLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, WidgetSetPushButton_onEnterTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, WidgetSetPushButton_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, WidgetSetPushButton_onPressTouch );
}

/* Re-Initializer for the class 'WidgetSet::PushButton' */
void WidgetSetPushButton__ReInit( WidgetSetPushButton _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
}

/* Finalizer method for the class 'WidgetSet::PushButton' */
void WidgetSetPushButton__Done( WidgetSetPushButton _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* 'C' function for method : 'WidgetSet::PushButton.OnSetBounds()' */
void WidgetSetPushButton_OnSetBounds( WidgetSetPushButton _this, XRect value )
{
  if ( _this->Appearance != 0 )
  {
    XPoint cs = EwGetRectSize( value );
    XPoint ns = cs;
    XPoint delta;

    if ( ns.X < _this->Appearance->WidgetMinSize.X )
      ns.X = _this->Appearance->WidgetMinSize.X;

    if ( ns.Y < _this->Appearance->WidgetMinSize.Y )
      ns.Y = _this->Appearance->WidgetMinSize.Y;

    if (( _this->Appearance->WidgetMaxSize.X > 0 ) && ( ns.X > _this->Appearance->WidgetMaxSize.X ))
      ns.X = _this->Appearance->WidgetMaxSize.X;

    if (( _this->Appearance->WidgetMaxSize.Y > 0 ) && ( ns.Y > _this->Appearance->WidgetMaxSize.Y ))
      ns.Y = _this->Appearance->WidgetMaxSize.Y;

    delta = EwMovePointNeg( ns, cs );

    if ( delta.X != 0 )
    {
      XBool alignToLeft = (( _this->Super3.Layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( _this->Super3.Layout & CoreLayoutAlignToRight ) == 
        CoreLayoutAlignToRight );

      if ( alignToLeft && !alignToRight )
        value.Point2.X = ( value.Point2.X + delta.X );
      else
        if ( !alignToLeft && alignToRight )
          value.Point1.X = ( value.Point1.X - delta.X );
        else
        {
          value.Point1.X = ( value.Point1.X - ( delta.X / 2 ));
          value.Point2.X = ( value.Point1.X + ns.X );
        }
    }

    if ( delta.Y != 0 )
    {
      XBool alignToTop = (( _this->Super3.Layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( _this->Super3.Layout & CoreLayoutAlignToBottom ) 
        == CoreLayoutAlignToBottom );

      if ( alignToTop && !alignToBottom )
        value.Point2.Y = ( value.Point2.Y + delta.Y );
      else
        if ( !alignToTop && alignToBottom )
          value.Point1.Y = ( value.Point1.Y - delta.Y );
        else
        {
          value.Point1.Y = ( value.Point1.Y - ( delta.Y / 2 ));
          value.Point2.Y = ( value.Point1.Y + ns.Y );
        }
    }
  }

  CoreGroup_OnSetBounds((CoreGroup)_this, value );
}

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
void WidgetSetPushButton_UpdateViewState( WidgetSetPushButton _this, XSet aState )
{
  XBool needsFace;
  XBool needsIcon;
  XBool needsLabel;
  XBool restack;
  XRect area;
  XBool isEnabled;
  XBool isFocused;
  XBool isPressed;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  needsFace = (XBool)(( _this->Appearance != 0 ) && (((( _this->Appearance->FaceDefault 
  != 0 ) || ( _this->Appearance->FaceDisabled != 0 )) || ( _this->Appearance->FaceFocused 
  != 0 )) || ( _this->Appearance->FaceActive != 0 )));
  needsIcon = (XBool)( _this->Icon != 0 );
  needsLabel = (XBool)((( _this->Appearance != 0 ) && ( EwCompString( _this->Label, 
  0 ) != 0 )) && ( _this->Appearance->LabelFont != 0 ));
  restack = 0;
  area = EwGetRectORect( _this->Super2.Bounds );

  if ( needsFace && ( _this->frameView == 0 ))
  {
    _this->frameView = EwNewObject( ViewsFrame, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->frameView ), 0 );
    restack = 1;
  }
  else
    if ( !needsFace && ( _this->frameView != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->frameView ));
      _this->frameView = 0;
    }

  if ( needsIcon && ( _this->imageView == 0 ))
  {
    _this->imageView = EwNewObject( ViewsImage, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->imageView ), 0 );
    restack = 1;
  }
  else
    if ( !needsIcon && ( _this->imageView != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->imageView ));
      _this->imageView = 0;
    }

  if ( needsLabel && ( _this->textView == 0 ))
  {
    _this->textView = EwNewObject( ViewsText, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->textView ), 0 );
    restack = 1;
    ViewsText_OnSetEnableBidiText( _this->textView, 1 );
  }
  else
    if ( !needsLabel && ( _this->textView != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->textView ));
      _this->textView = 0;
    }

  if ( restack )
  {
    if ( _this->frameView != 0 )
      CoreGroup_RestackTop((CoreGroup)_this, ((CoreView)_this->frameView ));

    if ( _this->imageView != 0 )
      CoreGroup_RestackTop((CoreGroup)_this, ((CoreView)_this->imageView ));

    if ( _this->textView != 0 )
      CoreGroup_RestackTop((CoreGroup)_this, ((CoreView)_this->textView ));
  }

  isEnabled = (( aState & CoreViewStateEnabled ) == CoreViewStateEnabled );
  isFocused = (( aState & CoreViewStateFocused ) == CoreViewStateFocused );
  isPressed = (XBool)((( _this->TouchHandler.Down && _this->TouchHandler.Inside ) 
  || _this->KeyHandler.Down ) || _this->FlashTimer.Enabled );

  if ( _this->frameView != 0 )
  {
    ResourcesBitmap bitmap = 0;
    XInt32 frameNo = -1;
    XColor tint = _Const0005;
    XSet layout = _this->Appearance->FaceLayout;
    XRect r = area;

    if ( !isEnabled )
    {
      bitmap = _this->Appearance->FaceDisabled;
      frameNo = _this->Appearance->FaceFrameDisabled;
      tint = _this->Appearance->FaceTintDisabled;
    }
    else
      if ( isPressed )
      {
        bitmap = _this->Appearance->FaceActive;
        frameNo = _this->Appearance->FaceFrameActive;
        tint = _this->Appearance->FaceTintActive;
      }
      else
        if ( isFocused )
        {
          bitmap = _this->Appearance->FaceFocused;
          frameNo = _this->Appearance->FaceFrameFocused;
          tint = _this->Appearance->FaceTintFocused;
        }
        else
        {
          bitmap = _this->Appearance->FaceDefault;
          frameNo = _this->Appearance->FaceFrameDefault;
          tint = _this->Appearance->FaceTintDefault;
        }

    ViewsFrame_OnSetAnimated( _this->frameView, (XBool)( frameNo < 0 ));
    ViewsFrame_OnSetColor( _this->frameView, tint );

    if ( frameNo < 0 )
      frameNo = 0;

    if (( bitmap != 0 ) && !(( layout & CoreLayoutResizeHorz ) == CoreLayoutResizeHorz ))
    {
      XBool alignToLeft = (( layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( layout & CoreLayoutAlignToRight ) == CoreLayoutAlignToRight );
      XInt32 w = bitmap->FrameSize.X;

      if ( alignToLeft && !alignToRight )
        r.Point2.X = ( r.Point1.X + w );
      else
        if ( !alignToLeft && alignToRight )
          r.Point1.X = ( r.Point2.X - w );
        else
        {
          r.Point1.X = (( EwGetRectW( r ) / 2 ) - ( w / 2 ));
          r.Point2.X = ( r.Point1.X + w );
        }
    }

    if (( bitmap != 0 ) && !(( layout & CoreLayoutResizeVert ) == CoreLayoutResizeVert ))
    {
      XBool alignToTop = (( layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( layout & CoreLayoutAlignToBottom ) == CoreLayoutAlignToBottom );
      XInt32 h = bitmap->FrameSize.Y;

      if ( alignToTop && !alignToBottom )
        r.Point2.Y = ( r.Point1.Y + h );
      else
        if ( !alignToTop && alignToBottom )
          r.Point1.Y = ( r.Point2.Y - h );
        else
        {
          r.Point1.Y = (( EwGetRectH( r ) / 2 ) - ( h / 2 ));
          r.Point2.Y = ( r.Point1.Y + h );
        }
    }

    ViewsFrame_OnSetFrameNumber( _this->frameView, frameNo );
    ViewsFrame_OnSetBitmap( _this->frameView, bitmap );
    CoreRectView__OnSetBounds( _this->frameView, r );
  }

  if (( _this->imageView != 0 ) && ( _this->Appearance != 0 ))
  {
    XInt32 frameNo = -1;
    XColor clr = _Const0005;

    if ( !isEnabled )
    {
      frameNo = _this->IconFrameDisabled;
      clr = _this->Appearance->IconTintDisabled;
    }
    else
      if ( isPressed )
      {
        frameNo = _this->IconFrameActive;
        clr = _this->Appearance->IconTintActive;
      }
      else
        if ( isFocused )
        {
          frameNo = _this->IconFrameFocused;
          clr = _this->Appearance->IconTintFocused;
        }
        else
        {
          frameNo = _this->IconFrameDefault;
          clr = _this->Appearance->IconTintDefault;
        }

    ViewsImage_OnSetAnimated( _this->imageView, (XBool)( frameNo < 0 ));

    if ( frameNo < 0 )
      frameNo = 0;

    CoreRectView__OnSetBounds( _this->imageView, EwNewRect( area.Point1.X + _this->Appearance->IconMarginLeft, 
    area.Point1.Y + _this->Appearance->IconMarginTop, area.Point2.X - _this->Appearance->IconMarginRight, 
    area.Point2.Y - _this->Appearance->IconMarginBottom ));
    ViewsImage_OnSetAlignment( _this->imageView, _this->Appearance->IconAlignment );
    ViewsImage_OnSetBitmap( _this->imageView, _this->Icon );
    ViewsImage_OnSetFrameNumber( _this->imageView, frameNo );
    ViewsImage_OnSetColor( _this->imageView, clr );
  }
  else
    if ( _this->imageView != 0 )
    {
      XInt32 frameNo = -1;

      if ( !isEnabled )
      {
        frameNo = _this->IconFrameDisabled;
      }
      else
        if ( isPressed )
        {
          frameNo = _this->IconFrameActive;
        }
        else
          if ( isFocused )
          {
            frameNo = _this->IconFrameFocused;
          }
          else
          {
            frameNo = _this->IconFrameDefault;
          }

      CoreRectView__OnSetBounds( _this->imageView, area );
      ViewsImage_OnSetAlignment( _this->imageView, ViewsImageAlignmentAlignHorzCenter 
      | ViewsImageAlignmentAlignVertCenter );
      ViewsImage_OnSetBitmap( _this->imageView, _this->Icon );
      ViewsImage_OnSetFrameNumber( _this->imageView, frameNo );
      ViewsImage_OnSetColor( _this->imageView, _Const0005 );
    }

  if ( _this->textView != 0 )
  {
    XColor clr = _Const0005;

    if ( !isEnabled )
      clr = _this->Appearance->LabelColorDisabled;
    else
      if ( isPressed )
        clr = _this->Appearance->LabelColorActive;
      else
        if ( isFocused )
          clr = _this->Appearance->LabelColorFocused;
        else
          clr = _this->Appearance->LabelColorDefault;

    CoreRectView__OnSetBounds( _this->textView, EwNewRect( area.Point1.X + _this->Appearance->LabelMarginLeft, 
    area.Point1.Y + _this->Appearance->LabelMarginTop, area.Point2.X - _this->Appearance->LabelMarginRight, 
    area.Point2.Y - _this->Appearance->LabelMarginBottom ));
    ViewsText_OnSetAlignment( _this->textView, _this->Appearance->LabelAlignment );
    ViewsText_OnSetWrapText( _this->textView, 1 );
    ViewsText_OnSetEllipsis( _this->textView, 1 );
    ViewsText_OnSetFont( _this->textView, _this->Appearance->LabelFont );
    ViewsText_OnSetString( _this->textView, _this->Label );
    ViewsText_OnSetColor( _this->textView, clr );
  }
}

/* 'C' function for method : 'WidgetSet::PushButton.onConfigChanged()' */
void WidgetSetPushButton_onConfigChanged( WidgetSetPushButton _this, XObject sender )
{
  XEnum oldKeyCode;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  oldKeyCode = _this->KeyHandler.Filter;

  if ( _this->Appearance != 0 )
    _this->KeyHandler.Filter = _this->Appearance->KeyCode;
  else
    _this->KeyHandler.Filter = CoreKeyCodeEnter;

  if (( oldKeyCode == CoreKeyCodeNoKey ) && ( _this->KeyHandler.Filter != CoreKeyCodeNoKey ))
    CoreView__ChangeViewState( _this, CoreViewStateFocusable, 0 );

  if (( oldKeyCode != CoreKeyCodeNoKey ) && ( _this->KeyHandler.Filter == CoreKeyCodeNoKey ))
    CoreView__ChangeViewState( _this, 0, CoreViewStateFocusable );

  if ( _this->Appearance != 0 )
    CoreRectView__OnSetBounds( _this, _this->Super2.Bounds );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.onFlashTimer()' */
void WidgetSetPushButton_onFlashTimer( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnActivate, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButton.onReleaseKey()' */
void WidgetSetPushButton_onReleaseKey( WidgetSetPushButton _this, XObject sender )
{
  XInt32 pressFeedbackDuration;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  pressFeedbackDuration = 0;

  if ( _this->Appearance != 0 )
    pressFeedbackDuration = _this->Appearance->PressedFeedbackDuration;

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 1 );
  EwPostSignal( _this->OnLeave, ((XObject)_this ));
  EwPostSignal( _this->OnRelease, ((XObject)_this ));
  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ((XInt32)( _this->KeyHandler.Time - _this->onPressKeyTime ) >= pressFeedbackDuration )
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
  else
  {
    CoreTimer_OnSetBegin( &_this->FlashTimer, pressFeedbackDuration - (XInt32)( 
    _this->KeyHandler.Time - _this->onPressKeyTime ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
  }
}

/* 'C' function for method : 'WidgetSet::PushButton.onPressKey()' */
void WidgetSetPushButton_onPressKey( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 0 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( _this->FlashTimer.Enabled )
  {
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
  }

  _this->onPressKeyTime = _this->KeyHandler.Time;
  EwPostSignal( _this->OnPress, ((XObject)_this ));
  EwPostSignal( _this->OnEnter, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButton.onLeaveTouch()' */
void WidgetSetPushButton_onLeaveTouch( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnLeave, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButton.onEnterTouch()' */
void WidgetSetPushButton_onEnterTouch( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnEnter, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButton.onReleaseTouch()' */
void WidgetSetPushButton_onReleaseTouch( WidgetSetPushButton _this, XObject sender )
{
  XInt32 pressFeedbackDuration;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  pressFeedbackDuration = 0;

  if ( _this->Appearance != 0 )
    pressFeedbackDuration = _this->Appearance->PressedFeedbackDuration;

  _this->KeyHandler.Enabled = 1;
  EwPostSignal( _this->OnRelease, ((XObject)_this ));

  if ( !_this->TouchHandler.Inside )
    return;

  if ( _this->TouchHandler.AutoDeflected )
    return;

  if ( _this->TouchHandler.HoldPeriod >= pressFeedbackDuration )
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
  else
  {
    CoreTimer_OnSetBegin( &_this->FlashTimer, pressFeedbackDuration - _this->TouchHandler.HoldPeriod );
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
  }
}

/* 'C' function for method : 'WidgetSet::PushButton.onPressTouch()' */
void WidgetSetPushButton_onPressTouch( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->KeyHandler.Enabled = 0;

  if ( _this->FlashTimer.Enabled )
  {
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
  }

  EwPostSignal( _this->OnPress, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButton.OnSetLabel()' */
void WidgetSetPushButton_OnSetLabel( WidgetSetPushButton _this, XString value )
{
  if ( !EwCompString( _this->Label, value ))
    return;

  _this->Label = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.OnSetAppearance()' */
void WidgetSetPushButton_OnSetAppearance( WidgetSetPushButton _this, WidgetSetPushButtonConfig 
  value )
{
  if ( _this->Appearance == value )
    return;

  if ( _this->Appearance != 0 )
    EwDetachObjObserver( EwNewSlot( _this, WidgetSetPushButton_onConfigChanged ), 
      (XObject)_this->Appearance, 0 );

  _this->Appearance = value;

  if ( value != 0 )
    EwAttachObjObserver( EwNewSlot( _this, WidgetSetPushButton_onConfigChanged ), 
      (XObject)value, 0 );

  EwPostSignal( EwNewSlot( _this, WidgetSetPushButton_onConfigChanged ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::PushButton' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetPushButton )
EW_END_OF_CLASS_VARIANTS( WidgetSetPushButton )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::PushButton' */
EW_DEFINE_CLASS( WidgetSetPushButton, CoreGroup, textView, OnLeave, FlashTimer, 
                 FlashTimer, Label, onPressKeyTime, "WidgetSet::PushButton" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  WidgetSetPushButton_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  WidgetSetPushButton_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( WidgetSetPushButton )

/* Embedded Wizard */
