//
// memory_linux.cpp
//
// Memory pathcer for Linux
//

#include "hud.h"
#include "com_utils.h"
#include "memory.h"

// Inititalize with nullptr to trigger SIGSEGV when used
void **g_EngineBuf = nullptr;
int *g_EngineBufSize = nullptr;
int *g_EngineReadPos = nullptr;
UserMessage **g_pUserMessages = nullptr;
// Any non-Windows build is new and uses SDL
bool g_bNewerBuild = true;

void Memory::OnLibraryInit()
{
}

void Memory::OnLibraryDeinit()
{
}

void Memory::OnHudInit()
{
	gEngfuncs.pfnConsolePrint("Memory patching failed: platform not supported\n");
}

void Memory::OnFrame()
{
}


RGBA SetConsoleColor(RGBA color)
{
	return color;
}
