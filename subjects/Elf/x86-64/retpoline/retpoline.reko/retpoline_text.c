// retpoline_text.c
// Generated by decompiling retpoline.elf
// using Reko decompiler version 0.9.1.0.

#include "retpoline_text.h"

// 0000000000400480: void _start(Register (ptr64 Eq_n) rdx, Stack Eq_n qwArg00)
void _start(void (* rdx)(), Eq_n qwArg00)
{
	__align((char *) fp + 8);
	__libc_start_main(&g_t400660, qwArg00, (char *) fp + 8, &g_t400710, &g_t400780, rdx, fp);
	__hlt();
}

// 00000000004004B0: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
	if (0x00 == 0x00 || 0x00 == 0x00)
		return;
	null();
}

// 00000000004004E0: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
	if (0 == 0x00 || 0x00 == 0x00)
		return;
	null();
}

// 0000000000400520: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if (g_b601040 != 0x00)
		return;
	deregister_tm_clones();
	g_b601040 = 0x01;
}

// 0000000000400550: void frame_dummy()
void frame_dummy()
{
	register_tm_clones();
}

// 0000000000400560: void my1(Register word32 esi, Register word32 edi)
// Called from:
//      branches
void my1(word32 esi, word32 edi)
{
	calloc((int64) edi, (int64) esi);
}

// 0000000000400590: void my2(Register byte sil, Register (ptr64 byte) rdi)
void my2(byte sil, byte * rdi)
{
	*rdi = sil;
}

// 00000000004005B0: void branches(Register int32 esi, Register int32 edi)
void branches(int32 esi, int32 edi)
{
	int32 edi = (word32) rdi;
	if ((word32) (uint64) edi >= esi || ((word32) ((uint64) ((word32) ((uint64) edi) << 0x01)) >= (word32) ((uint64) ((word32) ((uint64) esi) << 0x01)) || ((word32) ((uint64) (edi *s 0x03)) >= (word32) ((uint64) (esi *s 0x03)) || (word32) ((uint64) ((word32) ((uint64) edi) << 0x02)) >= (word32) ((uint64) ((word32) ((uint64) esi) << 0x02)))))
		return;
	uint64 rax_n = (uint64) (word32) (uint64) esi;
	int32 eax_n = (int32) ((int64) (word32) rax_n / 0x02);
	void * rax_n = SEQ(SLICE(rax_n, word32, 32), eax_n);
	if ((word32) (uint64) (int32) ((int64) (word32) (uint64) (word32) (uint64) edi / 0x02) >= eax_n)
		return;
	my1((word32) (uint64) esi, (word32) (uint64) edi);
	free(rax_n);
}

// 0000000000400660: void main()
void main()
{
	__llvm_retpoline_r11();
}

// 00000000004006F0: void __llvm_retpoline_r11()
// Called from:
//      main
void __llvm_retpoline_r11()
{
	fn0000000000400700();
	while (true)
		__pause();
}

// 0000000000400700: void fn0000000000400700()
// Called from:
//      __llvm_retpoline_r11
void fn0000000000400700()
{
}

// 0000000000400710: void __libc_csu_init(Register word64 rdx, Register word64 rsi, Register word32 edi)
void __libc_csu_init(word64 rdx, word64 rsi, word32 edi)
{
	word32 edi = (word32) rdi;
	_init();
	word32 r15d_n = (word32) (uint64) edi;
	int64 rbp_n = 0x00600E18 - 0x00600E10;
	if (rbp_n >> 0x03 != 0x00)
	{
		Eq_n rbx_n = 0x00;
		do
		{
			(*((char *) g_a600E10 + rbx_n * 0x08))();
			rbx_n = (word64) rbx_n.u1 + 1;
		} while (rbp_n >> 0x03 != rbx_n);
	}
}

// 0000000000400780: void __libc_csu_fini()
void __libc_csu_fini()
{
}
