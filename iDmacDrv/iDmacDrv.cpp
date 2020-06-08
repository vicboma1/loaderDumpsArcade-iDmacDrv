// iDmacDrv.cpp : Define las funciones exportadas de la aplicación DLL.
//

#include "stdafx.h"
#include <stdio.h>

__declspec (dllexport) DWORD iDmacDrvOpen(int a1, LPVOID lp, LPVOID a3)
{
	return 0;
}

__declspec (dllexport) DWORD iDmacDrvClose(int a1, LPVOID lp)
{
	return 0;
}

__declspec (dllexport) int iDmacDrvDmaRead(int a1, LPVOID lp, UINT_PTR ucb, LPVOID a4)
{
	return 0;
}

__declspec (dllexport) int iDmacDrvDmaWrite(int a1, LPVOID lp, UINT_PTR ucb, LPVOID a4)
{
	return 0;
}

__declspec (dllexport) int iDmacDrvRegisterWrite(int a1, DWORD command, int data, LPVOID lp)
{
	return 0;
}

__declspec (dllexport) int iDmacDrvRegisterRead(int a1, DWORD command, LPVOID ret_pointer, LPVOID a4)
{
	return 0;
}

__declspec (dllexport) int iDmacDrvRegisterBufferRead(int a1, DWORD BytesReturned, LPVOID lp, UINT_PTR ucb, LPVOID a5)
{
	return 0;
}

__declspec (dllexport) int iDmacDrvRegisterBufferWrite(int a1, DWORD BytesReturned, LPVOID lp, UINT_PTR ucb, LPVOID a5)
{
	return 0;
}
