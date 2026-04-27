#pragma once

#include <Hack/FuckEnc.h>
#include <Hack/ENC/Calls.h>
#include <IDA/ida_defs.h>

void __fastcall sub_2834A10(__int64 a1, unsigned int* a2, unsigned int a3, int a4)
{
    __int64 v4;          // rbx
    unsigned int v5;     // edi
    int v6;              // r13d
    __int64 v10;         // rsi
    __int64 v11;         // r10
    int v12;             // r10d
    __int64 v13;         // rdx
    unsigned __int8 v14; // al
    int v15;             // ecx
    __int64 v16;         // r8
    __int64 v17;         // r8
    int v18;             // edx
    unsigned __int8 v19; // al
    __int64 v20;         // r8
    __int64 v21;         // rcx
    __int64 v22;         // rax
    int v23;             // ecx
    int v24;             // ecx
    __int64 v25;         // r10
    __int64 v26;         // rax
    __int64 v27;         // r9
    __int64 v28;         // r8
    __int64 v29;         // r9
    __int64 v30;         // rcx
    __int64 v31;         // r9
    __int64 v32;         // rax
    __int64 v33;         // r9
    int v34;             // [rsp+60h] [rbp+40h] BYREF

    v4 = a1;
    v5 = a4 ^ 0x91DE5C99;
    v6 = 0;
    v10 = a1;
    if (a3 > 3)
    {
        while (2)
        {
            v11 = (unsigned int)*a2;
            v34 = *a2;
            switch (((unsigned __int16)(a4 + v6) ^ 0xFE14) & 0x3FF)
            {
            case 0:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x348) ^ v11;
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x220) + 8i64 * (unsigned __int8)(0xFC * FuckEnc::CacheRead<_BYTE>(v4 + 0x5D8))) + 0x3C8i64) + 0x200i64);
                goto LABEL_1041;
            case 1:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x520) + 8i64 * (unsigned __int8)(0xEB * v5)) + 0x368i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x17)) + 0x4F0i64) + 8i64) + 0x758i64) + 0x698i64);
                goto LABEL_1041;
            case 2:
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x550);
                v34 = v12 + 0xAE33EC0;
                v34 = ((0xC5B4317F * (FuckEnc::CacheRead<_DWORD>(v4 + 0x348) >> 0x14)) & 0xFFFFFFE9) + v12 + 0xAE33EC1;
                goto LABEL_1041;
            case 3:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x508) + 0x310i64) ^ v11;
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4C0) + 0x440i64);
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x6E8) * v5;
                goto LABEL_1041;
            case 4:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x80);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x658) + 0x118i64);
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x520) + 8i64 * ((unsigned __int8)v5 ^ 0xE0u)) + 0x1B0i64));
                goto LABEL_1041;
            case 5:
                v34 = v11 ^ 0x300430F3;
                v34 = (v11 ^ 0x300430F3) - FuckEnc::CacheRead<_DWORD>(v4 + 0x2F8);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x178) + (FuckEnc::CacheRead<_DWORD>(v4 + 0x200) | 0xB);
                goto LABEL_1041;
            case 6:
                v34 = v5 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 8i64 * (((FuckEnc::CacheRead<_DWORD>(v4 + 0x550) & 0xF0) + 0x1C) & 0x3C)) + 0xE8i64) + 0x5A0i64) ^ v11;
                goto LABEL_1041;
            case 7:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 8i64 * ((0x29 * (_BYTE)v5) & 0x62)) + 0x600i64) + 0x5C0i64, &v34, v5, v4);
                goto LABEL_1041;
            case 8:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x380) + 0x450i64);
                v13 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x148) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v10 + 0x6D0), 1));
                v14 = __ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x68), 0xF);
                goto LABEL_12;
            case 9:
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8) + 0xB);
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0) - 0x542E00BF * FuckEnc::CacheRead<_DWORD>(v4 + 0x200) + 0x3D4FA08A;
                goto LABEL_1041;
            case 0xA:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x380);
                v34 = __ROL4__(v11, ~(FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 0x558i64) + 4i64 * (unsigned __int8)(0xB7 * v5)) ^ (FuckEnc::CacheRead<_BYTE>(v10 + 0x490) | 0x1E)));
                goto LABEL_1041;
            case 0xB:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x350);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4C8);
                Calls::FastCall(v10 + 0x5F0, &v34, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x750));
                goto LABEL_1041;
            case 0xC:
                v34 = (v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x350)) ^ 0x542F4A6A;
                v15 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x380) + 0x118i64) + 0x4D8i64) + v34 + 1) ^ 0xF6D1FF41;
                goto LABEL_1040;
            case 0xD:
                v34 = v11 + (v5 ^ ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x100) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3C8) + 0x498i64))) + 1;
                goto LABEL_1041;
            case 0xE:
                Calls::FastCall(v4 + 0x60, &v34, v5, v4);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x610) + 0x348i64);
                goto LABEL_1041;
            case 0xF:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x520) + 8i64 * (unsigned __int8)(0xD8 * v5)) + 0x7A0i64);
                v34 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 0x720) + (FuckEnc::CacheRead<_DWORD>(v4 + 0x550) & 0xFFFFFFE4));
                goto LABEL_1041;
            case 0x10:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x520) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x220) + 8i64 * ((unsigned __int8)v5 ^ 0x8Au)) + 0x1C0i64) + 0x100i64) & 0x75)) + 0xF0i64) + 0x620i64);
                goto LABEL_1041;
            case 0x11:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x458) - 0x13C30131;
                v34 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F8) + 8i64 * (((unsigned __int8)v5 ^ 0xDF) & 0xA8)) + 0x2C8i64) + 4i64 * ((unsigned __int8)__ROL4__(v5, 9) & 0xF6)) ^ v34);
                goto LABEL_1041;
            case 0x12:
                v34 = __ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0) ^ v11, 0xF2) + 0x2F00D115;
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x220) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x498) & 0xDD)) + 0x38i64) + 4i64 * ((unsigned __int8)v5 & 0xCB));
                goto LABEL_1041;
            case 0x13:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x278);
                v16 = v4;
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x80);
                goto LABEL_24;
            case 0x14:
                v34 = v11 - 0x2F002616;
                v15 = (v11 - 0x2F002616) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x308) + 0xC0i64) + (v5 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x68)));
                goto LABEL_1040;
            case 0x15:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 0x118i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x668) + 8i64 * (v5 & 0x53)) + 0x4E8i64, &v34, v5, v4);
                goto LABEL_1041;
            case 0x16:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x30) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x650) + 0x4C8i64) + 0x1B0i64);
                v15 = v34 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x798) + 0x458i64);
                goto LABEL_1040;
            case 0x17:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0xC0) - 0x70391CCD;
                v34 -= (unsigned int)~FuckEnc::CacheRead<_DWORD>(v4 + 0x68) >> 0xB;
                v15 = FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0) + v34;
                goto LABEL_1040;
            case 0x18:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x498) ^ v11 ^ ((FuckEnc::CacheRead<_DWORD>(v4 + 0x498) & 0xFFFFFFF5) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x458) ^ v5));
                goto LABEL_1041;
            case 0x19:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x208);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x370);
                v34 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x220) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x350), 0x1B)) + 0x310i64);
                goto LABEL_1041;
            case 0x1A:
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x750) + 0x390i64));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x238) + 0x4F0i64);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x148) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x19)) + 0x6D0i64);
                goto LABEL_1041;
            case 0x1B:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x748) + 0x38i64) + 4i64 * (unsigned __int8)(0x39 * v5));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x598);
                v15 = v34 - 0x26F038A * FuckEnc::CacheRead<_DWORD>(v10 + 0x5E0);
                goto LABEL_1040;
            case 0x1C:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4F0) + 0x780i64);
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 0x290i64) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v10 + 0x5D8) ^ 0xC1u)) + 0x498i64) ^ v11;
                goto LABEL_1041;
            case 0x1D:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x798);
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x78) + 0x620i64);
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x550);
                v15 = FuckEnc::CacheRead<_DWORD>(v4 + 0x698) + v34 + 0x4609130E;
                goto LABEL_1040;
            case 0x1E:
                v34 = v11 - 0x5B2E00BF * FuckEnc::CacheRead<_DWORD>(v4 + 0x310);
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_BYTE>(v4 + 0x5D8) * ~FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x138) + 0xC0i64));
                goto LABEL_1041;
            case 0x1F:
                v34 = (v11 - 0x37039DBA) ^ 0x1143D33E;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3C0);
                v34 += FuckEnc::CacheRead<_DWORD>(v10 + 0x68) ^ v5;
                v15 = v34 - FuckEnc::CacheRead<_DWORD>(v4 + 0x440);
                goto LABEL_1040;
            case 0x20:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x228);
                v34 = v11 ^ (v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x5F8) + 8i64 * ((unsigned __int8)__ROL4__(v5, 0x1F) & 0xFB)) + 0x458i64));
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(v4 + 0x80);
                goto LABEL_1040;
            case 0x21:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x378) + 0x238i64) + 0x118i64);
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x6E8) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x260) + 0x638i64) + 0x6D0i64);
                goto LABEL_1041;
            case 0x22:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0) - 0x197A6E55;
                v34 ^= 0x25C6136 * FuckEnc::CacheRead<_DWORD>(v4 + 0x5D8) * ~FuckEnc::CacheRead<_DWORD>(v4 + 0x408);
                goto LABEL_1041;
            case 0x23:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x768) ^ v11;
                v34 -= (unsigned int)(FuckEnc::CacheRead<_DWORD>(v4 + 0x30) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x118) + 0x208i64), 0x17))) >> 0x1F;
                goto LABEL_1041;
            case 0x24:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x248);
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0xC0);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x290) + 8i64 * ((unsigned __int8)__ROR4__(v5, 0x12) & 0x8A)) + 0x278i64) + 0x498i64);
                goto LABEL_1041;
            case 0x25:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x530) + 8i64 * (__ROR4__(v5, 0x14) & 0xC8)) + 0x370i64) + 0x238i64) + 0x450i64);
                Calls::FastCall(v4 + 0x778, &v34, v5, v10);
                goto LABEL_1041;
            case 0x26:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x530) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x608) + 0x728i64), 8)) + 0x738i64, &v34, v5, v4);
                goto LABEL_1041;
            case 0x27:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x80) - 0x16B63961;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4B8);
                v15 = (v34 - (FuckEnc::CacheRead<_DWORD>(v10 + 0x200) ^ v5)) ^ 0x140D2E44;
                goto LABEL_1040;
            case 0x28:
                v34 = (v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8)) ^ 0x9FDA118C;
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x768) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x668) + 8i64 * ((unsigned __int8)v5 ^ 0x6Cu)) + 0x1C8i64);
                goto LABEL_1041;
            case 0x29:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x138);
                v34 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x248) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x530) + 8i64 * ((unsigned __int8)__ROL4__(0xABDC0130 * FuckEnc::CacheRead<_DWORD>(v10 + 0x720), 0x11) & 0xEA)) + 0x80i64));
                goto LABEL_1041;
            case 0x2A:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x430) + 8i64 * (unsigned __int8)(0x19 * FuckEnc::CacheRead<_DWORD>(v4 + 0x348)), &v34, v5, v4);
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0);
                goto LABEL_1041;
            case 0x2B:
                v34 = v5 + v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x208);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8);
                v34 ^= ~(v5 + FuckEnc::CacheRead<_DWORD>(v10 + 0x1B0));
                goto LABEL_1041;
            case 0x2C:
                v34 = v5 + v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x208);
                v15 = v34 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x228) + 0x4B8i64) + 0x568i64) + 4i64 * (v5 & 8)) ^ v5);
                goto LABEL_1040;
            case 0x2D:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x510) + 0x678i64) + 8i64 * (v5 & 0x50)) + 0x4C8i64);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x728);
                goto LABEL_1041;
            case 0x2E:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x5A0) ^ v11 ^ 0x4A49DE9A;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3C0) + 0x758i64);
                v34 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x68);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x408);
                goto LABEL_1041;
            case 0x2F:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x720) ^ v11;
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0));
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 8i64 * ((unsigned __int8)v5 & 0xD6)) + 0x178i64) * v5);
                goto LABEL_1041;
            case 0x30:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8);
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x458) * v5;
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 0x260i64) + 0x638i64) + 0x310i64);
                goto LABEL_1041;
            case 0x31:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6E0) + 0x280i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x748) + 0x680i64) + 8i64 * ((0xFE * (_BYTE)v5) & 7), &v34, v5, v4);
                goto LABEL_1041;
            case 0x32:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 8i64 * (unsigned __int8)(0xF7 * v5)) + 0xE0i64);
                v34 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x588) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x6A0) + 4i64 * (unsigned __int8)(0x1F * v5)));
                goto LABEL_1041;
            case 0x33:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x180) + 4i64 * (__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x768) ^ v5, 4) & 0x15));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6E0) + 0x748i64) + 0x3A8i64);
                v34 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x6E8);
                goto LABEL_1041;
            case 0x34:
                v34 = ~(v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x490));
                v34 ^= ~FuckEnc::CacheRead<_DWORD>(v4 + 0x408);
                v15 = v34 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 0x200i64);
                goto LABEL_1040;
            case 0x35:
                v15 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x678) + 8i64 * ((0x1F * (_BYTE)v5) & 0x2D)) + 0x530i64) + 8i64 * (((unsigned __int8)v5 ^ 2) & 0x2F)) + 0x638i64) + 0x230i64) + 0x5E0i64);
                goto LABEL_1040;
            case 0x36:
                v34 = __ROL4__(v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x490), 0x8A);
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x408);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D8) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x620) ^ 0xDF) & 0x73)) + 0x588i64);
                goto LABEL_1041;
            case 0x37:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(v4 + 0x3C8) + 8i64 * (v5 & 0x2F)) + 0x638i64);
                v34 = ~(v11 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 0x5A0) - 0x720E99A8));
                goto LABEL_1041;
            case 0x38:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x7A0);
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0xB8) + 1;
                v34 ^= v5 ^ (0x778EB81A * FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0));
                goto LABEL_1041;
            case 0x39:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x728) ^ v11;
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F8) + 8i64 * (((unsigned __int8)v5 ^ 0x40) & 0xE0)) + 0x178i64);
                v34 -= 0x41A4733F * FuckEnc::CacheRead<_DWORD>(v4 + 0x720);
                goto LABEL_1041;
            case 0x3A:
                Calls::FastCall(v4 + 0x6B8, &v34, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x748);
                v34 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x1B0);
                goto LABEL_1041;
            case 0x3B:
                v34 = v11 ^ 0x2047D55D;
                v34 = (v11 ^ 0x2047D55D) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 8i64 * (unsigned __int8)(0x7F * v5)) + 0x748i64) + 0x3E0i64) + 0x768i64) - v5;
                goto LABEL_1041;
            case 0x3C:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x780);
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x158) + 8i64 * (((unsigned __int8)v5 ^ 0xF3) & 0x1D)) + 8i64) + 0x290i64) + 8i64 * ((unsigned __int8)v5 ^ 0xA5u)) + 0x420i64) + 4i64 * (unsigned __int8)(0xC0 * v5)) ^ v11;
                goto LABEL_1041;
            case 0x3D:
                v34 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0xB8));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x260);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x278) + 0x130i64) + 0x178i64) & 0xFFFFFFFD;
                goto LABEL_1041;
            case 0x3E:
                v34 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x248) & 0xFFFFFFEF);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x678) + 8i64 * (__ROR4__(v5, 1) & 0x2A)) + 0x2D8i64) + 4i64 * (unsigned __int8)(0xF5 * v5));
                goto LABEL_1041;
            case 0x3F:
                v34 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x7A0) + 0x768i64) - 0x78);
                v34 = v34 - FuckEnc::CacheRead<_DWORD>(v4 + 0x5A0) - v5;
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x1C8);
                goto LABEL_1041;
            case 0x40:
                v34 = v11 + 0xD032DAB;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x610) + 0x70i64, &v34, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x508));
                goto LABEL_1041;
            case 0x41:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x720) & 0xCD)) + 0xB8i64) ^ v11;
                v34 += 0x3CFECEC0 * ((0x20 * FuckEnc::CacheRead<_DWORD>(v4 + 0x498)) ^ 0x66A66EBC);
                goto LABEL_1041;
            case 0x42:
                v34 = __ROL4__(v11, 0x5E);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x118) + 0x638i64);
                v17 = FuckEnc::CacheRead<_QWORD>(v10 + 0x118);
                goto LABEL_72;
            case 0x43:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x450);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x4B0) + 8i64 * (v5 & 0x76)) + 0x708i64, &v34, v5, v4);
                goto LABEL_1041;
            case 0x44:
                Calls::FastCall(v4 + 0x188, &v34, v5, v4);
                v15 = ~(v34 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 0x720i64));
                goto LABEL_1040;
            case 0x45:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x130) + 0x5D8i64);
                v34 = __ROR4__(v34, v5 + (FuckEnc::CacheRead<_BYTE>(v4 + 0x458) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 0x350i64)));
                goto LABEL_1041;
            case 0x46:
                v34 = __ROR4__(v11, 0x61);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x450) + 0x348i64) | 0xA;
                v15 = v34 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x378) + 0xB8i64);
                goto LABEL_1040;
            case 0x47:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x138);
                v34 = v11 - (v5 ^ FuckEnc::CacheRead<_DWORD>(v10 + 0x728) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 8i64 * (unsigned __int8)(0x7F * v5)) + 0x620i64));
                goto LABEL_1041;
            case 0x48:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3C0) + 0x4C0i64) + 0x1C0i64) + 0x780i64);
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x530) + 8i64 * (unsigned __int8)__ROR4__(v5, 9)) + 0x80i64);
                goto LABEL_1041;
            case 0x49:
                Calls::FastCall(v4 + 0x570, &v34, v5, v4);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8) + 8i64 * (((unsigned __int8)v5 ^ 0xFE) & 0x41)) + 0x248i64);
                goto LABEL_1041;
            case 0x4A:
                v34 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x390) ^ 0x82u)) + 0x1B0i64) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x30) + 0x665CD0FF));
                goto LABEL_1041;
            case 0x4B:
                v34 = (FuckEnc::CacheRead<_DWORD>(v4 + 0x248) ^ v11) - v5;
                v15 = ~(v34 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x19)) + 0x3E0i64) + 0x390i64));
                goto LABEL_1040;
            case 0x4C:
                Calls::FastCall(v4 + 0x330, &v34, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x510));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xE0);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x38) + 4i64 * (v5 & 0x51));
                goto LABEL_1041;
            case 0x4D:
                v34 = __ROL4__(v11, v5) ^ 0x20BC0D33;
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0xC0);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x150);
                v34 ^= 0xC861641A * FuckEnc::CacheRead<_DWORD>(v10 + 0x1C8);
                goto LABEL_1041;
            case 0x4E:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x1B0) + FuckEnc::CacheRead<_DWORD>(v4 + 0x498) + FuckEnc::CacheRead<_DWORD>(v4 + 0x6D0) * v5 + 0xBB9D0FF;
                goto LABEL_1041;
            case 0x4F:
                v34 = __ROR4__(v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x68) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x180) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x208) & 0xA6))), v5);
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x588);
                goto LABEL_1041;
            case 0x50:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x280) + 0x5F8i64) + 8i64 * ((unsigned __int8)v5 & 0xC8)) + 0x600i64);
                Calls::FastCall(v4 + 0x50, &v34, v5, v10);
                v34 = ~v34;
                goto LABEL_1041;
            case 0x51:
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x138) + 0x610i64) + 0x118i64) + 0x370i64) + 0x5F8i64) + 8i64 * (__ROR4__(v5, 0x12) & 0x91)) + 0x5D8i64));
                goto LABEL_1041;
            case 0x52:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x78);
                v34 = v11 ^ FuckEnc::CacheRead<_DWORD>(v10 + 0x5A0) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x768);
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x290) + 8i64 * ((unsigned __int8)v5 ^ 0x71u)) + 0x30i64);
                goto LABEL_1040;
            case 0x53:
                v34 = v11 - 0x30E023D4 + FuckEnc::CacheRead<_DWORD>(v4 + 0x1B0);
                Calls::FastCall(v4 + 0x2D0, &v34, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x238));
                goto LABEL_1041;
            case 0x54:
                v34 = v11 + 0xFF3CFECF * FuckEnc::CacheRead<_DWORD>(v4 + 0x408) - (((FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x798) + 0x68i64) >> 0x17) - 0x5CF31E10) | 8);
                goto LABEL_1041;
            case 0x55:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x498) - 0x64F279F2;
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE0) + 0x7A0i64) + 0x498i64);
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(v4 + 0x350);
                goto LABEL_1040;
            case 0x56:
                v34 = ~(_DWORD)v11;
                v34 = ~(~(_DWORD)v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x220) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x408) & 0x4E)) + 0x308i64) + 0x2F8i64));
                goto LABEL_1041;
            case 0x57:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x450);
                v34 = FuckEnc::CacheRead<_DWORD>(v10 + 0x720) ^ v11 ^ 0xFAAF2CD3;
                v15 = v34 + ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x1C8) + 2 * v5);
                goto LABEL_1040;
            case 0x58:
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x248) ^ (FuckEnc::CacheRead<_BYTE>(v4 + 0x620) | 0xE));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x598);
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x420) + 4i64 * (unsigned __int8)__ROL4__(v5, 4));
                goto LABEL_1041;
            case 0x59:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 0x260i64);
                Calls::FastCall(v4 + 0x188, &v34, v5, v10);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x458);
                goto LABEL_1041;
            case 0x5A:
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x550) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F8) + 8i64 * (unsigned __int8)(0xB2 * v5)) + 0x6D0i64) ^ FuckEnc::CacheRead<_BYTE>(v4 + 0x458) & 0xE1);
                goto LABEL_1041;
            case 0x5B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1C0);
                Calls::FastCall(v10 + 0x1E8, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 8i64 * (FuckEnc::CacheRead<_BYTE>(v4 + 0xB8) ^ 0xD7u)));
                goto LABEL_1041;
            case 0x5C:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x6D0) - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x238);
                Calls::FastCall(v4 + 0x198, &v34, v5, v10);
                goto LABEL_1041;
            case 0x5D:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3C0);
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x298) + 0x4B8i64) + 0x1C8i64) ^ v11;
                v34 += ~FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0);
                goto LABEL_1041;
            case 0x5E:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x138) + 0x498i64) + 1;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x638);
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x3E8) + 8i64 * (v5 & 0x7A)) + 0x458i64));
                goto LABEL_1041;
            case 0x5F:
                v34 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 0x5E0i64) & 0xFFFFFFFA) - FuckEnc::CacheRead<_DWORD>(v4 + 0x728) + 0x2DD9EDEE;
                goto LABEL_1041;
            case 0x60:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x450) + 0x220i64) + 8i64 * (v5 & 0x4A)) + 0x1C0i64);
                Calls::FastCall(v10 + 0x648, &v34, v5, v4);
                goto LABEL_1041;
            case 0x61:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x6D0);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4C0);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x4B8) + 0x420i64) + 4i64 * ((unsigned __int8)v5 & 0xA3));
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x1C8);
                goto LABEL_1041;
            case 0x62:
                v34 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6E0) + 0x5F8i64) + 8i64 * (unsigned __int8)(5 * v5)) + 0x510i64) + 0x498i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x208) ^ 0xFAAFC376));
                goto LABEL_1041;
            case 0x63:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F8) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x16)) + 0x508i64) + 0x370i64);
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x220) + 8i64 * ((unsigned __int8)v5 ^ 0x79u)) + 0x178i64));
                goto LABEL_1041;
            case 0x64:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x670) + 0x348i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x598) + 0x750i64) + 0x510i64);
                v34 = __ROL4__(v34, ~FuckEnc::CacheRead<_BYTE>(v10 + 0x100));
                goto LABEL_1041;
            case 0x65:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x290) + 8i64 * (unsigned __int8)(0xC1 * FuckEnc::CacheRead<_BYTE>(v4 + 0x350))) + 0x550i64) ^ v11;
                Calls::FastCall(v4 + 0x438, &v34, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0));
                goto LABEL_1041;
            case 0x66:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x1B0);
                Calls::FastCall(v4 + 0x1B8, &v34, v5, v4);
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x408);
                goto LABEL_1041;
            case 0x67:
                Calls::FastCall(v4 + 0x738, &v34, v5, v4);
                v34 += 0x7DEC9AEC - (FuckEnc::CacheRead<_DWORD>(v4 + 0x100) ^ v5);
                goto LABEL_1041;
            case 0x68:
                v34 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x378) + 0x6E0i64) + 0x238i64) + 0x650i64) + 0x4B8i64) + 0x1B0i64) ^ 0x47);
                goto LABEL_1041;
            case 0x69:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 0x68i64);
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x100);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x78) + 0x200i64);
                goto LABEL_1041;
            case 0x6A:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x6D0);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x780);
                v15 = v34 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 0x68) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x608) + 0x588i64));
                goto LABEL_1040;
            case 0x6B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x508);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x228) + 0x1B8i64, &v34, v5, FuckEnc::CacheRead<_QWORD>(v10 + 0x758));
                goto LABEL_1041;
            case 0x6C:
                v34 = v11 ^ (~(FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8) ^ v5) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x658) + 0x370i64) + 0x228i64) + 0x5D8i64));
                goto LABEL_1041;
            case 0x6D:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x768) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x380);
                v34 += FuckEnc::CacheRead<_DWORD>(v10 + 0x2C0) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x148) + 8i64 * (__ROL4__(v5, 0x12) & 0x51)) + 0x5E0i64);
                goto LABEL_1041;
            case 0x6E:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x350);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x7A0);
                Calls::FastCall(v4 + 0x648, &v34, v5, v10);
                goto LABEL_1041;
            case 0x6F:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x720);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x130) + 0x530i64) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 0x5E0i64), 0xB)) + 0x208i64);
                goto LABEL_1041;
            case 0x70:
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1C0) + 0x290i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x1A)) + 0x780i64) + 0x6A0i64) + 4i64 * ((unsigned __int8)__ROR4__(v5, 0xB) & 0xAD)) - 0x6F);
                goto LABEL_1041;
            case 0x71:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x130);
                v34 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v10 + 0x408) - 0x6C);
                v34 = (v34 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x598) + 0x620i64)) ^ 0xD3117BB;
                goto LABEL_1041;
            case 0x72:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 0x410i64) + 4i64 * (((unsigned __int8)v5 ^ 1) & 0x29)) - FuckEnc::CacheRead<_DWORD>(v4 + 0x1C8) - v5 + 0x3CFE76BC;
                goto LABEL_1041;
            case 0x73:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 8i64 * ((unsigned __int8)__ROL4__(v5, 0x1E) & 0xC3)) + 0x10i64) + 8i64 * (v5 & 0x57)) + 0xE0i64);
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x180) + 4i64 * (unsigned __int8)__ROR4__(v5, 0x1F));
                goto LABEL_1041;
            case 0x74:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x30);
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0x248);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x1B0) + 0x786FD64D;
                goto LABEL_1041;
            case 0x75:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x610);
                v34 = FuckEnc::CacheRead<_DWORD>(v10 + 0x348) ^ v11;
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x310);
                v34 += (FuckEnc::CacheRead<_DWORD>(v4 + 0x5A0) ^ 0x7BC9632B) + 0x26099FA5;
                goto LABEL_1041;
            case 0x76:
                Calls::FastCall(v4 + 0x300, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 0x3C0i64) + 0x4B0i64) + 8i64 * ((unsigned __int8)v5 & 0xE2)) + 0x230i64));
                goto LABEL_1041;
            case 0x77:
                v34 = __ROL4__(v11, ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8)) - 0x3234CB88;
                v15 = (v34 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4F0) + 0x490i64)) ^ 0x7C30131;
                goto LABEL_1040;
            case 0x78:
                v34 = (unsigned int)0x9D75C03 + v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x30);
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8) + 8i64 * ((unsigned __int8)~(FuckEnc::CacheRead<_BYTE>(v4 + 0x408) * v5) ^ 0x16u)) + 0x4D8i64);
                goto LABEL_1040;
            case 0x79:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x78);
                v34 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x588) * (FuckEnc::CacheRead<_DWORD>(v10 + 0x310) + (FuckEnc::CacheRead<_DWORD>(v4 + 0x1B0) >> 0x1F)));
                goto LABEL_1041;
            case 0x7A:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x230);
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x2F8);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x728) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x520) + 8i64 * (v5 & 0x3C)) + 0x390i64);
                goto LABEL_1041;
            case 0x7B:
                v34 = v11 + 0x513925FD * FuckEnc::CacheRead<_DWORD>(v4 + 0xB8);
                v34 -= (FuckEnc::CacheRead<_DWORD>(v4 + 0x2F8) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x508) + 0x620i64)) ^ 0xDD552896;
                goto LABEL_1041;
            case 0x7C:
                Calls::FastCall(v4 + 0x630, &v34, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x758));
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8) + 0x5E0i64));
                goto LABEL_1041;
            case 0x7D:
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x440) & 0xE9);
                v34 += 0x237B7AB0 * FuckEnc::CacheRead<_DWORD>(v4 + 0x350) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x1B0) ^ 0xEFBA9FD8);
                goto LABEL_1041;
            case 0x7E:
                v34 = v11 - 0x5212D3E6 * FuckEnc::CacheRead<_DWORD>(v4 + 0x1B0);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x78) + 0x298i64);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0xE8) + 0x200i64);
                goto LABEL_1041;
            case 0x7F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x608);
                Calls::FastCall(v10 + 0x60, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x530) + 8i64 * (__ROL4__(v5, 6) & 0xED)));
                goto LABEL_1041;
            case 0x80:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8) ^ v11;
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x678) + 8i64 * (unsigned __int8)__ROL4__(v5, 0xD)) + 0x370i64) + 0x1C8i64);
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(v4 + 0x390);
                goto LABEL_1040;
            case 0x81:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x280) + 0x610i64);
                Calls::FastCall(v4 + 0x778, &v34, v5, v10);
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0xC0) | 6;
                goto LABEL_1041;
            case 0x82:
                v15 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x1C8) ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x2F8))) - 0x93CFECF * FuckEnc::CacheRead<_DWORD>(v4 + 0x6D0);
                goto LABEL_1040;
            case 0x83:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4C0) + 0x230i64) + 0x370i64) + 0x458i64);
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0x768) | 0xB;
                goto LABEL_1041;
            case 0x84:
                v34 = v11 - 0x604DD643;
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x2F8) ^ (v11 - 0x604DD643);
                v34 += (FuckEnc::CacheRead<_DWORD>(v4 + 0x208) ^ 0x1C9FCF83) - 0x5F7F45B0;
                goto LABEL_1041;
            case 0x85:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x458) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x278);
                v34 += FuckEnc::CacheRead<_DWORD>(v10 + 0x248) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x510) + 0x180i64) + 4i64 * (((unsigned __int8)v5 ^ 0xF7) & 0xA8));
                goto LABEL_1041;
            case 0x86:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x508) + 0x238i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x18) + 8i64 * (unsigned __int8)__ROL4__(v5, 5), &v34, v5, v4);
                v34 = ~v34;
                goto LABEL_1041;
            case 0x87:
                Calls::FastCall(v4 + 0x330, &v34, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x260) + 0xF0i64);
                v34 += FuckEnc::CacheRead<_DWORD>(v10 + 0x30);
                goto LABEL_1041;
            case 0x88:
                v15 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0) * v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0xB8) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x5D8) << 0x1B));
                goto LABEL_1040;
            case 0x89:
                Calls::FastCall(v4 + 0x6B8, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x10) + 8i64 * ((unsigned __int8)(0x56 * FuckEnc::CacheRead<_BYTE>(v4 + 0x1C8)) & 0xEF)) + 0x278i64));
                goto LABEL_1041;
            case 0x8A:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x248);
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8) + 0x370B9B95;
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x678) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x208) & 0xDF)) + 0x498i64);
                goto LABEL_1040;
            case 0x8B:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x368) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0) ^ 0x22) & 0x66)) + 0x1C0i64) + 0x3E8i64) + 8i64 * (unsigned __int8)(2 * v5)) + 0x6A0i64) + 4i64 * (v5 & 0x19)) ^ v11;
                goto LABEL_1041;
            case 0x8C:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x670) + 0x1C8i64) ^ v11;
                v34 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 0x4B8i64) + 0x588i64) ^ v34);
                goto LABEL_1041;
            case 0x8D:
                v34 = 0x44EDE3FD * FuckEnc::CacheRead<_DWORD>(v4 + 0x248) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x610) + 0x5A0i64) + v11;
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x720);
                goto LABEL_1041;
            case 0x8E:
                v34 = __ROR4__(v11, v5);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x68) & 0xFFFFFFEB;
                v34 = (v34 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x310) * v5)) - 0x4EC31131;
                goto LABEL_1041;
            case 0x8F:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x138) + 0x508i64) + 0x7A0i64) + 0x440i64);
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x510) + 0x558i64) + 4i64 * (unsigned __int8)(0x3A * v5)));
                goto LABEL_1041;
            case 0x90:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0) ^ v11;
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 0x3E0i64) + 0x3E8i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1C)) + 0x118i64) + 0x390i64);
                goto LABEL_1041;
            case 0x91:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x308) + 0x238i64);
                v34 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v10 + 0x248);
                v34 = (v5 ^ __ROR4__(v34, FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0))) - 0x721DD0FF;
                goto LABEL_1041;
            case 0x92:
                v15 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x2F8) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x598) + 8i64) + 0x600i64) + 0x5F8i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0xD)) + 0x408i64);
                goto LABEL_1040;
            case 0x93:
                v34 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x498));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x308) + 0x150i64) + 0x308i64);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x1C8) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x490);
                goto LABEL_1041;
            case 0x94:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x780);
                Calls::FastCall(v4 + 0x6A8, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x280) + 0x780i64));
                goto LABEL_1041;
            case 0x95:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x670);
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x148) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x720) & 0x14)) + 0x78i64) + 0x638i64) + 0x410i64) + 4i64 * (unsigned __int8)(0x75 * v5));
                goto LABEL_1041;
            case 0x96:
                Calls::FastCall(v4 + 0x50, &v34, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x600));
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4C8) + 0x200i64));
                goto LABEL_1041;
            case 0x97:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x378) + 0x4B8i64) + 0x750i64) + 0x3A8i64);
                v17 = v10;
            LABEL_72:
                Calls::FastCall(v4 + 0x2E0, &v34, v5, v17);
                goto LABEL_1041;
            case 0x98:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x260) + 0x378i64);
                v34 = v11 ^ FuckEnc::CacheRead<_DWORD>(v10 + 0x5A0) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x290) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x440) & 0x8A)) + 0x2F8i64);
                goto LABEL_1041;
            case 0x99:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x200);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x10) + 8i64 * ((unsigned __int8)v5 ^ 0xCEu)) + 0x768i64) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x200) | 0x1C);
                goto LABEL_1041;
            case 0x9A:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B8) + 0x780i64) + 0x260i64);
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x368) + 8i64 * ((unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x510) + 0x458i64), 1) & 0xD6)) + 0x720i64) ^ v11;
                goto LABEL_1041;
            case 0x9B:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x1B0) - 0x45F13763;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x230);
                v34 += FuckEnc::CacheRead<_DWORD>(v10 + 0x728);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x348) - 0x6C84449B;
                goto LABEL_1041;
            case 0x9C:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 0x230i64) + 0x228i64) + 0x798i64) + 0x238i64);
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x220) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1D)) + 0x178i64) ^ v11;
                goto LABEL_1041;
            case 0x9D:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x698) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x308) + 0xE0i64) + 0x238i64);
                v15 = v34 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x78) + 0x100i64);
                goto LABEL_1040;
            case 0x9E:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x768);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x278);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x2A8) + 8i64 * (v5 & 0x56), &v34, v5, v4);
                goto LABEL_1041;
            case 0x9F:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0) & 0xA4)) + 0x138i64);
                v15 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 0x550) + 0x37D1FF41 * ~FuckEnc::CacheRead<_DWORD>(v4 + 0x80));
                goto LABEL_1040;
            case 0xA0:
                v34 = v11 + v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x600);
                Calls::FastCall(v4 + 0x580, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x520) + 8i64 * (v5 & 0x6A)));
                goto LABEL_1041;
            case 0xA1:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xF0) + 0x348i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x750);
                v34 = ~__ROR4__(v34, ~FuckEnc::CacheRead<_BYTE>(v10 + 0x5A0));
                goto LABEL_1041;
            case 0xA2:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 8i64 * (unsigned __int8)(0xD1 * v5)) + 0x408i64) ^ v11;
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x6D0) << 0x1E;
                goto LABEL_1041;
            case 0xA3:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x78) + 0x780i64) + 0x230i64);
                v34 = v11 ^ (v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x290) + 8i64 * ((unsigned __int8)(0x48 * v5) & 0xCD)) + 0x208i64));
                goto LABEL_1041;
            case 0xA4:
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x1B0));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x130);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1C0) + 0x4C0i64) + 0x6A0i64) + 4i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v10 + 0x348) ^ 1) & 0x6B));
                goto LABEL_1041;
            case 0xA5:
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0));
                v34 = __ROL4__(v34 - FuckEnc::CacheRead<_DWORD>(v4 + 0x80), 0x69);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x238);
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x2D8) + 4i64 * ((unsigned __int8)v5 ^ 0xEAu));
                goto LABEL_1041;
            case 0xA6:
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x1B0)) - 0x7D359001;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x228);
                v34 += FuckEnc::CacheRead<_DWORD>(v10 + 0x6D0) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x720) - 0x3CFE76BC);
                goto LABEL_1041;
            case 0xA7:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x600) + 0x298i64);
                v34 = v11 ^ FuckEnc::CacheRead<_DWORD>(v10 + 0x1C8) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x758) + 0x200i64);
                v15 = FuckEnc::CacheRead<_DWORD>(v4 + 0x30) + v34;
                goto LABEL_1040;
            case 0xA8:
                v34 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x728) - 0x2F000B0D);
                v34 -= 0x3CEECE94 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x368) + 8i64 * ((unsigned __int8)(0x5D * FuckEnc::CacheRead<_BYTE>(v4 + 0x2F8)) & 0xEB)) + 0x720i64);
                goto LABEL_1041;
            case 0xA9:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x6D0);
                v34 ^= 0x4E702553 * ((FuckEnc::CacheRead<_DWORD>(v4 + 0x720) * ~FuckEnc::CacheRead<_DWORD>(v4 + 0x498)) | 0x12);
                goto LABEL_1041;
            case 0xAA:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 0x228i64) + 8i64 * (((unsigned __int8)v5 ^ 0x11) & 0x93)) + 0x348i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x208) - 0x28AEEE02);
                goto LABEL_1041;
            case 0xAB:
                v34 = (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x6D0)) ^ 0xE7579754;
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x138) + 0xD8i64) + 8i64 * ((unsigned __int8)(0x9E * v5) & 0x92)) + 0x440i64) + 1;
                goto LABEL_1041;
            case 0xAC:
                v34 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 8i64 * (((unsigned __int8)v5 ^ 0xCC) & 0xFB)) + 0x728i64) ^ v11);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x238) + 0x6E8i64);
                goto LABEL_1041;
            case 0xAD:
                v34 = v11 + 0x55F6CE6F;
                Calls::FastCall(v4 + 0x2F0, &v34, v5, v4);
                v15 = v34 + 1 + FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0);
                goto LABEL_1040;
            case 0xAE:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x100) ^ v11;
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x78) + 0x3E8i64) + 8i64 * ((unsigned __int8)v5 & 0x8B)) + 0xD8i64) + 8i64 * (v5 & 2)) + 0x80i64));
                goto LABEL_1041;
            case 0xAF:
                v34 = v11 + 0x5A2E00BF;
                v34 = v11 + 0x5A2E00BF - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B8) + 0x278i64) + 0x4D8i64);
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0x178) - v5;
                goto LABEL_1041;
            case 0xB0:
                v34 = (v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x440)) ^ 0x60C30131;
                v15 = v34 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0xB8) << 0x1B) ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x720);
                goto LABEL_1040;
            case 0xB1:
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x2F8));
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0xB8);
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_DWORD>(v4 + 0x720));
                v34 ^= 0x10 * FuckEnc::CacheRead<_DWORD>(v4 + 0x498);
                goto LABEL_1041;
            case 0xB2:
                v34 = __ROR4__(v11, v5);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x228);
                Calls::FastCall(v4 + 0x580, &v34, v5, v10);
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x348);
                goto LABEL_1041;
            case 0xB3:
                v34 = ~(_DWORD)v11;
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x610) + 0x248i64) ^ ~(_DWORD)v11;
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0x310);
                v15 = FuckEnc::CacheRead<_DWORD>(v4 + 0x5D8) ^ v34;
                goto LABEL_1040;
            case 0xB4:
                v34 = __ROR4__(v5 ^ v11, v5);
                Calls::FastCall(v4 + 0x560, &v34, v5, v4);
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0x408);
                goto LABEL_1041;
            case 0xB5:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x200) - v5;
                Calls::FastCall(v4 + 0x630, &v34, v5, v4);
                goto LABEL_1041;
            case 0xB6:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x348) ^ v11;
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x208);
                v34 = __ROR4__(v34 - 0x2FCD865C * FuckEnc::CacheRead<_DWORD>(v4 + 0x390), 0xFA);
                goto LABEL_1041;
            case 0xB7:
                v34 = __ROR4__(v11 - 0x3CFE76BC, 0xE1);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x668) + 8i64 * ((7 * FuckEnc::CacheRead<_BYTE>(v4 + 0x350)) & 0x1C)) + 0x768i64);
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x248);
                goto LABEL_1041;
            case 0xB8:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x208) ^ v11;
                v34 += 0x6BF1F083 * FuckEnc::CacheRead<_DWORD>(v4 + 0x350);
                v34 -= 2 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x750) + 0x100i64);
                goto LABEL_1041;
            case 0xB9:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D8) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x6D0), 5)) + 0x638i64) + 0x1E8i64, &v34, v5, v4);
                goto LABEL_1041;
            case 0xBA:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x508) + 0x508i64) + 0x1C0i64) + 0x228i64);
                v15 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 0x588) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x610) + 0x440i64));
                goto LABEL_1040;
            case 0xBB:
                v34 = __ROR4__(v11, 0x97);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 8);
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_DWORD>(v10 + 0x6E8));
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x7A0) + 0x4C8i64) + 0x4D8i64);
                goto LABEL_1041;
            case 0xBC:
                v34 = v11 + 0x3CEECE15;
                v34 = v11 + 0x3CEECE15 + FuckEnc::CacheRead<_DWORD>(v4 + 0x6E8);
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0) + FuckEnc::CacheRead<_DWORD>(v4 + 0xC0) * v5;
                goto LABEL_1041;
            case 0xBD:
                v34 = v11 ^ (0x10 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x390) & 0xFFFBC000));
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x658) + 0x758i64) + 0xC0i64);
                goto LABEL_1040;
            case 0xBE:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x298);
                v34 = ~(FuckEnc::CacheRead<_DWORD>(v10 + 0x440) ^ v11);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x220) + 8i64 * (((unsigned __int8)v5 ^ 0xBB) & 0xCC)) + 0x450i64) + 0x5A0i64);
                goto LABEL_1041;
            case 0xBF:
                v34 = __ROR4__(v11, 0x26);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4B8);
                Calls::FastCall(v4 + 0x2E0, &v34, v5, v10);
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0x1C8);
                goto LABEL_1041;
            case 0xC0:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x68);
                v34 = v34 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 8i64 * (unsigned __int8)(0xBD * v5)) + 0x1C0i64) + 0x390i64) ^ 0x2EC30131) - v5;
                goto LABEL_1041;
            case 0xC1:
                v34 = v11 ^ 0x424D1D3A;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x78) + 0x668i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x1D)) + 0x278i64) + 0x228i64);
                v15 = (v11 ^ 0x424D1D3A) + FuckEnc::CacheRead<_DWORD>(v10 + 0x2C0);
                goto LABEL_1040;
            case 0xC2:
                v34 = v11 + 0x3CEECE96;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x658) + 0x10i64) + 8i64 * (unsigned __int8)(0x1C * v5)) + 0x3A8i64) + 0x308i64);
                v34 = FuckEnc::CacheRead<_DWORD>(v10 + 0x178) ^ (v11 + 0x3CEECE96);
                goto LABEL_1041;
            case 0xC3:
                v34 = v11 ^ 0xC3D0FF1E;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6E0);
                v34 = (v11 ^ 0xC3D0FF1E) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x670) + 0x4D8i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x38) + 4i64 * (unsigned __int8)__ROR4__(v5, 0x17));
                goto LABEL_1041;
            case 0xC4:
                v34 = v11 + ~FuckEnc::CacheRead<_DWORD>(v4 + 0x100) * ((FuckEnc::CacheRead<_DWORD>(v4 + 0x5D8) >> 0xB) + FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0) + 1);
                goto LABEL_1041;
            case 0xC5:
                Calls::FastCall(v4 + 0x590, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8) + 8i64 * ((unsigned __int8)v5 & 0xEE)) + 0x668i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1F)));
                v34 = ~v34;
                goto LABEL_1041;
            case 0xC6:
                v34 = v11 - v5;
                Calls::FastCall(v4 + 0x4A8, &v34, v5, v4);
                v15 = v34 + 1 + FuckEnc::CacheRead<_DWORD>(v4 + 0x350);
                goto LABEL_1040;
            case 0xC7:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x608) + 0x4D8i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x670);
                Calls::FastCall(v4 + 0x3B8, &v34, v5, v10);
                goto LABEL_1041;
            case 0xC8:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x6D0);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4C0);
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_BYTE>(v10 + 0x458) ^ ((FuckEnc::CacheRead<_BYTE>(v4 + 0x550) * v5) | 0x1A));
                goto LABEL_1041;
            case 0xC9:
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x600) + 0x1B0i64)) + 0x751989CD;
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x720);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x68);
                goto LABEL_1041;
            case 0xCA:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x440);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x5D8) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x260) + 0x348i64), 0x14));
                goto LABEL_1041;
            case 0xCB:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x450);
                v34 = FuckEnc::CacheRead<_DWORD>(v10 + 0xB8) ^ v11;
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 0x230i64) + 0x410i64) + 4i64 * ((unsigned __int8)(0x7C * v5) & 0xAE));
                goto LABEL_1041;
            case 0xCC:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x208) ^ v11;
                Calls::FastCall(v4 + 0x40, &v34, v5, v4);
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x130) + 0x5D8i64);
                goto LABEL_1041;
            case 0xCD:
                v34 = __ROL4__(v11, 0x4D * FuckEnc::CacheRead<_BYTE>(v4 + 0x248));
                Calls::FastCall(v4 + 0x3B8, &v34, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x260));
                v34 -= 0x3DC31131;
                goto LABEL_1041;
            case 0xCE:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x1C8);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 0x3E0i64);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x310);
                v15 = FuckEnc::CacheRead<_DWORD>(v4 + 0x348) ^ v34;
                goto LABEL_1040;
            case 0xCF:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x200);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3C8) + 0x678i64) + 8i64 * (((unsigned __int8)v5 ^ 0xFD) & 0xE2)) + 0xE0i64) + 0x378i64) + 0x440i64);
                goto LABEL_1041;
            case 0xD0:
                v34 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x80) ^ (~FuckEnc::CacheRead<_DWORD>(v4 + 0x698) << 0x1D));
                v34 = __ROL4__(v34, ~FuckEnc::CacheRead<_BYTE>(v4 + 0x80));
                goto LABEL_1041;
            case 0xD1:
                v34 = __ROR4__(v11, 0x1D);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x118);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0xB8);
                v34 = ~(v34 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x498));
                goto LABEL_1041;
            case 0xD2:
                v34 = v5 ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F8) + 8i64 * (((unsigned __int8)v5 ^ 0xD) & 0x8F)) + 0x280i64);
                Calls::FastCall(v4 + 0x300, &v34, v5, v10);
                goto LABEL_1041;
            case 0xD3:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x10) + 8i64 * (((unsigned __int8)v5 ^ 0x12) & 0x77)) + 0x498i64);
                v34 -= v5 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8) + 0x100i64) >> 0x1F);
                goto LABEL_1041;
            case 0xD4:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x610) + 0x410i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 0xB)) ^ v11;
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x220) + 8i64 * ((unsigned __int8)__ROR4__(v5, 7) & 0xDB)) + 0x698i64);
                goto LABEL_1041;
            case 0xD5:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x698);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4C8);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x2C8) + 4i64 * ((unsigned __int8)v5 & 0xC5)) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x6D0) << 0x13);
                goto LABEL_1041;
            case 0xD6:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x1C8);
                v34 += ~FuckEnc::CacheRead<_DWORD>(v4 + 0x350);
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x348);
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x720);
                goto LABEL_1041;
            case 0xD7:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x458);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3C8) + 0x158i64) + 8i64 * (v5 & 0x2C)) + 0x798i64) + 0x150i64);
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(v10 + 0xB8);
                goto LABEL_1040;
            case 0xD8:
                v34 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x200) - 0x3CFE76BC) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x178) ^ v5);
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(v4 + 0x200);
                goto LABEL_1040;
            case 0xD9:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3C8) + 0x68i64);
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_BYTE>(v4 + 0x4D8) ^ (FuckEnc::CacheRead<_BYTE>(v4 + 0x248) + 0x31));
                goto LABEL_1041;
            case 0xDA:
                v15 = v5 ^ v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x380) + 0x390i64) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 0x5E0i64) + 0x698C5F45));
                goto LABEL_1040;
            case 0xDB:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x608) + 0x230i64) + 0x6D0i64) ^ v11 ^ 0x8AF5AD7B;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x510);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x3C8) + 0x208i64);
                goto LABEL_1041;
            case 0xDC:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 8i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x620), 4) & 0x29)) + 0x378i64) + 0xF0i64) + 0x668i64) + 8i64 * ((unsigned __int8)v5 & 0xA8)) + 0x4D8i64);
                goto LABEL_1041;
            case 0xDD:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x380);
                v34 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 0x310) * (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x728)));
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x6E8);
                goto LABEL_1041;
            case 0xDE:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x620);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x458);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x280);
                v34 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x768);
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_DWORD>(v4 + 0x620));
                goto LABEL_1041;
            case 0xDF:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x308) + 0x428i64, &v34, v5, v4);
                v15 = v34 + 1 + FuckEnc::CacheRead<_DWORD>(v4 + 0x350);
                goto LABEL_1040;
            case 0xE0:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x490) ^ v11;
                Calls::FastCall(v4 + 0x40, &v34, v5, v4);
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0x390);
                goto LABEL_1041;
            case 0xE1:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x750);
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x728);
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_DWORD>(v4 + 0x348));
                v34 += 1 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x390) ^ 0x6FD1FF41);
                goto LABEL_1041;
            case 0xE2:
                v34 = ~(_DWORD)v11;
                v34 = ~(~(_DWORD)v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x78);
                v34 ^= ~FuckEnc::CacheRead<_DWORD>(v10 + 0x2F8);
                goto LABEL_1041;
            case 0xE3:
                Calls::FastCall(v4 + 0x218, &v34, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x118);
                v34 += FuckEnc::CacheRead<_DWORD>(v10 + 0x1B0);
                goto LABEL_1041;
            case 0xE4:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8);
                v34 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v10 + 0x698) ^ ((FuckEnc::CacheRead<_BYTE>(v4 + 0x728) | 0xA) + FuckEnc::CacheRead<_BYTE>(v4 + 0x620) * v5));
                goto LABEL_1041;
            case 0xE5:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x5D8) ^ v11;
                v16 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4C0);
            LABEL_24:
                Calls::FastCall(v4 + 0x738, &v34, v5, v16);
                goto LABEL_1041;
            case 0xE6:
                v34 = __ROL4__(v11 ^ 0xB5F5969B, 0xD1);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F8) + 8i64 * (~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x5D8) & 4)) + 0x620i64) >> 4;
                goto LABEL_1041;
            case 0xE7:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 0x10i64) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x200) ^ 0xFDu)) + 0x508i64) + 0x238i64);
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 0x348));
                goto LABEL_1041;
            case 0xE8:
                v34 = ~(_DWORD)v11;
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4C8) + 0x620i64) ^ ~(_DWORD)v11;
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x450) + 0x2F8i64) ^ 0x85C31131;
                goto LABEL_1041;
            case 0xE9:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x368) + 8i64 * ((unsigned __int8)v5 & 0x90)) + 0x370i64) + 0xE0i64);
                v15 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x698) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x420) + 4i64 * ((unsigned __int8)v5 & 0xE7)));
                goto LABEL_1040;
            case 0xEA:
                v13 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xF0) + 0x2F8i64) & 0x92)) + 0x220i64) + 8i64 * (v5 & 0x49));
                v14 = 0xE * v5;
            LABEL_12:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v13 + 0x190) + 4i64 * v14);
                goto LABEL_1041;
            case 0xEB:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x68) ^ v11;
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x130);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x2A0) + 8i64 * ((unsigned __int8)v5 & 0xEC)) + 0xC0i64);
                goto LABEL_1041;
            case 0xEC:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x1B0) ^ v11;
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x7A0) + 0x1B0i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D8) + 8i64 * ((unsigned __int8)v5 & 0x96)) + 0x200i64);
                goto LABEL_1041;
            case 0xED:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 8i64 * ((unsigned __int8)(0x82 * FuckEnc::CacheRead<_BYTE>(v4 + 0x4D8)) & 0xF7)) + 0x238i64);
                Calls::FastCall(v4 + 0x198, &v34, v5, v10);
                goto LABEL_1041;
            case 0xEE:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x610) + 0x4B8i64) + 0x80i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x150);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x410) + 4i64 * ((0x2B * (_BYTE)v5) & 0x7C));
                goto LABEL_1041;
            case 0xEF:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 0x498i64) ^ v11;
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0x1C8);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x520) + 8i64 * (v5 & 0x69)) + 0x5D8i64);
                goto LABEL_1041;
            case 0xF0:
                Calls::FastCall(v4 + 0x648, &v34, v5, v4);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 8i64 * ((unsigned __int8)v5 & 0x99)) + 0x5A0i64);
                goto LABEL_1041;
            case 0xF1:
                v34 = __ROL4__(v11 + v5, 0x44);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x278) + 0x610i64) + 0x798i64) + 0x298i64) + 0x6D0i64);
                goto LABEL_1041;
            case 0xF2:
                Calls::FastCall(v4 + 0x428, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x798) + 0x678i64) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x458) & 0x25)));
                goto LABEL_1041;
            case 0xF3:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x2F8) - 0x63D983FF;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 0x610i64) + 0x230i64);
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x130) + 0x30i64));
                goto LABEL_1041;
            case 0xF4:
                v15 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x620) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0xB8) + 0x27C30131) ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x588));
                goto LABEL_1040;
            case 0xF5:
                v34 = (FuckEnc::CacheRead<_DWORD>(v4 + 0x588) ^ v11) + 0x5A0F1E80;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x750);
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0x5A0) + FuckEnc::CacheRead<_DWORD>(v10 + 0x728);
                goto LABEL_1041;
            case 0xF6:
                Calls::FastCall(v4 + 0x40, &v34, v5, v4);
                v15 = v34 + 1 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x80) >> 0xD);
                goto LABEL_1040;
            case 0xF7:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x658) + 0x220i64) + 8i64 * ((unsigned __int8)v5 & 0x8C)) + 0x6E0i64) + 0x638i64) + 0x1C0i64);
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x748) + 0x620i64) ^ v11;
                goto LABEL_1041;
            case 0xF8:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x208);
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x130) + 0x740i64) + 8i64 * (unsigned __int8)(0xD * v5)) + 0x2A0i64) + 8i64 * (v5 & 0x1E)) + 0x178i64);
                goto LABEL_1040;
            case 0xF9:
                Calls::FastCall(v4 + 0x218, &v34, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x280);
                v34 = __ROR4__(v34 - FuckEnc::CacheRead<_DWORD>(v10 + 0x440), v5);
                goto LABEL_1041;
            case 0xFA:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x80) ^ v11;
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x148) + 8i64 * ((FuckEnc::CacheRead<_BYTE>(v4 + 0x348) * (_BYTE)v5) & 0x24)) + 0x5E0i64);
                goto LABEL_1040;
            case 0xFB:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 0x410i64) + 4i64 * (unsigned __int8)(0x10 * v5)) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D8) + 8i64 * (v5 & 0x12)) + 0x610i64);
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(v10 + 0x5E0);
                goto LABEL_1040;
            case 0xFC:
                v18 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x750) + 8i64) + 0x48i64) + 4i64 * (v5 & 0x4D));
                v34 = v18;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x598);
                v19 = __ROL4__(v5, 0x14);
                goto LABEL_259;
            case 0xFD:
                v34 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x508) + 0x2D8i64) + 4i64 * ((unsigned __int8)v5 & 0xD0)) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 0x6A0i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 0x19)));
                goto LABEL_1041;
            case 0xFE:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x1B0) - 0x3FAB018A;
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F8) + 8i64 * (unsigned __int8)__ROR4__(v5, 8)) + 0x650i64) + 0x38i64) + 4i64 * (~(_BYTE)v5 & 0x50));
                goto LABEL_1041;
            case 0xFF:
                v34 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x720));
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x610) + 0x538i64) + 8i64 * ((unsigned __int8)v5 & 0xDB), &v34, v5, v4);
                goto LABEL_1041;
            case 0x100:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x658) + 0x658i64) + 0x238i64) + 0x380i64);
                Calls::FastCall(v4 + 0xA0, &v34, v5, v10);
                goto LABEL_1041;
            case 0x101:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 8i64 * (v5 & 1)) + 0x368i64) + 8i64 * (unsigned __int8)(0x88 * v5)) + 0x280i64) + 0x378i64);
                v34 = FuckEnc::CacheRead<_DWORD>(v10 + 0x768) ^ v11;
                goto LABEL_1041;
            case 0x102:
                v34 = __ROL4__(v11, 0x44);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0);
                v34 ^= 0xD1FF418B * FuckEnc::CacheRead<_DWORD>(v10 + 0x350) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x350) ^ 0xC3018944);
                goto LABEL_1041;
            case 0x103:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x550);
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_DWORD>(v4 + 0x80));
                Calls::FastCall(v4 + 0x630, &v34, v5, v4);
                goto LABEL_1041;
            case 0x104:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x2A8) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x138) + 0x420i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 1)), 2), &v34, v5, v4);
                goto LABEL_1041;
            case 0x105:
                v34 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x100) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x600) + 0x298i64) + 0x390i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x238);
                v34 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x698);
                goto LABEL_1041;
            case 0x106:
                v34 = v11 ^ (0xBF7EA42B * (FuckEnc::CacheRead<_DWORD>(v4 + 0x178) >> 0xE));
                v15 = (v34 - 0x25EDEEE * FuckEnc::CacheRead<_DWORD>(v4 + 0x310)) ^ 0x2A1441DF;
                goto LABEL_1040;
            case 0x107:
                v15 = v11 + 0x7167B85C * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x130) + 0x380i64) + 0x6D0i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 4i64 * (unsigned __int8)(0xF1 * FuckEnc::CacheRead<_BYTE>(v4 + 0x208))));
                goto LABEL_1040;
            case 0x108:
                v20 = __ROL4__(v5, 0x10) & 0x6D;
                v21 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x670) + 0xE8i64) + 0x158i64) + 8i64 * (v5 & 0x3E)) + 0x4C0i64) + 0x600i64);
                goto LABEL_272;
            case 0x109:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 8i64 * (unsigned __int8)(0xAE * v5)) + 0x750i64) + 0x238i64) + 0x598i64) + 0x380i64) + 0x698i64);
                goto LABEL_1041;
            case 0x10A:
                v22 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4C0) + 0xD8i64) + 8i64 * (unsigned __int8)(0xC9 * v5));
                v23 = 0xAF21CC74 * FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0);
                goto LABEL_275;
            case 0x10B:
                v34 = v5 ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x138) + 0x138i64);
                v34 = FuckEnc::CacheRead<_DWORD>(v10 + 0x698) ^ v5 ^ v11;
                v34 = __ROR4__(v34 - FuckEnc::CacheRead<_DWORD>(v4 + 0x390), 0xDC);
                goto LABEL_1041;
            case 0x10C:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x350);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x650) + 0x4C8i64) + 0x68i64) ^ (0x3D2BEFD1 * FuckEnc::CacheRead<_DWORD>(v4 + 0x200));
                goto LABEL_1041;
            case 0x10D:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x138);
                Calls::FastCall(v10 + 0x448, &v34, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x78));
                v34 = __ROL4__(v34, 0x70);
                goto LABEL_1041;
            case 0x10E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x608);
                v34 = v11 - (FuckEnc::CacheRead<_DWORD>(v10 + 0x720) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 0x728i64) + (FuckEnc::CacheRead<_DWORD>(v4 + 0x6E8) ^ 0xC086C936)));
                goto LABEL_1041;
            case 0x10F:
                v34 = (unsigned int)0xF3D4E64 + v11;
                v15 = v34 + (((FuckEnc::CacheRead<_DWORD>(v4 + 0x588) >> 0x11) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x768) | 1)) ^ 0x2AB3EF9A);
                goto LABEL_1040;
            case 0x110:
                v34 = v11 + ((~(FuckEnc::CacheRead<_DWORD>(v4 + 0x6D0) ^ v5) + 2 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE0) + 0x310i64)) << 0x16);
                goto LABEL_1041;
            case 0x111:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x208) ^ v11 ^ 0x9EFCE788;
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x118) + 0xE8i64) + 0x158i64) + 8i64 * (unsigned __int8)(0x16 * v5)) + 0x100i64);
                goto LABEL_1041;
            case 0x112:
                v34 = v11 + 0x2A172F01;
                v34 = (v11 + 0x2A172F01) ^ ((FuckEnc::CacheRead<_DWORD>(v4 + 0x178) ^ 0xC31131E1) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x238) + 0x4C8i64) + 0x698i64));
                goto LABEL_1041;
            case 0x113:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x78);
                v15 = v11 ^ FuckEnc::CacheRead<_DWORD>(v10 + 0x100) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x1B0) + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x230) + 0x620i64));
                goto LABEL_1040;
            case 0x114:
                v34 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x698) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x10) + 8i64 * (unsigned __int8)(0x42 * FuckEnc::CacheRead<_BYTE>(v4 + 0x2F8))) + 0x6E8i64));
                goto LABEL_1041;
            case 0x115:
                Calls::FastCall(v4 + 0x2E0, &v34, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x298));
                v34 ^= 0x25772F5Bu;
                v24 = v34 + 1;
                goto LABEL_1039;
            case 0x116:
                v34 = v11 ^ 0x9E2CC327;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 0x4C0i64);
                Calls::FastCall(v10 + 0x418, &v34, v5, v4);
                goto LABEL_1041;
            case 0x117:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4F0) + 0x780i64) + 0x278i64);
                Calls::FastCall(v4 + 0x708, &v34, v5, v10);
                goto LABEL_1041;
            case 0x118:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x380) + 0x768i64) ^ v11;
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x530) + 8i64 * ((unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x498), 0x1B) & 0xB1)) + 0x2F8i64);
                goto LABEL_1041;
            case 0x119:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4C0);
                v15 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x780) + 0x208i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE0) + 0xE8i64) + 8i64) + 0x2C0i64));
                goto LABEL_1040;
            case 0x11A:
                v34 = v11 + 0x3CFECE5E;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4C8) + 0x6C0i64) + 8i64 * (unsigned __int8)(0xB2 * v5), &v34, v5, v4);
                goto LABEL_1041;
            case 0x11B:
                Calls::FastCall(v4 + 0x270, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B8) + 0x608i64));
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0);
                goto LABEL_1041;
            case 0x11C:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x290) + 8i64 * ((unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE8) + 0x208i64) ^ 0xE402AAE5, 0x1D) & 0x88)) + 0x48i64) + 4i64 * (unsigned __int8)(0x9A * v5));
                goto LABEL_1041;
            case 0x11D:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE8) + 0x158i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0xB)) + 0x678i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 7)) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x12)) + 0x390i64);
                goto LABEL_1041;
            case 0x11E:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x458);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x528);
                Calls::FastCall(v4 + 0x428, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x650) + 0xE8i64));
                goto LABEL_1041;
            case 0x11F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x158) + 8i64 * (unsigned __int8)__ROL4__(v5, 5)) + 0x450i64) + 0x258i64, &v34, v5, v4);
                goto LABEL_1041;
            case 0x120:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xE8);
                v34 = __ROR4__(v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x408) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x798) + 0x348i64), 0xE0);
                v15 = FuckEnc::CacheRead<_DWORD>(v4 + 0x768) ^ v34;
                goto LABEL_1040;
            case 0x121:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x248) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x280) + 0xE0i64) + 0x4C8i64) + 0xE8i64);
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(v10 + 0x698);
                goto LABEL_1040;
            case 0x122:
                v34 = ~(_DWORD)v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x228) + 0x598i64);
                v34 = (~(_DWORD)v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x3D8) + 8i64 * (((unsigned __int8)v5 ^ 0x40) & 0xC4)) + 0x350i64)) ^ 0x282B21DE;
                goto LABEL_1041;
            case 0x123:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x100);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x1B0) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x520) + 8i64 * ((0xF4 * (_BYTE)v5) & 0x49)) + 0x408i64);
                goto LABEL_1041;
            case 0x124:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x6E8);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3C0) + 0x2F8i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 0x4C8i64) + 0x768i64);
                goto LABEL_1041;
            case 0x125:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x278) + 0x530i64) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x278) + 0x5E0i64) - 0x37) & 0x5D)) + 0x768i64);
                goto LABEL_1041;
            case 0x126:
                v34 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x30));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x238) + 0x750i64);
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0x498) + FuckEnc::CacheRead<_DWORD>(v10 + 0x498) - 0x1A3F9D51;
                goto LABEL_1041;
            case 0x127:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x610) + 0x3C8i64) + 0x670i64);
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x698) * (0x2E00BE5A - FuckEnc::CacheRead<_DWORD>(v4 + 0x348));
                goto LABEL_1041;
            case 0x128:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x698) ^ v11;
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_DWORD>(v4 + 0x6D0));
                Calls::FastCall(v4 + 0x648, &v34, v5, v4);
                goto LABEL_1041;
            case 0x129:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x260);
                v34 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x6A0) + 4i64 * (unsigned __int8)(0x5C * (FuckEnc::CacheRead<_BYTE>(v4 + 0x80) ^ v5 ^ 0x94))));
                goto LABEL_1041;
            case 0x12A:
                v34 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4F0) + 0x308i64) + 0x118i64) + 0x350i64) ^ v11) - 0x7E4A3FC6;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x670);
                v15 = FuckEnc::CacheRead<_DWORD>(v10 + 0x498) + v34;
                goto LABEL_1040;
            case 0x12B:
                v34 = __ROR4__(v11, 0x3D) ^ 0x81EF1D71;
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0) << 0x13;
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6E0) + 0x6E8i64);
                goto LABEL_1041;
            case 0x12C:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x408) ^ v11;
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x80);
                v15 = v34 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x568) + 4i64 * (unsigned __int8)(0x2E * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x750) + 0x348i64)));
                goto LABEL_1040;
            case 0x12D:
                v34 = v11 - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4F0);
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x3D8) + 8i64 * ((unsigned __int8)v5 ^ 0x9Fu)) + 0x30i64) ^ (v11 - v5);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x698);
                goto LABEL_1041;
            case 0x12E:
                v34 = v11 ^ (0xAB0B03AA * FuckEnc::CacheRead<_DWORD>(v4 + 0x490));
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0x588) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x498) | 0x13);
                goto LABEL_1041;
            case 0x12F:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x450) + 0x6E8i64);
                v15 = __ROL4__(v34 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x278) + 0x4D8i64) << 0x19), 0x10);
                goto LABEL_1040;
            case 0x130:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 0x748i64);
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x568) + 4i64 * ((unsigned __int8)v5 ^ 8u));
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_BYTE>(v4 + 0x5A0) | 4) + 0xB3CEECF;
                goto LABEL_1041;
            case 0x131:
                v22 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x748) + 0x4B0i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 1));
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 0x768) - 0x414B8099;
            LABEL_275:
                v15 = v11 ^ FuckEnc::CacheRead<_DWORD>(v22 + 0x5A0) ^ v23;
                goto LABEL_1040;
            case 0x132:
                v34 = v11 + v5;
                v34 = v11 + v5 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xF0) + 0x520i64) + 8i64 * (unsigned __int8)(0xF2 * v5)) + 0x748i64) + 0x280i64) + 0x6E8i64);
                goto LABEL_1041;
            case 0x133:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x278);
                v34 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x420) + 4i64 * (unsigned __int8)(0x38 * v5)) & 0xFFFFFFF5;
                goto LABEL_1041;
            case 0x134:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x118) + 8i64) + 0x658i64) + 0x6C0i64) + 8i64 * (((unsigned __int8)v5 ^ 0xAE) & 0xD7), &v34, v5, v4);
                goto LABEL_1041;
            case 0x135:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B8) + 0x308i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x2B0) + 8i64 * (v5 & 0x76), &v34, v5, v4);
                goto LABEL_1041;
            case 0x136:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x260) + 0x3C8i64) + 0x4D8i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x228) + 0x608i64) + 0x2F8i64);
                goto LABEL_1041;
            case 0x137:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 0x650i64) + 0x6D0i64);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 0x190i64) + 4i64 * ((unsigned __int8)v5 & 0xE5));
                goto LABEL_1041;
            case 0x138:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x280) + 0x4C8i64);
                Calls::FastCall(v4 + 0x708, &v34, v5, FuckEnc::CacheRead<_QWORD>(v10 + 0x510));
                goto LABEL_1041;
            case 0x139:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x450) + 0x740i64) + 8i64 * ((unsigned __int8)(0xD1 * v5) & 0xBF)) + 0x6E0i64) + 0x4C8i64) + 0x5F8i64) + 8i64 * ((unsigned __int8)__ROR4__(v5, 0x1A) & 0xDD)) + 0x440i64) ^ v11;
                goto LABEL_1041;
            case 0x13A:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x68);
                v34 = v34 - FuckEnc::CacheRead<_DWORD>(v4 + 0x178) - 0x3406EFCB;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x528);
                v34 += FuckEnc::CacheRead<_DWORD>(v10 + 0x728) * v5;
                goto LABEL_1041;
            case 0x13B:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE0) + 0xF0i64) + 0x598i64) + 0x118i64) + 0xD0i64, &v34, v5, v4);
                goto LABEL_1041;
            case 0x13C:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x290) + 8i64 * ((unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x248) + 0x6FC31131, 0x16) & 0x9C)) + 0x78i64) + 0x3A8i64) + 0x670i64);
                v34 = FuckEnc::CacheRead<_DWORD>(v10 + 0x348) ^ v11 ^ 0xC3113117;
                goto LABEL_1041;
            case 0x13D:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x290) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x130) + 0x5D8i64), 0xE)) + 0x4D8i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3C8);
                v34 -= FuckEnc::CacheRead<_DWORD>(v10 + 0xC0);
                goto LABEL_1041;
            case 0x13E:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x498);
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0xB8);
                v34 += 0x275CC81F * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 0x118i64) + 0x100i64);
                goto LABEL_1041;
            case 0x13F:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x2F8) ^ v11;
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 0x2F8i64) & 0xFFFFFFE5;
                v34 ^= ~FuckEnc::CacheRead<_DWORD>(v4 + 0x588);
                goto LABEL_1041;
            case 0x140:
                Calls::FastCall(v4 + 0x5F0, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x450) + 0x308i64));
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x550);
                goto LABEL_1041;
            case 0x141:
                v34 = (FuckEnc::CacheRead<_DWORD>(v4 + 0x30) ^ v11) + 0x3A583379;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x260);
                v15 = v34 - (~(v5 + FuckEnc::CacheRead<_DWORD>(v10 + 0x2C0)) | 7);
                goto LABEL_1040;
            case 0x142:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 0x370i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x58) + 8i64 * (v5 & 0x43), &v34, v5, v4);
                goto LABEL_1041;
            case 0x143:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x68);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 0x500i64, &v34, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x3C8));
                goto LABEL_1041;
            case 0x144:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 0x68i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x758);
                Calls::FastCall(v4 + 0x1B8, &v34, v5, v10);
                goto LABEL_1041;
            case 0x145:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x498);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x118) + 0x750i64) + 0x368i64) + 8i64 * (v5 & 0x37)) + 0x280i64);
                v34 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x1B0);
                goto LABEL_1041;
            case 0x146:
                v34 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x720) + 0x3E54DDF6);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3C0) + 0xE0i64);
                v34 = ~(v34 + ~FuckEnc::CacheRead<_DWORD>(v10 + 0x4D8));
                goto LABEL_1041;
            case 0x147:
                v15 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x610) + 0x118i64) + 0x308i64) + 0x348i64) * ((FuckEnc::CacheRead<_DWORD>(v4 + 0x6D0) >> 0xA) + 1);
                goto LABEL_1040;
            case 0x148:
                v34 = v11 ^ 0x4AB76D59;
                Calls::FastCall(v4 + 0x270, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xF0) + 0x290i64) + 8i64 * ((unsigned __int8)v5 & 0xB0)));
                goto LABEL_1041;
            case 0x149:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x290) + 8i64 * ((unsigned __int8)v5 ^ 0x11u)) + 0x220i64) + 8i64 * (unsigned __int8)(0xDE * v5)) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1E)) + 0x390i64) ^ v11;
                goto LABEL_1041;
            case 0x14A:
                v34 = ~(v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x68));
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x698);
                goto LABEL_1041;
            case 0x14B:
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 0x4C0i64) + 0x530i64) + 8i64 * (v5 & 0x29)) + 0x260i64);
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(v10 + 0x490);
                goto LABEL_1040;
            case 0x14C:
                v34 = v11 ^ ((_DWORD)0x1076A876 + ((FuckEnc::CacheRead<_DWORD>(v4 + 0x390) - 0x462C1A02) ^ 0xF1E6578B)) ^ 0x82605422;
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0);
                goto LABEL_1041;
            case 0x14D:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x238) + 0xA0i64, &v34, v5, v4);
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0x1C8) >> 0xF;
                goto LABEL_1041;
            case 0x14E:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x390);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x510) + 0x3C0i64) + 0x608i64);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x2C8) + 4i64 * ((unsigned __int8)v5 ^ 0xF9u)) ^ 0xECC31131;
                goto LABEL_1041;
            case 0x14F:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x180) + 4i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x390) - 7) & 0xB));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x380);
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x38) + 4i64 * (__ROL4__(v5, 9) & 0x70));
                goto LABEL_1041;
            case 0x150:
                v34 = __ROL4__(v11, 0x43 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x608) + 0x310i64)) - 0x3CFE76BC;
                Calls::FastCall(v4 + 0x50, &v34, v5, v4);
                goto LABEL_1041;
            case 0x151:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x498) ^ v11;
                Calls::FastCall(v4 + 0x360, &v34, v5, v4);
                v34 ^= 0xA46D0007;
                goto LABEL_1041;
            case 0x152:
                Calls::FastCall(v4 + 0x40, &v34, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x638));
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x260) + 0x1C8i64);
                goto LABEL_1041;
            case 0x153:
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE0) + 0x1C8i64));
                v34 = ~(v34 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 0x4B0i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 3)) + 0x30i64));
                goto LABEL_1041;
            case 0x154:
                v34 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 8i64 * ((0x27 * (_BYTE)v5) & 0x7D)) + 0x30i64) ^ 0xD0FFDB36, 3)) + (FuckEnc::CacheRead<_DWORD>(v4 + 0x30) >> 6));
                goto LABEL_1041;
            case 0x155:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x758) + 0x3A8i64) + 0x18i64) + 8i64 * ((4 * (_BYTE)v5) & 0xC), &v34, v5, v4);
                goto LABEL_1041;
            case 0x156:
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x6E8));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 8i64 * (unsigned __int8)(0x8B * v5)) + 0x608i64);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x670) + 0x6A0i64) + 4i64 * ((0xD * (_BYTE)v5) & 0x39));
                goto LABEL_1041;
            case 0x157:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x310) ^ v11;
                Calls::FastCall(v4 + 0x1A8, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x130) + 0x260i64));
                goto LABEL_1041;
            case 0x158:
                Calls::FastCall(v4 + 0x3B8, &v34, v5, v4);
                v34 -= v5 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x248) ^ 0x82C507F5);
                goto LABEL_1041;
            case 0x159:
                v25 = (unsigned __int8)__ROR4__(~FuckEnc::CacheRead<_DWORD>(v4 + 0x310), 0xF);
                v26 = FuckEnc::CacheRead<_QWORD>(v4 + 0x78);
                goto LABEL_355;
            case 0x15A:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x458) - v5;
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x798) + 0x490i64);
                v34 = ~(v34 - FuckEnc::CacheRead<_DWORD>(v4 + 0x720));
                goto LABEL_1041;
            case 0x15B:
                v34 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x598) + 0x780i64) + 0x678i64) + 8i64 * ((unsigned __int8)__ROL4__(v5, 5) & 0xDE)) + 0x2A0i64) + 8i64 * (unsigned __int8)(0x3C * v5)) + 0x6D0i64));
                goto LABEL_1041;
            case 0x15C:
                v34 = __ROL4__(v11, v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0));
                v15 = v34 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1C0) + 0x1B0i64) ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x68);
                goto LABEL_1040;
            case 0x15D:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 0x610i64) + 0x40i64, &v34, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x6E0));
                goto LABEL_1041;
            case 0x15E:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 0x308i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x2A8) + 8i64 * (__ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x410) + 4i64 * ((unsigned __int8)v5 & 0x9A)), 0xC) & 0xA6), &v34, v5, v4);
                goto LABEL_1041;
            case 0x15F:
                Calls::FastCall(v4 + 0x2E0, &v34, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6E0);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x2C8) + 4i64 * (unsigned __int8)__ROR4__(v5, 0x1E));
                goto LABEL_1041;
            case 0x160:
                v34 = __ROL4__(v11, 0x31 * FuckEnc::CacheRead<_BYTE>(v4 + 0x768)) + 0xA9854B3;
                Calls::FastCall(v4 + 0x738, &v34, v5, v4);
                goto LABEL_1041;
            case 0x161:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 0x598i64) + 0x380i64);
                v34 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 0x208) + 0x5BD9459F * FuckEnc::CacheRead<_DWORD>(v4 + 0xB8));
                goto LABEL_1041;
            case 0x162:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0xB8) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x598);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x688) + 8i64 * (v5 & 0x42), &v34, v5, v4);
                goto LABEL_1041;
            case 0x163:
                v34 = __ROL4__(v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0), v5);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4F0) + 0x10i64) + 8i64 * ((unsigned __int8)v5 & 0x8D)) + 0xE0i64);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x80);
                goto LABEL_1041;
            case 0x164:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x408);
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0xB8);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x528);
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x558) + 4i64 * (unsigned __int8)(0x7C * FuckEnc::CacheRead<_BYTE>(v4 + 0x768)));
                goto LABEL_1041;
            case 0x165:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x78);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0xE8) + 0x430i64) + 8i64 * (((unsigned __int8)v5 ^ 0xFE) & 9), &v34, v5, v4);
                goto LABEL_1041;
            case 0x166:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6E0);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x368) + 8i64 * (v5 & 0xF)) + 0x2F0i64, &v34, v5, v4);
                v34 -= 0xE9DFBEE;
                goto LABEL_1041;
            case 0x167:
                v20 = (unsigned __int8)__ROR4__(v5, 0xC);
                v21 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x278) + 0x4C8i64) + 0x3D8i64) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x620) & 0x28));
            LABEL_272:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v21 + 0x190) + 4 * v20);
                goto LABEL_1041;
            case 0x168:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x78) + 0x588i64);
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0);
                v34 ^= 0x20 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x390) & 0x3FFF);
                goto LABEL_1041;
            case 0x169:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x498) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3C8);
                Calls::FastCall(v10 + 0x70, &v34, v5, v4);
                goto LABEL_1041;
            case 0x16A:
                v34 = __ROR4__(v11, v5);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x748) + 0x100i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x278) + 0x278i64);
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(v10 + 0x80);
                goto LABEL_1040;
            case 0x16B:
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x1C8));
                Calls::FastCall(v4 + 0x2D0, &v34, v5, v4);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x7A0) + 0x80i64);
                goto LABEL_1041;
            case 0x16C:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x6E8) ^ v11;
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x220) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x450) + 0x80i64) & 0xC2)) + 0x408i64);
                goto LABEL_1041;
            case 0x16D:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 0x330i64, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x520) + 8i64 * ((unsigned __int8)v5 & 0xA4)));
                goto LABEL_1041;
            case 0x16E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4C0);
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x5D8) + 0x2E00BE7E;
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x2F8);
                v15 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x510) + 0x6D0i64) ^ v34;
                goto LABEL_1040;
            case 0x16F:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x290) + 8i64 * ((unsigned __int8)__ROL4__(v5, 0x18) & 0xD4)) + 0x6E8i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x380);
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x568) + 4i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x458) ^ 0x2Au));
                goto LABEL_1041;
            case 0x170:
                Calls::FastCall(v4 + 0xD0, &v34, v5, v4);
                v15 = ~(v34 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x748) + 0x200i64));
                goto LABEL_1040;
            case 0x171:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x228);
                v34 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 0x390));
                v34 = ~(v34 ^ (v5 * ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x6D0) >> 0xB)));
                goto LABEL_1041;
            case 0x172:
                v34 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x228) + 0x6B0i64) + 4i64 * (unsigned __int8)(0x53 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x750) + 0x68i64))) ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x490));
                goto LABEL_1041;
            case 0x173:
                v34 = (v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0)) - 0x9E01D9E;
                v34 = ~(v34 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x798) + 0x408i64));
                goto LABEL_1041;
            case 0x174:
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x390)) + 0x4F3CFECF;
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 8i64 * ((unsigned __int8)(0xE4 * v5) & 0x82)) + 0x118i64) + 0x6B0i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 7)));
                goto LABEL_1041;
            case 0x175:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 0x1C8i64) ^ v11;
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B8) + 0x598i64) + 0x768i64);
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_DWORD>(v4 + 0x2F8));
                goto LABEL_1041;
            case 0x176:
                v34 = v11 + 0x45D1E350 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 0x100i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x370);
                v34 ^= ~(0xEBC30131 * FuckEnc::CacheRead<_DWORD>(v10 + 0x408));
                goto LABEL_1041;
            case 0x177:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x5D8);
                Calls::FastCall(v4 + 0x330, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x520) + 8i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x440), 4) & 0x41)));
                goto LABEL_1041;
            case 0x178:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x78) + 0x728i64);
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x5A0) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x370) + 0x5E0i64);
                goto LABEL_1041;
            case 0x179:
                Calls::FastCall(v4 + 0x778, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x650) + 0x4C8i64) + 0x758i64));
                goto LABEL_1041;
            case 0x17A:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 8i64 * (unsigned __int8)(0xA4 * FuckEnc::CacheRead<_BYTE>(v4 + 0x5D8))) + 0x58i64) + 8i64 * (v5 & 2), &v34, v5, v4);
                goto LABEL_1041;
            case 0x17B:
                Calls::FastCall(v4 + 0x1E8, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x600) + 0x118i64) + 0x780i64));
                goto LABEL_1041;
            case 0x17C:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 8i64 * ((unsigned __int8)~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x100) & 0xCA)) + 0x540i64) + 8i64 * (((unsigned __int8)v5 ^ 0xAE) & 0xF1), &v34, v5, v4);
                goto LABEL_1041;
            case 0x17D:
                v34 = __ROL4__(v11, v5 * (FuckEnc::CacheRead<_BYTE>(v4 + 0x1C8) + FuckEnc::CacheRead<_BYTE>(v4 + 0x440) * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x380) + 0x30i64)));
                goto LABEL_1041;
            case 0x17E:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6E0) + 0xB8i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x600);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x498);
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0x620) >> 0xD;
                goto LABEL_1041;
            case 0x17F:
                v34 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x350) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x370) + 0x650i64) + 0x310i64));
                v15 = FuckEnc::CacheRead<_DWORD>(v4 + 0xC0) + v34 - 0x33A2AE13;
                goto LABEL_1040;
            case 0x180:
                v34 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B8) + 0x208i64);
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x350) & 0xA3)) + 0x80i64);
                goto LABEL_1040;
            case 0x181:
                v34 = __ROL4__(v11, 5) - 0x7B10CBB1;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v10 + 0x5A0) & 0x9C)) + 0x178i64);
                goto LABEL_1041;
            case 0x182:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x1C8), 0x13)) + 0x3A8i64) + 0x450i64) + 0x508i64) + 0x7A0i64);
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 0x5E0));
                goto LABEL_1041;
            case 0x183:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 8i64 * (v5 & 0x68)) + 0x30i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x670) + 0x750i64);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x7A0) + 0x728i64);
                goto LABEL_1041;
            case 0x184:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xF0) + 0x3E8i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x1E)) + 0x748i64) + 0x6A0i64) + 4i64 * ((unsigned __int8)__ROL4__(v5, 0x1B) & 0xE0));
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x208);
                goto LABEL_1041;
            case 0x185:
                v34 = __ROR4__(v11, ~FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F8) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1A)) + 0x410i64) + 4i64 * ((unsigned __int8)v5 & 0xBC)));
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x6D0);
                goto LABEL_1041;
            case 0x186:
                v15 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0xB8) ^ 8) & 0x48)) + 0x740i64) + 8i64 * (((_BYTE)v5 + (unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x350)) & 0x7C)) + 0x458i64) + 1;
                goto LABEL_1040;
            case 0x187:
                v29 = (unsigned __int8)v5 & 0xA6;
                v30 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x278) + 0x298i64);
                goto LABEL_404;
            case 0x188:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8);
                v15 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x408) ^ (FuckEnc::CacheRead<_DWORD>(v10 + 0x1B0) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3C8) + 0x550i64)));
                goto LABEL_1040;
            case 0x189:
                v34 = v5 ^ v11 ^ 0xC62A9732;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4F0);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x38) + 4i64 * ((unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x530) + 8i64 * ((unsigned __int8)v5 & 0xF1)) + 0x1B0i64), 0x19) & 0xB2));
                goto LABEL_1041;
            case 0x18A:
                v34 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x348) ^ 0x1884037F) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x620) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4F0) + 0xF0i64) + 0x6D0i64));
                goto LABEL_1041;
            case 0x18B:
                v34 = v11 + ~(0x20 * FuckEnc::CacheRead<_DWORD>(v4 + 0x440));
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x280) + 0x4B8i64) + 0x558i64) + 4i64 * (unsigned __int8)(0x1A * v5));
                goto LABEL_1041;
            case 0x18C:
                v34 = v11 - 0x5D9041A8 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE8) + 0x550i64);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3C8) + 0x5A0i64) ^ 0xDBB9D814;
                goto LABEL_1041;
            case 0x18D:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x180) + 4i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F8) + 8i64 * (~(_BYTE)v5 & 9)) + 0x3D8i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 2)) + 0x228i64) + 0x130i64) + 0xB8i64) & 0xA7));
                goto LABEL_1041;
            case 0x18E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x278);
                v34 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x2C8) + 4i64 * (unsigned __int8)(0xDB * v5)) ^ v5 ^ 0x31D171A5);
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(v4 + 0x5A0);
                goto LABEL_1040;
            case 0x18F:
                v34 = v5 + v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x608) + 0x2F8i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x38) + 4i64 * (unsigned __int8)(0x29 * FuckEnc::CacheRead<_BYTE>(v4 + 0x350)));
                goto LABEL_1041;
            case 0x190:
                v34 = v11 - 0x7DD55EBD;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6E0);
                Calls::FastCall(v4 + 0x500, &v34, v5, v10);
                v34 -= 0x563378F1;
                goto LABEL_1041;
            case 0x191:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x750) + 0x348i64) ^ v11;
                v34 = __ROR4__(v34 - FuckEnc::CacheRead<_DWORD>(v4 + 0xC0) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0) ^ 0xE9362C6F), 0xE);
                goto LABEL_1041;
            case 0x192:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x520) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x100) ^ 0x2C) & 0xEE)) + 0x350i64) * v5, 0xC)) + 0x150i64);
                v34 = FuckEnc::CacheRead<_DWORD>(v10 + 0x1B0) ^ v11;
                goto LABEL_1041;
            case 0x193:
                v34 = __ROL4__(v11, 0xBD * FuckEnc::CacheRead<_BYTE>(v4 + 0x768));
                Calls::FastCall(v4 + 0x500, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 0x608i64));
                goto LABEL_1041;
            case 0x194:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6E0);
                v34 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x348) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x6B0) + 4i64 * (((unsigned __int8)v5 ^ 0xDF) & 0xE4)) * ~FuckEnc::CacheRead<_DWORD>(v4 + 0x1C8)));
                goto LABEL_1041;
            case 0x195:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x378) + 0x3C0i64);
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v10 + 0x458) * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x148) + 8i64 * ((unsigned __int8)__ROR4__(v5, 0x16) & 0xD8)) + 0x390i64));
                goto LABEL_1041;
            case 0x196:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 0x218i64, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 8i64 * ((0xCF * (_BYTE)v5) & 0x5D)));
                goto LABEL_1041;
            case 0x197:
                v34 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x348) * v5);
                v15 = v34 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3C0) + 0x248i64) - FuckEnc::CacheRead<_DWORD>(v4 + 0x408);
                goto LABEL_1040;
            case 0x198:
                v34 = v11 - 0x35202F2E;
                v34 = v11 - 0x35202F2E - FuckEnc::CacheRead<_DWORD>(v4 + 0x100);
                Calls::FastCall(v4 + 0x330, &v34, v5, v4);
                goto LABEL_1041;
            case 0x199:
                v34 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x138) + 0x228i64) + 0x30i64) ^ 0xBDE3FE6E);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x530) + 8i64 * (unsigned __int8)(0xA3 * v5)) + 0x80i64);
                goto LABEL_1041;
            case 0x19A:
                v34 = v11 + 0x2E00BE5B;
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x6E8) ^ (v11 + 0x2E00BE5B);
                v34 -= v5 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 0x200i64) & 0xFFFFFFF2;
                goto LABEL_1041;
            case 0x19B:
                v34 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x720) | 0xF);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x598) + 0x208i64);
                v15 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE0) + 0x2F8i64) ^ v34;
                goto LABEL_1040;
            case 0x19C:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x350) ^ v11;
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x220) + 8i64 * (unsigned __int8)(0x48 * v5)) + 0xC0i64);
                v34 = __ROL4__(__ROR4__(v34, FuckEnc::CacheRead<_DWORD>(v4 + 0x490)), v5);
                goto LABEL_1041;
            case 0x19D:
                v34 = v5 + v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x350);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x118);
                Calls::FastCall(v10 + 0xA0, &v34, v5, v4);
                goto LABEL_1041;
            case 0x19E:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x678) + 8i64 * FuckEnc::CacheRead<unsigned __int8>(v4 + 0x2F8)) + 0x290i64) + 8i64 * ((unsigned __int8)v5 & 0xB9)) + 0x5D8i64) - FuckEnc::CacheRead<_DWORD>(v4 + 0x30);
                goto LABEL_1041;
            case 0x19F:
                v34 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x6E8) << 0x19);
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0);
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x230) + 0x370i64) + 0x6D0i64));
                goto LABEL_1041;
            case 0x1A0:
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 0x200i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 8);
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_BYTE>(v10 + 0x4D8) + (FuckEnc::CacheRead<_BYTE>(v4 + 0x6E8) | 0x10));
                goto LABEL_1041;
            case 0x1A1:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 0x5E0i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1C0);
                v34 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x620);
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x6D0);
                goto LABEL_1041;
            case 0x1A2:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x650);
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x5D8);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6A0) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xF0) + 0x620i64) ^ 0xF9D0FFA0, 0x12));
                goto LABEL_1041;
            case 0x1A3:
                v34 = v11 - 0xE15FA94;
                v34 = v11 - 0xE15FA94 + FuckEnc::CacheRead<_DWORD>(v4 + 0x80) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x308) + 0x298i64) + 0x490i64);
                goto LABEL_1041;
            case 0x1A4:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x310) ^ 0xE2) & 0x9F)) + 0x1B0i64);
                Calls::FastCall(v4 + 0x6C8, &v34, v5, v4);
                goto LABEL_1041;
            case 0x1A5:
                v34 = __ROL4__(v11, 0xE3);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x298);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x308) + 0x2F0i64, &v34, v5, v4);
                goto LABEL_1041;
            case 0x1A6:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x588) & 0xFFFFFFF2;
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 4i64 * ((unsigned __int8)(0xAF * (FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0) - 1)) & 0x8B));
                goto LABEL_1041;
            case 0x1A7:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x390) + 1;
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x440) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x290) + 8i64 * ((unsigned __int8)__ROR4__(v5, 0x19) & 0xA1)) + 0x310i64);
                goto LABEL_1041;
            case 0x1A8:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4C0);
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x668) + 8i64 * (v5 & 0x57)) + 0x520i64) + 8i64 * ((unsigned __int8)v5 & 0x89)) + 0x1C0i64) + 0x68i64);
                goto LABEL_1041;
            case 0x1A9:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x220) + 8i64 * (unsigned __int8)(0xC9 * v5)) + 0x4F0i64) + 0x530i64) + 8i64 * ((unsigned __int8)v5 & 0xBF)) + 0x568i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 6));
                goto LABEL_1041;
            case 0x1AA:
                v34 = ~((v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x458)) ^ 0x71D1FF41);
                Calls::FastCall(v4 + 0x6D8, &v34, v5, v4);
                goto LABEL_1041;
            case 0x1AB:
                v34 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 8i64 * (unsigned __int8)(0x27 * FuckEnc::CacheRead<_BYTE>(v4 + 0x550))) + 0x498i64) ^ 0x87DA0E02);
                v15 = v34 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x378) + 0x720i64);
                goto LABEL_1040;
            case 0x1AC:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x490) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x758);
                v34 += FuckEnc::CacheRead<_DWORD>(v10 + 0x1C8) * FuckEnc::CacheRead<_DWORD>(v4 + 0x350) * FuckEnc::CacheRead<_DWORD>(v4 + 0x728);
                goto LABEL_1041;
            case 0x1AD:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4B8);
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x5D8);
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0);
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x348);
                goto LABEL_1041;
            case 0x1AE:
                v34 = v11 - 0x153C660E;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x658);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x370) + 0x110i64, &v34, v5, v10);
                goto LABEL_1041;
            case 0x1AF:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x498);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x280);
                Calls::FastCall(v4 + 0x1B8, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x4B0) + 8i64 * (__ROR4__(v5, 0x17) & 0x26)));
                goto LABEL_1041;
            case 0x1B0:
                v15 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 0x490i64) + ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0) + (FuckEnc::CacheRead<_DWORD>(v4 + 0xB8) | 0x19)));
                goto LABEL_1040;
            case 0x1B1:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x208) ^ v11 ^ 0x50F2C628;
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x678) + 8i64 * (((unsigned __int8)v5 ^ 0x10) & 0x90)) + 0x740i64) + 8i64 * ((unsigned __int8)v5 ^ 0x47u)) + 0x1B0i64);
                goto LABEL_1041;
            case 0x1B2:
                v34 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x720) ^ 0xCC85DF3A) + 0x7F3CEECF;
                v15 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x130) + 0x768i64) ^ v34;
                goto LABEL_1040;
            case 0x1B3:
                v34 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x410) + 4i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0), 0x15) & 0x15)) ^ v11);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x508);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x4D8);
                goto LABEL_1041;
            case 0x1B4:
                Calls::FastCall(v4 + 0x5C0, &v34, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x4F0));
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 0xE0i64) + 0x348i64);
                goto LABEL_1041;
            case 0x1B5:
                v34 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x10) + 8i64 * (unsigned __int8)(0x6C * v5)) + 0x68i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x7A0) + 0x38i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 3)));
                goto LABEL_1041;
            case 0x1B6:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x410) + 4i64 * ((0x30 * (unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0xB8)) & 0x63)) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x370);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x678) + 8i64 * ((unsigned __int8)v5 ^ 0xC7u)) + 0x498i64);
                goto LABEL_1041;
            case 0x1B7:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 0x450i64) + 0x658i64) + 0x4E8i64, &v34, v5, v4);
                goto LABEL_1041;
            case 0x1B8:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x200);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x150);
                v34 += (FuckEnc::CacheRead<_DWORD>(v10 + 0x728) >> 0x1A) + 1;
                v15 = FuckEnc::CacheRead<_DWORD>(v4 + 0xB8) + v34;
                goto LABEL_1040;
            case 0x1B9:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x530) + 8i64 * ((unsigned __int8)v5 & 0x83)) + 0x10i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 2)) + 0x190i64) + 4i64 * ((0xFB * (_BYTE)v5) & 0x1F));
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x208);
                goto LABEL_1041;
            case 0x1BA:
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x498));
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_DWORD>(v4 + 0x1C8));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x118) + 0x380i64);
                v34 += v5 + FuckEnc::CacheRead<_DWORD>(v10 + 0x2C0);
                goto LABEL_1041;
            case 0x1BB:
                v34 = v11 ^ 0xC0BBFB0;
                Calls::FastCall(v4 + 0x590, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x598) + 0x298i64));
                goto LABEL_1041;
            case 0x1BC:
                v34 = v11 - 0x65D6E28D;
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x1B0) ^ (v11 - 0x65D6E28D);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xF0) + 0x610i64) + 0x278i64);
                v34 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x178);
                goto LABEL_1041;
            case 0x1BD:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x238) + 0x278i64);
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 0x720));
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 0x558i64) + 4i64 * ((unsigned __int8)((_BYTE)v5 << 6) & 0xA7));
                goto LABEL_1041;
            case 0x1BE:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x230) + 0x6E8i64);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 0x678i64) + 8i64 * (unsigned __int8)(0xCF * v5)) + 0x38i64) + 4i64 * ((unsigned __int8)v5 ^ 0x7Fu));
                goto LABEL_1041;
            case 0x1BF:
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x230) + 0x2A0i64) + 8i64 * ((unsigned __int8)__ROL4__(v5, 8) & 0xA3)) + 0x308i64) + 0x4B0i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x18)) + 0x2C8i64) + 4i64 * (unsigned __int8)(0x4E * v5)));
                goto LABEL_1041;
            case 0x1C0:
                v34 = v11 + 0x3AAD86FB;
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x458) ^ (v11 + 0x3AAD86FB);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x2F8);
                v15 = v34 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 0x458i64);
                goto LABEL_1040;
            case 0x1C1:
                v34 = v5 ^ __ROR4__(v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4C8) + 0x498i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 0x4D8i64) - 0x754AB40C, 0xD0);
                goto LABEL_1041;
            case 0x1C2:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x380);
                Calls::FastCall(v4 + 0x438, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x308) + 0x520i64) + 8i64 * (__ROR4__(v5, 0x18) & 0x7D)) + 0x4C0i64));
                goto LABEL_1041;
            case 0x1C3:
                v34 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x248) ^ 0xE6A5D5FE);
                v34 = v34 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x378) + 0x380i64) + 0x410i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 3)) + 0x7FFED9CA;
                goto LABEL_1041;
            case 0x1C4:
                v34 = v11 + ~FuckEnc::CacheRead<_DWORD>(v4 + 0x100);
                v34 = v34 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x1C8) & 0x96)) + 0x390i64) + 0x21C4E2F4;
                goto LABEL_1041;
            case 0x1C5:
                v15 = v11 + ~(0xDF0B2A8F * FuckEnc::CacheRead<_DWORD>(v4 + 0x200) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 0x6A0i64) + 4i64 * (((unsigned __int8)v5 ^ 0xC) & 0x2C)) >> 0x14));
                goto LABEL_1040;
            case 0x1C6:
                v34 = (v11 ^ 0xB0D1FF41) + v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x378);
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_BYTE>(v10 + 0x550) * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x750) + 0x458i64));
                goto LABEL_1041;
            case 0x1C7:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x310) - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xE0);
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(v10 + 0x348) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4C0) + 0x310i64);
                goto LABEL_1040;
            case 0x1C8:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x228) + 0x2F8i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x528);
                v34 -= (0xABC12AFD * FuckEnc::CacheRead<_DWORD>(v10 + 0x5D8)) ^ 0x6AB147D5;
                goto LABEL_1041;
            case 0x1C9:
                v34 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 0x348i64) ^ 0xB);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2A0) + 8i64 * (unsigned __int8)(0xDC * v5)) + 0x408i64);
                goto LABEL_1041;
            case 0x1CA:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6E0);
                Calls::FastCall(v10 + 0x428, &v34, v5, v4);
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x588);
                goto LABEL_1041;
            case 0x1CB:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x768);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x750) + 0x238i64);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x1C8) * FuckEnc::CacheRead<_DWORD>(v4 + 0x6D0);
                goto LABEL_1041;
            case 0x1CC:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0xC0) ^ v11;
                v25 = (unsigned __int8)__ROL4__(v5, 0x1C);
                v26 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3C0);
            LABEL_355:
                v27 = FuckEnc::CacheRead<_QWORD>(v26 + 0x58);
                goto LABEL_356;
            case 0x1CD:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x248);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x6E8) << 0x17;
                v15 = FuckEnc::CacheRead<_DWORD>(v4 + 0x350) + v34 - 0x48AFDD59;
                goto LABEL_1040;
            case 0x1CE:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x2F8) - 0x5888A43B;
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0x6D0) + 1;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xE8);
                v34 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x5E0);
                goto LABEL_1041;
            case 0x1CF:
                v34 = v11 ^ 0xF23428C2;
                Calls::FastCall(v4 + 0x258, &v34, v5, v4);
                v15 = v34 + 1 + FuckEnc::CacheRead<_DWORD>(v4 + 0x178);
                goto LABEL_1040;
            case 0x1D0:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE0) + 0x678i64) + 8i64 * ((unsigned __int8)__ROR4__(v5, 0x1E) & 0xD1)) + 0x10i64) + 8i64 * ((unsigned __int8)(0xC * v5) & 0xEC)) + 0xF0i64) + 0x4B8i64);
                v34 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 0x200));
                goto LABEL_1041;
            case 0x1D1:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x798);
                v34 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x280) + 0x248i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3C0) + 0x4B8i64) + 0x380i64) + 0x208i64));
                goto LABEL_1041;
            case 0x1D2:
                v34 = v11 - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x670);
                v34 = v11 - v5 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x740) + 8i64 * ((unsigned __int8)__ROR4__(v5, 0xE) & 0xB5)) + 0x200i64);
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0);
                goto LABEL_1041;
            case 0x1D3:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x1B0);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x728);
                v15 = v34 + (FuckEnc::CacheRead<_DWORD>(v4 + 0xB8) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE8) + 0x620i64));
                goto LABEL_1040;
            case 0x1D4:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x248) ^ 0xDF) & 0xA8)) + 8i64 * (unsigned __int8)(0x95 * v5)) + 0x4F0i64);
                v34 = ~(v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x408));
                goto LABEL_1041;
            case 0x1D5:
                Calls::FastCall(v4 + 0x60, &v34, v5, v4);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 0x390i64);
                goto LABEL_1041;
            case 0x1D6:
                v34 = ((v11 - 0x1D8FE5A3) ^ 0x14D0FF6D) - 0x6069C3B2;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x798);
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x2A0) + 8i64 * ((0xFB * (_BYTE)v5) & 0x47)) + 0x350i64);
                goto LABEL_1040;
            case 0x1D7:
                v34 = __ROL4__(v11, 0x44);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x260) + 0x780i64) + 0x230i64) + 0x4B8i64) + 0x260i64);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x178);
                goto LABEL_1041;
            case 0x1D8:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2A0) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x15)) + 0x670i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x3F8) + 8i64 * (unsigned __int8)(0xD0 * v5), &v34, v5, v4);
                goto LABEL_1041;
            case 0x1D9:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4C8) + 0x380i64);
                v34 = __ROR4__(v11, ~(FuckEnc::CacheRead<_BYTE>(v10 + 0x2F8) * (FuckEnc::CacheRead<_BYTE>(v4 + 0x408) ^ 0x41)));
                goto LABEL_1041;
            case 0x1DA:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x228) + 0x48i64) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x720) & 0x20));
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x6E8) & 0xFFFFFFFB;
                goto LABEL_1041;
            case 0x1DB:
                Calls::FastCall(v4 + 0x40, &v34, v5, v4);
                v15 = v34 + 1 + FuckEnc::CacheRead<_DWORD>(v4 + 0x588);
                goto LABEL_1040;
            case 0x1DC:
                v34 = ~(_DWORD)v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x750);
                v34 = (unsigned int)0x6A346E8 ^ __ROL4__(~(_DWORD)v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x2C8) + 4i64 * ((unsigned __int8)v5 & 0xA7)));
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x30);
                goto LABEL_1041;
            case 0x1DD:
                v34 = (FuckEnc::CacheRead<_DWORD>(v4 + 0x550) ^ v11) - 0x6202E3EA;
                v34 ^= v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D8) + 8i64 * ((unsigned __int8)v5 & 0xA8)) + 0x498i64);
                goto LABEL_1041;
            case 0x1DE:
                v34 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x490) | 0x1D);
                v15 = v34 ^ ((FuckEnc::CacheRead<_DWORD>(v4 + 0x458) << 0x11) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0) ^ 0xC94CC7B8));
                goto LABEL_1040;
            case 0x1DF:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 0x3A8i64) + 0x180i64) + 4i64 * ((unsigned __int8)v5 & 0x8F)) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 0x78i64);
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_DWORD>(v10 + 0x200));
                goto LABEL_1041;
            case 0x1E0:
                v34 = v11 + 0x3D3CEECF;
                v34 = v5 ^ (v11 + 0x3D3CEECF - FuckEnc::CacheRead<_DWORD>(v4 + 0xC0));
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x588);
                v15 = FuckEnc::CacheRead<_DWORD>(v4 + 0x100) + v34;
                goto LABEL_1040;
            case 0x1E1:
                Calls::FastCall(v4 + 0x500, &v34, v5, v4);
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x610) + 0x278i64) + 0x5E0i64);
                goto LABEL_1041;
            case 0x1E2:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x748) + 0x78i64);
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x668) + 8i64 * (((unsigned __int8)v5 ^ 0xEB) & 0x54)) + 0x6B0i64) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x720) & 1));
                goto LABEL_1041;
            case 0x1E3:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x758) + 0x208i64) ^ v11;
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 0x768i64);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x248);
                goto LABEL_1041;
            case 0x1E4:
                Calls::FastCall(v4 + 0x790, &v34, v5, v4);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 0xE0i64) + 0x350i64);
                goto LABEL_1041;
            case 0x1E5:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x750);
                v34 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x5D8) >> 7) - FuckEnc::CacheRead<_DWORD>(v10 + 0x4D8);
                v34 ^= ~FuckEnc::CacheRead<_DWORD>(v4 + 0x458);
                goto LABEL_1041;
            case 0x1E6:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2A0) + 8i64 * ((0x3C * (_BYTE)v5) & 0x75)) + 0x720i64);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x220) + 8i64 * (((unsigned __int8)v5 ^ 0xA2) & 0xDF)) + 0x248i64);
                goto LABEL_1041;
            case 0x1E7:
                v34 = __ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x620) ^ v11, 0xE4);
                v34 = __ROR4__(v34, 0xCF * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x290) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8) & 0x5C)) + 0x6D0i64));
                goto LABEL_1041;
            case 0x1E8:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x520) + 8i64 * ((unsigned __int8)v5 & 0xCF)) + 0x530i64) + 8i64 * (unsigned __int8)(0x9F * v5)) + 0x290i64) + 8i64 * ((unsigned __int8)(0xE8 * v5) & 0xD8)) + 0x768i64) ^ v11;
                goto LABEL_1041;
            case 0x1E9:
                v34 = v11 ^ 0x69ED6785;
                Calls::FastCall(v4 + 0x360, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x220) + 8i64 * (__ROL4__(v5, 3) & 0x49)));
                goto LABEL_1041;
            case 0x1EA:
                Calls::FastCall(v4 + 0x198, &v34, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x4B8));
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x608) + 0x2C8i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 0x19));
                goto LABEL_1041;
            case 0x1EB:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x370) + 0x610i64) + 0x418i64, &v34, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x670));
                goto LABEL_1041;
            case 0x1EC:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x550);
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(v4 + 0x598) + 8i64 * (unsigned __int8)(0x8A * FuckEnc::CacheRead<_BYTE>(v4 + 0x1C8))) + 0x558i64) + 4i64 * ((unsigned __int8)v5 ^ 0xB1u));
                goto LABEL_1041;
            case 0x1ED:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 8i64 * ((unsigned __int8)__ROR4__(v5, 4) & 0x87)) + 0x780i64);
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x3E8) + 8i64 * (unsigned __int8)__ROL4__(v5, 3)) + 0x6A0i64) + 4i64 * ((unsigned __int8)__ROR4__(v5, 0x1A) & 0xA1)) ^ v11;
                goto LABEL_1041;
            case 0x1EE:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x5D8) ^ v11;
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_BYTE>(v4 + 0x720) + ((unsigned int)(FuckEnc::CacheRead<_DWORD>(v4 + 0x178) + 0x19993147) >> 1)) - v5;
                goto LABEL_1041;
            case 0x1EF:
                v15 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x748) + 0x138i64) + 0x6B0i64) + 4i64 * (((unsigned __int8)v5 ^ 0x3D) & 0xFD)) ^ (0x5E8EDCCB * FuckEnc::CacheRead<_DWORD>(v4 + 0x5D8));
                goto LABEL_1040;
            case 0x1F0:
                v34 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x2F8) & 0xFFFFFFE0;
                v34 ^= v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x200) + 0x74C30131;
                v15 = FuckEnc::CacheRead<_DWORD>(v4 + 0x408) ^ v34;
                goto LABEL_1040;
            case 0x1F1:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x1B0);
                Calls::FastCall(v4 + 0x590, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x118) + 0x380i64) + 0x798i64));
                goto LABEL_1041;
            case 0x1F2:
                v15 = (v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x498) * ((FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x670) + 0x6D0i64) ^ 0xDEEEAACC) + 0x808D0FF))) + 0x94813A4;
                goto LABEL_1040;
            case 0x1F3:
                v34 = __ROR4__(v11, 0x27 * FuckEnc::CacheRead<_BYTE>(v4 + 0x350));
                v15 = v34 ^ (0x13030D4A * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1C0) + 0x6E0i64) + 0x278i64) + 0x30i64));
                goto LABEL_1040;
            case 0x1F4:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x650) + 0x5E0i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 0x380i64) + 0x4C0i64);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x458);
                goto LABEL_1041;
            case 0x1F5:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x650);
                v34 = v11 ^ (0xC3018944 * FuckEnc::CacheRead<_DWORD>(v10 + 0x6D0));
                v34 += ~(v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x550));
                goto LABEL_1041;
            case 0x1F6:
                v34 = v11 - 0x62CC8C7D;
                v34 = __ROR4__(v11 - 0x62CC8C7D, FuckEnc::CacheRead<_DWORD>(v4 + 0x390));
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x598) + 0x508i64) + 0x2C8i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 5));
                goto LABEL_1041;
            case 0x1F7:
                v34 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x138) + 0x558i64) + 4i64 * ((unsigned __int8)v5 & 0xA4)) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x2F8) | 0x15));
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x6E8);
                goto LABEL_1041;
            case 0x1F8:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1C)) + 0x410i64) + 4i64 * (v5 & 0x5D)) ^ v11;
                v34 = v34 - FuckEnc::CacheRead<_DWORD>(v4 + 0x5D8) - 0x7E904E4E;
                goto LABEL_1041;
            case 0x1F9:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x450) + 0x6D0i64) - v5;
                v15 = v34 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0xB8) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x798) + 0x698i64);
                goto LABEL_1040;
            case 0x1FA:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 8i64 * (__ROR4__(v5, 1) & 0x75)) + 0x150i64) + 0x798i64);
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x600) + 0x410i64) + 4i64 * (~(_BYTE)v5 & 0x52));
                goto LABEL_1041;
            case 0x1FB:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1C0);
                v34 = FuckEnc::CacheRead<_DWORD>(v10 + 0x620) ^ v11;
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x450) + 0x650i64) + 0x280i64) + 0x758i64) + 0x440i64);
                goto LABEL_1041;
            case 0x1FC:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x11)) + 0x118i64) + 0x128i64, &v34, v5, v4);
                goto LABEL_1041;
            case 0x1FD:
                Calls::FastCall(v4 + 0x6B8, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 8i64 * (unsigned __int8)(0x56 * v5)) + 0x118i64) + 0x450i64) + 0x598i64));
                goto LABEL_1041;
            case 0x1FE:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0xB8);
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x6D0);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x780);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x6B0) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x68) & 0xF3));
                goto LABEL_1041;
            case 0x1FF:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 0x78i64);
                v34 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x180) + 4i64 * ((0xFE * (_BYTE)v5) & 0x13)) ^ v11) + 0x22F00E5;
                v15 = v34 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x308) + 0x408i64);
                goto LABEL_1040;
            case 0x200:
                v34 = (unsigned int)0xC445229 ^ v11;
                Calls::FastCall(v4 + 0x778, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x598) + 0x238i64));
                goto LABEL_1041;
            case 0x201:
                Calls::FastCall(v4 + 0x4A8, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x668) + 8i64 * (unsigned __int8)(0x74 * v5)) + 0x238i64) + 0x610i64));
                goto LABEL_1041;
            case 0x202:
                v34 = v11 + 0x4DA22933;
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x498) ^ (v11 + 0x4DA22933);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x228) + 0x6E0i64);
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x6B0) + 4i64 * (unsigned __int8)(0x13 * v5)));
                goto LABEL_1041;
            case 0x203:
                v34 = v11 - 0x707A91A8;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xE0);
                v34 = v11 - 0x707A91A8 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x290) + 8i64 * (__ROL4__(v5, 5) & 0x5F)) + 0x498i64) - FuckEnc::CacheRead<_DWORD>(v10 + 0x6D0);
                goto LABEL_1041;
            case 0x204:
                v34 = v11 + 0x46E58E7D;
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x248) ^ (v11 + 0x46E58E7D);
                Calls::FastCall(v4 + 0x1E8, &v34, v5, v4);
                v34 ^= 0xA6ECF49A;
                goto LABEL_1041;
            case 0x205:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x148) + 8i64 * (((unsigned __int8)v5 ^ 4) & 0x17)) + 0x278i64) + 0x178i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x380) + 0x230i64) + 0x30i64);
                goto LABEL_1041;
            case 0x206:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x600);
                v34 = FuckEnc::CacheRead<_DWORD>(v10 + 0x1B0) ^ v11;
                v15 = v34 ^ ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x208) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x758) + 0x350i64));
                goto LABEL_1040;
            case 0x207:
                v34 = v11 + 0x56F2DD4A;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x510);
                Calls::FastCall(v10 + 0x70, &v34, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0));
                goto LABEL_1041;
            case 0x208:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B8) + 0x298i64) + 0x3F0i64) + 8i64 * ((unsigned __int8)v5 & 0xFE), &v34, v5, v4);
                goto LABEL_1041;
            case 0x209:
                v34 = v11 - v5;
                v34 = v11 - v5 - FuckEnc::CacheRead<_DWORD>(v4 + 0x768);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x10) + 8i64 * ((unsigned __int8)v5 ^ 0x81u)) + 0x748i64);
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_DWORD>(v10 + 0x5D8));
                goto LABEL_1041;
            case 0x20A:
                v34 = v11 + v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x750);
                v34 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x148) + 8i64 * ((unsigned __int8)(0xB9 * FuckEnc::CacheRead<_BYTE>(v10 + 0x440)) & 0xD7)) + 0x440i64) ^ (v11 + v5) ^ 0xD77E685D) + 0x4F08E6C3;
                goto LABEL_1041;
            case 0x20B:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x68), 0x16)) + 0x4C0i64) + 0x678i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x1A)) + 0x78i64) + 0x598i64);
                v34 = FuckEnc::CacheRead<_DWORD>(v10 + 0x440) ^ v11;
                goto LABEL_1041;
            case 0x20C:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x620);
                Calls::FastCall(v4 + 0x360, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x650) + 0x598i64));
                goto LABEL_1041;
            case 0x20D:
                v34 = v11 ^ 0x3096ACBF;
                v34 = (v11 ^ 0x3096ACBF) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4C8) + 0x200i64) - 0x21B72F09;
                v15 = v34 - (FuckEnc::CacheRead<_DWORD>(v4 + 0xC0) ^ 0x77145CDE);
                goto LABEL_1040;
            case 0x20E:
                v34 = v11 - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x278);
                v15 = v11 - v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x608) + 0x6D0i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x1C8) ^ v5);
                goto LABEL_1040;
            case 0x20F:
                v34 = v11 + 0x12F8A147;
                Calls::FastCall(v4 + 0x6D8, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 8i64 * (v5 & 0x6F)));
                goto LABEL_1041;
            case 0x210:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x30) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x118) + 0x608i64);
                v34 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x408);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x280) + 0x4D8i64);
                goto LABEL_1041;
            case 0x211:
                v28 = FuckEnc::CacheRead<_QWORD>(v4 + 0x610);
                v25 = (unsigned __int8)__ROR4__(v5, 1);
                v27 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8) + 0x2B0i64);
                goto LABEL_357;
            case 0x212:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x238);
                v34 = v11 ^ (8 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x3C8) + 0x200i64) * (v5 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x80) - 0x7A3CEECF)));
                goto LABEL_1041;
            case 0x213:
                v34 = ((v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x10) + 8i64 * ((unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x200), 0x1B) & 0x97)) + 0x720i64) + 0x2FD9417A) ^ 0x9B8B568C) + 0x1AE0EB0B;
                v15 = FuckEnc::CacheRead<_DWORD>(v4 + 0x458) ^ v34;
                goto LABEL_1040;
            case 0x214:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3C8) + 0x260i64);
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0xC0);
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 8i64 * (((unsigned __int8)v5 ^ 0x42) & 0xE2)) + 0x558i64) + 4i64 * (((unsigned __int8)v5 ^ 0xFC) & 0x13)));
                goto LABEL_1041;
            case 0x215:
                v34 = v11 - ((FuckEnc::CacheRead<_DWORD>(v4 + 0x498) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x368) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x12)) + 0x498i64) * v5) >> 5);
                goto LABEL_1041;
            case 0x216:
                v34 = v11 ^ 0x4EFDEDF;
                Calls::FastCall(v4 + 0x630, &v34, v5, v4);
                v34 = (FuckEnc::CacheRead<_DWORD>(v4 + 0x498) ^ v34) + 0x2D07DC27;
                goto LABEL_1041;
            case 0x217:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x68) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4F0) + 0x150i64) + 0x3B8i64, &v34, v5, v4);
                goto LABEL_1041;
            case 0x218:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4C0);
                v34 = FuckEnc::CacheRead<_DWORD>(v10 + 0x2F8) ^ v11;
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2A0) + 8i64 * ((unsigned __int8)v5 ^ 0x17u)) + 0x190i64) + 4i64 * ((unsigned __int8)v5 & 0xB5)));
                goto LABEL_1041;
            case 0x219:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x348);
                v34 ^= v5 * ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x80) ^ 0x854C76F4) - 0x6E3CEECF;
                goto LABEL_1041;
            case 0x21A:
                v34 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x588) & 0xFFFFFFE6);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4C0);
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_BYTE>(v10 + 0x348) * ~FuckEnc::CacheRead<_BYTE>(v4 + 0x698));
                goto LABEL_1041;
            case 0x21B:
                v34 = v11 ^ 0xDCC30131;
                v34 = (v11 ^ 0xDCC30131) + FuckEnc::CacheRead<_DWORD>(v4 + 0x178);
                v34 += (FuckEnc::CacheRead<_DWORD>(v4 + 0x550) ^ 0x8E7A7111) + 1;
                goto LABEL_1041;
            case 0x21C:
                Calls::FastCall(v4 + 0x590, &v34, v5, v4);
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 8i64 * ((0x13 * (_BYTE)v5) & 0x32)) + 0xC0i64));
                goto LABEL_1041;
            case 0x21D:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 8i64 * ((unsigned __int8)__ROR4__(v5, 0x1D) & 0xDE)) + 0x520i64) + 8i64 * ((unsigned __int8)v5 ^ 0x46u)) + 0x2D0i64, &v34, v5, v4);
                goto LABEL_1041;
            case 0x21E:
                v34 = v11 - 0x762E00BF;
                v34 = v11 - 0x762E00BF - FuckEnc::CacheRead<_DWORD>(v4 + 0x80);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE0) + 0x150i64) + 0x3E0i64) + 0xC0i64);
                goto LABEL_1041;
            case 0x21F:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x6E8);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x228);
                v34 += 0x43F5CD7D * FuckEnc::CacheRead<_DWORD>(v10 + 0x1C8);
                v34 = v34 - FuckEnc::CacheRead<_DWORD>(v4 + 0x698) - 0x7646E69D;
                goto LABEL_1041;
            case 0x220:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0xC0);
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x728) - v5 + v34 - 0x6800EF;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x238);
                v15 = v34 - FuckEnc::CacheRead<_DWORD>(v10 + 0x498);
                goto LABEL_1040;
            case 0x221:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x598) + 0x588i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x370);
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_DWORD>(v10 + 0x458));
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x440) ^ 0x17AD90F8;
                goto LABEL_1041;
            case 0x222:
                Calls::FastCall(v4 + 0x630, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x148) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 0x450i64) + 0x310i64) & 0xA2)));
                goto LABEL_1041;
            case 0x223:
                v34 = v11 ^ 0xF9D0FF27;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x650);
                v34 = __ROL4__((v11 ^ 0xF9D0FF27) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x220) + 8i64 * ((unsigned __int8)v5 ^ 0x78u)) + 0x4C8i64) + 0x248i64), 0x3A);
                goto LABEL_1041;
            case 0x224:
                v34 = v11 - ((FuckEnc::CacheRead<_DWORD>(v4 + 0x178) ^ 0x7A29FEC5) & 0xFFFFFFE5 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x758) + 0x550i64));
                goto LABEL_1041;
            case 0x225:
                v34 = v11 - 0x3F3F960C;
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x698) + v11 - 0x3F3F960C + 0x1CD0FFE9;
                v34 = __ROR4__(v34, v5 + (FuckEnc::CacheRead<_BYTE>(v4 + 0x6E8) ^ v5));
                goto LABEL_1041;
            case 0x226:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x698);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3C8);
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x5F8) + 8i64 * (unsigned __int8)(0xA5 * v5)) + 0x6D0i64) + 0x44) ^ 0x6E794123;
                goto LABEL_1041;
            case 0x227:
                v34 = v11 + ~FuckEnc::CacheRead<_DWORD>(v4 + 0x458);
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x520) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x390) ^ 0xFA) & 0x27)) + 0x6A0i64) + 4i64 * ((unsigned __int8)v5 ^ 0xD9u)));
                goto LABEL_1041;
            case 0x228:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x280);
                v15 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x4D8) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x598) + 0x588i64) * ~FuckEnc::CacheRead<_DWORD>(v4 + 0x6E8);
                goto LABEL_1040;
            case 0x229:
                v34 = v11 - v5;
                v34 = v5 ^ (v11 - v5 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x600) + 0x5A0i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x278);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x620);
                goto LABEL_1041;
            case 0x22A:
                v34 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x620);
                v15 = (v34 - FuckEnc::CacheRead<_DWORD>(v4 + 0x720) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x498) ^ 0xDD191149)) ^ 0x5DFE8927;
                goto LABEL_1040;
            case 0x22B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x370);
                v34 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x248) ^ ~FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x4B0) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x15)) + 0x130i64) + 0x440i64));
                goto LABEL_1041;
            case 0x22C:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x748) + 0x5E0i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x638);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x440) ^ ~FuckEnc::CacheRead<_DWORD>(v10 + 0x200);
                goto LABEL_1041;
            case 0x22D:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x78) + 0xD8i64) + 8i64 * (((unsigned __int8)v5 ^ 0xE5) & 0x5A)) + 0x238i64) + 0x650i64);
                v34 = __ROR4__(v11, ~FuckEnc::CacheRead<_BYTE>(v10 + 0x728));
                goto LABEL_1041;
            case 0x22E:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x720) - 0x2E00BE79;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xF0);
                v34 += 0x307A8CAD * FuckEnc::CacheRead<_DWORD>(v10 + 0x550);
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_DWORD>(v4 + 0x208));
                goto LABEL_1041;
            case 0x22F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x238);
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x200);
                Calls::FastCall(v4 + 0x6D8, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B8) + 0x650i64));
                goto LABEL_1041;
            case 0x230:
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x68) | 0x1E);
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x5A0) ^ 0xBFu)) + 0xD8i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 7)) + 0x208i64);
                goto LABEL_1040;
            case 0x231:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x458) ^ v11;
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x308) + 0x178i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x450);
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x308) + 0x6D0i64));
                goto LABEL_1041;
            case 0x232:
                v34 = v11 - 0x1772EFD7;
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x588) ^ (v11 - 0x1772EFD7);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 8i64 * ((unsigned __int8)(0x65 * v5) & 0xE3)) + 0xE8i64) + 0x30i64);
                goto LABEL_1041;
            case 0x233:
                Calls::FastCall(v4 + 0x218, &v34, v5, v4);
                v34 = ~v34;
                v15 = v34 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x758) + 0x408i64);
                goto LABEL_1040;
            case 0x234:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8) + 8i64 * (unsigned __int8)(0x6E * v5)) + 0x68i64) ^ v11;
                Calls::FastCall(v4 + 0x4A8, &v34, v5, v4);
                goto LABEL_1041;
            case 0x235:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 0x68i64);
                v34 = ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x698) ^ v34);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1C0) + 0x5E0i64);
                goto LABEL_1041;
            case 0x236:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x490) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x4F0) + 0x4E8i64, &v34, v5, v4);
                goto LABEL_1041;
            case 0x237:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x678) + 8i64 * (unsigned __int8)__ROL4__(~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x450) + 0x408i64), 0x19)) + 0x220i64) + 8i64 * (v5 & 0x74)) + 0x768i64) ^ v11;
                goto LABEL_1041;
            case 0x238:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x450) + 0x678i64) + 8i64 * ((unsigned __int8)v5 & 0xEA)) + 0x78i64);
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x3D8) + 8i64 * (v5 & 0x20)) + 0x638i64) + 0x490i64);
                goto LABEL_1041;
            case 0x239:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x508);
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x208);
                v34 = __ROR4__(v34, ~FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x19)) + 0x178i64));
                goto LABEL_1041;
            case 0x23A:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x608) + 0x2F8i64);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x450) + 0x568i64) + 4i64 * ((unsigned __int8)v5 & 0x82));
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(v4 + 0xC0);
                goto LABEL_1040;
            case 0x23B:
                v34 = v11 - 0x69820DCA;
                v34 = v11 - 0x69820DCA + 0x6DA683A8 * FuckEnc::CacheRead<_DWORD>(v4 + 0x390) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8) + 0x4C0i64) + 0x4D8i64);
                goto LABEL_1041;
            case 0x23C:
                v34 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x768) * v5);
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4F0) + 0x740i64) + 8i64 * (((unsigned __int8)v5 ^ 0xEB) & 0xF4)) + 0x5D8i64) - 0x74);
                goto LABEL_1041;
            case 0x23D:
                v34 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x178);
                v15 = v34 - 0x20545746 * FuckEnc::CacheRead<_DWORD>(v4 + 0x200) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x670) + 0x588i64);
                goto LABEL_1040;
            case 0x23E:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x370) + 0x750i64) + 0x278i64);
                Calls::FastCall(v4 + 0x3B8, &v34, v5, v10);
                goto LABEL_1041;
            case 0x23F:
                v34 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0xB8));
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x550) ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x2F8);
                goto LABEL_1041;
            case 0x240:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(v4 + 0x678) + 0x510i64) + 0x138i64) + 0x758i64) + 0x298i64) + 0x528i64);
                v34 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 0x2C0));
                goto LABEL_1041;
            case 0x241:
                v34 = v11 ^ 0xC3018944;
                v34 = __ROL4__(v11 ^ 0xC3018944, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 0x408i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x150);
                v34 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x728) ^ 0x2EF8E7D7;
                goto LABEL_1041;
            case 0x242:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x650) + 0x3D8i64) + 8i64 * (v5 & 0x76)) + 0x348i64);
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0x390) * v5 - 0x30E8D0A5;
                goto LABEL_1041;
            case 0x243:
                v34 = v11 ^ (0xC3018944 * FuckEnc::CacheRead<_DWORD>(v4 + 0x248));
                Calls::FastCall(v4 + 0x778, &v34, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x638));
                goto LABEL_1041;
            case 0x244:
                v34 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x208));
                Calls::FastCall(v4 + 0x1B8, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 0x3D8i64) + 8i64 * (unsigned __int8)(0x54 * v5)));
                goto LABEL_1041;
            case 0x245:
                v34 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0xC0) + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE8) + 0x200i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x118) + 0x2D8i64) + 4i64 * ((0xFA * (_BYTE)v5) & 0x2A))));
                goto LABEL_1041;
            case 0x246:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x150);
                v34 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 0x310) & 0xF2);
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6E0) + 0x78i64) + 0x550i64);
                goto LABEL_1040;
            case 0x247:
                v34 = v11 + ~FuckEnc::CacheRead<_DWORD>(v4 + 0x100);
                v34 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x378) + 0x190i64) + 4i64 * (unsigned __int8)(0x93 * FuckEnc::CacheRead<_BYTE>(v4 + 0x550)));
                goto LABEL_1041;
            case 0x248:
                v34 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x370) + 0x30i64));
                v15 = v34 ^ (~FuckEnc::CacheRead<_DWORD>(v4 + 0x5D8) * (FuckEnc::CacheRead<_DWORD>(v4 + 0xB8) - 0x2FBF413D));
                goto LABEL_1040;
            case 0x249:
                v25 = (unsigned __int8)(0x5D * (FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0) >> 0x11));
                v27 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 0x538i64);
                goto LABEL_356;
            case 0x24A:
                v34 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x798) + 0x720i64));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8) + 0x298i64);
                v34 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x720);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x440);
                goto LABEL_1041;
            case 0x24B:
                v34 = v11 + 0x3CFECE6C;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0);
                v34 = (FuckEnc::CacheRead<_DWORD>(v10 + 0x348) ^ (v11 + 0x3CFECE6C)) - 0xB45453D;
                v34 = __ROR4__(__ROR4__(v34, FuckEnc::CacheRead<_DWORD>(v4 + 0x30)), 0xB5);
                goto LABEL_1041;
            case 0x24C:
                v15 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 0x2C0i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 0x2A0i64) + 8i64 * (((unsigned __int8)v5 ^ 0x21) & 0xE9)) + 0x3C8i64) + 0x80i64);
                goto LABEL_1040;
            case 0x24D:
                v34 = __ROL4__(v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x248), 0xEC);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x7A0) + 0x748i64);
                v15 = FuckEnc::CacheRead<_DWORD>(v10 + 0x390) + v34;
                goto LABEL_1040;
            case 0x24E:
                v25 = (unsigned __int8)__ROL4__(v5, 2);
                v27 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 8i64 * ((unsigned __int8)v5 & 0xB0)) + 0x118i64) + 0x18i64);
                goto LABEL_356;
            case 0x24F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x278);
                v34 = FuckEnc::CacheRead<_DWORD>(v10 + 0x208) ^ v11;
                v34 += ~FuckEnc::CacheRead<_DWORD>(v4 + 0x1C8);
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x658) + 0x310i64);
                goto LABEL_1041;
            case 0x250:
                v34 = ~__ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x118) + 0x750i64) + 0x4B0i64) + 8i64 * ((unsigned __int8)(0x66 * v5) & 0x86)) + 8i64 * (v5 & 0x1D)) + 0x490i64));
                goto LABEL_1041;
            case 0x251:
                v34 = __ROL4__(v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x248), 0x55);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4C8) + 0x3D8i64) + 8i64 * (((unsigned __int8)v5 ^ 0x2A) & 0xBA)) + 0x4D8i64);
                goto LABEL_1041;
            case 0x252:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x450);
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 0x138i64) + 0x4C0i64) + 0x190i64) + 4i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v10 + 0x6E8), 0x1D));
                goto LABEL_1041;
            case 0x253:
                v34 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x5A0) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x420) + 4i64 * ((unsigned __int8)((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x350) << 6) ^ 0x21u)));
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x748) + 0x80i64);
                goto LABEL_1041;
            case 0x254:
                v34 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x450) + 0x670i64) + 0x1B0i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xF0) + 0x558i64) + 4i64 * (((unsigned __int8)v5 ^ 1) & 3)));
                goto LABEL_1041;
            case 0x255:
                v34 = v11 - ((0xDD85CD80 * FuckEnc::CacheRead<_DWORD>(v4 + 0xC0)) ^ 0xE69AC8AA);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x798) + 0x5A0i64);
                goto LABEL_1041;
            case 0x256:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x10) + 8i64 * ((unsigned __int8)v5 ^ 0x10u)) + 0x80i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE0) + 0x3E8i64) + 8i64 * (unsigned __int8)(0xB * v5)) + 0x5E0i64);
                goto LABEL_1041;
            case 0x257:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x310) ^ v11;
                v34 += (FuckEnc::CacheRead<_DWORD>(v4 + 0x80) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x78) + 0x458i64)) + 1;
                goto LABEL_1041;
            case 0x258:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x100) - 0x266D13EB;
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x10) + 8i64 * (unsigned __int8)(0x58 * v5)) + 0x568i64) + 4i64 * ((0x19 * (_BYTE)v5) & 0x36));
                goto LABEL_1041;
            case 0x259:
                v34 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x798) + 0x390i64) + 0x31E7D0FF);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x378) + 0x638i64);
                v15 = FuckEnc::CacheRead<_DWORD>(v10 + 0x5D8) + v34 + 1;
                goto LABEL_1040;
            case 0x25A:
                v34 = v11 - 0xDC67A6B * FuckEnc::CacheRead<_DWORD>(v4 + 0x698);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x498) & 0xAE)) + 0x30i64);
                goto LABEL_1041;
            case 0x25B:
                v34 = __ROR4__(v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x720), v5);
                v34 ^= 0xD1FF41C5 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8) >> 0xF);
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_DWORD>(v4 + 0x550));
                goto LABEL_1041;
            case 0x25C:
                Calls::FastCall(v4 + 0x5C0, &v34, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x650) + 0x4C0i64);
                v34 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x68);
                goto LABEL_1041;
            case 0x25D:
                v31 = FuckEnc::CacheRead<_QWORD>(v4 + 0x278);
                v32 = __ROR4__(v5, 0x18) & 0x2B;
                goto LABEL_619;
            case 0x25E:
                v34 = v11 + (v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x408) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x458) ^ (2 * FuckEnc::CacheRead<_DWORD>(v4 + 0x6E8)));
                goto LABEL_1041;
            case 0x25F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x608);
                v34 = (v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x5A0)) ^ 0xDCE12A7C;
                v34 = v34 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8) + 8i64 * (((unsigned __int8)v5 ^ 4) & 0x8E)) + 0x458i64) - 0x68D0FF30;
                goto LABEL_1041;
            case 0x260:
                v34 = v11 + 0x41DF2E58;
                v34 = __ROL4__(v11 + 0x41DF2E58, ~((FuckEnc::CacheRead<_DWORD>(v4 + 0x620) | 5) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x588) - (_DWORD)0x127EE422)));
                goto LABEL_1041;
            case 0x261:
                v34 = (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x728)) ^ 0x18E5909B;
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x68);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6E0);
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_DWORD>(v10 + 0x1C8));
                goto LABEL_1041;
            case 0x262:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x178);
                v15 = v34 ^ (0xE36A802D * FuckEnc::CacheRead<_DWORD>(v4 + 0x720)) ^ ((FuckEnc::CacheRead<_DWORD>(v4 + 0x5A0) >> 1) - 0x3CFE76BC);
                goto LABEL_1040;
            case 0x263:
                v34 = v5 + ~(_DWORD)v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x508) + 0x3A0i64, &v34, v5, v4);
                goto LABEL_1041;
            case 0x264:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x768) + 1;
                v15 = v34 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x5A0) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x650) + 0x588i64);
                goto LABEL_1040;
            case 0x265:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x650) + 0x598i64);
                v34 = v11 ^ ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 0x178i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x420) + 4i64 * (v5 & 0x61)));
                goto LABEL_1041;
            case 0x266:
                v15 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x520) + 8i64 * (__ROL4__((0x6B392C06 * FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0)) | 0x1F, 0x18) & 0x57)) + 0x740i64) + 8i64 * ((unsigned __int8)__ROR4__(v5, 0xA) & 0xC3)) + 0x248i64);
                goto LABEL_1040;
            case 0x267:
                Calls::FastCall(v4 + 0x6B8, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x290) + 8i64 * (unsigned __int8)__ROR4__(v5, 8)) + 0x678i64) + 8i64 * ((unsigned __int8)v5 & 0xED)));
                goto LABEL_1041;
            case 0x268:
                v34 = v11 - 0x72A1165 * FuckEnc::CacheRead<_DWORD>(v4 + 0x5A0);
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8) + 1;
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4C8) + 0x390i64);
                goto LABEL_1041;
            case 0x269:
                v34 = v11 + ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x5D8) ^ 0xD9D4B492);
                goto LABEL_1041;
            case 0x26A:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x5D8);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x150);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v10 + 0x68) ^ 0x59u)) + 0x380i64) + 0x390i64);
                goto LABEL_1041;
            case 0x26B:
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 0x3C8i64) + 0x228i64) + 0x550i64) ^ 0xEEu)) + 0x48i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 0xB)));
                goto LABEL_1041;
            case 0x26C:
                Calls::FastCall(v4 + 0x300, &v34, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x150);
                v34 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x80) ^ v5;
                goto LABEL_1041;
            case 0x26D:
                v34 = v11 ^ (0x71A09364 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x698) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE8) + 0x520i64) + 8i64 * ((unsigned __int8)v5 & 0xAF)) + 0x30i64)));
                goto LABEL_1041;
            case 0x26E:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x200) ^ v11;
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x530) + 8i64 * (v5 & 0x10)) + 0x530i64) + 8i64 * ((unsigned __int8)(0xAB * v5) & 0x8B)) + 0x1C0i64) + 0x458i64);
                goto LABEL_1041;
            case 0x26F:
                v34 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x100) ^ 0xD5);
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x408);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x558) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8) & 0xF7));
                goto LABEL_1041;
            case 0x270:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x78) + 0x368i64) + 8i64 * (((unsigned __int8)v5 ^ 0xFC) & 0x27)) + 0x238i64) + 0x448i64, &v34, v5, v4);
                goto LABEL_1041;
            case 0x271:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x5D8) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x658) + 0xE0i64) + 0x130i64) + 0x4D8i64);
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x458);
                goto LABEL_1041;
            case 0x272:
                v34 = v11 - 0x64CE024B;
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x550) ^ (v11 - 0x64CE024B) ^ 0xC3018944;
                v34 ^= (unsigned int)0xFFFFFFE & (FuckEnc::CacheRead<_DWORD>(v4 + 0x698) >> 4);
                goto LABEL_1041;
            case 0x273:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xF0) + 0x280i64) + 0x118i64) + 0x228i64);
                v34 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x248) ^ FuckEnc::CacheRead<_DWORD>(v10 + 0x498);
                goto LABEL_1041;
            case 0x274:
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x220) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x1B)) + 0x728i64) ^ (FuckEnc::CacheRead<_BYTE>(v4 + 0x248) + 0x11) ^ 3);
                goto LABEL_1041;
            case 0x275:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x458);
                Calls::FastCall(v4 + 0xD0, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x658) + 0x278i64));
                v34 ^= v5;
                goto LABEL_1041;
            case 0x276:
                Calls::FastCall(v4 + 0x738, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x748) + 0x1C0i64) + 0x4C8i64) + 0x668i64) + 8i64 * ((unsigned __int8)v5 ^ 0xD4u)));
                goto LABEL_1041;
            case 0x277:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x698);
                Calls::FastCall(v4 + 0x40, &v34, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x750));
                v34 = ~v34;
                goto LABEL_1041;
            case 0x278:
                v34 = __ROR4__(v11, v5);
                v34 += ~FuckEnc::CacheRead<_DWORD>(v4 + 0x390);
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x508) + 0xE8i64) + 0x6E8i64);
                goto LABEL_1040;
            case 0x279:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x498);
                v34 = v34 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x200) ^ 0xC2u)) + 0x440i64) - FuckEnc::CacheRead<_DWORD>(v4 + 0x310);
                goto LABEL_1041;
            case 0x27A:
                v34 = v11 - ((unsigned int)~(FuckEnc::CacheRead<_DWORD>(v4 + 0x698) << 0x11) >> 0x11) - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x130) + 0x5D8i64) << 0x1D);
                goto LABEL_1041;
            case 0x27B:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x458) ^ v11;
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 0x568i64) + 4i64 * ((0xD6 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x370) + 0x4B8i64) + 0xC0i64)) & 0x7E));
                goto LABEL_1041;
            case 0x27C:
                v34 = v5 ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x370);
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x290) + 8i64 * (unsigned __int8)(0xD6 * v5)) + 0x130i64) + 0x180i64) + 4i64 * (v5 & 0x65)) ^ v5 ^ v11;
                goto LABEL_1041;
            case 0x27D:
                v34 = (FuckEnc::CacheRead<_DWORD>(v4 + 0xC0) ^ v11 ^ 0x82AA1452) - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 8i64 * (unsigned __int8)(0xDC * FuckEnc::CacheRead<_BYTE>(v4 + 0x588))) + 0x230i64);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x68);
                goto LABEL_1041;
            case 0x27E:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x348);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x490);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F8) + 8i64 * (unsigned __int8)(0x2E * v5)) + 0x2C0i64);
                goto LABEL_1041;
            case 0x27F:
                v31 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1C0);
                v32 = (unsigned __int8)v5 & 0xB4;
            LABEL_619:
                Calls::FastCall(v31 + 0x560, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x148) + 8 * v32));
                goto LABEL_1041;
            case 0x280:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x100);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 0x180i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 1));
                v15 = FuckEnc::CacheRead<_DWORD>(v4 + 0x408) + v34 + 1;
                goto LABEL_1040;
            case 0x281:
                Calls::FastCall(v4 + 0xA0, &v34, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x118));
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x598) + 0xB8i64);
                goto LABEL_1041;
            case 0x282:
                Calls::FastCall(v4 + 0x258, &v34, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4B8);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x408);
                goto LABEL_1041;
            case 0x283:
                Calls::FastCall(v4 + 0x3A0, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x678) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x100), 7)) + 0x610i64) + 0x450i64) + 0x758i64));
                goto LABEL_1041;
            case 0x284:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x80) & 0xCB)) + 0x650i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x680) + 8i64 * ((unsigned __int8)v5 & 0xDD), &v34, v5, v4);
                goto LABEL_1041;
            case 0x285:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 8i64 * ((unsigned __int8)v5 & 0xBB)) + 0x168i64) + 8i64 * (((unsigned __int8)v5 ^ 8) & 0x18), &v34, v5, v4);
                goto LABEL_1041;
            case 0x286:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x508) + 0x350i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x798) + 0x118i64);
                v34 = (v34 + FuckEnc::CacheRead<_DWORD>(v10 + 0x6E8)) ^ 0x2CD9550F;
                goto LABEL_1041;
            case 0x287:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x260);
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x10) + 8i64 * ((unsigned __int8)__ROR4__(v5, 0x12) & 0xC8)) + 0xE8i64) + 0x728i64);
                goto LABEL_1041;
            case 0x288:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x78) + 0x348i64) ^ v11;
                v15 = v34 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x588) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 0x4D8i64);
                goto LABEL_1040;
            case 0x289:
                v34 = v11 - 0x4D619AB0 * FuckEnc::CacheRead<_DWORD>(v4 + 0x208) + 0x3CFE76BC;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x78);
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x130) + 0x5A0i64));
                goto LABEL_1041;
            case 0x28A:
                v34 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x620) ^ 0x78880599);
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_BYTE>(v4 + 0x80) * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x380) + 0x450i64) + 0xC0i64));
                goto LABEL_1041;
            case 0x28B:
                v34 = v11 ^ 0xB7D0747E;
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x30) ^ v11 ^ 0xB7D0747E;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x528);
                v34 = __ROL4__(v34, v5 * (FuckEnc::CacheRead<_BYTE>(v10 + 0x208) + 0x7E));
                goto LABEL_1041;
            case 0x28C:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x1B0) - v5 - 0x3CFE76BB;
                v15 = v34 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4F0) + 0x6E8i64);
                goto LABEL_1040;
            case 0x28D:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x750);
                Calls::FastCall(v4 + 0x6B8, &v34, v5, v10);
                v34 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 0x68i64);
                goto LABEL_1041;
            case 0x28E:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0) ^ v11;
                Calls::FastCall(v4 + 0x5F0, &v34, v5, v4);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x378) + 0x2F8i64);
                goto LABEL_1041;
            case 0x28F:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x768);
                v34 += (FuckEnc::CacheRead<_DWORD>(v4 + 0x440) | 0x11) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 8i64 * ((unsigned __int8)__ROL4__(v5, 0x13) & 0xF6)) + 0x2F8i64);
                goto LABEL_1041;
            case 0x290:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 8i64 * (unsigned __int8)(0xD0 * v5)) + 0xC0i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x510) + 0x1C0i64);
                v15 = FuckEnc::CacheRead<_DWORD>(v10 + 0x5D8) + v34;
                goto LABEL_1040;
            case 0x291:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x290) + 8i64 * (unsigned __int8)(0x4A * v5)) + 0x4B8i64);
                v15 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0xD8) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x1C)) + 0x420i64) + 4i64 * ((unsigned __int8)__ROR4__(v5, 9) & 0xAE)) - 0x3CEECE1A);
                goto LABEL_1040;
            case 0x292:
                v34 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x5D8);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x68) ^ 0x8Au)) + 0x378i64) + 0x5E0i64);
                goto LABEL_1041;
            case 0x293:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4F0);
                v34 = ~(v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x2D8) + 4i64 * ((unsigned __int8)v5 ^ 0x22u)));
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_DWORD>(v4 + 0x698) - (_DWORD)0x926F0D2);
                goto LABEL_1041;
            case 0x294:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x608) + 0x508i64);
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x5E0);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 0x6A0i64) + 4i64 * (__ROR4__(v5, 0x17) & 0x48));
                goto LABEL_1041;
            case 0x295:
                v34 = __ROR4__(v11 + 0x7A18A42B, v5) - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x798);
                Calls::FastCall(v4 + 0x6C8, &v34, v5, v10);
                goto LABEL_1041;
            case 0x296:
                v34 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x720) - 0x3CFE76BC);
                v15 = v34 - ((0xC311311E * ((FuckEnc::CacheRead<_DWORD>(v4 + 0x6E8) << 6) | 0x15)) >> 7);
                goto LABEL_1040;
            case 0x297:
                v34 = __ROR4__(v11 + 0x7CEF3E4A, 0x71);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x298);
                v15 = v34 - ((FuckEnc::CacheRead<_DWORD>(v4 + 0x100) * FuckEnc::CacheRead<_DWORD>(v10 + 0x1C8)) ^ 0x20D0FA4A);
                goto LABEL_1040;
            case 0x298:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x238);
                v34 = FuckEnc::CacheRead<_DWORD>(v10 + 0x178) ^ v11;
                v15 = v34 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x410) + 4i64 * (((unsigned __int8)(FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0) - 0x7F) ^ 0x40) & 0xC0));
                goto LABEL_1040;
            case 0x299:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x78);
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x620);
                v15 = v34 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x620) ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0xB8));
                goto LABEL_1040;
            case 0x29A:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8) + 0x3C0i64);
                v34 = ~(v11 - (FuckEnc::CacheRead<_DWORD>(v10 + 0x440) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3C0) + 0x528i64) + 0x440i64)));
                goto LABEL_1041;
            case 0x29B:
                v34 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0xC0) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0) >> 0x1D);
                v15 = v34 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x508) + 0x5E0i64) ^ 0x43CBE1F5);
                goto LABEL_1040;
            case 0x29C:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x1C8) + 1;
                v15 = v34 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x720) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x798) + 0x208i64) - 0x3CEECE1A));
                goto LABEL_1040;
            case 0x29D:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x4C8) + 0x4A8i64, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x600) + 0x4F0i64));
                goto LABEL_1041;
            case 0x29E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x118);
                Calls::FastCall(v10 + 0x258, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x750) + 0x3C0i64));
                goto LABEL_1041;
            case 0x29F:
                v34 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 8i64 * ((unsigned __int8)v5 ^ 0xF3u)) + 0x5E0i64) >> 6);
                v34 += ~FuckEnc::CacheRead<_DWORD>(v4 + 0x208);
                goto LABEL_1041;
            case 0x2A0:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x798) + 0x580i64, &v34, v5, v4);
                v34 -= 0x2E256EB6;
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x458);
                goto LABEL_1041;
            case 0x2A1:
                v34 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x408) ^ (0x849F27AC * FuckEnc::CacheRead<_DWORD>(v4 + 0x458)));
                v34 = __ROR4__(v34, 0x88 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x450) + 0x178i64));
                goto LABEL_1041;
            case 0x2A2:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x520) + 8i64 * ((unsigned __int8)(0xFD * v5) & 0xD1)) + 0x80i64);
                v34 += ((FuckEnc::CacheRead<_DWORD>(v4 + 0x30) + 1) << 0xE) - v5;
                goto LABEL_1041;
            case 0x2A3:
                v34 = v11 ^ 0xD1FF41E9;
                v34 = v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x5D8) ^ v11 ^ 0xD1FF41E9;
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x670) + 0x3A8i64) + 0x698i64);
                goto LABEL_1041;
            case 0x2A4:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2A0) + 8i64 * ((unsigned __int8)(0x6E * v5) & 0xC8)) + 0x10i64) + 8i64 * (unsigned __int8)~(_BYTE)v5) + 0xE8i64) + 0x658i64) + 0x758i64) + 0x178i64);
                goto LABEL_1041;
            case 0x2A5:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x100);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x138) + 0x740i64) + 8i64 * ((unsigned __int8)v5 ^ 0x78u)) + 0xE8i64);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x200);
                goto LABEL_1041;
            case 0x2A6:
                v34 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x498) - 0x6FA95AC9) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 4i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0xB8) ^ 0xF9) & 0xD6)) | 2);
                goto LABEL_1041;
            case 0x2A7:
                v34 = (_DWORD)0x11F12F00 + v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x668) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x16)) + 0x350i64);
                goto LABEL_1041;
            case 0x2A8:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x608) + 0x4B8i64);
                v34 += FuckEnc::CacheRead<_DWORD>(v10 + 0x4D8) - FuckEnc::CacheRead<_DWORD>(v4 + 0x498) + 1;
                goto LABEL_1041;
            case 0x2A9:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8) + 8i64 * ((unsigned __int8)(0x4E * v5) & 0xB0)) + 0x608i64);
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x658) + 0x558i64) + 4i64 * (unsigned __int8)(0xDE * v5)) ^ v11;
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(v4 + 0xC0);
                goto LABEL_1040;
            case 0x2AA:
                v34 = __ROR4__(v11, 0xB5);
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0x248);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x200) + (FuckEnc::CacheRead<_DWORD>(v4 + 0x588) << 0x10);
                goto LABEL_1041;
            case 0x2AB:
                v34 = v11 - 0x3E4925DF;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3C8);
                v34 = v11 - 0x3E4925DF - FuckEnc::CacheRead<_DWORD>(v10 + 0x248);
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8) + 4i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x350) ^ 0xEE) & 0xD1)));
                goto LABEL_1041;
            case 0x2AC:
                v34 = v11 ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x720) - 0x1D36AF8B);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x600) + 0x260i64);
                v34 = __ROR4__(FuckEnc::CacheRead<_DWORD>(v10 + 0x728) ^ v34, v5);
                goto LABEL_1041;
            case 0x2AD:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE0) + 0xD8i64) + 8i64 * ((unsigned __int8)(0x84 * v5) & 0xD1)) + 0x6D8i64, &v34, v5, v4);
                goto LABEL_1041;
            case 0x2AE:
                v34 = v11 - ((FuckEnc::CacheRead<_DWORD>(v4 + 0x6D0) * (FuckEnc::CacheRead<_DWORD>(v4 + 0xC0) + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x370) + 0x720i64))) ^ 0x1D6A41DC);
                goto LABEL_1041;
            case 0x2AF:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x228);
                v34 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x368) + 8i64 * (unsigned __int8)__ROR4__(v5, 4)) + 0x4B0i64) + 8i64 * (unsigned __int8)(0xE1 * v5)) + 0x200i64) ^ v11);
                goto LABEL_1041;
            case 0x2B0:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D8) + 8i64 * ((unsigned __int8)__ROL4__(v5, 0x1C) & 0x95)) + 0x638i64) + 0x200i64) ^ v11;
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x368) + 8i64 * (((unsigned __int8)v5 ^ 0xB7) & 0xD8)) + 0x68i64);
                goto LABEL_1041;
            case 0x2B1:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x248), 0x14)) + 0x208i64);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x750) + 0x5E0i64) << 0x1E;
                goto LABEL_1041;
            case 0x2B2:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x1B0) - 0x482A8DA8;
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x220) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x68) & 0x1B)) + 0x370i64) + 0x490i64);
                goto LABEL_1041;
            case 0x2B3:
                v34 = v5 ^ (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x5A0));
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE8) + 0x308i64) + 0x30i64) | 0x12;
                goto LABEL_1041;
            case 0x2B4:
                v34 = v11 ^ 0xE9A8C16E;
                v34 = (v11 ^ 0xE9A8C16E) - (FuckEnc::CacheRead<_DWORD>(v4 + 0x728) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x530) + 8i64 * (v5 & 0x54)) + 0x30i64)) - (_DWORD)0x12A37430;
                goto LABEL_1041;
            case 0x2B5:
                Calls::FastCall(v4 + 0x570, &v34, v5, v4);
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2A0) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x19)) + 0x1B0i64);
                goto LABEL_1041;
            case 0x2B6:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x798);
                Calls::FastCall(v4 + 0x648, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x668) + 8i64 * (v5 & 0x27)));
                goto LABEL_1041;
            case 0x2B7:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x798);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x430) + 8i64 * ((unsigned __int8)v5 & 0xFC), &v34, v5, FuckEnc::CacheRead<_QWORD>(v4 + 8));
                goto LABEL_1041;
            case 0x2B8:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x238) + 0x290i64) + 8i64 * ((unsigned __int8)__ROR4__((_DWORD)0x8AA9A08 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4C0) + 0x728i64), 0x17) & 0xF1)) + 0x100i64) ^ v11;
                goto LABEL_1041;
            case 0x2B9:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x658);
                Calls::FastCall(v4 + 0x60, &v34, v5, v10);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0) >> 0x19;
                goto LABEL_1041;
            case 0x2BA:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x408);
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_DWORD>(v4 + 0xC0));
                v34 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0) & 0xD)) + 0xC0i64);
                goto LABEL_1041;
            case 0x2BB:
                v34 = __ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0) ^ v11, 0xA4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x230);
                v34 += FuckEnc::CacheRead<_DWORD>(v10 + 0x390) * FuckEnc::CacheRead<_DWORD>(v4 + 0x5A0);
                goto LABEL_1041;
            case 0x2BC:
                v34 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x498) ^ v5);
                v34 = v34 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x378) + 0x7A0i64) + 0x228i64) + 0x30i64) + 0x693CFECF;
                goto LABEL_1041;
            case 0x2BD:
                v34 = v11 ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0xB8) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x720) ^ 0x8Cu)) + 0x420i64) + 4i64 * (v5 & 0x67)));
                goto LABEL_1041;
            case 0x2BE:
                v34 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x6E8) >> 0xE);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 8);
                Calls::FastCall(v4 + 0x60, &v34, v5, v10);
                goto LABEL_1041;
            case 0x2BF:
                v34 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x620) & 0xFFFFFFEF);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x600);
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x150) + 0x100i64);
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(v4 + 0x248);
                goto LABEL_1040;
            case 0x2C0:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6E0) + 0x80i64);
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(v4 + 0x248) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x180) + 4i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x498) ^ 0xE7) & 0x9D));
                goto LABEL_1040;
            case 0x2C1:
                v34 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1C0) + 0x458i64) & 0xFFFFFFE6;
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x308) + 0x458i64);
                goto LABEL_1041;
            case 0x2C2:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x508) + 0x530i64) + 8i64 * (((unsigned __int8)v5 ^ 0xBC) & 0xE3)) + 0x520i64) + 8i64 * ((unsigned __int8)(0xE9 * v5) & 0xC1)) + 0x450i64);
                v34 = FuckEnc::CacheRead<_DWORD>(v10 + 0x588) ^ v11 ^ 0x58C78E79;
                goto LABEL_1041;
            case 0x2C3:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x550);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 0x158i64) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x698) & 0x8B)) + 0x758i64) + 0x6E8i64);
                goto LABEL_1041;
            case 0x2C4:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 0x638i64) + 0x638i64) + 0x3A8i64) + 0x3E0i64);
                v15 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x440) + 1;
                goto LABEL_1040;
            case 0x2C5:
                v34 = v5 ^ (v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x6D0));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x260);
                Calls::FastCall(v4 + 0x1E8, &v34, v5, v10);
                goto LABEL_1041;
            case 0x2C6:
                v34 = v5 ^ (v11 + 0x72A58952);
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x200);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x368) + 8i64 * ((unsigned __int8)v5 & 0x8E)) + 0x550i64);
                goto LABEL_1041;
            case 0x2C7:
                v34 = v11 - 0x49BF26B8;
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x728) ^ (v11 - 0x49BF26B8);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE0) + 0x4C8i64) + 0x378i64);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x30);
                goto LABEL_1041;
            case 0x2C8:
                v15 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x748) + 0x740i64) + 8i64 * (unsigned __int8)(0xCC * v5)) + 0x130i64) + 0x278i64) + 0xC0i64);
                goto LABEL_1040;
            case 0x2C9:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x78);
                v34 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x118) + 0x408i64) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v10 + 0x410) + 4i64 * (unsigned __int8)__ROL4__(v5, 0x12))) + 0x76E23390;
                goto LABEL_1041;
            case 0x2CA:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4C8) + 0x280i64);
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 0x5A0));
                v34 += ~(v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x30));
                goto LABEL_1041;
            case 0x2CB:
                v34 = v11 + v5;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x19)) + 0x2E0i64, &v34, v5, v4);
                goto LABEL_1041;
            case 0x2CC:
                v34 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 0x248i64) | 0x1E);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3C0);
                v15 = FuckEnc::CacheRead<_DWORD>(v10 + 0x728) ^ v34 ^ 0x94A4D237;
                goto LABEL_1040;
            case 0x2CD:
                v34 = ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x200) ^ v11);
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(v4 + 0x248) + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x450) + 0x208i64) | 0xE);
                goto LABEL_1040;
            case 0x2CE:
                v34 = v5 + v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x80);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x10) + 8i64 * (v5 & 0x16)) + 0x6B0i64) + 4i64 * (((unsigned __int8)v5 ^ 5) & 0x25));
                goto LABEL_1041;
            case 0x2CF:
                v34 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8) + 8i64 * ((unsigned __int8)v5 ^ 0x25u)) + 0x568i64) + 4i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x350) ^ 0x52u)) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x348) & 0xFFFFFFF3);
                goto LABEL_1041;
            case 0x2D0:
                v34 = v11 ^ 0xBDEB6092;
                v34 = v11 ^ 0xBDEB6092 ^ (0x2C3DD681 * FuckEnc::CacheRead<_DWORD>(v4 + 0x458));
                v15 = v34 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x5A0) >> 2);
                goto LABEL_1040;
            case 0x2D1:
                v34 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x510) + 0x3D8i64) + 8i64 * ((unsigned __int8)(0xD9 * v5) & 0xE6)) + 0x208i64) ^ v11) - v5;
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x750) + 0x200i64));
                goto LABEL_1041;
            case 0x2D2:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x80);
                Calls::FastCall(v4 + 0x4A8, &v34, v5, v4);
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x550) ^ 0xC3013136;
                goto LABEL_1041;
            case 0x2D3:
                Calls::FastCall(v4 + 0x2D0, &v34, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x610));
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x508) + 0x310i64));
                goto LABEL_1041;
            case 0x2D4:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4F0) + 0x658i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x2E8) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v10 + 0x100) ^ 0xEDu), &v34, v5, v4);
                goto LABEL_1041;
            case 0x2D5:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0) ^ v11;
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0x68) | 0x19;
                Calls::FastCall(v4 + 0x40, &v34, v5, v4);
                goto LABEL_1041;
            case 0x2D6:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x608);
                v34 = v11 ^ (0xE3E494B0 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x758) + 0x588i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x420) + 4i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0) ^ 0xBu)));
                goto LABEL_1041;
            case 0x2D7:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2A0) + 8i64 * ((0xC3 * FuckEnc::CacheRead<_BYTE>(v4 + 0x100)) & 0x66)) + 0x528i64) + 0x1C0i64) + 8i64 * (unsigned __int8)(0x97 * v5)) + 0x118i64);
                v15 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x68);
                goto LABEL_1040;
            case 0x2D8:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 8i64 * (unsigned __int8)v5) + 0x428i64, &v34, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0));
                goto LABEL_1041;
            case 0x2D9:
                v15 = v11 ^ ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x668) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x16)) + 0x10i64) + 8i64 * (((unsigned __int8)v5 ^ 0x24) & 0xAC)) + 0xF0i64) + 0x6D0i64) * v5);
                goto LABEL_1040;
            case 0x2DA:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x2F8) ^ v11;
                Calls::FastCall(v4 + 0x448, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x220) + 8i64 * ((unsigned __int8)v5 ^ 0x13u)));
                goto LABEL_1041;
            case 0x2DB:
                v34 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x720) ^ 0x8ACB4A69);
                v34 = v34 - 0x22046EAD * FuckEnc::CacheRead<_DWORD>(v4 + 0x588) - FuckEnc::CacheRead<_DWORD>(v4 + 0x2F8);
                goto LABEL_1041;
            case 0x2DC:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x720);
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x30);
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x748) + 0x528i64) + 0x5A0i64) - 0x1B);
                goto LABEL_1041;
            case 0x2DD:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x78);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x2A8) + 8i64 * (unsigned __int8)__ROR4__(v5, 0xE), &v34, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x3C8));
                goto LABEL_1041;
            case 0x2DE:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE0) + 0x3E0i64) + 0x528i64);
                v34 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 0x1C8) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x678) + 8i64 * ((unsigned __int8)v5 ^ 0x73u)) + 0x620i64));
                goto LABEL_1041;
            case 0x2DF:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x10) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 0x5F8i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 0xB)) + 0x728i64) & 0xA3)) + 0x6E8i64);
                goto LABEL_1041;
            case 0x2E0:
                v34 = v11 ^ 0xFA8A2CE3;
                v34 = (v11 ^ 0xFA8A2CE3) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x308) + 0x100i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3C0);
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x38) + 4i64 * ((unsigned __int8)v5 ^ 0xF1u));
                goto LABEL_1041;
            case 0x2E1:
                v34 = __ROL4__(__ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0xB8)), 0x31);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6E0) + 0x3D8i64) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x588) ^ 2) & 0xD2)) + 0x68i64);
                goto LABEL_1041;
            case 0x2E2:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x230) + 0x588i64) ^ v11;
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x758) + 0x550i64);
                v15 = FuckEnc::CacheRead<_DWORD>(v4 + 0x248) + v34 + 1;
                goto LABEL_1040;
            case 0x2E3:
                v34 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2C8) + 4i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x608) + 0x6D0i64) ^ 0x65) & 0xEF)) * ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x750) + 0x200i64));
                goto LABEL_1041;
            case 0x2E4:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8) + 0x550i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x280) + 0x5F8i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x1E)) + 0x178i64) + 1;
                goto LABEL_1041;
            case 0x2E5:
                v34 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x768) ^ (0xBF6EF096 * v5 * FuckEnc::CacheRead<_DWORD>(v4 + 0x5D8) * FuckEnc::CacheRead<_DWORD>(v4 + 0x620)));
                goto LABEL_1041;
            case 0x2E6:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xF0) + 0x1C0i64);
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x200) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0) + 0x69D6DEDB);
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(v4 + 0x498);
                goto LABEL_1040;
            case 0x2E7:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x200) ^ v11 ^ 0xFFB5FF6F;
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x7A0) + 0x670i64) + 0x558i64) + 4i64 * ((0xD2 * (_BYTE)v5) & 0x7E));
                goto LABEL_1041;
            case 0x2E8:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x450) + 0x778i64, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 0x138i64));
                goto LABEL_1041;
            case 0x2E9:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xE8);
                v34 = FuckEnc::CacheRead<_DWORD>(v10 + 0x768) ^ v11;
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 4i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x138) + 0x550i64) & 0xFFFFFFFA, 0x1D));
                goto LABEL_1041;
            case 0x2EA:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x2F8) ^ v11;
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x408);
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0x200);
                v15 = v34 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x350) ^ 0x567823F2);
                goto LABEL_1040;
            case 0x2EB:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x178) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x138);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x498);
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE0) + 0x5E0i64));
                goto LABEL_1041;
            case 0x2EC:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x15)) + 0x6C0i64) + 8i64 * (((unsigned __int8)v5 ^ 7) & 0x87), &v34, v5, v4);
                goto LABEL_1041;
            case 0x2ED:
                v34 = v11 - 0x19D4F04B;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x450);
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0xB8) * FuckEnc::CacheRead<_DWORD>(v10 + 0x348), 6)) + 0x408i64) ^ (v11 - 0x19D4F04B);
                goto LABEL_1041;
            case 0x2EE:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x260);
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x420) + 4i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x38) + 4i64 * (v5 & 0x5E)) ^ 0xDAu)) * (FuckEnc::CacheRead<_DWORD>(v10 + 0x5A0) << 0x16);
                goto LABEL_1041;
            case 0x2EF:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 0x168i64) + 8i64 * (v5 & 0x48), &v34, v5, v4);
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0);
                goto LABEL_1041;
            case 0x2F0:
                Calls::FastCall(v4 + 0xD0, &v34, v5, v4);
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_DWORD>(v4 + 0x100));
                goto LABEL_1041;
            case 0x2F1:
                Calls::FastCall(v4 + 0x198, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D8) + 8i64 * ((unsigned __int8)v5 & 0x9D)));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x610);
                v34 += FuckEnc::CacheRead<_DWORD>(v10 + 0x30);
                goto LABEL_1041;
            case 0x2F2:
                Calls::FastCall(v4 + 0xD0, &v34, v5, v4);
                v34 += 0x995F1547 * FuckEnc::CacheRead<_DWORD>(v4 + 0x348);
                goto LABEL_1041;
            case 0x2F3:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x380);
                v15 = ~(v11 ^ (v5 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x308) + 0x200i64) * (FuckEnc::CacheRead<_DWORD>(v10 + 0x80) + 0x7CD0FFC7)));
                goto LABEL_1040;
            case 0x2F4:
                v34 = (v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x698) ^ 0x8D1E7D77)) ^ 0xAEC30131;
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 8i64 * ((unsigned __int8)v5 ^ 0x5Du)) + 0x758i64) + 0x68i64);
                goto LABEL_1041;
            case 0x2F5:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x10) + 8i64 * (~(_BYTE)v5 & 0x22)) + 0x1C0i64) + 0x220i64) + 8i64 * (unsigned __int8)(0x72 * v5)) + 0x280i64);
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x568) + 4i64 * (unsigned __int8)(0xFA * v5));
                goto LABEL_1041;
            case 0x2F6:
                v34 = __ROR4__(__ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x490)), v5) + 0x5026B734;
                Calls::FastCall(v4 + 0x1A8, &v34, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x750));
                goto LABEL_1041;
            case 0x2F7:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x348);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x530) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1F)) + 0x280i64) + 0x228i64) + 0x490i64);
                goto LABEL_1041;
            case 0x2F8:
                v34 = (FuckEnc::CacheRead<_DWORD>(v4 + 0x588) ^ v11) + 0x33C254E3;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6E0);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x668) + 8i64 * ((unsigned __int8)v5 & 0x97)) + 0x458i64);
                goto LABEL_1041;
            case 0x2F9:
                v34 = __ROL4__(v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x608) + 0x498i64), 0xD6);
                v34 = v34 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x220) + 8i64 * (__ROR4__(v5, 0x1A) & 0x47)) + 0x768i64) - v5;
                goto LABEL_1041;
            case 0x2FA:
                v34 = v11 ^ 0xF6F806AF;
                v15 = FuckEnc::CacheRead<unsigned __int16>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x290) + 8i64 * (__ROR4__(v5, 0xD) & 0x5B)) + 0x722i64) + (v11 ^ 0xF6F806AF) + 0x2E00BE64;
                goto LABEL_1040;
            case 0x2FB:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x7A0) + 0xE8i64);
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x678) + 8i64 * (unsigned __int8)__ROL4__(v5, 0xC)) + 0x668i64) + 8i64 * (((unsigned __int8)v5 ^ 0x50) & 0xD4)) + 0x440i64) ^ v11;
                goto LABEL_1041;
            case 0x2FC:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x178) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x10) + 8i64 * ((8 * (_BYTE)v5) & 0x1F)) + 0x490i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0);
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(v10 + 0x550);
                goto LABEL_1040;
            case 0x2FD:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x30);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x780);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10) + 8i64 * (((unsigned __int8)v5 ^ 0x20) & 0xA3)) + 0x148i64) + 8i64 * ((unsigned __int8)v5 ^ 0xDDu)) + 0x68i64);
                goto LABEL_1041;
            case 0x2FE:
                v15 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x650) + 0x1C8i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D8) + 8i64 * ((0xEC * ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0xC0)) & 0x27)) + 0x658i64) + 0x310i64);
                goto LABEL_1040;
            case 0x2FF:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x508) + 0x208i64) - 0x41B14112;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6E0) + 0x528i64);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x38) + 4i64 * (unsigned __int8)__ROR4__(v5, 0x15));
                goto LABEL_1041;
            case 0x300:
                v34 = __ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x348) ^ v11, 0xF9);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x6E0) + 0x40i64, &v34, v5, v4);
                goto LABEL_1041;
            case 0x301:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x668) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x350) & 0xB2)) + 0xE0i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x20) + 8i64 * ((unsigned __int8)v5 ^ 0xA6u), &v34, v5, v4);
                goto LABEL_1041;
            case 0x302:
                v28 = FuckEnc::CacheRead<_QWORD>(v4 + 0x658);
                v25 = v5 & 0x2B;
                v27 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x510) + 0x578i64);
                goto LABEL_357;
            case 0x303:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2A0) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1A)) + 0x600i64) + 0x570i64, &v34, v5, v4);
                goto LABEL_1041;
            case 0x304:
                v34 = v11 ^ 0xDB9D0BB1;
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x698) + (v11 ^ 0xDB9D0BB1) + 0x23514A19;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4C0);
                v15 = FuckEnc::CacheRead<_DWORD>(v10 + 0x390) ^ v34;
                goto LABEL_1040;
            case 0x305:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x678) + 8i64 * (((unsigned __int8)v5 ^ 0xB7) & 0xFA)) + 8i64);
                v34 = v11 - 0x3CFECEDA * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 8) + 0x200i64) + 0x504F57C8;
                goto LABEL_1041;
            case 0x306:
                v34 = v11 + 0x6EE14312;
                v34 = __ROL4__(v11 + 0x6EE14312, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x520) + 8i64 * ((unsigned __int8)v5 ^ 5u)) + 0x5F8i64) + 8i64 * ((unsigned __int8)v5 ^ 0x7Eu)) + 0x208i64)) ^ 0x9CADD6D4;
                goto LABEL_1041;
            case 0x307:
                v34 = ~(v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x68) & 0xFFFFFFE0 | 6) - 0xB540856);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x7A0);
                v34 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x30);
                goto LABEL_1041;
            case 0x308:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x1C8) + 1;
                goto LABEL_1041;
            case 0x309:
                v34 = v11 + 0x2E00BE9E;
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x10) + 8i64 * (v5 & 0x10)) + 0x190i64) + 4i64 * (FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 0x178i64) ^ 0xE5u)) ^ (v11 + 0x2E00BE9E);
                goto LABEL_1041;
            case 0x30A:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x378);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x2E8) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x308) + 0x6E8i64) & 0xF1), &v34, v5, v10);
                goto LABEL_1041;
            case 0x30B:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 0x4F0i64) + 0x68i64) - 0x276F3E35;
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x698) | 2;
                goto LABEL_1041;
            case 0x30C:
                v34 = ~(_DWORD)v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x260);
                v34 = ~(_DWORD)v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x520) + 8i64 * ((unsigned __int8)v5 ^ 0x3Au)) + 0x290i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 8)) + 0x768i64);
                goto LABEL_1041;
            case 0x30D:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x680) + 8i64 * (unsigned __int8)(0x58 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D8) + 8i64 * (v5 & 0x6E)) + 0x2F8i64)), &v34, v5, v4);
                goto LABEL_1041;
            case 0x30E:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x650) + 0x5A0i64) + 0x78CD2F01;
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x290) + 8i64 * (((unsigned __int8)v5 ^ 0xCF) & 0xFC)) + 0x550i64);
                goto LABEL_1041;
            case 0x30F:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x440) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x138) + 0x3B8i64, &v34, v5, v4);
                goto LABEL_1041;
            case 0x310:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x600) + 0x368i64) + 8i64 * ((unsigned __int8)v5 & 0xA0)) + 0x2C8i64) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x260) + 0x528i64) + 0xC0i64), 0xF));
                goto LABEL_1041;
            case 0x311:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x750) + 0x78i64) + 0x230i64) + 0x5F0i64, &v34, v5, v4);
                goto LABEL_1041;
            case 0x312:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x728);
                v34 = __ROL4__(v34, ~FuckEnc::CacheRead<_BYTE>(v4 + 0x200) ^ (0x94 * FuckEnc::CacheRead<_BYTE>(v4 + 0x68) + 0x14));
                goto LABEL_1041;
            case 0x313:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8) + 8i64 * (((unsigned __int8)v5 ^ 0xEF) & 0xD4)) + 0x228i64) + 0x610i64) + 0x148i64) + 8i64 * ((unsigned __int8)v5 ^ 0x93u)) + 0x68i64) ^ v11;
                goto LABEL_1041;
            case 0x314:
                v34 = v11 ^ (0xEF42C4C1 * FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8)) ^ 0x6B12743;
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 8i64 * (unsigned __int8)(0xC8 * v5)) + 0x610i64) + 0x5E0i64);
                goto LABEL_1041;
            case 0x315:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x138) + 0x378i64);
                Calls::FastCall(v4 + 0x6A8, &v34, v5, FuckEnc::CacheRead<_QWORD>(v10 + 0x280));
                goto LABEL_1041;
            case 0x316:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x728) + 0x170DA6A6;
                v15 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 0x68i64) ^ v34 ^ 0x557E8A1C;
                goto LABEL_1040;
            case 0x317:
                Calls::FastCall(v4 + 0x5C0, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 0x530i64) + 8i64 * (unsigned __int8)(0xB4 * v5)) + 0x608i64));
                goto LABEL_1041;
            case 0x318:
                v15 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x5A0) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8) + 8i64 * ((0xF7 * FuckEnc::CacheRead<_BYTE>(v4 + 0xC0)) & 0x20)) + 0x510i64) + 0x2F8i64));
                goto LABEL_1040;
            case 0x319:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x200) ^ v11;
                v34 = (v34 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3C0) + 0x2C0i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x378) + 0x698i64)) ^ 0xC3018944;
                goto LABEL_1041;
            case 0x31A:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x6E8) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x510) + 0x600i64);
                v34 = ~(v34 ^ ~FuckEnc::CacheRead<_DWORD>(v10 + 0x768));
                goto LABEL_1041;
            case 0x31B:
                v34 = __ROL4__(v11, ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x650) + 0x740i64) + 8i64 * ((unsigned __int8)(0xB * v5) & 0xCD)) + 0x390i64));
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_BYTE>(v4 + 0x5A0) * v5);
                goto LABEL_1041;
            case 0x31C:
                Calls::FastCall(v4 + 0x6D8, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 8i64 * (unsigned __int8)(0x14 * v5)) + 0x670i64) + 0x3C8i64) + 0x1C0i64));
                goto LABEL_1041;
            case 0x31D:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x440) ^ v11;
                Calls::FastCall(v4 + 0x70, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0) & 0x1B)));
                goto LABEL_1041;
            case 0x31E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x298);
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x728);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 0xB8i64);
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x310);
                goto LABEL_1041;
            case 0x31F:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x650) + 0x4F0i64);
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x208);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3C8) + 0x6E0i64) + 0x528i64) + 0x720i64);
                goto LABEL_1041;
            case 0x320:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x670);
                v34 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v10 + 0x5D8));
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0) | 4;
                goto LABEL_1041;
            case 0x321:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x278) + 0x290i64) + 8i64 * ((unsigned __int8)v5 & 0x84)) + 0x80i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x118) + 0x138i64);
                v34 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x588);
                goto LABEL_1041;
            case 0x322:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x450) + 0x228i64) + 0x5A0i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x380);
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0x30) * FuckEnc::CacheRead<_DWORD>(v10 + 0x5E0);
                goto LABEL_1041;
            case 0x323:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x6E8);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x798);
                v34 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x530) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x768) ^ 0x73u)) + 0x2C0i64);
                goto LABEL_1041;
            case 0x324:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x7A0) + 0x678i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x15)) + 0x638i64);
                v34 = (v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x510) + 0x348i64)) ^ 0xC3013127;
                goto LABEL_1041;
            case 0x325:
                v34 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x720);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x520) + 8i64 * ((unsigned __int8)v5 ^ 2u)) + 0x6D0i64);
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_DWORD>(v4 + 0x208));
                goto LABEL_1041;
            case 0x326:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x138);
                v34 = ~(v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 0x798i64) + 0xB8i64) * (FuckEnc::CacheRead<_DWORD>(v10 + 0x208) | 0x14));
                goto LABEL_1041;
            case 0x327:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x768) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8) + 8i64 * ((unsigned __int8)v5 & 0xA1)) + 0xD8i64) + 8i64 * (unsigned __int8)(0x79 * v5)) + 0x5D8i64);
                goto LABEL_1041;
            case 0x328:
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x180) + 4i64 * (~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x530) + 8i64 * ((unsigned __int8)v5 & 0x8B)) + 0x588i64) & 0x25)) ^ 0xA1);
                goto LABEL_1041;
            case 0x329:
                Calls::FastCall(v4 + 0x418, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x19)) + 0x3C8i64) + 0x3E8i64) + 8i64 * (unsigned __int8)((_BYTE)v5 << 6)));
                goto LABEL_1041;
            case 0x32A:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x278) + 0x308i64) + 0x780i64);
                v34 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x768) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0xD8) + 8i64 * ((unsigned __int8)v5 & 0x86)) + 0x5A0i64));
                goto LABEL_1041;
            case 0x32B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x598);
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x350);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6A0) + 4i64 * (unsigned __int8)(0x4E * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3C0) + 0x4F0i64) + 0x2C0i64)));
                goto LABEL_1041;
            case 0x32C:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x248) - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1C0);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x148) + 8i64 * (__ROR4__(v5, 0x15) & 0x22)) + 0x2C0i64) & 0xFFFFFFF9;
                goto LABEL_1041;
            case 0x32D:
                v34 = v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8) + 0x410i64) + 4i64 * (__ROL4__(v5, 0xC) & 0x38));
                v15 = FuckEnc::CacheRead<_DWORD>(v4 + 0x768) + v34 + 1;
                goto LABEL_1040;
            case 0x32E:
                v34 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0xC0) ^ 0x6CD0FF8F);
                Calls::FastCall(v4 + 0x438, &v34, v5, v4);
                goto LABEL_1041;
            case 0x32F:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x798) + 0x7A0i64) + 0x430i64) + 8i64 * ((unsigned __int8)v5 & 0xF4), &v34, v5, v4);
                goto LABEL_1041;
            case 0x330:
                v25 = (unsigned __int8)__ROR4__(v5, 3) & 0x9D;
                v27 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(v4 + 0xE0) + 8i64 * (unsigned __int8)(0x5A * v5)) + 0x20i64);
                goto LABEL_356;
            case 0x331:
                v34 = v11 - 0x2A0EC899 * FuckEnc::CacheRead<_DWORD>(v4 + 0x498) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4F0) + 0x5A0i64) >> 0xC) + 1;
                goto LABEL_1041;
            case 0x332:
                v34 = v11 - 0x6A4FE820;
                v34 = (v11 - 0x6A4FE820) ^ (0xDE23537B * FuckEnc::CacheRead<_DWORD>(v4 + 0xC0)) ^ 0x14D1FF41;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x138);
                v15 = FuckEnc::CacheRead<_DWORD>(v10 + 0x350) ^ v34;
                goto LABEL_1040;
            case 0x333:
                v34 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0xB8));
                v18 = v34 + 0x19BF51FB * FuckEnc::CacheRead<_DWORD>(v4 + 0x5A0);
                v34 = v18;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x600);
                v19 = __ROR4__(v5, 0x1D);
            LABEL_259:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x410) + 4i64 * v19) ^ v18;
                goto LABEL_1041;
            case 0x334:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 0x1C0i64) + 8i64) + 0x1A8i64, &v34, v5, v4);
                goto LABEL_1041;
            case 0x335:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4C0);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0xC0);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x238) + 0x2C8i64) + 4i64 * ((unsigned __int8)v5 & 0xC9));
                goto LABEL_1041;
            case 0x336:
                v34 = __ROR4__((FuckEnc::CacheRead<_DWORD>(v4 + 0x498) ^ v11) - v5, 0x31);
                v34 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2A0) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x1D)) + 0x6E8i64);
                goto LABEL_1041;
            case 0x337:
                v34 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x178) << 9) - FuckEnc::CacheRead<_DWORD>(v4 + 0x768);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x728);
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8);
                goto LABEL_1041;
            case 0x338:
                v34 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x390) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D8) + 8i64 * ((unsigned __int8)v5 & 0xB2)) + 0x748i64) + 0x180i64) + 4i64 * ((unsigned __int8)v5 ^ 4u)));
                goto LABEL_1041;
            case 0x339:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x78);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x740) + 8i64 * (v5 & 0x4F)) + 0x6A8i64, &v34, v5, v4);
                goto LABEL_1041;
            case 0x33A:
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x530) + 8i64 * ((unsigned __int8)v5 & 0xAC)) + 0x5D8i64) ^ ~(0x31 * FuckEnc::CacheRead<_BYTE>(v4 + 0x348) * v5));
                goto LABEL_1041;
            case 0x33B:
                Calls::FastCall(v4 + 0x738, &v34, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x4F0));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x238);
                v34 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x5A0) << 0x15;
                goto LABEL_1041;
            case 0x33C:
                Calls::FastCall(v4 + 0x198, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x10) + 8i64 * (unsigned __int8)__ROR4__(v5, 0xB)) + 0x308i64));
                goto LABEL_1041;
            case 0x33D:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 0x5A0i64) ^ v11;
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x100);
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8) & 0xFFFFFFFD;
                goto LABEL_1041;
            case 0x33E:
                v34 = v11 ^ (0xC31131E5 * FuckEnc::CacheRead<_DWORD>(v4 + 0x100));
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x798) + 0x4B0i64) + 8i64 * (unsigned __int8)(0xB5 * v5)) + 0x780i64) + 0x440i64);
                goto LABEL_1041;
            case 0x33F:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x350) ^ v11;
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x530) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x12)) + 0xD8i64) + 8i64 * ((unsigned __int8)v5 ^ 0xFEu)) + 0x498i64));
                goto LABEL_1041;
            case 0x340:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 0x350i64);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x2F8);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8);
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(v10 + 0x620);
                goto LABEL_1040;
            case 0x341:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 0x308i64) + 0x4B8i64) + 0x110i64, &v34, v5, v4);
                goto LABEL_1041;
            case 0x342:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 8i64 * ((unsigned __int8)(0x58 * v5) & 0x84)) + 0x798i64) + 0x550i64) ^ v11;
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x758) + 0x30i64);
                goto LABEL_1041;
            case 0x343:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 8i64 * (unsigned __int8)(0x53 * v5)) + 0x280i64);
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x1B0) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2A0) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x200), 3)) + 0x4D8i64);
                goto LABEL_1041;
            case 0x344:
                v34 = (v11 - 0x1F83D1F6) ^ 0xFAA43A41;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x380);
                v34 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x248);
                v34 = (v34 - FuckEnc::CacheRead<_DWORD>(v4 + 0x6D0)) ^ 0x15D2DF0D;
                goto LABEL_1041;
            case 0x345:
                v34 = v11 - 0x31D1FF41;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x380);
                v15 = (v11 - 0x31D1FF41) ^ ((FuckEnc::CacheRead<_DWORD>(v10 + 0x6D0) >> 0x1A) + (FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8) << 0xA));
                goto LABEL_1040;
            case 0x346:
                v25 = (unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x310) ^ 0xB1u;
                v27 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 0x20i64);
                goto LABEL_356;
            case 0x347:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x6E8);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x608);
                v34 = __ROL4__(v34, 0xA7 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x158) + 8i64 * (v5 & 0x31)) + 0x100i64));
                goto LABEL_1041;
            case 0x348:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x4C0) + 0x580i64, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x290) + 8i64 * (v5 & 0x52)));
                goto LABEL_1041;
            case 0x349:
                v34 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x458) ^ 0xEEE921A);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x390);
                v15 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 0x248i64) ^ v34;
                goto LABEL_1040;
            case 0x34A:
                v34 = v11 + 0x1691A085;
                v34 = v11 + 0x1691A085 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x280) + 0x3C8i64) + 0x5A0i64);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x238) + 0x200i64);
                goto LABEL_1041;
            case 0x34B:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x238);
                v34 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x390) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xF0) + 0x498i64);
                goto LABEL_1041;
            case 0x34C:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x100) ^ v11;
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x6E8);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x10) + 8i64 * ((unsigned __int8)(0x4B * FuckEnc::CacheRead<_BYTE>(v4 + 0x728)) & 0xB0)) + 0x280i64) + 0x550i64);
                goto LABEL_1041;
            case 0x34D:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4C8);
                v34 = FuckEnc::CacheRead<_DWORD>(v10 + 0x2F8) ^ v11;
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0xC0);
                v34 ^= v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0xB8);
                goto LABEL_1041;
            case 0x34E:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 0x370i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 7)) + 0x630i64, &v34, v5, v4);
                goto LABEL_1041;
            case 0x34F:
                v34 = v11 + ~FuckEnc::CacheRead<_DWORD>(v4 + 0x100);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xF0);
                v34 += FuckEnc::CacheRead<_DWORD>(v10 + 0x490);
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x608) + 0xC0i64);
                goto LABEL_1041;
            case 0x350:
                v34 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x30) ^ v5 ^ 0xA29FB29C);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 0x2C8i64) + 4i64 * (unsigned __int8)(0xC4 * v5));
                goto LABEL_1041;
            case 0x351:
                v34 = v11 + v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x608);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x138) + 0x1A8i64, &v34, v5, v4);
                goto LABEL_1041;
            case 0x352:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x588) ^ v11;
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 0x1C8i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 0x190i64) + 4i64 * (unsigned __int8)(0xAD * v5));
                goto LABEL_1041;
            case 0x353:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8);
                v34 = ~(v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x758) + 8i64) + 0x5D8i64) - FuckEnc::CacheRead<_DWORD>(v10 + 0x550));
                goto LABEL_1041;
            case 0x354:
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x658) + 0x408i64) ^ (FuckEnc::CacheRead<_BYTE>(v4 + 0x620) * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x670) + 0x1B0i64)));
                goto LABEL_1041;
            case 0x355:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0xB8);
                Calls::FastCall(v4 + 0x428, &v34, v5, v4);
                v34 = v5 ^ __ROR4__(v34, 0xE3);
                goto LABEL_1041;
            case 0x356:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x138) + 8i64);
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 0x450i64) + 0x2C8i64) + 4i64 * ((unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v10 + 0x68), 0xC) & 0xE1));
                goto LABEL_1041;
            case 0x357:
                v15 = v11 + ~FuckEnc::CacheRead<_DWORD>(v4 + 0x440) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x100) ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x1C8));
                goto LABEL_1040;
            case 0x358:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x600) + 0x3A8i64) + 0x368i64) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2A0) + 8i64 * (unsigned __int8)(0xA1 * FuckEnc::CacheRead<_BYTE>(v4 + 0x440))) + 0x720i64) & 0xA3)) + 0x490i64) ^ v11;
                goto LABEL_1041;
            case 0x359:
                v34 = v11 ^ 0xC311311E;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 0x3E8i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x15)) + 0x3E0i64);
                v34 = FuckEnc::CacheRead<_DWORD>(v10 + 0x728) ^ v11 ^ 0xC311311E ^ 0xB6C31131;
                goto LABEL_1041;
            case 0x35A:
                Calls::FastCall(v4 + 0x1A8, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x290) + 8i64 * (v5 & 0x67)) + 0x290i64) + 8i64 * ((unsigned __int8)v5 & 0x99)));
                goto LABEL_1041;
            case 0x35B:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x238) + 0x6A8i64, &v34, v5, v4);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x698) * v5;
                goto LABEL_1041;
            case 0x35C:
                v34 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0xC0) ^ 0x90D7849D);
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0x30) + 0x303B5642;
                v34 ^= ~FuckEnc::CacheRead<_DWORD>(v4 + 0x5D8);
                goto LABEL_1041;
            case 0x35D:
                v34 = v5 ^ ~(v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x748) + 0xB8i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xE0);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x278) + 0x5A0i64);
                goto LABEL_1041;
            case 0x35E:
                Calls::FastCall(v4 + 0x60, &v34, v5, v4);
                v15 = v34 + 1 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x510) + 0x1C8i64);
                goto LABEL_1040;
            case 0x35F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x238);
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x6E8);
                v15 = v34 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x100) + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x748) + 0x620i64) | 3));
                goto LABEL_1040;
            case 0x360:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x780);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x308) + 0x298i64) + 0x538i64) + 8i64 * (unsigned __int8)(0xD0 * v5), &v34, v5, v4);
                goto LABEL_1041;
            case 0x361:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xE0);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x1A0) + 8i64 * ((unsigned __int8)v5 & 0xD3), &v34, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x78));
                goto LABEL_1041;
            case 0x362:
                v34 = __ROL4__(v11, 0x48);
                Calls::FastCall(v4 + 0x258, &v34, v5, v4);
                v34 += 0x2E8B1CC1 - FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0);
                goto LABEL_1041;
            case 0x363:
                v33 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x368) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x728) - 0x3C) & 0x6C));
                goto LABEL_882;
            case 0x364:
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x498) ^ (v5 * (FuckEnc::CacheRead<_BYTE>(v4 + 0x390) - 0x21)) ^ 0x78);
                goto LABEL_1041;
            case 0x365:
                v34 = __ROL4__(v11, 0x36 * FuckEnc::CacheRead<_BYTE>(v4 + 0x208) + 4 * FuckEnc::CacheRead<_DWORD>(v4 + 0x6E8));
                goto LABEL_1041;
            case 0x366:
                v15 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x260) + 0x4F0i64) + 0x5F8i64) + 8i64 * (unsigned __int8)(0x2C * v5)) + 0x158i64) + 8i64 * ((unsigned __int8)v5 & 0xE2)) + 0x390i64);
                goto LABEL_1040;
            case 0x367:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x350) ^ v11;
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x670) + 0xD8i64) + 8i64 * (__ROL4__(v5, 0x13) & 0x5F)) + 0x238i64) + 0x768i64) & 0xFFFFFFEB;
                goto LABEL_1041;
            case 0x368:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2A0) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x490), 9)) + 0x230i64) + 0x260i64);
                v34 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x668) + 8i64 * (v5 & 0x5D)) + 0x350i64);
                goto LABEL_1041;
            case 0x369:
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x2F8));
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8) + 8i64 * ((unsigned __int8)v5 & 0xF2)) + 0x30i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xF0);
                v34 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x698);
                goto LABEL_1041;
            case 0x36A:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 8i64 * (unsigned __int8)(0xAE * v5)) + 0xB8i64);
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x10) + 8i64 * (v5 & 0x4E)) + 0x410i64) + 4i64 * ((unsigned __int8)v5 ^ 0xC9u));
                goto LABEL_1041;
            case 0x36B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x510);
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0xB8);
                v15 = v34 + 0x63B0F55F * (FuckEnc::CacheRead<_DWORD>(v4 + 0x588) | 7) - FuckEnc::CacheRead<_DWORD>(v4 + 0x620);
                goto LABEL_1040;
            case 0x36C:
                Calls::FastCall(v4 + 0x738, &v34, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x610));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B8) + 0x638i64);
                v34 += FuckEnc::CacheRead<_DWORD>(v10 + 0x390);
                goto LABEL_1041;
            case 0x36D:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F8) + 8i64 * (unsigned __int8)(0xB9 * v5)) + 0x6B0i64) + 4i64 * ((unsigned __int8)~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x7A0) + 0xC0i64) & 0xC8));
                goto LABEL_1041;
            case 0x36E:
                v34 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x440));
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x608) + 0x440i64);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8) + 8i64 * (unsigned __int8)__ROL4__(v5, 4)) + 0x768i64);
                goto LABEL_1041;
            case 0x36F:
                v34 = (v11 ^ 0x50F23A01) + 0xFBB52C7;
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 8i64 * (unsigned __int8)(0xBA * v5)) + 0x608i64) + 0x178i64) >> 0xB;
                goto LABEL_1041;
            case 0x370:
                v34 = v11 ^ 0xEEA4F1AE;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x150);
                Calls::FastCall(v10 + 0x60, &v34, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x278));
                goto LABEL_1041;
            case 0x371:
                v34 = v5 + v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x390);
                Calls::FastCall(v4 + 0x6B8, &v34, v5, v4);
                goto LABEL_1041;
            case 0x372:
                v34 = v11 ^ 0x8B2DF03;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x260);
                v34 = __ROL4__(v11 ^ 0x8B2DF03, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x78) + 0x4B8i64) + 0x558i64) + 4i64 * ((0xE0 * FuckEnc::CacheRead<_BYTE>(v10 + 0x310)) & 0x22)));
                goto LABEL_1041;
            case 0x373:
                v34 = __ROL4__(v11, (~FuckEnc::CacheRead<_BYTE>(v4 + 0x2F8) + FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4F0) + 0x190i64) + 4i64 * ((unsigned __int8)v5 & 0xA7))) & 0xE5);
                goto LABEL_1041;
            case 0x374:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0);
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x408) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 8i64 * ((unsigned __int8)v5 ^ 0xAu)) + 0x498i64) + 1);
                goto LABEL_1041;
            case 0x375:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x608) + 0x720i64);
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_DWORD>(v4 + 0x2F8));
                v34 += ~FuckEnc::CacheRead<_DWORD>(v4 + 0x1C8);
                goto LABEL_1041;
            case 0x376:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 0x5C0i64, &v34, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x200);
                goto LABEL_1041;
            case 0x377:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x608) + 0x3D8i64) + 8i64 * ((unsigned __int8)v5 ^ 0x25u)) + 0x70i64, &v34, v5, v4);
                goto LABEL_1041;
            case 0x378:
                v34 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B8) + 0x248i64) & 0xFFFFFFE5);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x598);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x190) + 4i64 * (unsigned __int8)__ROL4__(v5, 0xC));
                goto LABEL_1041;
            case 0x379:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x370) + 0x198i64, &v34, v5, v4);
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x5A0) ^ 0x8873002A;
                goto LABEL_1041;
            case 0x37A:
                v25 = v5 & 0x61;
                v27 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x608) + 0xF0i64) + 0x378i64) + 0x540i64);
            LABEL_356:
                v28 = v4;
                goto LABEL_357;
            case 0x37B:
                v34 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x10) + 8i64 * (unsigned __int8)(0x5E * v5)) + 0x1B0i64) ^ v11) - 0x4A28F9CF;
                v15 = v34 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x380) + 0x588i64);
                goto LABEL_1040;
            case 0x37C:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x458) + 0x7FFEEF71;
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0x6D0);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 8i64 * (unsigned __int8)(0xEB * v5)) + 0x1C8i64);
                goto LABEL_1041;
            case 0x37D:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x220) + 8i64 * ((unsigned __int8)((FuckEnc::CacheRead<_DWORD>(v4 + 0x68) ^ 0x44) * ((FuckEnc::CacheRead<_DWORD>(v4 + 0x348) & 0xFC) + 0x2D)) & 0xD7)) + 0x720i64) ^ v11;
                goto LABEL_1041;
            case 0x37E:
                v34 = (v11 - v5) ^ 0x1F81A73B;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x380) + 0x378i64) + 0x308i64);
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_DWORD>(v10 + 0x768));
                goto LABEL_1041;
            case 0x37F:
                v34 = v11 + 0x5BB7CAFE + FuckEnc::CacheRead<_DWORD>(v4 + 0x458);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xF0);
                Calls::FastCall(v10 + 0xA0, &v34, v5, v4);
                goto LABEL_1041;
            case 0x380:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x370) + 0x508i64) + 0x698i64);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 0x1C8i64);
                v15 = v34 - FuckEnc::CacheRead<_DWORD>(v4 + 0x720);
                goto LABEL_1040;
            case 0x381:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x768) - 0x1AB2EEF6;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xE0);
                v34 += FuckEnc::CacheRead<_DWORD>(v10 + 0x248);
                v34 -= 0x3CFECEB5 * FuckEnc::CacheRead<_DWORD>(v4 + 0x178);
                goto LABEL_1041;
            case 0x382:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x530) + 8i64 * (unsigned __int8)__ROR4__(v5, 6)) + 0x3E0i64) + 0x150i64) + 0xE8i64) + 0x598i64) + 0x6B0i64) + 4i64 * (v5 & 0x70));
                goto LABEL_1041;
            case 0x383:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x100);
                v15 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 8i64 * ((unsigned __int8)(0xBA * v5) & 0xD4)) + 0x638i64) + 0x3E0i64) + 0x498i64) + v34 + 1;
                goto LABEL_1040;
            case 0x384:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x610);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 8i64 * (__ROL4__(v5, 0xF) & 0xC0)) + 0x778i64, &v34, v5, v10);
                goto LABEL_1041;
            case 0x385:
                v34 = __ROL4__(v11, 0xE8);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 0x4F0i64) + 0x230i64) + 0x798i64) + 0x238i64);
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_DWORD>(v10 + 0x4D8));
                goto LABEL_1041;
            case 0x386:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE0) + 0x118i64) + 0x370i64) + 0x610i64) + 0x7A0i64) + 0x610i64);
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v10 + 0x310), 0x1E)) ^ v11;
                goto LABEL_1041;
            case 0x387:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x768) + 1;
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x238) + 0x728i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x298);
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(v10 + 0x208);
                goto LABEL_1040;
            case 0x388:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x350) * (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x178));
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x220) + 8i64 * ((unsigned __int8)v5 & 0x88)) + 0x208i64));
                goto LABEL_1041;
            case 0x389:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x378) + 0x598i64);
                v34 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x38) + 4i64 * (((unsigned __int8)v5 ^ 0xBF) & 0xD2)) ^ ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x310) ^ 0xC3018944));
                goto LABEL_1041;
            case 0x38A:
                v34 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0) ^ (v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x2F8) ^ 0xD6D0FFAD, 9)) + 0x200i64));
                goto LABEL_1041;
            case 0x38B:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 8 * ((FuckEnc::CacheRead<_DWORD>(v4 + 0x408) & 0x60 | 0x1Ci64) ^ 0x18)) + 0x610i64) + 0x638i64) + 0x308i64) + 0x5D8i64) ^ v11;
                goto LABEL_1041;
            case 0x38C:
                v34 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x5D8) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE8) + 0x568i64) + 4i64 * (v5 & 0xF)) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x208) | 0xD));
                goto LABEL_1041;
            case 0x38D:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x750);
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x3D8) + 8i64 * ((unsigned __int8)(0x2E * v5) & 0xA3)) + 0x530i64) + 8i64 * (v5 & 3)) + 0x4C0i64) + 0x6B0i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 0x10));
                goto LABEL_1041;
            case 0x38E:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x130) + 0x780i64);
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x2F8) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x380) + 0x78i64) + 0x440i64) + 0x256F7934);
                goto LABEL_1041;
            case 0x38F:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x1C8);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x650);
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_BYTE>(v10 + 0x490) ^ FuckEnc::CacheRead<_BYTE>(v4 + 0x698) ^ 0xC0);
                goto LABEL_1041;
            case 0x390:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x100);
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x798) + 0x638i64) + 0x728i64) + v34 - 0x76AFD619;
                v15 = FuckEnc::CacheRead<_DWORD>(v4 + 0x200) ^ v34;
                goto LABEL_1040;
            case 0x391:
                Calls::FastCall(v4 + 0x258, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x530) + 8i64 * ((unsigned __int8)v5 & 0xD7)));
                v34 -= 0x18CE6BDE;
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x1B0);
                goto LABEL_1041;
            case 0x392:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x260);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x1A0) + 8i64 * (((unsigned __int8)v5 ^ 0x11) & 0x59), &v34, v5, v4);
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0);
                goto LABEL_1041;
            case 0x393:
                v34 = 0x368DA945 - (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x728));
                v34 += (FuckEnc::CacheRead<_DWORD>(v4 + 0x698) ^ 0xC301894F) >> 4;
                goto LABEL_1041;
            case 0x394:
                v34 = v11 ^ (0xBFABC086 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x670) + 0x568i64) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x30) & 0xD7)));
                v34 = v34 - FuckEnc::CacheRead<_DWORD>(v4 + 0x5A0) + 0x565E052E;
                goto LABEL_1041;
            case 0x395:
                Calls::FastCall(v4 + 0x5F0, &v34, v5, v4);
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x100);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x248);
                goto LABEL_1041;
            case 0x396:
                v34 = v11 ^ (4 * FuckEnc::CacheRead<_DWORD>(v4 + 0x310));
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_DWORD>(v4 + 0x68));
                v34 = ~(v34 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x80) - 0x3CFE76BC));
                goto LABEL_1041;
            case 0x397:
                v34 = v11 ^ (v5 - 0x2F00AB17 * FuckEnc::CacheRead<_DWORD>(v4 + 0x440));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1C0);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x390);
                v15 = FuckEnc::CacheRead<_DWORD>(v4 + 0x68) + v34;
                goto LABEL_1040;
            case 0x398:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x30);
                v34 -= 0x78000000 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x208) + (FuckEnc::CacheRead<_DWORD>(v4 + 0x1B0) ^ 0x217C2BFA));
                goto LABEL_1041;
            case 0x399:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x248);
                v34 = ~(v34 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0) ^ ((FuckEnc::CacheRead<_DWORD>(v4 + 0x6D0) ^ 0x510DAB40u) >> 6)));
                goto LABEL_1041;
            case 0x39A:
                v34 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x2F8) - 0x201D78FC);
                v34 += (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x118) + 0x48i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 0x1D)) >> 0xA) + 1;
                goto LABEL_1041;
            case 0x39B:
                Calls::FastCall(v4 + 0x270, &v34, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x298));
                v34 ^= 0xC8C30131 * FuckEnc::CacheRead<_DWORD>(v4 + 0xC0);
                goto LABEL_1041;
            case 0x39C:
                v34 = __ROL4__(v11, 0x56);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x698);
                Calls::FastCall(v4 + 0x630, &v34, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x7A0));
                goto LABEL_1041;
            case 0x39D:
                v15 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x670) + 0x2A0i64) + 8i64 * (unsigned __int8)(0x17 * v5)) + 0x158i64) + 8i64 * ((unsigned __int8)v5 & 0xD9)) + 0x508i64) + 0x588i64);
                goto LABEL_1040;
            case 0x39E:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B8) + 0x1C0i64) + 0xF0i64) + 0x740i64) + 8i64 * (v5 & 0x70)) + 0x228i64);
                v34 = FuckEnc::CacheRead<_DWORD>(v10 + 0x5D8) ^ v11;
                goto LABEL_1041;
            case 0x39F:
                v34 = (FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0) ^ v11) - 0x21B434DE;
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x228) + 0x290i64) + 8i64 * (unsigned __int8)(0x53 * v5)) + 0x378i64) + 0x440i64);
                goto LABEL_1041;
            case 0x3A0:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x80);
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x408) ^ v5;
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F8) + 8i64 * ((0xF4 * (_BYTE)v5) & 0x2A)) + 0x350i64);
                goto LABEL_1041;
            case 0x3A1:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 0x3C8i64);
                v34 = v11 + (FuckEnc::CacheRead<_DWORD>(v10 + 0x348) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x138) + 0x2D8i64) + 4i64 * (unsigned __int8)(0x7F * v5)));
                goto LABEL_1041;
            case 0x3A2:
                v15 = v11 + (~FuckEnc::CacheRead<_DWORD>(v4 + 0x458) << 0xE) + 0x5E13ED1E * FuckEnc::CacheRead<_DWORD>(v4 + 0x348) + 1;
                goto LABEL_1040;
            case 0x3A3:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8) + 0x228i64) + 0x200i64);
                v34 = v5 ^ (v34 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x520) + 8i64 * (unsigned __int8)__ROL4__(v5, 0xC)) + 0x6D0i64));
                goto LABEL_1041;
            case 0x3A4:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x498);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x118) + 0x508i64);
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_BYTE>(v4 + 0x6E8) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v10 + 0x190) + 4i64 * ((unsigned __int8)v5 & 0xE9)));
                goto LABEL_1041;
            case 0x3A5:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x68);
                v34 = ~(v34 - FuckEnc::CacheRead<_DWORD>(v4 + 0x1C8));
                v15 = v34 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x748) + 0x80i64) ^ 0x8B01D488);
                goto LABEL_1040;
            case 0x3A6:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x1B0) ^ v11 ^ 0xDDFA8257;
                v34 = __ROL4__(v34, ~FuckEnc::CacheRead<_BYTE>(v4 + 0x2F8) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x1C8) >> 1));
                goto LABEL_1041;
            case 0x3A7:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x498) ^ v11 ^ 0x44389E26;
                v34 += ~FuckEnc::CacheRead<_DWORD>(v4 + 0x208) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 0x350i64);
                goto LABEL_1041;
            case 0x3A8:
                v34 = v11 + 0x64C31131 * FuckEnc::CacheRead<_DWORD>(v4 + 0x1B0) + 0x517A8918;
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x220) + 8i64 * ((unsigned __int8)v5 & 0x94)) + 0x238i64) + 0x5E0i64);
                goto LABEL_1041;
            case 0x3A9:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x620) - v5;
                v34 = ~(v34 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D8) + 8i64 * (unsigned __int8)(0x12 * FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8))) + 0x230i64) + 0x5E0i64));
                goto LABEL_1041;
            case 0x3AA:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x380);
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x5E0);
                v34 ^= 0x1830178E - FuckEnc::CacheRead<_DWORD>(v4 + 0x728);
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0xB8);
                goto LABEL_1041;
            case 0x3AB:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x200);
                Calls::FastCall(v4 + 0x5C0, &v34, v5, v4);
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0x5A0) ^ v5;
                goto LABEL_1041;
            case 0x3AC:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x130) + 0x130i64) + 0x4C0i64) + 0x7A0i64) + 0x200i64) ^ v11;
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x728);
                goto LABEL_1041;
            case 0x3AD:
                v34 = v11 ^ (8 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x530) + 8i64 * FuckEnc::CacheRead<unsigned __int8>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 0x6B0i64) + 4i64 * (unsigned __int8)(0xAD * v5))) + 0x490i64) ^ 0xF12729E2));
                goto LABEL_1041;
            case 0x3AE:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x390) + 0x3CFECE34;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 8i64 * ((0xF3 * FuckEnc::CacheRead<_BYTE>(v4 + 0xC0)) & 0x1D)) + 0x450i64);
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(v10 + 0x80);
                goto LABEL_1040;
            case 0x3AF:
                v34 = (v11 ^ 0xA66C6626) - 0x50D437B5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x750);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0xD8) + 8i64 * ((unsigned __int8)v5 & 0xB5)) + 0x390i64);
                goto LABEL_1041;
            case 0x3B0:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 0x3A8i64);
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x620);
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0x1B0);
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x728) ^ 0xCB655B7C;
                goto LABEL_1041;
            case 0x3B1:
                v33 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6E0) + 0x638i64) + 0x450i64) + 0x4C8i64);
            LABEL_882:
                Calls::FastCall(v33 + 0x5F0, &v34, v5, v4);
                goto LABEL_1041;
            case 0x3B2:
                v34 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x490) - 0x72383BE2) ^ 0xD6C30131;
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x440);
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_DWORD>(v4 + 0x390));
                goto LABEL_1041;
            case 0x3B3:
                v34 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x2F8));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x610);
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x10) + 8i64 * ((unsigned __int8)v5 ^ 0x20u)) + 0x408i64) >> 0xC;
                goto LABEL_1041;
            case 0x3B4:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(v4 + 0x7A0) + 8i64 * (v5 & 0x44)) + 0x668i64) + 8i64 * (v5 & 0x16)) + 0x568i64) + 4i64 * ((unsigned __int8)__ROL4__(v5, 0x10) & 0x8F)) ^ v11;
                goto LABEL_1041;
            case 0x3B5:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x408);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x310), 0x17)) + 0x178i64);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x350);
                goto LABEL_1041;
            case 0x3B6:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x130);
                v28 = v10;
                v25 = (unsigned __int8)__ROL4__(v5, 0xB);
                v27 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 0x1A0i64);
            LABEL_357:
                Calls::FastCall(v27 + 8 * v25, &v34, v5, v28);
                goto LABEL_1041;
            case 0x3B7:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x7A0);
                Calls::FastCall(v10 + 0x40, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 0x638i64));
                goto LABEL_1041;
            case 0x3B8:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x750) + 0x350i64);
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_DWORD>(v4 + 0x490));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1C0) + 0x750i64);
                v34 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x720);
                goto LABEL_1041;
            case 0x3B9:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x450);
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x7A0) + 0x4B0i64) + 8i64 * ((unsigned __int8)(0xEE * FuckEnc::CacheRead<_BYTE>(v10 + 0x248)) & 0xE5)) + 0x410i64) + 4i64 * ((unsigned __int8)v5 ^ 0x8Eu));
                goto LABEL_1041;
            case 0x3BA:
                v34 = __ROR4__(v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x5A0), 0xFF);
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6E0) + 0x520i64) + 8i64 * (((unsigned __int8)v5 ^ 0xDF) & 0x60)) + 0x208i64) + 0x1B);
                goto LABEL_1041;
            case 0x3BB:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x510) + 0x638i64);
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x48) + 4i64 * (unsigned __int8)(0x64 * v5)) ^ v11;
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 8i64 * ((unsigned __int8)v5 & 0xF7)) + 0x728i64);
                goto LABEL_1041;
            case 0x3BC:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x168) + 8i64 * ((unsigned __int8)(FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x608) + 0x498i64) + 0x34) ^ 0xE8u), &v34, v5, v4);
                goto LABEL_1041;
            case 0x3BD:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x378) + 0x290i64) + 8i64 * (unsigned __int8)(0x98 * v5)) + 0x430i64) + 8i64 * ((unsigned __int8)v5 ^ 0x57u), &v34, v5, v4);
                goto LABEL_1041;
            case 0x3BE:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 8i64 * (((unsigned __int8)v5 ^ 0xFB) & 0x24)) + 0x448i64, &v34, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x130));
                goto LABEL_1041;
            case 0x3BF:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x350);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x758) + 0x510i64) + 0x368i64) + 8i64 * ((0x18 * (_BYTE)v5) & 0x51)) + 0x440i64);
                goto LABEL_1041;
            case 0x3C0:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xF0) + 0x1C8i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x798) + 0x278i64) + 0x638i64);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x80);
                goto LABEL_1041;
            case 0x3C1:
                Calls::FastCall(v4 + 0x6D8, &v34, v5, v4);
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2A0) + 8i64 * (unsigned __int8)(0xD0 * v5)) + 0x5A0i64);
                goto LABEL_1041;
            case 0x3C2:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x290) + 8i64 * (unsigned __int8)(0xFE * v5)) + 0x2F8i64);
                v34 += 0x54F04F22 * FuckEnc::CacheRead<_DWORD>(v4 + 0x310);
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_DWORD>(v4 + 0x5D8));
                goto LABEL_1041;
            case 0x3C3:
                Calls::FastCall(v4 + 0x778, &v34, v5, v4);
                v34 = v5 + (FuckEnc::CacheRead<_DWORD>(v4 + 0xC0) ^ v34);
                goto LABEL_1041;
            case 0x3C4:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0);
                Calls::FastCall(v4 + 0x50, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 0x748i64));
                goto LABEL_1041;
            case 0x3C5:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x220) + 8i64 * ((unsigned __int8)(0xC9 * v5) & 0x8C)) + 0x1C8i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x658);
                Calls::FastCall(v4 + 0x778, &v34, v5, v10);
                goto LABEL_1041;
            case 0x3C6:
                v15 = v11 ^ (v5 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x200) & 0xFFFFFFF9)) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x458) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4C8) + 0x248i64));
                goto LABEL_1040;
            case 0x3C7:
                v34 = v11 ^ (0xC301315E * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x798) + 0x5E0i64));
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 8i64 * ((unsigned __int8)v5 ^ 0xF8u)) + 0xB8i64) ^ 0x2055390D;
                goto LABEL_1041;
            case 0x3C8:
                v15 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x100) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xF0) + 0x80i64) + 0x1BEC0A7A * FuckEnc::CacheRead<_DWORD>(v4 + 0xC0));
                goto LABEL_1040;
            case 0x3C9:
                v34 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x408) & 0xFFFFFFED;
                v34 ^= ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x200) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x698) | 1));
                goto LABEL_1041;
            case 0x3CA:
                Calls::FastCall(v4 + 0x198, &v34, v5, v4);
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x408) | 0x18;
                goto LABEL_1041;
            case 0x3CB:
                v34 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 8i64 * ((unsigned __int8)__ROL4__(v5, 0x10) & 0xC0)) + 0x588i64));
                v34 ^= ~(FuckEnc::CacheRead<_DWORD>(v4 + 0xC0) & 0xFFFFFFE1);
                goto LABEL_1041;
            case 0x3CC:
                v34 = v11 + 0x23532B9E * FuckEnc::CacheRead<_DWORD>(v4 + 0x440) * FuckEnc::CacheRead<_DWORD>(v4 + 0x6D0);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3C0);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x4D8) & 0xFFFFFFEF;
                goto LABEL_1041;
            case 0x3CD:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x7A0) + 0x280i64);
                Calls::FastCall(v4 + 0x128, &v34, v5, v10);
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0x458) ^ 0x336FC572;
                goto LABEL_1041;
            case 0x3CE:
                v34 = __ROL4__(v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x490) | 0x13), 0xD7) ^ 0x2C30131;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x280);
                v34 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x558) + 4i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v10 + 0x490) ^ 0x1Fu));
                goto LABEL_1041;
            case 0x3CF:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x6E8) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x650) + 0x6D8i64, &v34, v5, v4);
                goto LABEL_1041;
            case 0x3D0:
                v34 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x768)) - 0x2F009499;
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x530) + 8i64 * (unsigned __int8)(0xBB * v5)) + 0x740i64) + 8i64 * ((unsigned __int8)v5 ^ 0xE0u)) + 0x728i64);
                goto LABEL_1040;
            case 0x3D1:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x758);
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x4B0) + 8i64 * (__ROR4__(v5, 3) & 0x71)) + 0x2A0i64) + 8i64 * (v5 & 0x7E)) + 0x2D8i64) + 4i64 * (((unsigned __int8)v5 ^ 0xE7) & 0x58)) + 1;
                goto LABEL_1041;
            case 0x3D2:
                v34 = v11 - ((FuckEnc::CacheRead<_DWORD>(v4 + 0x2F8) | 0x1D) ^ 0x500C48EC);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 8i64 * ((unsigned __int8)v5 & 0x9C)) + 0x6B0i64) + 4i64 * ((unsigned __int8)v5 & 0xA1));
                goto LABEL_1041;
            case 0x3D3:
                v15 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x750) + 0x588i64) + (FuckEnc::CacheRead<_DWORD>(v4 + 0x350) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x248) + 0x9C22E17) ^ 0x2E0DCB1C));
                goto LABEL_1040;
            case 0x3D4:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x370) + 0x728i64) ^ v11;
                v34 ^= (FuckEnc::CacheRead<_DWORD>(v4 + 0x458) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x200) * v5)) << 6;
                goto LABEL_1041;
            case 0x3D5:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1C0);
                Calls::FastCall(v4 + 0x5F0, &v34, v5, v10);
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F8) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x2F8), 0x18)) + 0x6E8i64);
                goto LABEL_1041;
            case 0x3D6:
                v34 = (v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x228) + 0xE0i64) + 0x5D8i64) ^ (0x3FEA1D1F - 0xF4FFA69 * FuckEnc::CacheRead<_DWORD>(v4 + 0x550))) - 0x312AA6E2;
                goto LABEL_1041;
            case 0x3D7:
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3C0) + 0x78i64) + 0x2F8i64));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x7A0) + 0x7A0i64);
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x38) + 4i64 * ((unsigned __int8)v5 & 0xE6));
                goto LABEL_1041;
            case 0x3D8:
                v34 = v11 + 0x7F8E8EA * FuckEnc::CacheRead<_DWORD>(v4 + 0x5D8);
                v34 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 8i64 * ((unsigned __int8)v5 & 0xA6)) + 0x80i64);
                goto LABEL_1041;
            case 0x3D9:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x148) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 0x10i64) + 8i64 * ((unsigned __int8)v5 ^ 0x9Du)) + 0x498i64) & 0x13)) + 0x4F0i64);
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x68);
                goto LABEL_1041;
            case 0x3DA:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3C0) + 0x498i64) ^ v11;
                v34 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6E0) + 0x440i64);
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_DWORD>(v4 + 0x620));
                goto LABEL_1041;
            case 0x3DB:
                Calls::FastCall(v4 + 0x418, &v34, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x750);
                v15 = v34 + 1 + FuckEnc::CacheRead<_DWORD>(v10 + 0x6D0);
                goto LABEL_1040;
            case 0x3DC:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x30) ^ v11;
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1D)) + 0xC0i64));
                v15 = FuckEnc::CacheRead<_DWORD>(v4 + 0x440) + v34 + 1;
                goto LABEL_1040;
            case 0x3DD:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x510) + 0x778i64, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x530) + 8i64 * (unsigned __int8)__ROL4__(v5, 1)));
                goto LABEL_1041;
            case 0x3DE:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x668) + 8i64 * ((unsigned __int8)(0xAC * v5) & 0x93)) + 0x280i64) + 0x450i64);
                v34 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x2C8) + 4i64 * (v5 & 6)));
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(v4 + 0x6E8);
                goto LABEL_1040;
            case 0x3DF:
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x490));
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_DWORD>(v4 + 0x5A0));
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x650) + 0x528i64) + 0x670i64) + 0xB8i64);
                goto LABEL_1041;
            case 0x3E0:
                v34 = __ROR4__(v11, 0x98);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x380);
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x3C8) + 0x530i64) + 8i64 * ((8 * (_BYTE)v5) & 0x24)) + 0x278i64) + 0x4D8i64);
                goto LABEL_1040;
            case 0x3E1:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x150);
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x4D8);
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 8i64 * (unsigned __int8)(0x7E * ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x5A0))) + 0x498i64);
                goto LABEL_1040;
            case 0x3E2:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x1B0) ^ v11;
                v34 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x38) + 4i64 * (unsigned __int8)(0xD9 * FuckEnc::CacheRead<_BYTE>(v4 + 0x768)));
                goto LABEL_1041;
            case 0x3E3:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F8) + 8i64 * (__ROL4__(v5, 0x13) & 0x12)) + 0x4C8i64) + 0x230i64) + 0x3C0i64);
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x3E0) + 0x4D8i64) ^ v11;
                goto LABEL_1041;
            case 0x3E4:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x178) - 0x7B19422E;
                v34 = __ROR4__(v34, ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 0x440i64));
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_DWORD>(v4 + 0x200));
                goto LABEL_1041;
            case 0x3E5:
                Calls::FastCall(v4 + 0x60, &v34, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x130) + 0x450i64);
                v34 += FuckEnc::CacheRead<_DWORD>(v10 + 0x728);
                goto LABEL_1041;
            case 0x3E6:
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x650) + 0x620i64) ^ v11;
                v34 ^= ~FuckEnc::CacheRead<_DWORD>(v4 + 0x350) | 0x13;
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x550);
                goto LABEL_1041;
            case 0x3E7:
                v29 = (unsigned __int8)__ROL4__(v5, 0x11);
                v30 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3C0) + 0x650i64);
            LABEL_404:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v30 + 0x58) + 8 * v29, &v34, v5, v4);
                goto LABEL_1041;
            case 0x3E8:
                v34 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3C8) + 0x260i64) + 0x68i64) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x6E8) >> 0x11) & 0x3FF;
                goto LABEL_1041;
            case 0x3E9:
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B8) + 0x6B0i64) + 4i64 * ((unsigned __int8)v5 & 0xA5)));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x7A0);
                v34 ^= ~FuckEnc::CacheRead<_DWORD>(v10 + 0x6E8);
                goto LABEL_1041;
            case 0x3EA:
                v34 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x348) - 0x499F66F8;
                v34 ^= v5 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0xB8) + 0x4B21FDA3);
                goto LABEL_1041;
            case 0x3EB:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x600) + 0x408i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x758);
                v34 += FuckEnc::CacheRead<_DWORD>(v10 + 0x200) + FuckEnc::CacheRead<_DWORD>(v4 + 0x5E0);
                goto LABEL_1041;
            case 0x3EC:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x728) + 0x6CF1FC0F;
                v34 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x100);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4F0);
                v34 = ~(FuckEnc::CacheRead<_DWORD>(v10 + 0x588) ^ v34);
                goto LABEL_1041;
            case 0x3ED:
                v34 = ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x100) ^ v11);
                v34 = __ROR4__(v34, FuckEnc::CacheRead<_DWORD>(v4 + 0x68)) - 0x7F38594;
                v34 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x248) ^ v5;
                goto LABEL_1041;
            case 0x3EE:
                v34 = (unsigned int)0xC9CDD22 ^ v11;
                v34 = ((unsigned int)0xC9CDD22 ^ v11) - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x658) + 0x3C0i64) + 0x310i64) ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x1B0));
                goto LABEL_1041;
            case 0x3EF:
                v34 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x208) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x370) + 0x490i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 0x550i64));
                goto LABEL_1041;
            case 0x3F0:
                v34 = v11 - 0xCA61245;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xE8);
                Calls::FastCall(v10 + 0x428, &v34, v5, v4);
                goto LABEL_1041;
            case 0x3F1:
                v34 = v11 + 0x49D3B831 * FuckEnc::CacheRead<_DWORD>(v4 + 0x498) * ~FuckEnc::CacheRead<_DWORD>(v4 + 0x30) * ~FuckEnc::CacheRead<_DWORD>(v4 + 0x350);
                goto LABEL_1041;
            case 0x3F2:
                v34 = FuckEnc::CacheRead<_DWORD>(v4 + 0x348) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xF0) + 0x298i64) + 0x10i64) + 8i64 * (((unsigned __int8)v5 ^ 4) & 0x74)) + 0x4F0i64);
                v15 = v34 + FuckEnc::CacheRead<_DWORD>(v10 + 0x310);
                goto LABEL_1040;
            case 0x3F3:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 0x278i64);
                Calls::FastCall(v4 + 0x6A8, &v34, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x678) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x11)) + 0x308i64));
                goto LABEL_1041;
            case 0x3F4:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x728);
                v34 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 8i64 * (unsigned __int8)(0xB2 * v5)) + 0x1C8i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x528);
                v34 = __ROL4__(v34, FuckEnc::CacheRead<_DWORD>(v10 + 0x4D8));
                goto LABEL_1041;
            case 0x3F5:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x658);
                v34 = FuckEnc::CacheRead<_DWORD>(v10 + 0x588) ^ v11;
                v34 = __ROR4__(v34, ~FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4C0) + 0x620i64) | 0x1E);
                goto LABEL_1041;
            case 0x3F6:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x638);
                v34 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x748) + 0x6E8i64) ^ v11;
                v15 = v34 ^ ~(0xC3018944 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x798) + 0x390i64));
                goto LABEL_1040;
            case 0x3F7:
                v34 = v5 ^ v11;
                Calls::FastCall(v4 + 0x708, &v34, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x308);
                v34 += FuckEnc::CacheRead<_DWORD>(v10 + 0xC0);
                goto LABEL_1041;
            case 0x3F8:
                v34 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x440));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x280);
                Calls::FastCall(v10 + 0x258, &v34, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x1C0));
                goto LABEL_1041;
            case 0x3F9:
                v34 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x720);
                v34 += FuckEnc::CacheRead<_DWORD>(v4 + 0x178) ^ 0x8142B9F2;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x798);
                v34 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x4D8) - 0x465F62BF;
                goto LABEL_1041;
            case 0x3FA:
                v34 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x498) ^ v5);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x600) + 0x378i64) + 0x608i64);
                v34 = ~(FuckEnc::CacheRead<_DWORD>(v10 + 0x588) ^ v34);
                goto LABEL_1041;
            case 0x3FB:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 8i64 * ((unsigned __int8)(FuckEnc::CacheRead<_BYTE>(v4 + 0x6D0) * v5) & 0x8F)) + 0x7A0i64);
                v34 = FuckEnc::CacheReadPlural<_DWORD>(v10 + 0x6B0) ^ v11;
                goto LABEL_1041;
            case 0x3FC:
                Calls::FastCall(v4 + 0x708, &v34, v5, v4);
                Calls::FastCall(v4 + 0x738, &v34, v5, v4);
                goto LABEL_1041;
            case 0x3FD:
                v34 = ~(_DWORD)v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xE0);
                v15 = ~(_DWORD)v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x490) ^ (FuckEnc::CacheRead<_DWORD>(v10 + 0x390) - 0x3DC0BEBD);
                goto LABEL_1040;
            case 0x3FE:
                v15 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 8i64 * ((unsigned __int8)v5 ^ 0xC3u)) + 0x750i64) + 0x3D8i64) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x1C8) ^ 0x2Du)) + 0x1B0i64);
                goto LABEL_1040;
            case 0x3FF:
                v34 = v11 ^ 0x35BCDE40;
                v34 = (v11 ^ 0x35BCDE40) + FuckEnc::CacheRead<_DWORD>(v4 + 0x1C8);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4C8);
                v24 = v34 - FuckEnc::CacheRead<_DWORD>(v10 + 0x720);
                v34 = v24;
            LABEL_1039:
                v15 = FuckEnc::CacheRead<_DWORD>(v4 + 0x178) + v24;
            LABEL_1040:
                v34 = v15;
            LABEL_1041:
                v6 += 4;
                *a2 = v34;
                v5 += a4;
                ++a2;
                v4 = v10;
                if (v6 + 3 >= a3)
                    return;
                continue;
            }
        }
    }
}
