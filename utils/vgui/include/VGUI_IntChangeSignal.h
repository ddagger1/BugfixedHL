//========= Copyright � 1996-2002, Valve LLC, All rights reserved. ============
//
// Purpose: 
//
// $NoKeywords: $
//=============================================================================

#ifndef VGUI1_INTCHANGESIGNAL_H
#define VGUI1_INTCHANGESIGNAL_H

#include<VGUI.h>

namespace vgui
{

class Panel;

class VGUIAPI IntChangeSignal
{
public:
	virtual void intChanged(int value,Panel* panel)=0;
};

}

#endif