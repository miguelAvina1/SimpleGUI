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

/* The small version of the default font resource. The resource is using 'Roboto' 
   TrueType font with 18 pixel height. */
EW_DEFINE_FONT_RES( ResourcesFontSmall, 14, 4, 0, 16, 0x0001, 0x00C0 )
  EW_GLYPH( 0x0001, 0, -11, 7, 11, 7, 0x00000000 ),
  EW_GLYPH( 0x0020, 0, 0, 0, 0, 4, 0x000000F7 ),                /* ' ' */
  EW_GLYPH( 0x0021, 1, -11, 2, 11, 4, 0x000000F7 ),             /* '!' */
  EW_GLYPH( 0x0022, 1, -11, 3, 4, 5, 0x00000136 ),              /* '"' */
  EW_GLYPH( 0x0023, 0, -11, 9, 11, 9, 0x00000157 ),             /* '#' */
  EW_GLYPH( 0x0024, 0, -13, 8, 15, 8, 0x000002AD ),             /* '$' */
  EW_GLYPH( 0x0025, 0, -11, 11, 11, 11, 0x00000446 ),           /* '%' */
  EW_GLYPH( 0x0026, 0, -11, 10, 11, 9, 0x000005EB ),            /* '&' */
  EW_GLYPH( 0x0027, 0, -11, 2, 3, 3, 0x00000768 ),              /* ''' */
  EW_GLYPH( 0x0028, 1, -12, 4, 15, 5, 0x0000077C ),             /* '(' */
  EW_GLYPH( 0x0029, 0, -12, 5, 15, 5, 0x00000842 ),             /* ')' */
  EW_GLYPH( 0x002A, 0, -11, 7, 7, 6, 0x00000916 ),              /* '*' */
  EW_GLYPH( 0x002B, 0, -10, 8, 9, 9, 0x000009CA ),              /* '+' */
  EW_GLYPH( 0x002C, 0, -2, 3, 4, 3, 0x00000A69 ),               /* ',' */
  EW_GLYPH( 0x002D, 0, -5, 4, 1, 4, 0x00000A93 ),               /* '-' */
  EW_GLYPH( 0x002E, 1, -2, 2, 2, 4, 0x00000AAB ),               /* '.' */
  EW_GLYPH( 0x002F, 0, -11, 6, 12, 6, 0x00000AB8 ),             /* '/' */
  EW_GLYPH( 0x0030, 0, -11, 8, 11, 8, 0x00000B78 ),             /* '0' */
  EW_GLYPH( 0x0031, 1, -11, 5, 11, 8, 0x00000C7B ),             /* '1' */
  EW_GLYPH( 0x0032, 0, -11, 8, 11, 8, 0x00000CE5 ),             /* '2' */
  EW_GLYPH( 0x0033, 0, -11, 8, 11, 8, 0x00000E11 ),             /* '3' */
  EW_GLYPH( 0x0034, 0, -11, 9, 11, 8, 0x00000F3D ),             /* '4' */
  EW_GLYPH( 0x0035, 1, -11, 7, 11, 8, 0x0000102B ),             /* '5' */
  EW_GLYPH( 0x0036, 1, -11, 7, 11, 8, 0x00001151 ),             /* '6' */
  EW_GLYPH( 0x0037, 0, -11, 8, 11, 8, 0x00001283 ),             /* '7' */
  EW_GLYPH( 0x0038, 0, -11, 8, 11, 8, 0x0000137E ),             /* '8' */
  EW_GLYPH( 0x0039, 0, -11, 8, 11, 8, 0x000014BE ),             /* '9' */
  EW_GLYPH( 0x003A, 1, -8, 2, 8, 4, 0x000015F7 ),               /* ':' */
  EW_GLYPH( 0x003B, 0, -8, 3, 10, 3, 0x00001622 ),              /* ';' */
  EW_GLYPH( 0x003C, 0, -8, 7, 7, 8, 0x00001670 ),               /* '<' */
  EW_GLYPH( 0x003D, 1, -7, 7, 4, 8, 0x0000172F ),               /* '=' */
  EW_GLYPH( 0x003E, 1, -8, 7, 7, 8, 0x000017A5 ),               /* '>' */
  EW_GLYPH( 0x003F, 0, -11, 7, 11, 7, 0x00001865 ),             /* '?' */
  EW_GLYPH( 0x0040, 0, -10, 13, 13, 13, 0x00001951 ),           /* '@' */
  EW_GLYPH( 0x0041, 0, -11, 10, 11, 10, 0x00001BB2 ),           /* 'A' */
  EW_GLYPH( 0x0042, 1, -11, 8, 11, 9, 0x00001D01 ),             /* 'B' */
  EW_GLYPH( 0x0043, 0, -11, 10, 11, 10, 0x00001E0C ),           /* 'C' */
  EW_GLYPH( 0x0044, 1, -11, 8, 11, 10, 0x00001F58 ),            /* 'D' */
  EW_GLYPH( 0x0045, 1, -11, 7, 11, 9, 0x0000204C ),             /* 'E' */
  EW_GLYPH( 0x0046, 1, -11, 7, 11, 8, 0x00002117 ),             /* 'F' */
  EW_GLYPH( 0x0047, 0, -11, 10, 11, 10, 0x000021CC ),           /* 'G' */
  EW_GLYPH( 0x0048, 1, -11, 9, 11, 11, 0x0000231B ),            /* 'H' */
  EW_GLYPH( 0x0049, 1, -11, 2, 11, 4, 0x000023C1 ),             /* 'I' */
  EW_GLYPH( 0x004A, 0, -11, 8, 11, 8, 0x000023E2 ),             /* 'J' */
  EW_GLYPH( 0x004B, 1, -11, 9, 11, 9, 0x00002496 ),             /* 'K' */
  EW_GLYPH( 0x004C, 1, -11, 7, 11, 8, 0x000025AC ),             /* 'L' */
  EW_GLYPH( 0x004D, 1, -11, 11, 11, 13, 0x0000261E ),           /* 'M' */
  EW_GLYPH( 0x004E, 1, -11, 9, 11, 11, 0x0000276E ),            /* 'N' */
  EW_GLYPH( 0x004F, 0, -11, 10, 11, 10, 0x00002857 ),           /* 'O' */
  EW_GLYPH( 0x0050, 1, -11, 8, 11, 9, 0x000029A9 ),             /* 'P' */
  EW_GLYPH( 0x0051, 0, -11, 10, 13, 10, 0x00002A98 ),           /* 'Q' */
  EW_GLYPH( 0x0052, 1, -11, 8, 11, 9, 0x00002C29 ),             /* 'R' */
  EW_GLYPH( 0x0053, 0, -11, 9, 11, 9, 0x00002D2C ),             /* 'S' */
  EW_GLYPH( 0x0054, 0, -11, 9, 11, 9, 0x00002EA1 ),             /* 'T' */
  EW_GLYPH( 0x0055, 1, -11, 8, 11, 10, 0x00002F4C ),            /* 'U' */
  EW_GLYPH( 0x0056, 0, -11, 10, 11, 10, 0x0000300F ),           /* 'V' */
  EW_GLYPH( 0x0057, 0, -11, 13, 11, 13, 0x0000316A ),           /* 'W' */
  EW_GLYPH( 0x0058, 0, -11, 9, 11, 9, 0x0000334C ),             /* 'X' */
  EW_GLYPH( 0x0059, 0, -11, 9, 11, 9, 0x0000349F ),             /* 'Y' */
  EW_GLYPH( 0x005A, 0, -11, 9, 11, 9, 0x00003593 ),             /* 'Z' */
  EW_GLYPH( 0x005B, 1, -12, 3, 14, 4, 0x000036CA ),             /* '[' */
  EW_GLYPH( 0x005C, 0, -11, 6, 12, 6, 0x00003714 ),             /* '\' */
  EW_GLYPH( 0x005D, 0, -12, 3, 14, 4, 0x000037DC ),             /* ']' */
  EW_GLYPH( 0x005E, 0, -11, 6, 5, 6, 0x00003822 ),              /* '^' */
  EW_GLYPH( 0x005F, 0, 0, 7, 1, 7, 0x0000388C ),                /* '_' */
  EW_GLYPH( 0x0060, 0, -11, 4, 2, 5, 0x000038B1 ),              /* '`' */
  EW_GLYPH( 0x0061, 0, -8, 8, 8, 8, 0x000038D2 ),               /* 'a' */
  EW_GLYPH( 0x0062, 0, -11, 8, 11, 8, 0x000039C0 ),             /* 'b' */
  EW_GLYPH( 0x0063, 0, -8, 8, 8, 8, 0x00003A9E ),               /* 'c' */
  EW_GLYPH( 0x0064, 0, -11, 8, 11, 8, 0x00003B7A ),             /* 'd' */
  EW_GLYPH( 0x0065, 0, -8, 8, 8, 8, 0x00003C57 ),               /* 'e' */
  EW_GLYPH( 0x0066, 0, -11, 6, 11, 5, 0x00003D4D ),             /* 'f' */
  EW_GLYPH( 0x0067, 0, -8, 8, 11, 8, 0x00003DE0 ),              /* 'g' */
  EW_GLYPH( 0x0068, 0, -11, 8, 11, 8, 0x00003F0A ),             /* 'h' */
  EW_GLYPH( 0x0069, 1, -11, 2, 11, 4, 0x00003FA9 ),             /* 'i' */
  EW_GLYPH( 0x006A, -1, -11, 4, 14, 4, 0x00003FDE ),            /* 'j' */
  EW_GLYPH( 0x006B, 1, -11, 7, 11, 8, 0x00004045 ),             /* 'k' */
  EW_GLYPH( 0x006C, 1, -11, 2, 11, 4, 0x00004111 ),             /* 'l' */
  EW_GLYPH( 0x006D, 1, -8, 12, 8, 13, 0x00004131 ),             /* 'm' */
  EW_GLYPH( 0x006E, 0, -8, 8, 8, 8, 0x0000421A ),               /* 'n' */
  EW_GLYPH( 0x006F, 0, -8, 9, 8, 9, 0x000042A0 ),               /* 'o' */
  EW_GLYPH( 0x0070, 0, -8, 8, 11, 8, 0x000043A0 ),              /* 'p' */
  EW_GLYPH( 0x0071, 0, -8, 8, 11, 9, 0x000044A3 ),              /* 'q' */
  EW_GLYPH( 0x0072, 1, -8, 4, 8, 5, 0x00004598 ),               /* 'r' */
  EW_GLYPH( 0x0073, 0, -8, 8, 8, 8, 0x000045DD ),               /* 's' */
  EW_GLYPH( 0x0074, 0, -10, 5, 10, 5, 0x000046E2 ),             /* 't' */
  EW_GLYPH( 0x0075, 0, -8, 8, 8, 8, 0x00004762 ),               /* 'u' */
  EW_GLYPH( 0x0076, 0, -8, 7, 8, 7, 0x000047E2 ),               /* 'v' */
  EW_GLYPH( 0x0077, 0, -8, 11, 8, 11, 0x000048A1 ),             /* 'w' */
  EW_GLYPH( 0x0078, 0, -8, 8, 8, 7, 0x000049E2 ),               /* 'x' */
  EW_GLYPH( 0x0079, 0, -8, 7, 11, 7, 0x00004AC6 ),              /* 'y' */
  EW_GLYPH( 0x007A, 0, -8, 7, 8, 7, 0x00004BC7 ),               /* 'z' */
  EW_GLYPH( 0x007B, 0, -12, 5, 15, 5, 0x00004C9C ),             /* '{' */
  EW_GLYPH( 0x007C, 1, -11, 2, 13, 4, 0x00004D72 ),             /* '|' */
  EW_GLYPH( 0x007D, 0, -12, 5, 15, 5, 0x00004D97 ),             /* '}' */
  EW_GLYPH( 0x007E, 0, -6, 10, 3, 10, 0x00004E65 ),             /* '~' */
  EW_GLYPH( 0x00A0, 0, 0, 0, 0, 4, 0x00004EDC ),
  EW_GLYPH( 0x00A1, 1, -8, 2, 11, 4, 0x00004EDC ),
  EW_GLYPH( 0x00A2, 0, -10, 8, 12, 8, 0x00004F1B ),
  EW_GLYPH( 0x00A3, 0, -11, 9, 11, 9, 0x00005046 ),
  EW_GLYPH( 0x00A4, 0, -10, 11, 11, 11, 0x00005164 ),
  EW_GLYPH( 0x00A5, 0, -11, 9, 11, 9, 0x00005303 ),
  EW_GLYPH( 0x00A6, 1, -11, 2, 13, 4, 0x00005440 ),
  EW_GLYPH( 0x00A7, 0, -11, 9, 15, 9, 0x00005478 ),
  EW_GLYPH( 0x00A8, 0, -11, 6, 2, 6, 0x00005671 ),
  EW_GLYPH( 0x00A9, 0, -11, 12, 11, 12, 0x00005693 ),
  EW_GLYPH( 0x00AA, 1, -11, 5, 6, 7, 0x0000588D ),
  EW_GLYPH( 0x00AB, 0, -7, 6, 6, 7, 0x00005913 ),
  EW_GLYPH( 0x00AC, 0, -6, 7, 3, 8, 0x000059A7 ),
  EW_GLYPH( 0x00AD, 0, -5, 4, 1, 4, 0x000059EF ),
  EW_GLYPH( 0x00AE, 0, -11, 12, 11, 12, 0x00005A07 ),
  EW_GLYPH( 0x00AF, 0, -11, 7, 1, 7, 0x00005BD0 ),
  EW_GLYPH( 0x00B0, 1, -11, 4, 4, 6, 0x00005BF1 ),
  EW_GLYPH( 0x00B1, 0, -9, 8, 9, 8, 0x00005C36 ),
  EW_GLYPH( 0x00B2, 0, -11, 6, 6, 6, 0x00005CEB ),
  EW_GLYPH( 0x00B3, 0, -11, 6, 6, 6, 0x00005D7A ),
  EW_GLYPH( 0x00B4, 0, -11, 4, 2, 5, 0x00005E01 ),
  EW_GLYPH( 0x00B5, 1, -8, 7, 11, 9, 0x00005E21 ),
  EW_GLYPH( 0x00B6, 0, -11, 6, 11, 7, 0x00005EC7 ),
  EW_GLYPH( 0x00B7, 1, -6, 2, 2, 4, 0x00005F65 ),
  EW_GLYPH( 0x00B8, 1, 0, 3, 3, 4, 0x00005F73 ),
  EW_GLYPH( 0x00B9, 1, -11, 3, 6, 6, 0x00005FA0 ),
  EW_GLYPH( 0x00BA, 1, -11, 5, 6, 7, 0x00005FD9 ),
  EW_GLYPH( 0x00BB, 0, -7, 7, 6, 7, 0x00006061 ),
  EW_GLYPH( 0x00BC, 0, -11, 11, 11, 11, 0x000060F7 ),
  EW_GLYPH( 0x00BD, 0, -11, 12, 11, 12, 0x00006259 ),
  EW_GLYPH( 0x00BE, 0, -11, 12, 11, 12, 0x000063D9 ),
  EW_GLYPH( 0x00BF, 0, -8, 7, 11, 7, 0x0000659F ),
  EW_GLYPH( 0x00C0, 0, -14, 10, 14, 10, 0x0000667A ),
  EW_GLYPH( 0x00C1, 0, -14, 10, 14, 10, 0x0000680B ),
  EW_GLYPH( 0x00C2, 0, -14, 10, 14, 10, 0x00006999 ),
  EW_GLYPH( 0x00C3, 0, -14, 10, 15, 10, 0x00006B3A ),
  EW_GLYPH( 0x00C4, 0, -14, 10, 14, 10, 0x00006CE8 ),
  EW_GLYPH( 0x00C5, 0, -14, 10, 15, 10, 0x00006E81 ),
  EW_GLYPH( 0x00C6, -1, -11, 15, 11, 14, 0x0000702B ),
  EW_GLYPH( 0x00C7, 0, -11, 10, 14, 10, 0x000071EB ),
  EW_GLYPH( 0x00C8, 1, -14, 7, 14, 9, 0x00007389 ),
  EW_GLYPH( 0x00C9, 1, -14, 7, 14, 9, 0x0000748D ),
  EW_GLYPH( 0x00CA, 1, -14, 7, 14, 9, 0x0000758E ),
  EW_GLYPH( 0x00CB, 1, -14, 7, 14, 9, 0x000076A2 ),
  EW_GLYPH( 0x00CC, -1, -14, 4, 14, 4, 0x000077AE ),
  EW_GLYPH( 0x00CD, 0, -14, 4, 14, 4, 0x00007815 ),
  EW_GLYPH( 0x00CE, 0, -14, 5, 14, 4, 0x00007879 ),
  EW_GLYPH( 0x00CF, -1, -14, 6, 14, 4, 0x000078FE ),
  EW_GLYPH( 0x00D0, 0, -11, 10, 11, 10, 0x00007989 ),
  EW_GLYPH( 0x00D1, 1, -14, 9, 15, 11, 0x00007AB3 ),
  EW_GLYPH( 0x00D2, 0, -14, 10, 14, 10, 0x00007BF7 ),
  EW_GLYPH( 0x00D3, 0, -14, 10, 14, 10, 0x00007D8B ),
  EW_GLYPH( 0x00D4, 0, -14, 10, 14, 10, 0x00007F1C ),
  EW_GLYPH( 0x00D5, 0, -14, 10, 15, 10, 0x000080C0 ),
  EW_GLYPH( 0x00D6, 0, -14, 10, 14, 10, 0x00008271 ),
  EW_GLYPH( 0x00D7, 0, -8, 8, 7, 8, 0x0000840D ),
  EW_GLYPH( 0x00D8, 0, -12, 10, 13, 10, 0x000084D2 ),
  EW_GLYPH( 0x00D9, 1, -14, 8, 14, 10, 0x00008695 ),
  EW_GLYPH( 0x00DA, 1, -14, 8, 14, 10, 0x00008794 ),
  EW_GLYPH( 0x00DB, 1, -14, 8, 14, 10, 0x00008890 ),
  EW_GLYPH( 0x00DC, 1, -14, 8, 14, 10, 0x0000899F ),
  EW_GLYPH( 0x00DD, 0, -14, 9, 14, 9, 0x00008AA6 ),
  EW_GLYPH( 0x00DE, 1, -11, 8, 11, 9, 0x00008BD6 ),
  EW_GLYPH( 0x00DF, 1, -11, 8, 11, 9, 0x00008CB7 ),
  EW_GLYPH( 0x00E0, 0, -11, 8, 11, 8, 0x00008DC7 ),
  EW_GLYPH( 0x00E1, 0, -11, 8, 11, 8, 0x00008EF1 ),
  EW_GLYPH( 0x00E2, 0, -11, 8, 11, 8, 0x00009018 ),
  EW_GLYPH( 0x00E3, 0, -12, 8, 12, 8, 0x00009152 ),
  EW_GLYPH( 0x00E4, 0, -11, 8, 11, 8, 0x00009297 ),
  EW_GLYPH( 0x00E5, 0, -12, 8, 12, 8, 0x000093C9 ),
  EW_GLYPH( 0x00E6, 0, -8, 13, 8, 13, 0x0000950A ),
  EW_GLYPH( 0x00E7, 0, -8, 8, 11, 8, 0x000096AF ),
  EW_GLYPH( 0x00E8, 0, -11, 8, 11, 8, 0x000097D3 ),
  EW_GLYPH( 0x00E9, 0, -11, 8, 11, 8, 0x00009905 ),
  EW_GLYPH( 0x00EA, 0, -11, 8, 11, 8, 0x00009A34 ),
  EW_GLYPH( 0x00EB, 0, -11, 8, 11, 8, 0x00009B76 ),
  EW_GLYPH( 0x00EC, -1, -11, 4, 11, 4, 0x00009CB0 ),
  EW_GLYPH( 0x00ED, 0, -11, 4, 11, 4, 0x00009D0A ),
  EW_GLYPH( 0x00EE, -1, -11, 5, 11, 4, 0x00009D61 ),
  EW_GLYPH( 0x00EF, -1, -11, 6, 11, 4, 0x00009DD6 ),
  EW_GLYPH( 0x00F0, 1, -11, 7, 11, 9, 0x00009E4E ),
  EW_GLYPH( 0x00F1, 0, -12, 8, 12, 8, 0x00009F93 ),
  EW_GLYPH( 0x00F2, 0, -11, 9, 11, 9, 0x0000A070 ),
  EW_GLYPH( 0x00F3, 0, -11, 9, 11, 9, 0x0000A1AF ),
  EW_GLYPH( 0x00F4, 0, -11, 9, 11, 9, 0x0000A2EB ),
  EW_GLYPH( 0x00F5, 0, -12, 9, 12, 9, 0x0000A43A ),
  EW_GLYPH( 0x00F6, 0, -11, 9, 11, 9, 0x0000A595 ),
  EW_GLYPH( 0x00F7, 0, -10, 9, 9, 9, 0x0000A6DC ),
  EW_GLYPH( 0x00F8, 0, -9, 9, 10, 9, 0x0000A794 ),
  EW_GLYPH( 0x00F9, 0, -11, 8, 11, 8, 0x0000A8E5 ),
  EW_GLYPH( 0x00FA, 0, -11, 8, 11, 8, 0x0000A9A1 ),
  EW_GLYPH( 0x00FB, 0, -11, 8, 11, 8, 0x0000AA5A ),
  EW_GLYPH( 0x00FC, 0, -11, 8, 11, 8, 0x0000AB26 ),
  EW_GLYPH( 0x00FD, 0, -11, 7, 14, 7, 0x0000ABEA ),
  EW_GLYPH( 0x00FE, 1, -11, 7, 14, 9, 0x0000AD21 ),
  EW_GLYPH( 0x00FF, 0, -11, 7, 14, 7, 0x0000AE2C ),

  EW_FONT_PIXEL( ResourcesFontSmall, 0x0000AF6E )               /* ratio 73.93 % */
    0x27BDEE71, 0x66DEF7BC, 0xD359230C, 0x20AB585C, 0x809E404F, 0x9A6B0AB5, 0xE48C318B,
    0xDFB6F7BD, 0xEA73800B, 0x75CBDF19, 0x38083489, 0x53CA781C, 0xEE7BF7BC, 0xADEF5CF7,
    0xC5DFADDF, 0x841E78F3, 0x89EE2108, 0xB8AEE27B, 0xBAEFBAEF, 0x03DC738B, 0x9CC26523,
    0x80D104E6, 0x5DCDF407, 0xBFBFF9CC, 0xB0D7FD2F, 0xB7818946, 0xAA545A9C, 0x40EFF7EF,
    0x187633ED, 0xF6379F8C, 0x0EA88CC0, 0xC5F7F3CF, 0xBE25DDBD, 0xE427FD7F, 0x0FFE7985,
    0x8FEF7D10, 0x3913E41E, 0x9F20D462, 0xA22FA1C8, 0x1CADFDEF, 0x7EBFCF30, 0xE7BFD00D,
    0x9C8C167F, 0xE25FB9EF, 0x17311CB6, 0xE61C86A3, 0x39EF3464, 0xCFFE60DF, 0xF7DF202F,
    0xFE52C344, 0xEF8D5309, 0xFFBE630F, 0xB991826F, 0xFF9BF044, 0x751B7578, 0x5CF5ACF3,
    0x5CEBF184, 0x0C20E8C6, 0x5F39EEFE, 0xC26FE31D, 0xBCF9E578, 0xF967A8DF, 0x919FCF17,
    0xF9E48C00, 0x59EA2FF3, 0xF3CA5FBC, 0x077CC2AD, 0x3C4F17D1, 0x0FFE0E78, 0xCC000466,
    0x9E0FFE08, 0xF78A653F, 0xE301DF30, 0xFFD08087, 0xBC6EFE77, 0x86FFE667, 0xE7076B19,
    0x86FC1CF4, 0x6B00403D, 0xB9E00003, 0xFFDEF3B7, 0xBDE76F73, 0x3C00007F, 0x3C0EE22F,
    0xDDFB4631, 0xF035FFFB, 0x4F0FAC36, 0xA887EE26, 0xDF815985, 0xBF07C8C5, 0x150FCF09,
    0xF407E703, 0x3F41BFB9, 0xF3C38EFB, 0xC89E3D4B, 0x3AC09907, 0x3AC00000, 0xF8720F91,
    0x5947A97E, 0x50E3BECF, 0xFFEF9FBD, 0x01F7BE1F, 0x00000000, 0xFEE7BC40, 0xEF71FF06,
    0xBF18C7F8, 0x03B951D0, 0x14660622, 0x59C43764, 0xC2F5BE13, 0xF3D07EB7, 0xB9C6B10F,
    0x77C5FEF7, 0xBBF92FCE, 0x1D1CAF27, 0x26F2397E, 0xC41AE880, 0xDC45EB3D, 0x3D00DCFB,
    0x6301B8D6, 0xE52C2FE4, 0x03FF67BA, 0x09C0BCF2, 0xEF902960, 0xC039DE05, 0x0FA20D9C,
    0xB7BEC6F0, 0xF7BE8DE6, 0x00379ADE, 0xBDEF7000, 0xBDFF8577, 0x33090D77, 0x3FF7D840,
    0xF76E73C5, 0xD4F4BF53, 0x17B9FF05, 0x86FBF3FE, 0x73BF3BAA, 0xBF987EDF, 0xF77F7833,
    0xE16EB50C, 0x77E584AC, 0xBEAC8FFF, 0xE1BF0DFD, 0xE40C5FA9, 0x71C8FE78, 0xAF9E7967,
    0xBF7DEF7E, 0x7BDEF75C, 0x7BDD6FEF, 0xA83FCDEF, 0x609DC131, 0x27BE07D4, 0x3301D621,
    0x981F7C0B, 0x026F8263, 0xD06FEE7D, 0xE7F9BECF, 0x051BD2F9, 0x6752FBE0, 0xE77FF359,
    0xFBEE75E1, 0x561D988F, 0xD512C0BE, 0x5F3F3E61, 0x86FFFBDE, 0xF179CF78, 0x89F9BDE5,
    0xC9F788EA, 0x90AE6494, 0xE23AB230, 0xF773E1CD, 0xFE77E20D, 0x4778162B, 0xF8BCD622,
    0x5F87B3ED, 0xD7E06BF3, 0x1AFC35F8, 0x2781DC40, 0x4D6068C6, 0xF465F3AC, 0xE6BFF5F9,
    0xAE64F77A, 0x9F443F77, 0x585FEFDF, 0xBDFFCBE7, 0xBFF1DEF7, 0x003BDEF7, 0xBDEF7BFF,
    0xBE2057E3, 0xBFBBE0FD, 0xFF5893DE, 0xFFD10EF9, 0x56EF8EF9, 0xFDBE29EF, 0x7FEFB3C0,
    0xDF7BDFCA, 0x547CC477, 0x0C6268D6, 0x6FC29EF8, 0x813AA87D, 0x40B909D9, 0xFE60001D,
    0x101DDDCE, 0xE7B9F77B, 0xF7FF81EE, 0xC39D720D, 0xE7DAA6B3, 0xE71EA317, 0x4CCFAFCA,
    0xBF2ABFFF, 0x22358459, 0x20264DA9, 0x311CC497, 0x7EF1A518, 0xFF7F479E, 0x4DFBFEBB,
    0xFFFEA3B7, 0xA1FBFFA7, 0x7884FDBE, 0x7BDEF580, 0xFFC00EF7, 0x01518C03, 0xB0172B7C,
    0x3C0FBFFE, 0x70919EA3, 0x510F8E4A, 0xD307BF1F, 0xF8B3B7BE, 0x9F7BDEFA, 0xB703E463,
    0x31E1237C, 0xF3DEF77F, 0xEBDEF325, 0x82477880, 0x34ADC405, 0x334F3DEF, 0x3FEFBDEF,
    0x4000B2C0, 0x33DEF32B, 0xE77E49FE, 0xF3710AFE, 0xF43DF3DE, 0x97CCF0EC, 0x23DF87F5,
    0x58BC6122, 0x22201600, 0x87F51721, 0x4D3F47EF, 0x79DC97CD, 0xBF1EFDCE, 0x985EEF7B,
    0x81FDDEF7, 0x6203D5F1, 0x404CE01D, 0x13381202, 0xFE303AC4, 0xDEF798F5, 0xF7BBF3EF,
    0x7BCD7BDE, 0x0000BDEF, 0xDEF7BCC0, 0xEF7BDE61, 0xE6000000, 0xDFDEF7BD, 0xBFDEF7BD,
    0x7FBDEF79, 0xDE600000, 0xF7986F7B, 0x00001BDE, 0xE77E4000, 0x79DC89EE, 0x9FA4F76F,
    0xA8FEF50E, 0x6223CC3F, 0x80000C40, 0x2237BDDF, 0x98DDDF92, 0xBE37803F, 0x7B105F10,
    0xF8EDBBDC, 0x002EE0BD, 0x30000000, 0x62F7BDEF, 0x05EF7BDE, 0x00000000, 0x00001FDE,
    0x00037180, 0x00000000, 0xFF780220, 0xA637E298, 0xFBE31F7C, 0xEFCFAEEE, 0xE05FFC45,
    0xF9F05F3F, 0xE0275AC0, 0xF3C24F79, 0xEFCF209A, 0xA9F2B097, 0x0345F803, 0x6A02AEF1,
    0x017BF1BE, 0x00000000, 0xC0000000, 0xDFDEF7BC, 0xF7900EEF, 0x8C3E07CF, 0x6FC19E05,
    0xCE28D44C, 0x1759C7F3, 0x1F510D5F, 0x1CCCFD64, 0xE7DF4CE0, 0x0B1DE3C0, 0xE0056730,
    0x033AC0E7, 0x80B8AF7E, 0xF78C05C8, 0x07E5600D, 0x6300F5B8, 0x01AD0075, 0x3D409CEF,
    0xE205F809, 0x8857E73B, 0xEF9CF79D, 0xF3C3A3A1, 0x9983EB36, 0x4C212223, 0x202C9016,
    0xB4C21223, 0x7439983E, 0x9B79E1BC, 0xF3DEE3D8, 0xF7BDEE3D, 0xDEEF8AFC, 0x5601BFB3,
    0x601580FE, 0xEF77DFD6, 0xBBE57FF9, 0x001EFCF7, 0x8C000000, 0x625F39DF, 0xFCE7FFFC,
    0x64E77277, 0x83F1CB55, 0x1984965B, 0x80100083, 0x391A6125, 0x3B8B707E, 0xC65EAB27,
    0x5BCE7FFF, 0xE73BF189, 0xB1807EBF, 0xDEF7FEFF, 0xEF7D25F3, 0xA2FC41B5, 0x597E2000,
    0x9B13DEFA, 0xC022B7BE, 0x68D4127D, 0x3C127DE0, 0xDFFAC7E3, 0x73BFA37F, 0xDFCCD8F7,
    0x0418EF10, 0x277EA772, 0xFFDF9846, 0x77EA037C, 0x20C579F7, 0x772399E6, 0xDEA39862,
    0xBF28DE21, 0x3B1DEF7D, 0xBDEF7BDE, 0xBDEFBEF7, 0x05F7B9DB, 0x00000000, 0x00000000,
    0xB05FF000, 0x000000FE, 0x01000000, 0xAFF87F98, 0xDEB326B7, 0xF39FFFF1, 0x13798FFF,
    0x0F19CEE2, 0x0FD658AC, 0x23FE15FE, 0x3E543AC9, 0x7E78513C, 0x46FC16FC, 0x8C60F8E6,
    0x7E01C9E7, 0x3C07DFBF, 0xD6403C63, 0x6703CC48, 0x922BFD61, 0x32BB1B11, 0xCF07CA8A,
    0x53FD9755, 0x11FFCA32, 0x48A86B55, 0xF732A235, 0x3C462DCF, 0x9E2351FB, 0x5B519E3F,
    0xE30A358C, 0xC7FA8A37, 0x760F1EC0, 0xA3F8F03D, 0x44CE3362, 0x0ECC779C, 0x6D1EB47A,
    0xD67A0ECC, 0xF3CF07AD, 0x544E0BE5, 0x80CF1B82, 0x88BAFF59, 0xD273A39E, 0x51D98DA3,
    0xBF1E83B3, 0xB6F380F7, 0xBE63A585, 0x5AF0DF78, 0x6FBC4596, 0xB1AC2FBC, 0xFCBF02C7,
    0x00078F01, 0xF7180000, 0x8DEF7BDE, 0x77BDEF71, 0x2F958054, 0xF04DF7C8, 0xB9F302E6,
    0xF00E7A20, 0xE79E0D1B, 0x4039E880, 0xDEF7BCE5, 0xD7FBDCFB, 0x0000007F, 0x7EBFFA00,
    0xEB2254F0, 0x7307FF81, 0xFC1F580C, 0xE078D417, 0x2055F039, 0x77EF84C7, 0x0036FFEF,
    0xB7000000, 0xAAC87DF1, 0x997AABE0, 0x8E6699EF, 0xBDEF79CA, 0xDFF2FEF7, 0xEFCA54F2,
    0xE3B82F9C, 0x15FB1F5C, 0x73BF21F7, 0xEE3FE0BF, 0x01D118FD, 0x8978D319, 0x93FDBBEF,
    0x00000371, 0x0F77FEB0, 0x839F7DEC, 0x1878EF0E, 0xC0C00918, 0xE3BC3A48, 0x079BEF61,
    0xD06FEE7D, 0x87FEEFB5, 0x33E569D9, 0x802EC1E2, 0x987A0F11, 0x5D4CD69D, 0x807FECFB,
    0x40000371, 0x87FFEEFE, 0xCF27771B, 0x0E4BC4F8, 0xF0072000, 0xB8BC4F8C, 0xD61FF771,
    0xBD06FCFF, 0xD987D9F7, 0xB11A8D61, 0x9C91BDEF, 0xA99DEF7B, 0xC61ECC40, 0xEE73EF4E,
    0x873E937D, 0xC8C3FF5A, 0xBEF3AFC1, 0x05F79D7E, 0x00000000, 0xF3FF77F2, 0xDECE370E,
    0x9A22FE54, 0x6000C191, 0xF1A83064, 0x77138D13, 0xFBBF91FF, 0xD14F692F, 0xDCFFEE15,
    0x001DC4FC, 0xDDFA8000, 0xB77F617F, 0x32F8745E, 0x00000000, 0xEF97BE00, 0x0000BDFD,
    0xF35F035F, 0x0000017B, 0xAE315800, 0x00003EF7, 0x6F83FD80, 0x0FCEF0FD, 0xF881BE67,
    0xF59F703A, 0x105CDF81, 0x0BFE3BEF, 0xDAEE0000, 0xFFCF5FF7, 0xDFFEC1EE, 0x3EFBBBE7,
    0x78BE1397, 0x01807FC3, 0x0000004B, 0xC4000000, 0x2FFBBF9D, 0x2F5BBFFC, 0x00197C3A,
    0x00000000, 0x3FFDFFCC, 0xF7DEFD98, 0x4B7BF0F7, 0xA0722DBD, 0x44585832, 0xDF864616,
    0x31FDEA5B, 0x4F6FBDFB, 0xFEFFD771, 0xC4FBFE06, 0xC6FC4741, 0x024620C3, 0x3A4C8830,
    0xFF0F97E2, 0xFE60E27D, 0x00006FEF, 0x7EF9CFA0, 0xE7FF35AF, 0x50EF7C3C, 0x8000390F,
    0x0EF7C01C, 0xFFE6B0F5, 0xF39F449C, 0xF700002D, 0xB7B96FFD, 0x40000013, 0xC97CE77C,
    0x9875EE2F, 0xBC7FA223, 0x9E2CB7F3, 0xF16ECE7B, 0x56FDE78E, 0x4761D3C4, 0xFC67BBF8,
    0xBFC07F59, 0xCEFF3EF3, 0x800000FB, 0xFB9E781C, 0x1B8C1DC4, 0x00000000, 0x789F9100,
    0xFFBB9E71, 0xDF7C5EFC, 0x28F3A859, 0x6FEB28CF, 0x7D65FF17, 0xF031E8D4, 0x1E7E0FAC,
    0x937197BE, 0x7945BDEF, 0x7E995DA8, 0x8C4F4B73, 0xEA27ECCA, 0x159FB7E1, 0xD54DED4F,
    0x8AA7FEDE, 0x1AAC79E1, 0x5510F503, 0x4FEC1DD4, 0x8FE56BCD, 0x82FEF58E, 0x2079FB78,
    0x73BDF880, 0xEECCF7E2, 0x9E7B54F4, 0xDF87EFD7, 0xCF109E77, 0xACA52C79, 0x2AF8BBBF,
    0x3BE463EB, 0xA07ABE06, 0x818D60FC, 0xCDD61FB8, 0xBDEF7189, 0xBDEE37F7, 0x7AFC469F,
    0xD6167BE0, 0xBFBC62F3, 0x9E0F59C4, 0x8BDEF79C, 0x1FBEB1F5, 0x026417DF, 0xDE3C6608,
    0x76FBC3B7, 0x0081E330, 0x05F7C4C8, 0x1EFDFBEB, 0x6F800000, 0xE22DF7E1, 0x000721FB,
    0xBF4498A8, 0x54BBF44B, 0x41C8004C, 0xDF7E3F7C, 0xF1A7D8C2, 0xF93DE70F, 0x3E622279,
    0xF5EF3CBE, 0xA8DFBC7E, 0xC000273A, 0x21BD80B3, 0xC1BF55BE, 0x471DEE2F, 0x58DA1D3E,
    0x6003FE06, 0x56477819, 0x17C35587, 0x7C43EEF7, 0xCE037EAB, 0x7E73DE00, 0x27B9EF89,
    0xBC2F9E0E, 0xFC60C211, 0xF5C60043, 0xF5C61FDD, 0x00901FDD, 0x880F0C01, 0xEF7BDF6D,
    0x5EBF0003, 0xBD5FFBFF, 0x7B9F6B39, 0xDF90FAF6, 0xFB897E30, 0xE67F7C04, 0x07993901,
    0x013EE4E4, 0x7E7F9FDF, 0x21E5F8C3, 0xD9EE7DDF, 0xEB9BE0DF, 0xF9EBFF7F, 0x67912759,
    0x2CFC3F2D, 0x5EB94AEF, 0xDE16D696, 0x585E79E7, 0xBDC2E5F1, 0xDEE5EF21, 0xBDCBDCED,
    0x7B97B9DB, 0x002F73B7, 0x7FC005FF, 0xF40017FD, 0x7C5FFEFF, 0x7CF3DEE3, 0x7E8D373C,
    0x09D40C42, 0xF043DFDD, 0x86F3ECAF, 0xBFFF5FAA, 0x33A80BFA, 0x105F93C6, 0xA7BF71B8,
    0xDDDFC86B, 0x310973EF, 0x0B9ED3F7, 0x0BE33D3B, 0x7BAE2BE3, 0x0CF27D4F, 0xF3C007FF,
    0xA057E73B, 0xDEE73DCF, 0x3EDFCCC6, 0xF146FC67, 0xF7BA9EFD, 0x158AF7CB, 0x29688BFB,
    0x293C1932, 0x52783265, 0x8BFB158A, 0xDE15C9F8, 0xBEF753DF, 0xFE4F36F9, 0x8F6339F6,
    0xCE7B9F42, 0xBBEC66ED, 0xF9F7BD73, 0xECCEF7CD, 0xEFE136E7, 0x7E608E7D, 0xF3BF93F3,
    0xFEBF39FB, 0xFAFCE005, 0x7E77F217, 0xDEF7B8BF, 0x7BDEE37B, 0xBDDF803F, 0x73BF3C7F,
    0xDCFA057E, 0x66376E73, 0xC67BBFBE, 0x1BF7C51E, 0x6F97EF79, 0xAE4019CB, 0xB3DE4188,
    0x7BC83112, 0x819C882A, 0x7EF89918, 0xCBDEB103, 0x7BA5F7CC, 0x73DCFA14, 0xEF71376E,
    0xB39E37BD, 0xC2F7EFA3, 0xD62F7EEF, 0xE300000F, 0x9F7BAEDE, 0xBDD76F71, 0xD600000F,
    0xF7BDEE0F, 0x99CEB0DE, 0x2DFF77F2, 0x7E625477, 0x14EDF987, 0xE87738EF, 0xFB889673,
    0xBFDDE2BD, 0xCAFDFF17, 0xD39C720F, 0x3DBD338C, 0x2F7E1FDF, 0x00000000, 0x8C3D433C,
    0xF30ACF73, 0x01B7BF7F, 0xEE77E300, 0x7C15FF3F, 0x7C020101, 0xA80DF901, 0x00B8177D,
    0xB7F97BE0, 0x1ACE33FF, 0x7FEF7EB9, 0xF2005EFE, 0x8EF97F77, 0xF9FADE3B, 0x7E7EA03D,
    0x78EE3BCF, 0x0FF11FE3, 0xF7E2FBF1, 0x00D4F531, 0xBF1D4F53, 0xE31F7E2F, 0x27DC406D,
    0x7FB126F0, 0x6E804CA8, 0x90035580, 0x60F3CEBF, 0x00EBEFBD, 0x06AB3C4F, 0x0D7F3B78,
    0x71BF97EA, 0x796A0BF3, 0x8C2FCDEF, 0x3EE201B7, 0xFB113781, 0xD004CA87, 0x00D5600D,
    0x73AF5FC8, 0xBEFBD626, 0x86FFBBF9, 0x51DC9E27, 0x7E636F09, 0xE64BF507, 0x88B513B7,
    0xE23B9C77, 0x200FFF77, 0x78BBF7FF, 0xFBEEB193, 0xDB889952, 0xC7E6374D, 0xC5606AB2,
    0x75FCDDFD, 0xEEFC479E, 0x03AFBC7F, 0x3559E278, 0xD7F3B780, 0x37F2FD40, 0x5A817E6E,
    0x0BF37BDE, 0xF20024F2, 0xC07FC424, 0x8DD5031A, 0xD2C4E6F8, 0xC63D0310, 0xEA8CCF28,
    0x925FBEF7, 0xA9E406FF, 0x009D8C04, 0x46300FFF, 0x5CADF005, 0x3EFFFAC0, 0x467A8CF0,
    0x3E3929C2, 0x1EFC7D44, 0xCEDEFB4C, 0xEF7BEBE2, 0x0F918E7D, 0x848DF2DC, 0x267184C7,
    0xF809EDE0, 0x03FFC026, 0x7C01518C, 0xFEB0172B, 0xA33C0FBF, 0x4A70919E, 0x1F510F8E,
    0xBED307BF, 0xFAF8B3B7, 0x639F7BDE, 0x7CB703E4, 0xD131E123, 0xDC730167, 0x8BF9815F,
    0x07FF805D, 0xF802A318, 0xFD602E56, 0x46781F7F, 0x94E1233D, 0x3EA21F1C, 0x7DA60F7E,
    0xF5F1676F, 0xC73EF7BD, 0xF96E07C8, 0x0263C246, 0x3659D601, 0x81F38EF8, 0xE01675BF,
    0xA8C601FF, 0x0B95BE00, 0x07DFFF58, 0x48CF519E, 0x87C72538, 0x83DF8FA8, 0x59DBDF69,
    0xBDEF7D7C, 0x81F231CF, 0xF091BE5B, 0xFE19E498, 0x6790000F, 0xFFC03FF8, 0x01518C03,
    0xB0172B7C, 0x3C0FBFFE, 0x70919EA3, 0x510F8E4A, 0xD307BF1F, 0xF8B3B7BE, 0x9F7BDEFA,
    0xB703E463, 0x31E1237C, 0x080B7EF1, 0x37C206DF, 0x00D7EF00, 0x46300FFF, 0x5CADF005,
    0x3EFFFAC0, 0x467A8CF0, 0x3E3929C2, 0x1EFC7D44, 0xCEDEFB4C, 0xEF7BEBE2, 0x0F918E7D,
    0x848DF2DC, 0xEFFC04C7, 0x07DEF7BD, 0xF7BEC358, 0xFBE407DE, 0xE7E800B3, 0x69EA0011,
    0xE439E800, 0xC1FDEF77, 0x7BDF46CA, 0xCE37887F, 0x79D009BD, 0x1805BDEF, 0x7A05C1B3,
    0xDEF75814, 0x73BF23FB, 0x79B8857F, 0x7A1EF9EF, 0xCBE67876, 0x11EFC3FA, 0x2C5E3091,
    0x91100B00, 0xC3FA8B90, 0xA69FA3F7, 0x3CEE4BE6, 0xF20F7EE7, 0xC057F31B, 0xB38019FF,
    0x21BFE406, 0x9D8C254F, 0xF7BDEEFC, 0x7BDEF35E, 0x3000002F, 0x9877BDEF, 0x003BDEF7,
    0xEF798000, 0x4CE317BD, 0x37C27B78, 0xEF7BDDF9, 0xF7BDE6BD, 0x6000005E, 0x30EF7BDE,
    0x0077BDEF, 0xDEF30000, 0x167D2F7B, 0x62BFB8E6, 0xDF9762FE, 0x6BDEF7BD, 0x05EF7BDE,
    0xBDE60000, 0xDEF30EF7, 0x0000077B, 0xF7BDEF30, 0x0FFE19E6, 0xFFE19E40, 0xEF7BDDF8,
    0xF7BDE6BD, 0x6000005E, 0x30EF7BDE, 0x0077BDEF, 0xDEF30000, 0x5BFE6F7B, 0x27634A9E,
    0x00000FEF, 0x38C00000, 0x37D3DBD3, 0x00007F79, 0xF4000000, 0xBFB8E659, 0xE5D8BF9A,
    0x000001FD, 0x40000000, 0x00FFE19E, 0xC3FF8679, 0x000003FB, 0x00000000, 0xEF7BAC00,
    0xDEF203BF, 0xF200FF9B, 0x02DF00D3, 0x9D7E2278, 0x9D7E0FF7, 0x4F000FF7, 0x405BE004,
    0xEF791A7E, 0x02007FCD, 0x7C3659D6, 0x6FE0F9C7, 0x033AC59D, 0x80B8AF7E, 0xF78C05C8,
    0x07E5600D, 0x6300F5B8, 0x01AD0075, 0x3D409CEF, 0xF205F809, 0x953C80DF, 0x8813B180,
    0x215F9CEF, 0xBE73DE76, 0xCF0E8E87, 0x660FACDB, 0x3084888E, 0x80B24059, 0xD308488C,
    0xD0E660FA, 0x6DE786F1, 0xCF7B8F62, 0x4CE300F7, 0xF013DBC0, 0x39DF104D, 0xBCEC42BF,
    0x1D0F7CE7, 0x59B79E1D, 0x111CCC1F, 0x80B26109, 0x91190164, 0xC1F5A610, 0x0DE3A1CC,
    0x1EC4DBCF, 0x01EF9EF7, 0xC730167D, 0xBF9815FD, 0x9DF105D8, 0xCEC42BF3, 0xD0F7CE7B,
    0x9B79E1D1, 0x11CCC1F5, 0x0B261091, 0x11901648, 0x1F5A6109, 0xDE3A1CCC, 0xEC4DBCF0,
    0x1EF9EF71, 0x2CEB0080, 0xF9C77C1B, 0x0B3ADFC0, 0x57E73BE2, 0x9CF79D88, 0xC3A3A1EF,
    0x83EB36F3, 0x21222399, 0x2C90164C, 0xC2122320, 0x39983EB4, 0x79E1BC74, 0xDEE3D89B,
    0x33C83DF3, 0x20001FFC, 0x207FF0CF, 0x857E73BE, 0xF9CF79D8, 0x3C3A3A1E, 0x983EB36F,
    0xC2122239, 0x02C90164, 0x4C212232, 0x439983EB, 0xB79E1BC7, 0x3DEE3D89, 0x417E23DF,
    0xF23FC27E, 0xE77FE7E2, 0x07C63387, 0x9F87E467, 0xF09F99FF, 0x6400BC8F, 0xBE73BE30,
    0xFFFC613A, 0xA3EFE6E7, 0xF8FF12D7, 0x76F0FA8B, 0x2BFA4A45, 0x00E6A309, 0xACF485EE,
    0xDD46521A, 0xE855F35F, 0x9AB98567, 0xFF3DC4F5, 0xEFBE20FF, 0xFE40DF9C, 0x04A9E41B,
    0x0BFE2763, 0x00001FD6, 0x20000000, 0xFF0FF300, 0xD664D6F5, 0x73FFFE3B, 0x7181FFFE,
    0x827B7826, 0x60BFE26F, 0x000001FD, 0x02000000, 0x5FF0FF30, 0xBD664D6F, 0xE73FFFE3,
    0x59F41FFF, 0x15FDC730, 0xF1762FE6, 0x00FEB05F, 0x00000000, 0x7F980100, 0x26B7AFF8,
    0xFFF1DEB3, 0x0FFFF39F, 0x03FF8679, 0xFFE19E40, 0x7F582FF8, 0x00000000, 0xCC008000,
    0x5BD7FC3F, 0xF8EF5993, 0xFFF9CFFF, 0x81338C07, 0x4DF027B7, 0xB79C07BC, 0xF31D2C2D,
    0xD786FBC5, 0x7DE22CB2, 0x8D617DE3, 0xE5F8163D, 0x003C780F, 0xEFC00000, 0x7BCC0005,
    0x7BCC17CF, 0xF441FC6F, 0x3D100018, 0x8DEF7986, 0xF3DEF33F, 0xDF000005, 0x79DE1F39,
    0x17D45CEF, 0x50721CF1, 0xDC132C17, 0x02F8DE00, 0xC41FC762, 0x2D230637, 0xEFEF73C1,
    0x20DFF24B, 0x3B18254F, 0x5F39DF91, 0x3EB9C770, 0x43EE2BF6, 0xC17EE77E, 0x31FBDC7F,
    0xA63203A2, 0x77DF12F1, 0x9C6127FB, 0xE09EDE09, 0x9CEFC89B, 0x5CE3B82F, 0xF715FB1F,
    0xBF73BF21, 0xFDEE3FE0, 0x1901D118, 0xEF8978D3, 0xE893FDBB, 0xFB8E60B3, 0xEC5FCC2B,
    0xBE73BF22, 0x7D738EE0, 0x87DC57EC, 0x82FDCEFC, 0x63F7B8FF, 0x4C640744, 0xEFBE25E3,
    0x81024FF6, 0xEF8D9675, 0xD6FE1F38, 0xCE77E459, 0xAE71DC17, 0xFB8AFD8F, 0x5FB9DF90,
    0x7EF71FF0, 0x8C80E88C, 0xF7C4BC69, 0x7949FEDD, 0x4003FF86, 0x90FFE19E, 0x705F39DF,
    0xF63EB9C7, 0x7E43EE2B, 0x7FC17EE7, 0xA231FBDC, 0xF1A63203, 0xFB77DF12, 0x0B7EF127,
    0x7C21B7C2, 0x235FBC03, 0xE0BE73BF, 0xEC7D738E, 0xFC87DC57, 0xFF82FDCE, 0x4463F7B8,
    0xE34C6407, 0xF6EFBE25, 0x73BF1A4F, 0x7E73E8BE, 0xDC7BC9C9, 0xECB8CF71, 0x4378DC37,
    0xCEFCF0E7, 0xBDEFFCFD, 0xEE797C66, 0xEF7BDEE7, 0x0283F193, 0x66F18F19, 0xF7E2D90F,
    0xD7FBF3DD, 0xDCFA17B9, 0xDF6BA0DF, 0xD3B30FFD, 0x83C467CA, 0x1E23005D, 0xAD3B30F4,
    0xD9F6BA99, 0xFCC7A0FF, 0x033FF80D, 0xFF90359C, 0xC12A7906, 0xFFD609D8, 0xF7BD06FC,
    0x61D987D9, 0xEFB11A8D, 0x7B9C91BD, 0x40A99DEF, 0x4EC61ECC, 0x7DEE73EF, 0xF04CE313,
    0x04DF04F6, 0x837E7FEB, 0xC3ECFBDE, 0x8D46B0EC, 0x48DEF7D8, 0xCEF7BDCE, 0x0F662054,
    0x39F7A763, 0x3E89BEF7, 0xBFB8E60B, 0x2EC5FCC2, 0x0DF9FFAC, 0x0FB3EF7A, 0x351AC3B3,
    0x237BDF62, 0x3BDEF739, 0x3D988153, 0xE7DE9D8C, 0x3CA6FBDC, 0x2001FFC3, 0xB07FF0CF,
    0xE837E7FE, 0xCC3ECFBD, 0x88D46B0E, 0xE48DEF7D, 0x4CEF7BDC, 0x30F66205, 0x739F7A76,
    0x6FF99BEF, 0x9D8D2A79, 0x000017FC, 0x7A671800, 0xFF26FA7B, 0x00000005, 0xB8E659F4,
    0xD8BF9ABF, 0x00017FC5, 0x9E400000, 0x7900FFE1, 0x7FC3FF86, 0x00000001, 0x37DF8000,
    0xEFF8F43C, 0x18CDC61B, 0x30E67D81, 0xDF1DE77F, 0x7AF4F7EC, 0xE4F259BE, 0xF18C63F8,
    0x2CEF9DC7, 0xEBF3EEB5, 0x0202BFDB, 0xDF1B2CEB, 0xADFC3E71, 0xBF9DC4B3, 0xBFFC2FFB,
    0x7C3A2F5B, 0x00000019, 0xBFE40000, 0xC0953C81, 0xFFE609D8, 0x7ECC1FFE, 0xF87BFBEF,
    0x16DEA5BD, 0x2C195039, 0x230B222C, 0xF52DEFC3, 0xDEFD98FE, 0x671827B7, 0xE04F6F02,
    0xEFFE609B, 0xF7ECC1FF, 0xDF87BFBE, 0x916DEA5B, 0xC2C19503, 0x3230B222, 0xEF52DEFC,
    0x7DEFD98F, 0x059F427B, 0x82BFB8E6, 0x305D8BF9, 0x60FFF7FF, 0xDFDF7BF6, 0xF52DEFC3,
    0xCA81C8B6, 0x59116160, 0x6F7E1918, 0xECC7F7A9, 0x013DBEF7, 0x1B2CEB01, 0xF07CE3BE,
    0xF982CEB7, 0xB307FFBF, 0x1EFEFBDF, 0xB7A96F7E, 0x06540E45, 0xC2C88B0B, 0x4B7BF0C8,
    0xBF663FBD, 0x9E49EDF7, 0x4000FFE1, 0xC0FFE19E, 0x83FFDFFC, 0x7F7DEFD9, 0xD4B7BF0F,
    0x2A0722DB, 0x64458583, 0xBDF86461, 0xB31FDEA5, 0x84F6FBDF, 0x30001271, 0xB8C0024E,
    0x6F7BDEF7, 0xBDEF7B8C, 0x8C0006F7, 0xAC000093, 0xFF7FE781, 0xBDF9E0DF, 0xFBC98D77,
    0x63FBC656, 0x0CAEBF0C, 0xF1C80E64, 0xBF432ABB, 0xC7F78D4F, 0x3D3DC4F3, 0xFFDFF889,
    0xE41BFE44, 0x276304A9, 0x0DC60EE2, 0x00000000, 0xBC4FC880, 0x7FDDCF38, 0xDE099C60,
    0xC49BE09E, 0x001B8C1D, 0x00000000, 0x71789F91, 0xA0FFBB9E, 0xEE3982CF, 0xB17F30AF,
    0xB8C1DC4B, 0x00000001, 0x89F91000, 0xFBB9E717, 0xFFC33C8F, 0xF0CF2001, 0x8C1DC47F,
    0x0000001B, 0x9F910000, 0xBB9E7178, 0x099C60FF, 0x26F84F6F, 0xDF7E1FBF, 0xE73C4279,
    0xFEB294B1, 0xACABE2EE, 0x18EF918F, 0xF281EAF8, 0xE2063583, 0x2737587E, 0x00002F7E,
    0xC59CEF8C, 0x4EF7CF7A, 0x83FAD435, 0xDC0180FD, 0xFEB50D47, 0x77BE7BD6, 0x0B39DF1A,
    0xF0CF2000, 0x0CF2007F, 0xC3F7E7FF, 0x884F3BEF, 0x52963CE7, 0x7C5DDFD6, 0xF231F595,
    0x3D5F031D, 0xC6B07E50, 0xEB0FDC40, 0x000004E6

  EW_FONT_KERNING_CODES( ResourcesFontSmall )
  EW_FONT_KERNING_VALUES( ResourcesFontSmall )
EW_END_OF_FONT_RES( ResourcesFontSmall )

/* Embedded Wizard */
