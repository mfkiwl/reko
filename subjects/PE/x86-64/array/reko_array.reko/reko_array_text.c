// reko_array_text.c
// Generated by decompiling reko_array.dll
// using Reko decompiler version 0.10.2.0.

#include "reko_array.h"

// 00000002121D1000: void reko_array_byref(Register (arr byte) rcx)
// Called from:
//      reko_array_n
void reko_array_byref(byte rcx[])
{
	int32 dwLoc0C_n;
	for (dwLoc0C_n = 0x00; dwLoc0C_n <= 0x1F; ++dwLoc0C_n)
		rcx[(int64) dwLoc0C_n] = (byte) dwLoc0C_n;
}

// 00000002121D103C: void reko_array_n()
void reko_array_n()
{
	reko_array_byref(g_a121D5000);
}

// 00000002121D105E: void reko_array_local()
void reko_array_local()
{
	up32 dwLoc0C_n;
	for (dwLoc0C_n = 0x00; dwLoc0C_n <= 0x1F; ++dwLoc0C_n)
		(fp - 0x38)[(int64) dwLoc0C_n] = (byte) dwLoc0C_n;
}
