// dllmain.cpp : 定义 DLL 应用程序的入口点。
#include "BASE.h"
#include "engine.h"
#include "DX11.h"

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    if (ul_reason_for_call == DLL_PROCESS_ATTACH)
    {
        AllocConsole();
        freopen("CONOUT$", "w", stdout);
        CloseHandle(CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)hookD3D11, NULL, NULL, NULL));


    }
   
    return TRUE;
}

