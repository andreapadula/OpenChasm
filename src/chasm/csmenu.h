
/*
**---------------------------------------------------------------------------
** OpenChasm - Free software reconstruction of Chasm: The Rift game
** Copyright (C) 2013 Alexey Lysiuk
**
** This program is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program.  If not, see <http://www.gnu.org/licenses/>.
**---------------------------------------------------------------------------
*/

#ifndef OPENCHASM_CSMENU_H_INCLUDED
#define OPENCHASM_CSMENU_H_INCLUDED

namespace CSPBIO
{
    struct TPic;
}

namespace CSMENU
{

#pragma pack(push, 1)

struct MenuRect
{
    Sint16 x1;
    Sint16 y1;
    Sint16 x2;
    Sint16 y2;
};

struct TMenuText
{
    OCString::value_type Main[16];
    MenuRect MainPos;
    OCString::value_type Skl[16];
    MenuRect SklPos;
    OCString::value_type Net[16];
    MenuRect NetPos;
    OCString::value_type Save[16];
    OCString::value_type Load[16];
    MenuRect SavePos;
    OCString::value_type Opti[338];
    MenuRect OptiPos;
    OCString::value_type Disp[104];
    MenuRect DispPos;
    OCString::value_type Resl[782];
    MenuRect ReslPos;
    OCString::value_type Cont[442];
    MenuRect ContPos;
    OCString::value_type Quit[128];
    MenuRect QuitPos;
    OCString::value_type Newg[96];
    MenuRect NewgPos;
    OCString::value_type NGSt[144];
    MenuRect NGStPos;
    OCString::value_type NGModes[66];
    OCString::value_type NGSkill[48];
    OCString::value_type NJst[96];
    MenuRect NJStPos;
    OCString::value_type NOpt[84];
    MenuRect NOptPos;
    OCString::value_type KName[1408];
    OCString::value_type GameNames[400];
};

#pragma pack(pop)


void CreateRecolorMap(/*...*/);
void PutString(/*...*/);
void PutStringFloat(/*...*/);
void PutChar(/*...*/);
void PutStr(/*...*/);
void PutStrCenter(/*...*/);
void UpDateConsole(/*...*/);
void DrawMenuRect(/*...*/);
void UpDateMenu(/*...*/);
void UpdatePause(/*...*/);
void CorrectMenuPos(/*...*/);
void ScanSavedNames(/*...*/);

extern Sint16 KbWait;
extern TMenuText* PM;
extern CSPBIO::TPic MainMenu;
extern CSPBIO::TPic SklMenu;
extern CSPBIO::TPic NetMenu;
extern CSPBIO::TPic m_pause;
extern CSPBIO::TPic PTors;
extern Sint16 MnSY;
extern void* MenuTiler;
extern Uint8 ColorShift;
extern Uint8 ColorZero;
extern Uint8 RecolorMap[256];

void PutIcon(/*...*/);
void PutIconDark(/*...*/);
void PutIconRecolor(/*...*/);
void PutIconFF2Sub(/*...*/);
void PutIconD(/*...*/);
void PutStrFix(/*...*/);
void PutStrOn(/*...*/);
void PutStrBack(/*...*/);
void PutStrBackOn(/*...*/);
void DrawMenuBar(/*...*/);
void PutScroller(/*...*/);
void PutScroller15(/*...*/);
void LoadPicFromCel(/*...*/);
void LoadMenuResourses(/*...*/);
// /* nested */ void ShiftRect(/*...*/);

} // namespace CSMENU

#endif // OPENCHASM_CSMENU_H_INCLUDED
