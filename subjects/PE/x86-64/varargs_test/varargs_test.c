// varargs_test.c
// Generated by decompiling varargs_test.exe
// using Reko decompiler version 0.8.0.2.

#include "varargs_test.h"

// 0000000140001000: Register word32 fn0000000140001000()
word32 fn0000000140001000()
{
	ui64 rax_5 = globals->qw40003000 ^ fp - 200;
	fn0000000140001140(qwLocC8, qwLocC0, qwLocB8, qwLocB0);
	fn00000001400010D0(qwLocC8, qwLocC0, qwLocB8, qwLocB0);
	return fn00000001400011B0(rax_5 ^ fp - 200);
}

// 00000001400010C0: Register ptr64 fn00000001400010C0()
ptr64 fn00000001400010C0()
{
	return 0x140003628;
}

// 00000001400010D0: void fn00000001400010D0(Stack word64 qwArg08, Stack word64 qwArg10, Stack word64 qwArg18, Stack word64 qwArg20)
void fn00000001400010D0(word64 qwArg08, word64 qwArg10, word64 qwArg18, word64 qwArg20)
{
	word64 rsp_26;
	word64 rcx_27;
	word64 rdx_28;
	word64 r8_29;
	word64 r9_30;
	word64 rbx_31;
	word64 rsi_32;
	word64 rdi_33;
	byte SCZO_34;
	word32 ecx_35;
	byte SZO_36;
	bool C_37;
	word64 rax_38;
	word32 r9d_39;
	_acrt_iob_func();
	ui64 * rax_41 = fn00000001400010C0();
	word64 rsp_51;
	word64 rcx_52;
	word64 rdx_53;
	word64 r8_54;
	word64 r9_55;
	word64 rbx_56;
	word64 rsi_57;
	word64 rdi_58;
	byte SCZO_59;
	word32 ecx_60;
	byte SZO_61;
	bool C_62;
	word64 rax_63;
	word32 r9d_64;
	_stdio_common_vfscanf();
}

// 0000000140001130: Register ptr64 fn0000000140001130()
ptr64 fn0000000140001130()
{
	return 0x140003620;
}

// 0000000140001140: void fn0000000140001140(Stack word64 qwArg08, Stack word64 qwArg10, Stack word64 qwArg18, Stack word64 qwArg20)
void fn0000000140001140(word64 qwArg08, word64 qwArg10, word64 qwArg18, word64 qwArg20)
{
	word64 rsp_24;
	word64 rcx_25;
	word64 rdx_26;
	word64 r8_27;
	word64 r9_28;
	word64 rbx_29;
	word64 rsi_30;
	word64 rdi_31;
	byte SCZO_32;
	word32 ecx_33;
	word64 rax_34;
	word32 r9d_35;
	byte SZO_36;
	bool C_37;
	_acrt_iob_func();
	ui64 * rax_39 = fn0000000140001130();
	word64 rsp_49;
	word64 rcx_50;
	word64 rdx_51;
	word64 r8_52;
	word64 r9_53;
	word64 rbx_54;
	word64 rsi_55;
	word64 rdi_56;
	byte SCZO_57;
	word32 ecx_58;
	word64 rax_59;
	word32 r9d_60;
	byte SZO_61;
	bool C_62;
	_stdio_common_vfprintf();
}

// 00000001400011B0: Register word32 fn00000001400011B0(Register ui64 rcx)
word32 fn00000001400011B0(ui64 rcx)
{
	if (rcx != globals->qw40003000)
		return fn000000014000147C(rcx, qwArg00, qwArg08);
	ui64 rcx_30 = __rol(rcx, 0x10);
	if (((word16) rcx_30 & ~0x00) == 0x00)
		return eax;
	rcx = __ror(rcx_30, 0x10);
	return fn000000014000147C(rcx, qwArg00, qwArg08);
}

// 00000001400011D4: void fn00000001400011D4(Register word64 rbx, Register word64 r8)
void fn00000001400011D4(word64 rbx, word64 r8)
{
	word64 rsp_8;
	word64 rbx_9;
	byte SCZO_10;
	word32 ecx_11;
	word64 rcx_12;
	word32 eax_13;
	word64 rax_14;
	byte al_15;
	byte SZO_16;
	bool C_17;
	bool Z_18;
	ui64 r8_19;
	byte bl_20;
	set_app_type();
	fn0000000140001920();
	_set_fmode(dwLoc28);
	*__p__commode() = fn0000000140001ABC();
	word32 eax_32 = fn000000014000164C(0x01, r8_19, qwLoc28);
	byte al_34 = (byte) eax_32;
	if (al_34 != 0x00)
	{
		fn0000000140001B5C(qwArg00, qwArg08);
		fn0000000140001854(eax_32);
		word32 eax_68 = fn0000000140001918();
		word64 rsp_70;
		word64 rbx_71;
		byte SCZO_72;
		word32 ecx_73;
		word64 rcx_74;
		word32 eax_75;
		word64 rax_76;
		byte al_77;
		byte SZO_78;
		bool C_79;
		bool Z_80;
		word64 r8_81;
		byte bl_82;
		configure_narrow_argv();
		if (eax_75 == 0x00)
		{
			fn0000000140001928(qwArg00);
			if (fn0000000140001958() != 0x00)
				__setusermatherr(&globals->t40001ABC);
			fn0000000140001DD0();
			fn0000000140001DD0();
			word32 eax_90 = fn0000000140001ABC();
			word64 rsp_92;
			word64 rbx_93;
			byte SCZO_94;
			word32 ecx_95;
			word64 rcx_96;
			word32 eax_97;
			word64 rax_98;
			byte al_99;
			byte SZO_100;
			bool C_101;
			bool Z_102;
			word64 r8_103;
			byte bl_104;
			configthreadlocale();
			fn0000000140001938();
			if (0x01 != 0x00)
			{
				word64 rsp_123;
				word64 rbx_124;
				byte SCZO_125;
				word32 ecx_126;
				word64 rcx_127;
				word32 eax_128;
				word64 rax_129;
				byte al_130;
				byte SZO_131;
				bool C_132;
				bool Z_133;
				word64 r8_134;
				byte bl_135;
				initialize_narrow_environment();
			}
			fn0000000140001ABC();
			return;
		}
	}
	else
	{
		byte bl_139;
		fn0000000140001974(0x07, rbx, qwArg00, qwArg08, out bl_139);
		int3();
	}
	byte bl_65;
	fn0000000140001974(0x07, rbx, qwArg00, qwArg08, out bl_65);
	int3();
	int3();
	fn0000000140001290();
}

// 0000000140001290: void fn0000000140001290()
void fn0000000140001290()
{
	fn000000014000193C();
}

// 00000001400012A0: void fn00000001400012A0()
void fn00000001400012A0()
{
	fn0000000140001B14(tLoc28);
	word32 eax_5 = fn0000000140001ABC();
	word64 rsp_10;
	byte SCZO_11;
	word32 ecx_12;
	word32 eax_13;
	word64 rcx_14;
	set_new_mode();
}

// 00000001400012BC: Register word32 fn00000001400012BC(Register word32 edx, Register (ptr32 Eq_329) gs, Stack word64 qwArg08, Stack word64 qwArg10)
word32 fn00000001400012BC(word32 edx, Eq_329 * gs, word64 qwArg08, word64 qwArg10)
{
	if (fn0000000140001600(0x01, edx) == 0x00)
	{
		byte bl_336;
		fn0000000140001974(0x07, qwLoc40, qwLoc38, qwLoc30, out bl_336);
		int3();
	}
	byte bl_25 = fn00000001400015C4(gs);
	word32 ecx_31 = (word32) (uint64) globals->dw400035B0;
	if (ecx_31 == 0x01)
		ecx_31 = (word32) fn0000000140001974(0x07, qwLoc40, qwLoc38, qwLoc30, out bl_25);
	word32 eax_217;
	if (ecx_31 == 0x00)
	{
		globals->dw400035B0 = 0x01;
		if (_initterm_e(&globals->t400021B8, &globals->t400021D0) != 0x00)
		{
			eax_217 = 0xFF;
			return eax_217;
		}
		_initterm(&globals->t400021A0, &globals->t400021B0);
		globals->dw400035B0 = 0x02;
	}
	fn00000001400017B4(bl_25);
	<anonymous> ** rax_75 = fn0000000140001964();
	if (*rax_75 != null)
	{
		word64 rax_273 = fn0000000140001718(rax_75);
		byte al_274 = (byte) rax_273;
		if (al_274 != 0x00)
		{
			<anonymous> * rbx_278 = *rax_75;
			fn0000000140001BF4();
			word64 rsp_285;
			word64 rbx_286;
			word64 rsi_287;
			word64 rdi_288;
			byte SCZO_289;
			word64 rcx_290;
			byte al_291;
			byte SZO_292;
			bool C_293;
			bool Z_294;
			byte sil_295;
			byte bl_296;
			word32 ecx_297;
			word64 rdx_298;
			word32 eax_299;
			word64 rax_300;
			byte cl_301;
			word32 r8d_302;
			word64 r8_303;
			word32 edx_304;
			word32 ebx_305;
			struct Eq_449 * gs_306;
			byte dl_307;
			rbx_278();
		}
	}
	<anonymous> ** rax_101 = fn000000014000196C();
	if (*rax_101 != null)
	{
		word64 rax_242 = fn0000000140001718(rax_101);
		byte al_243 = (byte) rax_242;
		if (al_243 != 0x00)
		{
			word64 rsp_249;
			word64 rbx_250;
			word64 rsi_251;
			word64 rdi_252;
			byte SCZO_253;
			word64 rcx_254;
			byte al_255;
			byte SZO_256;
			bool C_257;
			bool Z_258;
			byte sil_259;
			byte bl_260;
			word32 ecx_261;
			word64 rdx_262;
			word32 eax_263;
			word64 rax_264;
			byte cl_265;
			word32 r8d_266;
			word64 r8_267;
			word32 edx_268;
			word32 ebx_269;
			struct Eq_488 * gs_270;
			byte dl_271;
			register_thread_local_exe_atexit_callback();
		}
	}
	word64 rsp_109;
	word64 rbx_110;
	word64 rsi_111;
	word64 rdi_112;
	byte SCZO_113;
	word64 rcx_114;
	byte al_115;
	byte SZO_116;
	bool C_117;
	bool Z_118;
	byte sil_119;
	byte bl_120;
	word32 ecx_121;
	word64 rdx_122;
	word32 eax_123;
	word64 rax_124;
	byte cl_125;
	word32 r8d_126;
	word64 r8_127;
	word32 edx_128;
	word32 ebx_129;
	struct Eq_513 * gs_130;
	byte dl_131;
	_p___argv();
	word64 rsp_133;
	word64 rbx_134;
	word64 rsi_135;
	word64 rdi_136;
	byte SCZO_137;
	word64 rcx_138;
	byte al_139;
	byte SZO_140;
	bool C_141;
	bool Z_142;
	byte sil_143;
	byte bl_144;
	word32 ecx_145;
	word64 rdx_146;
	word32 eax_147;
	word64 rax_148;
	byte cl_149;
	word32 r8d_150;
	word64 r8_151;
	word32 edx_152;
	word32 ebx_153;
	struct Eq_538 * gs_154;
	byte dl_155;
	_p___argc();
	word64 rsp_157;
	word64 rbx_158;
	word64 rsi_159;
	word64 rdi_160;
	byte SCZO_161;
	word64 rcx_162;
	byte al_163;
	byte SZO_164;
	bool C_165;
	bool Z_166;
	byte sil_167;
	byte bl_168;
	word32 ecx_169;
	word64 rdx_170;
	word32 eax_171;
	word64 rax_172;
	byte cl_173;
	word32 r8d_174;
	word64 r8_175;
	word32 edx_176;
	word32 ebx_177;
	struct Eq_563 * gs_178;
	byte dl_179;
	get_initial_narrow_environment();
	word32 eax_183 = fn0000000140001000();
	uint64 rbx_184 = (uint64) eax_183;
	word32 ebx_186 = (word32) rbx_184;
	byte al_187 = fn0000000140001AC0();
	if (al_187 != 0x00)
	{
		if (sil_167 == 0x00)
		{
			word64 rsp_218;
			word64 rbx_219;
			word64 rsi_220;
			word64 rdi_221;
			byte SCZO_222;
			word64 rcx_223;
			byte al_224;
			byte SZO_225;
			bool C_226;
			bool Z_227;
			byte sil_228;
			byte bl_229;
			word32 ecx_230;
			word64 rdx_231;
			word32 eax_232;
			word64 rax_233;
			byte cl_234;
			word32 r8d_235;
			word64 r8_236;
			word32 edx_237;
			word32 ebx_238;
			struct Eq_609 * gs_239;
			byte dl_240;
			cexit();
		}
		eax_217 = (word32) (uint64) fn00000001400017D8(0x00);
		return eax_217;
	}
	else
		exit((uint64) ebx_186);
}

// 0000000140001434: Register Eq_620 Win32CrtStartup()
DWORD Win32CrtStartup()
{
	fn000000014000186C(qwLoc28, qwLoc20, qwLoc18, qwLoc10);
	return fn00000001400012BC(edx, gs, qwArg08, qwArg10);
}

// 0000000140001448: Register Eq_639 fn0000000140001448(Stack Eq_640 tArg08, Stack Eq_641 tArg10)
BOOL fn0000000140001448(HANDLE tArg08, UINT tArg10)
{
	SetUnhandledExceptionFilter(tLoc28);
	UnhandledExceptionFilter(tLoc28);
	GetCurrentProcess();
	return TerminateProcess(tArg08, tArg10);
}

// 000000014000147C: Register word32 fn000000014000147C(Register ui64 rcx, Stack word64 qwArg00, Stack word64 qwArg08)
word32 fn000000014000147C(ui64 rcx, word64 qwArg00, word64 qwArg08)
{
	if (IsProcessorFeaturePresent(tLoc38) == 0x00)
	{
		fn0000000140001550(&globals->t400030E0, qwLoc38);
		globals->qw400031D8 = qwArg00;
		globals->ptr40003178 = fp + 0x08;
		globals->qw40003050 = globals->qw400031D8;
		globals->qw40003160 = rcx;
		globals->dw40003040 = 0xC0000409;
		globals->dw40003044 = 0x01;
		globals->dw40003058 = 0x01;
		globals->qw40003060 = 0x02;
		return fn0000000140001448(qwLoc38, tLoc30);
	}
	else
		__fastfail(0x02);
}

// 0000000140001550: void fn0000000140001550(Register (ptr64 Eq_674) rcx, Stack Eq_640 qwArg08)
void fn0000000140001550(Eq_674 * rcx, HANDLE qwArg08)
{
	RtlCaptureContext(tLoc58);
	Eq_731 rsi_16 = rcx->t00F8;
	do
	{
		Eq_759 rax_47 = RtlLookupFunctionEntry(rsi_16, fp + 0x08, null);
		if (rax_47 == null)
			return;
		word64 rsp_91;
		word64 rbx_92;
		word64 rdi_94;
		byte SCZO_95;
		word64 rcx_96;
		word32 edi_97;
		byte SZO_98;
		bool C_99;
		word32 r8d_100;
		word64 r8_101;
		word64 rdx_102;
		word64 rax_103;
		bool Z_104;
		word64 r9_105;
		word32 ecx_106;
		byte SO_107;
		KERNEL32.dll!RtlVirtualUnwind();
	} while ((word32) (uint64) (edi_97 + 0x01) < 0x02);
}

// 00000001400015C4: Register byte fn00000001400015C4(Register (ptr32 Eq_329) gs)
byte fn00000001400015C4(Eq_329 * gs)
{
	byte al_12;
	if (fn0000000140001DC4() != 0x00)
	{
		word64 rcx_32 = gs->ptr0030->qw0008;
		do
		{
			__lock();
			word64 rax_39;
			if (!__cmpxchg(globals->qw400035B8, rcx_32, 0x00, out rax_39))
				goto l00000001400015F2;
		} while (rcx_32 != rax_39);
		al_12 = 0x01;
	}
	else
	{
l00000001400015F2:
		al_12 = 0x00;
	}
	return al_12;
}

// 0000000140001600: Register byte fn0000000140001600(Register word32 ecx, Register word32 edx)
byte fn0000000140001600(word32 ecx, word32 edx)
{
	byte al_16 = (byte) (word32) globals->b400035F0;
	if (ecx == 0x00)
		al_16 = 0x01;
	byte al_32;
	globals->b400035F0 = al_16;
	byte bl_23 = fn0000000140001BFC(edx, 0x01, qwLoc28, qwLoc20, qwLoc18);
	fn0000000140001938();
	if (true)
	{
		fn0000000140001938();
		if (true)
		{
			al_32 = bl_23;
			return al_32;
		}
		fn0000000140001938();
	}
	al_32 = 0x00;
	return al_32;
}

// 000000014000164C: Register word32 fn000000014000164C(Register up32 ecx, Register ui64 r8, Stack word64 qwArg08)
word32 fn000000014000164C(up32 ecx, ui64 r8, word64 qwArg08)
{
	uint64 rbx_10 = (uint64) ecx;
	word32 ebx_11 = (word32) rbx_10;
	if (ecx > 0x01)
	{
		byte bl_186;
		<anonymous> ** rcx_187 = fn0000000140001974(0x05, qwLoc50, qwLoc48, qwLoc40, out bl_186);
		int3();
		int3();
		int3();
		int3();
		return (word32) fn0000000140001718(rcx_187);
	}
	else
	{
		word32 eax_149;
		word32 eax_40 = fn0000000140001DC4();
		if (eax_40 != 0x00 && ebx_11 == 0x00)
		{
			word64 rsp_124;
			word64 rbx_125;
			word64 rbp_126;
			byte SCZO_127;
			word32 ebx_128;
			word32 ecx_129;
			byte CZ_130;
			word32 eax_131;
			byte SZO_132;
			bool C_133;
			bool Z_134;
			word64 rcx_135;
			byte al_136;
			word64 rdx_137;
			word64 r8_138;
			word32 edx_139;
			word64 rax_140;
			byte cl_141;
			word128 xmm0_142;
			word128 xmm1_143;
			byte bl_144;
			initialize_onexit_table();
			if (eax_131 != 0x00)
				eax_149 = DPB(eax_131, 0x00, 0);
			else
			{
				word64 rsp_154;
				word64 rbx_155;
				word64 rbp_156;
				byte SCZO_157;
				word32 ebx_158;
				word32 ecx_159;
				byte CZ_160;
				word32 eax_161;
				byte SZO_162;
				bool C_163;
				bool Z_164;
				word64 rcx_165;
				byte al_166;
				word64 rdx_167;
				word64 r8_168;
				word32 edx_169;
				word64 rax_170;
				byte cl_171;
				word128 xmm0_172;
				word128 xmm1_173;
				byte bl_174;
				initialize_onexit_table();
				eax_149 = DPB(eax_161, eax_161 == 0x00, 0);
			}
		}
		else
		{
			word64 rdx_75 = globals->qw40003000;
			word32 eax_84 = (word32) (uint64) ((word32) (uint64) (word32) rdx_75 & 0x3F);
			Eq_886 r8_92 = __ror(r8 | ~0x00, (byte) (uint64) (0x40 - eax_84)) ^ rdx_75;
			globals->ow400035C0 = DPB(owLoc28, r8_92, 64);
			globals->u400035D0 = r8_92;
			globals->ow400035D8 = DPB(owLoc28, r8_92, 64);
			globals->u400035E8 = r8_92;
			eax_149 = DPB(eax_84, 0x01, 0);
		}
		return eax_149;
	}
}

// 0000000140001718: Register (ptr64 Eq_975) fn0000000140001718(Register (ptr64 (ptr64 code)) rcx)
Eq_975 * fn0000000140001718(code * * rcx)
{
	struct Eq_975 * rax_101;
	word32 * rax_33 = (word32 *) 23117;
	if (globals->w40000000 == 23117)
	{
		rax_33 = (int64) globals->dw4000003C;
		word64 rcx_51 = rax_33 + 0x0000000140000000;
		if (rcx_51->dw0000 == 0x4550)
		{
			rax_33 = (word32 *) 0x020B;
			if (rcx_51->w0018 == 0x020B)
			{
				struct Eq_1006 * rax_61 = DPB(0x020B, (word32) rcx_51->w0014, 0);
				word64 rdx_116 = rcx_51 + 0x18 + rax_61;
				struct Eq_1017 * rax_114 = DPB(rax_61, (word32) rcx_51->w0006, 0);
				struct Eq_1017 * r8_59 = rcx - 0x140000000;
				word64 r9_69 = rdx_116 + rax_114 * 0x28;
				for (; rdx_116 != r9_69; rdx_116 += 0x28)
				{
					struct Eq_1017 * rcx_109 = (uint64) rdx_116->dw000C;
					word32 ecx_110 = (word32) rcx_109;
					if (r8_59 >= rcx_109)
					{
						rax_114 = (uint64) ((word32) (uint64) rdx_116->dw0008 + ecx_110);
						if (r8_59 < rax_114)
							goto l000000014000178F;
					}
				}
				rdx_116 = null;
l000000014000178F:
				if (rdx_116 == null)
					rax_101 = (struct Eq_975 *) DPB(rax_114, 0x00, 0);
				else if (rdx_116->dw0024 < 0x00)
					rax_101 = (struct Eq_975 *) DPB(rax_114, 0x00, 0);
				else
					rax_101 = (struct Eq_975 *) DPB(rax_114, 0x01, 0);
				return rax_101;
			}
		}
	}
	rax_101 = (struct Eq_975 *) DPB(rax_33, 0x00, 0);
	return rax_101;
}

// 00000001400017B4: void fn00000001400017B4(Register byte cl)
void fn00000001400017B4(byte cl)
{
	if (fn0000000140001DC4() != 0x00 && cl == 0x00)
		globals->qw400035B8 = 0x00;
}

// 00000001400017D8: Register word32 fn00000001400017D8(Register byte dl)
word32 fn00000001400017D8(byte dl)
{
	if (globals->b400035F0 == 0x00 || dl == 0x00)
	{
		fn0000000140001938();
		fn0000000140001938();
	}
	return (word32) rbx;
}

// 0000000140001804: Register uint64 fn0000000140001804(Register word32 eax)
uint64 fn0000000140001804(word32 eax)
{
	uint64 rbx_25;
	word32 eax_23;
	word64 rdx_7 = globals->qw40003000;
	word32 edx_8 = (word32) rdx_7;
	ui32 ecx_12 = (word32) (uint64) edx_8;
	byte cl_15 = (byte) (uint64) (ecx_12 & 0x3F);
	ui64 rdx_17 = __ror(rdx_7 ^ globals->ow400035C0, cl_15);
	if (rdx_17 == ~0x00)
	{
		word64 rsp_50;
		byte SCZO_52;
		word64 rdx_53;
		word64 rcx_54;
		word32 ecx_55;
		word32 edx_56;
		byte SZO_57;
		bool C_58;
		byte cl_59;
		bool Z_60;
		word64 rax_62;
		crt_atexit();
	}
	else
	{
		word64 rsp_65;
		byte SCZO_67;
		word64 rdx_68;
		word64 rcx_69;
		word32 ecx_70;
		word32 edx_71;
		byte SZO_72;
		bool C_73;
		byte cl_74;
		bool Z_75;
		word64 rax_77;
		register_onexit_function();
	}
	uint64 rcx_27 = 0x00;
	if (eax_23 == 0x00)
		rcx_27 = rbx_25;
	return rcx_27;
}

// 0000000140001854: void fn0000000140001854(Register word32 eax)
void fn0000000140001854(word32 eax)
{
	fn0000000140001804(eax);
}

// 000000014000186C: void fn000000014000186C(Stack word64 qwArg08, Stack ui64 qwArg10, Stack word64 qwArg18, Stack word64 qwArg20)
void fn000000014000186C(word64 qwArg08, ui64 qwArg10, word64 qwArg18, word64 qwArg20)
{
	ui64 rax_15 = globals->qw40003000;
	if (rax_15 == 769630770)
	{
		GetSystemTimeAsFileTime(tLoc28);
		ui64 v14_44 = qwArg10 & 0x00 ^ (uint64) GetCurrentThreadId() ^ (uint64) GetCurrentProcessId();
		QueryPerformanceCounter(tLoc28);
		ui64 rax_55 = (uint64) dwArg18 << 0x20 ^ qwArg18 ^ v14_44 ^ fp + 0x08;
		rax_15 = rax_55 & 0xFFFFFFFF;
		if ((rax_55 & 0xFFFFFFFF) == 769630770)
			rax_15 = 769630771;
		globals->qw40003000 = rax_15;
	}
	globals->qw40003008 = ~rax_15;
}

// 0000000140001918: Register word32 fn0000000140001918()
word32 fn0000000140001918()
{
	return 0x01;
}

// 0000000140001920: Register word32 fn0000000140001920()
word32 fn0000000140001920()
{
	return 0x4000;
}

// 0000000140001928: void fn0000000140001928(Stack Eq_196 tArg08)
void fn0000000140001928(PSLIST_HEADER tArg08)
{
	InitializeSListHead(tArg08);
}

// 0000000140001938: void fn0000000140001938()
void fn0000000140001938()
{
}

// 000000014000193C: void fn000000014000193C()
void fn000000014000193C()
{
	ui64 * rax_4 = fn0000000140001130();
	*rax_4 |= 0x04;
	ui64 * rax_10 = fn00000001400010C0();
	*rax_10 |= 0x02;
}

// 0000000140001958: Register word32 fn0000000140001958()
word32 fn0000000140001958()
{
	return (word32) (globals->dw40003014 == 0x00);
}

// 0000000140001964: Register ptr64 fn0000000140001964()
ptr64 fn0000000140001964()
{
	return 0x140003638;
}

// 000000014000196C: Register ptr64 fn000000014000196C()
ptr64 fn000000014000196C()
{
	return 0x140003630;
}

// 0000000140001974: Register ptr64 fn0000000140001974(Register word32 ecx, Stack word64 qwArg00, Stack Eq_196 qwArg08, Stack word64 qwArg10, Register out Eq_198 blOut)
ptr64 fn0000000140001974(word32 ecx, word64 qwArg00, PSLIST_HEADER qwArg08, word64 qwArg10, Eq_198 & blOut)
{
	word32 ebx_11 = (word32) (uint64) ecx;
	if (IsProcessorFeaturePresent(tLoc05C8) == 0x00)
	{
		globals->dw40003610 &= 0x00;
		Eq_1267 eax_30 = memset(ptrLoc05C8, dwLoc05C0, tLoc05B8);
		RtlCaptureContext(ptrLoc05C8);
		Eq_759 rax_36 = RtlLookupFunctionEntry(qwLoc03E0, fp + 0x10, null);
		if (rax_36 != null)
		{
			word64 rsp_134;
			word64 rbx_135;
			word64 rbp_136;
			byte SCZO_137;
			word32 ebx_138;
			word32 ecx_139;
			word64 rcx_140;
			word32 eax_141;
			byte SZO_142;
			bool C_143;
			bool Z_144;
			word32 edx_145;
			word64 rdx_146;
			word32 r8d_147;
			word64 r8_148;
			word64 rax_149;
			word64 r9_150;
			byte bl_151;
			KERNEL32.dll!RtlVirtualUnwind();
		}
		memset(ptrLoc05C8, dwLoc05C0, tLoc05B8);
		Eq_639 eax_72 = IsDebuggerPresent();
		SetUnhandledExceptionFilter(ptrLoc05C8);
		if (UnhandledExceptionFilter(ptrLoc05C8) == 0x00)
			globals->dw40003610 &= (word32) (uint64) (0x00 - (-(eax_72 == 0x01) == 0x00));
		byte bl_96;
		*blOut = (byte) rbx;
		return fp - 0x0588;
	}
	else
		__fastfail((word32) (uint64) ebx_11);
}

// 0000000140001ABC: Register word32 fn0000000140001ABC()
word32 fn0000000140001ABC()
{
	return 0x00;
}

// 0000000140001AC0: Register Eq_1351 fn0000000140001AC0()
Eq_1351 fn0000000140001AC0()
{
	Eq_1351 al_21;
	struct Eq_1353 * rax_7 = DPB(rax, GetModuleHandleW(tLoc28), 0);
	if (rax_7 != null && rax_7->w0000 == 23117)
	{
		struct Eq_1369 * rax_49 = rax_7 + (int64) rax_7->dw003C / 0x0040;
		if (rax_49->dw0000 == 0x4550 && (rax_49->w0018 == 0x020B && rax_49->dw0084 > 0x0E))
		{
			al_21 = rax_49->dw00F8 != 0x00;
			return al_21;
		}
	}
	al_21.u1 = 0x00;
	return al_21;
}

// 0000000140001B14: void fn0000000140001B14(Stack Eq_314 tArg08)
void fn0000000140001B14(Eq_314 tArg08)
{
	SetUnhandledExceptionFilter(tArg08);
}

// 0000000140001B24: void fn0000000140001B24(Register (ptr64 (ptr64 Eq_1398)) rcx)
void fn0000000140001B24(Eq_1398 * * rcx)
{
	struct Eq_1398 * rax_5 = *rcx;
	if (rax_5->dw0000 != ~0x1F928C9C || rax_5->dw0018 != 0x04)
		return;
	uint64 rcx_33 = (uint64) rax_5->dw0020;
	word32 ecx_34 = (word32) rcx_33;
	if (rcx_33 > ~0x19930521 && ecx_34 != 0x01994000)
		return;
	word64 rsp_38;
	byte SCZO_39;
	word64 rax_40;
	word64 rcx_41;
	bool Z_42;
	word32 ecx_43;
	word32 eax_44;
	byte CZ_45;
	byte SZO_46;
	bool C_47;
	api-ms-win-crt-runtime-l1-1-0.dll!terminate();
	int3();
	fn0000000140001B5C(qwLoc28, qwLoc20);
}

// 0000000140001B5C: void fn0000000140001B5C(Stack Eq_196 qwArg08, Stack word64 qwArg10)
void fn0000000140001B5C(PSLIST_HEADER qwArg08, word64 qwArg10)
{
	word64 * rbx_11;
	word64 * rsi_12 = &globals->qw40002680;
	for (rbx_11 = &globals->qw40002680; rbx_11 < rsi_12; ++rbx_11)
	{
		<anonymous> * rdi_32 = *rbx_11;
		if (rdi_32 != null)
		{
			fn0000000140001BF4();
			word64 rsp_47;
			word64 rdi_50;
			byte SCZO_51;
			bool C_52;
			byte SZO_53;
			bool Z_54;
			word64 rcx_55;
			rdi_32();
		}
	}
}

// 0000000140001BA8: void fn0000000140001BA8(Stack word64 qwArg08, Stack word64 qwArg10)
void fn0000000140001BA8(word64 qwArg08, word64 qwArg10)
{
	word64 * rbx_11;
	word64 * rsi_12 = &globals->qw40002690;
	for (rbx_11 = &globals->qw40002690; rbx_11 < rsi_12; ++rbx_11)
	{
		<anonymous> * rdi_32 = *rbx_11;
		if (rdi_32 != null)
		{
			fn0000000140001BF4();
			word64 rsp_47;
			word64 rdi_50;
			byte SCZO_51;
			bool C_52;
			byte SZO_53;
			bool Z_54;
			word64 rcx_55;
			rdi_32();
		}
	}
}

// 0000000140001BF4: void fn0000000140001BF4()
void fn0000000140001BF4()
{
	word64 rsp_3;
	globals->ptr40002190();
}

// 0000000140001BFC: Register byte fn0000000140001BFC(Register word32 edx, Register word32 ebx, Stack word64 qwArg08, Stack word64 qwArg10, Stack word64 qwArg18)
byte fn0000000140001BFC(word32 edx, word32 ebx, word64 qwArg08, word64 qwArg10, word64 qwArg18)
{
	globals->dw4000301C = 0x02;
	word32 eax_20;
	word32 ebx_21;
	word32 ecx_22;
	word32 edx_23;
	__cpuid(0x00, 0x00, &eax_20, &ebx_21, &ecx_22, &edx_23);
	globals->dw40003018 = 0x01;
	ui32 r8d_198 = (word32) (uint64) globals->dw40003614;
	ui32 eax_65;
	word32 ebx_66;
	word32 ecx_67;
	word32 edx_68;
	__cpuid(0x01, 0x00, &eax_65, &ebx_66, &ecx_67, &edx_68);
	word32 r11d_52 = (word32) (uint64) ((word32) (uint64) ((word32) (uint64) ((word32) (uint64) ebx_21 ^ 1752462657) | (word32) ((uint64) ((word32) ((uint64) edx_23) ^ 0x69746E65))) | (word32) ((uint64) (ecx_22 ^ 0x444D4163)));
	int32 edi_58 = (word32) (uint64) eax_20;
	word32 r9d_71 = (word32) (uint64) ecx_67;
	ui32 ecx_74 = (word32) (uint64) eax_65;
	if ((word32) (uint64) ((word32) (uint64) ((word32) (uint64) ((word32) (uint64) edx_23 ^ 0x49656E69) | (word32) ((uint64) ((word32) ((uint64) ecx_22) ^ 1818588270))) | (word32) ((uint64) ((word32) ((uint64) ebx_21) ^ 1970169159))) == 0x00)
	{
		globals->qw40003020 |= ~0x00;
		r8d_198 = (word32) (uint64) (r8d_198 | 0x04);
		globals->dw40003614 = r8d_198;
		word32 eax_208 = (word32) (uint64) (eax_65 & 0x0FFF3FF0);
		if (eax_208 == 0x000106C0 || (eax_208 == 0x00020660 || eax_208 == 0x00020670))
		{
l0000000140001CDE:
			r8d_198 = (word32) (uint64) (r8d_198 | 0x01);
			globals->dw40003614 = r8d_198;
			goto l0000000140001CE9;
		}
		uint64 rax_233 = (uint64) (eax_208 + ~0x0003064F);
		if ((word32) rax_233 <= 0x20 && !__bt(0x00010001, rax_233))
			goto l0000000140001CDE;
	}
l0000000140001CE9:
	if (r11d_52 == 0x00 && (word32) ((uint64) (ecx_74 & 0x0FF00F00)) >= 0x00600F00)
	{
		r8d_198 = (word32) (uint64) (r8d_198 | 0x04);
		globals->dw40003614 = r8d_198;
	}
	if (edi_58 >= 0x07)
	{
		word32 eax_178;
		word32 ebx_179;
		word32 ecx_180;
		word32 edx_181;
		__cpuid(0x07, 0x00, &eax_178, &ebx_179, &ecx_180, &edx_181);
		if (!__bt(ebx_179, 0x09))
			globals->dw40003614 = (word32) (uint64) (r8d_198 | 0x02);
	}
	if (!__bt(r9d_71, 0x14))
	{
		globals->dw40003018 = 0x02;
		globals->dw4000301C = 0x06;
		if (!__bt(r9d_71, 0x1B) && !__bt(r9d_71, 0x1C))
		{
			ui64 edx_eax_146 = __xgetbv(0x00);
			if (((byte) (edx_eax_146 << 0x20 | edx_eax_146) & 0x06) == 0x06)
			{
				ui32 eax_160 = (word32) (uint64) ((word32) (uint64) globals->dw4000301C | 0x08);
				globals->dw40003018 = 0x03;
				globals->dw4000301C = eax_160;
				if ((bLoc20 & 0x20) != 0x00)
				{
					globals->dw40003018 = 0x05;
					globals->dw4000301C = (word32) (uint64) (eax_160 | 0x20);
				}
			}
		}
	}
	return (byte) rbx;
}

// 0000000140001DC4: Register word32 fn0000000140001DC4()
word32 fn0000000140001DC4()
{
	return (word32) (globals->dw40003030 != 0x00);
}

// 0000000140001DD0: void fn0000000140001DD0()
void fn0000000140001DD0()
{
}

// 0000000140001E7C: void fn0000000140001E7C(Register int64 rdx, Register (ptr64 Eq_1775) r9)
void fn0000000140001E7C(int64 rdx, Eq_1775 * r9)
{
	fn0000000140001E9C(rdx, r9, r9->ptr0038);
}

// 0000000140001E9C: void fn0000000140001E9C(Register int64 rcx, Register (ptr64 Eq_1775) rdx, Register (ptr64 Eq_1780) r8)
void fn0000000140001E9C(int64 rcx, Eq_1775 * rdx, Eq_1780 * r8)
{
	word32 r11d_12 = (word32) (uint64) ((word32) (uint64) r8->dw0000 & ~0x07);
	int64 r9_14 = rcx;
	int64 r10_18 = rcx;
	if ((r8->dw0000 & 0x04) != 0x00)
		r10_18 = (int64) r8->dw0004 + rcx & (int64) ((word32) ((uint64) (-((word32) ((uint64) r8->dw0008)))));
	word64 rdx_23 = (int64) r11d_12 + r10_18;
	struct Eq_1808 * rcx_26 = (uint64) rdx->ptr0010->dw0008 + rdx->qw0008;
	if ((rcx_26->b0003 & 0x0F) != 0x00)
		r9_14 = rcx + (uint64) ((word32) rcx_26->b0003 & ~0x0F);
	ui64 r9_36 = r9_14 ^ rdx_23;
	fn00000001400011B0(r9_36);
}

// 0000000140001F10: void fn0000000140001F10()
void fn0000000140001F10()
{
	word64 rsp_3;
	word64 rax_4;
	rax();
}

// 0000000140001F12: void fn0000000140001F12(Register word64 rcx)
void fn0000000140001F12(word64 rcx)
{
	word64 rsp_14;
	word64 rbp_15;
	byte SCZO_16;
	word64 rdx_17;
	word64 rax_18;
	word64 rcx_19;
	word32 ecx_20;
	seh_filter_exe();
}

// 0000000140001F30: void fn0000000140001F30(Register word64 rcx)
void fn0000000140001F30(word64 rcx)
{
}
