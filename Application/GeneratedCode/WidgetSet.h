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

#ifndef WidgetSet_H
#define WidgetSet_H

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

#include "_WidgetSetGauge.h"
#include "_WidgetSetGaugeConfig.h"
#include "_WidgetSetHorizontalValueBar.h"
#include "_WidgetSetHorizontalValueBarConfig.h"
#include "_WidgetSetPushButton.h"
#include "_WidgetSetPushButtonConfig.h"
#include "_WidgetSetToggleButton.h"
#include "_WidgetSetToggleButtonConfig.h"
#include "_WidgetSetWidgetConfig.h"

/* Bitmap resource used per default by the Widgets customized for the medium size. */
EW_DECLARE_BITMAP_RES( WidgetSetCheckBoxMedium )

/* Bitmap resource used per default by the Widgets customized for the medium size. */
EW_DECLARE_BITMAP_RES( WidgetSetGaugeNeedleMedium )

/* Bitmap resource used per default by the Widgets customized for the medium size. */
EW_DECLARE_BITMAP_RES( WidgetSetGaugeTrackMedium )

/* Bitmap resource used per default by the Widgets customized for the medium size. */
EW_DECLARE_BITMAP_RES( WidgetSetHorizontalValueBarMedium )

/* Bitmap resource used per default by the Widgets customized for the medium size. */
EW_DECLARE_BITMAP_RES( WidgetSetPushButtonMedium )

/* This autoobject provides the default customization for the 'horizontal value 
   bar' widget (WidgetSet::HorizontalValueBar) in its medium size variant. */
EW_DECLARE_AUTOOBJECT( WidgetSetHorizontalValueBar_Medium, WidgetSetHorizontalValueBarConfig )

/* This autoobject provides one of the default customizations for the 'toggle' widget 
   (WidgetSet::ToggleButton) in its medium size variant. With this customization 
   the toggle button appears as a 'check box'. */
EW_DECLARE_AUTOOBJECT( WidgetSetCheckBox_Medium, WidgetSetToggleButtonConfig )

/* This autoobject provides the default customization for the 'push button' widget 
   (WidgetSet::PushButton) in its medium size variant. */
EW_DECLARE_AUTOOBJECT( WidgetSetPushButton_Medium, WidgetSetPushButtonConfig )

#ifdef __cplusplus
  }
#endif

#endif /* WidgetSet_H */

/* Embedded Wizard */
