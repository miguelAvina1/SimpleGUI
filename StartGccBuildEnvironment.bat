@echo off

rem *************************************************************************************************
rem Please set the ABSOLUTE installation path of the flash utility
rem *************************************************************************************************

set Flash_Utility_Path=

rem *************************************************************************************************
rem Please do NOT change the following settings
rem *************************************************************************************************
set PlatformName=LPCXpresso54628
set ExternalLoader=
set BuildEnvVersion=V10.00
set GettingStartedLink=getting-started-lpcxpresso54628
cmd /K Application\Project\GCC\devenv.cmd
