// dllmain.cpp : Define el punto de entrada de la aplicación DLL.
#include "stdafx.h"

BOOL APIENTRY DllMain( HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {

		case DLL_PROCESS_ATTACH: {
			//Desactivamos el hilo de llamadas que levanta la librería dll
			DisableThreadLibraryCalls(hModule);

			CreateThread(nullptr, 0, [](LPVOID) -> DWORD {
				
			   MessageBox(NULL, "CreateThread", "Information", MB_OK);
			   return 0;
			}, nullptr, 0, nullptr);
		}
		case DLL_THREAD_ATTACH:
		case DLL_THREAD_DETACH:
		case DLL_PROCESS_DETACH:

			break;
    }

    return TRUE;
}

