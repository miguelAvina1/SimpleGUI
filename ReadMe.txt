/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This software is delivered "as is" and shows the usage of other software
* components. It is provided as an example software which is intended to be
* modified and extended according to particular requirements.
*
* TARA Systems hereby disclaims all warranties and conditions with regard to the
* software, including all implied warranties and conditions of merchantability
* and non-infringement of any third party IPR or other rights which may result
* from the use or the inability to use the software.
*
********************************************************************************
*
* DESCRIPTION:
*   This package contains everything needed to build and run an Embedded Wizard
*   generated UI application on a NxpLpc target.
*   This Build Environment for Embedded Wizard generated UI applications was
*   tested by using the following components:
*   - Embedded Wizard Studio V10.00
*   - Embedded Wizard Platform Package for NxpLpc V10.00
*   - LPCXpresso54628 Build Environment V10.00
*   - LPCXpresso54628 development board (OM13092)
*   - MCUXpresso SDK V2.8.2
*   - GCC ARM Embedded Toolchain 9-2020-q2-update
*   - IAR Embedded Workbench 8.50.6, IAR C/C++ Compiler V8.50.6.265/W32 for ARM
*   - Keil MDK-ARM Professional Version 5.32.0.0, ARM Compiler 6.14.1 (armclang)
*   - MCUXpresso IDE V11.2.1 Build 4149
*
*******************************************************************************/

Getting started with LPCXpresso54628 development board:
-------------------------------------------------------
  In order to get your first Embedded Wizard generated UI application up and
  running on your LPC54628 target, we have prepared a detailed article, which
  covers all necessary steps.
  We highly recommend to study the following document:

  https://doc.embedded-wizard.de/getting-started-lpcxpresso54628


Getting started with Embedded Wizard Studio:
--------------------------------------------
  In order to get familiar with Embedded Wizard Studio and the UI development
  work-flow, we highly recommend to study our online documentation:

  https://doc.embedded-wizard.de

  Furthermore, we have collected many 'Questions and Answers' covering
  typical Embedded Wizard programming aspects. Please visit our community:

  https://ask.embedded-wizard.de

  Please use this platform to drop your questions, answers and ideas.


/*******************************************************************************
* Important note:
* This Build Environment is intended to be used as template for Embedded Wizard
* GUI applications on the development board or your customer specific hardware.
* Please take care to adjust all timings and hardware configurations (e.g. system
* clock configurations, memory timings, MPU and cache settings) according to your
* needs and hardware capabilities in order to ensure a stable system.
* Please also take the hardware manufacturer's corresponding specifications,
* application notes and erratas into account.
*******************************************************************************/


Build Environment specific changes:
-----------------------------------
* Version 10.00
  - Adding SmartThermostat examples.
  - Changed from MCUXpresso SDK V2.7.0 to MCUXpresso SDK V2.8.2
  - Changed from MCUXpresso IDE V11.1.0 to MCUXpresso IDE V11.2.1
  - Test with Embedded Wizard V10.00 and NxpLpc Platform Package V10.00

* Version 9.30.01
  - DeviceDriver.c template improved to handle display update request properly.
  - Memory pool defines renamed and typos in comments fixed.
  - Changed from MCUXpresso SDK V2.6.0 to MCUXpresso SDK V2.7.0
  - Changed from MCUXpresso IDE V11.0.1 to MCUXpresso IDE V11.1.0
  - Test with Embedded Wizard V9.30 and NxpLpc Platform Package V9.30

* Version 9.30
  - The TLSF memroy manager has been removed: The Runtime Environment
    contains now an own optimized memory manager that is tailored for GUI
    applications on resource constraint embedded systems.
    The Embedded Wizard Heap Manager is now used instead of TLSF.
  - The file ewmain.c is adapted to use the new memory manager.
    For debugging purposes the new function EwVerifyHeap() is called
    before the Garbage Collector is started, to check the memory integrity.
  - The project configuration is now done within the new file ewconfig.h.
    The file ewmain.c does no more contain configuration settings.
    The makefile/project files contain only those settings which have an
    impact to the project structure or the selection of files and libraries.
  - The interface between Embedded Wizard and the underlying hardware specific
    Board Support Package has been redesigned and aligned with all other
    platforms. Please have a look to the header files within the folder
    /TargetSpecific for more details.
  - Improved handling of double-buffering: The time span between a completed
    drawing of the back-buffer and the occurence of the next V-sync can now be
    used by CPU to prepare next frame.
  - Support of multi-touch: The touch driver ew_bsp_touch.c provides now
    multi-touch events. The main loop in ewmain.c has been adapted to
    process multi-touch events.
  - The files ew_bsp_serial.c/h are renamed to ew_bsp_console.c/h
  - Changed from MCUXpresso SDK V2.5.0 to MCUXpresso SDK V2.6.0
  - Changed from MCUXpresso IDE V10.3.1 to MCUXpresso IDE V11.0.1
  - Changed to GCC ARM Embedded Toolchain 9-2020-q2-update
  - Test with Embedded Wizard V9.30 and NxpLpc Platform Package V9.30
  - Projects and libs added for Keil MDK and IAR Workbench

* Version 9.20
  - Test with Embedded Wizard V9.20 and NxpLpc Platform Package V9.20
  - The Graphics Engines for color format RGBA8888 and RGB565 have been enhanced
    to support the new bitmap resource formats RGB565 and Index8.
  - The third-party software Xprintf is no more used and has been removed.
  - The dependency to printf() function is removed: The function EwFormat()
    does not exist anymore and has been removed from ewextrte.c. The function
    EwPrint() is now part of the RTE itself and implements a subset of the
    printf() format escape sequences (%d, %u, %f, %s, %c, %x, %X).
  - The new function EwConsoleOutput() has been added to the extern RTE
    module ewextrte.c. The function is used to print the given message on
    the console. No additional formatting, etc. is needed.
  - Changed from MCUXpresso SDK V2.4.1 to MCUXpresso SDK V2.5.0.
  - The set of provided examples has been enhanced. Please have a look into
    the subdirectory /Examples.
  - Realtime clock can be set by using new EwBspSetTime() function. RTC is
    now set to a default value during start of application (see ewmain.c).

* Version 9.10
  - Test with Embedded Wizard V9.10 and NxpLpc Platform Package V9.10
  - main.c file is now split into main.c and ewmain.c
  - New function EwPrintSystemInfo() for printing system and configuration
    information - helpful in case of any support issues.
  - The flag EW_USE_QSPI_FLASH is now replaced by EW_USE_EXTERNAL_FLASH
  - The usage of FreeRTOS is now enabled by default within GCC makefile.

* Version 9.00.03
  - MCUXpresso project with optimization.
  - System clock configuration and RTC initialization changed.

* Version 9.00.02
  - Improved post process scripts for projects using MCUXpresso IDE.

* Version 9.00.01
  - Support for MCUXpresso IDE added.
  - Changed from MCUXpresso SDK V2.3.0 to MCUXpresso SDK V2.4.1.

* Version 9.00
  - Test with Embedded Wizard V9.00 and NxpLpc Platform Package V9.00
  - Support for LPCXpresso54268


Known Issues:
-------------
- Sometimes the redlinkserver tool cannot establish a connection with the board.
  As a result, the console will not work and the flash process will not work or
  stop unexpectedly.
  In order to get the board working please start the MCUXpresso IDE project and
  simply start the GUI Flash Tool at the right end of the tool bar. Then the
  probe discovery will detect the board correctly. After completing this step,
  the console and flash process will work as usual.
  This seems to be an issue under Windows 10.


3rdParty-Components
-------------------
The following 3rdParty-Components are used:

1. NXP Source code

 * Copyright (c) 2015-2016, Freescale Semiconductor, Inc.
 * Copyright 2016 NXP
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of the copyright holder nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

2. Gnu Make - GNU General Public License v2 or later

3. Gnu GCC - GNU General Public License v2 or later

4. NXP Redlink flash utility - ./ThirdParty/MCUXpressoIDE/bin/license.txt
