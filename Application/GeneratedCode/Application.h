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

#ifndef Application_H
#define Application_H

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

#include "_ApplicationApplication.h"
#include "_ApplicationCustom.h"
#include "_ApplicationDeviceClass.h"

/* Bitmap resource : 'Application::CustomBackground' */
EW_DECLARE_BITMAP_RES( ApplicationCustomBackground )

/* Font resource : 'Application::Font' */
EW_DECLARE_FONT_RES( ApplicationFont )

/* Bitmap resource : 'Application::PushButtonIcon' */
EW_DECLARE_BITMAP_RES( ApplicationPushButtonIcon )

/* Bitmap resource : 'Application::Bitmap' */
EW_DECLARE_BITMAP_RES( ApplicationBitmap )

/* Forward declaration of the class WidgetSet::GaugeConfig */
#ifndef _WidgetSetGaugeConfig_
  EW_DECLARE_CLASS( WidgetSetGaugeConfig )
#define _WidgetSetGaugeConfig_
#endif

/* This object represents an instance of the device interface implemented in the 
   class Application::DeviceClass. */
EW_DECLARE_AUTOOBJECT( ApplicationDevice, ApplicationDeviceClass )

/* This autoobject provides the default customization for the 'analog gauge' widget 
   (WidgetSet::Gauge) in its medium size variant. */
EW_DECLARE_AUTOOBJECT( ApplicationGauge_custom, WidgetSetGaugeConfig )

#ifdef __cplusplus
  }
#endif

#endif /* Application_H */

/* Embedded Wizard */
