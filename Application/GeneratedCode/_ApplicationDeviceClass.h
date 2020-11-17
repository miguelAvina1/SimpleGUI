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

#ifndef _ApplicationDeviceClass_H
#define _ApplicationDeviceClass_H

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

#include "_CoreSystemEvent.h"

/* Forward declaration of the class Application::DeviceClass */
#ifndef _ApplicationDeviceClass_
  EW_DECLARE_CLASS( ApplicationDeviceClass )
#define _ApplicationDeviceClass_
#endif


/* This class implements the interface between the GUI application and the device. */
EW_DEFINE_FIELDS( ApplicationDeviceClass, XObject )
  EW_OBJECT  ( HardButtonEvent, CoreSystemEvent )
  EW_PROPERTY( HardButtonCounter, XInt32 )
  EW_PROPERTY( GaugeValue,      XInt32 )
  EW_PROPERTY( TouchValue,      XBool )
  EW_PROPERTY( TactileValue,    XBool )
  EW_PROPERTY( LedStatus,       XBool )
EW_END_OF_FIELDS( ApplicationDeviceClass )

/* Virtual Method Table (VMT) for the class : 'Application::DeviceClass' */
EW_DEFINE_METHODS( ApplicationDeviceClass, XObject )
EW_END_OF_METHODS( ApplicationDeviceClass )

/* This method is intended to be called by the device driver to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateHardButtonCounter( ApplicationDeviceClass _this, 
  XInt32 aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateHardButtonCounter()' */
void ApplicationDeviceClass__UpdateHardButtonCounter( void* _this, XInt32 aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateHardButtonCounter(). */
#define _ApplicationDeviceClass__UpdateHardButtonCounter_

/* This method is intended to be called by the device to notify the GUI application 
   about a particular system event. */
void ApplicationDeviceClass_TriggerHardButtonEvent( ApplicationDeviceClass _this );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.TriggerHardButtonEvent()' */
void ApplicationDeviceClass__TriggerHardButtonEvent( void* _this );

/* The following define announces the presence of the method Application::DeviceClass.TriggerHardButtonEvent(). */
#define _ApplicationDeviceClass__TriggerHardButtonEvent_

/* This method implements a device command that calls the underlying device driver 
   to print the given string (e.g. via serial interface). */
void ApplicationDeviceClass_CommandPrint( ApplicationDeviceClass _this, XString 
  aMessage );

/* 'C' function for method : 'Application::DeviceClass.OnSetLedStatus()' */
void ApplicationDeviceClass_OnSetLedStatus( ApplicationDeviceClass _this, XBool 
  value );

/* This method is intended to be called by the device driver to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateGaugeValue( ApplicationDeviceClass _this, XInt32 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateGaugeValue()' */
void ApplicationDeviceClass__UpdateGaugeValue( void* _this, XInt32 aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateGaugeValue(). */
#define _ApplicationDeviceClass__UpdateGaugeValue_

/* This method is intended to be called by the device driver to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateTactileSwitch( ApplicationDeviceClass _this, XBool 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateTactileSwitch()' */
void ApplicationDeviceClass__UpdateTactileSwitch( void* _this, XBool aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateTactileSwitch(). */
#define _ApplicationDeviceClass__UpdateTactileSwitch_

/* This method is intended to be called by the device driver to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateTouchSwitch( ApplicationDeviceClass _this, XBool 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateTouchSwitch()' */
void ApplicationDeviceClass__UpdateTouchSwitch( void* _this, XBool aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateTouchSwitch(). */
#define _ApplicationDeviceClass__UpdateTouchSwitch_

/* This method implements a device command that calls the underlying device driver 
   to print the given string (e.g. via serial interface). */
void ApplicationDeviceClass_UpdateOnLED( ApplicationDeviceClass _this, XInt32 aValue );

/* Default onget method for the property 'HardButtonCounter' */
XInt32 ApplicationDeviceClass_OnGetHardButtonCounter( ApplicationDeviceClass _this );

/* Default onset method for the property 'HardButtonCounter' */
void ApplicationDeviceClass_OnSetHardButtonCounter( ApplicationDeviceClass _this, 
  XInt32 value );

/* Default onget method for the property 'LedStatus' */
XBool ApplicationDeviceClass_OnGetLedStatus( ApplicationDeviceClass _this );

/* Default onget method for the property 'GaugeValue' */
XInt32 ApplicationDeviceClass_OnGetGaugeValue( ApplicationDeviceClass _this );

/* Default onset method for the property 'GaugeValue' */
void ApplicationDeviceClass_OnSetGaugeValue( ApplicationDeviceClass _this, XInt32 
  value );

/* Default onget method for the property 'TactileValue' */
XBool ApplicationDeviceClass_OnGetTactileValue( ApplicationDeviceClass _this );

/* Default onset method for the property 'TactileValue' */
void ApplicationDeviceClass_OnSetTactileValue( ApplicationDeviceClass _this, XBool 
  value );

/* Default onget method for the property 'TouchValue' */
XBool ApplicationDeviceClass_OnGetTouchValue( ApplicationDeviceClass _this );

/* Default onset method for the property 'TouchValue' */
void ApplicationDeviceClass_OnSetTouchValue( ApplicationDeviceClass _this, XBool 
  value );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationDeviceClass_H */

/* Embedded Wizard */
