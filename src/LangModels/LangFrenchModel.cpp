/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* ***** BEGIN LICENSE BLOCK *****
 * Version: MPL 1.1/GPL 2.0/LGPL 2.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is Mozilla Communicator client code.
 *
 * The Initial Developer of the Original Code is
 * Netscape Communications Corporation.
 * Portions created by the Initial Developer are Copyright (C) 1998
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *
 * Alternatively, the contents of this file may be used under the terms of
 * either the GNU General Public License Version 2 or later (the "GPL"), or
 * the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
 * in which case the provisions of the GPL or the LGPL are applicable instead
 * of those above. If you wish to allow use of your version of this file only
 * under the terms of either the GPL or the LGPL, and not to allow others to
 * use your version of this file under the terms of the MPL, indicate your
 * decision by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL or the LGPL. If you do not delete
 * the provisions above, a recipient may use your version of this file under
 * the terms of any one of the MPL, the GPL or the LGPL.
 *
 * ***** END LICENSE BLOCK ***** */

#include "../nsSBCharSetProber.h"

/********* Language model for: French *********/

/**
 * Generated by BuildLangModel.py
 * On: 2015-12-03 21:10:27.685575
 **/

/* Character Mapping Table:
 * ILL: illegal character.
 * CTR: control character specific to the charset.
 * RET: carriage/return.
 * SYM: symbol (punctuation) that does not belong to word.
 * NUM: 0 - 9.
 *
 * Other characters are ordered by probabilities
 * (0 is the most common character in the language).
 *
 * Orders are generic to a language. So the codepoint with order X in
 * CHARSET1 maps to the same character as the codepoint with the same
 * order X in CHARSET2 for the same language.
 * As such, it is possible to get missing order. For instance the
 * ligature of 'o' and 'e' exists in ISO-8859-15 but not in ISO-8859-1
 * even though they are both used for French. Same for the euro sign.
 */
static const unsigned char Windows_1252_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  2, 18, 11, 10,  0, 17, 15, 19,  4, 25, 26,  7, 13,  3,  8, /* 4X */
   12, 20,  5,  1,  6,  9, 16, 30, 21, 22, 29,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  2, 18, 11, 10,  0, 17, 15, 19,  4, 25, 26,  7, 13,  3,  8, /* 6X */
   12, 20,  5,  1,  6,  9, 16, 30, 21, 22, 29,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,ILL,SYM, 56,SYM,SYM,SYM,SYM,SYM,SYM, 51,SYM, 35,ILL, 57,ILL, /* 8X */
  ILL,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, 51,SYM, 35,ILL, 58, 59, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 60,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   24, 38, 32, 46, 49, 61, 47, 27, 23, 14, 28, 41, 62, 39, 33, 36, /* CX */
   48, 45, 54, 40, 31, 55, 42,SYM, 52, 37, 43, 34, 44, 53, 50, 63, /* DX */
   24, 38, 32, 46, 49, 64, 47, 27, 23, 14, 28, 41, 65, 39, 33, 36, /* EX */
   48, 45, 54, 40, 31, 55, 42,SYM, 52, 37, 43, 34, 44, 53, 50, 66, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_1_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  2, 18, 11, 10,  0, 17, 15, 19,  4, 25, 26,  7, 13,  3,  8, /* 4X */
   12, 20,  5,  1,  6,  9, 16, 30, 21, 22, 29,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  2, 18, 11, 10,  0, 17, 15, 19,  4, 25, 26,  7, 13,  3,  8, /* 6X */
   12, 20,  5,  1,  6,  9, 16, 30, 21, 22, 29,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 67,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   24, 38, 32, 46, 49, 68, 47, 27, 23, 14, 28, 41, 69, 39, 33, 36, /* CX */
   48, 45, 54, 40, 31, 55, 42,SYM, 52, 37, 43, 34, 44, 53, 50, 70, /* DX */
   24, 38, 32, 46, 49, 71, 47, 27, 23, 14, 28, 41, 72, 39, 33, 36, /* EX */
   48, 45, 54, 40, 31, 55, 42,SYM, 52, 37, 43, 34, 44, 53, 50, 73, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_15_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  2, 18, 11, 10,  0, 17, 15, 19,  4, 25, 26,  7, 13,  3,  8, /* 4X */
   12, 20,  5,  1,  6,  9, 16, 30, 21, 22, 29,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  2, 18, 11, 10,  0, 17, 15, 19,  4, 25, 26,  7, 13,  3,  8, /* 6X */
   12, 20,  5,  1,  6,  9, 16, 30, 21, 22, 29,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM, 51,SYM, 51,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM, 74, 75,SYM,SYM, 76,SYM,SYM,SYM, 35, 35, 77,SYM, /* BX */
   24, 38, 32, 46, 49, 78, 47, 27, 23, 14, 28, 41, 79, 39, 33, 36, /* CX */
   48, 45, 54, 40, 31, 55, 42,SYM, 52, 37, 43, 34, 44, 53, 50, 80, /* DX */
   24, 38, 32, 46, 49, 81, 47, 27, 23, 14, 28, 41, 82, 39, 33, 36, /* EX */
   48, 45, 54, 40, 31, 55, 42,SYM, 52, 37, 43, 34, 44, 53, 50, 83, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */


/* Model Table:
 * Total sequences: 914
 * First 512 sequences: 0.997057879992383
 * Next 512 sequences (512-1024): 0.002942120007616917
 * Rest: 3.8163916471489756e-17
 * Negative sequences: TODO
 */
static const PRUint8 FrenchLangModel[] =
{
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,3,3,3,3,3,3,0,0,3,3,3,0,3,3,0,0,0,2,0,2,0,
  3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,2,2,3,3,3,3,0,3,3,0,0,3,0,0,2,3,0,0,0,2,2,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,0,3,3,3,0,3,3,2,2,3,0,0,3,0,
  3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,2,3,3,0,3,3,3,2,3,2,0,2,2,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,0,2,3,0,2,3,2,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,0,2,3,3,3,2,3,3,3,0,2,0,0,0,
  3,3,3,2,3,3,3,3,3,3,2,3,3,3,3,2,2,2,3,3,2,2,3,3,2,0,2,0,3,3,2,3,2,0,0,0,0,0,
  3,3,3,2,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,0,3,3,3,2,3,0,0,2,2,2,2,0,2,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,0,3,3,0,0,3,3,0,0,2,3,0,3,3,
  3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,2,3,3,2,0,3,3,2,3,3,2,0,0,0,0,0,2,0,
  3,3,3,2,3,3,3,2,3,3,3,2,2,3,3,3,2,2,2,3,0,0,3,3,0,3,0,0,2,2,3,2,2,2,3,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,2,2,3,2,2,2,2,3,3,0,3,3,0,0,3,0,2,2,2,3,2,0,0,2,0,0,
  3,3,3,2,3,3,3,3,3,3,2,2,3,2,3,0,0,2,2,3,0,0,3,3,0,0,2,2,3,2,2,3,2,0,0,0,0,0,
  3,3,3,3,3,2,3,2,3,3,2,3,3,3,3,2,0,2,3,2,0,0,3,3,0,2,2,0,3,0,2,2,3,0,2,2,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,0,0,0,3,2,2,0,3,0,0,2,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,2,2,2,3,3,3,2,2,3,3,0,2,3,3,0,0,0,0,2,0,2,0,2,0,0,0,0,0,
  3,2,3,2,3,3,0,2,3,3,0,0,0,2,3,0,2,2,0,0,0,0,2,3,0,0,2,0,3,0,0,0,0,0,0,2,0,0,
  3,3,3,2,3,3,3,3,3,3,2,2,2,3,3,2,0,3,0,0,0,0,0,3,0,2,0,0,3,0,0,0,0,0,2,2,0,0,
  3,3,3,3,3,3,3,3,3,3,3,2,2,2,3,2,2,0,3,2,0,0,3,2,0,3,0,0,0,0,0,0,3,2,0,2,0,0,
  3,3,3,3,3,3,3,3,3,3,0,2,0,3,3,0,0,2,2,0,0,0,3,3,0,2,2,0,2,2,2,3,3,0,0,2,0,0,
  0,0,2,0,0,0,0,2,2,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,0,3,0,3,0,3,2,3,2,2,3,3,2,3,0,3,2,2,2,2,3,2,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,
  3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,0,2,2,2,0,3,2,0,0,2,2,0,0,0,0,0,0,0,
  0,3,0,3,0,3,3,3,0,0,3,3,2,3,0,3,3,2,3,0,3,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,2,3,2,3,2,2,2,3,3,2,2,2,2,3,0,0,0,0,0,0,0,0,0,3,2,0,0,0,0,0,0,2,0,0,0,0,0,
  3,3,3,2,3,3,2,3,3,3,0,0,2,3,2,2,2,2,2,3,0,0,3,0,0,0,2,0,0,0,2,0,0,0,0,0,0,0,
  0,0,3,0,0,0,0,0,3,3,0,0,0,0,2,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,2,0,0,3,2,0,0,0,3,0,3,0,0,2,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,0,3,2,3,2,0,2,3,3,0,2,0,2,2,2,0,0,2,2,2,0,3,0,0,0,2,0,0,3,2,0,0,0,0,0,0,0,
  3,2,3,2,3,2,2,2,3,2,0,2,0,0,2,0,0,2,2,2,0,0,2,0,0,0,2,0,0,0,2,0,0,0,0,0,0,0,
  0,2,0,3,0,0,3,3,0,0,0,0,2,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,2,0,2,2,0,3,3,0,0,0,3,2,2,0,3,0,0,2,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,3,0,0,3,3,0,0,0,2,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,2,3,2,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,2,0,0,2,0,2,2,0,3,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  2,2,2,2,0,2,2,3,0,0,2,2,0,2,0,2,0,2,2,0,2,0,0,0,0,0,2,0,0,0,2,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};


const SequenceModel Windows_1252FrenchModel =
{
  Windows_1252_CharToOrderMap,
  FrenchLangModel,
  38,
  (float)0.997057879992383,
  PR_TRUE,
  "WINDOWS-1252"
};

const SequenceModel Iso_8859_1FrenchModel =
{
  Iso_8859_1_CharToOrderMap,
  FrenchLangModel,
  38,
  (float)0.997057879992383,
  PR_TRUE,
  "ISO-8859-1"
};

const SequenceModel Iso_8859_15FrenchModel =
{
  Iso_8859_15_CharToOrderMap,
  FrenchLangModel,
  38,
  (float)0.997057879992383,
  PR_TRUE,
  "ISO-8859-15"
};