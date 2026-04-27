#pragma once

#include <Hack/FuckEnc.h>
#include <Hack/ENC/Calls.h>
#include <IDA/ida_defs.h>

void sub_27ECBC0(__int64 a1, unsigned int* a2, unsigned int a3, int a4)
{
    __int64 v4;          // rbx
    unsigned int v5;     // edi
    int v6;              // r13d
    __int64 v10;         // rsi
    __int64 v11;         // r10
    int v12;             // r10d
    int v13;             // eax
    __int64 v14;         // rax
    __int64 v15;         // r8
    __int64 v16;         // r9
    __int64 v17;         // r9
    __int64 v18;         // r8
    unsigned __int8 v19; // al
    __int64 v20;         // r8
    __int64 v21;         // rax
    unsigned int v22;    // [rsp+60h] [rbp+40h] BYREF

    v4 = a1;
    v5 = a4 ^ 0x7C42BD83;
    v6 = 0;
    v10 = a1;
    if (a3 > 3)
    {
        while (2)
        {
            v11 = *a2;
            v22 = *a2;
            switch (((unsigned __int16)(a4 + v6) ^ 0x192) & 0x3FF)
            {
            case 0:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x1C8i64) + 8i64 * (__ROL4__(v5, 0x13) & 3), &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x528));
                goto LABEL_1034;
            case 1:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x6E8) + 8i64 * (unsigned __int8)((FuckEnc::CacheRead<_BYTE>(v4 + 0x640) * (_BYTE)v5) << 7), &v22, v5, v4);
                goto LABEL_1034;
            case 2:
                v22 = v11 + 0x1053ECC4 * FuckEnc::CacheRead<_DWORD>(v4 + 0x640);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8);
                v22 += FuckEnc::CacheRead<_DWORD>(v10 + 0x268) + FuckEnc::CacheRead<_DWORD>(v4 + 0x2D8);
                goto LABEL_1034;
            case 3:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x430) + 1;
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2B8) + 8i64 * (((unsigned __int8)v5 ^ 0x41) & 0xDD)) + 0x588i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x14)) + 0x430i64);
                goto LABEL_1034;
            case 4:
                v22 = v11 - ((0xD299FCBB * FuckEnc::CacheRead<_DWORD>(v4 + 0x120)) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x430) - 0x68FD27C4));
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x698) | 0xC;
                goto LABEL_1034;
            case 5:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x688);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x258) + 0x2A0i64) + 0x1F8i64) + 0x260i64) + 8i64 * (unsigned __int8)(0x5C * v5)) + 0x430i64);
                goto LABEL_1034;
            case 6:
                v22 = ~(v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8) + 0x400i64) + 8i64 * (((unsigned __int8)v5 ^ 0xF7) & 0x18)) + 0x400i64) + 8i64 * (unsigned __int8)(0x66 * v5)) + 0x778i64) + 0x788i64));
                goto LABEL_1034;
            case 7:
                v12 = v11 - (~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 0x3B0i64) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x598) - 0x3CFE76BC + 2 * v5));
                goto LABEL_1033;
            case 8:
                v22 = __ROR4__(v11, 0x31);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 0x420i64);
                v22 = __ROL4__(v22, ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8) >> 0x16));
                goto LABEL_1034;
            case 9:
                v22 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x3B0) & 0xFFFFFFE6 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x578) & 0xFFFFFFF0;
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 0x2D8i64);
                goto LABEL_1034;
            case 0xA:
                Calls::FastCall(v4 + 0x708, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x690) + 8i64 * (((unsigned __int8)v5 ^ 2) & 0x5E)) + 0x260i64) + 8i64 * (((unsigned __int8)v5 ^ 0xFE) & 0x37)));
                goto LABEL_1034;
            case 0xB:
                v22 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x28) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1B)) + 0xB0i64) + 0x738i64) + 0x268i64) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x568) & 0xFFFFFFF6);
                goto LABEL_1034;
            case 0xC:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x2E8) ^ v11;
                v22 = __ROR4__(v22, (FuckEnc::CacheRead<_BYTE>(v4 + 0x6B0) ^ 0x15) + 0x41);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x338) + 0x408i64);
                goto LABEL_1034;
            case 0xD:
                v22 = v11 - v5;
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x3B0) - 0x4757428F;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x218);
                v22 += FuckEnc::CacheRead<_DWORD>(v10 + 0x2B0);
                goto LABEL_1034;
            case 0xE:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2B8) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x48) & 0x21)) + 0x780i64) + 8i64 * ((unsigned __int8)(0x53 * v5) & 0xDA)) + 0x30i64);
                goto LABEL_1034;
            case 0xF:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x58) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1D8);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x1C0);
                v12 = v22 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 0x618i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 1));
                goto LABEL_1033;
            case 0x10:
                v22 = v11 ^ 0x5480E4E2;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x258) + 0x630i64) + 0x468i64);
                Calls::FastCall(v4 + 0x5C0, &v22, v5, v10);
                goto LABEL_1034;
            case 0x11:
                v22 = v11 - 0x6E5AD244;
                v22 = v11 - 0x6E5AD244 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 8i64 * (unsigned __int8)v5) + 0x408i64);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0) << 0x13;
                goto LABEL_1034;
            case 0x12:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x168);
                Calls::FastCall(v4 + 0x648, &v22, v5, v4);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x338) + 0x268i64);
                goto LABEL_1034;
            case 0x13:
                v22 = v5 ^ v11;
                v22 = (v5 ^ v11) + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x90) + 0x2A0i64) + 0x360i64) + 0x488i64) + 0x2B0i64) ^ v5);
                goto LABEL_1034;
            case 0x14:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x420) - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8) + 0x6F8i64);
                v22 = __ROL4__(v22, FuckEnc::CacheRead<_BYTE>(v10 + 0x6C0) + 0x58);
                goto LABEL_1034;
            case 0x15:
                v22 = v5 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x450) ^ v11);
                Calls::FastCall(v4 + 0x708, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8) + 8i64 * (FuckEnc::CacheRead<_BYTE>(v4 + 0x788) ^ 0x52u)));
                goto LABEL_1034;
            case 0x16:
                v22 = v11 - (v5 ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x2D8)));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 0x360i64);
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_DWORD>(v10 + 0x430));
                goto LABEL_1034;
            case 0x17:
                v22 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0) >> 0x19);
                v22 -= 0x4C3C10CF * FuckEnc::CacheRead<_DWORD>(v4 + 0x178) * v5;
                goto LABEL_1034;
            case 0x18:
                Calls::FastCall(v4 + 0x3F0, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x340) + 0x4E8i64));
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x598);
                goto LABEL_1034;
            case 0x19:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x90) + 0x528i64);
                Calls::FastCall(v4 + 0x3C0, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x5F0) + 0x258i64));
                goto LABEL_1034;
            case 0x1A:
                v12 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x690) + 8i64 * ((unsigned __int8)v5 ^ 0xFu)) + 0xC8i64) + 4i64 * ((unsigned __int8)v5 & 0xAF)) ^ (FuckEnc::CacheRead<_BYTE>(v4 + 0x1C0) + 0x44));
                goto LABEL_1033;
            case 0x1B:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 0x548i64) + 8i64 * ((unsigned __int8)v5 ^ 0x5Eu)) + 0x140i64) + 8i64 * ((unsigned __int8)(0x96 * v5) & 0x8D), &v22, v5, v4);
                goto LABEL_1034;
            case 0x1C:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 0x170i64) + 8i64 * ((unsigned __int8)__ROL4__(v5, 0x16) & 0xF7)) + 0x28i64) + 8i64 * ((unsigned __int8)v5 & 0xEF)) + 0x740i64) + 0x550i64);
                goto LABEL_1034;
            case 0x1D:
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x30i64) | 0xE);
                v22 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x530) + 0x6E0i64);
                goto LABEL_1034;
            case 0x1E:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2B8) + 8i64 * ((unsigned __int8)~(_BYTE)v5 & 0xF4)) + 0x690i64) + 8i64 * ((unsigned __int8)v5 & 0xC4)) + 0xC8i64) + 4i64 * (unsigned __int8)(0x12 * v5)) ^ v11;
                v12 = v22 - FuckEnc::CacheRead<_DWORD>(v4 + 0x688);
                goto LABEL_1033;
            case 0x1F:
                v22 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x3B0));
                Calls::FastCall(v4 + 0x100, &v22, v5, v4);
                v22 += 1 + FuckEnc::CacheRead<_DWORD>(v4 + 0x688);
                goto LABEL_1034;
            case 0x20:
                v22 = __ROL4__(v11, ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x6C0));
                Calls::FastCall(v4 + 0x648, &v22, v5, v4);
                goto LABEL_1034;
            case 0x21:
                v22 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) ^ 0xB6F6418B);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xB0) + 0x4A0i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 0x19));
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x308);
                goto LABEL_1034;
            case 0x22:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 8i64 * (unsigned __int8)(0x1A * v5)) + 0x358i64) + 4i64 * (unsigned __int8)(0xA4 * FuckEnc::CacheRead<_BYTE>(v4 + 0x2C0)));
                goto LABEL_1034;
            case 0x23:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8) + 0x588i64) + 8i64 * ((unsigned __int8)v5 ^ 0xDCu)) + 0x268i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x5B0) + 0x788i64);
                goto LABEL_1034;
            case 0x24:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x6B0);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x670) + 0x210i64) + 4i64 * ((unsigned __int8)v5 ^ 0x64u));
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x630) + 0x788i64);
                goto LABEL_1034;
            case 0x25:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x440) + 8i64 * (unsigned __int8)(0xC0 * v5)) + 0x2E8i64);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x258) + 0x730i64) + 4i64 * ((0x12 * (_BYTE)v5) & 0x2E));
                goto LABEL_1034;
            case 0x26:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x6C0);
                v22 = ~__ROL4__(v22, ~(FuckEnc::CacheRead<_BYTE>(v4 + 0x6E0) + 0x20 * FuckEnc::CacheRead<_BYTE>(v4 + 0x698)));
                goto LABEL_1034;
            case 0x27:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x408) ^ v11;
                v22 ^= (FuckEnc::CacheRead<_DWORD>(v4 + 0x420) ^ v5) + 0x1FC31131;
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x630) + 0x3B0i64));
                goto LABEL_1034;
            case 0x28:
                v22 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0) | 0x19);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8) + 0x788i64);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0) - 0x3CEECEA0;
                goto LABEL_1034;
            case 0x29:
                v22 = v11 - 0x3F880481;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 8);
                v22 = __ROR4__((v11 - 0x3F880481) ^ FuckEnc::CacheRead<_DWORD>(v10 + 0x58) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x2C0i64), 0x93);
                goto LABEL_1034;
            case 0x2A:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 0x548i64) + 8i64 * ((0x35 * (_BYTE)v5) & 0x4A)) + 0x718i64) + 0x220i64) + 0x5B0i64) + 0xD8i64) + 0x4F8i64);
                goto LABEL_1034;
            case 0x2B:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 0x688i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xB0);
                v22 += FuckEnc::CacheRead<_DWORD>(v10 + 0x2D8) * v5;
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x578);
                goto LABEL_1034;
            case 0x2C:
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 0x298i64) + 0x718i64) + 0x6D0i64) + 8i64 * (v5 & 0x68)) + 0x118i64) + 8i64 * ((unsigned __int8)v5 ^ 0x4Cu)) + 0x6C0i64) ^ v11;
                goto LABEL_1033;
            case 0x2D:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x568);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 8);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x458) + 8i64 * (unsigned __int8)(0xDC * v5), &v22, v5, v4);
                goto LABEL_1034;
            case 0x2E:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0) ^ v11;
                Calls::FastCall(v4 + 0x570, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x690) + 8i64 * (FuckEnc::CacheRead<_BYTE>(v4 + 0x698) ^ 0xB4u)));
                goto LABEL_1034;
            case 0x2F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x528);
                Calls::FastCall(v10 + 0x478, &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x298));
                v22 += 0x65BFEE96;
                goto LABEL_1034;
            case 0x30:
                Calls::FastCall(v4 + 0x6B8, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2B8) + 8i64 * ((0xFA * (_BYTE)v5) & 8)) + 0x338i64));
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0);
                goto LABEL_1034;
            case 0x31:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x58) ^ v11 ^ 0x8E24C21E;
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xB0) + 0x730i64) + 4i64 * (unsigned __int8)(0x9C * ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x308))) ^ v22;
                goto LABEL_1033;
            case 0x32:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8) + 0x1B0i64) + 8i64 * (((unsigned __int8)v5 ^ 8) & 0x58)) + 0x360i64) + 0xA8i64);
                v22 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v10 + 0x78);
                goto LABEL_1034;
            case 0x33:
                v22 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x530) + 0x440i64) + 8i64 * (((unsigned __int8)v5 ^ 8) & 0x9E)) + 0x450i64) ^ (0x66BF3522 * FuckEnc::CacheRead<_DWORD>(v4 + 0x688));
                goto LABEL_1034;
            case 0x34:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x670) + 0xA8i64) + 0x360i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x310) + 8i64 * (unsigned __int8)(0x7E * v5), &v22, v5, v4);
                goto LABEL_1034;
            case 0x35:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3A0);
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x210) + 4i64 * (unsigned __int8)(0x8B * v5)) ^ v11;
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x450) & 0xFFFFFFF1;
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_DWORD>(v4 + 0x48));
                goto LABEL_1034;
            case 0x36:
                v22 = v11 ^ ((FuckEnc::CacheRead<_DWORD>(v4 + 0x1A0) + 0xA8A1250) * ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x360) + 0x6C0i64));
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x788);
                goto LABEL_1034;
            case 0x37:
                Calls::FastCall(v4 + 0x330, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x170) + 8i64 * ((unsigned __int8)(0x63 * v5) & 0xC5)));
                v22 += 0x72D4A148;
                goto LABEL_1034;
            case 0x38:
                v12 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x690) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x48) & 0x50)) + 0x698i64) ^ ~FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 0x20i64)) - 0x3CEECE38;
                goto LABEL_1033;
            case 0x39:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x340) + 0xD0i64);
                Calls::FastCall(v4 + 0x5D8, &v22, v5, FuckEnc::CacheRead<_QWORD>(v10 + 0xB0));
                v22 = __ROL4__(v22, 0xB3);
                goto LABEL_1034;
            case 0x3A:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x670);
                v22 = FuckEnc::CacheRead<_DWORD>(v10 + 0x78) ^ v11;
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x408) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0) + 8i64 * (v5 & 0x3F)) + 0x698i64);
                goto LABEL_1034;
            case 0x3B:
                v22 = v11 ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x78));
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x598);
                v22 ^= 0x3249AD03 * FuckEnc::CacheRead<_DWORD>(v4 + 0x168) - 0x7C3050E0;
                goto LABEL_1034;
            case 0x3C:
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x1F0i64) + 0x6D0i64) + 8i64 * ((unsigned __int8)v5 & 0xF8)) + 0x258i64) + 0x1F0i64) + 0x688i64) + 0x389F19D1;
                goto LABEL_1033;
            case 0x3D:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x7A8) + 8i64 * (FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x28) + 8i64 * (unsigned __int8)__ROR4__(v5, 0xE)) + 0x408i64) ^ 0x6Fu), &v22, v5, v4);
                goto LABEL_1034;
            case 0x3E:
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8) + 8i64 * (unsigned __int8)(0x61 * v5)) + 0x6C0i64) ^ v11;
                v22 = v11;
                v13 = 0x2E00BE1F * FuckEnc::CacheRead<_DWORD>(v4 + 0x48);
                goto LABEL_1032;
            case 0x3F:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x640);
                v22 = __ROL4__(v22, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x630) + 0x2B0i64) * ((unsigned int)0x561EA99 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x6C0)));
                goto LABEL_1034;
            case 0x40:
                v22 = v11 + ~FuckEnc::CacheRead<_DWORD>(v4 + 0x78);
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_DWORD>(v4 + 0x688));
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x340) + 0x408i64) ^ 0x7C647E0C;
                goto LABEL_1034;
            case 0x41:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x690) + 8i64 * (v5 & 0x5D)) + 0x4A8i64) + 0x4B0i64);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x240) + 4i64 * (((unsigned __int8)v5 ^ 3) & 0x6B)) ^ v11 ^ 0x8D79DA98;
                goto LABEL_1033;
            case 0x42:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0);
                v22 = ~__ROR4__(v22, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 0x430i64) + FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x488) + 0x1A0i64));
                goto LABEL_1034;
            case 0x43:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x678) + 0x2D0i64) + 8i64 * (unsigned __int8)(0x1C * v5), &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x3A0));
                goto LABEL_1034;
            case 0x44:
                v22 = v11 + -FuckEnc::CacheRead<_DWORD>(v4 + 0x698) - 0x7CB3AB01;
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 0x6C0i64) << 0x15;
                goto LABEL_1034;
            case 0x45:
                v22 = v11 - 0x2F00410D * FuckEnc::CacheRead<_DWORD>(v4 + 0x688);
                v22 = v22 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x598) & 0xFFFFFFFE) - FuckEnc::CacheRead<_DWORD>(v4 + 0x3B0);
                goto LABEL_1034;
            case 0x46:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x298);
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x2B0) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x450) >> 1) - FuckEnc::CacheRead<_DWORD>(v4 + 0x788) + 0x2E00BEA9;
                goto LABEL_1034;
            case 0x47:
                v22 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 0x548i64) + 8i64 * ((unsigned __int8)v5 & 0xFB)) + 0x48i64) ^ v11) + 0x360845F3;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xB0);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x420);
                goto LABEL_1034;
            case 0x48:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x20) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x28) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0) + 0x48i64) ^ 0x63u)) + 0x368i64);
                v22 += FuckEnc::CacheRead<_DWORD>(v10 + 0x6E0);
                goto LABEL_1034;
            case 0x49:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x30) + 0x3B9B8828;
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4E8) + 0x5C8i64) + 0x630i64) + 0x6C0i64);
                goto LABEL_1034;
            case 0x4A:
                v22 = ~(v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x58));
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3A0);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x1C0);
                goto LABEL_1034;
            case 0x4B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x338);
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x480) + 0x670i64) + 0x2B8i64) + 8i64 * (v5 & 0x1F)) + 0x688i64);
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x2D8);
                goto LABEL_1034;
            case 0x4C:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x778) + 0xD0i64) + 0x1A0i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x368);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x548) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v10 + 0x430) & 0xE6)) + 0x120i64);
                goto LABEL_1034;
            case 0x4D:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x530) + 0x178i64) - v5 + 0x6C3CEECF;
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1D8) + 0x760i64) + 4i64 * (__ROR4__(v5, 2) & 0x18));
                goto LABEL_1034;
            case 0x4E:
                v22 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xB0) + 0x2B0i64) + FuckEnc::CacheRead<_DWORD>(v4 + 0x598) + 0xA2A0BA1);
                goto LABEL_1034;
            case 0x4F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x220);
                Calls::FastCall(v10 + 0x130, &v22, v5, v4);
                v22 += ~FuckEnc::CacheRead<_DWORD>(v4 + 0x598);
                goto LABEL_1034;
            case 0x50:
                v22 = v11 ^ (0x412F79A9 * FuckEnc::CacheRead<_DWORD>(v4 + 0x20) - 0xC1A7DA7);
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x450);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x468);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x3F8);
                goto LABEL_1034;
            case 0x51:
                v22 = v11 ^ 0xB20EB284;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x110);
                Calls::FastCall(v10 + 0x5D8, &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x488));
                goto LABEL_1034;
            case 0x52:
                v22 = v5 ^ (v11 + 0x3CFE76BC);
                v22 -= (FuckEnc::CacheRead<_DWORD>(v4 + 0x640) - 0x6FA62) << 0xC;
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_DWORD>(v4 + 0x58));
                goto LABEL_1034;
            case 0x53:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x688) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x400) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x13)) + 0x2F8i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1C)) + 0x78i64);
                goto LABEL_1034;
            case 0x54:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8);
                v22 = FuckEnc::CacheRead<_DWORD>(v10 + 0x430) ^ v11;
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0);
                v12 = v22 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 8i64 * (unsigned __int8)(0x3B * v5)) + 0x20i64);
                goto LABEL_1033;
            case 0x55:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x698) + 1;
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x170) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x168) >> 0xF, 1)) + 0x578i64);
                goto LABEL_1034;
            case 0x56:
                v22 = v11 + ~FuckEnc::CacheRead<_DWORD>(v4 + 0x178);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 0x3B8i64, &v22, v5, v4);
                goto LABEL_1034;
            case 0x57:
                Calls::FastCall(v4 + 0xA0, &v22, v5, v4);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x68) + 8i64 * (unsigned __int8)__ROR4__(v5, 0xD)) + 0x550i64);
                goto LABEL_1034;
            case 0x58:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0x2E0i64, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 0x778i64));
                goto LABEL_1034;
            case 0x59:
                v22 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x48) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x368) + 0x2B0i64));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8) + 0x480i64);
                v22 += FuckEnc::CacheRead<_DWORD>(v10 + 0x598);
                goto LABEL_1034;
            case 0x5A:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x20) + 1;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0);
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x308) + ~FuckEnc::CacheRead<_DWORD>(v10 + 0x1A0);
                goto LABEL_1034;
            case 0x5B:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8) + 8i64 * (unsigned __int8)(0x4F * v5)) + 0x670i64) + 0x530i64);
                Calls::FastCall(v4 + 0x768, &v22, v5, v10);
                goto LABEL_1034;
            case 0x5C:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x1A0);
                v22 -= 0x58A29656 * FuckEnc::CacheRead<_DWORD>(v4 + 0x430);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0) | 7;
                goto LABEL_1034;
            case 0x5D:
                v22 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x788) + 0x31 * FuckEnc::CacheRead<_BYTE>(v4 + 0x6E0) * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 0x740i64) + 0x6C0i64));
                goto LABEL_1034;
            case 0x5E:
                v12 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 0x2D8i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 0x5E8i64) + 4i64 * ((unsigned __int8)v5 & 0x91))) - (_DWORD)0xC63F4BD;
                goto LABEL_1033;
            case 0x5F:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x340) + 0x400i64) + 8i64 * ((unsigned __int8)v5 ^ 0xB0u)) + 0x3F8i64) ^ v11;
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 0x4A0i64) + 4i64 * (v5 & 0x44)) ^ v22;
                goto LABEL_1033;
            case 0x60:
                v22 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 0x450i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x11)) + 0x588i64) + 8i64 * (unsigned __int8)(0x34 * v5)) + 0x2B0i64);
                goto LABEL_1034;
            case 0x61:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x298);
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 0x6B0));
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 0x6E0i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x190) + 0x5A4452B0);
                goto LABEL_1034;
            case 0x62:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x548) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x468) + 0xF8i64) + 4i64 * ((unsigned __int8)v5 ^ 0x18u)) ^ 0x21) & 0x75)) + 0x178i64) ^ v11;
                v12 = FuckEnc::CacheRead<_DWORD>(v4 + 0x6B0) ^ v22;
                goto LABEL_1033;
            case 0x63:
                Calls::FastCall(v4 + 0x390, &v22, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x210) + 4i64 * (unsigned __int8)__ROR4__(v5, 9));
                goto LABEL_1034;
            case 0x64:
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 0x5D0i64) + 0x1F0i64) + 0x320i64) + 0x3A0i64) + 0x4A0i64) + 4i64 * ((unsigned __int8)v5 ^ 8u));
                goto LABEL_1033;
            case 0x65:
                v22 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x268));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x258);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x480) + 0x1C0i64);
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) & 0xFFFFFFEB;
                goto LABEL_1034;
            case 0x66:
                v22 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x30) * ((FuckEnc::CacheRead<_DWORD>(v4 + 0x420) >> 0x13) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 0x698i64)));
                goto LABEL_1034;
            case 0x67:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x2E8);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xA8);
                v22 ^= ~FuckEnc::CacheRead<_DWORD>(v10 + 0x640);
                v22 = v22 - FuckEnc::CacheRead<_DWORD>(v4 + 0x550) - 0x21B88781;
                goto LABEL_1034;
            case 0x68:
                v22 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x540) - 0x39B942E2);
                Calls::FastCall(v4 + 0x3C0, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8) + 0x5D0i64));
                goto LABEL_1034;
            case 0x69:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x368);
                v22 = ~(FuckEnc::CacheRead<_DWORD>(v10 + 0x698) ^ v22);
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0);
                goto LABEL_1034;
            case 0x6A:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x530) + 0x20i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F0) + 0x2A0i64) + 0x3A0i64) + 0x3B0i64);
                goto LABEL_1034;
            case 0x6B:
                v22 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x4F8) * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x338) + 0x738i64) + 0x1A0i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x298);
                v22 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x3B0);
                goto LABEL_1034;
            case 0x6C:
                v22 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x360) + 0x528i64) + 0x1A0i64) << 0x1B);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5F0);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x630) + 0x408i64);
                goto LABEL_1034;
            case 0x6D:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x738);
                v22 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 0x540));
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0) >> 6) + 0x3CFECEFE;
                goto LABEL_1034;
            case 0x6E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0);
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x168);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 0x450i64);
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x48);
                goto LABEL_1034;
            case 0x6F:
                v22 = v11 - 0x2F000E40;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x360i64);
                Calls::FastCall(v4 + 0x200, &v22, v5, v10);
                goto LABEL_1034;
            case 0x70:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x338) + 0x3E8i64) + 0x718i64) + 0x650i64, &v22, v5, v4);
                v22 -= v5;
                goto LABEL_1034;
            case 0x71:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 0x168i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8);
                v22 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x598) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x78) << 0x15);
                goto LABEL_1034;
            case 0x72:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x360);
                v22 = FuckEnc::CacheRead<_DWORD>(v10 + 0x568) ^ v11;
                Calls::FastCall(v4 + 0x620, &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x630));
                goto LABEL_1034;
            case 0x73:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4E8) + 0x640i64) ^ v11;
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x738) + 0x2D8i64);
                v22 -= 0x6AA63EB7 * FuckEnc::CacheRead<_DWORD>(v4 + 0x550);
                goto LABEL_1034;
            case 0x74:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A0) + 0x170i64) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 0x788i64) & 0xA2)) + 0x4E8i64) + 0x480i64);
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x2B0);
                goto LABEL_1034;
            case 0x75:
                v22 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x120) << 7);
                v22 = __ROL4__(v22, FuckEnc::CacheRead<_BYTE>(v4 + 0x578) ^ (0xAE * FuckEnc::CacheRead<_BYTE>(v4 + 0x6E0)));
                goto LABEL_1034;
            case 0x76:
                v22 = ~(_DWORD)v11;
                Calls::FastCall(v4 + 0xE8, &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x220));
                v22 = ~v22;
                goto LABEL_1034;
            case 0x77:
                v22 = v11 ^ 0x66E975A9;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x530) + 0x468i64);
                v22 = (v11 ^ 0x66E975A9) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x110) + 0x48i64) - FuckEnc::CacheRead<_DWORD>(v10 + 0x168);
                goto LABEL_1034;
            case 0x78:
                v22 = v11 - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x338);
                v22 = (v11 - v5) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x540) + (FuckEnc::CacheRead<_DWORD>(v10 + 0x2D8) | 6) - 0x663CEECF);
                goto LABEL_1034;
            case 0x79:
                v22 = v11 ^ 0xC301319C;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x718);
                v22 = FuckEnc::CacheRead<_DWORD>(v10 + 0x6E0) ^ v11 ^ 0xC301319C;
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x690) + 8i64 * ((0xFE * (_BYTE)v5) & 2)) + 0x178i64);
                goto LABEL_1034;
            case 0x7A:
                Calls::FastCall(v4 + 0x478, &v22, v5, v4);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 8i64 * (__ROL4__(v5, 0xB) & 0x3D)) + 0x2C0i64);
                goto LABEL_1034;
            case 0x7B:
                v22 = v11 - 0x33CF45D0;
                v22 = v11 - 0x33CF45D0 + FuckEnc::CacheRead<_DWORD>(v4 + 0x6B0);
                v22 = v22 - (v5 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8) - 0x507B1711)) - 0x47E29630;
                goto LABEL_1034;
            case 0x7C:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x360) + 0x468i64) + 0x550i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 0x468i64);
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x4A0) + 4i64 * (unsigned __int8)__ROL4__(v5, 5)));
                goto LABEL_1034;
            case 0x7D:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x20);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x368) + 0x1C8i64) + 8i64 * (v5 & 0x41), &v22, v5, v4);
                goto LABEL_1034;
            case 0x7E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8);
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x1F0) + 0x2B0i64) + 0x1E772A84;
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x618) + 4i64 * (unsigned __int8)(0x58 * FuckEnc::CacheRead<_BYTE>(v4 + 0x6C0)));
                goto LABEL_1034;
            case 0x7F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4E8);
                Calls::FastCall(v4 + 0x500, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x780) + 8i64 * ((unsigned __int8)(3 * v5) & 0x88)));
                goto LABEL_1034;
            case 0x80:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 0x670i64);
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x320) + 0x698i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x618) + 4i64 * ((unsigned __int8)v5 ^ 0x87u));
                goto LABEL_1034;
            case 0x81:
                v22 = __ROR4__(v11, ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x788));
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x6B0);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2B8) + 8i64 * ((unsigned __int8)v5 & 0xA6)) + 0x48i64);
                goto LABEL_1034;
            case 0x82:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x268);
                v22 = __ROL4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x110) + 0x268i64));
                v22 = v22 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x598) ^ 0x86605983) + 0x4C21E97;
                goto LABEL_1034;
            case 0x83:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x630) + 0x6D0i64) + 8i64 * ((unsigned __int8)v5 ^ 0x23u)) + 0x6C0i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x10) + 0x718i64);
                v12 = v22 - FuckEnc::CacheRead<_DWORD>(v10 + 0x2D8);
                goto LABEL_1033;
            case 0x84:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x368);
                v22 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 0x58) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x260) + 8i64 * (unsigned __int8)(4 * FuckEnc::CacheRead<_DWORD>(v4 + 0x688))) + 0x540i64) >> 0x1C));
                goto LABEL_1034;
            case 0x85:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x368) + 0x760i64) + 4i64 * ((unsigned __int8)__ROL4__(v5, 4) & 0xC2));
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x450);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0);
                v22 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x688);
                goto LABEL_1034;
            case 0x86:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x408);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F8) + 0x408i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5E8) + 4i64 * ((unsigned __int8)(0xC5 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0) ^ 0xE7)) & 0xA5));
                goto LABEL_1034;
            case 0x87:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x78);
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x578);
                v22 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 0x550i64) & 0xFFFFFFEC;
                goto LABEL_1034;
            case 0x88:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x110);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D0) + 8i64 * (unsigned __int8)(0x76 * (FuckEnc::CacheRead<_BYTE>(v4 + 0x2C0) ^ v5)), &v22, v5, v10);
                goto LABEL_1034;
            case 0x89:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x78);
                v22 = v5 + v22 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x190i64);
                goto LABEL_1034;
            case 0x8A:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x118) + 8i64 * (((unsigned __int8)v5 ^ 0x62) & 0xE3)) + 0xD8i64) + 0x30i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6F8);
                v22 = ~(v22 - FuckEnc::CacheRead<_DWORD>(v10 + 0x268));
                goto LABEL_1034;
            case 0x8B:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x120);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A0) + 0x150i64) + 0x4B0i64);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x4A0) + 4i64 * (unsigned __int8)(0xBA * v5));
                goto LABEL_1034;
            case 0x8C:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x788);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x338);
                Calls::FastCall(v10 + 0x50, &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x110));
                goto LABEL_1034;
            case 0x8D:
                v22 = v11 - (~(0x4AC30131 * FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8)) & 0xFFFFFFEE) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 0x598i64);
                goto LABEL_1034;
            case 0x8E:
                v22 = ~(_DWORD)v11;
                v22 = ~(_DWORD)v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x688);
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x48) ^ (0xC311C5BF * FuckEnc::CacheRead<_DWORD>(v4 + 0x550));
                goto LABEL_1034;
            case 0x8F:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2B8) + 8i64 * (__ROR4__(v5, 0x1D) & 0x70)) + 0x6E0i64);
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x48) | 0xE;
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x408);
                goto LABEL_1034;
            case 0x90:
                v22 = v11 + v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x480);
                Calls::FastCall(v4 + 0x18, &v22, v5, v10);
                v22 = ~v22;
                goto LABEL_1034;
            case 0x91:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x150);
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x2E8);
                v22 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8) + 8i64 * (unsigned __int8)(0xFB * v5)) + 0x550i64) + v22 + 0x635A6C27) ^ 0x6D6E6206;
                goto LABEL_1034;
            case 0x92:
                v22 = v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x400) + 8i64 * ((unsigned __int8)v5 & 0xB3)) + 0x2E8i64);
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x598) ^ v5;
                goto LABEL_1034;
            case 0x93:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x30);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 8);
                v22 = __ROR4__(v22, (v5 * ~FuckEnc::CacheRead<_BYTE>(v10 + 0x4F8)) ^ 0x68);
                goto LABEL_1034;
            case 0x94:
                v22 = (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0)) ^ 0xEBDDF23D;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x3E8i64);
                v22 = ~(v5 + (FuckEnc::CacheRead<_DWORD>(v10 + 0x2D8) ^ v22));
                goto LABEL_1034;
            case 0x95:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A0) + 0x4F8i64);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 8i64 * ((unsigned __int8)v5 ^ 0x63u)) + 0x640i64);
                goto LABEL_1034;
            case 0x96:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x468) + 0x400i64) + 8i64 * ((unsigned __int8)__ROL4__(v5, 0xD) & 0xAF)) + 0x5C8i64);
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x1B0) + 8i64 * (((unsigned __int8)v5 ^ 0xE1) & 0x5E)) + 0x58i64);
                goto LABEL_1034;
            case 0x97:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F8) + 0x5F0i64);
                v22 = v11 + (FuckEnc::CacheRead<_DWORD>(v10 + 0x2B0) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xC8) + 4i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x6B0) ^ 0x41u)));
                goto LABEL_1034;
            case 0x98:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 0x68i64) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x110) + 0x3B0i64), 0xB)) + 0x480i64);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x730) + 4i64 * (((unsigned __int8)v5 ^ 0xF7) & 0x1A)) ^ v11;
                goto LABEL_1033;
            case 0x99:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x1A0) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3A0);
                v22 ^= (FuckEnc::CacheRead<_DWORD>(v4 + 0x168) + FuckEnc::CacheRead<_DWORD>(v10 + 0x408) * v5) | 0x1D;
                goto LABEL_1034;
            case 0x9A:
                v22 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x1A0i64));
                v14 = v5 & 0x10;
                v15 = FuckEnc::CacheRead<_QWORD>(v4 + 0x400);
                goto LABEL_158;
            case 0x9B:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x688) ^ v11;
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 0x408i64);
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x268);
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x430);
                goto LABEL_1034;
            case 0x9C:
                Calls::FastCall(v4 + 0x230, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F8) + 0x638i64) + 8i64 * (__ROR4__(v5, 0xA) & 0x90)));
                goto LABEL_1034;
            case 0x9D:
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8) + 8i64 * (v5 & 0x20)) + 0x688i64) + 0x53);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0xC8) + 4i64 * (unsigned __int8)__ROL4__(v5, 0x10));
                goto LABEL_1034;
            case 0x9E:
                v22 = v11 - ((v5 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x20) - 0x3CEECE6B)) ^ ~(0xAC01467E * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x340) + 0x6B0i64)));
                goto LABEL_1034;
            case 0x9F:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x550);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x360) + 0x1C0i64) ^ 0xDBB20371;
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x578);
                goto LABEL_1034;
            case 0xA0:
                v22 = (v5 + v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x48)) ^ 0x9FD72F9E;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1D8);
                v22 = ~(v22 + (FuckEnc::CacheRead<_DWORD>(v10 + 0x550) ^ 0xEAD0FF7B));
                goto LABEL_1034;
            case 0xA1:
                v22 = (v11 - 0x44C3D8F) ^ 0x8F0968A5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x90);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x638) + 8i64 * (v5 & 0x78)) + 0x788i64);
                goto LABEL_1034;
            case 0xA2:
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x68) + 8i64 * (unsigned __int8)(0xFC * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 0xD0i64) + 0x10i64) + 0x6B0i64))) + 0x240i64) + 4i64 * (((unsigned __int8)v5 ^ 1) & 0x11));
                goto LABEL_1033;
            case 0xA3:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x678);
                v22 = FuckEnc::CacheRead<_DWORD>(v10 + 0x598) ^ v11;
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x6C0);
                v22 += 0x6A3CEECF * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 0x408i64);
                goto LABEL_1034;
            case 0xA4:
                v22 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xB0) + 0x268i64) ^ v5);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x110);
                v22 = v5 + (v22 ^ (0x72F7B430 * FuckEnc::CacheRead<_DWORD>(v10 + 0x2C0)));
                goto LABEL_1034;
            case 0xA5:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x158);
                Calls::FastCall(v10 + 0x768, &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x320));
                v22 += 0x3CFE76BC;
                goto LABEL_1034;
            case 0xA6:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x688);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x118) + 8i64 * (unsigned __int8)(0x1D * FuckEnc::CacheRead<_BYTE>(v4 + 0x6E0) * v5)) + 0x740i64) + 0x338i64);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x408);
                goto LABEL_1034;
            case 0xA7:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 0x570i64, &v22, v5, v4);
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_DWORD>(v4 + 0x168));
                goto LABEL_1034;
            case 0xA8:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6F8) + 0x678i64) + 0x780i64) + 8i64 * (unsigned __int8)(4 * v5)) + 0x710i64) + 0x630i64) + 0x778i64);
                v12 = FuckEnc::CacheRead<_DWORD>(v10 + 0x688) ^ v11;
                goto LABEL_1033;
            case 0xA9:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1D8);
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x1C0);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x118) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x1D)) + 0x210i64) + 4i64 * ((unsigned __int8)__ROL4__(v5, 0x1F) & 0xD1));
                goto LABEL_1034;
            case 0xAA:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x68) + 8i64 * (unsigned __int8)__ROR4__(v5, 2)) + 0x788i64);
                v12 = v22 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A0) + 0x258i64) + 0x6E0i64);
                goto LABEL_1033;
            case 0xAB:
                v22 = v11 ^ (0x3862EA48 * FuckEnc::CacheRead<_DWORD>(v4 + 0x1A0) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 8i64 * ((unsigned __int8)__ROL4__(v5, 0x18) & 0xD6)) + 0x48i64) | 0xE));
                goto LABEL_1034;
            case 0xAC:
                v22 = v11 ^ 0x2D1B87FE;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4E8);
                v22 = (v11 ^ 0x2D1B87FE) + FuckEnc::CacheRead<_DWORD>(v10 + 0x1C0);
                v22 = __ROL4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 8i64 * (unsigned __int8)(0xAF * v5)) + 0x78i64));
                goto LABEL_1034;
            case 0xAD:
                v22 = ~(__ROL4__(v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x368) + 0x420i64) + FuckEnc::CacheRead<_DWORD>(v4 + 0x120) - 0x591EF7A8), 0x41) ^ 0xEFD884B5);
                goto LABEL_1034;
            case 0xAE:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 0x3E0i64) + 0x528i64) + 0x468i64);
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x588) + 8i64 * ((unsigned __int8)v5 ^ 0xC7u)) + 0x178i64);
                goto LABEL_1034;
            case 0xAF:
                v22 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x58);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2A0);
                Calls::FastCall(v4 + 0x200, &v22, v5, v10);
                goto LABEL_1034;
            case 0xB0:
                v22 = v5 ^ (v11 + 0x35776E99 * FuckEnc::CacheRead<_DWORD>(v4 + 0x30) + 0x7492BD55);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5F0);
                v22 += FuckEnc::CacheRead<_DWORD>(v10 + 0x168) ^ v5;
                goto LABEL_1034;
            case 0xB1:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8) ^ v11;
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 0x3A8i64) + 8i64 * ((unsigned __int8)v5 ^ 0x80u)) + 0x488i64) + 0x678i64) + 0x120i64) ^ v22;
                goto LABEL_1033;
            case 0xB2:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 0x6C0i64) ^ v11;
                v22 = v22 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x20) >> 0xE) - 0x1A8F1C4D;
                goto LABEL_1034;
            case 0xB3:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8) + 0x500i64, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 8i64 * ((unsigned __int8)v5 ^ 0x67u)));
                goto LABEL_1034;
            case 0xB4:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x670);
                v22 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x48) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x780) + 8i64 * (v5 & 0x33)) + 0x5E8i64) + 4i64 * (unsigned __int8)(0xEC * v5)));
                goto LABEL_1034;
            case 0xB5:
                v22 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x178) ^ 0x675E022E);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 8);
                v22 += FuckEnc::CacheRead<_DWORD>(v10 + 0x308);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F0) + 0x1C0i64);
                goto LABEL_1034;
            case 0xB6:
                v22 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x568);
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x6C0) ^ 0xC30131F4;
                v22 ^= v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x640);
                goto LABEL_1034;
            case 0xB7:
                v22 = ~__ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x550) ^ 0x1A);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 0x5B0i64) + 0x1F0i64) + 0x168i64);
                goto LABEL_1034;
            case 0xB8:
                v22 = v5 ^ __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0));
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 8i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x568), 0xD) & 0x1A)) + 0x30i64);
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_DWORD>(v4 + 0x190));
                goto LABEL_1034;
            case 0xB9:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x420);
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x58);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6F8);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x578) << 0xD;
                goto LABEL_1034;
            case 0xBA:
                v22 = v11 + 0x6C0168D0;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 0x1E8i64, &v22, v5, v4);
                v22 = __ROR4__(v22, 0x9E);
                goto LABEL_1034;
            case 0xBB:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 0x110i64);
                v22 = v11 + (FuckEnc::CacheRead<_DWORD>(v10 + 0x20) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 8i64 * (unsigned __int8)(0xC8 * v5)) + 8i64) + 0x2B0i64));
                goto LABEL_1034;
            case 0xBC:
                v22 = v11 ^ 0xA4D1FF41;
                v22 = (v11 ^ 0xA4D1FF41) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x1A0i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xD0);
                v22 += FuckEnc::CacheRead<_DWORD>(v10 + 0x168) + 1;
                goto LABEL_1034;
            case 0xBD:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x30);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x630) + 0x240i64) + 4i64 * (unsigned __int8)(0x9A * v5));
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0);
                goto LABEL_1034;
            case 0xBE:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 0x550i64) - 0x27EC8422;
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_DWORD>(v4 + 0x20));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x258);
                v22 += FuckEnc::CacheRead<_DWORD>(v10 + 0x2C0);
                goto LABEL_1034;
            case 0xBF:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x58);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4E8) + 0x10i64) + 0x110i64) + 0xA8i64);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x338) + 0x78i64);
                goto LABEL_1034;
            case 0xC0:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1D8);
                v22 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v10 + 0x308);
                v22 += (unsigned int)~FuckEnc::CacheRead<_DWORD>(v4 + 0x20) >> 0xF;
                goto LABEL_1034;
            case 0xC1:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 8i64 * ((unsigned __int8)(0xCA * v5) & 0xCF)) + 0x6F8i64);
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x690) + 8i64 * (v5 & 0x53)) + 0xC8i64) + 4i64 * ((unsigned __int8)__ROR4__(v5, 0xB) & 0xE9));
                goto LABEL_1034;
            case 0xC2:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 0x6E0i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x168) | 0x1F);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x320);
                v22 += FuckEnc::CacheRead<_DWORD>(v10 + 0x78);
                goto LABEL_1034;
            case 0xC3:
                v22 = (unsigned int)0x19F3567 + v11;
                v22 ^= v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x120) - 0x53A9571B;
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0) + 1;
                goto LABEL_1034;
            case 0xC4:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 0x420i64);
                v22 = v22 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x340) + 0x168i64) - FuckEnc::CacheRead<_DWORD>(v4 + 0x6C0);
                goto LABEL_1034;
            case 0xC5:
                Calls::FastCall(v4 + 0x538, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2B8) + 8i64 * (v5 & 0x74)));
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x120) | 0x15;
                goto LABEL_1034;
            case 0xC6:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 8 * (((unsigned __int8)(0xBA * (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x178))) & 0xB8 | 6i64) ^ 0xA2)) + 0x20i64);
                goto LABEL_1034;
            case 0xC7:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xA8);
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0xF8) + 4i64 * (unsigned __int8)(0x6C * v5)) ^ v11;
                v22 ^= v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x120) + FuckEnc::CacheRead<_DWORD>(v4 + 0x420);
                goto LABEL_1034;
            case 0xC8:
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 0x4F0i64) + 8i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x90) + 0xD0i64) + 0x578i64) ^ 0x8745B86D, 2) & 0x12)) + 0x30i64) ^ v11;
                goto LABEL_1033;
            case 0xC9:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8) + 0x5D8i64, &v22, v5, v4);
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x58) << 0xE;
                goto LABEL_1034;
            case 0xCA:
                Calls::FastCall(v4 + 0x478, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x30) & 0xF)) + 0xD8i64));
                goto LABEL_1034;
            case 0xCB:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x78);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0);
                Calls::FastCall(v10 + 0x390, &v22, v5, v4);
                goto LABEL_1034;
            case 0xCC:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x320) + 0x468i64) + 0x678i64) + 0x258i64);
                Calls::FastCall(v10 + 0x50, &v22, v5, v4);
                goto LABEL_1034;
            case 0xCD:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x340i64) + 0x530i64);
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x760) + 4i64 * (unsigned __int8)(6 * v5));
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x540);
                goto LABEL_1034;
            case 0xCE:
                v22 = v11 - 0x9E247D;
                v22 = v11 - 0x9E247D - FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x468) + 0x468i64);
                v22 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x308);
                goto LABEL_1034;
            case 0xCF:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x368);
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x48) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x258) + 0x358i64) + 4i64 * (unsigned __int8)(0x13 * v5));
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8);
                goto LABEL_1034;
            case 0xD0:
                v22 = ~(v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x598) >> 0x1A));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x480);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x408) << 0x1F;
                goto LABEL_1034;
            case 0xD1:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x540) ^ v11;
                v12 = ~(v22 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6F8) + 0x638i64) + 8i64 * ((unsigned __int8)v5 & 0xB3)) + 0x268i64));
                goto LABEL_1033;
            case 0xD2:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 0x518i64) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x450) ^ 0xE7u), &v22, v5, v4);
                goto LABEL_1034;
            case 0xD3:
                v22 = __ROR4__(v11, v5) + v5;
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x578);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x90);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x3E8) + 0x268i64);
                goto LABEL_1034;
            case 0xD4:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x548) + 8i64 * ((unsigned __int8)__ROR4__(v5, 0x1D) & 0xDB)) + 0x528i64) + 0x2D0i64) + 8i64 * ((unsigned __int8)v5 & 0xAD), &v22, v5, v4);
                goto LABEL_1034;
            case 0xD5:
                v22 = __ROL4__(v11, ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x120));
                goto LABEL_1034;
            case 0xD6:
                v22 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x640) ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x120);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x90) + 0x168i64) + 1;
                goto LABEL_1034;
            case 0xD7:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x2E8);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4E8) + 0x6B0i64);
                v22 = __ROR4__(v22, (FuckEnc::CacheRead<_BYTE>(v4 + 0x58) * v5) & 0xE9);
                goto LABEL_1034;
            case 0xD8:
                v22 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 0x640i64) * (FuckEnc::CacheRead<_BYTE>(v4 + 0x550) - 0xF0 * FuckEnc::CacheRead<_BYTE>(v4 + 0x48)));
                goto LABEL_1034;
            case 0xD9:
                Calls::FastCall(v4 + 0x3B8, &v22, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x158);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x480) + 0x2C0i64);
                goto LABEL_1034;
            case 0xDA:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x630);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x68) + 8i64 * (__ROL4__(FuckEnc::CacheRead<_DWORD>(v10 + 0x450), 0x14) & 0x49)) + 0x310i64) + 8i64 * ((unsigned __int8)v5 & 0xC3), &v22, v5, v4);
                goto LABEL_1034;
            case 0xDB:
                v22 = ~(v11 ^ 0xDBFCBDEF);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0);
                v22 = __ROL4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v10 + 0x2E8) ^ 0xEB) & 0x5E)) + 0x450i64));
                goto LABEL_1034;
            case 0xDC:
                Calls::FastCall(v4 + 0x720, &v22, v5, v4);
                v22 = v22 - 0x1379E7CD + v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0);
                goto LABEL_1034;
            case 0xDD:
                v22 = v11 + 0xDD1FF41;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 0x738i64) + 0xD0i64);
                v22 = v11 + 0xDD1FF41 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x58) ^ FuckEnc::CacheRead<_DWORD>(v10 + 0x6B0));
                goto LABEL_1034;
            case 0xDE:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x468) + 0x28i64) + 8i64 * (unsigned __int8)(0x2E * v5)) + 0x690i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x15)) + 0x1F8i64);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x218) + 0x408i64) ^ v11;
                goto LABEL_1033;
            case 0xDF:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x788);
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x568);
                v22 += -(v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x450)) - 0x478F67F5;
                goto LABEL_1034;
            case 0xE0:
                v22 = v11 ^ (0xC3018944 * FuckEnc::CacheRead<_DWORD>(v4 + 0x4F8));
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0) + 0x6D0i64) + 8i64 * (unsigned __int8)(0x9C * v5)) + 0x90i64) + 0x2E8i64));
                goto LABEL_1034;
            case 0xE1:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x48) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4F0) + 8i64 * ((unsigned __int8)v5 & 0xF8)) + 0x630i64);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x118) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x14)) + 0x578i64) ^ v22;
                goto LABEL_1033;
            case 0xE2:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x468);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x560) + 8i64 * (v5 & 0x6E), &v22, v5, v4);
                v22 -= v5;
                goto LABEL_1034;
            case 0xE3:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x168);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x10);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x20) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x2E8);
                goto LABEL_1034;
            case 0xE4:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x568);
                Calls::FastCall(v4 + 0x230, &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0));
                goto LABEL_1034;
            case 0xE5:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5B0) + 0x530i64);
                v22 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0) * ~(FuckEnc::CacheRead<_DWORD>(v10 + 0x578) * v5));
                goto LABEL_1034;
            case 0xE6:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x320) + 0x548i64) + 8i64 * (v5 & 0x69)) + 0x218i64);
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x2F8) + 8i64 * ((unsigned __int8)v5 & 0xA7)) + 0x2D8i64);
                goto LABEL_1034;
            case 0xE7:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x568);
                Calls::FastCall(v4 + 0x50, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0) + 8i64 * (v5 & 0x71)));
                goto LABEL_1034;
            case 0xE8:
                v22 = __ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x2D8) ^ v11, 0x76);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5F0);
                Calls::FastCall(v4 + 0x490, &v22, v5, v10);
                goto LABEL_1034;
            case 0xE9:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 0x10i64);
                v12 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x320) + 0x5E8i64) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 0x2B0i64), 0x16)));
                goto LABEL_1033;
            case 0xEA:
                v22 = __ROR4__(~((v11 - v5) ^ 0x31847F01), 0xA2);
                v22 ^= ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x30) ^ v5);
                goto LABEL_1034;
            case 0xEB:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x468);
                v22 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x118) + 8i64 * (__ROL4__(FuckEnc::CacheRead<_DWORD>(v10 + 0x120), 3) & 0x25)) + 0x450i64) & 0xFFFFFFEA);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 0x6C0i64);
                goto LABEL_1034;
            case 0xEC:
                v22 = v11 - 0x4463FCC8 * FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x670) + 0x78i64);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5B0) + 0x2C0i64);
                goto LABEL_1034;
            case 0xED:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x158);
                v22 = ~(v11 + ((FuckEnc::CacheRead<_DWORD>(v4 + 0x3B0) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x388) + 4i64 * (unsigned __int8)(0xBE * FuckEnc::CacheRead<_BYTE>(v10 + 0x6C0))) - 0x3CFE76BC) | 0x15));
                goto LABEL_1034;
            case 0xEE:
                Calls::FastCall(v4 + 0x478, &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x6F8));
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x1A0);
                goto LABEL_1034;
            case 0xEF:
                v22 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x550) ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x578));
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x68) + 8i64 * (v5 & 0x5A)) + 0x2D8i64);
                goto LABEL_1034;
            case 0xF0:
                v22 = v5 ^ (v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x190) ^ v5));
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xC8) + 4i64 * (unsigned __int8)(0x43 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x220) + 0x58i64)));
                goto LABEL_1034;
            case 0xF1:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6F8) + 0x3E0i64) + 0x740i64);
                Calls::FastCall(v4 + 0x278, &v22, v5, v10);
                v22 += 0x36C31131;
                goto LABEL_1034;
            case 0xF2:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x4F8);
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 0x388i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 6));
                goto LABEL_1034;
            case 0xF3:
                v14 = v5 & 0x66;
                v15 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x220) + 0x778i64) + 0x480i64) + 0x780i64);
            LABEL_158:
                Calls::FastCall(v4 + 0x680, &v22, v5, FuckEnc::CacheRead<_QWORD>(v15 + 8 * v14));
                goto LABEL_1034;
            case 0xF4:
                Calls::FastCall(v4 + 0x768, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x548) + 8i64 * ((unsigned __int8)v5 & 0xF6)));
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 0x6E0i64);
                goto LABEL_1034;
            case 0xF5:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x420);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x5B0) + 0x3F0i64, &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x670));
                goto LABEL_1034;
            case 0xF6:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x28) + 8i64 * (unsigned __int8)(5 * v5)) + 0x310i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 6), &v22, v5, v4);
                goto LABEL_1034;
            case 0xF7:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x710);
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0xC8) + 4i64 * ((unsigned __int8)(0xC6 * v5) & 0x94));
                v22 += ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x420) + 0x7A2D0FF);
                goto LABEL_1034;
            case 0xF8:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x430);
                v22 = __ROL4__(v22, FuckEnc::CacheRead<_DWORD>(v4 + 0x6B0));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x488);
                Calls::FastCall(v4 + 0x720, &v22, v5, v10);
                goto LABEL_1034;
            case 0xF9:
                Calls::FastCall(v4 + 0x1E8, &v22, v5, v4);
                v22 ^= -FuckEnc::CacheRead<_DWORD>(v4 + 0x308) - 0x4E533D0A;
                goto LABEL_1034;
            case 0xFA:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x6C0i64);
                v22 = __ROR4__(v22, v5 + FuckEnc::CacheRead<_BYTE>(v4 + 0x430) + ~FuckEnc::CacheRead<_BYTE>(v4 + 0x168));
                goto LABEL_1034;
            case 0xFB:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x120) ^ v11;
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x258) + 0x5F8i64) + 0x530i64) + 0x640i64);
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x598);
                goto LABEL_1034;
            case 0xFC:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0);
                v22 = v11 + (FuckEnc::CacheRead<_DWORD>(v10 + 0x78) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x530) + 0x220i64) + 0x1F8i64) + 0x3E0i64) + 0x6E0i64));
                goto LABEL_1034;
            case 0xFD:
                v22 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x3B0) & 0xFFFFFFFB);
                Calls::FastCall(v4 + 0xA0, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 8i64 * (unsigned __int8)(0x1A * v5)));
                goto LABEL_1034;
            case 0xFE:
                v22 = (v11 ^ 0x5920211B) + 0x3149DC3C;
                v22 = __ROL4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x540) & 0xE8)) + 0x730i64) + 4i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x6C0), 0xF)));
                goto LABEL_1034;
            case 0xFF:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x298);
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x5E8) + 4i64 * (unsigned __int8)(0x2B * FuckEnc::CacheRead<_BYTE>(v4 + 0x178))) ^ v11;
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x240) + 4i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x420) ^ 0xA) & 0xCF));
                goto LABEL_1034;
            case 0x100:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x150);
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x30) - v5;
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 0x20i64);
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0);
                goto LABEL_1034;
            case 0x101:
                v22 = (v11 ^ 0x42A04473) + 0x38793709;
                Calls::FastCall(v4 + 0x5D8, &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x220));
                goto LABEL_1034;
            case 0x102:
                v22 = v11 - 0x6B7B1EDE;
                v22 = v11 - 0x6B7B1EDE + (FuckEnc::CacheRead<_DWORD>(v4 + 0x178) ^ 0xF0817D2E) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x568i64) + 1);
                goto LABEL_1034;
            case 0x103:
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x20) + 0x2F);
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x78) + (FuckEnc::CacheRead<_DWORD>(v4 + 0x268) ^ v5 ^ 0xEFD1FF41);
                goto LABEL_1034;
            case 0x104:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x698) ^ v11;
                v22 = ~(v22 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 0x788i64));
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x120) * v5;
                goto LABEL_1034;
            case 0x105:
                v22 = v11 + v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xB0);
                v22 = v11 + v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x78) * v5 + ~FuckEnc::CacheRead<_DWORD>(v10 + 0x450);
                goto LABEL_1034;
            case 0x106:
                v22 = v11 ^ ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x308) & 0xFFFFFFF6);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x28) + 8i64 * ((unsigned __int8)v5 & 0xDC)) + 0x2D8i64);
                goto LABEL_1034;
            case 0x107:
                v22 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8));
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 8i64 * ((unsigned __int8)v5 ^ 0xBDu)) + 0x3E0i64);
                v22 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x168);
                goto LABEL_1034;
            case 0x108:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) ^ 0x14737871) + 1;
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8);
                goto LABEL_1034;
            case 0x109:
                Calls::FastCall(v4 + 0x428, &v22, v5, v4);
                v22 = __ROL4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 0x320i64) + 0x578i64));
                goto LABEL_1034;
            case 0x10A:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x468) + 0x400i64) + 8i64 * ((unsigned __int8)v5 & 0xCE)) + 0x1B0i64) + 8i64 * ((unsigned __int8)v5 ^ 0x2Cu)) + 0x480i64) + 0x3A0i64);
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x78);
                goto LABEL_1033;
            case 0x10B:
                v22 = v11 - 0x3CFE76BC;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 0x258i64);
                Calls::FastCall(v4 + 0x270, &v22, v5, FuckEnc::CacheRead<_QWORD>(v10 + 0x488));
                goto LABEL_1034;
            case 0x10C:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x488);
                v22 = v11 ^ FuckEnc::CacheRead<_DWORD>(v10 + 0x48) & 0xFFFFFFFE;
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_BYTE>(v4 + 0x688) & 0xE1);
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x4F8);
                goto LABEL_1034;
            case 0x10D:
                Calls::FastCall(v4 + 0x100, &v22, v5, v4);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8) + 8i64 * ((unsigned __int8)v5 ^ 0xBBu)) + 0x430i64);
                goto LABEL_1034;
            case 0x10E:
                v22 = v11 ^ 0xABD1FF41;
                v22 = (v11 ^ 0xABD1FF41) - (FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0) << 0xB);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x15)) + 0x268i64) ^ v22;
                goto LABEL_1033;
            case 0x10F:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x530i64) + 0x4A8i64);
                Calls::FastCall(v4 + 0x130, &v22, v5, FuckEnc::CacheRead<_QWORD>(v10 + 0x468));
                goto LABEL_1034;
            case 0x110:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0);
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x168) ^ v5;
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 0x2C0i64);
                goto LABEL_1034;
            case 0x111:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x688);
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x540) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 8i64 * (v5 & 8)) + 0x2A0i64) + 0x698i64);
                goto LABEL_1034;
            case 0x112:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1D8) + 0x288i64) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x1A0), 7), &v22, v5, v4);
                goto LABEL_1034;
            case 0x113:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x528);
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x178);
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 0x3F8i64));
                v22 ^= 0x1CF1AA0F * FuckEnc::CacheRead<_DWORD>(v4 + 0x190);
                goto LABEL_1034;
            case 0x114:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x58);
                v12 = __ROR4__(v22, (v5 + FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x260) + 8i64 * (unsigned __int8)(0xDE * v5)) + 0x618i64) + 4i64 * (unsigned __int8)(0x45 * v5))) ^ 0xAB);
                goto LABEL_1033;
            case 0x115:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2B8) + 8 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x788) & 0xD0 | 0xAi64)) + 0x598i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x338);
                v22 += FuckEnc::CacheRead<_DWORD>(v10 + 0x308);
                goto LABEL_1034;
            case 0x116:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 8i64 * ((unsigned __int8)__ROL4__(v5, 0x15) & 0xCA)) + 0x400i64) + 8i64 * ((unsigned __int8)__ROL4__(v5, 0xD) & 0xE8)) + 0x158i64);
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 0x1C0));
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x698);
                goto LABEL_1034;
            case 0x117:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0) + 0x358i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 0xD)) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xA8);
                Calls::FastCall(v4 + 0x478, &v22, v5, v10);
                goto LABEL_1034;
            case 0x118:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4E8);
                v22 = v11 + (v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x58) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x618) + 4i64 * (unsigned __int8)__ROR4__(v5, 8)) ^ 0x7B6A0DA4);
                goto LABEL_1034;
            case 0x119:
                v22 = (v11 - 0x2E00BE58) ^ 0xC30131D1;
                v22 = __ROL4__(v22, FuckEnc::CacheRead<_BYTE>(v4 + 0x688) + FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0xB0) + 0x788i64) + 0x48);
                goto LABEL_1034;
            case 0x11A:
                v22 = __ROR4__(v11 ^ 0x8FF29F8F, 0xFF);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x158i64) + 0x670i64) + 0xB0i64);
                v22 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x3F8);
                goto LABEL_1034;
            case 0x11B:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x220) + 0x718i64) + 0x368i64) + 0x2E8i64);
                v22 = __ROL4__(v22, FuckEnc::CacheRead<_DWORD>(v4 + 0x30));
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x640);
                goto LABEL_1034;
            case 0x11C:
                Calls::FastCall(v4 + 0x128, &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x220));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x320);
                v22 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x688);
                goto LABEL_1034;
            case 0x11D:
                Calls::FastCall(v4 + 0x230, &v22, v5, v4);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8) + 8i64 * (((unsigned __int8)v5 ^ 8) & 0x38)) + 0x540i64);
                goto LABEL_1034;
            case 0x11E:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 0x608i64, &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x340));
                v22 -= 0x3D61877F;
                goto LABEL_1034;
            case 0x11F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x110);
                v22 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x638) + 8i64 * (unsigned __int8)(0x83 * v5)) + 0x588i64) + 8i64 * ((unsigned __int8)v5 & 0xB9)) + 0x698i64);
                goto LABEL_1034;
            case 0x120:
                v22 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 0x1F0i64) + 0x78i64) >> 4);
                v22 = v22 - FuckEnc::CacheRead<_DWORD>(v4 + 0x540) - 0x45361F7;
                goto LABEL_1034;
            case 0x121:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x488) + 0x718i64) + 0x368i64) + 0xA8i64) + 0x1F8i64) + 0x260i64) + 8i64 * ((unsigned __int8)(0x60 * v5) & 0x88)) + 0x268i64) ^ v11;
                goto LABEL_1034;
            case 0x122:
                v22 = v11 ^ ((unsigned int)~FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0) >> 1);
                v22 = ~(v22 ^ ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x58) >> 0x17));
                goto LABEL_1034;
            case 0x123:
                v22 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x190) & 0x61)) + 0xD8i64) + 0xD8i64) + 0x4F8i64) ^ 0x23D99AAB) + 1;
                goto LABEL_1034;
            case 0x124:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x450);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x440) + 8i64 * (v5 & 1)) + 0x4F0i64) + 8i64 * (((unsigned __int8)v5 ^ 3) & 0x1B)) + 0x2D8i64);
                goto LABEL_1034;
            case 0x125:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x30);
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x598);
                v22 -= 0x37C31131 * FuckEnc::CacheRead<_DWORD>(v4 + 0x540);
                goto LABEL_1034;
            case 0x126:
                v22 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x420) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0x340i64) + 0x420i64);
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x48) ^ v5;
                goto LABEL_1034;
            case 0x127:
                v22 = v11 - 0x51453746;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x90) + 0x18i64, &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x5F8));
                goto LABEL_1034;
            case 0x128:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x630) + 0x528i64) + 0x638i64) + 8i64 * ((unsigned __int8)(0x6A * v5) & 0xBF)) + 0x110i64) + 0x6B0i64) * v5;
                goto LABEL_1034;
            case 0x129:
                v22 = v11 + 0x41DA87B3;
                v22 = v11 + 0x41DA87B3 + FuckEnc::CacheRead<_DWORD>(v4 + 0x6B0) - 0x5CE3DBF4;
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x190) ^ v5;
                goto LABEL_1034;
            case 0x12A:
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4F0) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x788) ^ 0xE4) & 0x3B)) + 0x440i64) + 8i64 * (unsigned __int8)(0xB8 * v5)) + 0x528i64) + 0x408i64);
                goto LABEL_1033;
            case 0x12B:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 0x528i64) + 0x360i64) + 0x5F0i64);
                Calls::FastCall(v4 + 0x3B8, &v22, v5, v10);
                goto LABEL_1034;
            case 0x12C:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x5B0) + 0x3C0i64, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x10) + 0x2A0i64));
                goto LABEL_1034;
            case 0x12D:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xD8);
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 0x2B0));
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x640);
                v22 += ~FuckEnc::CacheRead<_DWORD>(v4 + 0x640);
                goto LABEL_1034;
            case 0x12E:
                v22 = v11 - v5;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x360) + 0x5B0i64) + 0x128i64, &v22, v5, v4);
                goto LABEL_1034;
            case 0x12F:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 0x2A8i64, &v22, v5, v4);
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x308);
                goto LABEL_1034;
            case 0x130:
                v22 = v5 ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x690) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0), 0xC)) + 0x220i64) + 0x298i64) + 0x738i64);
                v22 = FuckEnc::CacheRead<_DWORD>(v10 + 0x78) ^ v5 ^ v11;
                goto LABEL_1034;
            case 0x131:
                v22 = v11 - 0x3CEECEF5;
                v22 = v11 - 0x3CEECEF5 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x598) & 0xFFFFFFE1 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x90) + 0x308i64));
                goto LABEL_1034;
            case 0x132:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x738) + 0x1A0i64) - 0x5D478E8B;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x488) + 0x3A0i64);
                v22 = (FuckEnc::CacheRead<_DWORD>(v10 + 0x308) ^ v22) - 0x3A1EC591;
                goto LABEL_1034;
            case 0x133:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8) + 0x5E8i64) + 4i64 * (unsigned __int8)v5) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xB0);
                Calls::FastCall(v4 + 0x18, &v22, v5, v10);
                goto LABEL_1034;
            case 0x134:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8) + 0x738i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x468) + 0x100i64, &v22, v5, v10);
                goto LABEL_1034;
            case 0x135:
                v12 = ~(v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x698) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 8i64 * (unsigned __int8)(0xDC * FuckEnc::CacheRead<_BYTE>(v4 + 0x540))) + 0x3B0i64) ^ 0xD33CE761));
                goto LABEL_1033;
            case 0x136:
                v22 = v11 - v5;
                v22 = v11 - v5 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 0x2D8i64) ^ 0xF81C0FD2);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x298);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x688);
                goto LABEL_1034;
            case 0x137:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x68) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x168), 0xA)) + 0x240i64) + 4i64 * ((unsigned __int8)__ROL4__(v5, 0x1C) & 0xC4));
                v22 = __ROL4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x3F8i64));
                goto LABEL_1034;
            case 0x138:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x670) + 0x528i64) + 0x168i64);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x630) + 0x530i64) + 0x5E8i64) + 4i64 * ((0x24 * (_BYTE)v5) & 0x77));
                goto LABEL_1034;
            case 0x139:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x540) + 1;
                v22 -= (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x58)) ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x408));
                goto LABEL_1034;
            case 0x13A:
                v22 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x1A0);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x340) + 0x440i64) + 8i64 * ((unsigned __int8)(0x45 * v5) & 0x85)) + 0x168i64) << 0x18;
                goto LABEL_1034;
            case 0x13B:
                v22 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x698) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xF8) + 4i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8) + 8i64 * (unsigned __int8)(0xEF * v5)) + 0x688i64) & 0x23)) ^ 0x356D0ABC);
                goto LABEL_1034;
            case 0x13C:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x578) ^ v11;
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2B8) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x440) + 8i64 * ((unsigned __int8)v5 & 0x80)) + 0x1A0i64) & 0x4C)) + 0x338i64) + 0x3B0i64);
                goto LABEL_1034;
            case 0x13D:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x368) + 0x170i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 0xF)) + 0x530i64);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x260) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x18)) + 0x540i64) ^ v11;
                goto LABEL_1033;
            case 0x13E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x218);
                v22 = v11 + 0x3699A868 * FuckEnc::CacheRead<_DWORD>(v10 + 0x2D8) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x630) + 0x210i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 0x19));
                goto LABEL_1034;
            case 0x13F:
                v22 = v5 ^ (v11 - 0x3DF34BA);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 0x338i64);
                v22 = v5 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x618) + 4i64 * ((unsigned __int8)v5 & 0x9A)) ^ v22);
                goto LABEL_1034;
            case 0x140:
                v22 = __ROL4__(v11, 0x50);
                v22 = __ROL4__(v22, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8) + 0x6C0i64) + FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8) + 8i64 * ((unsigned __int8)v5 & 0xC1)) + 0x698i64));
                goto LABEL_1034;
            case 0x141:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x340) + 0x320i64);
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x78) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x2F8) + 8i64 * (((unsigned __int8)v5 ^ 5) & 0xD)) + 0x210i64) + 4i64 * ((unsigned __int8)v5 ^ 0xC1u));
                goto LABEL_1034;
            case 0x142:
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x738) + 0x488i64) + 0x260i64) + 8i64 * (v5 & 0x63)) + 0xB0i64) + 0x6F8i64) + 0xB0i64) + 0x698i64) ^ v11;
                goto LABEL_1033;
            case 0x143:
                Calls::FastCall(v4 + 0x538, &v22, v5, v4);
                Calls::FastCall(v4 + 0x278, &v22, v5, v4);
                goto LABEL_1034;
            case 0x144:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x1A0) - v5;
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x3B0) * 2 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x58) & 0x1FFFFFFF);
                goto LABEL_1034;
            case 0x145:
                v22 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x110) + 0x2E8i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x178) ^ 0xE6D1FF41));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5F8);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x688);
                goto LABEL_1034;
            case 0x146:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x28) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x19)) + 0x5C8i64) + 0x528i64) + 0x2B0i64) ^ v11;
                v22 = __ROL4__(v22, FuckEnc::CacheRead<_DWORD>(v4 + 0x268));
                goto LABEL_1034;
            case 0x147:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x1A0);
                Calls::FastCall(v4 + 0x5D8, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F8) + 0x340i64));
                goto LABEL_1034;
            case 0x148:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8) ^ v11;
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4E8) + 0x528i64) + 0x150i64) + 0x5C8i64) + 0xC8i64) + 4i64 * (((unsigned __int8)v5 ^ 0x19) & 0x39));
                goto LABEL_1034;
            case 0x149:
                v22 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x20) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x678) + 0x2E8i64)) ^ 0x54ADD324;
                goto LABEL_1034;
            case 0x14A:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x6B0);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x530);
                Calls::FastCall(v10 + 0x5C0, &v22, v5, v4);
                goto LABEL_1034;
            case 0x14B:
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F8) + 0x268i64)) ^ 0x9889527;
                v22 ^= v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x420) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x540);
                goto LABEL_1034;
            case 0x14C:
                v22 = v11 + ~(~FuckEnc::CacheRead<_DWORD>(v4 + 0x168) * (~FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) << 0x10));
                goto LABEL_1034;
            case 0x14D:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 8i64 * (__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x190), 0xF) & 0x84)) + 0x440i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0xD)) + 0x3A0i64) + 0x530i64);
                v12 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 0x190));
                goto LABEL_1033;
            case 0x14E:
                v22 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 0x30i64) & 0xFFFFFFF5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x718);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x4D0) + 4i64 * (v5 & 4));
                goto LABEL_1034;
            case 0x14F:
                v22 = v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x430) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x320);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x6D0) + 8i64 * ((unsigned __int8)v5 & 0x99)) + 0x30i64) - 0x2385BB6A;
                goto LABEL_1034;
            case 0x150:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x220) + 0x468i64);
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x698) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x630) + 0x4E8i64) + 8i64) + 0x30i64);
                goto LABEL_1034;
            case 0x151:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x1A0) * (0x2A1BCED2 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x58) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x678) + 0x578i64)) - 0x17813D9E);
                goto LABEL_1034;
            case 0x152:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x120);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x488);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 0x200i64, &v22, v5, v10);
                goto LABEL_1034;
            case 0x153:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 0x420i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xD8);
                v22 -= 0x74B2AF0E * FuckEnc::CacheRead<_DWORD>(v10 + 0x2D8) * FuckEnc::CacheRead<_DWORD>(v4 + 0x598);
                goto LABEL_1034;
            case 0x154:
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x408));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x258) + 0x3A8i64) + 8i64 * ((unsigned __int8)__ROR4__(v5, 0xB) & 0xD1)) + 0x778i64);
                v22 += FuckEnc::CacheRead<_DWORD>(v10 + 0x450) * v5;
                goto LABEL_1034;
            case 0x155:
                v22 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x2E8) & 0xFFFFFFF0);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5B0);
                Calls::FastCall(v4 + 0x680, &v22, v5, v10);
                goto LABEL_1034;
            case 0x156:
                v22 = v11 - 0x6686A93E * FuckEnc::CacheRead<_DWORD>(v4 + 0x168) + 0x3B8378E6;
                v22 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F0) + 0x178i64) ^ v22);
                goto LABEL_1034;
            case 0x157:
                v22 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x578) ^ 0xE85E2EBA);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 0x740i64) + 0x4B0i64);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x698);
                goto LABEL_1034;
            case 0x158:
                v22 = (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x430)) ^ 0x28ECA2C2;
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 0x78i64) ^ v5;
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x30);
                goto LABEL_1034;
            case 0x159:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x28) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 0x3B0i64) ^ 0xF3) & 0xAC)) + 0xB0i64);
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x760) + 4i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0), 2)) - v5;
                goto LABEL_1034;
            case 0x15A:
                v22 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x540)) ^ 0x23D1FF41;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x678);
                v22 ^= ~(0xF7D1FF41 * FuckEnc::CacheRead<_DWORD>(v10 + 0x6C0));
                goto LABEL_1034;
            case 0x15B:
                v22 = ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x78) ^ v11);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x210) + 4i64 * (unsigned __int8)-FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x4B0i64) + 0x190i64));
                goto LABEL_1034;
            case 0x15C:
                v22 = v11 + 0x2CBB9FF2;
                v22 = (v11 + 0x2CBB9FF2) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1D8) + 0x320i64) + 0x2B8i64) + 8i64 * ((unsigned __int8)v5 & 0x84)) + 0x1C0i64);
                goto LABEL_1034;
            case 0x15D:
                Calls::FastCall(v4 + 0x478, &v22, v5, v4);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 8i64 * ((unsigned __int8)v5 ^ 0xA1u)) + 0x540i64);
                goto LABEL_1034;
            case 0x15E:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x418) + 8i64 * (__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0), 0x12) & 0xBB), &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x298));
                goto LABEL_1034;
            case 0x15F:
                v22 = v5 ^ v11;
                v22 = __ROR4__(v5 ^ v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 0x2C0i64));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x670) + 0x630i64);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x78);
                goto LABEL_1034;
            case 0x160:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 8i64 * ((unsigned __int8)(0x89 * v5) & 0xF4)) + 0x530i64);
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x2F8) + 8i64 * (unsigned __int8)(0x46 * v5)) + 0x1B0i64) + 8i64 * ((unsigned __int8)v5 & 0x9D)) + 0x788i64));
                goto LABEL_1034;
            case 0x161:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x4F8);
                v12 = v22 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 0x260i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x11)) + 0x420i64) - FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0);
                goto LABEL_1033;
            case 0x162:
                v22 = v11 - 0x309F8B8A;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1D8);
                v22 = v11 - 0x309F8B8A - (FuckEnc::CacheRead<_DWORD>(v10 + 0x568) & 0xFFFFFFE7);
                v22 += 0x6691E190 * FuckEnc::CacheRead<_DWORD>(v4 + 0x20);
                goto LABEL_1034;
            case 0x163:
                v22 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x178));
                v16 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x338) + 0x630i64);
                goto LABEL_360;
            case 0x164:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x430) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0) + 8i64 * (((unsigned __int8)v5 ^ 0xFD) & 0xAA)) + 0x780i64) + 8i64 * (unsigned __int8)(0x5C * v5)) + 0x6B0i64);
                goto LABEL_1034;
            case 0x165:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x530) + 0x688i64) ^ v11;
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x1A0) + 0x30DDA029) ^ 0xF0B8712C;
                goto LABEL_1034;
            case 0x166:
                v22 = v5 + v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 0x78i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 8i64);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x6C0);
                goto LABEL_1034;
            case 0x167:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x168);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x550) + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x340) + 0x240i64) + 4i64 * (__ROR4__(v5, 0xE) & 0xA)) ^ v5);
                goto LABEL_1034;
            case 0x168:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x640) - 0x6CC31131;
                v22 = __ROL4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x90) + 0x90i64) + 0x358i64) + 4i64 * ((unsigned __int8)v5 ^ 0xE6u)));
                goto LABEL_1034;
            case 0x169:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xD8);
                v22 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 0x1A0) * (0x2E00BE35 - FuckEnc::CacheRead<_DWORD>(v4 + 0x640) - FuckEnc::CacheRead<_DWORD>(v4 + 0x268)));
                goto LABEL_1034;
            case 0x16A:
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x308)) - 0x3CFECE22;
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x640) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 8i64 * (v5 & 0x27)) + 0x48i64);
                goto LABEL_1034;
            case 0x16B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x110);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x3D0) + 8i64 * (((unsigned __int8)v5 ^ 0xEF) & 0xD0), &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 8));
                goto LABEL_1034;
            case 0x16C:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x178);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x738);
                v22 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x268);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x340) + 0x168i64);
                goto LABEL_1034;
            case 0x16D:
            {
                auto temp = FuckEnc::CacheRead<_DWORD>(v4 + 0x190);
                v22 = __ROL4__(v11, BYTE1(temp));
                v22 += v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0);
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_DWORD>(v4 + 0x308));
                goto LABEL_1034;
            }
            case 0x16E:
                v22 = v5 ^ (v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x2E8));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x298);
                v22 += FuckEnc::CacheRead<_DWORD>(v10 + 0x4F8) + (FuckEnc::CacheRead<_DWORD>(v4 + 0x168) ^ 0x7C19FD8A);
                goto LABEL_1034;
            case 0x16F:
                v22 = (v5 ^ v11) - 0x18E1A8DC;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x528);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x268);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x3F8i64);
                goto LABEL_1034;
            case 0x170:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6F8) + 0x28i64) + 8i64 * (((unsigned __int8)v5 ^ 0xEF) & 0x99)) + 0x1C0i64) ^ v11;
                v22 += ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) << 0x1C);
                goto LABEL_1034;
            case 0x171:
                v22 = ~(v5 ^ v11);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x578) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x440) + 8i64 * (__ROR4__(v5, 0x15) & 0x42)) + 0x308i64);
                goto LABEL_1034;
            case 0x172:
                v22 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x430) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x548) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x550i64) & 0x45)) + 0x78i64));
                goto LABEL_1034;
            case 0x173:
                v22 = v11 + 0x6B96EEE3 * ((v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x2D8)) ^ 0x48B55B9D);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0);
                v22 += FuckEnc::CacheRead<_DWORD>(v10 + 0x450);
                goto LABEL_1034;
            case 0x174:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x48);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x528);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x5E8) + 4i64 * (unsigned __int8)__ROR4__(v5, 0x19));
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x368) + 0x30i64);
                goto LABEL_1034;
            case 0x175:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x480);
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x178) + FuckEnc::CacheRead<_DWORD>(v4 + 0x450);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x2E8) ^ 0x8E7B83E0;
                goto LABEL_1034;
            case 0x176:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 8i64);
                v22 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x240) + 4i64 * (unsigned __int8)(0x9D * v5)) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x730) + 4i64 * (unsigned __int8)(0xA4 * FuckEnc::CacheRead<_BYTE>(v4 + 0x190))));
                goto LABEL_1034;
            case 0x177:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x430);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xC8) + 4i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x450), 0xD)) >> 0x1D;
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x788);
                goto LABEL_1034;
            case 0x178:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xD0);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x638) + 8i64 * (unsigned __int8)(0xF9 * v5)) + 0x288i64) + 8i64 * (unsigned __int8)(0xFA * v5), &v22, v5, v4);
                goto LABEL_1034;
            case 0x179:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x90) + 0x2A8i64, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0) + 0x2A0i64));
                goto LABEL_1034;
            case 0x17A:
                v22 = v11 - 0x788E77EE;
                v22 = v11 - 0x788E77EE - FuckEnc::CacheRead<_DWORD>(v4 + 0x190);
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_BYTE>(v4 + 0x48) + FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x420i64));
                goto LABEL_1034;
            case 0x17B:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 8i64 * ((unsigned __int8)v5 & 0xB9)) + 0x3A0i64) + 0x378i64, &v22, v5, v4);
                goto LABEL_1034;
            case 0x17C:
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x468) + 0x4D0i64) + 4i64 * ((unsigned __int8)v5 ^ 0x93u)) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 8i64 * (v5 & 0x14)) + 0x20i64) - (_DWORD)0x1251D8F0);
                goto LABEL_1032;
            case 0x17D:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4E8);
                Calls::FastCall(v10 + 0x490, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 8i64 * ((unsigned __int8)~(_BYTE)v5 & 0x80)));
                goto LABEL_1034;
            case 0x17E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x298);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x6A8) + 8i64 * (unsigned __int8)(0x30 * FuckEnc::CacheRead<_BYTE>(v4 + 0x2D8)), &v22, v5, v4);
                goto LABEL_1034;
            case 0x17F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x90);
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x268) * FuckEnc::CacheRead<_DWORD>(v10 + 0x688) * ((FuckEnc::CacheRead<_DWORD>(v4 + 0x20) | 0x1D) ^ 0x4EE8B89A);
                goto LABEL_1034;
            case 0x180:
                v22 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5B0) + 0x1C0i64) ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x4F8)));
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x2E8) + v22 - 0x5F4AFAEE;
                goto LABEL_1034;
            case 0x181:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x310) + 8i64 * (unsigned __int8)(0xC7 * FuckEnc::CacheRead<_DWORD>(v4 + 0x598)), &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x678));
                goto LABEL_1034;
            case 0x182:
                v22 = __ROR4__(v11 - 0x43150030, 0xD1);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x320);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x4F0) + 8i64 * (((unsigned __int8)v5 ^ 0xFD) & 0x2A)) + 0x578i64);
                goto LABEL_1034;
            case 0x183:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x118) + 8i64 * (unsigned __int8)(0x76 * v5)) + 0x458i64) + 8i64 * ((unsigned __int8)v5 & 0x8A), &v22, v5, v4);
                goto LABEL_1034;
            case 0x184:
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x120i64)) ^ 0x7A3197FA;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x220) + 8i64);
                v22 = __ROL4__(v22 - FuckEnc::CacheRead<_DWORD>(v10 + 0x268), v5);
                goto LABEL_1034;
            case 0x185:
                v22 = __ROR4__(v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x430), 0x9F) + 0x2E00BEFE;
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x788);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xD0);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x568);
                goto LABEL_1034;
            case 0x186:
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4F0) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x178) ^ 0xF8u)) + 0x588i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x1C)) + 0x68i64) + 8i64 * ((unsigned __int8)v5 & 0xFE)) + 0x740i64) + 0x268i64);
                goto LABEL_1033;
            case 0x187:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x298);
                v22 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x450) * ~FuckEnc::CacheRead<_DWORD>(v10 + 0x48));
                goto LABEL_1034;
            case 0x188:
                v22 = (v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 0x6C0i64)) ^ 0xC31131A8;
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x90) + 0x730i64) + 4i64 * ((unsigned __int8)v5 ^ 0x28u)) + 1;
                goto LABEL_1034;
            case 0x189:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x40) + 8i64 * (unsigned __int8)(0x14 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x738) + 0x670i64) + 0x20i64)), &v22, v5, v4);
                goto LABEL_1034;
            case 0x18A:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x630);
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x320) + 0x730i64) + 4i64 * (__ROL4__(v5, 0x13) & 0x26)) * (~FuckEnc::CacheRead<_DWORD>(v10 + 0x408) << 0xC);
                goto LABEL_1034;
            case 0x18B:
                v22 = __ROL4__(v11, 0x4A * FuckEnc::CacheRead<_BYTE>(v4 + 0x78));
                Calls::FastCall(v4 + 0x278, &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x480));
                v22 = ~v22;
                goto LABEL_1034;
            case 0x18C:
                v22 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 0x5E8i64) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8) & 0x60)) + 2 * FuckEnc::CacheRead<_DWORD>(v4 + 0x78));
                goto LABEL_1034;
            case 0x18D:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x120) ^ v11;
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x170) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x4F8) ^ 0xFD) & 0x32)) + 0x740i64) + 0x6B0i64);
                goto LABEL_1034;
            case 0x18E:
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x220) + 0x718i64) + 0x598i64) * v5);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x368);
                v12 = v22 - FuckEnc::CacheRead<_DWORD>(v10 + 0x450);
                goto LABEL_1033;
            case 0x18F:
                v22 = (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x268)) ^ 0x52B452AB;
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x48);
                v22 ^= (FuckEnc::CacheRead<_DWORD>(v4 + 0x6C0) * v5) ^ 0xC3018944;
                goto LABEL_1034;
            case 0x190:
                Calls::FastCall(v4 + 0x708, &v22, v5, v4);
                v22 -= 0x1EA94A65;
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x258) + 0x2D8i64);
                goto LABEL_1034;
            case 0x191:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x150);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x80) + 8i64 * ((unsigned __int8)v5 & 0xB8), &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x710));
                goto LABEL_1034;
            case 0x192:
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8) + 8i64 * (unsigned __int8)(0xC3 * v5)) + 0x618i64) + 4i64 * ((unsigned __int8)v5 & 0xD1)));
                v22 -= 0x48902F01 * FuckEnc::CacheRead<_DWORD>(v4 + 0x2E8);
                goto LABEL_1034;
            case 0x193:
                v22 = ~(_DWORD)v11;
                v22 = ~(_DWORD)v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 0x3F8i64) ^ (v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 0x2D8i64)));
                goto LABEL_1034;
            case 0x194:
                v22 = v11 - ((FuckEnc::CacheRead<_DWORD>(v4 + 0x788) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 0x308i64) * 0x20 * FuckEnc::CacheRead<_DWORD>(v4 + 0x550)) | 6);
                goto LABEL_1034;
            case 0x195:
                v22 = v11 ^ 0x51F5D121;
                v22 = (v11 ^ 0x51F5D121) - 0x529CC86E * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x68) + 8i64 * ((0xC5 * FuckEnc::CacheRead<_BYTE>(v4 + 0x6B0)) & 0x48)) + 0x430i64);
                goto LABEL_1034;
            case 0x196:
                v22 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x210) + 4i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x360) + 0x430i64) & 0x68)) ^ v11) - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1D8);
                v22 ^= ~FuckEnc::CacheRead<_DWORD>(v10 + 0x450);
                goto LABEL_1034;
            case 0x197:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x598i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F8) + 0x478i64, &v22, v5, v4);
                goto LABEL_1034;
            case 0x198:
                Calls::FastCall(v4 + 0x50, &v22, v5, v4);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x308) * v5;
                goto LABEL_1034;
            case 0x199:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x788);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xB0) + 0x400i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x17)) + 0x5C8i64);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x1C0);
                goto LABEL_1034;
            case 0x19A:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 0x320i64) + 0x500i64, &v22, v5, v4);
                v22 = __ROR4__(v22, 0xEB);
                goto LABEL_1034;
            case 0x19B:
                v22 = v11 - 0x74542595;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 0xB0i64);
                v22 = (v11 - 0x74542595) ^ (FuckEnc::CacheRead<_DWORD>(v10 + 0x698) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x3B0) ^ 0xA2D1FF41));
                goto LABEL_1034;
            case 0x19C:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F8) + 0x68i64) + 8i64 * ((0xCA * (_BYTE)v5) & 0x73)) + 0x5F8i64) + 0x308i64);
                goto LABEL_1034;
            case 0x19D:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x778);
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x118) + 8i64 * (unsigned __int8)(0x29 * v5)) + 0x2E8i64) ^ v11;
                v12 = v22 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x258) + 0x178i64) | 3);
                goto LABEL_1033;
            case 0x19E:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x670) + 0x2F8i64) + 8i64 * ((unsigned __int8)v5 & 0xB3)) + 0x110i64);
                Calls::FastCall(v4 + 0x198, &v22, v5, v10);
                goto LABEL_1034;
            case 0x19F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x340);
                v22 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x630) + 0x578i64) ^ v11) - 0x36C3FF2A;
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x258) + 0x2C0i64);
                goto LABEL_1034;
            case 0x1A0:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 0x1F8i64);
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v10 + 0x2D8) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x440) + 8i64 * ((unsigned __int8)~(_BYTE)v5 & 0xC8)) + 0x550i64) ^ 0x6E);
                goto LABEL_1034;
            case 0x1A1:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x3B0);
                v22 = v22 - FuckEnc::CacheRead<_DWORD>(v4 + 0x20) + 0x682F004A;
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x368) + 0x210i64) + 4i64 * (((unsigned __int8)v5 ^ 8) & 0x2E));
                goto LABEL_1034;
            case 0x1A2:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x340);
                Calls::FastCall(v10 + 0x5C0, &v22, v5, v4);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x120) + 0x47C30131;
                goto LABEL_1034;
            case 0x1A3:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x158);
                v22 = FuckEnc::CacheRead<_DWORD>(v10 + 0x308) ^ v11;
                v22 = v22 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x630) + 0x4F8i64) - FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0);
                goto LABEL_1034;
            case 0x1A4:
                v22 = v5 ^ v11;
                v22 = (v5 ^ v11) + FuckEnc::CacheRead<_DWORD>(v4 + 0x4F8);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 0x778i64) + 0x368i64);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x2B0);
                goto LABEL_1034;
            case 0x1A5:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x6F8) + 0x200i64, &v22, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xA8);
                v22 = __ROL4__(v22, FuckEnc::CacheRead<_DWORD>(v10 + 0x3F8));
                goto LABEL_1034;
            case 0x1A6:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0xA8i64) + 0x78i64);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x170) + 8i64 * ((unsigned __int8)(6 * v5) & 0x9B)) + 0x1A0i64);
                goto LABEL_1034;
            case 0x1A7:
                v22 = v11 ^ 0x45C30131;
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x2D8) ^ v11 ^ 0x45C30131;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8);
                v22 = v22 - FuckEnc::CacheRead<_DWORD>(v4 + 0x2D8) - FuckEnc::CacheRead<_DWORD>(v10 + 0x20);
                goto LABEL_1034;
            case 0x1A8:
                v17 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x468) + 0x158i64) + 0xA8i64) + 0x5F8i64);
                goto LABEL_430;
            case 0x1A9:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x630) + 0x528i64);
                v22 = v11 + v5 * (FuckEnc::CacheRead<_DWORD>(v10 + 0x3B0) + (FuckEnc::CacheRead<_DWORD>(v4 + 0x568) ^ 0xC3018944));
                goto LABEL_1034;
            case 0x1AA:
                v22 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x178)) - v5;
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x17)) + 0x6F8i64) + 0x5F8i64) + 0x308i64);
                goto LABEL_1034;
            case 0x1AB:
                v22 = v11 + 0x7476074E * FuckEnc::CacheRead<_DWORD>(v4 + 0x2D8);
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x3B0) ^ 0xDFD0FFEA;
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_DWORD>(v4 + 0x4F8));
                goto LABEL_1034;
            case 0x1AC:
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 0x2C0i64));
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x268);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x718);
                v22 += FuckEnc::CacheRead<_DWORD>(v10 + 0x2B0) << 0x1D;
                goto LABEL_1034;
            case 0x1AD:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x550) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x548) + 8i64 * ((0xEB * (_BYTE)v5) & 0x41)) + 0x50i64, &v22, v5, v4);
                goto LABEL_1034;
            case 0x1AE:
                v22 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x260) + 8i64 * (v5 & 0xD)) + 0x688i64));
                Calls::FastCall(v4 + 0xB8, &v22, v5, v4);
                v22 = ~v22;
                goto LABEL_1034;
            case 0x1AF:
                v22 = (unsigned int)0x94F12C9 + v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5F0);
                Calls::FastCall(v10 + 0x508, &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x670));
                goto LABEL_1034;
            case 0x1B0:
                v22 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0xC8i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 0x16))) - v5;
                v22 ^= ~FuckEnc::CacheRead<_DWORD>(v4 + 0x120);
                goto LABEL_1034;
            case 0x1B1:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x30);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x340) + 0x6C0i64);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x548) + 8i64 * ((unsigned __int8)v5 ^ 0x44u)) + 0x308i64) ^ v22;
                goto LABEL_1033;
            case 0x1B2:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0x10i64) + 0x4A0i64) + 4i64 * (unsigned __int8)(0x9A * v5)) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8);
                v12 = FuckEnc::CacheRead<_DWORD>(v10 + 0x1A0) ^ v22;
                goto LABEL_1033;
            case 0x1B3:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x58) ^ v11;
                v22 = ~(v22 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x698) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x630) + 0x1F8i64) + 0x3F8i64));
                goto LABEL_1034;
            case 0x1B4:
                v22 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2B8) + 8i64 * (unsigned __int8)(0xA0 * v5)) + 0x5E8i64) + 4i64 * (v5 & 0x58)) + FuckEnc::CacheRead<_DWORD>(v4 + 0x30) + 0x4012242E);
                goto LABEL_1034;
            case 0x1B5:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x30);
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0) | 8;
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x778) + 8i64) + 0x408i64);
                goto LABEL_1034;
            case 0x1B6:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 0x468i64);
                v22 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x6C0) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x30) ^ FuckEnc::CacheRead<_DWORD>(v10 + 0x190)));
                goto LABEL_1034;
            case 0x1B7:
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 8i64 * (v5 & 0x69)) + 0x640i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x718);
                v22 ^= ~FuckEnc::CacheRead<_DWORD>(v10 + 0x408);
                goto LABEL_1034;
            case 0x1B8:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x688);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x338) + 0x340i64) + 0x670i64);
                v22 += FuckEnc::CacheRead<_DWORD>(v10 + 0x4F8) + FuckEnc::CacheRead<_DWORD>(v4 + 0x788);
                goto LABEL_1034;
            case 0x1B9:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1D8) + 0xD8i64) + 0x58i64) ^ v11;
                v12 = (v22 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8) + 0x4A0i64) + 4i64 * (v5 & 0xA))) ^ 0x1BB9A833;
                goto LABEL_1033;
            case 0x1BA:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x308i64) ^ v11;
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x78) * (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x688) + 0x600091E4);
                goto LABEL_1034;
            case 0x1BB:
                v22 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x6C0) * v5);
                v22 ^= 0x7643627C * FuckEnc::CacheRead<_DWORD>(v4 + 0x550);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0x120i64);
                goto LABEL_1034;
            case 0x1BC:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8);
                v22 = __ROL4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x178) & 0x1E)) + 0x1F8i64) + 0x780i64) + 0x48i64));
                goto LABEL_1034;
            case 0x1BD:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x450) + 0x5AD3BF68;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x298);
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x778) + 0x178i64));
                goto LABEL_1034;
            case 0x1BE:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x578) + 1) & 9)) + 0x5F0i64) + 0x340i64) + 0x48i64) ^ v11;
                goto LABEL_1034;
            case 0x1BF:
                v22 = v5 ^ (v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x48));
                v22 ^= v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x1A0);
                v22 += ~FuckEnc::CacheRead<_DWORD>(v4 + 0x550);
                goto LABEL_1034;
            case 0x1C0:
                v12 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 0x218i64) + 0x2B8i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x10)) + 0x630i64) + 0x450i64) & 0xFFFFFFF5);
                goto LABEL_1033;
            case 0x1C1:
                v22 = v11 + v5;
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 0x730i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 0x17)) ^ (v11 + v5);
                v22 = __ROR4__(v22, ~FuckEnc::CacheRead<_BYTE>(v4 + 0x120));
                goto LABEL_1034;
            case 0x1C2:
                v22 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x550) & 0xFFFFFFE8;
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x338) + 0x68i64) + 8i64 * ((unsigned __int8)v5 & 0xBB)) + 0x1C0i64);
                goto LABEL_1034;
            case 0x1C3:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x170) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x450) & 0xEE)) + 0x2C0i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x90);
                v22 = __ROL4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x1F8) + 0x540i64));
                goto LABEL_1034;
            case 0x1C4:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x268);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x340) + 0x5F8i64);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x118) + 8i64 * (unsigned __int8)(0xCE * FuckEnc::CacheRead<_BYTE>(v4 + 0x30))) + 0x598i64);
                goto LABEL_1034;
            case 0x1C5:
                Calls::FastCall(v4 + 0x720, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8) + 0x780i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x19)) + 0x4B0i64));
                goto LABEL_1034;
            case 0x1C6:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 0x1F0i64) + 0x578i64) ^ v11;
                v22 = ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x420) ^ v22);
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x178);
                goto LABEL_1034;
            case 0x1C7:
                v22 = v11 ^ ((FuckEnc::CacheRead<_DWORD>(v4 + 0x30) ^ 0x21F861EC) + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 0x210i64) + 4i64 * (unsigned __int8)(0xC2 * v5)));
                goto LABEL_1034;
            case 0x1C8:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0) ^ v11;
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x488) + 0x1D8i64) + 0x400i64) + 8i64 * ((unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x430), 0x16) & 0xA9)) + 0x168i64) ^ v22;
                goto LABEL_1033;
            case 0x1C9:
                v22 = ~(_DWORD)v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x158);
                Calls::FastCall(v4 + 0x478, &v22, v5, v10);
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x178);
                goto LABEL_1034;
            case 0x1CA:
                v22 = __ROR4__(v11, 0xED);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4F0) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1C)) + 0x4C0i64, &v22, v5, v4);
                goto LABEL_1034;
            case 0x1CB:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3A0);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x258) + 0x478i64, &v22, v5, v10);
                v22 = __ROR4__(v22, 0x90);
                goto LABEL_1034;
            case 0x1CC:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0) + 0x3B49B952;
                v22 += ~(0x6FD642B7 * ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x90) + 0x190i64));
                goto LABEL_1034;
            case 0x1CD:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8);
                v22 = v11 - ((0x7A0F6BB8 * FuckEnc::CacheRead<_DWORD>(v10 + 0x2C0) * (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x688))) | 9);
                goto LABEL_1034;
            case 0x1CE:
                v22 = v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8) + 0x740i64);
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x578);
                goto LABEL_1034;
            case 0x1CF:
                v22 = (v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x170) + 8i64 * (unsigned __int8)(0xFA * v5)) + 0x6B0i64) ^ v5)) ^ 0xE036C67F;
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x190) + v22 - 0xC8803F9;
                goto LABEL_1034;
            case 0x1D0:
                v22 = ~__ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x308) ^ 0x25) & 0xB5)) + 0x2D8i64));
                v12 = v22 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x110) + 0x4D0i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 0x13));
                goto LABEL_1033;
            case 0x1D1:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) ^ v11;
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x1A0) & 0x96)) + 0x598i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x78) + 1);
                goto LABEL_1034;
            case 0x1D2:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0);
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x688);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F8) + 0xC8i64) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x58) & 0xB3));
                goto LABEL_1034;
            case 0x1D3:
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 8i64 * (v5 & 0x1A)) + 0x3F8i64));
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x168) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0) + 0x450i64);
                goto LABEL_1034;
            case 0x1D4:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2A0);
                v22 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x168) + FuckEnc::CacheRead<_DWORD>(v10 + 0x190));
                v22 ^= ~FuckEnc::CacheRead<_DWORD>(v4 + 0x1A0);
                goto LABEL_1034;
            case 0x1D5:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5B0) + 0x6B0i64) - 0x503CFECF;
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x440) + 8i64 * (unsigned __int8)(0x50 * v5)) + 0x578i64) + 1;
                goto LABEL_1034;
            case 0x1D6:
                Calls::FastCall(v4 + 0xB8, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x678) + 0x638i64) + 8i64 * ((unsigned __int8)v5 ^ 0x1Fu)) + 0x150i64));
                goto LABEL_1034;
            case 0x1D7:
                v22 = __ROL4__(v11, v5);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 8i64 * ((unsigned __int8)v5 & 0xDA)) + 0x110i64);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x78);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x4F8);
                goto LABEL_1034;
            case 0x1D8:
                v22 = v11 + v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xB0);
                v22 = __ROL4__(v11 + v5, (0x3A * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v10 + 0x4D0) + 4i64 * (unsigned __int8)(0xC3 * v5))) ^ 0x9B) + 0xBD177D7;
                goto LABEL_1034;
            case 0x1D9:
                v22 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x598) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x340) + 0x6C0i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A0) + 0x10i64) + 0x2E8i64);
                goto LABEL_1034;
            case 0x1DA:
                v22 = v5 ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 0x3F0i64, &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8));
                goto LABEL_1034;
            case 0x1DB:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5B0);
                v22 = v5 + v11 + (FuckEnc::CacheRead<_DWORD>(v10 + 0x2D8) + 0x5D29404) * ((FuckEnc::CacheRead<_DWORD>(v4 + 0x550) >> 0x16) ^ 0x8D1A7F8F);
                goto LABEL_1034;
            case 0x1DC:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4E8) + 0x170i64) + 8i64 * ((0xB * (_BYTE)v5) & 0x15)) + 0x4B0i64) + 0xC8i64) + 4i64 * ((unsigned __int8)(0xAC * v5) & 0xBA)) + 1;
                goto LABEL_1034;
            case 0x1DD:
                v22 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x598) - 0x79746139);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 8i64 * ((unsigned __int8)v5 & 0xF7)) + 0x2D8i64);
                v22 = __ROL4__(v22, FuckEnc::CacheRead<_DWORD>(v4 + 0x1A0));
                goto LABEL_1034;
            case 0x1DE:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x5A0) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x20) >> 0x15, 0x1E), &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x530));
                goto LABEL_1034;
            case 0x1DF:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x260) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1B)) + 0x298i64) + 0x258i64) + 0x5F0i64) + 0x5B0i64) + 0x688i64) ^ v11;
                goto LABEL_1034;
            case 0x1E0:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0) + 0x260i64) + 8i64 * ((unsigned __int8)v5 ^ 0x42u)) + 0x360i64);
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x168);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x78) | 0x11;
                goto LABEL_1034;
            case 0x1E1:
                v22 = v5 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x690) + 8i64 * (__ROL4__(0x8B3F7062 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x670) + 0x540i64), 0x16) & 0x4A)) + 0x1A0i64) ^ v11);
                goto LABEL_1034;
            case 0x1E2:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x468);
                v22 = __ROL4__(v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x548) + 8i64 * (((unsigned __int8)v5 ^ 0x10) & 0x92)) + 0x258i64) + 0x2D8i64), 0x83) - 0x27ED1BCC;
                goto LABEL_1034;
            case 0x1E3:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 0x80i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x15), &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8));
                goto LABEL_1034;
            case 0x1E4:
                v22 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x20) + FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x260) + 8i64 * (__ROR4__(v5, 0x1E) & 0x54)) + 0x4F8i64));
                goto LABEL_1034;
            case 0x1E5:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x2E8) ^ v11;
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x68) + 8i64 * ((unsigned __int8)__ROL4__(v5, 0x19) & 0xF5)) + 0x120i64);
                v22 = v22 - FuckEnc::CacheRead<_DWORD>(v4 + 0x2E8) - 0x8450E4F;
                goto LABEL_1034;
            case 0x1E6:
                v22 = ~(v5 + __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x598)));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0);
                v22 += FuckEnc::CacheRead<_DWORD>(v10 + 0x408) + 0x7ED1FF42;
                goto LABEL_1034;
            case 0x1E7:
                Calls::FastCall(v4 + 0xB8, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) & 0xEB)) + 0x1D8i64) + 0x2B8i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 0xF)));
                goto LABEL_1034;
            case 0x1E8:
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(v4 + 0x1B0) + 0x210i64) + 4i64 * FuckEnc::CacheRead<unsigned __int8>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x170) + 8i64 * ((unsigned __int8)v5 & 0x99)) + 0x1A0i64)) ^ v11;
                goto LABEL_1033;
            case 0x1E9:
                Calls::FastCall(v4 + 0x478, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x118) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x1A0), 6)));
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x738) + 0x6B0i64);
                goto LABEL_1034;
            case 0x1EA:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x258) + 0x220i64);
                v22 = (v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x688) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xB0) + 0x4E8i64) + 0x2C0i64)) ^ 0xCC3F2825;
                goto LABEL_1034;
            case 0x1EB:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x90);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x2D0) + 8i64 * (v5 & 0x2E), &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x480));
                goto LABEL_1034;
            case 0x1EC:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0) + 0x268i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x220);
                Calls::FastCall(v10 + 0x200, &v22, v5, v4);
                goto LABEL_1034;
            case 0x1ED:
                Calls::FastCall(v4 + 0x248, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x260) + 8i64 * (v5 & 0x64)) + 0x258i64) + 0x5C8i64));
                goto LABEL_1034;
            case 0x1EE:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x78);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 0x450i64);
                v22 = __ROL4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x14)) + 0x640i64));
                goto LABEL_1034;
            case 0x1EF:
                Calls::FastCall(v4 + 0x248, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 0x4E8i64));
                v22 -= 0xE77C37E;
                goto LABEL_1034;
            case 0x1F0:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xA8);
                v17 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x780) + 8i64 * (unsigned __int8)__ROR4__(v5, 0xA));
            LABEL_430:
                Calls::FastCall(v17 + 0x650, &v22, v5, v4);
                goto LABEL_1034;
            case 0x1F1:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 0x258i64);
                v22 = v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x638) + 8i64 * (unsigned __int8)(0x5B * FuckEnc::CacheRead<_BYTE>(v4 + 0x698))) + 0x30i64);
                goto LABEL_1034;
            case 0x1F2:
                v22 = v11 + 0x193CFECF * FuckEnc::CacheRead<_DWORD>(v4 + 0x58);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A0) + 0x1D8i64) + 0x4A8i64) + 0x218i64) + 0x450i64);
                goto LABEL_1034;
            case 0x1F3:
                v22 = v11 - 0x1715BC90;
                v22 = v11 - 0x1715BC90 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x178) | 0x13);
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0) * v5;
                goto LABEL_1034;
            case 0x1F4:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x678) + 0x48i64);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x640) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x548) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x190), 0x12)) + 0x420i64);
                goto LABEL_1034;
            case 0x1F5:
                v22 = v11 ^ 0x62F980BB;
                v18 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0);
                goto LABEL_508;
            case 0x1F6:
                v22 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x1C0) ^ FuckEnc::CacheRead<_BYTE>(v4 + 0x6E0) ^ ((FuckEnc::CacheRead<_BYTE>(v4 + 0x788) & 0xE1) + 9));
                goto LABEL_1034;
            case 0x1F7:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A0) + 0x1E8i64, &v22, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xB0);
                v22 += FuckEnc::CacheRead<_DWORD>(v10 + 0x2D8);
                goto LABEL_1034;
            case 0x1F8:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0);
                v22 = FuckEnc::CacheRead<_DWORD>(v10 + 0x2D8) ^ v11;
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x530) + 0x260i64) + 8i64 * (unsigned __int8)(0x52 * v5)) + 0x598i64) ^ v22;
                goto LABEL_1033;
            case 0x1F9:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x260) + 8i64 * (__ROL4__(v5, 0x1B) & 0x41)) + 0x5E8i64) + 4i64 * (unsigned __int8)(0xBE * v5)) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 0x530i64);
                v12 = v22 - FuckEnc::CacheRead<_DWORD>(v10 + 0x308);
                goto LABEL_1033;
            case 0x1FA:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x630);
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x358) + 4i64 * (unsigned __int8)__ROR4__(v5, 8));
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6F8) + 0xA8i64) + 0x3A0i64) + 0x688i64);
                goto LABEL_1034;
            case 0x1FB:
                v22 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x688) & 0xFFFFFFF3);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x400) + 8i64 * (unsigned __int8)-FuckEnc::CacheRead<_BYTE>(v4 + 0x58)) + 0x488i64);
                v22 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x3F8);
                goto LABEL_1034;
            case 0x1FC:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x260) + 8i64 * ((unsigned __int8)v5 & 0xB5)) + 0xA8i64) + 0x740i64) + 0x548i64) + 8i64 * (v5 & 0x62)) + 0x718i64);
                v12 = FuckEnc::CacheRead<_DWORD>(v10 + 0x4F8) ^ v11;
                goto LABEL_1033;
            case 0x1FD:
                v22 = v11 ^ 0xD4B0A045;
                v22 = ((v11 ^ 0xD4B0A045) - FuckEnc::CacheRead<_DWORD>(v4 + 0x408)) ^ 0x50E2E241;
                Calls::FastCall(v4 + 0x508, &v22, v5, v4);
                goto LABEL_1034;
            case 0x1FE:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x488) + 0x468i64) + 0x4A8i64) + 0x670i64);
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x68) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x1D)) + 0x6C0i64) >> 0xF);
                goto LABEL_1034;
            case 0x1FF:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 8i64 * ((unsigned __int8)v5 & 0xDF)) + 0x488i64) + 0x158i64) + 0x710i64) + 0x2D8i64) - v5;
                goto LABEL_1034;
            case 0x200:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x540);
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x30) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x6C0) + 0x752FE88C) + 1;
                goto LABEL_1034;
            case 0x201:
                v22 = __ROR4__(__ROR4__(v11, 0xC5), v5);
                Calls::FastCall(v4 + 0x100, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x260) + 8i64 * (v5 & 0x79)));
                goto LABEL_1034;
            case 0x202:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x530) + 0x680i64, &v22, v5, v4);
                v22 = ~v22;
                goto LABEL_1034;
            case 0x203:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0) + 0x540i64);
                Calls::FastCall(v4 + 0x3C0, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x690) + 8i64 * (__ROR4__(v5, 0x1B) & 0x45)));
                goto LABEL_1034;
            case 0x204:
                v22 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x58)) + 0x3CEECEC4;
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(v4 + 0x260) + 0x688i64));
                goto LABEL_1034;
            case 0x205:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x3B0);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 8i64 * (unsigned __int8)(0xC * v5)) + 0x488i64);
                Calls::FastCall(v4 + 0x570, &v22, v5, v10);
                goto LABEL_1034;
            case 0x206:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x578);
                v22 = (v22 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2B8) + 8i64 * (unsigned __int8)(0x33 * v5)) + 0x740i64) + 0x20i64)) ^ 0x982CC5F1;
                goto LABEL_1034;
            case 0x207:
                v12 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x110) + 0x488i64) + 0x20i64) * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 0x3E0i64) + 0x190i64));
                goto LABEL_1033;
            case 0x208:
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x690i64) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x368) + 0x3E0i64) + 0x568i64) ^ 0xF9) & 0xE6)) + 0x1F0i64) + 0x58i64);
                goto LABEL_1033;
            case 0x209:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x110) + 0x4A8i64);
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x2E8);
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_DWORD>(v4 + 0x430));
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x308) + 1;
                goto LABEL_1034;
            case 0x20A:
                Calls::FastCall(v4 + 0x500, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x468) + 0x150i64) + 0x588i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x17)));
                goto LABEL_1034;
            case 0x20B:
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0));
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x618) + 4i64 * (((unsigned __int8)~((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x118) + 8i64 * (((unsigned __int8)v5 ^ 0xEF) & 0xB2)) + 0x48i64) << 6) ^ 0xFB) & 0x87));
                goto LABEL_1034;
            case 0x20C:
                v22 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x168) ^ 0xCC9DA773) - 0x7C30131;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x218);
                v22 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x550);
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8);
                goto LABEL_1034;
            case 0x20D:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 0x408i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x150i64);
                v22 += FuckEnc::CacheRead<_DWORD>(v10 + 0x30) >> 8;
                goto LABEL_1034;
            case 0x20E:
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x308) ^ 0x4B);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5B0) + 0xD0i64);
                v22 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x6C0);
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x578);
                goto LABEL_1034;
            case 0x20F:
                Calls::FastCall(v4 + 0x18, &v22, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x468);
                v22 += ~FuckEnc::CacheRead<_DWORD>(v10 + 0x190);
                goto LABEL_1034;
            case 0x210:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x178);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x630) + 0x6D0i64) + 8i64 * (__ROL4__(v5, 3) & 0x48)) + 0x760i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 2));
                goto LABEL_1034;
            case 0x211:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x10);
                v22 = v11 + (FuckEnc::CacheRead<_DWORD>(v10 + 0x6C0) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F0) + 0x1B0i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 5)) + 0x178i64));
                goto LABEL_1034;
            case 0x212:
                v22 = v11 + 0x5D35D981;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x480);
                v22 = v11 + 0x5D35D981 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x58) ^ FuckEnc::CacheRead<_DWORD>(v10 + 0x308)) + 0x587402FA;
                goto LABEL_1034;
            case 0x213:
                v22 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) ^ 0xB9680C60);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0xE8i64, &v22, v5, v4);
                goto LABEL_1034;
            case 0x214:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0) + 8i64 * ((unsigned __int8)v5 & 0xD9)) + 0x218i64);
                v22 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 0x430));
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A0) + 0x258i64) + 0x6B0i64);
                goto LABEL_1034;
            case 0x215:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x408) ^ v11;
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x598) + 1;
                v22 = ~(v22 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x678) + 0x120i64));
                goto LABEL_1034;
            case 0x216:
                v22 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) + 0x1B);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x368) + 0x548i64) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x408) ^ 0xE) & 0x5E)) + 0x168i64) ^ v22;
                goto LABEL_1033;
            case 0x217:
                v22 = __ROR4__(v11, 0x3A);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 0x7A8i64) + 8i64 * (v5 & 0x45), &v22, v5, v4);
                goto LABEL_1034;
            case 0x218:
                v22 = v11 ^ 0x97320D9;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 8i64 * (v5 & 0x36)) + 0x3E0i64) + 0x5B0i64) + 0x678i64);
                v22 = (v11 ^ 0x97320D9) + FuckEnc::CacheRead<_DWORD>(v10 + 0x550);
                goto LABEL_1034;
            case 0x219:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x90) + 0x200i64, &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0xA8));
                goto LABEL_1034;
            case 0x21A:
                v22 = __ROR4__(v11, v5 + ~(v5 + FuckEnc::CacheRead<_BYTE>(v4 + 0x430)));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5B0) + 0x740i64);
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_DWORD>(v10 + 0x2E8));
                goto LABEL_1034;
            case 0x21B:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 0x690i64) + 8i64 * ((unsigned __int8)v5 & 0xBB)) + 0x5B0i64) + 0x320i64);
                Calls::FastCall(v4 + 0x198, &v22, v5, v10);
                goto LABEL_1034;
            case 0x21C:
                v22 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x260) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x548) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x3B0) ^ 0x18) & 0x3C)) + 0x430i64) & 0x83)) + 0x5B0i64) + 0x420i64));
                goto LABEL_1034;
            case 0x21D:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x568);
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x6C0) + -(FuckEnc::CacheRead<_DWORD>(v4 + 0x568) + 0x1EBC8BCE) - 0x66F877F;
                goto LABEL_1034;
            case 0x21E:
                Calls::FastCall(v4 + 0x3B8, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x360) + 0x28i64) + 8i64 * (unsigned __int8)(0x7A * FuckEnc::CacheRead<_DWORD>(v4 + 0x568))));
                goto LABEL_1034;
            case 0x21F:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x468) + 0x20i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x68) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x17)) + 0x360i64);
                v12 = __ROR4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x5E8) + 4i64 * (unsigned __int8)(0x68 * v5)));
                goto LABEL_1033;
            case 0x220:
                v22 = v11 + 0x48CD3F7B;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4E8) + 0x298i64);
                v22 = __ROR4__(v11 + 0x48CD3F7B, FuckEnc::CacheRead<_DWORD>(v10 + 0x578));
                v22 = __ROL4__(v22, ~FuckEnc::CacheRead<_BYTE>(v4 + 0x20));
                goto LABEL_1034;
            case 0x221:
                v22 = v11 + v5;
                Calls::FastCall(v4 + 0x2A8, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x170) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x568) & 0x25)) + 0x10i64));
                goto LABEL_1034;
            case 0x222:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x420);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x220);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x638) + 8i64 * (unsigned __int8)__ROR4__(v5, 0xF)) + 0x298i64) + 0x2A0i64) + 0x190i64);
                goto LABEL_1034;
            case 0x223:
                v22 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x430));
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x120) - 0x3CFECE3E;
                v22 += (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8)) & 0xFFFFFFE9;
                goto LABEL_1034;
            case 0x224:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A0) + 4i64 * (unsigned __int8)__ROL4__(~FuckEnc::CacheRead<_DWORD>(v4 + 0x308), 0xF)) * ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8) >> 6);
                goto LABEL_1034;
            case 0x225:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x440) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x788) & 0x90)) + 0x268i64);
                v22 = __ROR4__(v22, ~FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4E8) + 0x308i64));
                goto LABEL_1034;
            case 0x226:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x220) + 0x78i64) ^ v11;
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x688) ^ 0x84F3315;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xA8);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x120);
                goto LABEL_1034;
            case 0x227:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x48);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0) + 0x4B0i64) + 0x3F8i64);
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0);
                goto LABEL_1034;
            case 0x228:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x308);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x68) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x16)) + 0x320i64);
                v22 ^= v5 ^ FuckEnc::CacheRead<_DWORD>(v10 + 0x4F8);
                goto LABEL_1034;
            case 0x229:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x150);
                v22 = v11 + ((FuckEnc::CacheRead<_DWORD>(v10 + 0x688) - 0x51D9C6BE) & 0xFFFFFFEB);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 0x58i64) ^ v5;
                goto LABEL_1034;
            case 0x22A:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x710);
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x360) + 0x4F8i64) ^ v11;
                v22 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x488) + 0x788i64);
                goto LABEL_1034;
            case 0x22B:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x2E8);
                v22 ^= (FuckEnc::CacheRead<_DWORD>(v4 + 0x6C0) * v5) ^ (0x5B2E00BE - FuckEnc::CacheRead<_DWORD>(v4 + 0x568));
                goto LABEL_1034;
            case 0x22C:
                v22 = (v5 ^ (v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F0) + 0xD0i64) + 0x360i64) + 0x730i64) + 4i64 * (unsigned __int8)v5))) - 0x7C9ECFCF;
                goto LABEL_1034;
            case 0x22D:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x718);
                v22 = FuckEnc::CacheRead<_DWORD>(v10 + 0x540) ^ v11;
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_DWORD>(v4 + 0x450)) ^ 0x408BADBD;
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F8) + 0x1A0i64);
                goto LABEL_1034;
            case 0x22E:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x640) ^ v11;
                v22 ^= ((FuckEnc::CacheRead<_DWORD>(v4 + 0x2D8) << 0x14) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0) * v5)) & 0xFFFFFFF0;
                goto LABEL_1034;
            case 0x22F:
                v22 = v11 + 0x72052764;
                v22 = (v11 + 0x72052764) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x120) * ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x260) + 8i64 * ((unsigned __int8)v5 & 0xF5)) + 0x3B0i64));
                goto LABEL_1034;
            case 0x230:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 8i64 * (unsigned __int8)(0xC9 * v5)) + 0x3E0i64);
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x488) + 0x5D0i64) + 0x588i64) + 8i64 * ((0x15 * (_BYTE)v5) & 0x3C)) + 0x268i64);
                goto LABEL_1033;
            case 0x231:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x408) ^ v11;
                v22 = __ROL4__(v22 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x19)) + 0xC8i64) + 4i64 * (unsigned __int8)(0x9C * v5)), 0x3E);
                goto LABEL_1034;
            case 0x232:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x408);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x110);
                v22 = ~(v22 - (~FuckEnc::CacheRead<_DWORD>(v10 + 0x78) | 0x1F));
                goto LABEL_1034;
            case 0x233:
                v22 = v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x28) + 8i64 * (unsigned __int8)(0xD0 * v5)) + 0x308i64);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6F8) + 0x2E8i64);
                goto LABEL_1034;
            case 0x234:
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x190));
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xB0) + 0x6E0i64), 1)) + 0x2E8i64) | 1;
                goto LABEL_1034;
            case 0x235:
                v22 = v5 ^ (v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x630) + 0xD8i64) + 0x718i64) + 0x30i64));
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0);
                goto LABEL_1034;
            case 0x236:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 0x58i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x2A0) + 0x4D8i64, &v22, v5, v4);
                goto LABEL_1034;
            case 0x237:
                v22 = (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x550)) ^ 0xB2490AAE;
                Calls::FastCall(v4 + 0x790, &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x258));
                goto LABEL_1034;
            case 0x238:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x30);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8);
                v22 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x2E8) ^ 0x325228F7;
                v22 ^= 0x65EAC81D * FuckEnc::CacheRead<_DWORD>(v4 + 0x788);
                goto LABEL_1034;
            case 0x239:
                v22 = v11 ^ 0x5CC31131;
                v22 = __ROR4__(v11 ^ 0x5CC31131, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8) + 8i64 * (unsigned __int8)(0x9E * FuckEnc::CacheRead<_BYTE>(v4 + 0x568))) + 0x78i64) ^ v5);
                v12 = __ROL4__(v22, FuckEnc::CacheRead<_DWORD>(v4 + 0x408));
                goto LABEL_1033;
            case 0x23A:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x488) + 0x738i64) + 0x740i64) + 0x170i64) + 8i64 * ((unsigned __int8)v5 & 0xB2)) + 0xB0i64);
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x190);
                goto LABEL_1034;
            case 0x23B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x298);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x28) + 8i64 * (unsigned __int8)(0xFC * v5)) + 0x480i64) + 0x270i64, &v22, v5, v4);
                goto LABEL_1034;
            case 0x23C:
                v22 = v11 + 0x73C5FAB7;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x368);
                v22 = v5 + v11 + 0x73C5FAB7 + FuckEnc::CacheRead<_DWORD>(v10 + 0x58) + (_DWORD)0x3D1FF41 + FuckEnc::CacheRead<_DWORD>(v4 + 0x168);
                goto LABEL_1034;
            case 0x23D:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 0x1B0i64) + 8i64 * ((unsigned __int8)v5 & 0x8C)) + 0x3F8i64) - FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8);
                v12 = v22 - FuckEnc::CacheRead<_DWORD>(v4 + 0x58);
                goto LABEL_1033;
            case 0x23E:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x530) + 0x650i64, &v22, v5, v4);
                v22 ^= 0xB1E3D526 * FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0);
                goto LABEL_1034;
            case 0x23F:
                v22 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4E8) + 0x6E0i64));
                v12 = v22 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 8i64 * (v5 & 4)) + 0x5E8i64) + 4i64 * ((unsigned __int8)v5 & 0xC6)) + 0x4BF9DD4A;
                goto LABEL_1033;
            case 0x240:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 8i64 * (unsigned __int8)__ROR4__(v5, 8)) + 0x1D8i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x140) + 8i64 * (unsigned __int8)(0x57 * v5), &v22, v5, v4);
                goto LABEL_1034;
            case 0x241:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) * v5;
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A0) + 0x5D0i64) + 0x168i64) + 0x6BAFAC9E;
                goto LABEL_1034;
            case 0x242:
                v22 = ~(_DWORD)v11;
                v22 = ~(_DWORD)v11 + 0x1383FA61 * FuckEnc::CacheRead<_DWORD>(v4 + 0x578);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 0x1F8i64) + 0x20i64);
                goto LABEL_1034;
            case 0x243:
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x678) + 0x6C0i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8) + 8i64 * (unsigned __int8)__ROR4__(v5, 1)) + 0x358i64) + 4i64 * (unsigned __int8)(0x15 * v5));
                goto LABEL_1033;
            case 0x244:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4F0) + 8i64 * (v5 & 0x7B)) + 0x550i64);
                Calls::FastCall(v4 + 0x100, &v22, v5, v4);
                goto LABEL_1034;
            case 0x245:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x420) ^ v11;
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 0x170i64) + 8i64 * (v5 & 0x12)) + 0xB0i64) + 0x10i64) + 0x120i64) ^ v22;
                goto LABEL_1033;
            case 0x246:
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 0x28i64) + 8i64 * (v5 & 0x69)) + 0x308i64));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0x670i64);
                v12 = v22 - FuckEnc::CacheRead<_DWORD>(v10 + 0x698);
                goto LABEL_1033;
            case 0x247:
                v22 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) ^ (v5 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x20) | 0xF)));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x338);
                v22 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x6E0);
                goto LABEL_1034;
            case 0x248:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 8i64 * ((unsigned __int8)v5 & 0xEA)) + 0x418i64) + 8i64 * ((unsigned __int8)v5 & 0x89), &v22, v5, v4);
                goto LABEL_1034;
            case 0x249:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x58);
                v22 = __ROL4__(v22, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x338) + 0x158i64) + 0x1A0i64) * (FuckEnc::CacheRead<_BYTE>(v4 + 0x450) & 0xEE));
                goto LABEL_1034;
            case 0x24A:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x598);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x338) + 0xB0i64);
                Calls::FastCall(v4 + 0x330, &v22, v5, v10);
                goto LABEL_1034;
            case 0x24B:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 8i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0) + 0x598i64), 0x14) & 0x7C)) + 0x150i64);
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x5D0) + 0x488i64) + 0x710i64) + 0x578i64) ^ v11;
                goto LABEL_1034;
            case 0x24C:
                v22 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x698) ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x6C0)));
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x420i64);
                goto LABEL_1034;
            case 0x24D:
                v22 = (v11 ^ 0x5CC30131) + 0x4BE9A035;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 8i64 * ((unsigned __int8)~(_BYTE)v5 & 0x9D)) + 0x6F8i64);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x210) + 4i64 * (unsigned __int8)__ROR4__(v5, 0xF));
                goto LABEL_1034;
            case 0x24E:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 0x268i64) * (v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x118) + 8i64 * ((unsigned __int8)v5 & 0xB7)) + 0x308i64));
                goto LABEL_1034;
            case 0x24F:
                v22 = v11 + v5;
                v22 = ~((v11 + v5) ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x420));
                v22 = v22 - FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) + 0xDC31131;
                goto LABEL_1034;
            case 0x250:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x6B0);
                v22 = v5 ^ (v22 - (v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x20) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x420)));
                goto LABEL_1034;
            case 0x251:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F0) + 0x710i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x310) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1B), &v22, v5, v4);
                goto LABEL_1034;
            case 0x252:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x48);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xD8);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x190) ^ 0xEDD0FFC3;
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x1A0) | 3;
                goto LABEL_1034;
            case 0x253:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0);
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x550);
                Calls::FastCall(v4 + 0x708, &v22, v5, v4);
                goto LABEL_1034;
            case 0x254:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x530);
                v22 = FuckEnc::CacheRead<_DWORD>(v10 + 0x58) ^ v11;
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x4F8);
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 0x5B0i64) + 0x2C0i64));
                goto LABEL_1034;
            case 0x255:
                Calls::FastCall(v4 + 0x768, &v22, v5, v4);
                v22 += 0x26A3AD50 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x640i64);
                goto LABEL_1034;
            case 0x256:
                v22 = v11 - 0x782B1AC5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x340);
                v22 = (v11 - 0x782B1AC5) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x430) ^ ~(v5 + FuckEnc::CacheRead<_DWORD>(v10 + 0x178));
                goto LABEL_1034;
            case 0x257:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x6E8) + 8i64 * (unsigned __int8)__ROL4__(~(FuckEnc::CacheRead<_DWORD>(v4 + 0x308) ^ v5), 0x18), &v22, v5, v4);
                goto LABEL_1034;
            case 0x258:
                v22 = v11 + ~FuckEnc::CacheRead<_DWORD>(v4 + 0x408) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x48) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 0x268i64));
                goto LABEL_1034;
            case 0x259:
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x210) + 4i64 * (unsigned __int8)(0xD3 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x468) + 0x5F8i64) + 0x2B8i64) + 8i64 * ((unsigned __int8)__ROR4__(v5, 3) & 0xF3)) + 0x168i64)));
                goto LABEL_1033;
            case 0x25A:
                v22 = ~((v5 ^ v11) - 0x7050F035);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x220);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x1D8) + 0x240i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 3));
                goto LABEL_1034;
            case 0x25B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x320);
                Calls::FastCall(v10 + 0x50, &v22, v5, v4);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x4F8) << 0x19;
                goto LABEL_1034;
            case 0x25C:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x568) ^ v11;
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 0x268i64) + 1;
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 0x168i64));
                goto LABEL_1034;
            case 0x25D:
                v22 = v11 ^ (0x6CD97FB9 * ((FuckEnc::CacheRead<_DWORD>(v4 + 0x178) | 9) + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x1A0i64)));
                goto LABEL_1034;
            case 0x25E:
                v22 = __ROR4__(v11, ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x20));
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x268);
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8) + 0x7FD1FF41;
                goto LABEL_1034;
            case 0x25F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x778);
                v22 = v11 ^ (0xDEB1EBC2 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x5F0) + 0x6C0i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x2D8) ^ 0xB628C0DF));
                goto LABEL_1034;
            case 0x260:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 0x598i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0) + 0x160i64, &v22, v5, v4);
                goto LABEL_1034;
            case 0x261:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x3B0) ^ v11;
                Calls::FastCall(v4 + 0x18, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x548) + 8i64 * (__ROL4__(v5, 0xA) & 0x30)));
                goto LABEL_1034;
            case 0x262:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x688) ^ v11;
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x408) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x120) & 0xB)) + 0x20i64) ^ 0x89767635);
                goto LABEL_1034;
            case 0x263:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x2E8);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x420) - 0x3CFE76BC * FuckEnc::CacheRead<_DWORD>(v4 + 0x640);
                goto LABEL_1034;
            case 0x264:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x338);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x40) + 8i64 * (unsigned __int8)-(char)v5, &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x528));
                goto LABEL_1034;
            case 0x265:
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x78) >> 4);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x670) + 0x358i64) + 4i64 * (((unsigned __int8)v5 ^ 0xFB) & 0x26));
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x688);
                goto LABEL_1034;
            case 0x266:
                v22 = v11 - v5;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x458) + 8i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x3B0), 0x1C) & 0x2D), &v22, v5, v4);
                goto LABEL_1034;
            case 0x267:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x218);
                v22 = v11 ^ (0xE4D2F52 * (FuckEnc::CacheRead<_DWORD>(v10 + 0x78) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x690) + 8i64 * (unsigned __int8)(0x37 * v5)) + 0x1A0i64)));
                goto LABEL_1034;
            case 0x268:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x440) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x550) & 0x66)) + 0x48i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x90);
                v12 = v22 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x638) + 8i64 * (unsigned __int8)__ROL4__(v5, 6)) + 0x6C0i64);
                goto LABEL_1033;
            case 0x269:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x670) + 0x710i64);
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x6B0);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 0x4E8i64) + 0x530i64) + 0x6B0i64);
                goto LABEL_1034;
            case 0x26A:
                v22 = v11 ^ (0xE5677110 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 8i64 * ((8 * (_BYTE)v5) & 0x16)) + 0x430i64));
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F8) + 0x670i64) + 0x698i64);
                goto LABEL_1034;
            case 0x26B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x670);
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x260) + 8i64 * (v5 & 0x7A)) + 8i64) + 0x788i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8) << 8);
                goto LABEL_1034;
            case 0x26C:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x340);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x80) + 8i64 * ((unsigned __int8)v5 & 0xB0), &v22, v5, v4);
                v22 ^= v5;
                goto LABEL_1034;
            case 0x26D:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x20) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x220) + 0x538i64, &v22, v5, v4);
                v22 ^= v5;
                goto LABEL_1034;
            case 0x26E:
                v22 = v11 ^ 0xC8C30131;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xD0);
                v22 = (v11 ^ 0xC8C30131) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 8i64 * (unsigned __int8)(0xD8 * FuckEnc::CacheRead<_BYTE>(v10 + 0x190))) + 0x158i64) + 0x298i64) + 0x4F8i64);
                goto LABEL_1034;
            case 0x26F:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x338i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x468) + 0x1C8i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x15), &v22, v5, v4);
                goto LABEL_1034;
            case 0x270:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 0x90i64) + 0x3E8i64) + 0x630i64) + 0x480i64) + 0x738i64);
                v22 = __ROL4__(v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x190), 0xEB);
                goto LABEL_1034;
            case 0x271:
                v22 = ~(v11 - 0x36E32116);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x3B0) * (v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x220) + 0x598i64));
                goto LABEL_1034;
            case 0x272:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x738) + 0x670i64) + 0x630i64) + 0x5E8i64) + 4i64 * (v5 & 0x20)) ^ v11;
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1D8) + 0x6E0i64);
                goto LABEL_1034;
            case 0x273:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x78) ^ v11;
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F0) + 0x420i64);
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x6C0) << 0xF;
                goto LABEL_1034;
            case 0x274:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x48);
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x78i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x468);
                v22 ^= v5 ^ FuckEnc::CacheRead<_DWORD>(v10 + 0x420);
                goto LABEL_1034;
            case 0x275:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x48) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8) + 0x790i64, &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0xD0));
                goto LABEL_1034;
            case 0x276:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x408);
                v22 = v22 - FuckEnc::CacheRead<_DWORD>(v4 + 0x30) - v5;
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x120);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x178);
                goto LABEL_1034;
            case 0x277:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x118) + 8i64 * ((unsigned __int8)v5 & 0xD8)) + 0x530i64);
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x788);
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x420) ^ v5;
                goto LABEL_1034;
            case 0x278:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x48) ^ v11;
                v22 ^= 0x4C779B05 * FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x78) | 0x14);
                goto LABEL_1034;
            case 0x279:
                v19 = 0xB9 * v5;
                v20 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0x638i64) + 8i64 * (unsigned __int8)(0x88 * v5)) + 0x588i64);
                goto LABEL_641;
            case 0x27A:
                Calls::FastCall(v4 + 0x2E0, &v22, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3A0);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x358) + 4i64 * (v5 & 0x6B));
                goto LABEL_1034;
            case 0x27B:
                v22 = ((v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x408)) - (_DWORD)0x11202E17) ^ 0xA66A45E2;
                v22 += 0x4CEF6F3 * FuckEnc::CacheRead<_DWORD>(v4 + 0x430) + 1;
                goto LABEL_1034;
            case 0x27C:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x340) + 0x1F8i64);
                Calls::FastCall(v10 + 0x128, &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x220));
                goto LABEL_1034;
            case 0x27D:
                v22 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x6B0) & 0xFFFFFFEF) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x368) + 0x5D0i64) + 0x530i64) + 0xC8i64) + 4i64 * (v5 & 0x64));
                goto LABEL_1034;
            case 0x27E:
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8) + 8i64 * (unsigned __int8)(0xB2 * ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x400) + 8i64 * (v5 & 0x1A)) + 0x400i64) + 8i64 * (v5 & 0x35)) + 0x308i64))) + 0x178i64) ^ v11;
                goto LABEL_1033;
            case 0x27F:
                v22 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8) ^ 0x6BD1FF41);
                v22 += (FuckEnc::CacheRead<_DWORD>(v4 + 0x420) ^ 0xD77A70DE) - 0x775E741F * FuckEnc::CacheRead<_DWORD>(v4 + 0x420);
                goto LABEL_1034;
            case 0x280:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x548) + 8i64 * (v5 & 0x6B)) + 0x578i64) ^ v11;
                v12 = __ROL4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 0x548i64) + 8i64 * (unsigned __int8)(0xCE * v5)) + 0x640i64));
                goto LABEL_1033;
            case 0x281:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x220);
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0) + 8i64 * ((0xFD * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x730) + 4i64 * (unsigned __int8)(0x83 * FuckEnc::CacheRead<_BYTE>(v10 + 0x578)))) & 0x2B)) + 0x698i64) + 1;
                goto LABEL_1034;
            case 0x282:
                v22 = v5 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x400) + 8i64 * (unsigned __int8)(0x9B * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 0x4F0i64) + 8i64 * ((unsigned __int8)__ROR4__(v5, 1) & 0xBB)) + 0x450i64))) + 0x6C0i64) ^ v11) + 0x78E6A38;
                goto LABEL_1034;
            case 0x283:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x718);
                v22 = v11 ^ FuckEnc::CacheRead<_DWORD>(v10 + 0x578) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x48) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x678) + 0x540i64));
                goto LABEL_1034;
            case 0x284:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x120);
                v22 = __ROR4__(v22, ~(FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 0x120i64) * (FuckEnc::CacheRead<_BYTE>(v4 + 0x2B0) | 2)));
                goto LABEL_1034;
            case 0x285:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x788) + (FuckEnc::CacheRead<_DWORD>(v4 + 0x20) ^ 0x86CB3745) - FuckEnc::CacheRead<_DWORD>(v4 + 0x1A0) + 2;
                goto LABEL_1034;
            case 0x286:
            {
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x4F8);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xD8);
                auto temp = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x110) + 0x30i64);
                v22 = __ROL4__(v22, BYTE1(temp));
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0);
                goto LABEL_1034;
            }
            case 0x287:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x578) & 0x97)) + 0x5B0i64) + 0x578i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x530);
                v22 = ~(v22 + FuckEnc::CacheRead<_DWORD>(v10 + 0x598));
                goto LABEL_1034;
            case 0x288:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x540);
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x578) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0x640i64) ^ 0x8CB39E1D) + 0x5BC30131;
                goto LABEL_1034;
            case 0x289:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x568);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 0x680i64, &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x150));
                goto LABEL_1034;
            case 0x28A:
                v22 = __ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4E8) + 0xC8i64) + 4i64 * (unsigned __int8)(0xD * v5)) ^ v11, 0xEA);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x240) + 4i64 * ((unsigned __int8)v5 ^ 0xA4u)) ^ v22;
                goto LABEL_1033;
            case 0x28B:
                Calls::FastCall(v4 + 0x720, &v22, v5, v4);
                Calls::FastCall(v4 + 0x348, &v22, v5, v4);
                goto LABEL_1034;
            case 0x28C:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8) + 0x530i64) + 0x7A8i64) + 8i64 * (unsigned __int8)(0x8B * v5), &v22, v5, v4);
                goto LABEL_1034;
            case 0x28D:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x10);
                v22 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x358) + 4i64 * ((unsigned __int8)v5 & 0x8D)) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x540) ^ 0x83u)) + 0x190i64);
                goto LABEL_1034;
            case 0x28E:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x4F8);
                v12 = v22 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 8i64 * (v5 & 0x35)) + 0x2B8i64) + 8i64 * ((unsigned __int8)v5 & 0xF3)) + 0x2E8i64) + 0x3CFE76BC;
                goto LABEL_1033;
            case 0x28F:
                v22 = ~(v11 ^ (0x5051D624 * (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x598))));
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x120) ^ 0x3DC30131;
                goto LABEL_1034;
            case 0x290:
                v22 = v11 ^ ((FuckEnc::CacheRead<_DWORD>(v4 + 0x30) >> 8) + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x368) + 0x788i64) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x308) | 7)));
                goto LABEL_1034;
            case 0x291:
                Calls::FastCall(v4 + 0xB8, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2B8) + 8i64 * (((unsigned __int8)v5 ^ 1) & 0x19)));
                v22 = __ROL4__(v22, FuckEnc::CacheRead<_BYTE>(v4 + 0x788) * v5);
                goto LABEL_1034;
            case 0x292:
                v22 = v11 - v5;
                v22 = v11 - v5 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x28) + 8i64 * (unsigned __int8)(0xC5 * v5)) + 0xB0i64) + 0x178i64);
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x598);
                goto LABEL_1034;
            case 0x293:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x340);
                v22 = ~(v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x2C0));
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x540);
                v22 = __ROL4__(v22, FuckEnc::CacheRead<_DWORD>(v4 + 0x6B0));
                goto LABEL_1034;
            case 0x294:
                Calls::FastCall(v4 + 0x3C0, &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x740));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x150);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x210) + 4i64 * (__ROR4__(v5, 0x1E) & 0x34));
                goto LABEL_1034;
            case 0x295:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x308) ^ v11;
                v22 ^= (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x400) + 8i64 * ((0x3C * FuckEnc::CacheRead<_BYTE>(v4 + 0x1C0)) & 0x74)) + 0x640i64) ^ v5) - 0x3CFE76BC;
                goto LABEL_1034;
            case 0x296:
                v22 = v5 ^ ~(v11 + ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x578) ^ 0xA25F0A43));
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x408);
                goto LABEL_1034;
            case 0x297:
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0));
                v22 += v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x20) + (FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0) ^ 0x5073CF54) + 0x2B1D178E;
                goto LABEL_1034;
            case 0x298:
                v22 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0) + 8i64 * (unsigned __int8)(0xA8 * v5)) + 0x1C0i64) ^ v11) + v5;
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x6B0);
                goto LABEL_1034;
            case 0x299:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x298);
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 0x48));
                Calls::FastCall(v4 + 0x4C0, &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x5B0));
                goto LABEL_1034;
            case 0x29A:
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x268));
                v22 += ~FuckEnc::CacheRead<_DWORD>(v4 + 0x578);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x488) + 0x740i64) + 0x598i64);
                goto LABEL_1034;
            case 0x29B:
                v22 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x540) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0) + 8i64 * ((unsigned __int8)(v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 0x1A0i64)) & 0xA8)) + 0x120i64));
                goto LABEL_1034;
            case 0x29C:
                v22 = v11 + ((FuckEnc::CacheRead<_DWORD>(v4 + 0x2D8) << 0xD) ^ (~FuckEnc::CacheRead<_DWORD>(v4 + 0x788) | 0xC));
                goto LABEL_1034;
            case 0x29D:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x450);
                v22 = v22 - FuckEnc::CacheRead<_DWORD>(v4 + 0x408) - 0x703CFECF;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5F0);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x730) + 4i64 * (v5 & 0x17));
                goto LABEL_1034;
            case 0x29E:
                v22 = __ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0) ^ v11, 0x9F);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5B0);
                v22 = __ROL4__(v22, (0x68 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v10 + 0x730) + 4i64 * ((unsigned __int8)v5 & 0x8B))) ^ 0x76);
                goto LABEL_1034;
            case 0x29F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x110);
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x4F0) + 8i64 * ((unsigned __int8)(0x4D * v5) & 0x88)) + 0x420i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x30) & 0xFFFFFFE7);
                goto LABEL_1034;
            case 0x2A0:
                v22 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 0x3B0i64) ^ v11) - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x5F0) + 0x3B0i64);
                goto LABEL_1034;
            case 0x2A1:
                v22 = v11 ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x578));
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x698) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) | 0xA);
                goto LABEL_1034;
            case 0x2A2:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x578);
                v22 = (v22 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x488) + 0x170i64) + 8i64 * (v5 & 0x16)) + 0x4E8i64) + 0x420i64)) ^ 0x902F98D4;
                goto LABEL_1034;
            case 0x2A3:
                v22 = v11 - 0x2E6C4154 * FuckEnc::CacheRead<_DWORD>(v4 + 0x420) * FuckEnc::CacheRead<_DWORD>(v4 + 0x450);
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0);
                goto LABEL_1034;
            case 0x2A4:
                v22 = v11 ^ 0xAC4F140B;
                v22 = (v11 ^ 0xAC4F140B) + (FuckEnc::CacheRead<_DWORD>(v4 + 0x6B0) ^ v5) + 1;
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5B0) + 0x168i64);
                goto LABEL_1034;
            case 0x2A5:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 8i64 * (unsigned __int8)v5) + 0x330i64, &v22, v5, v4);
                v22 = ~v22;
                goto LABEL_1034;
            case 0x2A6:
                v22 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x450) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x58) & 0xFFFFFFE5 ^ ((v5 * FuckEnc::CacheRead<_DWORD>(v4 + 0x450)) << 7);
                goto LABEL_1034;
            case 0x2A7:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 0x220i64) + 0x90i64) + 0x2B8i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1C)) + 0x480i64);
                v22 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v10 + 0x1A0);
                goto LABEL_1034;
            case 0x2A8:
                v12 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x440) + 8i64 * (v5 & 0xB)) + 0x3B0i64) - 0x98 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x170) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x578) & 0x16)) + 0x3B0i64));
                goto LABEL_1033;
            case 0x2A9:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 0x178i64);
                Calls::FastCall(v4 + 0x248, &v22, v5, v4);
                goto LABEL_1034;
            case 0x2AA:
                v22 = v11 + 0x6D5EDFEF * FuckEnc::CacheRead<_DWORD>(v4 + 0x6C0);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x258) + 0x678i64) + 0x110i64) + 0x4F8i64);
                goto LABEL_1034;
            case 0x2AB:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x458) + 8i64 * (FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0xC8) + 4i64 * ((unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x698), 8) & 0xC6)) ^ 0x7Cu), &v22, v5, v4);
                goto LABEL_1034;
            case 0x2AC:
                v12 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x260) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x1A0) ^ 0xDF) & 0xBE)) + 0x4F8i64) + FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x2E8) ^ 0x20) & 0xBE)) + 0x450i64));
                goto LABEL_1033;
            case 0x2AD:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4E8) + 0x360i64);
                v22 = v11 ^ ~(FuckEnc::CacheRead<_DWORD>(v10 + 0x2B0) + ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0) << 0xC));
                goto LABEL_1034;
            case 0x2AE:
                v22 = v5 ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 0xD0i64);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x2F8) + 8i64 * (v5 & 0x3C)) + 0x760i64) + 4i64 * ((unsigned __int8)v5 ^ 0xDCu)) ^ v5 ^ v11;
                goto LABEL_1033;
            case 0x2AF:
                v22 = v11 ^ 0xC08E98F9;
                v22 = __ROL4__(v11 ^ 0xC08E98F9, FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0));
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 0x698i64);
                goto LABEL_1034;
            case 0x2B0:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8) + 8i64 * (((unsigned __int8)v5 ^ 1) & 0x4D)) + 0x3F8i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6F8) + 0x320i64) + 0x388i64) + 4i64 * (unsigned __int8)((_BYTE)v5 << 6));
                goto LABEL_1034;
            case 0x2B1:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x6C0);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x540) ^ 0xA9D1FF41;
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x640) >> 5;
                goto LABEL_1034;
            case 0x2B2:
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x48));
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x2D8);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x340) + 0x528i64) + 0xD8i64) + 0x4F8i64);
                goto LABEL_1034;
            case 0x2B3:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x408);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x670) + 0x368i64) + 0x6E0i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x30) + 1);
                goto LABEL_1034;
            case 0x2B4:
                v22 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x340) + 0x320i64) + 0x688i64) ^ 0xD1FF41B4);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2B8) + 8i64 * (v5 & 0x47)) + 0x4F8i64);
                goto LABEL_1034;
            case 0x2B5:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8);
                v22 = 0x23978D80 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6F8) + 0x190i64) + v22 - 0x3CFE76BC;
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0);
                goto LABEL_1034;
            case 0x2B6:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x90) + 0x6C0i64) ^ v11 ^ 0xBE8029D6;
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) ^ v5;
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x58);
                goto LABEL_1034;
            case 0x2B7:
                v22 = v11 - 0xE0B8CB8;
                v22 = v5 ^ (v11 - 0xE0B8CB8 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 0x688i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x6B0) - 0x325D2CD8));
                goto LABEL_1034;
            case 0x2B8:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x778);
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x2B0);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x258) + 0x3C0i64, &v22, v5, v4);
                goto LABEL_1034;
            case 0x2B9:
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x690) + 8i64 * ((unsigned __int8)(0xC3 * FuckEnc::CacheRead<_BYTE>(v4 + 0x578)) & 0xF8)) + 0x5E8i64) + 4i64 * (unsigned __int8)(0xE7 * v5)));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x670) + 0xA8i64);
                v22 += FuckEnc::CacheRead<_DWORD>(v10 + 0x308);
                goto LABEL_1034;
            case 0x2BA:
                v12 = v5 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8) + 8i64 * ((unsigned __int8)v5 ^ 0xDDu)) + 0x28i64) + 8i64 * (((unsigned __int8)v5 ^ 0xED) & 0xB6)) + 0x618i64) + 4i64 * (((unsigned __int8)v5 ^ 0xF2) & 0x5D)) ^ v11;
                goto LABEL_1033;
            case 0x2BB:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 0x190i64) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x320) + 0x4C0i64, &v22, v5, v4);
                goto LABEL_1034;
            case 0x2BC:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x178) ^ v11;
                v22 = __ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x120) ^ v22, v5);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x190) ^ 0xE8u)) + 0x788i64);
                goto LABEL_1034;
            case 0x2BD:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x568);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0);
                Calls::FastCall(v4 + 0xA0, &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0xD0));
                goto LABEL_1034;
            case 0x2BE:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8) + 0x110i64) + 0x258i64) + 0x468i64) + 0x320i64) + 0x68i64) + 8i64 * ((unsigned __int8)v5 & 0xD4)) + 0x430i64);
                goto LABEL_1034;
            case 0x2BF:
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x178));
                v22 -= (FuckEnc::CacheRead<_DWORD>(v4 + 0x420) ^ (0xA97A2CAA * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0) + 0x568i64))) >> 0xD;
                goto LABEL_1034;
            case 0x2C0:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x468) + 0x5F0i64) + 0x10i64);
                Calls::FastCall(v4 + 0x270, &v22, v5, v10);
                goto LABEL_1034;
            case 0x2C1:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x718);
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x788);
                v12 = v22 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x488) + 0x1F0i64) + 0x28i64) + 8i64 * (v5 & 0x20)) + 0x2D8i64);
                goto LABEL_1033;
            case 0x2C2:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0);
                v12 = v22 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 0x178i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x548) + 8i64 * ((unsigned __int8)v5 ^ 0x64u)) + 0x2B0i64);
                goto LABEL_1033;
            case 0x2C3:
                Calls::FastCall(v4 + 0x538, &v22, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x468);
                v22 += FuckEnc::CacheRead<_DWORD>(v10 + 0x58);
                goto LABEL_1034;
            case 0x2C4:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x550);
                v22 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x678) + 0x118i64) + 8i64 * ((unsigned __int8)v5 ^ 0x78u)) + 0x268i64);
                goto LABEL_1034;
            case 0x2C5:
                v22 = v11 + ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x420) ^ 0xDF51516F) - FuckEnc::CacheRead<_DWORD>(v4 + 0x78);
                goto LABEL_1034;
            case 0x2C6:
                v22 = __ROR4__(v11, 0x42);
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x450), 0xF)) + 0xA8i64) + 0x440i64) + 8i64 * (v5 & 0x29)) + 0x688i64));
                goto LABEL_1034;
            case 0x2C7:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 0x4F0i64) + 8i64 * (((unsigned __int8)v5 ^ 0xD2) & 0x6F)) + 0x6F8i64) + 0x5F0i64);
                v12 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x260) + 8i64 * (v5 & 0x73)) + 0x550i64));
                goto LABEL_1033;
            case 0x2C8:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x718i64);
                Calls::FastCall(v10 + 0x2E0, &v22, v5, v4);
                v22 -= 0x74D79810;
                goto LABEL_1034;
            case 0x2C9:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x360) + 0x10i64) + 0x440i64) + 8i64 * (unsigned __int8)(0x1E * v5)) + 0x5D0i64) + 0x528i64) + 0x150i64);
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x2D8);
                goto LABEL_1034;
            case 0x2CA:
                v22 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x30) << 0x14);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x58) & 0x4C)) + 0x4B0i64) + 0x2D8i64);
                goto LABEL_1034;
            case 0x2CB:
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x1A0));
                v12 = v22 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x738) + 0x540i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x788) & 0xE7)) + 0x190i64));
                goto LABEL_1033;
            case 0x2CC:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x488) + 0x128i64, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x338) + 0x4A8i64));
                goto LABEL_1034;
            case 0x2CD:
                v22 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x28) + 8i64 * ((unsigned __int8)v5 ^ 0x80u)) + 0x578i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8) + 0x5E8i64) + 4i64 * (unsigned __int8)(0xC0 * FuckEnc::CacheRead<_BYTE>(v4 + 0x48))));
                goto LABEL_1034;
            case 0x2CE:
                v22 = v11 ^ 0xC3018944;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0);
                v22 = (v5 ^ FuckEnc::CacheRead<_DWORD>(v10 + 0x3F8) ^ v11 ^ 0xC3018944) - v5;
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x698);
                goto LABEL_1034;
            case 0x2CF:
                v22 = v11 + ~FuckEnc::CacheRead<_DWORD>(v4 + 0x168);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x3B0);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5B0);
                v22 = ~__ROL4__(v22, FuckEnc::CacheRead<_DWORD>(v10 + 0x540));
                goto LABEL_1034;
            case 0x2D0:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x170) + 8i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x168), 0xF) & 0x53)) + 0x4F8i64);
                v22 -= v5 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x578) - 0x60E159E0);
                goto LABEL_1034;
            case 0x2D1:
                v22 = __ROR4__(v11, v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 8i64 * (unsigned __int8)(0x70 * v5)) + 0x1F0i64);
                v22 = v5 + v22 - FuckEnc::CacheRead<_DWORD>(v10 + 0x688);
                goto LABEL_1034;
            case 0x2D2:
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x168)) + v5;
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x4F8);
                Calls::FastCall(v4 + 0x130, &v22, v5, v4);
                goto LABEL_1034;
            case 0x2D3:
                v22 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x598) << 0x12);
                Calls::FastCall(v4 + 0xE8, &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x320));
                goto LABEL_1034;
            case 0x2D4:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4F0) + 8i64 * ((unsigned __int8)v5 & 0xBF)) + 0x630i64) + 0x778i64);
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x468) + 0x118i64) + 8i64 * (unsigned __int8)(0x16 * v5)) + 0x58i64);
                goto LABEL_1034;
            case 0x2D5:
                v22 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x58) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x698) - 0x3C75EB6B);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x630);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x5F0) + 0x168i64);
                goto LABEL_1034;
            case 0x2D6:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4E8) + 0x150i64);
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x420) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x58) + FuckEnc::CacheRead<_DWORD>(v10 + 0x598));
                goto LABEL_1034;
            case 0x2D7:
                v22 = v5 ^ v11;
                v22 = v5 ^ v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x3B0) * ~((FuckEnc::CacheRead<_DWORD>(v4 + 0x6C0) * v5) ^ 0xBCC1F129));
                goto LABEL_1034;
            case 0x2D8:
                Calls::FastCall(v4 + 0xE8, &v22, v5, v4);
                v22 = __ROL4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x15)) + 0x540i64));
                goto LABEL_1034;
            case 0x2D9:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 8i64 * ((unsigned __int8)v5 & 0xA0)) + 0x210i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 0x16));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x468);
                v22 += ~FuckEnc::CacheRead<_DWORD>(v10 + 0x2E8);
                goto LABEL_1034;
            case 0x2DA:
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x3B0));
                v22 ^= v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x488) + 0x2C0i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 0x578i64);
                goto LABEL_1034;
            case 0x2DB:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0);
                v22 = v11 - 0x30D2D47 + FuckEnc::CacheRead<_DWORD>(v10 + 0x168);
                Calls::FastCall(v4 + 0x200, &v22, v5, v4);
                goto LABEL_1034;
            case 0x2DC:
                v22 = v11 - (v5 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x430) >> 0x12));
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x16)) + 0x550i64);
                goto LABEL_1034;
            case 0x2DD:
                v22 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x530) + 0x6C0i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x678) + 0x4A0i64) + 4i64 * (unsigned __int8)(0x1F * v5));
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x48);
                goto LABEL_1034;
            case 0x2DE:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 8i64 * (unsigned __int8)(0x2E * v5)) + 0x90i64);
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x2E8);
                v22 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x738) + 0x3B0i64);
                goto LABEL_1034;
            case 0x2DF:
                Calls::FastCall(v4 + 0x768, &v22, v5, v4);
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 0x2E8i64));
                goto LABEL_1034;
            case 0x2E0:
                v22 = v5 + v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x430) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x30) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x630) + 0x3F8i64))) + 1;
                goto LABEL_1034;
            case 0x2E1:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x678);
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x5E8) + 4i64 * (unsigned __int8)(0x7E * v5));
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_DWORD>(v4 + 0x120));
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x220) + 0x598i64);
                goto LABEL_1034;
            case 0x2E2:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x170) + 8i64 * (unsigned __int8)(0xCB * FuckEnc::CacheRead<_BYTE>(v4 + 0x408))) + 0x80i64) + 8i64 * (((unsigned __int8)v5 ^ 0xF7) & 0x88), &v22, v5, v4);
                goto LABEL_1034;
            case 0x2E3:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8) + 0x90i64);
                v22 = v11 ^ (~FuckEnc::CacheRead<_DWORD>(v10 + 0x408) + (FuckEnc::CacheRead<_DWORD>(v4 + 0x120) ^ v5));
                goto LABEL_1034;
            case 0x2E4:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x6C0) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 0x780i64) + 8i64 * ((unsigned __int8)v5 & 0xA8)) + 0x4E8i64) + 0x150i64);
                v22 += FuckEnc::CacheRead<_DWORD>(v10 + 0x688);
                goto LABEL_1034;
            case 0x2E5:
                v22 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 0x30i64) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x3B0) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8) + 0x20i64));
                goto LABEL_1034;
            case 0x2E6:
                v22 = v11 - 0x557EBE2E;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x738);
                v22 = v11 - 0x557EBE2E + FuckEnc::CacheRead<_DWORD>(v10 + 0x178);
                v22 = __ROL4__(v22, ~FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x178i64));
                goto LABEL_1034;
            case 0x2E7:
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x540));
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 0x480i64) + 0x4A0i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 0x18));
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x78);
                goto LABEL_1034;
            case 0x2E8:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xB0) + 0x1A0i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8) + 0xB0i64);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x4F0) + 8i64 * ((unsigned __int8)v5 & 0xF7)) + 0x568i64);
                goto LABEL_1034;
            case 0x2E9:
                Calls::FastCall(v4 + 0x790, &v22, v5, v4);
                v22 -= (0x85D0FFA1 * FuckEnc::CacheRead<_DWORD>(v4 + 0x568)) ^ 0xC3018944;
                goto LABEL_1034;
            case 0x2EA:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x1A0);
                v22 += 0x6614FC05 * FuckEnc::CacheRead<_DWORD>(v4 + 0x20) * ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x788) ^ 0xC3018944);
                goto LABEL_1034;
            case 0x2EB:
                v22 = __ROR4__(~(_DWORD)v11, v5);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8) + 0x4F8i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 0x550i64);
                goto LABEL_1034;
            case 0x2EC:
                v22 = v11 + 0x1D4BC52;
                v22 = v11 + 0x1D4BC52 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0x120i64);
                Calls::FastCall(v4 + 0x248, &v22, v5, v4);
                goto LABEL_1034;
            case 0x2ED:
                v22 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x420) & 0xFFFFFFE1);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4F0) + 8i64 * ((unsigned __int8)v5 ^ 0xF3u)) + 0xB0i64) + 0x640i64);
                goto LABEL_1034;
            case 0x2EE:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 0x6C0i64);
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x450);
                Calls::FastCall(v4 + 0x3C0, &v22, v5, v4);
                goto LABEL_1034;
            case 0x2EF:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x540);
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x2D8);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 8);
                v22 += FuckEnc::CacheRead<_DWORD>(v10 + 0x2D8) ^ 0x15D715B5;
                goto LABEL_1034;
            case 0x2F0:
                v22 = v11 + 0x27FCD0FF;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x3E8i64);
                v22 = v11 + 0x27FCD0FF + 0x4B4696C1 * FuckEnc::CacheRead<_DWORD>(v10 + 0x2D8) * FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0);
                goto LABEL_1034;
            case 0x2F1:
                v22 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x168) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x268) | 2));
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5E8) + 4i64 * ((unsigned __int8)(0x1E * FuckEnc::CacheRead<_BYTE>(v4 + 0x6E0)) & 0xD9));
                goto LABEL_1034;
            case 0x2F2:
                v22 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x420);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x178) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 8i64 * (unsigned __int8)(0x1E * v5)) + 0x4F8i64);
                goto LABEL_1034;
            case 0x2F3:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8);
                v22 = __ROR4__(v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0xC8) + 4i64 * (((unsigned __int8)v5 ^ 0xBF) & 0xF0)), v5);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 0x488i64) + 0x308i64);
                goto LABEL_1034;
            case 0x2F4:
                v22 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F0) + 0x308i64) << 0x11);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x738) + 0x240i64) + 4i64 * ((4 * (_BYTE)v5) & 0x48));
                goto LABEL_1034;
            case 0x2F5:
                v22 = v11 - 0x1D910371;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2B8) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x4F8) & 0x71)) + 0x150i64) + 0x528i64);
                v22 = __ROR4__(v11 - 0x1D910371, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x240) + 4i64 * (((unsigned __int8)v5 ^ 0xFB) & 0x84)));
                goto LABEL_1034;
            case 0x2F6:
                v22 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x360) + 0x540i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x688i64) ^ 0x838C2C84;
                goto LABEL_1034;
            case 0x2F7:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x678) + 8i64) + 0x670i64) + 0x10i64);
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x3A8) + 8i64 * ((unsigned __int8)__ROR4__(v5, 0x1A) & 0x93)) + 0x1A0i64) ^ v11;
                goto LABEL_1034;
            case 0x2F8:
                v22 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x598));
                v12 = __ROL4__(v22, 0x10 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x690) + 8i64 * ((unsigned __int8)v5 ^ 0x5Eu)) + 0x4E8i64) + 0xC8i64) + 4i64 * (v5 & 0x37)));
                goto LABEL_1033;
            case 0x2F9:
                v22 = v11 ^ (0x776CD0FF * FuckEnc::CacheRead<_DWORD>(v4 + 0x20) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x4F8) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x28) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x12)) + 0x598i64)));
                goto LABEL_1034;
            case 0x2FA:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x170) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x14)) + 0x78i64);
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_BYTE>(v4 + 0x268) * (FuckEnc::CacheRead<_BYTE>(v4 + 0x120) ^ 0xDF));
                goto LABEL_1034;
            case 0x2FB:
                v22 = v11 + 0x3CFE76BC;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x260i64) + 8i64 * (__ROL4__(v5, 1) & 0x45)) + 0x5D0i64);
                v22 = (v11 + 0x3CFE76BC) ^ ~FuckEnc::CacheRead<_DWORD>(v10 + 0x688);
                goto LABEL_1034;
            case 0x2FC:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x400) + 8i64 * (unsigned __int8)__ROL4__(v5, 5)) + 0x320i64) + 0x188i64) + 8i64 * (unsigned __int8)(0xB2 * v5), &v22, v5, v4);
                goto LABEL_1034;
            case 0x2FD:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4E8) + 0x598i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x320);
                v22 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x408) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x110) + 0x578i64);
                goto LABEL_1034;
            case 0x2FE:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x110) + 0x450i64);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x260) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x3B0) & 0x5B)) + 0x568i64) >> 0x1C;
                goto LABEL_1034;
            case 0x2FF:
                v12 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8) + 0x678i64) + 0x588i64) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x688) & 0x55)) + 0xD8i64) + 0x178i64));
                goto LABEL_1033;
            case 0x300:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0);
                Calls::FastCall(v4 + 0x4C0, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x260) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x19)));
                goto LABEL_1034;
            case 0x301:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x168);
                Calls::FastCall(v4 + 0x608, &v22, v5, v4);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6F8) + 0x688i64);
                goto LABEL_1034;
            case 0x302:
                v22 = v11 ^ 0xC8C31131;
                Calls::FastCall(v4 + 0x570, &v22, v5, v4);
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x20) << 0x16;
                goto LABEL_1034;
            case 0x303:
                v12 = v11 - v5 * FuckEnc::CacheRead<_DWORD>(v4 + 0x190) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 0x430i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4E8) + 0x6C0i64);
                goto LABEL_1033;
            case 0x304:
                v22 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0) * v5 - 0x1566A837 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x338) + 0x1A0i64) - 0x2C811D9C);
                goto LABEL_1034;
            case 0x305:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x698) - 0x698D218B;
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 0x5B0i64) + 0x6B0i64) & 0xFFFFFFF5;
                goto LABEL_1034;
            case 0x306:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 8);
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x48) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x640i64) + FuckEnc::CacheRead<_DWORD>(v10 + 0x268) + 0x1F3DCA0E);
                goto LABEL_1033;
            case 0x307:
                v22 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F8) + 0x4F8i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x718);
                v12 = v22 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x780) + 8i64 * (v5 & 0x1E)) + 0x4A0i64) + 4i64 * (v5 & 0x52));
                goto LABEL_1033;
            case 0x308:
                v22 = v11 ^ 0xF3155F36;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x258) + 0x1F8i64);
                v22 = __ROR4__(v11 ^ 0xF3155F36, FuckEnc::CacheRead<_DWORD>(v10 + 0x30));
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x640) ^ 0xE982C626;
                goto LABEL_1034;
            case 0x309:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x320) + 0x3F0i64, &v22, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x90);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x450);
                goto LABEL_1034;
            case 0x30A:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8) + 0x5F8i64);
                Calls::FastCall(v10 + 0x538, &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x298));
                goto LABEL_1034;
            case 0x30B:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 0x710i64);
                Calls::FastCall(v10 + 0x2A8, &v22, v5, v4);
                v22 ^= 0xB6F8EF5A;
                goto LABEL_1034;
            case 0x30C:
                v22 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8) + 8i64 * (unsigned __int8)(0x62 * v5)) + 0x2C0i64));
                v22 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x170) + 8i64 * (v5 & 0x67)) + 0x568i64) ^ v22);
                goto LABEL_1034;
            case 0x30D:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x598);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x440) + 8i64 * ((unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x408), 0xF) & 0xCF)) + 0x630i64) + 0x4E8i64) + 0x540i64);
                goto LABEL_1034;
            case 0x30E:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x2E8) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0);
                v22 += FuckEnc::CacheRead<_DWORD>(v10 + 0x48);
                v22 = v22 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x178) ^ 0x916F000B) - 0x38ADDE00;
                goto LABEL_1034;
            case 0x30F:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 0x5F0i64) + 0x678i64) + 0x468i64) + 0x340i64) + 0x488i64);
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x760) + 4i64 * (unsigned __int8)(0x63 * v5));
                goto LABEL_1034;
            case 0x310:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8) + 0x4A8i64);
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x1A0);
                Calls::FastCall(v4 + 0x160, &v22, v5, v4);
                goto LABEL_1034;
            case 0x311:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x2B0i64);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A0) + 8i64) + 0x388i64) + 4i64 * (v5 & 0x7A));
                goto LABEL_1034;
            case 0x312:
                v22 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x178) ^ 0x77510DCF);
                Calls::FastCall(v4 + 0x270, &v22, v5, v4);
                v22 ^= 0x581DA57Au;
                goto LABEL_1034;
            case 0x313:
                v22 = (unsigned int)0x1068B6C0 + v11;
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x190);
                Calls::FastCall(v4 + 0x2E0, &v22, v5, v4);
                goto LABEL_1034;
            case 0x314:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x168) + FuckEnc::CacheRead<_DWORD>(v4 + 0x190) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x388) + 4i64 * ((unsigned __int8)(0x94 * ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x3B0)) ^ 0x23u));
                goto LABEL_1034;
            case 0x315:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x78);
                v12 = v22 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x260) + 8i64 * (unsigned __int8)(0x79 * v5)) + 0x2F8i64) + 8i64 * (v5 & 0x78)) + 0x760i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 9));
                goto LABEL_1033;
            case 0x316:
                v22 = ~(v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x178));
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0);
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x488) + 0x778i64) + 0x1C0i64));
                goto LABEL_1034;
            case 0x317:
                v22 = v11 + 0x7789A199;
                v22 = (v11 + 0x7789A199) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0) << 0xB);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 0x598i64);
                goto LABEL_1034;
            case 0x318:
                v22 = v5 ^ (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8));
                v22 ^= ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x598) + 0x65CA7903);
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x540);
                goto LABEL_1034;
            case 0x319:
                v22 = v11 + 0x436BFFB6;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x90);
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0xC8) + 4i64 * (unsigned __int8)(0xAA * FuckEnc::CacheRead<_BYTE>(v4 + 0x430))) + v11 + 0x436BFFB7;
                goto LABEL_1034;
            case 0x31A:
                v22 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x110) + 0x6B0i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 0x2E8i64)));
                goto LABEL_1034;
            case 0x31B:
                v12 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xB0) + 0x118i64) + 8i64 * (unsigned __int8)(0xA6 * v5)) + 0x480i64) + 0x118i64) + 8i64 * (v5 & 0x5B)) + 0x190i64) ^ v11);
                goto LABEL_1033;
            case 0x31C:
                Calls::FastCall(v4 + 0x478, &v22, v5, v4);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4F0) + 8i64 * (~(_BYTE)v5 & 0xD)) + 0x4F8i64);
                goto LABEL_1034;
            case 0x31D:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 0x568i64);
                v22 = __ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x58) ^ v22, 0x47);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1D8);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x190);
                goto LABEL_1034;
            case 0x31E:
                v22 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0) + 0x20i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x28) + 8i64 * ((unsigned __int8)(0x12 * FuckEnc::CacheRead<_DWORD>(v4 + 0x48)) & 0xEE)) + 0x220i64);
                v22 += FuckEnc::CacheRead<_DWORD>(v10 + 0x2D8);
                goto LABEL_1034;
            case 0x31F:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 8i64 * (v5 & 0x46)) + 0x630i64) + 0x4A8i64) + 0x6F8i64) + 0x740i64) + 0x1A0i64) ^ v11;
                goto LABEL_1034;
            case 0x320:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x440) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x1A)) + 0x540i64) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x210) + 4i64 * ((unsigned __int8)(0x3B * FuckEnc::CacheRead<_BYTE>(v4 + 0x550)) & 0xCE)) + 1);
                goto LABEL_1034;
            case 0x321:
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x178) ^ 0x2A);
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_BYTE>(v4 + 0x20) * (FuckEnc::CacheRead<_BYTE>(v4 + 0x568) ^ 0x44));
                goto LABEL_1034;
            case 0x322:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2A0);
                v22 = __ROR4__(v11, ~FuckEnc::CacheRead<_BYTE>(v10 + 0x578) ^ (v5 + FuckEnc::CacheRead<_BYTE>(v4 + 0x2C0) + FuckEnc::CacheRead<_BYTE>(v4 + 0x450)));
                goto LABEL_1034;
            case 0x323:
                v22 = v11 ^ 0x5151B410;
                v22 = (v11 ^ 0x5151B410) - (FuckEnc::CacheRead<_DWORD>(v4 + 0x2E8) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x4F8) + 0x356FEADC));
                goto LABEL_1034;
            case 0x324:
                v22 = (v11 ^ 0x468405C8) + 0x3987FFCF;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x400) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1C)) + 0xC8i64) + 4i64 * ((unsigned __int8)__ROR4__(v5, 7) & 0x90));
                goto LABEL_1034;
            case 0x325:
                v22 = (v11 - 0x57C31131) ^ 0x5D0FADC8;
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x640) & 0xFFFFFFF4 ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x788));
                goto LABEL_1034;
            case 0x326:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x468);
                v22 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x540) ^ (FuckEnc::CacheRead<_DWORD>(v10 + 0x4F8) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x548) + 8i64 * (unsigned __int8)__ROR4__(v5, 7)) + 0x408i64));
                goto LABEL_1034;
            case 0x327:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6F8);
                v22 = __ROL4__(v11, ~(FuckEnc::CacheRead<_BYTE>(v4 + 0x420) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v10 + 0x240) + 4i64 * (v5 & 0x5A))));
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x2D8);
                goto LABEL_1034;
            case 0x328:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4E8) + 0x158i64) + 0x480i64);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x20);
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x4F8);
                goto LABEL_1034;
            case 0x329:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 0x6E0i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x360i64) + 0x710i64);
                v22 ^= ~FuckEnc::CacheRead<_DWORD>(v10 + 0x20);
                goto LABEL_1034;
            case 0x32A:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 0x1F0i64);
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 0x408));
                v22 = __ROL4__(v22, FuckEnc::CacheRead<_BYTE>(v4 + 0x58));
                goto LABEL_1034;
            case 0x32B:
                v22 = __ROL4__(v11, (_DWORD)0xD4C8C37 + FuckEnc::CacheRead<_DWORD>(v4 + 0x20));
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A0) + 4i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x690) + 8i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x3B0) ^ 0xBFE9CD73, 0x1B) & 0x3A)) + 0x120i64) ^ 0x4Eu));
                goto LABEL_1034;
            case 0x32C:
                v22 = (v5 ^ v11) + 0x16C76BB5;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 8i64 * ((unsigned __int8)v5 ^ 0xAFu)) + 0x360i64);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x4D0) + 4i64 * ((unsigned __int8)__ROR4__(v5, 9) & 0xD9));
                goto LABEL_1034;
            case 0x32D:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x578);
                v18 = FuckEnc::CacheRead<_QWORD>(v4 + 0x440);
            LABEL_508:
                Calls::FastCall(v4 + 0x608, &v22, v5, FuckEnc::CacheRead<_QWORD>(v18 + 8i64 * (unsigned __int8)__ROR4__(v5, 0x15)));
                goto LABEL_1034;
            case 0x32E:
                v22 = (v5 ^ v11) - 0x3B6D36C6;
                v22 = v22 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0) + 8i64 * (unsigned __int8)(0x43 * v5)) + 0x6B0i64) - FuckEnc::CacheRead<_DWORD>(v4 + 0x640);
                goto LABEL_1034;
            case 0x32F:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x788) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x778);
                v12 = __ROL4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x2B8) + 8i64 * ((unsigned __int8)v5 ^ 0xA2u)) + 0x6D0i64) + 8i64 * (unsigned __int8)(0x4C * v5)) + 0x568i64));
                goto LABEL_1033;
            case 0x330:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3A0);
                v22 = ~(v11 - ((FuckEnc::CacheRead<_DWORD>(v4 + 0x420) * ~FuckEnc::CacheRead<_DWORD>(v10 + 0x408)) | 7));
                goto LABEL_1034;
            case 0x331:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x2D8);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4F0) + 8i64 * (v5 & 0x76)) + 0x10i64) + 0x338i64);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x420) ^ 0xD2A54725;
                goto LABEL_1034;
            case 0x332:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 8i64 * ((unsigned __int8)v5 ^ 0x9Du)) + 0x78i64);
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x308);
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x120);
                goto LABEL_1034;
            case 0x333:
                Calls::FastCall(v4 + 0x5D8, &v22, v5, v4);
                v22 += 0x603032D4;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x630);
                v22 = __ROL4__(v22, FuckEnc::CacheRead<_DWORD>(v10 + 0x2D8));
                goto LABEL_1034;
            case 0x334:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) ^ v11;
                v22 += 0xFFFFC000 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x640) ^ 0x50F5) - 0x3CFE76BD;
                goto LABEL_1034;
            case 0x335:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x340);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x310) + 8i64 * ((unsigned __int8)v5 & 0xEC), &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0xA8));
                goto LABEL_1034;
            case 0x336:
                v22 = v5 ^ v11;
                v22 = (v5 ^ v11) - ((FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 0x408i64) >> 0xC) ^ 0xF4C05B88) - FuckEnc::CacheRead<_DWORD>(v4 + 0x178);
                goto LABEL_1034;
            case 0x337:
                v22 = v11 ^ ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8) + 0x2C0i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x170) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x14)) + 0x4F8i64) * v5);
                goto LABEL_1034;
            case 0x338:
                v22 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x598) ^ 0x719D136) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F0) + 0x450i64);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x220) + 0x578i64);
                goto LABEL_1034;
            case 0x339:
                v22 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x178));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 8);
                Calls::FastCall(v10 + 0x230, &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x738));
                goto LABEL_1034;
            case 0x33A:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x10);
                v22 = __ROL4__(~(v11 + 0x2806DEBE * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x588) + 8i64 * (__ROR4__(v5, 0x10) & 0x59)) + 0x190i64)), 1) ^ 0xBAE1784F;
                goto LABEL_1034;
            case 0x33B:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x488) + 0x3A0i64) + 0x640i64) ^ 0x2867C5CB;
                v22 = __ROL4__(v22, FuckEnc::CacheRead<_DWORD>(v4 + 0x788));
                goto LABEL_1034;
            case 0x33C:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1D8);
                v22 ^= ~FuckEnc::CacheRead<_DWORD>(v10 + 0x268);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x698i64);
                goto LABEL_1034;
            case 0x33D:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5F0);
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x640) + 0x3CFE76BC;
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 0x68i64) + 8i64 * ((unsigned __int8)v5 ^ 0x8Cu)) + 0x408i64);
                goto LABEL_1034;
            case 0x33E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x530);
                v22 = FuckEnc::CacheRead<_DWORD>(v10 + 0x2E8) ^ v11;
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x48) << 0x18);
                goto LABEL_1034;
            case 0x33F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0);
                v22 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v10 + 0x420);
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 0x3E0i64) + 0x408i64)) - 0x67DAA39D;
                goto LABEL_1034;
            case 0x340:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x368);
                v22 = v5 + v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x58) + 0x2319459;
                goto LABEL_1034;
            case 0x341:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A0) + 0x450i64) ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x2E8);
                goto LABEL_1034;
            case 0x342:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x630) + 0x320i64) + 0x3F8i64) ^ v11;
                v22 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8) + 0x540i64);
                goto LABEL_1034;
            case 0x343:
                Calls::FastCall(v4 + 0x428, &v22, v5, v4);
                v22 += v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x450);
                goto LABEL_1034;
            case 0x344:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x640);
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 0x78i64) + FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x690) + 8i64 * (v5 & 0x1A)) + 0x30i64));
                goto LABEL_1034;
            case 0x345:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x640);
                v22 += (FuckEnc::CacheRead<_DWORD>(v4 + 0x120) | 0x16) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x678) + 0x450i64) + 1;
                goto LABEL_1034;
            case 0x346:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x78) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x110) + 0x338i64) + 0x5D0i64) + 0x450i64);
                goto LABEL_1034;
            case 0x347:
                v22 = (v11 + 0x5CC83C9B) ^ 0x445711C2;
                Calls::FastCall(v4 + 0xB8, &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x528));
                v22 += 0x7DE8DD57;
                goto LABEL_1034;
            case 0x348:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x368);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x6A8) + 8i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x4F8), 0xF) & 0xB0), &v22, v5, v10);
                goto LABEL_1034;
            case 0x349:
                v22 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x120) + 0x58D1FF41) & 0xFFFFFFE7;
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x468) + 0x2C0i64) >> 0x11;
                goto LABEL_1034;
            case 0x34A:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x268);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x360) + 0x480i64) + 0x2B8i64) + 8i64 * ((unsigned __int8)(0x41 * v5) & 0xAF)) + 0x90i64);
                v12 = FuckEnc::CacheRead<_DWORD>(v10 + 0x168) ^ v22;
                goto LABEL_1033;
            case 0x34B:
                v22 = v11 ^ 0xCE634B46;
                v22 = v5 ^ ((v11 ^ 0xCE634B46) + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0) + 8i64 * ((unsigned __int8)__ROL4__(v5, 0x1D) & 0xA2)) + 0x338i64) + 0x2E8i64) >> 0xC));
                goto LABEL_1034;
            case 0x34C:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x690) + 8i64 * ((unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x540), 1) & 0x93)) + 0x450i64) ^ v11;
                Calls::FastCall(v4 + 0xA0, &v22, v5, v4);
                v22 += 0x641DAF52;
                goto LABEL_1034;
            case 0x34D:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 0x3E0i64) + 0x10i64) + 0x4D0i64) + 4i64 * (v5 & 0x21));
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) << 6;
                goto LABEL_1034;
            case 0x34E:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x540) - 0x3E3CFECF;
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x68) + 8i64 * ((3 * (_BYTE)v5) & 0x7A)) + 0x340i64) + 0x4D0i64) + 4i64 * (unsigned __int8)(0x41 * v5));
                goto LABEL_1034;
            case 0x34F:
                Calls::FastCall(v4 + 0x608, &v22, v5, v4);
                v22 = v22 - 0x363CFECF + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 0x168i64);
                goto LABEL_1034;
            case 0x350:
                v22 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5B0) + 0x2B0i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x678) + 0x1B0i64) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x48) ^ 2u)) + 0x6C0i64));
                goto LABEL_1034;
            case 0x351:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x360) + 0x20i64);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8) + 8i64 * (v5 & 0x42)) + 0x638i64) + 8i64 * (unsigned __int8)(0x38 * v5)) + 0x568i64) ^ v22;
                goto LABEL_1033;
            case 0x352:
                v22 = v5 ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x150);
                v22 = (v5 ^ v11) - FuckEnc::CacheRead<_DWORD>(v10 + 0x408) * (0xE3D1FF41 - 0x50D418B2 * FuckEnc::CacheRead<_DWORD>(v4 + 0x408));
                goto LABEL_1034;
            case 0x353:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x2D8);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8);
                v22 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x120);
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x30);
                goto LABEL_1034;
            case 0x354:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x420) & 0xFB)) + 0x158i64);
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4F0) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v10 + 0x6B0) ^ 0xDF) & 0xE8)) + 0x450i64);
                goto LABEL_1034;
            case 0x355:
                v22 = v11 ^ 0x19AB8775;
                v22 = v11 ^ 0x19AB8775 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xB0) + 0x588i64) + 8i64 * ((unsigned __int8)v5 ^ 0xA7u)) + 0x58i64) - 0x2CC6FD7F);
                goto LABEL_1034;
            case 0x356:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8);
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x598) - v5;
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x640);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x2B0i64);
                goto LABEL_1034;
            case 0x357:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x338);
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0xF8) + 4i64 * ((unsigned __int8)v5 & 0xEC)) ^ v11;
                v12 = __ROR4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 0x690i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x12)) + 0x30i64));
                goto LABEL_1033;
            case 0x358:
                v22 = ((FuckEnc::CacheRead<_DWORD>(v4 + 0x568) ^ v11) + 0x56C8BD2E) ^ 0x8B28F1A0;
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8) + 0x488i64) + 0x6C0i64) + 1;
                goto LABEL_1034;
            case 0x359:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x670) + 0x5C8i64) + 0x338i64) + 0x158i64) + 0x4B0i64) + 0x240i64) + 4i64 * (v5 & 0x64));
                goto LABEL_1034;
            case 0x35A:
                v22 = v11 - 0x6071EC29;
                v22 = (v11 - 0x6071EC29) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x408) * ~FuckEnc::CacheRead<_DWORD>(v4 + 0x78));
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x640);
                goto LABEL_1034;
            case 0x35B:
                v22 = v11 ^ ~(0x84104553 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x10) + 0x178i64));
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 8i64 * (v5 & 7)) + 0x48i64);
                goto LABEL_1034;
            case 0x35C:
                Calls::FastCall(v4 + 0x348, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x28) + 8i64 * (unsigned __int8)(0x68 * FuckEnc::CacheRead<_BYTE>(v4 + 0x3B0))) + 0x3A8i64) + 8i64 * (__ROL4__(v5, 2) & 8)));
                goto LABEL_1034;
            case 0x35D:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x778) + 0x298i64);
                v22 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x2B8) + 8i64 * (unsigned __int8)__ROR4__(v5, 1)) + 0x178i64) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x450) + 0x62C63544));
                goto LABEL_1034;
            case 0x35E:
                v22 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x2E8) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x10) + 0x3F8i64);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x10) + 0x578i64) ^ v5;
                goto LABEL_1034;
            case 0x35F:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x678) + 0x190i64) ^ v11;
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x78) + FuckEnc::CacheRead<_DWORD>(v4 + 0x420) * v5;
                goto LABEL_1034;
            case 0x360:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x598);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x528);
                v22 ^= 0xD91856F5 * FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x298) + 0x688i64);
                goto LABEL_1034;
            case 0x361:
                v22 = v11 - 0x3CFECEBB * FuckEnc::CacheRead<_DWORD>(v4 + 0x2E8);
                v22 += ~FuckEnc::CacheRead<_DWORD>(v4 + 0x168);
                goto LABEL_1034;
            case 0x362:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x710);
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x540i64) - (FuckEnc::CacheRead<_DWORD>(v10 + 0x190) ^ 0xB9D04FB4) + 1;
                goto LABEL_1034;
            case 0x363:
                v22 = v11 ^ 0x9FD7569B;
                v12 = __ROR4__(v11 ^ 0x9FD7569B, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x320) + 0x1B0i64) + 8i64 * ((unsigned __int8)v5 ^ 0xDAu)) + 0x738i64) + 0x320i64) + 0x1A0i64));
                goto LABEL_1033;
            case 0x364:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 8i64 * ((unsigned __int8)(0x5D * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x10) + 0x578i64)) & 0xFA)) + 0x68i64) + 8i64 * (v5 & 0x1E)) + 0x10i64);
                v22 = FuckEnc::CacheRead<_DWORD>(v10 + 0x540) ^ v11;
                goto LABEL_1034;
            case 0x365:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x90) + 0x358i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 0x1F)) ^ v11;
                v12 = __ROL4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4E8) + 0x730i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 6)));
                goto LABEL_1033;
            case 0x366:
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 0x780i64) + 8i64 * (unsigned __int8)(0x93 * FuckEnc::CacheRead<_BYTE>(v4 + 0x30))) + 0xF8i64) + 4i64 * (~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x430) & 0x29)) ^ v11 ^ 0xC3113178;
                goto LABEL_1033;
            case 0x367:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xD0);
                v22 = v11 ^ (~FuckEnc::CacheRead<_DWORD>(v10 + 0x6B0) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) + (FuckEnc::CacheRead<_DWORD>(v4 + 0x640) >> 3)));
                goto LABEL_1034;
            case 0x368:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x6B0) + 1;
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x338) + 0x710i64) + 0x360i64) + 0x10i64) + 0x1A0i64);
                goto LABEL_1034;
            case 0x369:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 0x178i64) * ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x90) + 0x5D0i64) + 0x30i64);
                goto LABEL_1034;
            case 0x36A:
                v22 = ~(v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0));
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x468) + 0x598i64);
                v22 ^= v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x308);
                goto LABEL_1034;
            case 0x36B:
                v22 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x568)) ^ 0x18C2D9E7;
                v22 ^= v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x408) ^ (0xA31E1E03 * FuckEnc::CacheRead<_DWORD>(v4 + 0x698));
                goto LABEL_1034;
            case 0x36C:
                v22 = __ROR4__(v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x540), 0x28);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x5D0i64);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x550);
                goto LABEL_1034;
            case 0x36D:
                v22 = v11 + (~(v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x578) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x110) + 0x3F8i64)) | 2);
                goto LABEL_1034;
            case 0x36E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x158);
                v22 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 0x788) * ~((unsigned int)(0x5DD0FFEC * FuckEnc::CacheRead<_DWORD>(v4 + 0x420)) >> 1)) ^ 0x81546CA4;
                goto LABEL_1034;
            case 0x36F:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 0x630i64) + 0xA8i64) + 0xB0i64);
                Calls::FastCall(v4 + 0x2E0, &v22, v5, v10);
                goto LABEL_1034;
            case 0x370:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x320);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x468) + 0x490i64, &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8));
                goto LABEL_1034;
            case 0x371:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x260) + 8i64 * ((unsigned __int8)v5 & 0xB9)) + 0x2E8i64);
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 0x3F8i64) * v5);
                goto LABEL_1034;
            case 0x372:
                v22 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6F8) + 0x540i64) ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x220) + 0x6B0i64);
                goto LABEL_1034;
            case 0x373:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8);
                v22 = FuckEnc::CacheRead<_DWORD>(v10 + 0x6C0) ^ v11;
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 0x420i64);
                v22 = __ROR4__(v22, 0xE8 * FuckEnc::CacheRead<_BYTE>(v4 + 0x4F8));
                goto LABEL_1034;
            case 0x374:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) + 1;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xB0);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x4F0) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x190), 5)) + 0x578i64);
                goto LABEL_1034;
            case 0x375:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 8i64 * ((unsigned __int8)(0x57 * v5) & 0xB9)) + 0x430i64) ^ v11;
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x260) + 8i64 * (v5 & 0x7F)) + 0x178i64));
                goto LABEL_1034;
            case 0x376:
                v22 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x6C0) ^ ((FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8) ^ 0x37C31131) * (-FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) - 0x5C32BAE3)));
                goto LABEL_1034;
            case 0x377:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x630) + 0x478i64, &v22, v5, v4);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 0x2B0i64);
                goto LABEL_1034;
            case 0x378:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x150);
                Calls::FastCall(v10 + 0x720, &v22, v5, v4);
                v22 += 1 + FuckEnc::CacheRead<_DWORD>(v4 + 0x6C0);
                goto LABEL_1034;
            case 0x379:
                Calls::FastCall(v4 + 0x648, &v22, v5, v4);
                v22 ^= 0x20 * FuckEnc::CacheRead<_DWORD>(v4 + 0x168);
                goto LABEL_1034;
            case 0x37A:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x598);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x670);
                Calls::FastCall(v4 + 0x348, &v22, v5, v10);
                v22 += v5;
                goto LABEL_1034;
            case 0x37B:
                v22 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x780) + 8i64 * (unsigned __int8)(0x2B * v5)) + 0x258i64) + 0xD8i64) + 0x3B0i64));
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 0x58i64);
                goto LABEL_1034;
            case 0x37C:
                v22 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x2D8) * v5);
                v22 += 0x5E55D0D1 * ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x338) + 0x358i64) + 4i64 * (unsigned __int8)(0x6B * v5));
                goto LABEL_1034;
            case 0x37D:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x308);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 8i64 * (unsigned __int8)(0xF1 * v5)) + 0x1F0i64) + 0x778i64) + 0x4E8i64);
                v22 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x1A0);
                goto LABEL_1034;
            case 0x37E:
                Calls::FastCall(v4 + 0x538, &v22, v5, v4);
                v22 ^= v5 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8) >> 0x14);
                goto LABEL_1034;
            case 0x37F:
                v22 = v11 + ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x5E8i64) + 4i64 * (v5 & 0x15)) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4F0) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x58) ^ 0x4Eu)) + 0x190i64));
                goto LABEL_1034;
            case 0x380:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0xA8i64);
                Calls::FastCall(v4 + 0x248, &v22, v5, FuckEnc::CacheRead<_QWORD>(v10 + 0x4E8));
                goto LABEL_1034;
            case 0x381:
                Calls::FastCall(v4 + 0x3B8, &v22, v5, v4);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x28) + 8i64 * (unsigned __int8)(0x3D * v5)) + 0x598i64);
                goto LABEL_1034;
            case 0x382:
                v22 = __ROL4__(v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x220) + 0x698i64) + 0xDD0FFA1, 0xD8);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 0x488i64);
                v22 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x550);
                goto LABEL_1034;
            case 0x383:
                v22 = ~(_DWORD)v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4E8) + 8i64);
                v22 = ~(_DWORD)v11 ^ (0x56211895 * ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0xB0) + 0x168i64));
                goto LABEL_1034;
            case 0x384:
                v22 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x48) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x190) >> 8) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x698) + 0x15611DAA));
                goto LABEL_1034;
            case 0x385:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x568);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x488);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x618) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x308), 8)) ^ 0xDD74E27B;
                goto LABEL_1034;
            case 0x386:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x738);
                v22 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x268) ^ (FuckEnc::CacheRead<_DWORD>(v10 + 0x178) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4F0) + 8i64 * ((unsigned __int8)v5 ^ 0x4Cu)) + 0x168i64));
                goto LABEL_1034;
            case 0x387:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x178) ^ v11;
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x78) * v5;
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x90) + 0x3F8i64);
                goto LABEL_1034;
            case 0x388:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x578) ^ v11;
                v22 = __ROL4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x568i64));
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x530) + 0x618i64) + 4i64 * (v5 & 0x2E));
                goto LABEL_1034;
            case 0x389:
                v22 = ~(v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x120) << 6));
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x168);
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) & 0xFFFFFFFA;
                goto LABEL_1034;
            case 0x38A:
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4E8) + 0xD8i64) + 0x400i64) + 8i64 * ((unsigned __int8)v5 & 0xF8)) + 0x158i64) + 0x240i64) + 4i64 * ((0xF6 * FuckEnc::CacheRead<_BYTE>(v4 + 0x1C0)) & 0x1D)) ^ v11;
                goto LABEL_1033;
            case 0x38B:
                v22 = v11 - 0x79DFCFC9;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x110) + 0x158i64) + 0x220i64);
                v22 = __ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x730) + 4i64 * (v5 & 0x68)) ^ (v11 - 0x79DFCFC9), v5);
                goto LABEL_1034;
            case 0x38C:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0) + 8i64 * (v5 & 0x69)) + 0x430i64);
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x68) + 8i64 * (v5 & 0x68)) + 0x598i64));
                goto LABEL_1034;
            case 0x38D:
                v12 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x598) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x68) + 8i64 * (unsigned __int8)__ROR4__(v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x420), 1)) + 0x4A0i64) + 4i64 * ((unsigned __int8)v5 & 0xAB)));
                goto LABEL_1033;
            case 0x38E:
                Calls::FastCall(v4 + 0x348, &v22, v5, v4);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x268i64) ^ 0xC3018944;
                goto LABEL_1034;
            case 0x38F:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x4F8);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1D8);
                Calls::FastCall(v4 + 0x478, &v22, v5, v10);
                goto LABEL_1034;
            case 0x390:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2B8) + 8i64 * (v5 & 0x66)) + 0x140i64) + 8i64 * ((unsigned __int8)v5 & 0x89), &v22, v5, v4);
                goto LABEL_1034;
            case 0x391:
                v22 = (v11 + 0x77CC0569) ^ 0x50914F10;
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 0x2A0i64) + 0x4F8i64);
                goto LABEL_1034;
            case 0x392:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x1A0) + ~FuckEnc::CacheRead<_DWORD>(v4 + 0x550);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x90) + 0x10i64);
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_DWORD>(v10 + 0x568));
                goto LABEL_1034;
            case 0x393:
                v22 = (FuckEnc::CacheRead<_DWORD>(v4 + 0x2D8) ^ v11) + 0x6E9F2524;
                v22 = v22 - 0x79E20363 * FuckEnc::CacheRead<_DWORD>(v4 + 0x308) - FuckEnc::CacheRead<_DWORD>(v4 + 0x788);
                goto LABEL_1034;
            case 0x394:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x420);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x530) + 0x1B0i64) + 8i64 * (unsigned __int8)(0x88 * v5)) + 0x4B0i64) + 0x78i64);
                goto LABEL_1034;
            case 0x395:
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x630) + 0x118i64) + 8i64 * (unsigned __int8)(0x78 * FuckEnc::CacheRead<_BYTE>(v4 + 0x2B0))) + 0x598i64);
                goto LABEL_1033;
            case 0x396:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x578);
                v22 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x68) + 8i64 * ((unsigned __int8)(0xBF * v5) & 0xE9)) + 0x568i64) ^ v22) - 0x2610EF87;
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x120);
                goto LABEL_1034;
            case 0x397:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 0x308i64) ^ v11 ^ 0xFB3AAAE9;
                v22 = __ROR4__(v22, v5 ^ (FuckEnc::CacheRead<_BYTE>(v4 + 0x168) << 6));
                goto LABEL_1034;
            case 0x398:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1D8);
                Calls::FastCall(v10 + 0x708, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 0x1D8i64));
                goto LABEL_1034;
            case 0x399:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x120) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x718);
                v22 += v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x2A0) + 0x480i64) + 0x698i64);
                goto LABEL_1034;
            case 0x39A:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x368) + 0x5F8i64);
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v10 + 0x268) + FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x170) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x15)) + 0x2E8i64));
                goto LABEL_1034;
            case 0x39B:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x58) ^ v11;
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x420);
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x6C0) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x640i64);
                goto LABEL_1034;
            case 0x39C:
                v22 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x90) + 0x550i64) ^ v11) + v5;
                v22 += (FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8) + 1) << 0x16;
                goto LABEL_1034;
            case 0x39D:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x3B0) ^ v11;
                v12 = __ROL4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 0x90i64) + 0x548i64) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x190) ^ 0xBF) & 0xF9)) + 0x640i64));
                goto LABEL_1033;
            case 0x39E:
                v22 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x120) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5B0) + 0x20i64) ^ (0x6AC30131 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x368) + 0x3B0i64));
                goto LABEL_1034;
            case 0x39F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x338);
                v22 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0xF8) + 4i64 * (v5 & 0x64)) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 0x78i64));
                goto LABEL_1034;
            case 0x3A0:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x80) + 8i64 * (unsigned __int8)(0xCA * v5), &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x3A0));
                goto LABEL_1034;
            case 0x3A1:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x550);
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x58) + 1;
                v22 -= 0x2C41E1B0 * FuckEnc::CacheRead<_DWORD>(v4 + 0x568);
                goto LABEL_1034;
            case 0x3A2:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x400) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 0x178i64), 8)) + 0x220i64) + 0x530i64) + 0x718i64);
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 0x2E8));
                goto LABEL_1034;
            case 0x3A3:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 8);
                Calls::FastCall(v4 + 0x198, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2B8) + 8i64 * ((unsigned __int8)~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v10 + 0x1A0) & 0x84)));
                goto LABEL_1034;
            case 0x3A4:
                v22 = v11 ^ 0xC3018944;
                v22 = v11 ^ 0xC3018944 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 0x540i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x488) + 0x368i64) + 0x698i64));
                goto LABEL_1034;
            case 0x3A5:
                v22 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0x578i64));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 0xD8i64) + 0x6F8i64);
                v22 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x420) & 0xFFFFFFFD;
                goto LABEL_1034;
            case 0x3A6:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x360) + 0x3B0i64) & 0x4A)) + 0x620i64, &v22, v5, v4);
                goto LABEL_1034;
            case 0x3A7:
                v22 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0)) ^ 0xC3018944;
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x340) + 0x170i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0xF)) + 0x5F8i64) + 0x48i64) ^ v22;
                goto LABEL_1033;
            case 0x3A8:
                v22 = (v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x678) + 0x170i64) + 8i64 * ((unsigned __int8)v5 ^ 0xDEu)) + 0x260i64) + 8i64 * (unsigned __int8)(0x95 * v5)) + 0x688i64)) ^ 0x7DA1359E;
                goto LABEL_1034;
            case 0x3A9:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x630) + 0x568i64) ^ v11 ^ 0x733E3567;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5F8);
                v22 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x1A0);
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x420);
                goto LABEL_1034;
            case 0x3AA:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xD0);
                Calls::FastCall(v10 + 0x768, &v22, v5, v4);
                v22 -= 0x3D1C223B;
                goto LABEL_1034;
            case 0x3AB:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x90) + 0x400i64) + 8i64 * ((unsigned __int8)v5 & 0x81)) + 0x2A8i64, &v22, v5, v4);
                goto LABEL_1034;
            case 0x3AC:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x178i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8) + 0x450i64);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 0x598i64);
                goto LABEL_1034;
            case 0x3AD:
                v12 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x258) + 0x1B0i64) + 8i64 * (unsigned __int8)-FuckEnc::CacheRead<_BYTE>(v4 + 0x450)) + 0x4A8i64) + 0x4F0i64) + 8i64 * (v5 & 4)) + 0x3B0i64));
                goto LABEL_1033;
            case 0x3AE:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x2D8) ^ v11;
                v21 = FuckEnc::CacheRead<_QWORD>(v4 + 0x710);
                v10 = FuckEnc::CacheRead<_QWORD>(v21 + 0x90);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x2D8) ^ FuckEnc::CacheRead<_DWORD>(v21 + 0x120);
                goto LABEL_1034;
            case 0x3AF:
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x360) + 8i64) + 0x170i64) + 8i64 * ((unsigned __int8)v5 & 0xEF)) + 0xF8i64) + 4i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 0x450i64) & 0xFA)) ^ v11;
                goto LABEL_1033;
            case 0x3B0:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x530) + 0x6A8i64) + 8i64 * (unsigned __int8)(0x2B * v5), &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8));
                goto LABEL_1034;
            case 0x3B1:
                v22 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8) + 0x450i64) ^ (~FuckEnc::CacheRead<_DWORD>(v4 + 0x78) + ~FuckEnc::CacheRead<_DWORD>(v4 + 0x598)));
                goto LABEL_1034;
            case 0x3B2:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x568) ^ v11;
                v22 = (FuckEnc::CacheRead<_DWORD>(v4 + 0x450) ^ v22) + 0x672E00BF;
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 8i64 * (unsigned __int8)__ROR4__(v5, 5)) + 0x2E8i64) ^ v22;
                goto LABEL_1033;
            case 0x3B3:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x550) - 0x5510B78B * FuckEnc::CacheRead<_DWORD>(v4 + 0x58) + 0xFC30FD3;
                goto LABEL_1034;
            case 0x3B4:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4E8);
                v22 = v11 ^ (0x146EACC9 * FuckEnc::CacheRead<_DWORD>(v10 + 0x2D8) * FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8));
                v22 = __ROL4__(v22, FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0));
                goto LABEL_1034;
            case 0x3B5:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x2E8) - 0x2DDB47C3;
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 0x48i64);
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_BYTE>(v4 + 0x30) & 0xE1);
                goto LABEL_1034;
            case 0x3B6:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x640) ^ v11 ^ 0xD55B1695;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x158);
                v22 += FuckEnc::CacheRead<_DWORD>(v10 + 0x568);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x190) ^ 0x899A7414;
                goto LABEL_1034;
            case 0x3B7:
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8) + 8i64 * (unsigned __int8)(0xC0 * FuckEnc::CacheRead<_BYTE>(v4 + 0x168))) + 0x1F0i64) + 0xF8i64) + 4i64 * (unsigned __int8)(0xDC * v5)));
                v12 = v22 - FuckEnc::CacheRead<_DWORD>(v4 + 0x578);
                goto LABEL_1033;
            case 0x3B8:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x678) + 0x738i64);
                Calls::FastCall(v10 + 0x3F0, &v22, v5, v4);
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x48);
                goto LABEL_1034;
            case 0x3B9:
                v22 = ~(v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x58));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x338) + 0x6F8i64);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x2F8) + 8i64 * (unsigned __int8)(2 * v5)) + 0x168i64);
                goto LABEL_1034;
            case 0x3BA:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 0x5D0i64);
                v22 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x670) + 0x640i64) ^ ~FuckEnc::CacheRead<_DWORD>(v10 + 0x1C0);
                goto LABEL_1034;
            case 0x3BB:
                v22 = __ROR4__(v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x308), 0xB4);
                v22 += v5 ^ ~(0x9E1D22ED * FuckEnc::CacheRead<_DWORD>(v4 + 0x688));
                goto LABEL_1034;
            case 0x3BC:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x4F8);
                v22 -= (FuckEnc::CacheRead<_DWORD>(v4 + 0x698) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8) + 0x710i64) + 0x30i64)) ^ 0xD4F479FF;
                goto LABEL_1034;
            case 0x3BD:
                v22 = __ROL4__(v11, 0x39);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x320) + 0x5F8i64);
                Calls::FastCall(v10 + 0x620, &v22, v5, v4);
                goto LABEL_1034;
            case 0x3BE:
                v22 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x340) + 0x2B0i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x158);
                v22 += FuckEnc::CacheRead<_DWORD>(v10 + 0x4F8);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 0x1A0i64);
                goto LABEL_1034;
            case 0x3BF:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x718);
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x2F8) + 8i64 * ((unsigned __int8)(0xAC * v5) & 0xD1)) + 0x568i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x530) + 0x240i64) + 4i64 * (unsigned __int8)(0x4E * v5));
                goto LABEL_1034;
            case 0x3C0:
                v22 = v11 - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x360);
                v22 = v11 - v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x260) + 8i64 * (v5 & 0x2E)) + 0x2F8i64) + 8i64 * (unsigned __int8)(0x66 * v5)) + 0x168i64);
                goto LABEL_1034;
            case 0x3C1:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x360) + 0x1A0i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6F8);
                v22 += FuckEnc::CacheRead<_DWORD>(v10 + 0x120) + FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) + 1;
                goto LABEL_1034;
            case 0x3C2:
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x688) - 9);
                Calls::FastCall(v4 + 0x790, &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x488));
                goto LABEL_1034;
            case 0x3C3:
                v22 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x120) & 0xFFFFFFE7;
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x48) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A0) + 4i64 * (unsigned __int8)(0x63 * FuckEnc::CacheRead<_BYTE>(v4 + 0x788)));
                goto LABEL_1034;
            case 0x3C4:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8);
                Calls::FastCall(v10 + 0x248, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x158) + 0x368i64));
                goto LABEL_1034;
            case 0x3C5:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x458) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 0x640i64), 0xF), &v22, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x5F8));
                goto LABEL_1034;
            case 0x3C6:
                v22 = v11 + ~FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x488) + 0x480i64) + 0x640i64);
                goto LABEL_1034;
            case 0x3C7:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x48);
                v22 += (unsigned int)0x105474E0 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x2C0) ^ (0x8F355F1E * ~FuckEnc::CacheRead<_DWORD>(v4 + 0x420));
                goto LABEL_1034;
            case 0x3C8:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x220);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x288) + 8i64 * (unsigned __int8)(0xA2 * v5), &v22, v5, v4);
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x6C0);
                goto LABEL_1034;
            case 0x3C9:
                v22 = v11;
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8) + ~FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0);
                goto LABEL_1034;
            case 0x3CA:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x548) + 8i64 * (unsigned __int8)__ROR4__(v5, 5)) + 0x160i64, &v22, v5, v4);
                v22 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x58);
                goto LABEL_1034;
            case 0x3CB:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5B0) + 0x488i64) + 0x738i64) + 0x258i64) + 0x1F8i64) + 0x1D8i64) + 0x240i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 2));
                goto LABEL_1034;
            case 0x3CC:
                v22 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x638) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x640) & 0xC2)) + 0x598i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x780i64) + 8i64 * ((unsigned __int8)v5 & 0xF3)) + 0x2C0i64));
                goto LABEL_1034;
            case 0x3CD:
                v22 = v11 ^ 0x306D5579;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x738) + 0x220i64);
                v22 = (v11 ^ 0x306D5579) - FuckEnc::CacheRead<_DWORD>(v10 + 0x450);
                v22 = __ROL4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 0x578i64));
                goto LABEL_1034;
            case 0x3CE:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3E8);
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x190);
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x408);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x548) + 8i64 * ((unsigned __int8)v5 & 0xE6)) + 0x688i64);
                goto LABEL_1034;
            case 0x3CF:
                v12 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x2D8) + FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2B8) + 8i64 * ((unsigned __int8)v5 ^ 0xE5u)) + 0x638i64) + 8i64 * (v5 & 0x64)) + 0x168i64));
                goto LABEL_1033;
            case 0x3D0:
                Calls::FastCall(v4 + 0x720, &v22, v5, v4);
                v22 = __ROL4__(v22, 0x31);
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8) >> 0xA;
                goto LABEL_1034;
            case 0x3D1:
                v22 = v11 ^ 0xC30131DC;
                v22 = __ROR4__(v11 ^ 0xC30131DC, FuckEnc::CacheRead<_DWORD>(v4 + 0x120));
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x2D8);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0);
                v22 += FuckEnc::CacheRead<_DWORD>(v10 + 0x1A0);
                goto LABEL_1034;
            case 0x3D2:
                v22 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x568) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x120) << 0x1B);
                v22 = (FuckEnc::CacheRead<_DWORD>(v4 + 0x420) ^ v22) - v5;
                goto LABEL_1034;
            case 0x3D3:
                v22 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x430) ^ ((v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x598) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x6B0)) >> 0xB));
                goto LABEL_1034;
            case 0x3D4:
                v22 = __ROR4__(v11, 0xD2) + v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x158);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x400) + 8i64 * (~(_BYTE)v5 & 0xA)) + 0x468i64) + 0x268i64);
                goto LABEL_1034;
            case 0x3D5:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0x10i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x458) + 8i64 * ((unsigned __int8)(0xDC * v5) & 0xE7), &v22, v5, v4);
                v22 += 0x3FF6229;
                goto LABEL_1034;
            case 0x3D6:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x468);
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x408);
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 8i64 * ((unsigned __int8)(0xEB * v5) & 0xE7)) + 0x5C8i64) + 0x4D0i64) + 4i64 * ((0xF2 * (_BYTE)v5) & 0x1F));
                goto LABEL_1034;
            case 0x3D7:
                v22 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x640) ^ v5) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x190) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x90) + 0x688i64));
                goto LABEL_1034;
            case 0x3D8:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x150);
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8) + 0x4D0i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 0x1A)) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x178) + FuckEnc::CacheRead<_DWORD>(v10 + 0x688));
                goto LABEL_1032;
            case 0x3D9:
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 0x178i64));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3A8) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x6C0), 0x1A)) + 0x5D0i64) + 0x528i64);
                v22 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x190);
                goto LABEL_1034;
            case 0x3DA:
                v22 = v11 + v5;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x548) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x640) & 0x35)) + 0x780i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1E)) + 0x258i64);
                v22 = FuckEnc::CacheRead<_DWORD>(v10 + 0x430) ^ (v11 + v5);
                goto LABEL_1034;
            case 0x3DB:
                v16 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD8) + 0x90i64) + 0x588i64) + 8i64 * ((unsigned __int8)(0xC6 * v5) & 0x86));
            LABEL_360:
                Calls::FastCall(v16 + 0x130, &v22, v5, v4);
                goto LABEL_1034;
            case 0x3DC:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F8) + 0x220i64);
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x638) + 8i64 * (unsigned __int8)(0x9B * v5)) + 0x168i64) ^ v11;
                v12 = v22 - FuckEnc::CacheRead<_DWORD>(v4 + 0x430);
                goto LABEL_1033;
            case 0x3DD:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 0x408i64) ^ v11;
                v22 ^= (FuckEnc::CacheRead<_DWORD>(v4 + 0x20) << 0x1C) ^ 0x4BE51B2F;
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x408);
                goto LABEL_1034;
            case 0x3DE:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x740) + 0x690i64) + 8i64 * ((5 * (_BYTE)v5) & 0x31)) + 0x160i64, &v22, v5, v4);
                goto LABEL_1034;
            case 0x3DF:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B0) + 0xD8i64);
                v12 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x618) + 4i64 * (unsigned __int8)(0x1B * FuckEnc::CacheRead<_BYTE>(v10 + 0x2E8))) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x568) + 0x3C93DD47));
                goto LABEL_1033;
            case 0x3E0:
                v22 = v11 - 0x6E260CC8;
                v20 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4F0);
                v19 = __ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x640), 0x14);
            LABEL_641:
                Calls::FastCall(v4 + 0x130, &v22, v5, FuckEnc::CacheRead<_QWORD>(v20 + 8i64 * v19));
                goto LABEL_1034;
            case 0x3E1:
                Calls::FastCall(v4 + 0x608, &v22, v5, v4);
                v22 += 0x6680BFAC + (FuckEnc::CacheRead<_DWORD>(v4 + 0x788) & 0xFFFFFFF2);
                goto LABEL_1034;
            case 0x3E2:
                v22 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 0x678i64) + 0x30i64) ^ 0xC9CCB16C | 8);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x338);
                v22 += FuckEnc::CacheRead<_DWORD>(v10 + 0x190);
                goto LABEL_1034;
            case 0x3E3:
                v22 = ~__ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x308));
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x308i64) + 1;
                goto LABEL_1034;
            case 0x3E4:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1D8);
                Calls::FastCall(v10 + 0x490, &v22, v5, v4);
                v22 += FuckEnc::CacheRead<_DWORD>(v4 + 0x540);
                goto LABEL_1034;
            case 0x3E5:
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 0x2E8i64) ^ v11;
                v22 = ~(v22 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x258) + 0x388i64) + 4i64 * (unsigned __int8)v5));
                goto LABEL_1034;
            case 0x3E6:
                v22 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x6C0) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6F8) + 0x598i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6F8);
                v22 = (FuckEnc::CacheRead<_DWORD>(v10 + 0x578) ^ v22) - 0x5A85FCC0;
                goto LABEL_1034;
            case 0x3E7:
                v22 = v11 + 0x4F5A259F;
                v22 = (v11 + 0x4F5A259F) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x20) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x260) + 8i64 * (v5 & 0x7E)) + 0x58i64) ^ 0xF04480C7;
                goto LABEL_1034;
            case 0x3E8:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x488) + 0x348i64, &v22, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x220) + 0x5D0i64));
                goto LABEL_1034;
            case 0x3E9:
                v22 = FuckEnc::CacheRead<_DWORD>(v4 + 0x178) ^ v11;
                v22 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x738) + 0x268i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x10);
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x4A0) + 4i64 * (__ROR4__(v5, 0x18) & 0x64)));
                goto LABEL_1034;
            case 0x3EA:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4F0) + 8i64 * (unsigned __int8)(0x69 * v5)) + 0xD0i64) + 0x40i64) + 8i64 * (v5 & 0x48), &v22, v5, v4);
                goto LABEL_1034;
            case 0x3EB:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8) + 0xD0i64);
                Calls::FastCall(v4 + 0x330, &v22, v5, v10);
                v22 = __ROL4__(v22, v5) ^ 0x22C5C9A3;
                goto LABEL_1034;
            case 0x3EC:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x630) + 0x740i64) + 0x4A8i64) + 0x1F0i64);
                v22 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A0) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v10 + 0x640) & 0x81)) ^ v11;
                goto LABEL_1034;
            case 0x3ED:
                v22 = v5 ^ v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x6B0) | 0x1F) ^ 0x2F968C6F;
                v22 = __ROL4__(v22 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xB0) + 0x408i64), 0x4C);
                goto LABEL_1034;
            case 0x3EE:
                v22 = __ROR4__(v11, v5);
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) >> 0x1F;
                v22 += (FuckEnc::CacheRead<_DWORD>(v4 + 0x3B0) | 4) - 0x3CFECE08;
                goto LABEL_1034;
            case 0x3EF:
                v22 = ~(_DWORD)v11;
                v22 = ~(_DWORD)v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 0x530i64) + 0x298i64) + 0x788i64);
                v22 = __ROR4__(v22, FuckEnc::CacheRead<_DWORD>(v4 + 0x120));
                goto LABEL_1034;
            case 0x3F0:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x578) + ~FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x190) | 0x18) - 0x373CEECF;
                goto LABEL_1034;
            case 0x3F1:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x400) + 8i64 * ((unsigned __int8)v5 ^ 0xC1u)) + 0x48i64);
                v22 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x190), 0x11)) + 0x450i64);
                goto LABEL_1034;
            case 0x3F2:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x718);
                LODWORD(v11) = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x678) + 0x5E8i64) + 4i64 * (unsigned __int8)(0xBC * v5));
                v22 = v11;
                v13 = FuckEnc::CacheRead<_DWORD>(v4 + 0x688) >> 0x1A;
                goto LABEL_1032;
            case 0x3F3:
                v22 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8) + 0xA8i64) + 0x550i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F0) + 0x298i64) + 0x240i64) + 4i64 * (((unsigned __int8)v5 ^ 0x30) & 0xB6)));
                goto LABEL_1034;
            case 0x3F4:
                Calls::FastCall(v4 + 0x198, &v22, v5, v4);
                v22 = __ROL4__(v22, FuckEnc::CacheRead<_DWORD>(v4 + 0x688));
                v22 = __ROL4__(v22, FuckEnc::CacheRead<_DWORD>(v4 + 0x568));
                goto LABEL_1034;
            case 0x3F5:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x560) + 8i64 * ((0xFA * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x760) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x6B0), 0x16))) & 0x1E), &v22, v5, v4);
                goto LABEL_1034;
            case 0x3F6:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x678) + 0x2C0i64);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x260) + 8i64 * (unsigned __int8)__ROR4__(v5 + ~FuckEnc::CacheRead<_DWORD>(v4 + 0x640), 0x1C)) + 0x78i64) ^ v22;
                goto LABEL_1033;
            case 0x3F7:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2A0);
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x598) * FuckEnc::CacheRead<_DWORD>(v10 + 0x420) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x1A0) ^ 0x5CC30131);
                goto LABEL_1034;
            case 0x3F8:
                v22 = v11 ^ 0x85D183D5;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x170) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1C)) + 0x1D8i64) + 0x488i64);
                v22 = (v11 ^ 0x85D183D5) - 8 * FuckEnc::CacheRead<_DWORD>(v10 + 0x6E0);
                goto LABEL_1034;
            case 0x3F9:
                v22 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x690) + 8i64 * (unsigned __int8)(0x87 * v5)) + 0x688i64);
                v22 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x28) + 8i64 * (v5 & 6)) + 0x688i64);
                goto LABEL_1034;
            case 0x3FA:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 8i64 * (__ROR4__(v5, 0xB) & 0x2E)) + 0x320i64);
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x358) + 4i64 * (unsigned __int8)__ROR4__(v5, 0x1F));
                v22 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x568);
                goto LABEL_1034;
            case 0x3FB:
                v22 = (v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x308)) - 0x20728C2A;
                v22 = 0x3FC35DFC * FuckEnc::CacheRead<_DWORD>(v4 + 0x190) + v22 - 0x11B81A6C;
                goto LABEL_1034;
            case 0x3FC:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x548) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x268) & 0x30)) + 0xD8i64) + 0x4B0i64);
                Calls::FastCall(v4 + 0x798, &v22, v5, v10);
                goto LABEL_1034;
            case 0x3FD:
                v22 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x3B0));
                v12 = v22 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x258) + 0x78i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x778) + 0x540i64);
                goto LABEL_1033;
            case 0x3FE:
                Calls::FastCall(v4 + 0x4D8, &v22, v5, v4);
                v22 += ~(v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x308));
                goto LABEL_1034;
            case 0x3FF:
                v13 = FuckEnc::CacheRead<_DWORD>(v4 + 0x698) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x408) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x388i64) + 4i64 * ((unsigned __int8)v5 ^ 0x45u)));
            LABEL_1032:
                v12 = v11 - v13;
            LABEL_1033:
                v22 = v12;
            LABEL_1034:
                v6 += 4;
                *a2 = v22;
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
