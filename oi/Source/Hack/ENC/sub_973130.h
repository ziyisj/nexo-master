#pragma once

#include <Hack/FuckEnc.h>
#include <Hack/ENC/Calls.h>
#include <IDA/ida_defs.h>

void sub_973130(__int64 a1, unsigned int* a2, unsigned int a3, int a4)
{
    __int64 v4;       // rbx
    unsigned int v5;  // edi
    int v6;           // r13d
    __int64 v10;      // rsi
    __int64 v11;      // r9
    __int64 v12;      // rcx
    __int64 v13;      // rax
    int v14;          // r9d
    __int64 v15;      // r8
    __int64 v16;      // rax
    __int64 v17;      // r8
    unsigned int v18; // eax
    __int64 v19;      // r8
    __int64 v20;      // rax
    __int64 v21;      // rdx
    __int64 v22;      // rcx
    __int64 v23;      // rdx
    __int64 v24;      // r8
    __int64 v25;      // r9
    __int64 v26;      // r8
    __int64 v27;      // rax
    int v28;          // [rsp+60h] [rbp+40h] BYREF

    v4 = a1;
    v5 = a4 ^ 0x5EF26F4D;
    v6 = 0;
    v10 = a1;
    if (a3 > 3)
    {
        while (2)
        {
            v11 = (unsigned int)*a2;
            v28 = *a2;
            switch (((unsigned __int16)(a4 + v6) ^ 0xF8) & 0x3FF)
            {
            case 0:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8) + 0x6E0i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 0x5C0i64);
                v28 += FuckEnc::CacheRead<_DWORD>(v10 + 0x650) + 0x45C30131;
                goto LABEL_1035;
            case 1:
                v28 = v5 ^ v11;
                v28 = (v5 ^ v11) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x670) + 8i64 * ((unsigned __int8)v5 & 0x9A)) + 0x7A0i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x308) + 1);
                goto LABEL_1035;
            case 2:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x650);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x88) * FuckEnc::CacheRead<_DWORD>(v4 + 0x530) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 0x460i64);
                goto LABEL_1035;
            case 3:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x360) + 8i64 * (v5 & 0x28)) + 0x5A8i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x208);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x198) * v5;
                goto LABEL_1035;
            case 4:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x518);
                Calls::FastCall(v4 + 0x3D8, &v28, v5, v10);
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x508) & 0xFFFFFFF9;
                goto LABEL_1035;
            case 5:
                v28 = 0x22DA8A22 - v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0);
                Calls::FastCall(v4 + 0x4E8, &v28, v5, v10);
                goto LABEL_1035;
            case 6:
                v28 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x598)) ^ 0x9E9A0A36;
                Calls::FastCall(v4 + 0x730, &v28, v5, v4);
                goto LABEL_1035;
            case 7:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x5A8);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2D0);
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 8i64 * ((0xE6 * FuckEnc::CacheRead<_BYTE>(v10 + 0x1D0)) & 0x52)) + 0x678i64) ^ 0x3C7416CF;
                goto LABEL_1035;
            case 8:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x140) + 0x510i64);
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x158);
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x598) ^ 0xF1u)) + 0x678i64) ^ v28;
                goto LABEL_1034;
            case 9:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8) + 0x138i64) ^ v11 ^ 0xC3013107;
                LODWORD(v11) = v28 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x538) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x7A0), 0x18)) + 0x328i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 0x14));
                goto LABEL_1034;
            case 0xA:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x460) ^ v11;
                v28 ^= ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x130) ^ (0xD1FF4118 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x188) + 0x678i64)));
                goto LABEL_1035;
            case 0xB:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xB0);
                v28 ^= (FuckEnc::CacheRead<_DWORD>(v4 + 0x2E0) ^ ~FuckEnc::CacheRead<_DWORD>(v10 + 0x450)) & 0xFFFFFFE5;
                goto LABEL_1035;
            case 0xC:
                v28 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x658));
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x5A8) & 0x95)) + 0x568i64) + 0x1D0i64) + 1;
                goto LABEL_1035;
            case 0xD:
                Calls::FastCall(v4 + 0x258, &v28, v5, v4);
                v28 += 0xE1C5A24A - 0x261D1B8B * FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0);
                goto LABEL_1035;
            case 0xE:
                v28 = v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xC0) + 0x798i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x18) + 8i64 * (unsigned __int8)(0x75 * v5)) + 0x508i64);
                goto LABEL_1035;
            case 0xF:
                Calls::FastCall(v4 + 0x4E8, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x50) & 0xA7)) + 0x3E0i64) + 8i64 * ((unsigned __int8)v5 ^ 0xCDu)) + 0x498i64));
                goto LABEL_1035;
            case 0x10:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x650);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x708) + 0x728i64) + 0x560i64);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x418) + 0x6E0i64) + 1;
                goto LABEL_1035;
            case 0x11:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x338);
                v28 = (v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x280)) ^ 0x36C30131;
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x130) ^ v5;
                v28 = __ROL4__(v28, FuckEnc::CacheRead<_DWORD>(v4 + 0x280));
                goto LABEL_1035;
            case 0x12:
                Calls::FastCall(v4 + 0x4C8, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0));
                v28 += 1 + FuckEnc::CacheRead<_DWORD>(v4 + 0x678) * v5;
                goto LABEL_1035;
            case 0x13:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x460);
                LODWORD(v11) = v28 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 8i64 * (unsigned __int8)(0x1C * v5)) + 0x2D0i64) + 0x680i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 0xB)) + 0x3E8i64);
                goto LABEL_1034;
            case 0x14:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x508) ^ v11;
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x7A8) + 0x480i64) + 0x670i64) + 8i64 * ((unsigned __int8)v5 ^ 0x87u)) + 0x1E0i64) + 4i64 * ((unsigned __int8)v5 & 0xE7));
                goto LABEL_1035;
            case 0x15:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8) + 0x508i64);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 0x278i64);
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x598) | 7;
                goto LABEL_1035;
            case 0x16:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x728);
                v28 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x7A8) + 0x208i64) + 0x88i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0xD0) + 8i64 * (unsigned __int8)(0xD6 * v5)) + 0x138i64));
                goto LABEL_1035;
            case 0x17:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x350) + 0x700i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 0x1D));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x480);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x6D0) + 0x5B8i64) + 4i64 * (unsigned __int8)(0xF * v5));
                goto LABEL_1035;
            case 0x18:
                v28 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x130);
                Calls::FastCall(v4 + 0x3A0, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x1F8i64));
                goto LABEL_1035;
            case 0x19:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x680) + 8i64 * (v5 & 0x4A)) + 0x798i64) ^ v11 ^ 0xF7AAF9E1;
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x198);
                goto LABEL_1035;
            case 0x1A:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 8 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x5A8) & 0xEF ^ 0xF7i64)) + 8i64) + 8i64 * (v5 & 0x64)) + 0x650i64);
                goto LABEL_1035;
            case 0x1B:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x428);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x488) + 0x388i64, &v28, v5, v4);
                v28 ^= 0xD1FF41F3;
                goto LABEL_1035;
            case 0x1C:
                v28 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 8i64 * (v5 & 0x78)) + 0xB0i64) + 0x1E8i64) + 0x130i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x660);
                v28 += FuckEnc::CacheRead<_DWORD>(v10 + 0x650);
                goto LABEL_1035;
            case 0x1D:
                v28 = v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 8i64 * (unsigned __int8)__ROL4__(~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x568) + 0x3E8i64), 0x12)) + 0x138i64);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x650);
                goto LABEL_1035;
            case 0x1E:
                v28 = v11 + ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x3E8) >> 8);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0);
                goto LABEL_1035;
            case 0x1F:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x1D0) ^ v11;
                Calls::FastCall(v4 + 0x760, &v28, v5, v4);
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x1D0);
                goto LABEL_1035;
            case 0x20:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 8i64 * ((unsigned __int8)__ROR4__(v5, 7) & 0xD8)) + 0x3D0i64) + 0x188i64) + 0x5D0i64);
                LODWORD(v11) = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x4A8) + 8i64 * (unsigned __int8)v5) + 0x798i64);
                goto LABEL_1034;
            case 0x21:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D0) + 0x50i64) ^ v11;
                v28 = v28 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x130) >> 0x1A) - FuckEnc::CacheRead<_DWORD>(v4 + 0x678);
                goto LABEL_1035;
            case 0x22:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x798) ^ v11;
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x98i64) + 4i64 * (unsigned __int8)(0x87 * v5));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x7A8);
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(v10 + 0x450) ^ v28;
                goto LABEL_1034;
            case 0x23:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x48);
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x78);
                Calls::FastCall(v4 + 0x290, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x418));
                goto LABEL_1035;
            case 0x24:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x7A8) + 0x10i64);
                v28 = ~__ROL4__(v28, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3F0) + 8i64 * ((unsigned __int8)__ROR4__(v5, 0xF) & 0x91)) + 0x6D0i64) + 0x7A0i64));
                goto LABEL_1035;
            case 0x25:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5E0) + 0x1B0i64) + 0x1F8i64);
                LODWORD(v11) = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x150) + 8i64 * ((unsigned __int8)(FuckEnc::CacheRead<_BYTE>(v4 + 0x5A8) * v5) ^ 0xD4u)) + 0x3C0i64);
                goto LABEL_1034;
            case 0x26:
                v28 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x6F0) ^ ((unsigned int)~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x728) + 0x3C8i64) >> 7) ^ 0x7189BE10);
                goto LABEL_1035;
            case 0x27:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x360) + 8i64 * (((unsigned __int8)v5 ^ 0xCF) & 0xB5)) + 0x5E0i64) + 0x670i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0xD)) + 0x198i64) ^ v11;
                LODWORD(v11) = v28 - FuckEnc::CacheRead<_DWORD>(v4 + 0x598);
                goto LABEL_1034;
            case 0x28:
                LODWORD(v11) = (v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x598)) ^ 0x97C31131;
                v28 = v11;
                v12 = (unsigned __int8)(0xA7 * v5);
                v13 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x88) & 0x13)) + 0x2C8i64);
                goto LABEL_1033;
            case 0x29:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x508) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5E0) + 0x478i64) + 0x628i64, &v28, v5, v4);
                goto LABEL_1035;
            case 0x2A:
                LODWORD(v11) = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(v4 + 0x528) + 8i64) + 8i64 * ((unsigned __int8)v5 & 0xF2)) + 0x48i64) + 0x568i64) + 0x570i64);
                goto LABEL_1034;
            case 0x2B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0);
                v28 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x78) ^ FuckEnc::CacheRead<_DWORD>(v10 + 0x570) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x568) + 0x570i64));
                goto LABEL_1035;
            case 0x2C:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x530);
                v28 ^= (0xC8CE8172 * FuckEnc::CacheRead<_DWORD>(v4 + 0x3C0)) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x510) >> 6) & 0x3FFFFE5;
                goto LABEL_1035;
            case 0x2D:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8) + 8i64 * ((unsigned __int8)(0xB * FuckEnc::CacheRead<_BYTE>(v4 + 0x1D0)) & 0x9E)) + 0x6B8i64);
                v28 -= (FuckEnc::CacheRead<_DWORD>(v4 + 0x598) & 0xFFFFFFF2) << 7;
                goto LABEL_1035;
            case 0x2E:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 8i64 * (unsigned __int8)__ROR4__(~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 0x318i64), 0x15)) + 0x5F0i64) + 8i64 * ((0xE6 * (_BYTE)v5) & 0x30)) + 0x650i64) ^ v11;
                goto LABEL_1035;
            case 0x2F:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x308);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x88) ^ 0xC69C8DBC;
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x658);
                goto LABEL_1035;
            case 0x30:
                v28 = ~(v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x5A8));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6A8);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x530);
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x88) ^ 0x44C30131;
                goto LABEL_1035;
            case 0x31:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5E0) + 0x708i64) + 0x150i64) + 8i64 * ((unsigned __int8)__ROR4__(v5, 0x1D) & 0xE1)) + 0x298i64) + 8i64 * ((unsigned __int8)(8 * v5) & 0x8B)) + 0x2D8i64);
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(v10 + 0x158) ^ v11;
                goto LABEL_1034;
            case 0x32:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x78);
                Calls::FastCall(v4 + 0x5A0, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x660));
                goto LABEL_1035;
            case 0x33:
                Calls::FastCall(v4 + 0x310, &v28, v5, v4);
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x598) & 0x9A)) + 0x7A0i64);
                goto LABEL_1035;
            case 0x34:
                v28 = __ROL4__(v11, ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x658));
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x680) + 8i64 * ((unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x420) + 0x658i64), 0x17) & 0xB4)) + 0x6F0i64);
                goto LABEL_1035;
            case 0x35:
                Calls::FastCall(v4 + 0x628, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x738) + 8i64 * (unsigned __int8)__ROR4__(v5, 3)));
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) & 0xFFFFFFE0;
                goto LABEL_1035;
            case 0x36:
                LODWORD(v11) = v11 - (FuckEnc::CacheRead<unsigned __int8>(FuckEnc::CacheRead<_QWORD>(v4 + 0x208) + 0x13i64) ^ ((unsigned int)(FuckEnc::CacheRead<_DWORD>(v4 + 0x598) + 0x7241266C) >> 0x18) ^ 0x906FCC27);
                goto LABEL_1034;
            case 0x37:
                v28 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x308) | 0x1D);
                Calls::FastCall(v4 + 0x618, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 0xC0i64));
                goto LABEL_1035;
            case 0x38:
                v28 = v11 + 0x3FBA2F55;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x660);
                v28 = (v11 + 0x3FBA2F55) ^ FuckEnc::CacheRead<_DWORD>(v10 + 0x308) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x160) + 8i64 * (unsigned __int8)(0xA6 * FuckEnc::CacheRead<_BYTE>(v4 + 0x10))) + 0x78i64);
                goto LABEL_1035;
            case 0x39:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x510);
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x700) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) & 0xD1));
                v28 ^= ~FuckEnc::CacheRead<_DWORD>(v4 + 0x508);
                goto LABEL_1035;
            case 0x3A:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x428) ^ v11 ^ 0x7BD540BC;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x288);
                Calls::FastCall(v4 + 0x4D0, &v28, v5, v10);
                goto LABEL_1035;
            case 0x3B:
                v28 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x450));
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x280);
                v28 += 0x760F0080 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x50) & 0xFFFFFFE4);
                goto LABEL_1035;
            case 0x3C:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x508) ^ v11;
                LODWORD(v11) = v28 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x518) + 0x670i64) + 8i64 * ((unsigned __int8)v5 ^ 8u)) + 0x3E8i64) * v5;
                goto LABEL_1034;
            case 0x3D:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5E0) + 0x350i64) + 0x798i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x5D0i64);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x508);
                goto LABEL_1035;
            case 0x3E:
                v28 = v11 - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x560);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8) + 0x4E0i64, &v28, v5, v10);
                goto LABEL_1035;
            case 0x3F:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0) + 0x18i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 7)) + 0x280i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5E0);
                v28 += FuckEnc::CacheRead<_DWORD>(v10 + 0x308);
                goto LABEL_1035;
            case 0x40:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 0x6D0i64);
                v28 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x530) + (FuckEnc::CacheRead<_DWORD>(v10 + 0x10) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x278)) + 0x4B71F62F);
                goto LABEL_1035;
            case 0x41:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x678) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x478) + 0x440i64) + 0x718i64) + 0x5C8i64);
                v28 = __ROL4__(v28, FuckEnc::CacheRead<_DWORD>(v10 + 0x650));
                goto LABEL_1035;
            case 0x42:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x78);
                v28 = __ROL4__(v28, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 8i64 * (unsigned __int8)(0xA7 * v5)) + 0x308i64) ^ (v5 + FuckEnc::CacheRead<_BYTE>(v4 + 0x658)));
                goto LABEL_1035;
            case 0x43:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x3E8);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2D0);
                v28 += FuckEnc::CacheRead<_DWORD>(v10 + 0x798);
                v28 ^= ((unsigned int)0x5DE33AC + 2) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x308);
                goto LABEL_1035;
            case 0x44:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x5A8) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x188) + 0x2D0i64);
                v28 += FuckEnc::CacheRead<_DWORD>(v10 + 0x308) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x708) + 0x2E0i64);
                goto LABEL_1035;
            case 0x45:
                v28 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x198) << 0x11);
                Calls::FastCall(v4 + 0x290, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x7A8));
                goto LABEL_1035;
            case 0x46:
                v28 = v5 ^ (v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x658) ^ v5));
                v28 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8) + 0x708i64) + 0x798i64);
                goto LABEL_1035;
            case 0x47:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x350) + 0xA0i64) + 0x190i64) + 0x460i64);
                v28 ^= 0xC1C30131 * FuckEnc::CacheRead<_DWORD>(v4 + 0x3C8);
                goto LABEL_1035;
            case 0x48:
                v28 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x5A8));
                v28 = ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x598) ^ v28);
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x88) + 1;
                goto LABEL_1035;
            case 0x49:
                v28 = (v5 ^ v11) - 0x1B508A3C;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x478) + 0x498i64);
                v28 = (v28 - (FuckEnc::CacheRead<_DWORD>(v10 + 0x3C0) ^ v5)) ^ 0xC3013161;
                goto LABEL_1035;
            case 0x4A:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x198) ^ v11;
                LODWORD(v11) = v28 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x68) + 0x5D0i64) + 0x2C8i64) + 4i64 * ((unsigned __int8)__ROR4__(v5, 0x1E) & 0xCF)) - FuckEnc::CacheRead<_DWORD>(v4 + 0x7A0);
                goto LABEL_1034;
            case 0x4B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8);
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x2A8) + 8i64 * (unsigned __int8)(6 * v5)) + 0x1C0i64) ^ v11;
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 8i64 * ((unsigned __int8)(0xD9 * FuckEnc::CacheRead<_BYTE>(v4 + 0x3C0)) & 0x99)) + 0x10i64) ^ v28;
                goto LABEL_1034;
            case 0x4C:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA0) + 0x680i64) + 8i64 * (((unsigned __int8)v5 ^ 0x25) & 0x75)) + 0x6B8i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x330);
                LODWORD(v11) = __ROL4__(v28, FuckEnc::CacheRead<_DWORD>(v10 + 0x530));
                goto LABEL_1034;
            case 0x4D:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8) + 0x5C0i64) + 0x5E0i64);
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x3C8) * FuckEnc::CacheRead<_DWORD>(v10 + 0x428) * FuckEnc::CacheRead<_DWORD>(v4 + 0x5A8);
                goto LABEL_1035;
            case 0x4E:
                v28 = v11 - 0x4EA00C74;
                v28 = v11 - 0x4EA00C74 + -FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x478) + 0x410i64) + 4i64 * ((unsigned __int8)v5 & 0xC1)) - 0x2E00BE2E;
                goto LABEL_1035;
            case 0x4F:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x478) + 0x418i64);
                v28 = __ROL4__(v11, v5 + FuckEnc::CacheRead<_BYTE>(v10 + 0x1D0) * (FuckEnc::CacheRead<_BYTE>(v4 + 0x88) - 0x5C));
                goto LABEL_1035;
            case 0x50:
                Calls::FastCall(v4 + 0x5A0, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8) + 0x710i64) + 0x3F0i64) + 8i64 * ((0xDE * (_BYTE)v5) & 0x47)));
                goto LABEL_1035;
            case 0x51:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 0x660i64) + 0xB0i64);
                LODWORD(v11) = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x680) + 8i64 * (unsigned __int8)(0xB9 * FuckEnc::CacheRead<_BYTE>(v10 + 0x138))) + 0x1C0i64);
                goto LABEL_1034;
            case 0x52:
                v28 = (FuckEnc::CacheRead<_DWORD>(v4 + 0x2E0) ^ v11) + 0x579AED6B;
                Calls::FastCall(v4 + 0x630, &v28, v5, v4);
                v28 ^= 0x16E95DC4u;
                goto LABEL_1035;
            case 0x53:
                Calls::FastCall(v4 + 0x618, &v28, v5, v4);
                v28 ^= (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x450)) << 7;
                goto LABEL_1035;
            case 0x54:
                v28 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x3C8) * v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 0x2A8i64) + 8i64 * (v5 & 0x20)) + 0x2C8i64) + 4i64 * ((unsigned __int8)__ROR4__(v5, 4) & 0x8C)));
                goto LABEL_1035;
            case 0x55:
                v28 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x518) + 0x10i64) ^ v11) - 0x642F0252;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xB0) + 0x488i64);
                v28 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x50) & 0xFFFFFFE4;
                goto LABEL_1035;
            case 0x56:
                v28 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 0x508i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 0xA8i64) + 0x418i64) + 0x138i64));
                goto LABEL_1035;
            case 0x57:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x570);
                v28 += (unsigned int)(FuckEnc::CacheRead<_DWORD>(v4 + 0x1D0) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA0) + 0x140i64) + 0x280i64)) >> 0xC;
                goto LABEL_1035;
            case 0x58:
                v28 = ~(v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x1D0) * ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1E0) + 4i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x208) + 0x510i64) & 0x4D)));
                goto LABEL_1035;
            case 0x59:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x428) ^ v11;
                Calls::FastCall(v4 + 0x770, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3F0) + 8i64 * (((unsigned __int8)v5 ^ 1) & 0x81)));
                goto LABEL_1035;
            case 0x5A:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x3C8);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x738) + 8i64 * (__ROL4__(v5, 0x1D) & 0x4B)) + 0x290i64, &v28, v5, v4);
                goto LABEL_1035;
            case 0x5B:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2A8) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1E)) + 0x2A8i64) + 8i64 * ((unsigned __int8)v5 & 0xB7)) + 0x3E0i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x18)) + 0x208i64);
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x3E8);
                goto LABEL_1035;
            case 0x5C:
                Calls::FastCall(v4 + 0x238, &v28, v5, v4);
                v28 = __ROL4__(v28, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x6F0i64) ^ v5);
                goto LABEL_1035;
            case 0x5D:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x680) + 8i64 * (unsigned __int8)(0x99 * v5)) + 0x330i64) + 0x708i64);
                Calls::FastCall(v10 + 0x248, &v28, v5, v4);
                goto LABEL_1035;
            case 0x5E:
                LODWORD(v11) = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x198);
                v28 = v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x7A8) + 0x4A8i64) + 8i64 * (__ROL4__(v5, 0x15) & 1)) + 0x1F0i64);
                v12 = (unsigned __int8)v5 ^ 0xF0u;
                v13 = FuckEnc::CacheRead<_QWORD>(v10 + 0x470);
                goto LABEL_1033;
            case 0x5F:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x280) + v11;
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 8i64 * (((unsigned __int8)v5 ^ 0xA7) & 0xF8)) + 0x3F0i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1C)) + 0x6A0i64) + 4i64 * (((unsigned __int8)v5 ^ 0xF) & 0x3F)) ^ v28;
                goto LABEL_1034;
            case 0x60:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x340);
                Calls::FastCall(v10 + 0x398, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x670) + 8i64 * (((unsigned __int8)v5 ^ 0xDB) & 0xB4)));
                goto LABEL_1035;
            case 0x61:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5E0);
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x508);
                v28 ^= v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x318);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x3C0) * v5;
                goto LABEL_1035;
            case 0x62:
                Calls::FastCall(v4 + 0x108, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x560) + 0x5D0i64) + 0x718i64) + 0x738i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 4)));
                goto LABEL_1035;
            case 0x63:
                v28 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5E0) + 0x3E0i64) + 8i64 * ((unsigned __int8)__ROL4__(v5, 0xA) & 0xD4)) + 0xB0i64) + 0x598i64));
                LODWORD(v11) = v28 - FuckEnc::CacheRead<_DWORD>(v4 + 0x798);
                goto LABEL_1034;
            case 0x64:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x50) ^ v11;
                Calls::FastCall(v4 + 0x80, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x7A8) + 0x6A8i64));
                goto LABEL_1035;
            case 0x65:
                v28 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8) + 0x2C8i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 0x13)) ^ (v5 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x530) >> 0xC));
                goto LABEL_1035;
            case 0x66:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x7A0);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8) + 0x338i64) + 0x6D0i64) + 0x188i64);
                v28 += ~FuckEnc::CacheRead<_DWORD>(v10 + 0x530);
                goto LABEL_1035;
            case 0x67:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x460) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x418) + 0x660i64);
                v28 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x428);
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x2E0);
                goto LABEL_1035;
            case 0x68:
                v28 = v11 + 0x5F9CB480;
                v28 = v11 + 0x5F9CB480 + (((unsigned int)0xD9F9457 + 2) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x798) + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x330) + 0x318i64) ^ v5)));
                goto LABEL_1035;
            case 0x69:
                v28 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x428) - 0x5C02DE29);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 0x330i64) + 0x5C0i64) + 0x78i64);
                goto LABEL_1035;
            case 0x6A:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x10);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x48);
                Calls::FastCall(v4 + 0x5A0, &v28, v5, v10);
                goto LABEL_1035;
            case 0x6B:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x1D0) + 0x242E00BF;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D0) + 0x6A8i64) + 0x188i64);
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x38) + 4i64 * (unsigned __int8)(0x57 * v5));
                goto LABEL_1035;
            case 0x6C:
                v28 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x10) ^ v5);
                v28 ^= ~(v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 0x68i64) + 0x2A0i64));
                goto LABEL_1035;
            case 0x6D:
                LODWORD(v11) = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x360) + 8i64 * ((unsigned __int8)v5 ^ 0xF6u)) + 0x518i64) + 0x360i64) + 8i64 * (((unsigned __int8)v5 ^ 0x18) & 0xDC)) + 0x450i64) + 0x3CFE76BB;
                goto LABEL_1034;
            case 0x6E:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x18i64) + 8i64 * (v5 & 0x46)) + 0x6F0i64);
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x428) ^ v5;
                goto LABEL_1035;
            case 0x6F:
                v28 = v11 + 0x428A2509 - FuckEnc::CacheRead<_DWORD>(v4 + 0x428);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x560);
                v28 += FuckEnc::CacheRead<_DWORD>(v10 + 0x428) + 1;
                goto LABEL_1035;
            case 0x70:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x6B8);
                v28 = ~(v28 + FuckEnc::CacheRead<_DWORD>(v4 + 0x530) + 1);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x280i64);
                goto LABEL_1035;
            case 0x71:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x190);
                v28 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x308) ^ (~FuckEnc::CacheRead<_DWORD>(v4 + 0x460) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x588) + 0x10i64)));
                goto LABEL_1035;
            case 0x72:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x650);
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x658) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x40) + 0x6A0i64) + 4i64 * (v5 & 0x3D));
                goto LABEL_1035;
            case 0x73:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2A8) + 8i64 * (unsigned __int8)-(char)v5) + 0x430i64) + 8i64 * (unsigned __int8)(0x22 * v5), &v28, v5, v4);
                goto LABEL_1035;
            case 0x74:
                v28 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) ^ v5);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0) + 0x2A8i64) + 8i64 * (unsigned __int8)(0xD * v5)) + 0x190i64) + 0x7A0i64);
                goto LABEL_1035;
            case 0x75:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 8i64 * ((0xF2 * (_BYTE)v5) & 0x31)) + 0x18i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 1)) + 0x708i64) + 0x1B0i64);
                LODWORD(v11) = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x2A0);
                goto LABEL_1034;
            case 0x76:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0x188i64);
                v12 = (unsigned __int8)(0xE1 * v5);
                v13 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x48) + 0x4A8i64) + 8i64 * (__ROR4__(v5, 1) & 0x4C)) + 0x98i64);
                goto LABEL_1033;
            case 0x77:
                Calls::FastCall(v4 + 0x248, &v28, v5, v4);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x538) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1D)) + 0x158i64);
                goto LABEL_1035;
            case 0x78:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x198);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0) + 0x538i64) + 8i64 * (v5 & 0x16)) + 0x498i64);
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(v10 + 0x278) ^ v28;
                goto LABEL_1034;
            case 0x79:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 0x548i64) + 8i64 * (unsigned __int8)(0x79 * v5), &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x190));
                goto LABEL_1035;
            case 0x7A:
                v28 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x598));
                v28 = __ROR4__(v28, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2C8) + 4i64 * (unsigned __int8)(0xA7 * FuckEnc::CacheRead<_BYTE>(v4 + 0x6B8))) - 0x35);
                goto LABEL_1035;
            case 0x7B:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x598);
                Calls::FastCall(v4 + 0xF0, &v28, v5, v4);
                v28 = __ROL4__(v28, FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0));
                goto LABEL_1035;
            case 0x7C:
                v28 = v11 + 0x52472772 * FuckEnc::CacheRead<_DWORD>(v4 + 0x428);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xC0) + 0x478i64);
                v28 += FuckEnc::CacheRead<_DWORD>(v10 + 0x88);
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x280);
                goto LABEL_1035;
            case 0x7D:
                v28 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8) + 0x188i64) + 0x2E0i64) ^ v11) - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x588);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x2C8) + 4i64 * ((unsigned __int8)v5 & 0xD3));
                goto LABEL_1035;
            case 0x7E:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x518) + 0x5E0i64) + 0x3D8i64, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8));
                goto LABEL_1035;
            case 0x7F:
                v14 = FuckEnc::CacheRead<_DWORD>(v4 + 0x2E0) ^ v11;
                v28 = v14 + 0x7998BE6F;
                v28 = 0x11F404B8 * ((0x50C05A01 * FuckEnc::CacheRead<_DWORD>(v4 + 0x50)) & 0xFFFFFFEC) + v14 + 0x7E17C666;
                goto LABEL_1035;
            case 0x80:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x6B8) ^ v11;
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xB0) + 0x700i64) + 4i64 * (((unsigned __int8)v5 ^ 0xE3) & 0x5C));
                LODWORD(v11) = v28 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8) + 0x508i64);
                goto LABEL_1034;
            case 0x81:
                v28 = __ROR4__(v11, v5);
                v28 = v28 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x478) + 0x40i64) + 0x138i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 0x798i64);
                goto LABEL_1035;
            case 0x82:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x188);
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x130) * v5;
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x278) + 1;
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x798);
                goto LABEL_1035;
            case 0x83:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x280) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xA0);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x140) + 0x520i64, &v28, v5, v10);
                goto LABEL_1035;
            case 0x84:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x318);
                v28 = ~__ROR4__(v28, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6A0) + 4i64 * (((FuckEnc::CacheRead<_BYTE>(v4 + 0x570) ^ (unsigned __int8)v5) + 2) & 0xB)));
                goto LABEL_1035;
            case 0x85:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x570) ^ 0xC) & 0x2D)) + 0x3C8i64);
                v28 = __ROR4__(v28, FuckEnc::CacheRead<_BYTE>(v4 + 0x5A8) ^ 0xE2);
                goto LABEL_1035;
            case 0x86:
                v28 = v11 + ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x78) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x420) + 0x3C8i64));
                v28 = __ROL4__(v28, v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x5A8));
                goto LABEL_1035;
            case 0x87:
                v28 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x530) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0) + 0x98i64) + 4i64 * ((unsigned __int8)__ROR4__(v5, 2) & 0xD5));
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x350) + 0x3C8i64);
                goto LABEL_1035;
            case 0x88:
                v28 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x6B8) * v5);
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x78) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xB0) + 0x2C8i64) + 4i64 * (v5 & 0x3B));
                goto LABEL_1035;
            case 0x89:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 8i64 * (unsigned __int8)__ROL4__(v5, 0xC)) + 0x338i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x400) + 8i64 * (unsigned __int8)__ROR4__(v5, 8), &v28, v5, v4);
                goto LABEL_1035;
            case 0x8A:
                v28 = v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x318) ^ v11;
                v28 ^= v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x318) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x350) + 0x5A8i64);
                goto LABEL_1035;
            case 0x8B:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0);
                v28 += FuckEnc::CacheRead<_DWORD>(v10 + 0x460);
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x7A0);
                goto LABEL_1035;
            case 0x8C:
                v28 = __ROR4__(v11, v5);
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x3E8) >> 0x1A;
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 0x158i64) * v5;
                goto LABEL_1035;
            case 0x8D:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8) + 0xC0i64) + 0x48i64) + 0x440i64) + 0x728i64);
                v28 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v10 + 0x798);
                goto LABEL_1035;
            case 0x8E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x350);
                v28 = ~(v11 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x3E0) + 8i64 * ((unsigned __int8)v5 & 0x8F)) + 0x3E0i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 5)) + 0x508i64));
                goto LABEL_1035;
            case 0x8F:
                v28 = v11 + 0x7FE1F928;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xA8);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x140) + 0x258i64, &v28, v5, v4);
                goto LABEL_1035;
            case 0x90:
                Calls::FastCall(v4 + 0x628, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x350i64) + 0x478i64) + 0x440i64));
                goto LABEL_1035;
            case 0x91:
                v28 = ~(_DWORD)v11;
                LODWORD(v11) = ~(_DWORD)v11 - ((FuckEnc::CacheRead<_DWORD>(v4 + 0x278) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6A8) + 0x6A0i64) + 4i64 * (unsigned __int8)(0xE0 * v5))) & 0xFFFFFFEE);
                goto LABEL_1034;
            case 0x92:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x460) ^ v11;
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x6F0);
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x488) + 0x660i64) + 0x6A0i64) + 4i64 * ((0x1E * (_BYTE)v5) & 0x7A)) ^ v28;
                goto LABEL_1034;
            case 0x93:
                LODWORD(v11) = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D0) + 8i64) + 8i64 * (unsigned __int8)(0xC * v5)) + 0xD0i64) + 8i64 * (unsigned __int8)(0xD5 * v5)) + 0x660i64) + 0x650i64);
                goto LABEL_1034;
            case 0x94:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x450);
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8) + 8i64 * (v5 & 1)) + 0x3D0i64) + 0x138i64);
                v28 = __ROR4__(v28, FuckEnc::CacheRead<_DWORD>(v4 + 0x78));
                goto LABEL_1035;
            case 0x95:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x308) ^ v11;
                v28 += 8 * FuckEnc::CacheRead<_DWORD>(v4 + 0x650);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x68);
                v28 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x88);
                goto LABEL_1035;
            case 0x96:
                v28 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x428) ^ 0x41);
                v28 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x18) + 8i64 * (unsigned __int8)(0xA9 * v5)) + 0x1E0i64) + 4i64 * (unsigned __int8)(9 * v5));
                goto LABEL_1035;
            case 0x97:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x728) + 0x778i64, &v28, v5, v4);
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x158);
                goto LABEL_1035;
            case 0x98:
                v28 = v11 ^ (0xFBBE6BD4 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x650) * v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x140) + 0x708i64) + 0x5D0i64) + 0x130i64)));
                goto LABEL_1035;
            case 0x99:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x530);
                v28 += 0x484C5B41 * FuckEnc::CacheRead<_DWORD>(v4 + 0x308);
                v28 = __ROL4__(v28, ~FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x288) + 0x10i64));
                goto LABEL_1035;
            case 0x9A:
                v28 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0) + 0x3C8i64) ^ ~(0x10 * FuckEnc::CacheRead<_BYTE>(v4 + 0x10))) + 0x6EC99372;
                goto LABEL_1035;
            case 0x9B:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x728) + 0x48i64) + 0x728i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x690) + 8i64 * (((unsigned __int8)v5 ^ 0xEE) & 0xD1), &v28, v5, v4);
                goto LABEL_1035;
            case 0x9C:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x660);
                v28 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 8i64 * (unsigned __int8)(0xA1 * v5)) + 0x650i64) - 0x44F0664E + FuckEnc::CacheRead<_DWORD>(v10 + 0x50));
                goto LABEL_1035;
            case 0x9D:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x518) + 0x728i64);
                Calls::FastCall(v4 + 0x4D8, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x160) + 8i64 * ((unsigned __int8)v5 ^ 0xE8u)));
                v28 = ~v28;
                goto LABEL_1035;
            case 0x9E:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D0) + 0x450i64) ^ v11;
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0);
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x17)) + 0x6E0i64) ^ v28;
                goto LABEL_1034;
            case 0x9F:
                v28 = v11 ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x650) + 0x738DDBFF);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 0x5C0i64) + 0x410i64) + 4i64 * ((0x21 * (_BYTE)v5) & 0x5F));
                goto LABEL_1035;
            case 0xA0:
                v28 = v5 ^ v11;
                v28 = (v5 ^ v11) - 0x12AB6E66 * FuckEnc::CacheRead<_DWORD>(v4 + 0x138);
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x450i64) ^ 0xF86CCECD;
                goto LABEL_1035;
            case 0xA1:
                v28 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x10));
                LODWORD(v11) = v28 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xB0) + 0x410i64) + 4i64 * (unsigned __int8)(2 * v5));
                goto LABEL_1034;
            case 0xA2:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x68i64) + 0x1F0i64) + 0x630i64, &v28, v5, v4);
                goto LABEL_1035;
            case 0xA3:
                v28 = (v11 ^ 0x97BB7C51) - 0x224D6F06;
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xB0) + 0x2A8i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0xA)) + 0x68i64) + 0x6E0i64);
                goto LABEL_1035;
            case 0xA4:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 0x48i64);
                Calls::FastCall(v4 + 0x310, &v28, v5, v10);
                v28 = ~v28;
                goto LABEL_1035;
            case 0xA5:
                v28 = (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x510)) ^ 0xA4962AA3;
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x10);
                v28 = ~(v28 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x530) | 7));
                goto LABEL_1035;
            case 0xA6:
                v28 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x278) ^ FuckEnc::CacheRead<_BYTE>(v4 + 0x678) ^ ~FuckEnc::CacheRead<_BYTE>(v4 + 0x130));
                goto LABEL_1035;
            case 0xA7:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0);
                Calls::FastCall(v4 + 0x248, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x350) + 8i64) + 8i64 * (v5 & 0x10)) + 0x68i64));
                goto LABEL_1035;
            case 0xA8:
                v28 = v11 + 0x4E8E4219;
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2C8) + 4i64 * (unsigned __int8)(0x7F * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x330) + 0x198i64))) ^ (v11 + 0x4E8E4219);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xA0);
                v28 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x6F0);
                goto LABEL_1035;
            case 0xA9:
                v28 = v11 + ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x7A0) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x798) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x560) + 0x318i64)) ^ 0x9FF90327);
                goto LABEL_1035;
            case 0xAA:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 0x5E0i64) + 0x1C8i64, &v28, v5, v4);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x510);
                goto LABEL_1035;
            case 0xAB:
                v28 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x3E8) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x508) >> 8);
                v28 ^= (_DWORD)0xCBFE6B7 + 4 + FuckEnc::CacheRead<_DWORD>(v4 + 0x50);
                goto LABEL_1035;
            case 0xAC:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x318) ^ v11;
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x138);
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5E0) + 0x78i64) >> 5;
                goto LABEL_1035;
            case 0xAD:
                v28 = v11 ^ 0xF5AD297D;
                v28 = (v11 ^ 0xF5AD297D) - FuckEnc::CacheRead<_DWORD>(v4 + 0x6F0) + 0x3CFE76BC;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x288) + 0x338i64);
                v28 = __ROR4__(v28, FuckEnc::CacheRead<_DWORD>(v10 + 0x3C0));
                goto LABEL_1035;
            case 0xAE:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x1A0) + 8i64 * (unsigned __int8)(0x13 * v5 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x650) >> 1)), &v28, v5, v4);
                goto LABEL_1035;
            case 0xAF:
                v28 = (v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x198) ^ v11) - v5;
                LODWORD(v11) = v28 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) ^ 0x16u)) + 0x428i64);
                goto LABEL_1034;
            case 0xB0:
                v28 = v11 ^ (0xC3018944 * FuckEnc::CacheRead<_DWORD>(v4 + 0x460));
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F0) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x15)) + 0x3C0i64) ^ 0xC718662B;
                goto LABEL_1035;
            case 0xB1:
                v28 = v11 - 0x3CFE76BC;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x160) + 8i64 * ((unsigned __int8)v5 & 0x97)) + 8i64) + 8i64 * ((unsigned __int8)v5 ^ 0x40u)) + 0x1F8i64);
                v28 = v11 - 0x3CFE76BC - FuckEnc::CacheRead<_DWORD>(v10 + 0x460);
                goto LABEL_1035;
            case 0xB2:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x68) + 0x420i64) + 0x2A0i64) - 0x43749225;
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x728) + 0x78i64);
                goto LABEL_1035;
            case 0xB3:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x330);
                v28 = FuckEnc::CacheRead<_DWORD>(v10 + 0x130) ^ v11;
                v28 = ~(v28 ^ ~((unsigned int)(FuckEnc::CacheRead<_DWORD>(v4 + 0x658) + 0x38E707CD) >> 0x19));
                goto LABEL_1035;
            case 0xB4:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 8i64 * ((unsigned __int8)__ROL4__(v5, 0x19) & 0xD9)) + 0x650i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F0) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x130) ^ 0x20) & 0xE3)) + 0x728i64);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x50);
                goto LABEL_1035;
            case 0xB5:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x418) + 0x48i64) + 0xC0i64) + 0x5E8i64, &v28, v5, v4);
                goto LABEL_1035;
            case 0xB6:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x678) ^ v11;
                v28 = __ROL4__(v28, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x350) + 0x2A0i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x190);
                v28 += FuckEnc::CacheRead<_DWORD>(v10 + 0x6F0);
                goto LABEL_1035;
            case 0xB7:
                v28 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x428) ^ v5);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x488) + 0x708i64);
                LODWORD(v11) = v28 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x338) + 0x1E0i64) + 4i64 * (__ROL4__(v5, 0xB) & 0x2C));
                goto LABEL_1034;
            case 0xB8:
                v28 = v11 - 0x35640C4 * FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0);
                Calls::FastCall(v4 + 0x778, &v28, v5, v4);
                goto LABEL_1035;
            case 0xB9:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x138);
                v28 ^= 0x33C3CB2B * (FuckEnc::CacheRead<_DWORD>(v4 + 0x598) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x5E0i64) + 0x658i64));
                goto LABEL_1035;
            case 0xBA:
                v28 = (v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x530)) ^ 0x3CABF03B;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0) + 0x1B0i64) + 0x5C8i64);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x350) + 0x428i64);
                goto LABEL_1035;
            case 0xBB:
                Calls::FastCall(v4 + 0x770, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x7A8));
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) & 0xFFFFFFE2;
                goto LABEL_1035;
            case 0xBC:
                Calls::FastCall(v4 + 0x398, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 8i64 * ((unsigned __int8)(0xC7 * FuckEnc::CacheRead<_BYTE>(v4 + 0x508)) & 0xF9)) + 0x340i64));
                goto LABEL_1035;
            case 0xBD:
                v28 = v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x510) ^ v11;
                v28 += 0xA2F71F8 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 8i64 * (__ROR4__(v5, 3) & 8)) + 0x3C0i64) + 1;
                goto LABEL_1035;
            case 0xBE:
                v28 = v5 ^ (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x318) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0x328i64) + 4i64 * (__ROR4__(v5, 0x14) & 0x7C)) - 0xFF0A9F0) ^ 0xC3113191;
                goto LABEL_1035;
            case 0xBF:
                LODWORD(v11) = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0) + 0x588i64) + 0x3E0i64) + 8i64 * (unsigned __int8)(0xA2 * v5)) + 0x140i64) + 0xC0i64) + 0x6D0i64) + 0x460i64);
                goto LABEL_1034;
            case 0xC0:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 8i64 * ((unsigned __int8)v5 ^ 0xA6u)) + 0x700i64) + 4i64 * ((unsigned __int8)v5 & 0xFB)) ^ v11;
                LODWORD(v11) = v28 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D0) + 0x6F0i64);
                goto LABEL_1034;
            case 0xC1:
                v28 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x738) + 8i64 * (unsigned __int8)(0x7A * v5)) + 0x2A0i64);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x598) ^ 0x84E3DC44;
                goto LABEL_1035;
            case 0xC2:
                LODWORD(v11) = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 0x160i64) + 8i64 * (v5 & 0x39)) + 0x2A8i64) + 8i64 * ((0x1C * (_BYTE)v5) & 0x7D)) + 0x6B0i64) + 0x340i64) + 0x428i64);
                goto LABEL_1034;
            case 0xC3:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x330) + 0x78i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x6F0) + (FuckEnc::CacheRead<_DWORD>(v4 + 0x2A0) << 0x14));
                goto LABEL_1035;
            case 0xC4:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x138) ^ v11;
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x328) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x330) + 0x138i64), 4));
                LODWORD(v11) = v28 - FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) + 0x3CFE76BC;
                goto LABEL_1034;
            case 0xC5:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x570) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x470) + 4i64 * ((unsigned __int8)~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x288) + 0x88i64) ^ 0x90u));
                goto LABEL_1035;
            case 0xC6:
                Calls::FastCall(v4 + 0x628, &v28, v5, v4);
                v28 += 0xCC8B458B - (FuckEnc::CacheRead<_DWORD>(v4 + 0x1D0) ^ 0x495B368B);
                goto LABEL_1035;
            case 0xC7:
                Calls::FastCall(v4 + 0x630, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x40));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0);
                v28 += 0x77EA291C + FuckEnc::CacheRead<_DWORD>(v10 + 0x1D0);
                goto LABEL_1035;
            case 0xC8:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x480);
                v28 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x3E8) * FuckEnc::CacheRead<_DWORD>(v10 + 0x3E8));
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x570);
                v28 = __ROL4__(v28, FuckEnc::CacheRead<_DWORD>(v4 + 0x510));
                goto LABEL_1035;
            case 0xC9:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 8i64 * (unsigned __int8)(0x31 * (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x6F0)))) + 0x2A8i64) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x280) ^ 0x77u)) + 0x1D0i64);
                goto LABEL_1035;
            case 0xCA:
                LODWORD(v11) = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x18) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x3C0), 0xD)) + 0x2C8i64) + 4i64 * (unsigned __int8)((_BYTE)v5 << 6)) - ((FuckEnc::CacheRead<_DWORD>(v4 + 0x6F0) ^ 0xFFF122AC) << 8);
                goto LABEL_1034;
            case 0xCB:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x340);
                v28 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x150) + 8i64 * ((unsigned __int8)__ROR4__(v5, 7) & 0xBC)) + 0x7A0i64));
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x2A0) ^ 0xC3018944;
                goto LABEL_1035;
            case 0xCC:
                v28 = v11 + 0x3EB6052;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x2B8) + 8i64 * (v5 & 0x5F), &v28, v5, v4);
                goto LABEL_1035;
            case 0xCD:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x10) ^ v11;
                LODWORD(v11) = v28 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6A8) + 0x3F0i64) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x510) & 0xB2)) + 0x3C8i64);
                goto LABEL_1034;
            case 0xCE:
                Calls::FastCall(v4 + 0x5A0, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x728i64) + 0xB0i64) + 0x190i64));
                goto LABEL_1035;
            case 0xCF:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xC0);
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 8i64 * (unsigned __int8)(0x2C * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v10 + 0x3D0) + 0x428i64))) + 0x6A8i64) + 0x660i64) + 0x158i64);
                goto LABEL_1035;
            case 0xD0:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x330);
                v28 = FuckEnc::CacheRead<_DWORD>(v10 + 0x1D0) ^ v11;
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x460) - (FuckEnc::CacheRead<_DWORD>(v4 + 0x278) ^ v5) + 1;
                goto LABEL_1035;
            case 0xD1:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x548) + 8i64 * ((unsigned __int8)~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 0x2D0i64) + 0x10i64) & 0xE8), &v28, v5, v4);
                goto LABEL_1035;
            case 0xD2:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8) + 0x6E0i64) ^ v11;
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x130);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x7A8) + 0x1E8i64);
                v28 += FuckEnc::CacheRead<_DWORD>(v10 + 0x6F0);
                goto LABEL_1035;
            case 0xD3:
                v28 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x598)) - 0xB2E251F;
                LODWORD(v11) = __ROR4__(v28, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x18i64) + 0x328i64) + 4i64 * (unsigned __int8)(0x5B * v5)));
                goto LABEL_1034;
            case 0xD4:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x418) + 0x4A8i64) + 8i64 * ((0xE4 * (_BYTE)v5) & 0x3D)) + 0xB0i64) + 0x478i64);
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x360) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x12)) + 0x510i64) ^ v11;
                goto LABEL_1034;
            case 0xD5:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 8i64 * (__ROL4__(0x8B6B128 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 0x7A0i64), 0x13) & 7)) + 0x68i64);
                v28 = v11 + (FuckEnc::CacheRead<_DWORD>(v10 + 0x280) | 8);
                goto LABEL_1035;
            case 0xD6:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x188) + 0x480i64);
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x700) + 4i64 * (__ROR4__(v5, 0xF) & 0x6C));
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x460) ^ 0x85AF7457;
                goto LABEL_1035;
            case 0xD7:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x1D0);
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x3C8);
                v28 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xB0) + 0x2E0i64);
                goto LABEL_1035;
            case 0xD8:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0x528i64) + 8i64 * ((unsigned __int8)(3 * v5) & 0xC1)) + 0x298i64) + 8i64 * (unsigned __int8)v5) + 0x3D0i64);
                LODWORD(v11) = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 0x308));
                goto LABEL_1034;
            case 0xD9:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0) + 0x158i64) - 0x430831D5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x478);
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x2C8) + 4i64 * (v5 & 0x18));
                goto LABEL_1035;
            case 0xDA:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x208) + 0x2F8i64) + 0x50i64) ^ v11;
                v28 += (FuckEnc::CacheRead<_DWORD>(v4 + 0x3E8) ^ 0x69B47BFA) + 1;
                goto LABEL_1035;
            case 0xDB:
                v15 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 8i64 * (v5 & 0xC)) + 0x360i64) + 8i64 * ((unsigned __int8)v5 & 0xA4));
                goto LABEL_223;
            case 0xDC:
                v28 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x508));
                v28 = ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x508) ^ v28);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 0x1B0i64);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x650);
                goto LABEL_1035;
            case 0xDD:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x2E0) ^ v11;
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x5A8) * v5;
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x78) | 8;
                goto LABEL_1035;
            case 0xDE:
                v28 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x198));
                v28 = ~(v28 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x2E0) + ((v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x570)) << 0xB)));
                goto LABEL_1035;
            case 0xDF:
                v16 = v5 & 0xE;
                v17 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2A8) + 8i64 * (__ROR4__(FuckEnc::CacheRead<unsigned __int8>(v4 + 0x27B), 0x19) & 0x28)) + 0x218i64);
                goto LABEL_228;
            case 0xE0:
                Calls::FastCall(v4 + 0x620, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x418) + 0x68i64) + 0x5E0i64) + 0x218i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x11)));
                goto LABEL_1035;
            case 0xE1:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 8i64 * (__ROR4__(v5, 0xC) & 0x7E)) + 0x400i64) + 8i64 * (unsigned __int8)(0x8A * v5), &v28, v5, v4);
                goto LABEL_1035;
            case 0xE2:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x6F0);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x68);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x570) ^ 0x3CFE76BB;
                goto LABEL_1035;
            case 0xE3:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x288) + 0x518i64) + 0x6D0i64);
                v28 = v11 + (FuckEnc::CacheRead<_DWORD>(v10 + 0x598) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6A8) + 0x7A0i64));
                goto LABEL_1035;
            case 0xE4:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 8i64 * (unsigned __int8)(0x70 * v5)) + 0x28i64) + 8i64 * (unsigned __int8)(0x9E * v5), &v28, v5, v4);
                goto LABEL_1035;
            case 0xE5:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 8i64 * (__ROL4__(v5, 0x1A) & 4)) + 0x538i64) + 8i64 * ((5 * (_BYTE)v5) & 0x62)) + 0x440i64);
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x2A0) * FuckEnc::CacheRead<_DWORD>(v4 + 0x7A0);
                goto LABEL_1035;
            case 0xE6:
                v28 = 0x2F00EE18 - v11;
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) ^ (0x2F00EE18 - v11);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x498);
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x558) + 4i64 * ((unsigned __int8)v5 ^ 0xEu));
                goto LABEL_1035;
            case 0xE7:
                v28 = v5 ^ v11;
                v28 = (v5 ^ v11) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x140) + 0x5A8i64);
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 8i64 * (v5 & 0x59)) + 0x530i64);
                goto LABEL_1035;
            case 0xE8:
                Calls::FastCall(v4 + 0x4C8, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x5E0));
                v28 += 0x9155F6D2 - FuckEnc::CacheRead<_DWORD>(v4 + 0x428);
                goto LABEL_1035;
            case 0xE9:
                v28 = __ROL4__(v11 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x188) + 0x598i64), v5);
                v28 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 0x3C0i64);
                goto LABEL_1035;
            case 0xEA:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 0x488i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x2D0) + 0x580i64) + 8i64 * (v5 & 0x5B), &v28, v5, v4);
                goto LABEL_1035;
            case 0xEB:
                v28 = (v5 ^ v11) - 0x1F22D783;
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 8i64 * (unsigned __int8)(0xD3 * v5)) + 0x738i64) + 8i64 * (v5 & 0x6F)) + 0x798i64);
                goto LABEL_1035;
            case 0xEC:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x460);
                v28 = __ROR4__(v28 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x13)) + 0x88i64) + 0x5D30A8A0) ^ 0xFD780E1E, 0xAF);
                goto LABEL_1035;
            case 0xED:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x50) ^ v11;
                v28 = (v28 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 8i64 * (unsigned __int8)__ROR4__(v5, 1)) + 0x488i64) + 0x180i64) + 4i64 * (unsigned __int8)(0xD0 * v5))) ^ 0xC3018944;
                goto LABEL_1035;
            case 0xEE:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x658i64) ^ v11;
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x198) ^ v5, 0x1C)) + 0x1D0i64);
                goto LABEL_1035;
            case 0xEF:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x498) + 0x660i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x160) + 8i64 * (((unsigned __int8)v5 ^ 0xF8) & 0x27)) + 0x5E8i64, &v28, v5, v4);
                goto LABEL_1035;
            case 0xF0:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x5A8) + (FuckEnc::CacheRead<_DWORD>(v4 + 0x428) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x6B8) ^ 0xEA1A7C7C);
                goto LABEL_1035;
            case 0xF1:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x798) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x488);
                Calls::FastCall(v4 + 0x248, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x218) + 8i64 * ((0xE7 * (_BYTE)v5) & 0x57)));
                goto LABEL_1035;
            case 0xF2:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x188);
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x538) + 8i64 * (unsigned __int8)(0xF7 * FuckEnc::CacheRead<_BYTE>(v10 + 0x798))) + 0x2C8i64) + 4i64 * (unsigned __int8)v5) ^ v11;
                v28 ^= 0xF3BA31A6 * FuckEnc::CacheRead<_DWORD>(v4 + 0x138);
                goto LABEL_1035;
            case 0xF3:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x420);
                v28 = __ROR4__(v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x650) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x488) + 0x2A0i64) - 0x33FC9376, v5);
                goto LABEL_1035;
            case 0xF4:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x88) ^ v11;
                v28 -= 0x77C304D1 * FuckEnc::CacheRead<_DWORD>(v4 + 0x460);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x330);
                v28 = v5 + v28 - FuckEnc::CacheRead<_DWORD>(v10 + 0x6B8);
                goto LABEL_1035;
            case 0xF5:
                LODWORD(v11) = v11 - 0x1A271E08 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x470) + 4i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x530) & 0xFFFFFFF8, 0x1A)) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x2A0) ^ 0x9624B583);
                goto LABEL_1034;
            case 0xF6:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x78) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0xD0i64) + 8i64 * (unsigned __int8)(0xE * v5)) + 0x218i64) + 8i64 * (v5 & 0xB)) + 0x598i64);
                goto LABEL_1035;
            case 0xF7:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x2A0) ^ v11 ^ 0xCE502B40;
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x658) - 0x3CFECE0A;
                v28 ^= 0x3275E489 * FuckEnc::CacheRead<_DWORD>(v4 + 0x280);
                goto LABEL_1035;
            case 0xF8:
                v28 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x798) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x518) + 0xB0i64) + 0x6B8i64));
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x288) + 0x798i64);
                goto LABEL_1035;
            case 0xF9:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x280) ^ v11;
                v28 = __ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 8i64 * ((unsigned __int8)(0x39 * FuckEnc::CacheRead<_BYTE>(v4 + 0x10)) & 0xB4)) + 0x450i64) ^ v28, v5);
                goto LABEL_1035;
            case 0xFA:
                v28 = v11 ^ ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x158) >> 2);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x478);
                v28 = __ROL4__(v28, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0xC0) + 0x10i64));
                goto LABEL_1035;
            case 0xFB:
                v28 = (v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x440) + 0x190i64) + 0x158i64)) ^ 0x9161A64;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x340);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x6F0);
                goto LABEL_1035;
            case 0xFC:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8);
                v28 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 0x318) * FuckEnc::CacheRead<_DWORD>(v4 + 0x6F0));
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x450) + 0x24C19B70;
                goto LABEL_1035;
            case 0xFD:
                v28 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x650));
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x308);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x360) + 8i64 * ((0xE9 * (_BYTE)v5) & 0x20)) + 0x568i64) + 0x158i64);
                goto LABEL_1035;
            case 0xFE:
                v28 = v5 ^ __ROR4__(v11, v5);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x350);
                v28 ^= 0x33A47E12 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x538) + 8i64 * ((unsigned __int8)__ROR4__(v5, 0xB) & 0xEE)) + 0x198i64);
                goto LABEL_1035;
            case 0xFF:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x340) + 0x190i64) + 0x2D8i64) + 0x498i64);
                v28 = v11 ^ (0x61D7CF1D - FuckEnc::CacheRead<_DWORD>(v10 + 0x78));
                goto LABEL_1035;
            case 0x100:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x3C0) - 0x6311851C;
                v28 += ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x130) + ~FuckEnc::CacheRead<_DWORD>(v4 + 0x658));
                goto LABEL_1035;
            case 0x101:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x318);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x338);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x438) + 8i64 * (((unsigned __int8)v5 ^ 0xEE) & 0xB1), &v28, v5, v4);
                goto LABEL_1035;
            case 0x102:
                v28 = v11 + 0x5D7335EC;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 8i64 * ((unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x530), 0x1E) & 0x87)) + 0x1B0i64);
                v28 = (v11 + 0x5D7335EC) ^ ~FuckEnc::CacheRead<_DWORD>(v10 + 0x678);
                goto LABEL_1035;
            case 0x103:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x350) + 0x328i64) + 4i64 * ((0x1F * (_BYTE)v5) & 0x41));
                LODWORD(v11) = __ROR4__(v28 - 0x3CFECE56 * FuckEnc::CacheRead<_DWORD>(v4 + 0x598), 0x9C);
                goto LABEL_1034;
            case 0x104:
                LODWORD(v11) = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8) + 8i64 * (v5 & 0x6D)) + 0x360i64) + 8i64 * ((unsigned __int8)v5 ^ 0xA4u)) + 0x450i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x460) >> 5));
                goto LABEL_1034;
            case 0x105:
                v28 = v11 + 0x77E982C5;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8) + 0x330i64) + 0x6E8i64, &v28, v5, v4);
                goto LABEL_1035;
            case 0x106:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8) + 8i64 * (unsigned __int8)v5) + 0x6B8i64) * ((0x11454B74 * FuckEnc::CacheRead<_DWORD>(v4 + 0x88)) ^ 0xE67DCDE4);
                goto LABEL_1035;
            case 0x107:
                v28 = v11 ^ 0x24AE0AB1;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6A8);
                Calls::FastCall(v10 + 0x3D8, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x728));
                goto LABEL_1035;
            case 0x108:
                v28 = ~(v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x78));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x418);
                LODWORD(v11) = v28 - 0x293B180B * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x470) + 4i64 * (unsigned __int8)(0xFA * v5));
                goto LABEL_1034;
            case 0x109:
                v28 = ~(_DWORD)v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0x160i64) + 8i64 * (unsigned __int8)v5) + 0x418i64) + 0x350i64);
                v28 = ~(_DWORD)v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x678);
                goto LABEL_1035;
            case 0x10A:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x650) ^ v11;
                v28 = (v28 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 8i64 * (v5 & 0x61)) + 0x6E0i64)) ^ 0x12EE709B;
                goto LABEL_1035;
            case 0x10B:
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3F0) + 8i64 * ((unsigned __int8)~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x10) & 0xA1)) + 0x528i64) + 8i64 * ((unsigned __int8)v5 ^ 0x64u)) + 0x218i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 0xB)) + 0x280i64) ^ v11;
                goto LABEL_1034;
            case 0x10C:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x5A8) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8) + 0x140i64);
                Calls::FastCall(v4 + 0x5E8, &v28, v5, v10);
                goto LABEL_1035;
            case 0x10D:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x518) + 0x88i64) ^ v11;
                LODWORD(v11) = v28 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 0x218i64) + 8i64 * ((unsigned __int8)__ROR4__(v5, 0x13) & 0xF7)) + 0x6E0i64);
                goto LABEL_1034;
            case 0x10E:
                v28 = v11 ^ 0xC3018944;
                v28 = (v11 ^ 0xC3018944) - ((-(v5 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x450) | 0x1F)) - 0xA27C) << 0xC);
                goto LABEL_1035;
            case 0x10F:
                v17 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3F0);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6A8) + 0x420i64);
                v16 = __ROL4__(FuckEnc::CacheRead<_DWORD>(v10 + 0x5A8), 0x15) & 0x2B;
            LABEL_228:
                Calls::FastCall(v4 + 0x4D8, &v28, v5, FuckEnc::CacheRead<_QWORD>(v17 + 8 * v16));
                goto LABEL_1035;
            case 0x110:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x7A0);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x588);
                v28 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x50) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x350) + 0x1C0i64) ^ 0x9DD7223F;
                goto LABEL_1035;
            case 0x111:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x558) + 4i64 * ((0xF6 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x508) ^ 0xEC)) & 0x39)) ^ v11;
                v28 = __ROL4__(v28, 0xFF - 0xBF * FuckEnc::CacheRead<_BYTE>(v4 + 0x508));
                goto LABEL_1035;
            case 0x112:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x588);
                v28 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x410) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v10 + 0x78) & 0x4E)) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x278) & 0xFFFFFFF2) - 0x627A0BE5;
                goto LABEL_1035;
            case 0x113:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8);
                v28 = FuckEnc::CacheRead<_DWORD>(v10 + 0x130) ^ v11;
                v28 = __ROR4__(v28, ~(4 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D0) + 0x6E0i64)));
                goto LABEL_1035;
            case 0x114:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0);
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0) + 0x18i64) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x7A0), 0x1C)) + 0x450i64) ^ v28;
                goto LABEL_1034;
            case 0x115:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x738) + 8i64 * (unsigned __int8)(0xFC * v5)) + 0x778i64, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x478));
                goto LABEL_1035;
            case 0x116:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x530) + v11;
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x208) + 0x6A8i64) + 0x298i64) + 8i64 * (unsigned __int8)(0xD7 * v5)) + 0x38i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 0xE)) ^ v28;
                goto LABEL_1034;
            case 0x117:
                LODWORD(v11) = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x680) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x530) & 0xB0)) + 0x138i64) + FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xC0) + 0x5B8i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 0x12)));
                goto LABEL_1034;
            case 0x118:
                v28 = ~(v5 ^ __ROR4__(v11, 0xCE));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xA8);
                v28 = __ROL4__(v28, FuckEnc::CacheRead<_BYTE>(v4 + 0x650) ^ FuckEnc::CacheRead<_BYTE>(v10 + 0x658));
                goto LABEL_1035;
            case 0x119:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x728) + 8i64) + 8i64 * ((unsigned __int8)(0xD5 * v5) & 0xEF)) + 0x390i64, &v28, v5, v4);
                goto LABEL_1035;
            case 0x11A:
                v28 = ~(_DWORD)v11;
                v28 = ~(_DWORD)v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5E0) + 0x1C0i64) & 0xFFFFFFFE;
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x7A8) + 0x658i64);
                goto LABEL_1035;
            case 0x11B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8);
                v28 = FuckEnc::CacheRead<_DWORD>(v10 + 0x130) ^ v11;
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x570) << 0x11;
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x6B8i64);
                goto LABEL_1035;
            case 0x11C:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x478);
                v28 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 0x6E0));
                v28 += (FuckEnc::CacheRead<_DWORD>(v4 + 0x7A0) & 0xFFFFFFE1) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x518) + 0x650i64);
                goto LABEL_1035;
            case 0x11D:
                v28 = v11 - ((0xBE3E67DD * FuckEnc::CacheRead<_DWORD>(v4 + 0x3C8)) ^ 0x79DF30FF);
                v28 -= (0xA754EC08 * FuckEnc::CacheRead<_DWORD>(v4 + 0x450)) | 0x18;
                goto LABEL_1035;
            case 0x11E:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x570);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x418i64) + 0x3E0i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x1A)) + 0x288i64) + 0x6B8i64);
                goto LABEL_1035;
            case 0x11F:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 8i64 * (v5 & 0x44)) + 0x718i64) + 0x350i64) + 0x5C8i64) + 0x1D0i64) + 0x2C3CEECF;
                goto LABEL_1035;
            case 0x120:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x708) + 0x5D0i64) + 0x6D0i64) + 0x340i64) + 0x68i64) + 0x198i64) ^ v11;
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x280);
                goto LABEL_1035;
            case 0x121:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x658) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0);
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x98) + 4i64 * ((unsigned __int8)v5 & 0xCF));
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x318) << 0x1D;
                goto LABEL_1035;
            case 0x122:
                v28 = v11 - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x338) + 0x1F0i64);
                v28 = (v11 - v5) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x5A8) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x7A8) + 0x570i64));
                goto LABEL_1035;
            case 0x123:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x50) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3D0);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x650);
                v28 += (FuckEnc::CacheRead<_DWORD>(v4 + 0x50) * v5) & 0xFFFFFFF3;
                goto LABEL_1035;
            case 0x124:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xB0) + 0x48i64);
                v28 = FuckEnc::CacheRead<_DWORD>(v10 + 0x318) ^ v11;
                v28 = __ROR4__(__ROL4__(v28, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0xC0) + 0x278i64) * v5), 0x31);
                goto LABEL_1035;
            case 0x125:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x1D0);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x338);
                Calls::FastCall(v4 + 0x108, &v28, v5, v10);
                v28 -= 0x24DD8A60;
                goto LABEL_1035;
            case 0x126:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x560);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x3E0) + 8i64 * (unsigned __int8)(0xF2 * v5)) + 0x6C0i64) + 8i64 * (((unsigned __int8)v5 ^ 0x19) & 0x39), &v28, v5, v4);
                goto LABEL_1035;
            case 0x127:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x360) + 8i64 * (unsigned __int8)v5) + 0x330i64);
                LODWORD(v11) = __ROR4__(v28, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x6A0) + 4i64 * ((unsigned __int8)v5 & 0xB1)));
                goto LABEL_1034;
            case 0x128:
                v28 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x88);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 0x450i64);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x498) + 0x6B8i64);
                goto LABEL_1035;
            case 0x129:
                v28 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x5A8) * ~FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x68) + 0x3C8i64));
                v28 = v28 - FuckEnc::CacheRead<_DWORD>(v4 + 0x510) - 0x35858027;
                goto LABEL_1035;
            case 0x12A:
                v28 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x798));
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6A0) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x5A8) & 0xEF));
                goto LABEL_1035;
            case 0x12B:
                v28 = v11 + 0x5E5E12F5 * FuckEnc::CacheRead<_DWORD>(v4 + 0x50) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x560) + 0x6A8i64) + 0x410i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 0xA));
                goto LABEL_1035;
            case 0x12C:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x478);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x150) + 8i64 * (v5 & 0x65)) + 0x3D8i64, &v28, v5, v4);
                goto LABEL_1035;
            case 0x12D:
                v28 = v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 0x138i64);
                v28 ^= v5 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x7A8) + 0x338i64) + 0x7A0i64);
                goto LABEL_1035;
            case 0x12E:
                v28 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x570));
                v28 = __ROR4__(v28, FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x7A8) + 0x330i64);
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x328) + 4i64 * ((unsigned __int8)v5 ^ 0xEDu));
                goto LABEL_1035;
            case 0x12F:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 8i64 * (((unsigned __int8)v5 ^ 0xDB) & 0xB6)) + 0x6B0i64) + 0x1E8i64) + 0x240i64, &v28, v5, v4);
                goto LABEL_1035;
            case 0x130:
                v28 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x650i64) ^ ~FuckEnc::CacheRead<_BYTE>(v4 + 0x678));
                v28 = ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x598) ^ v28);
                goto LABEL_1035;
            case 0x131:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0) + 0xA0i64) + 0x5D0i64);
                Calls::FastCall(v4 + 0x398, &v28, v5, v10);
                goto LABEL_1035;
            case 0x132:
                v28 = v11 ^ 0xB1F3D0FF;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x338) + 0x210i64, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x488));
                goto LABEL_1035;
            case 0x133:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x3E8) ^ v11;
                v28 += ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x198) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x3C0) ^ 0x9A95EDF0));
                goto LABEL_1035;
            case 0x134:
                Calls::FastCall(v4 + 0x60, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x660));
                goto LABEL_1035;
            case 0x135:
                v28 = v5 + v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x508) >> 9);
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x180) + 4i64 * ((unsigned __int8)(0x91 * FuckEnc::CacheRead<_BYTE>(v4 + 0x130)) & 0x88));
                goto LABEL_1035;
            case 0x136:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x280);
                v28 ^= 0x30CE5DB1 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D0) + 0x440i64) + 0x328i64) + 4i64 * (unsigned __int8)(0x5C * v5));
                goto LABEL_1035;
            case 0x137:
                v28 = (FuckEnc::CacheRead<_DWORD>(v4 + 0x50) ^ v5) + v11;
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x340) + 0x218i64) + 8i64 * (unsigned __int8)(0x50 * v5)) + 0x470i64) + 4i64 * (__ROL4__(v5, 0x17) & 0x3E));
                goto LABEL_1035;
            case 0x138:
                v28 = __ROR4__(v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x460), 0x77) ^ 0xBDC31131;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x488);
                v28 = __ROR4__(v28, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x6A8) + 0x3C8i64));
                goto LABEL_1035;
            case 0x139:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x140) + 0x1E0i64) + 4i64 * ((unsigned __int8)v5 ^ 0x37u)) ^ v11;
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 8i64 * (v5 & 0x3F)) + 0x518i64) + 0x798i64) ^ v28;
                goto LABEL_1034;
            case 0x13A:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x278) ^ v11 ^ 0xE0C30131;
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x5A8);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1E0) + 4i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x188) + 0x678i64), 0xE) & 0x46));
                goto LABEL_1035;
            case 0x13B:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x510) ^ v11;
                v28 -= 0x62C31131 * FuckEnc::CacheRead<_DWORD>(v4 + 0x198) * FuckEnc::CacheRead<_DWORD>(v4 + 0x5A8);
                goto LABEL_1035;
            case 0x13C:
                Calls::FastCall(v4 + 0x730, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x68) + 0x518i64) + 0x538i64) + 8i64 * (unsigned __int8)(0x1F * v5)));
                goto LABEL_1035;
            case 0x13D:
                v28 = v11 - 0x51E88FBB;
                v28 = __ROR4__(v11 - 0x51E88FBB, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 8i64 * (unsigned __int8)__ROR4__(0xCF0EBB2B * FuckEnc::CacheRead<_DWORD>(v4 + 0x158), 0x14)) + 0x360i64) + 8i64 * (((unsigned __int8)v5 ^ 6) & 0x16)) + 0x798i64));
                goto LABEL_1035;
            case 0x13E:
                Calls::FastCall(v4 + 0x388, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 0x1F0i64) + 0x6A8i64));
                v28 += 0x2661A1B2;
                goto LABEL_1035;
            case 0x13F:
                v28 = __ROR4__(v11, v5);
                v28 += 0x479C8BAB * FuckEnc::CacheRead<_DWORD>(v4 + 0x6F0) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 0x40i64) + 0x6B8i64);
                goto LABEL_1035;
            case 0x140:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x318);
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x10);
                v28 -= 0x48FB25C3 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6A0) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x158) & 0x17));
                goto LABEL_1035;
            case 0x141:
                v28 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x508) * v5);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x318) ^ 0xF0D1FF41;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x568);
                v28 += FuckEnc::CacheRead<_DWORD>(v10 + 0x198);
                goto LABEL_1035;
            case 0x142:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x160) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F0) + 8i64 * (unsigned __int8)(0x7E * v5)) + 0x440i64) + 0x138i64) ^ 0xD4u)) + 0xA0i64);
                v28 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v10 + 0x3C8);
                goto LABEL_1035;
            case 0x143:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8);
                v28 = v11 ^ ((FuckEnc::CacheRead<_DWORD>(v10 + 0x6E0) ^ 0x1CBF372B) + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x18) + 8i64 * ((unsigned __int8)v5 & 0x82)) + 0x658i64) ^ v5));
                goto LABEL_1035;
            case 0x144:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x670) + 8i64 * (__ROL4__(v5, 0xD) & 0x12)) + 0x210i64, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x190));
                goto LABEL_1035;
            case 0x145:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x650);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x568) + 0x598i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x68);
                v28 = __ROR4__(v28, FuckEnc::CacheRead<_DWORD>(v10 + 0x650));
                goto LABEL_1035;
            case 0x146:
                v28 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x278) >> 0x12);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0);
                v28 = v28 - FuckEnc::CacheRead<_DWORD>(v4 + 0x3C8) - FuckEnc::CacheRead<_DWORD>(v10 + 0x130);
                goto LABEL_1035;
            case 0x147:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x7A0) + 0x7D93B1C8;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x440);
                v28 = __ROR4__(v28, FuckEnc::CacheRead<_DWORD>(v10 + 0x50));
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0);
                goto LABEL_1035;
            case 0x148:
                v28 = v11 ^ 0x8BC0589E;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D0) + 0x2D0i64);
                v28 = __ROL4__(v11 ^ 0x8BC0589E, FuckEnc::CacheRead<_DWORD>(v10 + 0x598));
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x570) ^ 0xC016B9D3;
                goto LABEL_1035;
            case 0x149:
                v28 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) >> 0xE);
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x460);
                v28 = v28 - FuckEnc::CacheRead<_DWORD>(v4 + 0x3E8) + 0x3CEECE6C;
                goto LABEL_1035;
            case 0x14A:
                v28 = v11 + 0x56742EE4;
                v28 = v11 + 0x56742EE4 - FuckEnc::CacheRead<_DWORD>(v4 + 0x530);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x700) + 4i64 * ((unsigned __int8)v5 & 0x89)) + 1;
                goto LABEL_1035;
            case 0x14B:
                Calls::FastCall(v4 + 0x4D0, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x360) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x158), 0xB)) + 0x338i64));
                goto LABEL_1035;
            case 0x14C:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 8i64 * (unsigned __int8)(0x16 * v5)) + 0x10i64);
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x278) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x350) + 0x428i64);
                goto LABEL_1035;
            case 0x14D:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x2E0);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x40) + 0x50i64) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x2E0) - 0x40D215E);
                goto LABEL_1035;
            case 0x14E:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x510) ^ v11;
                Calls::FastCall(v4 + 0x4E0, &v28, v5, v4);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x308);
                goto LABEL_1035;
            case 0x14F:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x138);
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x18) + 8i64 * ((0xE5 * (_BYTE)v5) & 0x7B)) + 0x340i64) + 0x5C0i64) + 0x38i64) + 4i64 * (v5 & 0x30));
                goto LABEL_1035;
            case 0x150:
                v18 = FuckEnc::CacheRead<_DWORD>(v4 + 0x280) ^ 0xD13CB08C;
                goto LABEL_342;
            case 0x151:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x680) + 8i64 * ((unsigned __int8)v5 ^ 0x2Au)) + 0x360i64) + 8i64 * (((unsigned __int8)v5 ^ 0xBA) & 0xC7)) + 0x560i64) + 0x5C0i64) + 0xC0i64);
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(v10 + 0x530) ^ v11;
                goto LABEL_1034;
            case 0x152:
                v28 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x350) + 0x318i64) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D0) + 0x2A8i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x10)) + 0x3C0i64) ^ 0x3FAD64A4));
                goto LABEL_1035;
            case 0x153:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x598);
                Calls::FastCall(v4 + 0x3A0, &v28, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x140);
                v28 += FuckEnc::CacheRead<_DWORD>(v10 + 0x50);
                goto LABEL_1035;
            case 0x154:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 8i64 * (__ROR4__(v5, 0xE) & 0x79)) + 0x670i64) + 8i64 * ((unsigned __int8)__ROL4__(v5, 0xD) & 0xAB)) + 0x5B8i64) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x10) & 0x35));
                goto LABEL_1035;
            case 0x155:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x340);
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D0) + 0x2F8i64) + 0x308i64) - FuckEnc::CacheRead<_DWORD>(v10 + 0x510) - FuckEnc::CacheRead<_DWORD>(v4 + 0x78);
                goto LABEL_1035;
            case 0x156:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 0x338i64) + 0x1C8i64, &v28, v5, v4);
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x158);
                goto LABEL_1035;
            case 0x157:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x3E8) + (FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) | 6);
                v28 += ~(v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x3C8));
                goto LABEL_1035;
            case 0x158:
                v28 = v11 + 0x38DD2A3B * (FuckEnc::CacheRead<_DWORD>(v4 + 0x78) + 1);
                v28 ^= (0x2714D0FF * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8) + 0x10i64)) ^ 0x34B1DD1B;
                goto LABEL_1035;
            case 0x159:
                v28 = ~(v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8) + 8i64 * (unsigned __int8)v5) + 0x218i64) + 8i64 * (unsigned __int8)(0x41 * v5)) + 0x78i64));
                goto LABEL_1035;
            case 0x15A:
                v28 = v5 ^ v11;
                v28 = __ROL4__(v5 ^ v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x338) + 0x510i64) + 0x60 - FuckEnc::CacheRead<_BYTE>(v4 + 0x78));
                goto LABEL_1035;
            case 0x15B:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x3E8);
                v28 += v5 * ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x658) >> 0x1D) + 1;
                goto LABEL_1035;
            case 0x15C:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x678) ^ v11;
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x2A0) ^ 0x145A9D33;
                v28 ^= (FuckEnc::CacheRead<_DWORD>(v4 + 0x78) << 0xC) + 0x7CB2A8B4;
                goto LABEL_1035;
            case 0x15D:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 0x1F0i64) + 0x6F0i64) ^ v11;
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x450);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x50) & 0xFFFFFFED;
                goto LABEL_1035;
            case 0x15E:
                v28 = v5 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F0) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) & 0xC4)) + 0x658i64) ^ v11 ^ 0xBF44D536;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5E0);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x130);
                goto LABEL_1035;
            case 0x15F:
                v28 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x518) + 0x598i64));
                v28 -= FuckEnc::CacheReadPlural<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x660) + 0xA8i64) + 0x338i64) + 0x328i64);
                goto LABEL_1035;
            case 0x160:
                v28 = v5 ^ (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x2E0));
                v19 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8);
                v20 = __ROL4__(v5, 0x10) & 0x80;
                goto LABEL_359;
            case 0x161:
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x188i64) + 8i64) + 8i64 * (unsigned __int8)(0x9C * v5)) + 0x48i64) + 0x6D0i64) + 0x460i64) ^ v11;
                goto LABEL_1034;
            case 0x162:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x738) + 8i64 * (unsigned __int8)(FuckEnc::CacheRead<_DWORD>(v4 + 0x198) - 0x7D)) + 0x58i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x1B), &v28, v5, v4);
                goto LABEL_1035;
            case 0x163:
                v15 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8) + 0x3F0i64) + 8i64 * ((unsigned __int8)v5 ^ 0xE7u));
            LABEL_223:
                Calls::FastCall(v4 + 0x248, &v28, v5, FuckEnc::CacheRead<_QWORD>(v15 + 0x3D0));
                goto LABEL_1035;
            case 0x164:
                Calls::FastCall(v4 + 0x388, &v28, v5, v4);
                v28 += 0x51D50131 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x130) ^ 0x8178E0E2);
                goto LABEL_1035;
            case 0x165:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x420i64) + 0x560i64) + 0x598i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x40);
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0xA0) + 0x570i64);
                goto LABEL_1035;
            case 0x166:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x318) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x598) & 0xFFFFFFF5) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x798) + 1);
                goto LABEL_1035;
            case 0x167:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8);
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x1D0);
                v28 = __ROL4__(v28, (FuckEnc::CacheRead<_BYTE>(v4 + 0x3C8) - 0x11) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x7A0) >> 5));
                goto LABEL_1035;
            case 0x168:
                v28 = (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x130)) ^ 0x25D1FF41;
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x10);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3D0);
                v28 += FuckEnc::CacheRead<_DWORD>(v10 + 0x598);
                goto LABEL_1035;
            case 0x169:
                Calls::FastCall(v4 + 0x148, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x440);
                v28 = __ROL4__(v28, FuckEnc::CacheRead<_DWORD>(v10 + 0x6E0));
                goto LABEL_1035;
            case 0x16A:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8) + 0xA0i64) + 0x218i64) + 8i64 * ((0xF5 * FuckEnc::CacheRead<_BYTE>(v4 + 0x510)) & 0x4B)) + 0x288i64) + 0x198i64) + 1;
                goto LABEL_1035;
            case 0x16B:
                v28 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x288) + 0x6F0i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8);
                Calls::FastCall(v4 + 0x100, &v28, v5, v10);
                goto LABEL_1035;
            case 0x16C:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8) + 0x510i64) ^ v11;
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x3C0);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x420) + 0x710i64);
                v28 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x650);
                goto LABEL_1035;
            case 0x16D:
                v28 = v11 ^ 0xC3018944;
                v28 = ~__ROR4__(v11 ^ 0xC3018944, FuckEnc::CacheRead<_DWORD>(v4 + 0x508));
                v28 = v28 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5E0) + 0x130i64) - v5;
                goto LABEL_1035;
            case 0x16E:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 8i64 * ((unsigned __int8)v5 & 0xF0)) + 0x6D0i64) + 0x710i64) + 0x40i64);
                v12 = (unsigned __int8)v5 ^ 2u;
                v13 = FuckEnc::CacheRead<_QWORD>(v10 + 0x700);
                goto LABEL_1033;
            case 0x16F:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA0) + 0x6F0i64);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x3E8);
                v28 ^= ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x428) & 0xFFFFFFF5);
                goto LABEL_1035;
            case 0x170:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x508) * ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x10i64) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x3C8) & 0xFFFFFFE5);
                goto LABEL_1035;
            case 0x171:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0);
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x510) + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x708) + 0x410i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 0x12)) ^ 0xA2C31131);
                goto LABEL_1035;
            case 0x172:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x2E0);
                v28 = ~(v28 ^ (v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3F0) + 8i64 * (unsigned __int8)(0xE8 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x508) + 0x13))) + 0x308i64)));
                goto LABEL_1035;
            case 0x173:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x140);
                v28 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x670) + 8i64 * (((unsigned __int8)v5 ^ 0xF5) & 0x1A)) + 0x158i64) | 0xD);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x88);
                goto LABEL_1035;
            case 0x174:
                v28 = v11 ^ 0x35E24B8C;
                v28 = v11 ^ 0x35E24B8C ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F0) + 8i64 * ((unsigned __int8)v5 ^ 0x30u)) + 0xC0i64) + 0x3D0i64) + 0x678i64);
                goto LABEL_1035;
            case 0x175:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x6F0);
                v28 = (v28 + FuckEnc::CacheRead<_DWORD>(v4 + 0x138)) ^ 0xCA3337FA;
                v28 += (unsigned int)(0x296CFF85 * FuckEnc::CacheRead<_DWORD>(v4 + 0x678)) >> 8;
                goto LABEL_1035;
            case 0x176:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x658) ^ v11;
                v28 = __ROL4__(v28, FuckEnc::CacheRead<_BYTE>(v4 + 0x598) & 0xE3 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x10) - (_DWORD)0xEF993BC));
                goto LABEL_1035;
            case 0x177:
                v28 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x360) + 8i64 * ((unsigned __int8)(0x14 * v5) & 0xDE)) + 0x6B8i64) >> 0x1D);
                v28 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8) + 0x278i64);
                goto LABEL_1035;
            case 0x178:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8) + 0x150i64) + 8i64 * (unsigned __int8)(0xEC * v5)) + 0x6A8i64) + 0x498i64);
                v28 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x308) + FuckEnc::CacheRead<_DWORD>(v10 + 0x3C8));
                goto LABEL_1035;
            case 0x179:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8) + 0x518i64) + 0x420i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x2F0) + 8i64 * ((0x2E * (_BYTE)v5) & 0x44), &v28, v5, v4);
                goto LABEL_1035;
            case 0x17A:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x450) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xB0);
                v28 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x10) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x2E0) << 0x15);
                goto LABEL_1035;
            case 0x17B:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3F0) + 8i64 * (unsigned __int8)__ROR4__(v5, 1)) + 8i64) + 8i64 * ((0xE7 * (_BYTE)v5) & 0x69)) + 0x140i64);
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x3C8) - v5;
                goto LABEL_1035;
            case 0x17C:
                LODWORD(v11) = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x1D0) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x418) + 0x518i64) + 0x160i64) + 8i64 * (unsigned __int8)(0x79 * v5)) + 0x410i64) + 4i64 * ((unsigned __int8)v5 & 0xE2)));
                goto LABEL_1034;
            case 0x17D:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5E0) + 0x5E0i64);
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x1E0) + 4i64 * ((unsigned __int8)v5 ^ 0xC9u));
                v28 -= 0x7DE05131 * FuckEnc::CacheRead<_DWORD>(v4 + 0x308);
                goto LABEL_1035;
            case 0x17E:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x7A0) ^ v11;
                v28 = __ROL4__(v28, FuckEnc::CacheRead<_DWORD>(v4 + 0x198));
                v28 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0) + 0x7A8i64) + 0x3C0i64);
                goto LABEL_1035;
            case 0x17F:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x158);
                v28 = ~(v28 - FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0));
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x140) + 0x3D0i64) + 0x78i64);
                goto LABEL_1035;
            case 0x180:
                v21 = (unsigned __int8)v5 ^ 0x7Du;
                v22 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x498) + 0x360i64);
                goto LABEL_392;
            case 0x181:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x478);
                v28 = FuckEnc::CacheRead<_DWORD>(v10 + 0x450) ^ v11;
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x568) + 0x188i64) + 0x538i64) + 8i64 * ((unsigned __int8)v5 ^ 0x38u)) + 0x278i64);
                goto LABEL_1035;
            case 0x182:
                v28 = v11 - 0x1B5008F8;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xA0);
                v28 = ~(v11 - 0x1B5008F8 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x158) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x700) + 4i64 * (v5 & 0x67))));
                goto LABEL_1035;
            case 0x183:
                v28 = v11 + v5;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x518) + 0x578i64) + 8i64 * ((unsigned __int8)v5 & 0xD6), &v28, v5, v4);
                goto LABEL_1035;
            case 0x184:
                v28 = __ROL4__(v11, 0xEE);
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x680) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x10), 0x14)) + 0x3F0i64) + 8i64 * (unsigned __int8)(0xBB * v5)) + 0x88i64) ^ v28;
                goto LABEL_1034;
            case 0x185:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x5A8);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x428i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x188);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x700) + 4i64 * (unsigned __int8)__ROR4__(v5, 0x1E));
                goto LABEL_1035;
            case 0x186:
                v28 = v11 ^ 0x573104B3;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x568);
                v28 = __ROL4__(v11 ^ 0x573104B3, v5 ^ (FuckEnc::CacheRead<_BYTE>(v4 + 0x1C0) + FuckEnc::CacheRead<_BYTE>(v10 + 0x3E8)));
                goto LABEL_1035;
            case 0x187:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8) + 8i64 * (unsigned __int8)__ROL4__(v5, 3)) + 0x170i64) + 8i64 * ((unsigned __int8)(0xF0 * v5) & 0xE1), &v28, v5, v4);
                goto LABEL_1035;
            case 0x188:
                v28 = v11 ^ 0x19B2587F;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8);
                Calls::FastCall(v4 + 0x1C8, &v28, v5, v10);
                v28 += v5;
                goto LABEL_1035;
            case 0x189:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5E0) + 0x158i64);
                Calls::FastCall(v4 + 0x380, &v28, v5, v4);
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x570);
                goto LABEL_1035;
            case 0x18A:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xC0);
                LODWORD(v11) = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x530) ^ (FuckEnc::CacheRead<_DWORD>(v10 + 0x2E0) + FuckEnc::CacheRead<_DWORD>(v4 + 0x158) - 0x8F10A87));
                goto LABEL_1034;
            case 0x18B:
                v28 = __ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x130) ^ v11, 0x31);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x68);
                Calls::FastCall(v4 + 0x250, &v28, v5, v10);
                v28 = ~v28;
                goto LABEL_1035;
            case 0x18C:
                Calls::FastCall(v4 + 0x4C8, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x728));
                v28 = __ROR4__(v28, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x488) + 0x318i64));
                goto LABEL_1035;
            case 0x18D:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x198);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 8i64 * ((unsigned __int8)__ROR4__(v5, 5) & 0xFC)) + 0xA0i64) + 0x700i64) + 4i64 * ((unsigned __int8)v5 & 0x97)) ^ 0xC7CC143D;
                goto LABEL_1035;
            case 0x18E:
                v28 = (unsigned int)0x827845F + v11;
                Calls::FastCall(v4 + 0x108, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0) + 0x738i64) + 8i64 * (__ROL4__(v5, 0x18) & 2)));
                goto LABEL_1035;
            case 0x18F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8);
                Calls::FastCall(v10 + 0x768, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xC0) + 0x188i64));
                goto LABEL_1035;
            case 0x190:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x308) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x48);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D0) + 0x4D0i64, &v28, v5, v10);
                goto LABEL_1035;
            case 0x191:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x188) + 0x50i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5E0);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x650) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6A8) + 0x3C0i64);
                goto LABEL_1035;
            case 0x192:
                v28 = __ROR4__(~(v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x350) + 0x428i64) ^ (0x7D21CE9F * FuckEnc::CacheRead<_DWORD>(v4 + 0x88)))), v5);
                goto LABEL_1035;
            case 0x193:
                v28 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0)) - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6A8);
                Calls::FastCall(v10 + 0x4A0, &v28, v5, v4);
                goto LABEL_1035;
            case 0x194:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0) + 0x478i64);
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x298) + 8i64 * (-FuckEnc::CacheRead<_DWORD>(v4 + 0x1D0) & 0x1F)) + 0x460i64) ^ v11;
                goto LABEL_1035;
            case 0x195:
                v28 = ~(v11 - 0x63D50A7D * FuckEnc::CacheRead<_DWORD>(v4 + 0x130) - FuckEnc::CacheRead<unsigned __int16>(FuckEnc::CacheRead<_QWORD>(v4 + 0x340) + 0x532i64));
                goto LABEL_1035;
            case 0x196:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8) + 0x3C0i64) * 2 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x570) ^ v5 | 8) + 0x798AF533;
                goto LABEL_1035;
            case 0x197:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 0x38i64) + 4i64 * (((unsigned __int8)v5 ^ 0xB) & 0xCF));
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x650);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x318);
                goto LABEL_1035;
            case 0x198:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x12)) + 0x548i64) + 8i64 * ((unsigned __int8)v5 & 0x93), &v28, v5, v4);
                goto LABEL_1035;
            case 0x199:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 0x660i64);
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x190) + 0x150i64) + 8i64 * (unsigned __int8)-FuckEnc::CacheRead<_BYTE>(v4 + 0x450)) + 0x130i64) ^ v11;
                goto LABEL_1034;
            case 0x19A:
                v28 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0) + 0x208i64) + 0x678i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x418) + 0x180i64) + 4i64 * (unsigned __int8)(0x4F * v5)) | 0x12);
                goto LABEL_1035;
            case 0x19B:
                Calls::FastCall(v4 + 0x4A0, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 8i64 * (__ROL4__(0xF8C540B8 * FuckEnc::CacheRead<_DWORD>(v4 + 0x3C8), 0x1A) & 0x7A)));
                goto LABEL_1035;
            case 0x19C:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x5A8);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x188) + 0x3D0i64) + 0x7A0i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x510) + 0x27BC53A8);
                goto LABEL_1035;
            case 0x19D:
                v28 = __ROL4__(v11, v5);
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x10);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D0) + 0x650i64);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0);
                goto LABEL_1035;
            case 0x19E:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x3C8);
                v28 += v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x678) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8) + 0x140i64) + 0x798i64);
                goto LABEL_1035;
            case 0x19F:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x530) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8);
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x518) + 0x140i64) + 0x5B8i64) + 4i64 * (unsigned __int8)(0xDC * FuckEnc::CacheRead<_BYTE>(v10 + 0x2E0))) ^ v28;
                goto LABEL_1034;
            case 0x1A0:
                v28 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x6F0) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2A8) + 8i64 * ((unsigned __int8)v5 & 0xD4)) + 0x10i64) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x280) & 0xFFFFFFF3;
                goto LABEL_1035;
            case 0x1A1:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x280);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x478) + 0x480i64) + 0x5C8i64);
                Calls::FastCall(v4 + 0x778, &v28, v5, v10);
                goto LABEL_1035;
            case 0x1A2:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x3E8) ^ 0x70) & 0xF2)) + 0x438i64) + 8i64 * ((unsigned __int8)(0x3B * v5) & 0xD8), &v28, v5, v4);
                goto LABEL_1035;
            case 0x1A3:
                LODWORD(v11) = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x598) * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x288) + 0x570i64) * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x420) + 0x5B8i64) + 4i64 * ((unsigned __int8)__ROL4__(v5, 0x16) & 0xB9)));
                goto LABEL_1034;
            case 0x1A4:
                Calls::FastCall(v4 + 0x148, &v28, v5, v4);
                v28 = __ROL4__(v28, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 8i64 * ((0xD7 * (_BYTE)v5) & 0x47)) + 0x678i64));
                goto LABEL_1035;
            case 0x1A5:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0) + 0x5E0i64);
                v28 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x1C0) * (FuckEnc::CacheRead<_BYTE>(v4 + 0x130) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v10 + 0x488) + 0x508i64)));
                goto LABEL_1035;
            case 0x1A6:
                v28 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x530) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x560) + 0x798i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x350);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x130);
                goto LABEL_1035;
            case 0x1A7:
                v28 = (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x530)) ^ 0xAC277570;
                v28 ^= v5 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x678) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x728) + 0x278i64));
                goto LABEL_1035;
            case 0x1A8:
                v28 = v11 - 0x64C68D9F * FuckEnc::CacheRead<_DWORD>(v4 + 0x6B8);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0);
                v28 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x328) + 4i64 * (v5 & 0xB));
                goto LABEL_1035;
            case 0x1A9:
                v28 = v11 ^ ((FuckEnc::CacheRead<_DWORD>(v4 + 0x318) >> 2) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6A0) + 4i64 * ((unsigned __int8)(0x14 * FuckEnc::CacheRead<_DWORD>(v4 + 0x10)) & 0x99)) << 0x19));
                goto LABEL_1035;
            case 0x1AA:
                v28 = v11 + v5;
                Calls::FastCall(v4 + 0x758, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x7A8) + 0x7A8i64) + 0x5C0i64));
                goto LABEL_1035;
            case 0x1AB:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 0x798i64) ^ v11;
                v28 = __ROR4__(v28, 0x8A * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 8i64 * (unsigned __int8)(0x55 * FuckEnc::CacheRead<_BYTE>(v4 + 0x510))) + 0x3E8i64));
                goto LABEL_1035;
            case 0x1AC:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x338) + 0x40i64) + 0x48i64);
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x1F8) + 0x160i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0xE)) + 0x130i64) + 1;
                goto LABEL_1035;
            case 0x1AD:
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x738) + 8i64 * (v5 & 0x42)) + 0x1F0i64) + 0x288i64) + 0x450i64) ^ 0x2Fu)) + 0x130i64) ^ v11;
                goto LABEL_1034;
            case 0x1AE:
                v28 = v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x2E0) ^ v11;
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 0x2F8i64) + 0x1F8i64) + 0x2E0i64);
                goto LABEL_1035;
            case 0x1AF:
                v28 = v11 + v5 + 0x440A0326;
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x700) + 4i64 * ((unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6A8) + 0x280i64), 6) & 0xCB));
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0);
                goto LABEL_1035;
            case 0x1B0:
                v28 = v11 - 0x343D9D5A + FuckEnc::CacheRead<_DWORD>(v4 + 0x280);
                Calls::FastCall(v4 + 0x380, &v28, v5, v4);
                goto LABEL_1035;
            case 0x1B1:
                v28 = v11 ^ 0x96C16C7A;
                LODWORD(v11) = __ROL4__(v11 ^ 0x96C16C7A, ~(FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F0) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1B)) + 0x2C8i64) + 4i64 * ((unsigned __int8)v5 & 0xE4)) * v5));
                goto LABEL_1034;
            case 0x1B2:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x188);
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x130) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x88) * v5 - 0x3EBCEB8 * FuckEnc::CacheRead<_DWORD>(v10 + 0x6E0));
                goto LABEL_1035;
            case 0x1B3:
                v28 = v11 + 1 + FuckEnc::CacheRead<_DWORD>(v4 + 0x460);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x140) + 0x4D0i64, &v28, v5, v4);
                goto LABEL_1035;
            case 0x1B4:
                v28 = v11 + ((0xD0FFD5A2 * FuckEnc::CacheRead<_DWORD>(v4 + 0x678)) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x658) + (FuckEnc::CacheRead<_DWORD>(v4 + 0x3E8) ^ 0x96C740D2)));
                goto LABEL_1035;
            case 0x1B5:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 0x1A0i64) + 8i64 * (((unsigned __int8)v5 ^ 0xEE) & 0xD3), &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x420));
                goto LABEL_1035;
            case 0x1B6:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x680) + 8i64 * (((unsigned __int8)v5 ^ 0xF3) & 0x5D)) + 0x2F0i64) + 8i64 * ((unsigned __int8)v5 & 0x86), &v28, v5, v4);
                goto LABEL_1035;
            case 0x1B7:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x130) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x708);
                Calls::FastCall(v10 + 0x390, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x6A8));
                goto LABEL_1035;
            case 0x1B8:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xA8);
                Calls::FastCall(v10 + 0x1F0, &v28, v5, v4);
                v28 = __ROR4__(v28, FuckEnc::CacheRead<_DWORD>(v4 + 0x3C0));
                goto LABEL_1035;
            case 0x1B9:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 0x160i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x13)) + 0x560i64) + 0x208i64);
                LODWORD(v11) = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x5D0) + 0x450i64));
                goto LABEL_1034;
            case 0x1BA:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 8i64 * (((unsigned __int8)v5 ^ 4) & 0xE5)) + 0x138i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x288);
                v28 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x3D0) + 0x2E0i64);
                goto LABEL_1035;
            case 0x1BB:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8);
                v28 = v11 ^ ~(v5 + FuckEnc::CacheRead<_DWORD>(v10 + 0x450));
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 0x798i64);
                goto LABEL_1035;
            case 0x1BC:
                v28 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x198) << 0x16);
                Calls::FastCall(v4 + 0x4D8, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x68));
                goto LABEL_1035;
            case 0x1BD:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x338);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x400) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x278) & 0x39), &v28, v5, v4);
                goto LABEL_1035;
            case 0x1BE:
                v18 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x40) + 0x88i64);
            LABEL_342:
                v28 = v11 + v18;
                Calls::FastCall(v4 + 0x620, &v28, v5, v4);
                goto LABEL_1035;
            case 0x1BF:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x6B8) ^ v11 ^ 0x472BE0EE;
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x728) + 0x660i64) + 0x140i64) + 0x7A0i64) + 0x5391401C;
                goto LABEL_1035;
            case 0x1C0:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x140) + 0x330i64) + 0x130i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x518);
                v28 = __ROL4__(v28, FuckEnc::CacheRead<_DWORD>(v10 + 0x280));
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x3C8);
                goto LABEL_1035;
            case 0x1C1:
                v28 = v11 + v5;
                Calls::FastCall(v4 + 0x388, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x738) + 8i64 * (unsigned __int8)(0xB9 * (FuckEnc::CacheRead<_BYTE>(v4 + 0x450) ^ 0x78))));
                goto LABEL_1035;
            case 0x1C2:
                v28 = v11 + 0x59433753;
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xC0) + 0x1D0i64) ^ (v11 + 0x59433753);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x330) + 0x488i64);
                v28 += FuckEnc::CacheRead<_DWORD>(v10 + 0x130);
                goto LABEL_1035;
            case 0x1C3:
                v28 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x130);
                v28 = __ROR4__(v28, FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0));
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2A8) + 8i64 * (unsigned __int8)~(_BYTE)v5) + 0x510i64);
                goto LABEL_1035;
            case 0x1C4:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 8i64 * (__ROL4__(v5, 8) & 0x73)) + 0x6A8i64) + 0x5A0i64, &v28, v5, v4);
                goto LABEL_1035;
            case 0x1C5:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x728);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x670) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x12)) + 0x580i64) + 8i64 * (__ROL4__(v5, 0x1C) & 0xFB), &v28, v5, v4);
                goto LABEL_1035;
            case 0x1C6:
                v28 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x2E0) ^ ~(FuckEnc::CacheRead<_BYTE>(v4 + 0x3C8) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x518) + 0x678i64)));
                goto LABEL_1035;
            case 0x1C7:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xB0);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x360) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x460), 9)) + 0x3D8i64, &v28, v5, v10);
                goto LABEL_1035;
            case 0x1C8:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3F0) + 8i64 * (unsigned __int8)(0x49 * v5)) + 0x1A8i64) + 8i64 * ((unsigned __int8)v5 ^ 0x42u), &v28, v5, v4);
                goto LABEL_1035;
            case 0x1C9:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x3C0) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D0) + 0x1E8i64) + 0x5D0i64) + 0x6D0i64);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x78);
                goto LABEL_1035;
            case 0x1CA:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x728) + 0x710i64);
                Calls::FastCall(v4 + 0x668, &v28, v5, v10);
                v28 = -v28 - 0x3B13FABE;
                goto LABEL_1035;
            case 0x1CB:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x510);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x478);
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 8i64 * (unsigned __int8)(0xBF * FuckEnc::CacheRead<_BYTE>(v10 + 0x7A0))) + 0x150i64) + 8i64 * (__ROL4__(v5, 0x12) & 0x39)) + 0x6B8i64) ^ v28;
                goto LABEL_1034;
            case 0x1CC:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x338);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x5C0) + 0x388i64, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x568));
                goto LABEL_1035;
            case 0x1CD:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5E0);
                Calls::FastCall(v4 + 0xF8, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x680) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x88) & 0xCB)));
                goto LABEL_1035;
            case 0x1CE:
                v28 = v11 + 0x2C58E491;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6A8);
                Calls::FastCall(v10 + 0x610, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8));
                goto LABEL_1035;
            case 0x1CF:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x7A8);
                v28 = ~(v11 ^ (8 * (FuckEnc::CacheRead<_DWORD>(v10 + 0x198) ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x78))));
                goto LABEL_1035;
            case 0x1D0:
                v28 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x140) + 0x3C0i64));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x660) + 0x6A8i64);
                v28 ^= 0xCED0FF3E * FuckEnc::CacheRead<_DWORD>(v10 + 0x50);
                goto LABEL_1035;
            case 0x1D1:
                v28 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x2E0)) ^ 0xF1EDA689;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x5E0i64) + 0x2D8i64);
                v28 += FuckEnc::CacheRead<_DWORD>(v10 + 0x6F0);
                goto LABEL_1035;
            case 0x1D2:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8);
                Calls::FastCall(v4 + 0x610, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x538) + 8i64 * ((unsigned __int8)v5 & 0x87)) + 0x440i64));
                goto LABEL_1035;
            case 0x1D3:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x658) * v5;
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x508);
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x330) + 0x700i64) + 4i64 * ((unsigned __int8)v5 & 0xB7)) ^ v28;
                goto LABEL_1034;
            case 0x1D4:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x3C8);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 0x1A8i64) + 8i64 * ((unsigned __int8)v5 & 0xBF), &v28, v5, v4);
                goto LABEL_1035;
            case 0x1D5:
                Calls::FastCall(v4 + 0x250, &v28, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x7A8);
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x48) + 0x798i64);
                goto LABEL_1035;
            case 0x1D6:
                v28 = v11 ^ (~FuckEnc::CacheRead<_DWORD>(v4 + 0x7A0) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x2E0) ^ 0xDu)) + 0x3E0i64) + 8i64 * ((unsigned __int8)v5 ^ 0x39u)) + 0x3C0i64));
                goto LABEL_1035;
            case 0x1D7:
                v28 = v11 - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2A8) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x17)) + 0x2D0i64) + 0xC0i64);
                v28 = v11 - v5 + 0x741955A7 * FuckEnc::CacheRead<_DWORD>(v10 + 0x2E0);
                goto LABEL_1035;
            case 0x1D8:
                v28 = v11 - v5;
                LODWORD(v11) = __ROL4__(v11 - v5, FuckEnc::CacheRead<_BYTE>(v4 + 0x570) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0x3F0i64) + 8i64 * (__ROL4__(v5, 6) & 0x4C)) + 0x308i64));
                goto LABEL_1034;
            case 0x1D9:
                v23 = (unsigned __int8)__ROL4__(v5, 6);
                v24 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 8i64 * (v5 & 0x25)) + 0x330i64) + 0xD0i64);
                goto LABEL_482;
            case 0x1DA:
                v28 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x5A8));
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 0x318i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x478) + 0x208i64);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x6F0);
                goto LABEL_1035;
            case 0x1DB:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) + 1;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x40);
                v28 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x5B8) + 4i64 * ((unsigned __int8)v5 ^ 0x38u)) ^ v28) + 0x78BBC045;
                goto LABEL_1035;
            case 0x1DC:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8) + 8i64 * (unsigned __int8)(0x32 * v5)) + 0x68i64) + 0x568i64);
                v28 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v10 + 0x78) + ~FuckEnc::CacheRead<_BYTE>(v4 + 0x6E0));
                goto LABEL_1035;
            case 0x1DD:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x568) + 0x560i64) + 0x588i64);
                Calls::FastCall(v10 + 0x290, &v28, v5, v4);
                goto LABEL_1035;
            case 0x1DE:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x278) + 0x6204FC57;
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x678);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 0x5E0i64);
                v28 += FuckEnc::CacheRead<_DWORD>(v10 + 0x158);
                goto LABEL_1035;
            case 0x1DF:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x678) * v5;
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x160) + 8i64 * ((unsigned __int8)v5 & 0x9F)) + 0x38i64) + 4i64 * (v5 & 0x24)) ^ v28;
                goto LABEL_1034;
            case 0x1E0:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x3E8);
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x130) - 0x2E2E00BF;
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x5A8i64) + 1;
                goto LABEL_1035;
            case 0x1E1:
                v28 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x318) & 0xFFFFFFF4;
                v28 -= (unsigned int)~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x440) + 0x88i64) >> 0xA;
                goto LABEL_1035;
            case 0x1E2:
                v28 = ((unsigned int)0xBFBD5B7 + 5) ^ (v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2A8) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x18)) + 0x98i64) + 4i64 * ((unsigned __int8)v5 & 0xA1)) + 0x2082C81E);
                goto LABEL_1035;
            case 0x1E3:
                Calls::FastCall(v4 + 0x240, &v28, v5, v4);
                v28 += (_DWORD)0x129DDAF8 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x288) + 0x798i64);
                goto LABEL_1035;
            case 0x1E4:
                v28 = v11 - 0x25E11856;
                Calls::FastCall(v4 + 0x3D8, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x440) + 0x480i64));
                goto LABEL_1035;
            case 0x1E5:
                v28 = v11 ^ 0xD46F0ED2;
                Calls::FastCall(v4 + 0x310, &v28, v5, v4);
                v28 = __ROR4__(v28, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x418) + 0x50i64));
                goto LABEL_1035;
            case 0x1E6:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x318);
                v28 = (v28 ^ ((unsigned int)~(0x622AE3E2 * FuckEnc::CacheRead<_DWORD>(v4 + 0x5A8)) >> 0x18)) + 0x16C30131;
                goto LABEL_1035;
            case 0x1E7:
                v28 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x428));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x560);
                Calls::FastCall(v4 + 0x520, &v28, v5, v10);
                v28 ^= v5;
                goto LABEL_1035;
            case 0x1E8:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 8i64 * (((unsigned __int8)v5 ^ 0x11) & 0x91)) + 0x1F0i64);
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x660) + 0x6A8i64) + 0x1E8i64) + 0x88i64);
                goto LABEL_1035;
            case 0x1E9:
                v28 = v11 ^ (v5 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x158) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x678i64)));
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x198);
                goto LABEL_1035;
            case 0x1EA:
                v28 = ~(v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0));
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x708) + 0x1B0i64) + 0x700i64) + 4i64 * ((unsigned __int8)v5 & 0xAA)) ^ v28 ^ 0xC3018944;
                goto LABEL_1034;
            case 0x1EB:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D0) + 0x738i64) + 8i64 * (__ROR4__(v5, 0x1C) & 0x56)) + 0x340i64);
                Calls::FastCall(v4 + 0x388, &v28, v5, v10);
                goto LABEL_1035;
            case 0x1EC:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 0x518i64) + 0x3C0i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x488);
                Calls::FastCall(v4 + 0x758, &v28, v5, v10);
                goto LABEL_1035;
            case 0x1ED:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x3C8);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 8i64 * ((unsigned __int8)v5 & 0xA8)) + 0x2D8i64);
                v28 += FuckEnc::CacheRead<_DWORD>(v10 + 0x650) + 1;
                goto LABEL_1035;
            case 0x1EE:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x6A0i64) + 4i64 * ((unsigned __int8)v5 & 0xEC)) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x518);
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(v10 + 0x798) ^ v28 ^ 0x3CFE76BB;
                goto LABEL_1034;
            case 0x1EF:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x138) ^ v11;
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 8i64 * ((unsigned __int8)(0x45 * v5) & 0xF5)) + 0x508i64);
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x3E8) ^ 0xCB03C4E9;
                goto LABEL_1035;
            case 0x1F0:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x288) + 0x798i64);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x278);
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x198) ^ 0xDFB1BE55;
                goto LABEL_1035;
            case 0x1F1:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x3C8);
                Calls::FastCall(v4 + 0xF8, &v28, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6A8);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x570);
                goto LABEL_1035;
            case 0x1F2:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x3C0) & 0x70)) + 0x308i64);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x7A0);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x418) + 0x678i64);
                goto LABEL_1035;
            case 0x1F3:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x88);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xA0);
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x558) + 4i64 * (unsigned __int8)__ROR4__(v5, 0x1F));
                v28 = __ROL4__(v28, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8) + 0x658i64));
                goto LABEL_1035;
            case 0x1F4:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x738) + 8i64 * ((unsigned __int8)__ROL4__(v5, 6) & 0xFC)) + 0x5B8i64) + 4i64 * ((unsigned __int8)v5 & 0xCF)) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x480);
                v28 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x138);
                goto LABEL_1035;
            case 0x1F5:
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x160) + 8i64 * ((unsigned __int8)v5 ^ 0x9Eu)) + 0x5C0i64) + 0x5D0i64) + 0x1F8i64) + 0x150i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 1)) + 0x1D0i64) ^ v11;
                goto LABEL_1034;
            case 0x1F6:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x708) + 0x670i64) + 8i64 * (v5 & 0x54)) + 0x3E8i64) + 1;
                goto LABEL_1035;
            case 0x1F7:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x280i64) ^ v11;
                v28 = v28 - ((0x5AC30131 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x3C8) ^ 0xC7B4552C)) | 0x15) - 0x52F95DFE;
                goto LABEL_1035;
            case 0x1F8:
                v28 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x428) >> 0x14) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x318) - 0x67020309);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x280) << 0x1A;
                goto LABEL_1035;
            case 0x1F9:
                Calls::FastCall(v4 + 0x5A0, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 0x5F0i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x13)) + 0x518i64) + 0x350i64));
                goto LABEL_1035;
            case 0x1FA:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F0) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 0x138i64) & 0x65)) + 0x480i64) + 0x3D0i64) + 0x10i64);
                goto LABEL_1035;
            case 0x1FB:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x488) + 0x1F8i64) + 0x188i64) + 0x5D0i64);
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x2C8i64) + 4i64 * ((0xF8 * FuckEnc::CacheRead<_BYTE>(v10 + 0x508)) & 0x32)) ^ v11;
                goto LABEL_1034;
            case 0x1FC:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x570);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0xD0i64) + 8i64 * ((0x14 * (_BYTE)v5) & 0x5B)) + 0x2C8i64) + 4i64 * ((0xFB * FuckEnc::CacheRead<_BYTE>(v4 + 0x2A0)) & 0xB));
                goto LABEL_1035;
            case 0x1FD:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x160) + 8i64 * ((unsigned __int8)v5 & 0x86)) + 0x338i64) + 0x538i64) + 8i64 * (v5 & 0x3A)) + 0x190i64) + 0x728i64) + 0x7A0i64);
                goto LABEL_1035;
            case 0x1FE:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8) + 0x570i64);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x78);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x568);
                v28 ^= v5 + FuckEnc::CacheRead<_DWORD>(v10 + 0x78);
                goto LABEL_1035;
            case 0x1FF:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0) + 0x318i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3D0);
                v28 = __ROL4__(v28, FuckEnc::CacheRead<_BYTE>(v10 + 0x2A0) + FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8) + 0x130i64));
                goto LABEL_1035;
            case 0x200:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x340) + 0x498i64) + 0x340i64) + 0x100i64, &v28, v5, v4);
                goto LABEL_1035;
            case 0x201:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x6B8) - v5;
                v28 = (FuckEnc::CacheRead<_DWORD>(v4 + 0x658) ^ v28) - v5;
                v28 = ~(v28 - FuckEnc::CacheRead<_DWORD>(v4 + 0x7A0));
                goto LABEL_1035;
            case 0x202:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x538) + 8i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x738) + 8i64 * ((unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x308), 0x1D) & 0xB7)) + 0x3C0i64), 0x13) & 0x36)) + 0x3A0i64, &v28, v5, v4);
                goto LABEL_1035;
            case 0x203:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x40);
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x508);
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x180) + 4i64 * (__ROL4__(~FuckEnc::CacheRead<_DWORD>(v4 + 0x2E0), 0x11) & 0x6C)) + v28 - 0x317D6E1;
                goto LABEL_1035;
            case 0x204:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x660) + 0x350i64) + 0x480i64);
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x3C0) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x650i64);
                goto LABEL_1035;
            case 0x205:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x2E0) - v5;
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x710i64) + 0x190i64) + 0x450i64);
                goto LABEL_1035;
            case 0x206:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8) + 0x718i64) + 0xA0i64) + 0xA8i64);
                LODWORD(v11) = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x670) + 8i64 * (unsigned __int8)(0xF5 * FuckEnc::CacheRead<_BYTE>(v4 + 0x508))) + 0x798i64);
                goto LABEL_1034;
            case 0x207:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x440);
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x160) + 8i64 * (((unsigned __int8)v5 ^ 0xB7) & 0xCA)) + 0x6E0i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x13)) + 0x6F0i64);
                goto LABEL_1035;
            case 0x208:
                v28 = ~(v5 ^ v11);
                Calls::FastCall(v4 + 0x768, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x728) + 0x2D0i64));
                goto LABEL_1035;
            case 0x209:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x338) + 0x1B0i64) + 0x4A8i64) + 0x338i64) + 0x498i64);
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x798);
                goto LABEL_1035;
            case 0x20A:
                Calls::FastCall(v4 + 0x110, &v28, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 0x338i64);
                v28 = __ROL4__(v28, FuckEnc::CacheRead<_DWORD>(v10 + 0x130));
                goto LABEL_1035;
            case 0x20B:
                v28 = ~__ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x318) ^ v5);
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x6B8);
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x2E0);
                goto LABEL_1035;
            case 0x20C:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0);
                Calls::FastCall(v10 + 0x148, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x318), 3)));
                goto LABEL_1035;
            case 0x20D:
                v28 = (v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0)) + 0x2D7F44E;
                v28 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5E0) + 0x2C8i64) + 4i64 * ((unsigned __int8)v5 ^ 0x28u));
                goto LABEL_1035;
            case 0x20E:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x658);
                LODWORD(v11) = v28 - FuckEnc::CacheRead<_DWORD>(v4 + 0x158);
                v28 = v11;
                v12 = (unsigned __int8)__ROR4__(v5, 0x13);
                v13 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x16)) + 0x470i64);
                goto LABEL_1033;
            case 0x20F:
                v28 = __ROR4__(v11, 0xE1);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x488) + 0x2D8i64) + 0x340i64);
                v28 = __ROR4__(v28, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0xD0) + 8i64 * (v5 & 0x38)) + 0x598i64));
                goto LABEL_1035;
            case 0x210:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xB0) + 0x3F0i64) + 8i64 * (unsigned __int8)(0x4B * v5)) + 0x420i64);
                LODWORD(v11) = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x7A0) - FuckEnc::CacheRead<_DWORD>(v4 + 0x450);
                goto LABEL_1034;
            case 0x211:
                v28 = v11 ^ (0xC358D0FF * FuckEnc::CacheRead<_DWORD>(v4 + 0x650));
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x3C8) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5E0) + 0x428i64);
                goto LABEL_1035;
            case 0x212:
                v28 = v11 ^ (~FuckEnc::CacheRead<_DWORD>(v4 + 0x650) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x420) + 0x470i64) + 4i64 * (unsigned __int8)(4 * v5)) ^ 0xD0FF752D));
                goto LABEL_1035;
            case 0x213:
                v28 = __ROR4__(v11, 0xC4);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0) + 0x498i64) + 0x330i64) + 0x2A8i64) + 8i64 * (unsigned __int8)(2 * v5)) + 0x460i64);
                goto LABEL_1035;
            case 0x214:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 8i64 * ((unsigned __int8)v5 & 0xD1)) + 0x130i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x78) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8) + 0x130i64));
                goto LABEL_1035;
            case 0x215:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8) + 0x3F0i64) + 8i64 * ((unsigned __int8)(0xD2 * v5) & 0x9D)) + 0x478i64);
                LODWORD(v11) = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x1D0) ^ FuckEnc::CacheRead<_BYTE>(v10 + 0x450));
                goto LABEL_1034;
            case 0x216:
                v28 = v5 ^ (v11 + 0x187ED3F9);
                Calls::FastCall(v4 + 0x358, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x160) + 8i64 * ((unsigned __int8)(0x9A * v5) & 0xC6)));
                goto LABEL_1035;
            case 0x217:
                v25 = FuckEnc::CacheRead<_QWORD>(v4 + 0x288);
                v26 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8);
                v27 = ((unsigned __int8)v5 ^ 0xFA) & 0x47;
                goto LABEL_545;
            case 0x218:
                Calls::FastCall(v4 + 0x250, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x660) + 0x5E0i64));
                v28 = (_DWORD)0xA216A40 + (v28 ^ 0xF713CBB2);
                goto LABEL_1035;
            case 0x219:
                v28 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 0x6F0i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x570) & 0xB5)) + 0x1F8i64) + 0x7A0i64);
                goto LABEL_1035;
            case 0x21A:
                Calls::FastCall(v4 + 0x390, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 0x18i64) + 8i64 * (unsigned __int8)(0x5A * v5)));
                v28 ^= 0xBCE60606;
                goto LABEL_1035;
            case 0x21B:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0) + 0x1C0i64);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x68) + 0x4A8i64) + 8i64 * (unsigned __int8)(0xBA * v5)) + 0x138i64);
                goto LABEL_1035;
            case 0x21C:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x2A0);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x350);
                v28 ^= ((unsigned int)0x7C3112D + 4) ^ FuckEnc::CacheRead<_DWORD>(v10 + 0x1D0) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x428);
                goto LABEL_1035;
            case 0x21D:
                v28 = ~(_DWORD)v11;
                v28 = ~(_DWORD)v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x488) + 0x10i64);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x38) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0), 0xC));
                goto LABEL_1035;
            case 0x21E:
                v28 = v11 - (v5 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x650i64) ^ (0x64FB7147 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x560) + 0x428i64)));
                goto LABEL_1035;
            case 0x21F:
                v28 = v11 - 0x17A8B614;
                v28 = v11 - 0x17A8B614 - FuckEnc::CacheRead<_DWORD>(v4 + 0x1D0);
                Calls::FastCall(v4 + 0x4D8, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x418));
                goto LABEL_1035;
            case 0x220:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x428) ^ v11;
                v28 += v5 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x728) + 0x708i64) + 0x5C8i64) + 0x278i64) | 0x11);
                goto LABEL_1035;
            case 0x221:
                v28 = v11 - 0x494E28B;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x340);
                v28 = v11 - 0x494E28B + v5 * (FuckEnc::CacheRead<_DWORD>(v10 + 0x658) ^ v5);
                v28 = __ROL4__(v28, FuckEnc::CacheRead<_DWORD>(v4 + 0x450));
                goto LABEL_1035;
            case 0x222:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8) + 0x2D8i64) + 0x730i64, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0));
                goto LABEL_1035;
            case 0x223:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x6B8) - FuckEnc::CacheRead<_DWORD>(v4 + 0x798) + 1;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x38) + 4i64 * (v5 & 0x48));
                goto LABEL_1035;
            case 0x224:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 8i64 * ((unsigned __int8)v5 & 0xB3)) + 0x5C0i64) + 0xA8i64) + 0x418i64);
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x280);
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x510);
                goto LABEL_1035;
            case 0x225:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0) + 0x518i64) + 0x5E0i64) + 0x488i64);
                LODWORD(v11) = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0xA8) + 0x7A8i64) + 0x410i64) + 4i64 * ((0xF0 * (_BYTE)v5) & 0x13));
                goto LABEL_1034;
            case 0x226:
                Calls::FastCall(v4 + 0x290, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x7A8));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x718);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x700) + 4i64 * ((unsigned __int8)v5 ^ 0xB4u));
                goto LABEL_1035;
            case 0x227:
                v28 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x460));
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x518) + 0x278i64) ^ 0xE7903512;
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x198);
                goto LABEL_1035;
            case 0x228:
                v28 = v5 ^ __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x650));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x718);
                Calls::FastCall(v4 + 0x3D8, &v28, v5, v10);
                goto LABEL_1035;
            case 0x229:
                v28 = v11 + v5;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x680) + 8i64 * (unsigned __int8)__ROL4__(v5, 0xA)) + 0x330i64);
                Calls::FastCall(v4 + 0x4E8, &v28, v5, v10);
                goto LABEL_1035;
            case 0x22A:
                v28 = v5 ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x498) + 0x548i64) + 8i64 * (unsigned __int8)(0xB9 * v5), &v28, v5, v4);
                goto LABEL_1035;
            case 0x22B:
                v28 = v11 ^ (0xB4610B40 * FuckEnc::CacheRead<_DWORD>(v4 + 0x6F0) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2A8) + 8i64 * (v5 & 0x53)) + 0x558i64) + 4i64 * ((unsigned __int8)(9 * v5) & 0xFA)));
                goto LABEL_1035;
            case 0x22C:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 0xC0i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x438) + 8i64 * (unsigned __int8)(0xFC * v5), &v28, v5, v4);
                goto LABEL_1035;
            case 0x22D:
                v28 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x680) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x5A8) ^ 0xF7) & 0x5E)) + 0x50i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x670i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 3)) + 0x1C0i64));
                goto LABEL_1035;
            case 0x22E:
                v28 = v11 - 0x6A3CFECF * v5 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x130) >> 2) * ((v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x5A8)) >> 0x13);
                goto LABEL_1035;
            case 0x22F:
                v28 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x2E0) & 0xFFFFFFEE) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3F0) + 8i64 * ((unsigned __int8)v5 ^ 0xA4u)) + 0x538i64) + 8i64 * (__ROR4__(v5, 0xE) & 0x5B)) + 0x3C8i64);
                goto LABEL_1035;
            case 0x230:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x158);
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 8i64 * ((unsigned __int8)(0x11 * FuckEnc::CacheRead<_BYTE>(v4 + 0x5A8)) & 0xC3)) + 0x460i64);
                goto LABEL_1035;
            case 0x231:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x2A8i64) + 8i64 * ((unsigned __int8)v5 ^ 0xF8u)) + 0x3D0i64);
                Calls::FastCall(v4 + 0x248, &v28, v5, v10);
                goto LABEL_1035;
            case 0x232:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x2A0) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x680) + 8i64 * (unsigned __int8)(0xF * v5)) + 0x2A0i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x208);
                v28 += FuckEnc::CacheRead<_DWORD>(v10 + 0x2E0);
                goto LABEL_1035;
            case 0x233:
                Calls::FastCall(v4 + 0x520, &v28, v5, v4);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x208) + 0x598i64) | 4;
                goto LABEL_1035;
            case 0x234:
                v28 = v11 - 0x7F3CEECF;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x40) + 0x538i64) + 8i64 * (__ROR4__(v5, 0xA) & 0x31)) + 0x1F8i64);
                v28 = (FuckEnc::CacheRead<_DWORD>(v10 + 0x570) ^ (v11 - 0x7F3CEECF)) - v5;
                goto LABEL_1035;
            case 0x235:
                v28 = v11 + v5 * ~FuckEnc::CacheRead<_DWORD>(v4 + 0x510);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x318);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 0x6F0i64);
                goto LABEL_1035;
            case 0x236:
                v28 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x50) ^ 0xC3018944);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 0x440i64);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x3F0) + 8i64 * (v5 & 0x14)) + 0x3C0i64);
                goto LABEL_1035;
            case 0x237:
                v25 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2D0);
                v26 = FuckEnc::CacheRead<_QWORD>(v4 + 0xD0);
                v27 = (0xDE * (_BYTE)v5) & 0x62;
            LABEL_545:
                Calls::FastCall(v25 + 0x390, &v28, v5, FuckEnc::CacheRead<_QWORD>(v26 + 8 * v27));
                goto LABEL_1035;
            case 0x238:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8) + 0x88i64) + 1;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0) + 0x68i64);
                v28 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x7A0);
                goto LABEL_1035;
            case 0x239:
                v28 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x658) >> 7);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x78);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x18) + 8i64 * ((unsigned __int8)v5 & 0xBB)) + 0x280i64);
                goto LABEL_1035;
            case 0x23A:
                v28 = v11 ^ (0xFCBC11ED * FuckEnc::CacheRead<_DWORD>(v4 + 0x318) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x538) + 8i64 * (unsigned __int8)(0x6A * v5)) + 0x470i64) + 4i64 * (((unsigned __int8)v5 ^ 4) & 0x84)));
                goto LABEL_1035;
            case 0x23B:
                v28 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x7A0) ^ 0xD6);
                Calls::FastCall(v4 + 0x258, &v28, v5, v4);
                goto LABEL_1035;
            case 0x23C:
                v28 = v11 ^ ((FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x340) + 0x3C0i64) ^ v5) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 8i64 * ((unsigned __int8)v5 & 0xFA)) + 0x658i64));
                goto LABEL_1035;
            case 0x23D:
                v28 = v11 - 0x7C67A1AE;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x478) + 0x6C8i64) + 8i64 * ((unsigned __int8)v5 & 0xB5), &v28, v5, v4);
                goto LABEL_1035;
            case 0x23E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x710);
                v28 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) + FuckEnc::CacheRead<_DWORD>(v10 + 0x198) * ~(0x454805F * FuckEnc::CacheRead<_DWORD>(v4 + 0x428)));
                goto LABEL_1035;
            case 0x23F:
                v28 = v11 + ~FuckEnc::CacheRead<_DWORD>(v4 + 0x158);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x708) + 0x388i64, &v28, v5, v4);
                goto LABEL_1035;
            case 0x240:
                Calls::FastCall(v4 + 0x210, &v28, v5, v4);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x728) + 0x5D0i64) + 0x3C8i64);
                goto LABEL_1035;
            case 0x241:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x650);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0) + 0xC0i64) + 0x518i64);
                Calls::FastCall(v4 + 0x390, &v28, v5, v10);
                goto LABEL_1035;
            case 0x242:
                v28 = ~(v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x198));
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x180) + 4i64 * (unsigned __int8)__ROL4__(~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x140) + 0x158i64), 0x15));
                goto LABEL_1035;
            case 0x243:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x140) + 0x1F0i64) + 0x650i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x530) ^ 0x9A27B290);
                goto LABEL_1035;
            case 0x244:
                v28 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0) + 0x160i64) + 8i64 * (v5 & 0x70)) + 0x6F0i64));
                v28 = ~(v28 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x288) + 0x2A0i64));
                goto LABEL_1035;
            case 0x245:
                v28 = v11 + (((FuckEnc::CacheRead<_DWORD>(v4 + 0x318) ^ v5) * ((FuckEnc::CacheRead<_DWORD>(v4 + 0x278) - 0x3F7411F7) ^ 0xADEA4EEC)) | 9);
                goto LABEL_1035;
            case 0x246:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 8i64 * (unsigned __int8)__ROR4__(v5, 4)) + 0x478i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x690) + 8i64 * (unsigned __int8)__ROL4__(v5, 6), &v28, v5, v4);
                goto LABEL_1035;
            case 0x247:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 8i64 * ((unsigned __int8)(0x22 * FuckEnc::CacheRead<_BYTE>(v4 + 0x3E8)) & 0xB1)) + 0x7A0i64) ^ v11;
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x440) + 0xC0i64) + 0x280i64);
                goto LABEL_1035;
            case 0x248:
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x670) + 8i64 * ((unsigned __int8)~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x680) + 8i64 * (unsigned __int8)(0x65 * v5)) + 0x3C0i64) & 0xD5)) + 0xD0i64) + 8i64 * (v5 & 0x5B)) + 0x598i64) ^ v11;
                goto LABEL_1034;
            case 0x249:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x2E0) ^ 0x1A) & 0x3E)) + 0x3F0i64) + 8i64 * ((unsigned __int8)v5 & 0xB1)) + 0xA0i64);
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x48) + 0x130i64);
                goto LABEL_1035;
            case 0x24A:
                v28 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x7A0) | 0x15) - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x710);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) ^ FuckEnc::CacheRead<_DWORD>(v10 + 0x308);
                goto LABEL_1035;
            case 0x24B:
                v28 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x50));
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x658);
                v28 = (FuckEnc::CacheRead<_DWORD>(v4 + 0x650) ^ v28) + 0x2D6696AB;
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x88);
                goto LABEL_1035;
            case 0x24C:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA0) + 0x418i64);
                v28 = ~(v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x7A0) + (FuckEnc::CacheRead<_DWORD>(v4 + 0x50) ^ FuckEnc::CacheRead<_DWORD>(v10 + 0x78)));
                goto LABEL_1035;
            case 0x24D:
                v28 = v11 + 0xD38CAA3C * FuckEnc::CacheRead<_DWORD>(v4 + 0x78) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x708) + 0x2F8i64) + 0x150i64) + 8i64 * ((unsigned __int8)v5 ^ 0xDAu)) + 0x278i64);
                goto LABEL_1035;
            case 0x24E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x188);
                Calls::FastCall(v4 + 0x4C8, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v10 + 0x280), 0xE)));
                v28 -= v5;
                goto LABEL_1035;
            case 0x24F:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x420) + 0x328i64) + 4i64 * (v5 & 0x4B)) ^ v11 ^ 0x255E893C;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 0x338i64);
                LODWORD(v11) = __ROL4__(v28, FuckEnc::CacheRead<_DWORD>(v10 + 0x460));
                goto LABEL_1034;
            case 0x250:
                v28 = __ROL4__(v11 + 0x416078F8, 0x31);
                Calls::FastCall(v4 + 0x238, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8));
                goto LABEL_1035;
            case 0x251:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 0x528i64) + 8i64 * (unsigned __int8)(0x54 * v5)) + 0x350i64);
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x78) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x798) + 1);
                goto LABEL_1035;
            case 0x252:
                v28 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 0x650i64));
                v28 += ~((0x5CAAD1C2 * FuckEnc::CacheRead<_DWORD>(v4 + 0x508)) & 0xFFFFFFE5 ^ 0xD609D58A);
                goto LABEL_1035;
            case 0x253:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8);
                v28 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x88) >> 0x15) ^ (0x1E096240 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x510) + FuckEnc::CacheRead<_DWORD>(v10 + 0x7A0)));
                goto LABEL_1035;
            case 0x254:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x48);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x5D0) + 0x100i64, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x6A8));
                goto LABEL_1035;
            case 0x255:
                LODWORD(v11) = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x2E0) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 0x480i64) + 0x3F0i64) + 8i64 * (unsigned __int8)(0xE6 * v5)) + 0x450i64) ^ 0xC7E16BE5);
                goto LABEL_1034;
            case 0x256:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 0x1E8i64) + 0x418i64);
                v28 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8) + 8i64 * (unsigned __int8)(0x39 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v10 + 0x6A0) + 4i64 * (unsigned __int8)__ROL4__(v5, 0x17)))) + 0x88i64) | 9);
                goto LABEL_1035;
            case 0x257:
                v28 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x158) ^ 0xD1FF4145);
                v28 = __ROR4__(v28 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x728) + 0x68i64) + 0x328i64) + 4i64 * ((0xFA * (_BYTE)v5) & 0x35)), 0x85);
                goto LABEL_1035;
            case 0x258:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x708) + 0x610i64, &v28, v5, v4);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x88);
                goto LABEL_1035;
            case 0x259:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x728);
                v28 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8) + 0x678i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1E0) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v10 + 0x198) & 0xFB));
                goto LABEL_1035;
            case 0x25A:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x798);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x140);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x340) + 0x218i64) + 8i64 * (__ROL4__(FuckEnc::CacheRead<_DWORD>(v10 + 0x158), 0x1F) & 0x26)) + 0x428i64);
                goto LABEL_1035;
            case 0x25B:
                v28 = (unsigned int)0x51D6218 + v11 + 1;
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x488) + 0x308i64);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x418) + 0x518i64) + 0x50i64);
                goto LABEL_1035;
            case 0x25C:
                v28 = (unsigned int)0x11993B6F ^ ((FuckEnc::CacheRead<_DWORD>(v4 + 0x3C8) ^ v11) - 0x3CEECE5C);
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x660) + 0x560i64) + 0xB0i64) + 0x570i64);
                goto LABEL_1035;
            case 0x25D:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8) + 8i64 * (unsigned __int8)(0x27 * v5)) + 0x478i64);
                v28 = FuckEnc::CacheRead<_DWORD>(v10 + 0x158) ^ v11;
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8) + 0x78i64) + 1;
                goto LABEL_1035;
            case 0x25E:
                v28 = ~(_DWORD)v11;
                v28 = ~(_DWORD)v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(v4 + 0x538) + 0x728i64) + 0x3C0i64);
                goto LABEL_1035;
            case 0x25F:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2A8) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x450) & 0x53)) + 0x650i64) ^ v11;
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x428) | 0x1A;
                goto LABEL_1035;
            case 0x260:
                Calls::FastCall(v4 + 0xF8, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 0x7A8i64) + 0x5D0i64) + 0x340i64));
                goto LABEL_1035;
            case 0x261:
                v28 = ~(_DWORD)v11;
                v28 = v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x3C0) ^ ~(_DWORD)v11;
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x360) + 8i64 * ((unsigned __int8)(0xC7 * v5) & 0xB5)) + 0x3C8i64);
                goto LABEL_1035;
            case 0x262:
                v28 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x598i64) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x498) + 0x510i64) - 0x3CEECE66);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x508);
                goto LABEL_1035;
            case 0x263:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x568) + 0x338i64);
                v28 = v11 ^ FuckEnc::CacheRead<_DWORD>(v10 + 0x130) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x6F0) ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x5A8);
                goto LABEL_1035;
            case 0x264:
                v28 = v11 ^ (0xA5823BEB * FuckEnc::CacheRead<_DWORD>(v4 + 0x3E8));
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x7A8) + 0x1D0i64);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x198);
                goto LABEL_1035;
            case 0x265:
                v28 = v11 + ~((v5 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) >> 0x1B)) ^ 0xA862D5C3);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x308) ^ 0x899209D2;
                goto LABEL_1035;
            case 0x266:
                v28 = v11 - 0x79A55FEC * v5 * FuckEnc::CacheRead<_DWORD>(v4 + 0x450) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x738) + 8i64 * (unsigned __int8)__ROL4__(v5, 0xA)) + 0x678i64);
                goto LABEL_1035;
            case 0x267:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x130) ^ 0x2Du)) + 0xA0i64);
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x5A8) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x488) + 0x450i64);
                goto LABEL_1035;
            case 0x268:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0x718i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x430) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v10 + 0x1D0) ^ 0xFE) & 0x81), &v28, v5, v4);
                goto LABEL_1035;
            case 0x269:
                Calls::FastCall(v4 + 0xF0, &v28, v5, v4);
                v28 ^= (FuckEnc::CacheRead<_DWORD>(v4 + 0x3C8) * v5) | 0x1C;
                goto LABEL_1035;
            case 0x26A:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x480);
                LODWORD(v11) = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x1E0) + 4i64 * ((unsigned __int8)(0x46 * v5) & 0xF1)) ^ (0x34CFC612 - FuckEnc::CacheRead<_DWORD>(v4 + 0x460)));
                goto LABEL_1034;
            case 0x26B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x40);
                Calls::FastCall(v4 + 0x258, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x3F0) + 8i64 * (unsigned __int8)(0xA1 * FuckEnc::CacheRead<_BYTE>(v4 + 0x3C0))));
                goto LABEL_1035;
            case 0x26C:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 0x568i64) + 0x3F0i64) + 8i64 * ((unsigned __int8)v5 & 0xAA)) + 0x208i64);
                Calls::FastCall(v4 + 0x630, &v28, v5, v10);
                goto LABEL_1035;
            case 0x26D:
                v28 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x68) + 0x508i64) ^ 0xC301311D) + 1;
                v28 ^= -FuckEnc::CacheRead<_DWORD>(v4 + 0x658) - 0x493CEED0;
                goto LABEL_1035;
            case 0x26E:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 0x680i64) + 8i64 * ((0xFD * (_BYTE)v5) & 0x43)) + 0x1E8i64) + 0x708i64) + 0x5D0i64) + 0x418i64);
                LODWORD(v11) = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x2A0);
                goto LABEL_1034;
            case 0x26F:
                v28 = v11 ^ ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x50) >> 0x15);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x440);
                v28 += FuckEnc::CacheRead<_DWORD>(v10 + 0x7A0) + 0x3252287;
                goto LABEL_1035;
            case 0x270:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x6B8) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x18) + 8i64 * (__ROL4__(v5, 5) & 0x27)) + 0x708i64) + 0x6B0i64);
                v28 += 0x69EA9D6A * FuckEnc::CacheRead<_DWORD>(v10 + 0x570);
                goto LABEL_1035;
            case 0x271:
                v28 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x558) + 4i64 * (((unsigned __int8)(0xDD * FuckEnc::CacheRead<_BYTE>(v4 + 0x1D0)) ^ 8) & 0x4A)) ^ ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x158) ^ v5);
                goto LABEL_1035;
            case 0x272:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x2A0);
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x488) + 0x510i64);
                v28 = __ROR4__(v28, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 0x6E0i64));
                goto LABEL_1035;
            case 0x273:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x50) ^ v11;
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x1D0) ^ 0x25715D92;
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x660) + 0x7A0i64);
                goto LABEL_1035;
            case 0x274:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F0) + 8i64 * (unsigned __int8)(0x1F * v5)) + 0x588i64) + 0x350i64) + 0x1D0i64) ^ v11;
                v28 += v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x598);
                goto LABEL_1035;
            case 0x275:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0x420i64);
                v28 = v11 + ((FuckEnc::CacheRead<_DWORD>(v4 + 0x428) + FuckEnc::CacheRead<_DWORD>(v10 + 0x198) + 0x3168CD3D) ^ 0xF7A844E4);
                goto LABEL_1035;
            case 0x276:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x480);
                LODWORD(v11) = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x40) + 0x680i64) + 8i64 * (__ROL4__(v5, 3) & 0x45)) + 0x6A0i64) + 4i64 * ((0xFE * (_BYTE)v5) & 2)) - FuckEnc::CacheRead<_DWORD>(v10 + 0x5A8);
                goto LABEL_1034;
            case 0x277:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x530);
                v28 ^= ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x280) + 0x5DD0FF4F);
                v28 ^= v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x3E8);
                goto LABEL_1035;
            case 0x278:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x2E0) - 0x3CFECE73;
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x308) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x670) + 8i64 * (unsigned __int8)(0x6A * FuckEnc::CacheRead<_BYTE>(v4 + 0x2E0))) + 0x460i64);
                goto LABEL_1035;
            case 0x279:
                Calls::FastCall(v4 + 0xC8, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x670) + 8i64 * ((unsigned __int8)v5 & 0x9F)) + 0x670i64) + 8i64 * (unsigned __int8)(0x86 * FuckEnc::CacheRead<_BYTE>(v4 + 0x278))));
                goto LABEL_1035;
            case 0x27A:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x718);
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x18) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x180) + 4i64 * (unsigned __int8)(6 * v5)) & 0xD)) + 0x160i64) + 8i64 * (unsigned __int8)(0x82 * v5)) + 0x10i64);
                goto LABEL_1035;
            case 0x27B:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x1D0);
                v28 = __ROR4__(v28, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D0) + 0x2E0i64) * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3F0) + 8i64 * ((unsigned __int8)v5 ^ 0xC5u)) + 0x1C0i64));
                goto LABEL_1035;
            case 0x27C:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8);
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 8) + 8i64 * ((unsigned __int8)v5 ^ 0xB7u)) + 0x360i64) + 8i64 * ((unsigned __int8)v5 ^ 0x1Du)) + 0x2C8i64) + 4i64 * ((unsigned __int8)v5 & 0xF6)) ^ v11;
                goto LABEL_1034;
            case 0x27D:
                v28 = v11 ^ 0xC3367189;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x350) + 0x140i64) + 0x498i64) + 0x7A8i64);
                v28 = (v11 ^ 0xC3367189) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x488) + 0x6F0i64);
                goto LABEL_1035;
            case 0x27E:
                v28 = v5 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x738) + 8i64 * (unsigned __int8)(0xC1 * v5)) + 0x38i64) + 4i64 * ((unsigned __int8)(0x88 * v5) & 0xCD)) ^ v11);
                goto LABEL_1035;
            case 0x27F:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x78);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x418);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x598) * ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x280) ^ v5);
                goto LABEL_1035;
            case 0x280:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x40) + 0x158i64) ^ v11 ^ 0xE7F91F1B;
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x1D0) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0) + 0x6E0i64);
                goto LABEL_1035;
            case 0x281:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x2E0) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x338);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x3C8);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 0x568i64) + 0x2E0i64);
                goto LABEL_1035;
            case 0x282:
                v28 = __ROR4__(__ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x460)), 0x23);
                v28 = __ROR4__(v28, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x508) & 0x99)) + 0x78i64));
                goto LABEL_1035;
            case 0x283:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x3E8) + 0x42F006F;
                Calls::FastCall(v4 + 0x5E8, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x440));
                goto LABEL_1035;
            case 0x284:
                v28 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x798) << 0x1D);
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x670) + 8i64 * (unsigned __int8)(0xB0 * v5)) + 0x3E0i64) + 8i64 * (-v5 & 0xD)) + 0x138i64);
                goto LABEL_1035;
            case 0x285:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x658);
                Calls::FastCall(v4 + 0x290, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x498) + 0xA0i64) + 0x188i64));
                goto LABEL_1035;
            case 0x286:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x728) + 0x718i64) + 0x478i64) + 0x480i64) + 0x3C0i64) - (FuckEnc::CacheRead<_DWORD>(v4 + 0x138) >> 0x15);
                goto LABEL_1035;
            case 0x287:
                v28 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x568) + 0x360i64) + 8i64 * (__ROR4__(v5, 3) & 0x11)) + 0x180i64) + 4i64 * (v5 & 0x69)));
                LODWORD(v11) = v28 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x130) >> 4);
                goto LABEL_1034;
            case 0x288:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8);
                v28 = v11 ^ FuckEnc::CacheRead<_DWORD>(v10 + 0x460) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x68) + 0x1F0i64) + 0x1F0i64) + 0x7A0i64);
                goto LABEL_1035;
            case 0x289:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x738) + 8i64 * (unsigned __int8)(0x99 * v5)) + 0x510i64);
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x3E8) - 0x503B617D * FuckEnc::CacheRead<_DWORD>(v4 + 0x278);
                goto LABEL_1035;
            case 0x28A:
                v28 = v11 ^ 0x76CEABA6;
                LODWORD(v11) = (v11 ^ 0x76CEABA6) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x350) + 0xD0i64) + 8i64 * (unsigned __int8)(4 * v5)) + 0x478i64) + 0x410i64) + 4i64 * (unsigned __int8)(0xB * v5));
                goto LABEL_1034;
            case 0x28B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x588);
                v28 = __ROL4__(v11, (((unsigned int)0x8D1FF3E + 3) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x3E8)) + (FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v10 + 0x2C8) + 4i64 * ((unsigned __int8)__ROL4__(v5, 0x14) & 0x98)) & 0xE2));
                goto LABEL_1035;
            case 0x28C:
                v28 = (FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) ^ v11) + 0x3AE9D4A0;
                Calls::FastCall(v4 + 0x3D8, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x7A8));
                goto LABEL_1035;
            case 0x28D:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x570) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x478) + 0x488i64);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x160) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x1E)) + 0x508i64) + 0x17DC506F;
                goto LABEL_1035;
            case 0x28E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x330);
                v28 = FuckEnc::CacheRead<_DWORD>(v10 + 0x5A8) ^ v11 ^ 0x7504CB5F;
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x428) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x280) + 0x1F087C6F);
                goto LABEL_1035;
            case 0x28F:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x658);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 0x480i64);
                v28 += FuckEnc::CacheRead<_DWORD>(v10 + 0x2A0);
                goto LABEL_1035;
            case 0x290:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x400) + 8i64 * (v5 & 0x5F), &v28, v5, v4);
                goto LABEL_1035;
            case 0x291:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x428);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x588);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x588) + 0x598i64);
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x78);
                goto LABEL_1035;
            case 0x292:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x3C0) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8) + 8i64 * (__ROR4__(v5, 0xE) & 0x3D)) + 0x668i64, &v28, v5, v4);
                goto LABEL_1035;
            case 0x293:
                Calls::FastCall(v4 + 0x80, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x420) + 0x218i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 5)));
                goto LABEL_1035;
            case 0x294:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x208i64);
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x88) * ((FuckEnc::CacheRead<_DWORD>(v4 + 0x650) - 0x57B77E7A) ^ 0xB1C31131);
                goto LABEL_1035;
            case 0x295:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 0x258i64, &v28, v5, v4);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 0x3C0i64);
                goto LABEL_1035;
            case 0x296:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x480);
                v28 = v11 - (FuckEnc::CacheRead<_DWORD>(v10 + 0x460) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x6F0) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0) + 0x518i64) + 0x530i64)));
                goto LABEL_1035;
            case 0x297:
                Calls::FastCall(v4 + 0x4E0, &v28, v5, v4);
                v28 -= 0x59ED53A7;
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x6B8);
                goto LABEL_1035;
            case 0x298:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 8i64) + 8i64 * (v5 & 0x4A)) + 0x130i64);
                LODWORD(v11) = v28 - FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) - v5;
                goto LABEL_1034;
            case 0x299:
                Calls::FastCall(v4 + 0x1C8, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x660) + 0x518i64) + 0x418i64));
                goto LABEL_1035;
            case 0x29A:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x68);
                v28 = v11 - (FuckEnc::CacheRead<_DWORD>(v10 + 0x650) ^ 0x19282DF6);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x510) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8) + 0x450i64);
                goto LABEL_1035;
            case 0x29B:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x6B8);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0xC0) + 0x3D8i64, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8));
                goto LABEL_1035;
            case 0x29C:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 8i64 * (unsigned __int8)(0xAD * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x498) + 0x10i64))) + 0x2D0i64) + 0x3E8i64);
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D0) + 0x88i64);
                goto LABEL_1035;
            case 0x29D:
                v28 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x1C0) * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D0) + 0x7A0i64));
                v28 = __ROR4__(v28, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x1D0i64)) - 0x23885D93;
                goto LABEL_1035;
            case 0x29E:
                v28 = ((unsigned int)0xADBCF64 + 1) ^ (v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x518) + 0x450i64));
                v28 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1E0) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x10), 0x10));
                goto LABEL_1035;
            case 0x29F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xA0);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x548) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v10 + 0x570) * FuckEnc::CacheRead<_DWORD>(v4 + 0x7A0), 8), &v28, v5, v4);
                goto LABEL_1035;
            case 0x2A0:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x340) + 0x110i64, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x728) + 0x710i64));
                goto LABEL_1035;
            case 0x2A1:
                Calls::FastCall(v4 + 0x628, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x360) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D0) + 0x658i64), 0x13)) + 0x40i64) + 0xA8i64));
                goto LABEL_1035;
            case 0x2A2:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x2E0) ^ v11;
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x318) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x208) + 0x650i64) ^ 0x8DFCC46F;
                goto LABEL_1035;
            case 0x2A3:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x208);
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x3E8);
                v28 += v5 * ((FuckEnc::CacheRead<_DWORD>(v4 + 0x460) >> 0x17) + 1);
                goto LABEL_1035;
            case 0x2A4:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 8i64 * (__ROL4__(v5, 0xB) & 0x64)) + 0x450i64);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x428) << 0xA;
                goto LABEL_1035;
            case 0x2A5:
                v28 = v11 ^ (0x4C44EFA4 * FuckEnc::CacheRead<_DWORD>(v4 + 0x798));
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x728) + 0x6E0i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x6F0) | 0x15);
                goto LABEL_1035;
            case 0x2A6:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x510);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5E0) + 0x5D0i64);
                v28 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x510);
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x6B8) + 1;
                goto LABEL_1035;
            case 0x2A7:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x3C0);
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x508) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x410) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x460) & 8));
                goto LABEL_1035;
            case 0x2A8:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x588);
                Calls::FastCall(v4 + 0x380, &v28, v5, v10);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x798i64);
                goto LABEL_1035;
            case 0x2A9:
                v28 = v11 + v5;
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x440) + 0x3C0i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x88i64) + v11 + v5 + 1;
                goto LABEL_1035;
            case 0x2AA:
                v28 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x280));
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0) + 0x248i64, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x6A8));
                goto LABEL_1035;
            case 0x2AB:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6A8) + 0x678i64);
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x3C8);
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0x598i64);
                goto LABEL_1035;
            case 0x2AC:
                //(*(void(__fastcall**)(int*, _QWORD, __int64))v4)(&v28, v5, v4);
                Calls::FastCall(v4, &v28, v5, v4);
                v28 = __ROR4__(v28, 0x73);
                v28 = __ROL4__(v28, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x330) + 0x460i64));
                goto LABEL_1035;
            case 0x2AD:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x530) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 0x6B8i64) * (0x7589AC92 * FuckEnc::CacheRead<_DWORD>(v4 + 0x3C0) + 0x3FF3B3B2);
                goto LABEL_1035;
            case 0x2AE:
                Calls::FastCall(v4 + 0x380, &v28, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x208) + 0x1F8i64);
                v28 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x7A0);
                goto LABEL_1035;
            case 0x2AF:
                v28 = v11 ^ 0xC5CE8926;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x420) + 0x6B0i64) + 0x4A8i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 1)) + 0x478i64);
                LODWORD(v11) = __ROR4__(v11 ^ 0xC5CE8926, FuckEnc::CacheRead<_DWORD>(v10 + 0x280));
                goto LABEL_1034;
            case 0x2B0:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x340) + 0x360i64) + 8i64 * (v5 & 0x4C)) + 0x2F8i64) + 0x660i64);
                LODWORD(v11) = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x68) + 0x5A8i64));
                goto LABEL_1034;
            case 0x2B1:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F0) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x308) ^ 0xC7) & 0xBD)) + 0x1E8i64);
                v28 = FuckEnc::CacheRead<_DWORD>(v10 + 0x3C8) ^ v11;
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0x190i64) + 0x678i64);
                goto LABEL_1035;
            case 0x2B2:
                v28 = v11 ^ 0x33602C11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x518) + 0x140i64);
                Calls::FastCall(v4 + 0x778, &v28, v5, v10);
                goto LABEL_1035;
            case 0x2B3:
                v28 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x350) + 0x798i64) ^ v5);
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x68) + 0x5B8i64) + 4i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x130), 6));
                goto LABEL_1035;
            case 0x2B4:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x130);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x728);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x3C8) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x160) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x15)) + 0x508i64);
                goto LABEL_1035;
            case 0x2B5:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 0x418i64);
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x160) + 8i64 * ((unsigned __int8)~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v10 + 0x88) & 0xAE)) + 0x48i64) + 0x78i64) ^ v11;
                goto LABEL_1035;
            case 0x2B6:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x678);
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x308);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x318) + ~FuckEnc::CacheRead<_DWORD>(v4 + 0x598);
                goto LABEL_1035;
            case 0x2B7:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2A8) + 8i64 * (unsigned __int8)(0x2B * v5)) + 0x208i64);
                Calls::FastCall(v4 + 0x108, &v28, v5, v10);
                v28 += v5;
                goto LABEL_1035;
            case 0x2B8:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x3C8) * v5;
                v28 += ~FuckEnc::CacheRead<_DWORD>(v4 + 0x198) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x88) * v5);
                goto LABEL_1035;
            case 0x2B9:
                v28 = v11 - 0x5A9EFBB6;
                v28 = v11 - 0x5A9EFBB6 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5B8) + 4i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 8i64 * ((0xA * (unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x650)) & 0x3E)) + 0x5A8i64) ^ 0x10) & 0x5A));
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x428);
                goto LABEL_1035;
            case 0x2BA:
                v28 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x68) + 0x798i64) ^ v11);
                v28 = ~(v28 - FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0));
                goto LABEL_1035;
            case 0x2BB:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F0) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x318) | 0x1D, 0x16)) + 0x6C8i64) + 8i64 * (v5 & 0x3C), &v28, v5, v4);
                goto LABEL_1035;
            case 0x2BC:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x5A8);
                v28 ^= (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0x280i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x560) + 0x510i64)) ^ 0xD6AAA2C0;
                goto LABEL_1035;
            case 0x2BD:
                v28 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x598)) ^ 0x7DD0FF15;
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x160) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x678) & 0xC3)) + 0x78i64);
                goto LABEL_1035;
            case 0x2BE:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x578) + 8i64 * (__ROL4__(~FuckEnc::CacheRead<_DWORD>(v4 + 0x3C0), 6) & 0xD1), &v28, v5, v4);
                v28 = ~v28;
                goto LABEL_1035;
            case 0x2BF:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x798) ^ v11;
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 8i64 * (v5 & 0x33)) + 0x318i64) & 0xFFFFFFEA;
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x308);
                goto LABEL_1035;
            case 0x2C0:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x598) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x190);
                v28 = __ROL4__(v28, FuckEnc::CacheRead<_BYTE>(v10 + 0x78) + FuckEnc::CacheRead<_BYTE>(v4 + 0x2A0));
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x678);
                goto LABEL_1035;
            case 0x2C1:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x530) ^ v11 ^ 0xD55F8692;
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x558) + 4i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5E0) + 0x798i64) ^ 0x10) & 0x30)) ^ 0x63C10777;
                goto LABEL_1035;
            case 0x2C2:
                v28 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x138) ^ (-FuckEnc::CacheRead<_DWORD>(v4 + 0x650) - 0x773CEED0);
                v28 = __ROL4__(v28, FuckEnc::CacheRead<_DWORD>(v4 + 0x5A8));
                goto LABEL_1035;
            case 0x2C3:
                Calls::FastCall(v4 + 0x760, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3F0) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) & 0x70)) + 0x2D0i64));
                goto LABEL_1035;
            case 0x2C4:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x598) ^ v11;
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D0) + 0x3C0i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x140) + 0x440i64) + 0x450i64);
                goto LABEL_1035;
            case 0x2C5:
                LODWORD(v11) = v11 - v5 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x68) + 0x3E8i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x440) + 0x98i64) + 4i64 * ((0xF * (_BYTE)v5) & 0x28));
                goto LABEL_1034;
            case 0x2C6:
                LODWORD(v11) = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x538) + 8i64 * ((unsigned __int8)v5 ^ 0x45u)) + 0x298i64) + 8i64 * ((unsigned __int8)v5 & 0xD5)) + 0x2A8i64) + 8i64 * ((0xD7 * (_BYTE)v5) & 0x54)) + 0x5A8i64);
                goto LABEL_1034;
            case 0x2C7:
                Calls::FastCall(v4 + 0x768, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x440) + 0xD0i64) + 8i64 * ((unsigned __int8)v5 & 0xCB)));
                goto LABEL_1035;
            case 0x2C8:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x360) + 8i64 * (((unsigned __int8)v5 ^ 0xDD) & 0x72)) + 0x6F0i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xA8);
                v28 -= 0x7F2E00BF * FuckEnc::CacheRead<_DWORD>(v10 + 0x130);
                goto LABEL_1035;
            case 0x2C9:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x318);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x440) + 0x5A8i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x418);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x480) + 0x460i64);
                goto LABEL_1035;
            case 0x2CA:
                v28 = __ROL4__(v11, 0x95) ^ 0x34B27059;
                v28 ^= (FuckEnc::CacheRead<_DWORD>(v4 + 0x598) << 9) + (FuckEnc::CacheRead<_DWORD>(v4 + 0x50) ^ 0xC3018944);
                goto LABEL_1035;
            case 0x2CB:
                Calls::FastCall(v4 + 0x290, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 8i64 * (__ROL4__(v5, 0xA) & 0xFC)) + 0x710i64));
                goto LABEL_1035;
            case 0x2CC:
                v28 = (v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x6F0)) ^ 0x655ED28E;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x418i64);
                v28 += FuckEnc::CacheRead<_DWORD>(v10 + 0x6E0);
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x460);
                goto LABEL_1035;
            case 0x2CD:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA0) + 0x130i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x560);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x538) + 8i64 * ((unsigned __int8)v5 & 0x83)) + 0x6E0i64) + 0x1A8F15E9;
                goto LABEL_1035;
            case 0x2CE:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x78) ^ v11;
                v28 ^= 0x4984214F * ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x330) + 0x488i64) + 0x570i64) & 0xFFFFFFFE);
                goto LABEL_1035;
            case 0x2CF:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x510) ^ v11;
                v28 = __ROR4__(v28, FuckEnc::CacheRead<_BYTE>(v4 + 0x798) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x68) + 0x420i64) + 0x678i64) >> 0x14));
                goto LABEL_1035;
            case 0x2D0:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x360) + 8i64 * (unsigned __int8)__ROR4__(v5, 9)) + 0x5C0i64) + 0x7A0i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8);
                v28 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x50);
                goto LABEL_1035;
            case 0x2D1:
                v28 = v11 ^ (0xF8F11B22 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0x18i64) + 8i64 * (((unsigned __int8)v5 ^ 3) & 0x7B)) + 0x530i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xC0);
                v28 = __ROR4__(v28, FuckEnc::CacheRead<_DWORD>(v10 + 0x1C0));
                goto LABEL_1035;
            case 0x2D2:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x280);
                v28 = v28 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x360) + 8i64 * (((unsigned __int8)v5 ^ 0xBA) & 0xD5)) + 0x428i64) - FuckEnc::CacheRead<_DWORD>(v4 + 0x678) - v5;
                goto LABEL_1035;
            case 0x2D3:
                v28 = (v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x460)) ^ 0x56C31131;
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x40) + 0xB0i64) + 0x1B0i64) + 0x2E0i64) ^ v5;
                goto LABEL_1035;
            case 0x2D4:
                v28 = v11 - 0x31CCD789;
                Calls::FastCall(v4 + 0xF0, &v28, v5, v4);
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6A8) + 0x50i64);
                goto LABEL_1035;
            case 0x2D5:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x340);
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x78) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x538) + 8i64 * (unsigned __int8)(0x5E * v5)) + 0x558i64) + 4i64 * ((unsigned __int8)v5 & 0xED));
                goto LABEL_1035;
            case 0x2D6:
                v28 = v11 ^ (0x24D1FF41 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x560) + 0x278i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x418);
                v28 += FuckEnc::CacheRead<_DWORD>(v10 + 0x530) + 1;
                goto LABEL_1035;
            case 0x2D7:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x650);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x518);
                Calls::FastCall(v4 + 0x5E8, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x18) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x10)));
                goto LABEL_1035;
            case 0x2D8:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0);
                v28 = v11 + ~FuckEnc::CacheRead<_DWORD>(v10 + 0x2E0);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x308) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 0x1D0i64);
                goto LABEL_1035;
            case 0x2D9:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x6F0) ^ v11;
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x308);
                Calls::FastCall(v4 + 0x108, &v28, v5, v4);
                v28 += 0x38316BC0;
                goto LABEL_1035;
            case 0x2DA:
                v28 = (unsigned int)0x9C4A09E + v11;
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x2E0);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6A8) + 0x40i64);
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x6B0) + 0x450i64);
                goto LABEL_1035;
            case 0x2DB:
                v28 = ~(_DWORD)v11;
                v28 = __ROR4__(~(_DWORD)v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x1D0));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x6A0) + 4i64 * (~(_BYTE)v5 & 0x28)) + 1;
                goto LABEL_1035;
            case 0x2DC:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x7A8) + 0x3C8i64);
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x98i64) + 4i64 * (v5 & 0x4B));
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x450);
                goto LABEL_1035;
            case 0x2DD:
                v28 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x50));
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x78);
                //(*(void(__fastcall**)(int*, _QWORD, _QWORD))v4)(&v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x568));
                Calls::FastCall(v4, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x568));
                goto LABEL_1035;
            case 0x2DE:
                v28 = v11 - 0x1ED90B7D;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x578) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x88), 0xD), &v28, v5, v4);
                goto LABEL_1035;
            case 0x2DF:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x658) ^ v11;
                LODWORD(v11) = __ROR4__(v28, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x478) + 0x670i64) + 8i64 * (v5 & 0x43)) + 0x498i64) + 0x1C0i64));
                goto LABEL_1034;
            case 0x2E0:
                v28 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x440) + 0xC0i64) + 0x288i64) + 0x470i64) + 4i64 * ((unsigned __int8)__ROR4__(v5, 0x1F) & 0xAF)));
                LODWORD(v11) = v28 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x158) << 0x1C);
                goto LABEL_1034;
            case 0x2E1:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x450);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0) + 0x240i64, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x2D0));
                goto LABEL_1035;
            case 0x2E2:
                v21 = (unsigned __int8)v5 & 0x84;
                v22 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x440) + 0x738i64);
            LABEL_392:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v22 + 8 * v21) + 0x760i64, &v28, v5, v4);
                goto LABEL_1035;
            case 0x2E3:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x68);
                v28 = v11 ^ FuckEnc::CacheRead<_DWORD>(v10 + 0x280) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x570) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x418) + 0x198i64) * v5);
                goto LABEL_1035;
            case 0x2E4:
                LODWORD(v11) = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x738) + 8i64 * ((unsigned __int8)v5 & 0xEA)) + 0xA0i64) + 0x6B0i64) + 0x2D0i64) + 0x680i64) + 8i64 * (__ROR4__(v5, 0x1E) & 0x16)) + 0x1D0i64);
                goto LABEL_1034;
            case 0x2E5:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x660) + 0x630i64, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x710));
                v28 ^= 0x67DC4932u;
                goto LABEL_1035;
            case 0x2E6:
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x498) + 0x2F8i64) + 0x670i64) + 8i64 * (unsigned __int8)(0xDF * v5)) + 0x3F0i64) + 8i64 * (((unsigned __int8)v5 ^ 0x10) & 0xB6)) + 0x2F8i64) + 0x570i64) ^ v11;
                goto LABEL_1034;
            case 0x2E7:
                Calls::FastCall(v4 + 0x3D8, &v28, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 0x188i64);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x530);
                goto LABEL_1035;
            case 0x2E8:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2A8) + 8i64 * (unsigned __int8)(0x62 * FuckEnc::CacheRead<_BYTE>(v4 + 0x530))) + 0x2A0i64);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x330) + 0x188i64) + 0x598i64);
                goto LABEL_1035;
            case 0x2E9:
                v28 = v11 ^ (v5 * FuckEnc::CacheRead<_DWORD>(v4 + 0x530) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0) + 0x510i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x318) ^ 0x3E5889E2));
                goto LABEL_1035;
            case 0x2EA:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 0xA0i64);
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x48) + 0x158i64);
                v28 ^= ~FuckEnc::CacheRead<_DWORD>(v4 + 0x198);
                goto LABEL_1035;
            case 0x2EB:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x288);
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x508) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x150) + 8i64 * (unsigned __int8)(0xF * v5)) + 0x2E0i64) - 0x2F00343C;
                goto LABEL_1035;
            case 0x2EC:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8) + 0x6C8i64) + 8i64 * (__ROR4__(v5, 0x1B) & 0x24), &v28, v5, v4);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x570);
                goto LABEL_1035;
            case 0x2ED:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x3E8) ^ v11;
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F0) + 8i64 * (((unsigned __int8)v5 ^ (unsigned __int8)~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x6F0)) & 0x22)) + 0x3C8i64) + 0x7795FC4A;
                goto LABEL_1035;
            case 0x2EE:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x568) + 0x670i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 8)) + 0x68i64) + 0x2D8i64) + 0x1B0i64) + 0x588i64);
                LODWORD(v11) = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x308);
                goto LABEL_1034;
            case 0x2EF:
                v28 = ~(_DWORD)v11;
                Calls::FastCall(v4 + 0x6E8, &v28, v5, v4);
                v28 += ~FuckEnc::CacheRead<_DWORD>(v4 + 0x678);
                goto LABEL_1035;
            case 0x2F0:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x2E0i64);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 0x670i64) + 8i64 * (__ROL4__(v5, 0x18) & 0x47)) + 0x428i64);
                goto LABEL_1035;
            case 0x2F1:
                v28 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x78));
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x568) + 0x18i64) + 8i64 * (v5 & 0x36)) + 0x50i64);
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x7A0);
                goto LABEL_1035;
            case 0x2F2:
                v28 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x3E8) ^ v5);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x68) + 0x660i64);
                v28 += FuckEnc::CacheRead<_DWORD>(v10 + 0x1D0) * FuckEnc::CacheRead<_DWORD>(v4 + 0x2A0);
                goto LABEL_1035;
            case 0x2F3:
                v28 = ~(_DWORD)v11;
                v28 = ~(_DWORD)v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x728) + 0x218i64) + 8i64 * ((unsigned __int8)v5 & 0xC0)) + 0x700i64) + 4i64 * (v5 & 0x50));
                goto LABEL_1035;
            case 0x2F4:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x440) + 0xF8i64, &v28, v5, v4);
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x7A0) >> 0x1F;
                goto LABEL_1035;
            case 0x2F5:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D0) + 0x1E8i64) + 0x360i64) + 8i64 * (unsigned __int8)(0xC8 * v5)) + 0x6D0i64) + 0x560i64) + 0x488i64) + 0x650i64);
                goto LABEL_1035;
            case 0x2F6:
                v28 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x7A8) + 0x2E0i64) & 0xFFFFFFF3) + 1;
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x88);
                goto LABEL_1035;
            case 0x2F7:
                v28 = v11 + 0x39371F4A * FuckEnc::CacheRead<_DWORD>(v4 + 0x508);
                v28 = (v28 ^ (0xFC000000 * FuckEnc::CacheRead<_DWORD>(v4 + 0x1D0))) - v5;
                goto LABEL_1035;
            case 0x2F8:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x488i64) + 0x3C0i64);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x560) + 0x280i64);
                v28 = __ROL4__(v28, FuckEnc::CacheRead<_DWORD>(v4 + 0x2E0));
                goto LABEL_1035;
            case 0x2F9:
                v28 = (v11 + v5) ^ 0xC35084EA;
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x330) + 0x208i64) + 0x308i64) & 0xFFFFFFF8;
                goto LABEL_1035;
            case 0x2FA:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 0x7A0i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x140) + 0x150i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x1C)) + 0x1F8i64);
                LODWORD(v11) = v28 - FuckEnc::CacheRead<_DWORD>(v10 + 0x530);
                goto LABEL_1034;
            case 0x2FB:
                v28 = ~(_DWORD)v11;
                Calls::FastCall(v4 + 0x768, &v28, v5, v4);
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x6B8);
                goto LABEL_1035;
            case 0x2FC:
                v28 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xB0) + 0x5B8i64) + 4i64 * (unsigned __int8)(0x50 * v5)) ^ v11) - 0x53635EFE;
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x508);
                v28 = __ROL4__(v28, FuckEnc::CacheRead<_DWORD>(v4 + 0x2E0));
                goto LABEL_1035;
            case 0x2FD:
                v28 = v5 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8) + 0x5D0i64) + 0x5A8i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x68);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x510);
                goto LABEL_1035;
            case 0x2FE:
                v28 = v11 - 0x725834C6 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 0x50i64);
                v28 = ~(__ROR4__(v28, FuckEnc::CacheRead<_DWORD>(v4 + 0x570)) + 0x3EBF914D);
                goto LABEL_1035;
            case 0x2FF:
                v28 = ~(_DWORD)v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x420);
                v28 = ~(_DWORD)v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x3E0) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x598) ^ 0xFC) & 0x1B)) + 0x158i64);
                goto LABEL_1035;
            case 0x300:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x7A0) ^ v11;
                v28 = (v28 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 0xA0i64) + 0x658i64)) ^ 0x717D26E3;
                goto LABEL_1035;
            case 0x301:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x708) + 0x198i64) + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0) + 0x38i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 5));
                goto LABEL_1035;
            case 0x302:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x130);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x728) + 0x670i64) + 8i64 * (unsigned __int8)(0x49 * v5)) + 0x420i64) + 0x480i64);
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(v10 + 0x198) ^ v28;
                goto LABEL_1034;
            case 0x303:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x6B8);
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x280);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x480);
                Calls::FastCall(v4 + 0x520, &v28, v5, v10);
                goto LABEL_1035;
            case 0x304:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8);
                Calls::FastCall(v10 + 0x730, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x18) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x13)));
                goto LABEL_1035;
            case 0x305:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 0x440i64) + 0x2D0i64) + 0x5C0i64) + 0x318i64) ^ v11;
                v28 = __ROL4__(v28, (_DWORD)0xA77D6F8 + 5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x10));
                goto LABEL_1035;
            case 0x306:
                v28 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x2A0) & 0xFFFFFFE3);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x40);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x660) + 0x38i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 0xD)) ^ v5;
                goto LABEL_1035;
            case 0x307:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8);
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x798) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 8i64 * ((unsigned __int8)(0x31 * v5) & 0x83)) + 0x5A8i64) ^ 0x8AC31131);
                goto LABEL_1035;
            case 0x308:
                v28 = v11 + 0x6399BD11;
                v28 = v11 + 0x6399BD11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8) + 8i64 * (((unsigned __int8)v5 ^ 0x93) & 0xEE)) + 0x538i64) + 8i64 * (unsigned __int8)(0x9B * v5)) + 0x6E0i64) ^ 0x7ADB738E);
                goto LABEL_1035;
            case 0x309:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xC0) + 0x5F0i64) + 8i64 * ((unsigned __int8)__ROL4__(v5, 0x1E) & 0xBD)) + 0x1A0i64) + 8i64 * (unsigned __int8)(0x72 * v5), &v28, v5, v4);
                goto LABEL_1035;
            case 0x30A:
                v28 = __ROL4__(v11 + 0x6B5A2F01, 0x4D);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 0x140i64) + 0x568i64);
                v28 = ~(FuckEnc::CacheRead<_DWORD>(v10 + 0x1C0) ^ v28);
                goto LABEL_1035;
            case 0x30B:
                v28 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x598));
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x510i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x208) + 0x5C8i64) + 0x658i64);
                goto LABEL_1035;
            case 0x30C:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x538) + 8i64 * ((unsigned __int8)(0x78 * v5) & 0x9D)) + 0x2D0i64) + 0xA8i64);
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x2E0) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 0x78i64);
                goto LABEL_1035;
            case 0x30D:
                v28 = ~(v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x140) + 0x2E0i64) + 0x19DD44F0 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 0x678i64)));
                goto LABEL_1035;
            case 0x30E:
                v28 = v11 ^ (0x621C20E1 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x208) + 0x3E8i64));
                v28 += ((FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) ^ 0xFFFFFFFD) + 1) << 0x1D;
                goto LABEL_1035;
            case 0x30F:
                LODWORD(v11) = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x700i64) + 4i64 * (unsigned __int8)(0xBD * (FuckEnc::CacheRead<_DWORD>(v4 + 0x158) + 0x44))) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x10) * v5));
                goto LABEL_1034;
            case 0x310:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x518) + 0x1C0i64) + 1;
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2A8) + 8i64 * ((unsigned __int8)v5 ^ 0xE3u)) + 0x510i64);
                goto LABEL_1035;
            case 0x311:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x508);
                v20 = ((unsigned __int8)v5 ^ 0xFD) & 0x46;
                v19 = FuckEnc::CacheRead<_QWORD>(v4 + 0x18);
            LABEL_359:
                Calls::FastCall(v4 + 0x760, &v28, v5, FuckEnc::CacheRead<_QWORD>(v19 + 8 * v20));
                goto LABEL_1035;
            case 0x312:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x3C0) ^ v11;
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x650);
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x568) + 0x738i64) + 8i64 * ((unsigned __int8)v5 & 0xC9)) + 0x798i64);
                goto LABEL_1035;
            case 0x313:
                v28 = (FuckEnc::CacheRead<_DWORD>(v4 + 0x598) ^ v11) + 0x570B9243;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x568);
                v28 = ~(v28 + FuckEnc::CacheRead<_DWORD>(v10 + 0x2A0));
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x198);
                goto LABEL_1035;
            case 0x314:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x350i64) + 0x2D0i64) + 0x2A8i64) + 8i64 * ((unsigned __int8)v5 ^ 0x6Au)) + 0x660i64) + 0x5A8i64);
                goto LABEL_1035;
            case 0x315:
                v28 = (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x650)) ^ 0x553CEDC2;
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x708) + 0x130i64) - v5 + 1;
                goto LABEL_1035;
            case 0x316:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x338) + 0x338i64);
                Calls::FastCall(v10 + 0x240, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8));
                goto LABEL_1035;
            case 0x317:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F0) + 8i64 * (unsigned __int8)(0x18 * ~((FuckEnc::CacheRead<_BYTE>(v4 + 0x570) * v5) ^ 0x91))) + 0x188i64) + 0x3E8i64);
                goto LABEL_1035;
            case 0x318:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8);
                Calls::FastCall(v4 + 0x3A0, &v28, v5, v10);
                v28 ^= 0xAA94C6BA * FuckEnc::CacheRead<_DWORD>(v4 + 0x308);
                goto LABEL_1035;
            case 0x319:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xC0) + 0x728i64);
                v28 = v11 + ~(0xC30131AD * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x1F8) + 0x420i64) + 0x530i64));
                goto LABEL_1035;
            case 0x31A:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x708) + 0x478i64) + 0x738i64) + 8i64 * (unsigned __int8)v5) + 0x250i64, &v28, v5, v4);
                goto LABEL_1035;
            case 0x31B:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x198) - 0x6FDE2293;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x40) + 0x40i64) + 0x350i64);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x38) + 4i64 * (v5 & 0x76));
                goto LABEL_1035;
            case 0x31C:
                v28 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x6B8));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x568) + 0x5E0i64);
                Calls::FastCall(v4 + 0x390, &v28, v5, v10);
                goto LABEL_1035;
            case 0x31D:
                LODWORD(v11) = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D0) + 0x1F8i64) + 0x360i64) + 8i64 * (v5 & 0x6F)) + 0x48i64) + 0x5E0i64) + 0x570i64);
                goto LABEL_1034;
            case 0x31E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x140);
                Calls::FastCall(v10 + 0x5E8, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x7A8) + 0x1B0i64));
                goto LABEL_1035;
            case 0x31F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3D0);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8) + 0x730i64, &v28, v5, FuckEnc::CacheRead<_QWORD>(v10 + 0x340));
                goto LABEL_1035;
            case 0x320:
                v28 = v5 ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 0x3D0i64) + 0x680i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x14)) + 0x588i64);
                LODWORD(v11) = (v5 ^ v11) - FuckEnc::CacheRead<_DWORD>(v10 + 0x88);
                goto LABEL_1034;
            case 0x321:
                Calls::FastCall(v4 + 0x258, &v28, v5, v4);
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) ^ v5 ^ 0xA9B12C9F;
                goto LABEL_1035;
            case 0x322:
                v28 = ~(v11 + 0x1DB6AA1);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x488) + 0xC0i64);
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x6A8) + 0x1C0i64) - (v11 + 0x1DB6AA1);
                goto LABEL_1035;
            case 0x323:
                v28 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x330) + 0x298i64) + 8i64 * (unsigned __int8)(0x6F * v5)) + 0x2D0i64) + 0x50i64) - 0x49FABFEF * FuckEnc::CacheRead<_DWORD>(v4 + 0x198));
                goto LABEL_1035;
            case 0x324:
                v28 = v11 + 0x20C5D537;
                v28 = v11 + 0x20C5D537 + FuckEnc::CacheRead<_DWORD>(v4 + 0x598);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x50) | 0x1C;
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x318);
                goto LABEL_1035;
            case 0x325:
                v28 = v11 + (((unsigned int)0x9AEA812 + 4) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x280));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x498);
                v28 = __ROR4__(v28, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x528) + 8i64 * (unsigned __int8)(0xC * v5)) + 0x650i64) & 0xF2);
                goto LABEL_1035;
            case 0x326:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 8i64 * ((unsigned __int8)__ROR4__(0x8A0EF21A * FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0), 0x19) & 0xD1)) + 0x130i64);
                v28 ^= 0xA7FF8E22 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x50) ^ v5);
                goto LABEL_1035;
            case 0x327:
                v28 = v11 ^ (-FuckEnc::CacheRead<_DWORD>(v4 + 0x3E8) - 0x3CFE76BD);
                v28 = v28 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x488) + 0x5B8i64) + 4i64 * (unsigned __int8)(0xD0 * v5)) + 0x45169FBF;
                goto LABEL_1035;
            case 0x328:
                v28 = v11 ^ (0x81568F92 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3F0) + 8i64 * (unsigned __int8)__ROL4__(0x2784D765 * FuckEnc::CacheRead<_DWORD>(v4 + 0x130), 0x17)) + 0x530i64));
                goto LABEL_1035;
            case 0x329:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x360) + 8i64 * (unsigned __int8)__ROR4__(v5, 0xF)) + 0x478i64);
                v28 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v10 + 0x3E8) + ~FuckEnc::CacheRead<_BYTE>(v4 + 0x2A0));
                goto LABEL_1035;
            case 0x32A:
                v28 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x670) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x3C8) & 0xCE)) + 0x1B0i64) + 0x2E0i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x1C)) + 0x6B8i64));
                goto LABEL_1035;
            case 0x32B:
                LODWORD(v11) = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x518) + 0x4A8i64) + 8i64 * (unsigned __int8)(0x9D * v5)) + 0x188i64) + 0x470i64) + 4i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0x6E0i64) ^ 0xA7u)));
                goto LABEL_1034;
            case 0x32C:
                v28 = v11 - 0x780E5A9C * FuckEnc::CacheRead<_DWORD>(v4 + 0x450);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x598) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3F0) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x78) & 0xB7)) + 0x280i64);
                goto LABEL_1035;
            case 0x32D:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 8i64 * (unsigned __int8)(0xC * v5)) + 0x150i64) + 8i64 * ((unsigned __int8)v5 ^ 0x40u)) + 0x1F8i64) + 0x6A8i64);
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(v10 + 0x530) ^ v11;
                goto LABEL_1034;
            case 0x32E:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 0x658i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x708) + 0x418i64);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x1F8) + 0x340i64) + 0x50i64);
                goto LABEL_1035;
            case 0x32F:
                v28 = v11 ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x3C0));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x7A8) + 0x5E0i64);
                v28 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x510);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x158);
                goto LABEL_1035;
            case 0x330:
                v28 = v11 + ~FuckEnc::CacheRead<_DWORD>(v4 + 0x678);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x488) + 0x48i64) + 0x710i64);
                v28 = __ROR4__(v28, FuckEnc::CacheRead<_DWORD>(v10 + 0x318));
                goto LABEL_1035;
            case 0x331:
                v28 = v11 + 0x3CFECE89;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x680) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x10)) + 0x210i64, &v28, v5, v4);
                goto LABEL_1035;
            case 0x332:
                v28 = __ROL4__(v11, 1);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x1A8) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v10 + 0x678) & 0xAC), &v28, v5, v4);
                goto LABEL_1035;
            case 0x333:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x50) + 1;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x3C8);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x658);
                goto LABEL_1035;
            case 0x334:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8);
                v28 = FuckEnc::CacheRead<_DWORD>(v10 + 0x2A0) ^ v11;
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0) + 0x570i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x450) + 1);
                goto LABEL_1035;
            case 0x335:
                v28 = v11 + 0x3CFECE3C;
                v28 = __ROR4__(v11 + 0x3CFECE3C, ~FuckEnc::CacheRead<_BYTE>(v4 + 0x570));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x208);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x6B0) + 0x50i64);
                goto LABEL_1035;
            case 0x336:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x40) + 0xA8i64);
                LODWORD(v11) = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x68) + 0xD0i64) + 8i64 * ((0xFE * (_BYTE)v5) & 0x36)) + 0x218i64) + 8i64 * (((unsigned __int8)v5 ^ 0xFE) & 9)) + 0x598i64);
                goto LABEL_1034;
            case 0x337:
                //(*(void(__fastcall**)(int*, _QWORD, _QWORD))v4)(&v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xC0) + 0x478i64));
                Calls::FastCall(v4, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xC0) + 0x478i64));
                goto LABEL_1035;
            case 0x338:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x598) * v5;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5E0) + 0x330i64);
                v28 = ~(FuckEnc::CacheRead<_DWORD>(v10 + 0x530) ^ v28);
                goto LABEL_1035;
            case 0x339:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x708) + 0x438i64) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x518) + 0x2E0i64) & 0x83), &v28, v5, v4);
                goto LABEL_1035;
            case 0x33A:
                v28 = v11 + 0x6E6FBA96;
                Calls::FastCall(v4 + 0x620, &v28, v5, v4);
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x10);
                goto LABEL_1035;
            case 0x33B:
                v28 = v11 + 1 + FuckEnc::CacheRead<_DWORD>(v4 + 0x658);
                Calls::FastCall(v4 + 0x4A0, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0xA8));
                goto LABEL_1035;
            case 0x33C:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x1D0);
                v28 ^= ~FuckEnc::CacheRead<_DWORD>(v4 + 0x450);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F0) + 8i64 * (((unsigned __int8)v5 ^ 0xDB) & 0x6C)) + 0x6F0i64);
                goto LABEL_1035;
            case 0x33D:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x130);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x288) + 0x708i64) + 0x1B0i64);
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x160) + 8i64 * ((unsigned __int8)__ROL4__(v5, 0x12) & 0xD1)) + 0x6F0i64);
                goto LABEL_1035;
            case 0x33E:
                LODWORD(v11) = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x670i64) + 8i64 * (v5 & 0x63)) + 0x160i64) + 8i64 * (unsigned __int8)(0xE6 * v5)) + 0x410i64) + 4i64 * (((unsigned __int8)v5 ^ 0x10) & 0x3E));
                goto LABEL_1034;
            case 0x33F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x40);
                v28 = v11 + ((unsigned int)~FuckEnc::CacheRead<_DWORD>(v10 + 0x2A0) >> 0x1D);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x3C8i64);
                goto LABEL_1035;
            case 0x340:
                v28 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0xA8i64) + 0x88i64));
                Calls::FastCall(v4 + 0x388, &v28, v5, v4);
                v28 = ~v28;
                goto LABEL_1035;
            case 0x341:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x508);
                Calls::FastCall(v4 + 0x110, &v28, v5, v4);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x6B8) * v5;
                goto LABEL_1035;
            case 0x342:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D0) + 0x188i64) + 0x188i64) + 0x190i64) + 0x350i64);
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x140) + 0x50i64) - v5;
                goto LABEL_1035;
            case 0x343:
                v28 = v11 ^ (~FuckEnc::CacheRead<_DWORD>(v4 + 0x88) << 0xE);
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x488) + 0x558i64) + 4i64 * ((0xFA * (_BYTE)v5) & 0x17)) << 0x1A;
                goto LABEL_1035;
            case 0x344:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x418);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x2B8) + 8i64 * (__ROL4__(v5, 0xF) & 0xB5), &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0xC0));
                goto LABEL_1035;
            case 0x345:
                v28 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x2A0);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x360) + 8i64 * (unsigned __int8)(0xFD * v5)) + 0x280i64);
                goto LABEL_1035;
            case 0x346:
                v28 = (v5 ^ v11 ^ 0xD9FF62C2) - v5;
                LODWORD(v11) = v28 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x708) + 0x150i64) + 8i64 * ((unsigned __int8)(0x51 * v5) & 0xE9)) + 0x6E0i64);
                goto LABEL_1034;
            case 0x347:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x10);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x498);
                v28 = __ROL4__(v28, FuckEnc::CacheRead<_BYTE>(v4 + 0x7A0) * (FuckEnc::CacheRead<_BYTE>(v10 + 0x598) ^ 0xAC));
                goto LABEL_1035;
            case 0x348:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x208);
                v28 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v10 + 0x6F0) ^ v5);
                Calls::FastCall(v4 + 0x108, &v28, v5, v4);
                goto LABEL_1035;
            case 0x349:
                v28 = v11 + v5 + 0x7A14E9D4;
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x130);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x188) + 0x2C8i64) + 4i64 * ((unsigned __int8)__ROR4__(v5, 1) & 0xBC));
                goto LABEL_1035;
            case 0x34A:
                Calls::FastCall(v4 + 0x358, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 0x528i64) + 8i64 * ((unsigned __int8)v5 & 0xBF)));
                goto LABEL_1035;
            case 0x34B:
                v28 = __ROR4__(v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x88i64), v5) ^ 0xB6A42320;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x518);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x130);
                goto LABEL_1035;
            case 0x34C:
                v28 = v11 - 0x3B678962;
                v28 = v11 - 0x3B678962 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x288) + 0xC0i64) + 0x568i64) + 0x738i64) + 8i64 * ((unsigned __int8)(0xEA * v5) & 0xC2)) + 0x510i64);
                goto LABEL_1035;
            case 0x34D:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 0x728i64);
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x728) + 0x150i64) + 8i64 * (unsigned __int8)(0x56 * (FuckEnc::CacheRead<_DWORD>(v10 + 0x3C0) - 0x48))) + 0x138i64) ^ v11;
                goto LABEL_1034;
            case 0x34E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xA0);
                Calls::FastCall(v10 + 0x4D0, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 8i64 * (unsigned __int8)(0x44 * FuckEnc::CacheRead<_BYTE>(v4 + 0x6B8))));
                goto LABEL_1035;
            case 0x34F:
                v28 = v11 - 0x302E528C;
                v28 = (unsigned int)0x11B7488F ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 8i64 * ((0xEE * (_BYTE)v5) & 0x26)) + 0x280i64) ^ (v11 - 0x302E528C);
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x88);
                goto LABEL_1035;
            case 0x350:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x7A0);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x738) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x280), 0x15)) + 0x1F8i64) + 0x350i64) + 0x460i64) | 0xF;
                goto LABEL_1035;
            case 0x351:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x508);
                v28 += 0x522F00A1 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x530), 3)) + 0x5D0i64) + 0x2E0i64) >> 3);
                goto LABEL_1035;
            case 0x352:
                v28 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x560) + 0x3C0i64) ^ v11) - 0x6D1FF41;
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x530i64) << 0x10;
                goto LABEL_1035;
            case 0x353:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5F0) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x6F0) ^ 0x18) & 0x5E)) + 0x5E0i64) + 0x150i64) + 8i64 * ((unsigned __int8)v5 & 0x93)) + 0x418i64) + 0x6D0i64) + 0x798i64);
                goto LABEL_1035;
            case 0x354:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x340);
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x6E0);
                v28 = (v28 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x570) - ((_DWORD)0x9916321 + 3)) ^ 0xDFD0FF18) - 0x3CEECE92;
                goto LABEL_1035;
            case 0x355:
                Calls::FastCall(v4 + 0x398, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x440) + 0x288i64) + 0x4A8i64) + 8i64 * ((unsigned __int8)v5 ^ 0xA8u)));
                goto LABEL_1035;
            case 0x356:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x88);
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x3C0) + 1;
                v28 = ~(v28 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x208) + 0x7A0i64));
                goto LABEL_1035;
            case 0x357:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x7A0) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x478);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x1D0) + (FuckEnc::CacheRead<_DWORD>(v10 + 0x530) ^ 0xD8E5D0FF);
                goto LABEL_1035;
            case 0x358:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 8i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x650), 0x17) & 0x16)) + 0x5A8i64);
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2C8) + 4i64 * (unsigned __int8)(0x32 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x560) + 0x138i64) * v5));
                goto LABEL_1035;
            case 0x359:
                v28 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x420) + 0x658i64));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5E0) + 0x498i64);
                v28 = v28 - FuckEnc::CacheRead<_DWORD>(v4 + 0x598) - FuckEnc::CacheRead<_DWORD>(v10 + 0x78);
                goto LABEL_1035;
            case 0x35A:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x508);
                v28 = ~(v28 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6A8) + 0x360i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x10)) + 0x3C0i64)) - v5;
                goto LABEL_1035;
            case 0x35B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x418);
                Calls::FastCall(v4 + 0x100, &v28, v5, v10);
                v28 ^= 0x34366EF8u;
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x50) | 0x11;
                goto LABEL_1035;
            case 0x35C:
                Calls::FastCall(v4 + 0x4D8, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8) + 8i64 * (unsigned __int8)(0x6B * FuckEnc::CacheRead<_BYTE>(v4 + 0x658))));
                goto LABEL_1035;
            case 0x35D:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x440) + 0x4A8i64) + 8i64 * (((unsigned __int8)v5 ^ 0xEB) & 0x74)) + 0x28i64) + 8i64 * (v5 & 0x20), &v28, v5, v4);
                goto LABEL_1035;
            case 0x35E:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x138);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 0x2A0i64);
                v28 += 0x3ADB156A * (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x130));
                goto LABEL_1035;
            case 0x35F:
                v28 = __ROR4__(v11, ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x530));
                v28 ^= (0xD7D1FF41 * FuckEnc::CacheRead<_DWORD>(v4 + 0x510)) ^ (v5 * FuckEnc::CacheRead<_DWORD>(v4 + 0x510));
                goto LABEL_1035;
            case 0x360:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x130);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x188);
                v28 = __ROL4__(v28, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x1E0) + 4i64 * ((unsigned __int8)v5 & 0xDD)));
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x280i64);
                goto LABEL_1035;
            case 0x361:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x68) + 0x388i64, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x360) + 8i64 * ((0xFB * (_BYTE)v5) & 0x5B)));
                goto LABEL_1035;
            case 0x362:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 0x1D0i64);
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x3C8);
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x510) ^ 0x8A9EEDCD;
                goto LABEL_1035;
            case 0x363:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x130);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x18) + 8i64 * ((0xF5 * FuckEnc::CacheRead<_BYTE>(v4 + 0x6E0)) & 0x1B)) + 0x510i64);
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 0x130i64);
                goto LABEL_1035;
            case 0x364:
                v28 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x570) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 8i64 * ((unsigned __int8)v5 ^ 0x7Du)) + 0x7A0i64) * v5);
                goto LABEL_1035;
            case 0x365:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x140) + 0x308i64) - 0x10F6686D;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x660) + 0x1E8i64) + 0x440i64);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x3C8);
                goto LABEL_1035;
            case 0x366:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x350);
                Calls::FastCall(v10 + 0x768, &v28, v5, v4);
                v28 ^= 0x5457F366u;
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x7A0);
                goto LABEL_1035;
            case 0x367:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x208) + 0x240i64, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x160) + 8i64 * (((unsigned __int8)v5 ^ 0xFB) & 0x86)));
                goto LABEL_1035;
            case 0x368:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x2E0) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x708);
                Calls::FastCall(v10 + 0x380, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x3D0));
                goto LABEL_1035;
            case 0x369:
                Calls::FastCall(v4 + 0x610, &v28, v5, v4);
                v28 -= (unsigned int)~FuckEnc::CacheRead<_DWORD>(v4 + 0x570) >> 8;
                goto LABEL_1035;
            case 0x36A:
                v28 = v11 - v5 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 0x1F0i64) + 0x318i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x3C0) & 0xFFFFFFE3);
                goto LABEL_1035;
            case 0x36B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x188);
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x50) + FuckEnc::CacheRead<_DWORD>(v4 + 0x6B8) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x560) + 0x130i64);
                goto LABEL_1035;
            case 0x36C:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x140);
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x338) + 0x1F8i64) + 0x570i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x2F8) + 0x88i64);
                goto LABEL_1035;
            case 0x36D:
                v28 = v11 + 0x45A248FC;
                v28 = v11 + 0x45A248FC - FuckEnc::CacheRead<_DWORD>(v4 + 0x6B8);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x330) + 0x6E0i64);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x138);
                goto LABEL_1035;
            case 0x36E:
                v28 = v5 ^ v11 ^ (0x3CFECE9A - FuckEnc::CacheRead<_DWORD>(v4 + 0x1D0));
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x498) + 0x350i64) + 0x158i64);
                goto LABEL_1035;
            case 0x36F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x440);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x2E8) + 8i64 * ((unsigned __int8)v5 & 0xFD), &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0));
                goto LABEL_1035;
            case 0x370:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x3C8);
                v28 = __ROR4__(v28, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 0x678i64) ^ (v5 + FuckEnc::CacheRead<_BYTE>(v4 + 0x198)));
                goto LABEL_1035;
            case 0x371:
                v28 = v11 + 0x5FF725F2;
                v28 = v11 + 0x5FF725F2 + FuckEnc::CacheRead<_DWORD>(v4 + 0x5A8);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x340);
                v28 = __ROL4__(v28 - FuckEnc::CacheRead<_DWORD>(v10 + 0x158), v5);
                goto LABEL_1035;
            case 0x372:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x340) + 0x650i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x478);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v10 + 0x6E0) & 0x99)) + 0x278i64);
                goto LABEL_1035;
            case 0x373:
                v28 = v11 + 0x2F303F6E;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8) + 0x610i64, &v28, v5, v4);
                goto LABEL_1035;
            case 0x374:
                v28 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x340) + 0x5B8i64) + 4i64 * (v5 & 4)) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 8i64 * (unsigned __int8)(0xBE * v5)) + 0x3E8i64));
                goto LABEL_1035;
            case 0x375:
                Calls::FastCall(v4 + 0x388, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x560) + 0x588i64) + 0x5F0i64) + 8i64 * ((unsigned __int8)v5 ^ 0x61u)) + 0x5C0i64));
                goto LABEL_1035;
            case 0x376:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8) + 0x278i64);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xC0) + 0x1C0i64) + (FuckEnc::CacheRead<_DWORD>(v4 + 0x530) ^ 0x6FC30131);
                goto LABEL_1035;
            case 0x377:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x88) - 0x2294D0FF;
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x510);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x338);
                v28 += FuckEnc::CacheRead<_DWORD>(v10 + 0x88) ^ 0xF45B4B46;
                goto LABEL_1035;
            case 0x378:
                v23 = (unsigned __int8)__ROL4__(v5, 0x11) & 0x80;
                v24 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 8i64 * (unsigned __int8)(0x57 * FuckEnc::CacheRead<_DWORD>(v4 + 0x6B8))) + 0x660i64) + 0x528i64);
            LABEL_482:
                Calls::FastCall(v4 + 0x110, &v28, v5, FuckEnc::CacheRead<_QWORD>(v24 + 8 * v23));
                goto LABEL_1035;
            case 0x379:
                v28 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x678));
                v28 -= (0xC301311E * FuckEnc::CacheRead<_DWORD>(v4 + 0x2E0)) ^ ~(0xE1460D91 * FuckEnc::CacheRead<_DWORD>(v4 + 0x460));
                goto LABEL_1035;
            case 0x37A:
                v28 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x6F0) * (FuckEnc::CacheRead<_BYTE>(v4 + 0x2E0) - 0x75));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x188);
                v28 += FuckEnc::CacheRead<_DWORD>(v10 + 0x1D0) + 1;
                goto LABEL_1035;
            case 0x37B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x190);
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x7A0) - (FuckEnc::CacheRead<_DWORD>(v4 + 0x198) ^ v5) - v5 + 1;
                goto LABEL_1035;
            case 0x37C:
                v28 = v11 ^ ((_DWORD)0xFAF2E3A + FuckEnc::CacheRead<_DWORD>(v4 + 0x658));
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x78);
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x280) + 1;
                goto LABEL_1035;
            case 0x37D:
                goto LABEL_1034;
            case 0x37E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x188);
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x180) + 4i64 * (unsigned __int8)(0xA7 * FuckEnc::CacheRead<_BYTE>(v10 + 0x6F0))) + 0x63A5CB80;
                v28 -= (unsigned int)~FuckEnc::CacheRead<_DWORD>(v4 + 0x6B8) >> 3;
                goto LABEL_1035;
            case 0x37F:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x140) + 0x1C8i64, &v28, v5, v4);
                v28 ^= ~FuckEnc::CacheRead<_DWORD>(v4 + 0x10);
                goto LABEL_1035;
            case 0x380:
                v28 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 8i64 * (((unsigned __int8)v5 ^ 0xDF) & 0xE0)) + 0x330i64) + 0x7A0i64) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x50) + 0x1E094DC2);
                goto LABEL_1035;
            case 0x381:
                Calls::FastCall(v4 + 0x310, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x40) + 0xD0i64) + 0x488i64));
                goto LABEL_1035;
            case 0x382:
                v28 = v11 ^ ~(0x20 * FuckEnc::CacheRead<_DWORD>(v4 + 0x50)) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x138) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x2E0i64));
                goto LABEL_1035;
            case 0x383:
                v28 = v11 - (v5 ^ ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x318) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x40) + 0x2D8i64) + 0x530i64)));
                goto LABEL_1035;
            case 0x384:
                v28 = (v11 ^ 0xC3018944) - 0x2E00BECF;
                v28 ^= (FuckEnc::CacheRead<_DWORD>(v4 + 0x3C8) | 0xF) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x280) - 0x2E2F00F8);
                goto LABEL_1035;
            case 0x385:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 8i64 * ((unsigned __int8)v5 & 0xF0)) + 0x298i64) + 8i64 * (((unsigned __int8)v5 ^ 6) & 0xC6)) + 0x610i64, &v28, v5, v4);
                goto LABEL_1035;
            case 0x386:
                v28 = ~(_DWORD)v11;
                v28 = ~(_DWORD)v11 - ((v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x5A8)) ^ 0xE9E7ABE7);
                goto LABEL_1035;
            case 0x387:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 0xD0i64) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x570) & 0xB0)) + 0x40i64) + 0x568i64) + 0x478i64);
                LODWORD(v11) = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 0x3E8));
                goto LABEL_1034;
            case 0x388:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x680) + 8i64 * (unsigned __int8)v5) + 0xC8i64, &v28, v5, v10);
                goto LABEL_1035;
            case 0x389:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8);
                v28 = v11 ^ (0x6B8DAC03 * FuckEnc::CacheRead<_DWORD>(v10 + 0x428) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3F0) + 8i64 * (unsigned __int8)(8 * v5)) + 0x708i64) + 0x78i64));
                goto LABEL_1035;
            case 0x38A:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8) + 8i64 * (((unsigned __int8)v5 ^ 0xEB) & 0x96)) + 0x190i64) + 0x40i64) + 0x588i64);
                v28 = v5 + v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x328) + 4i64 * (((unsigned __int8)v5 ^ 2) & 0xA));
                goto LABEL_1035;
            case 0x38B:
                v28 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x658) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x478) + 0x3E8i64);
                v28 = __ROL4__(v28, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x40) + 0x5B8i64) + 4i64 * (unsigned __int8)((_BYTE)v5 << 6)));
                goto LABEL_1035;
            case 0x38C:
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x1B0i64) + 0x18i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x18)) + 0x208i64) + 0x6A8i64) + 0x480i64) + 0x5A8i64) ^ v11;
                goto LABEL_1034;
            case 0x38D:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x450) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x518) + 0x5D0i64) + 8i64) + 8i64 * (((unsigned __int8)v5 ^ 0xE9) & 0x9E)) + 0xA0i64);
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(v10 + 0x428) ^ v28;
                goto LABEL_1034;
            case 0x38E:
                Calls::FastCall(v4 + 0x630, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 8i64 * (unsigned __int8)(0x55 * v5)) + 0x188i64) + 0x140i64) + 0x1F0i64));
                goto LABEL_1035;
            case 0x38F:
                v28 = v11 ^ (0xC3013166 * FuckEnc::CacheRead<_DWORD>(v4 + 0x2E0));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x5D0i64);
                v28 = ~(v28 + (FuckEnc::CacheRead<_DWORD>(v10 + 0x308) << 6));
                goto LABEL_1035;
            case 0x390:
                Calls::FastCall(v4 + 0x4C8, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x18) + 8i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x2A0), 0xE) & 0x1F)) + 0x710i64) + 0x350i64));
                goto LABEL_1035;
            case 0x391:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x530) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x660);
                v28 ^= (FuckEnc::CacheRead<_DWORD>(v10 + 0x158) * ~FuckEnc::CacheRead<_DWORD>(v4 + 0x88)) ^ 0x6F0E0F43;
                goto LABEL_1035;
            case 0x392:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x568);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x1D0) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5B8) + 4i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v10 + 0x3E8) ^ 0x13u));
                goto LABEL_1035;
            case 0x393:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 0x428i64) ^ v11;
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x3E8), 0xE)) + 0x478i64) + 0x510i64);
                goto LABEL_1035;
            case 0x394:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8);
                Calls::FastCall(v10 + 0x778, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x188) + 0x6A8i64));
                goto LABEL_1035;
            case 0x395:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x280) ^ v11;
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8) + 0x650i64) ^ 0x7AC4F856;
                goto LABEL_1035;
            case 0x396:
                v28 = (unsigned int)0x66B8BF3 + v11;
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x598) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 0x88i64);
                goto LABEL_1035;
            case 0x397:
                v28 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x3C8));
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x5D0i64) + 0x138i64);
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x508) ^ 0x9DF79828;
                goto LABEL_1035;
            case 0x398:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x308) ^ v11;
                v28 += 0x2F000E3E * FuckEnc::CacheRead<_DWORD>(v4 + 0x510);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8) + 0x3C0i64);
                goto LABEL_1035;
            case 0x399:
                v28 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 0x130i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x7A0) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 8i64 * (unsigned __int8)(0x7B * FuckEnc::CacheRead<_BYTE>(v4 + 0x658))) + 0x530i64)));
                goto LABEL_1035;
            case 0x39A:
                v28 = v11 ^ 0x17A90B53;
                v28 = (v11 ^ 0x17A90B53) - FuckEnc::CacheRead<_DWORD>(v4 + 0x7A0);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3E0) + 8i64 * (((unsigned __int8)v5 ^ 0x60) & 0xF7)) + 0x2D8i64) + 0x10i64);
                goto LABEL_1035;
            case 0x39B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x588);
                v28 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 8) + 8i64 * ((unsigned __int8)v5 ^ 0x2Cu)) + 0x1D0i64) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x570) & 0xFFFFFFE8;
                goto LABEL_1035;
            case 0x39C:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x350);
                LODWORD(v11) = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 0x528i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x18)) + 0x88i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x1E0) + 4i64 * (unsigned __int8)__ROL4__(v5, 6));
                goto LABEL_1034;
            case 0x39D:
                v28 = v11 + 0x7AC30131;
                v28 = (unsigned int)0x11C3D533 ^ (v11 + 0x7AC30131 + FuckEnc::CacheRead<_DWORD>(v4 + 0x460));
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x570);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x6B8);
                goto LABEL_1035;
            case 0x39E:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x6F0) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x478);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x280) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3F0) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x6B8), 0xD)) + 0x598i64);
                goto LABEL_1035;
            case 0x39F:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x7A8) + 0x5C0i64) + 0x330i64);
                Calls::FastCall(v4 + 0x388, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x670) + 8i64 * (v5 & 0x6D)));
                goto LABEL_1035;
            case 0x3A0:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 0x198i64);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0) + 0xA8i64) + 0x1C0i64) - 0x7123EBD5;
                goto LABEL_1035;
            case 0x3A1:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8);
                v28 = v11 - (FuckEnc::CacheRead<_DWORD>(v10 + 0x530) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x198) & 1)) + 0x68i64) + 0x460i64));
                goto LABEL_1035;
            case 0x3A2:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x138) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x18) + 8i64 * ((unsigned __int8)v5 & 0xBD)) + 0x798i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x428) + 1);
                goto LABEL_1035;
            case 0x3A3:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x40) + 0x1A8i64) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x280), 6), &v28, v5, v4);
                goto LABEL_1035;
            case 0x3A4:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0) + 0xB0i64);
                v28 = (v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x88)) ^ 0x744F286A;
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 8i64 * (unsigned __int8)(0x4B * v5)) + 0x6B8i64);
                goto LABEL_1035;
            case 0x3A5:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x478) + 0x6A8i64);
                Calls::FastCall(v4 + 0x100, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x160) + 8i64 * ((unsigned __int8)v5 & 0xDF)));
                goto LABEL_1035;
            case 0x3A6:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x680) + 8i64 * (unsigned __int8)__ROL4__(v5, 9)) + 0x460i64) ^ v11;
                LODWORD(v11) = v28 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x1D0) ^ 0xD3u)) + 0x798i64);
                goto LABEL_1034;
            case 0x3A7:
                v28 = v11 + 0x336FFCDB * FuckEnc::CacheRead<_DWORD>(v4 + 0x6F0) - 0x60BB64A8;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x728) + 0x560i64);
                v28 += FuckEnc::CacheRead<_DWORD>(v10 + 0x158);
                goto LABEL_1035;
            case 0x3A8:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 0x318i64) ^ v11;
                v28 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 8i64 * ((unsigned __int8)v5 ^ 0x81u)) + 0x198i64);
                goto LABEL_1035;
            case 0x3A9:
                v28 = v11 - 2 * v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x718);
                Calls::FastCall(v10 + 0x730, &v28, v5, v4);
                goto LABEL_1035;
            case 0x3AA:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 0x518i64) + 0x288i64) + 0x1B0i64) + 0x570i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x678);
                goto LABEL_1035;
            case 0x3AB:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0) + 0x2E0i64);
                v28 ^= (0x67E80043 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8) + 0x798i64) ^ 0xC3018944)) ^ 0x9A7DFE26;
                goto LABEL_1035;
            case 0x3AC:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0) + 0x630i64, &v28, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x418);
                v28 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x450);
                goto LABEL_1035;
            case 0x3AD:
                v28 = __ROL4__(v11, v5);
                v28 = (unsigned int)0xB3CEEC9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x68) + 0x3C0i64) ^ v28) + 6;
                v28 ^= ~FuckEnc::CacheRead<_DWORD>(v4 + 0x598);
                goto LABEL_1035;
            case 0x3AE:
                Calls::FastCall(v4 + 0x148, &v28, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x718) + 0x420i64);
                v28 = __ROL4__(v28, FuckEnc::CacheRead<_DWORD>(v10 + 0x450));
                goto LABEL_1035;
            case 0x3AF:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x5A8) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x3C0);
                v28 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA0) + 0x450i64);
                goto LABEL_1035;
            case 0x3B0:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x428) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D0) + 0x618i64, &v28, v5, v4);
                v28 ^= (unsigned int)0x510A012 + 3;
                goto LABEL_1035;
            case 0x3B1:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x6F0) ^ v11;
                v28 ^= 0x10057C1A * ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 0x280i64);
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x278);
                goto LABEL_1035;
            case 0x3B2:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3F0) + 8i64 * (unsigned __int8)(0xA * FuckEnc::CacheRead<_DWORD>(v4 + 0x3C8))) + 0x580i64) + 8i64 * ((unsigned __int8)v5 ^ 0xF5u), &v28, v5, v4);
                goto LABEL_1035;
            case 0x3B3:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x140);
                v28 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 0x78) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x288) + 0x6A0i64) + 4i64 * ((unsigned __int8)v5 ^ 0x69u))) ^ 0x380C0307;
                goto LABEL_1035;
            case 0x3B4:
                v28 = v11 - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8);
                v28 = (v11 - v5) ^ (v5 + FuckEnc::CacheRead<_DWORD>(v10 + 0x1D0) * (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x3C8)));
                goto LABEL_1035;
            case 0x3B5:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0xC0) + 0x210i64, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x18) + 8i64 * (unsigned __int8)__ROR4__(v5, 0xF)));
                goto LABEL_1035;
            case 0x3B6:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x708) + 0x38i64) + 4i64 * (unsigned __int8)(0xE5 * v5)) ^ v11;
                v28 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x160) + 8i64 * (unsigned __int8)(0x46 * v5)) + 0x278i64);
                goto LABEL_1035;
            case 0x3B7:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x798) ^ v11;
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x198);
                v28 = __ROR4__(v28, ~FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA0) + 0x338i64) + 0x7A0i64));
                goto LABEL_1035;
            case 0x3B8:
                Calls::FastCall(v4 + 0x668, &v28, v5, v4);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8) + 0x6B8i64);
                goto LABEL_1035;
            case 0x3B9:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 0x160i64) + 8i64 * (unsigned __int8)(0x49 * v5)) + 0x150i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0xB)) + 0x470i64) + 4i64 * (unsigned __int8)(0x8E * v5));
                goto LABEL_1035;
            case 0x3BA:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 0x738i64) + 8i64 * (__ROR4__(v5, 0x13) & 0x8B)) + 0x250i64, &v28, v5, v4);
                goto LABEL_1035;
            case 0x3BB:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x338);
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x98) + 4i64 * (unsigned __int8)__ROR4__(v5, 9));
                v28 = __ROL4__(v28 ^ (v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8) + 0x130i64)), 0x79);
                goto LABEL_1035;
            case 0x3BC:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x68) + 0x6E0i64);
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x1D0) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x50) << 0x1D);
                goto LABEL_1035;
            case 0x3BD:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x350) + 0xD0i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 3)) + 0x568i64) + 8i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 8)) + 0x2A0i64);
                goto LABEL_1035;
            case 0x3BE:
                Calls::FastCall(v4 + 0x760, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xB0) + 0x680i64) + 8i64 * ((unsigned __int8)v5 ^ 0xE3u)));
                goto LABEL_1035;
            case 0x3BF:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 8i64 * (v5 & 0x1F)) + 0x188i64) + 0x330i64);
                Calls::FastCall(v4 + 0x758, &v28, v5, v10);
                goto LABEL_1035;
            case 0x3C0:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x1D0i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5E0) + 0x138i64) + v11;
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x3C8);
                goto LABEL_1035;
            case 0x3C1:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8) + 0x2A0i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8);
                v28 = __ROL4__(v28, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x718) + 0x78i64));
                goto LABEL_1035;
            case 0x3C2:
                v28 = (unsigned int)0xC3F3489 + v11 + 5;
                Calls::FastCall(v4 + 0x730, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x708) + 0x708i64) + 0x488i64));
                goto LABEL_1035;
            case 0x3C3:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x338);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x298) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v10 + 0x6B8), 9)) + 0x388i64, &v28, v5, v4);
                goto LABEL_1035;
            case 0x3C4:
                LODWORD(v11) = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 0x5F0i64) + 8i64 * ((unsigned __int8)v5 ^ 0x89u)) + 0x298i64) + 8i64 * ((unsigned __int8)v5 & 0xE9)) + 0x428i64);
                goto LABEL_1034;
            case 0x3C5:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x1D0) * v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x518);
                Calls::FastCall(v4 + 0x4A0, &v28, v5, v10);
                goto LABEL_1035;
            case 0x3C6:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x450) ^ v11;
                Calls::FastCall(v4 + 0x100, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x18) + 8i64 * ((unsigned __int8)(0xEC * v5) & 0xE8)) + 0x5C8i64));
                goto LABEL_1035;
            case 0x3C7:
                v28 = (unsigned int)0xC1F7EB4 + v11 + 1;
                v28 -= 0x767321A8 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x288) + 0x460i64);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x7A8) + 0x6B8i64);
                goto LABEL_1035;
            case 0x3C8:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 8i64 * ((unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0), 0x14) & 0xAA)) + 0x3D0i64) + 0x798i64) ^ v11 ^ 0xD6983A42;
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x598) ^ 0xDE269278;
                goto LABEL_1035;
            case 0x3C9:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x738) + 8i64 * ((0xD7 * (_BYTE)v5) & 0x47)) + 0x6B0i64);
                v28 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 0x530) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 0x138i64));
                goto LABEL_1035;
            case 0x3CA:
                Calls::FastCall(v4 + 0x630, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x190));
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x19)) + 0x530i64);
                goto LABEL_1035;
            case 0x3CB:
                v28 = (FuckEnc::CacheRead<_DWORD>(v4 + 0x308) ^ v11) + 0x4D5411AC;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0);
                v28 ^= (FuckEnc::CacheRead<_DWORD>(v4 + 0x1D0) + FuckEnc::CacheRead<_DWORD>(v10 + 0x3C8)) & 0xFFFFFFFA;
                goto LABEL_1035;
            case 0x3CC:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x708);
                v28 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 0x198));
                v28 = ~(v28 - FuckEnc::CacheRead<_DWORD>(v4 + 0x78));
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x5A8) ^ v5;
                goto LABEL_1035;
            case 0x3CD:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x158) ^ v11;
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x330) + 0x478i64) + 0x1E8i64) + 0x288i64) + 0x138i64);
                goto LABEL_1035;
            case 0x3CE:
                v28 = ~(v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x708) + 0x78i64) + 1);
                v28 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 8) + 8i64 * (v5 & 0x5F)) + 0x510i64);
                goto LABEL_1035;
            case 0x3CF:
                v28 = v11 - 0x3CFECE7B;
                Calls::FastCall(v4 + 0x240, &v28, v5, v4);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x598) ^ 0xD1FF417A;
                goto LABEL_1035;
            case 0x3D0:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x218) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x50) & 0xE9)) + 0x710i64);
                v28 = FuckEnc::CacheRead<_DWORD>(v10 + 0x1C0) ^ v11;
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x1D0) << 6;
                goto LABEL_1035;
            case 0x3D1:
                Calls::FastCall(v4 + 0x520, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0));
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x450);
                goto LABEL_1035;
            case 0x3D2:
                v28 = v11 ^ ((_DWORD)0x125C19C9 + FuckEnc::CacheRead<_DWORD>(v4 + 0x3C0));
                v28 = ~(v28 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x488) + 0x3D0i64) + 0x1D0i64) + 0x3D549DA1);
                goto LABEL_1035;
            case 0x3D3:
                LODWORD(v11) = v11 - ((FuckEnc::CacheRead<_DWORD>(v4 + 0x460) + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x340) + 0x48i64) + 0x558i64) + 4i64 * ((unsigned __int8)v5 ^ 0x8Cu))) ^ 0x234D2B18);
                goto LABEL_1034;
            case 0x3D4:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D0) + 0x578i64) + 8i64 * ((unsigned __int8)v5 ^ 0x48u), &v28, v5, v10);
                goto LABEL_1035;
            case 0x3D5:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x138) ^ v11 ^ 0x60C31131;
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xB0) + 0x4A8i64) + 8i64 * (v5 & 0x4A)) + 0x6A0i64) + 4i64 * (v5 & 0x33));
                goto LABEL_1035;
            case 0x3D6:
                v28 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x598);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x518) + 0x530i64);
                v28 ^= v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x280);
                goto LABEL_1035;
            case 0x3D7:
                v28 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x650));
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x158);
                v28 ^= (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x288) + 0x138i64) >> 0x14) & 7;
                goto LABEL_1035;
            case 0x3D8:
                v28 = ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x7A0) ^ v11);
                v28 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x700) + 4 * (((unsigned __int8)(FuckEnc::CacheRead<_DWORD>(v4 + 0x138) + 0x1E) & 0xC0 | 8i64) ^ 0x88));
                goto LABEL_1035;
            case 0x3D9:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x428) ^ v11;
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x460);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x350);
                v28 = v28 - (FuckEnc::CacheRead<_DWORD>(v10 + 0x308) ^ 0x9F1A322F) + 0x3CFE76BC;
                goto LABEL_1035;
            case 0x3DA:
                v28 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x160) + 8i64 * ((unsigned __int8)v5 & 0xCD)) + 0x3D0i64) + 0x88i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 0x98i64) + 4i64 * ((unsigned __int8)v5 ^ 0x69u));
                goto LABEL_1035;
            case 0x3DB:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x3C8);
                v28 = __ROL4__(v28, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x188) + 0x88i64));
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 0x1C0i64) << 0xA;
                goto LABEL_1035;
            case 0x3DC:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 0x248i64, &v28, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x728);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x198);
                goto LABEL_1035;
            case 0x3DD:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x420) + 0x430i64) + 8i64 * (unsigned __int8)(0x4B * v5), &v28, v5, v4);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x88);
                goto LABEL_1035;
            case 0x3DE:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 0x538i64) + 8i64 * ((0xEE * (_BYTE)v5) & 0x62)) + 0x4D0i64, &v28, v5, v4);
                goto LABEL_1035;
            case 0x3DF:
                v28 = v11 + ~FuckEnc::CacheRead<_DWORD>(v4 + 0x130);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x7A8);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x4A8) + 8i64 * ((unsigned __int8)v5 ^ 0x71u)) + 0x6E0i64);
                goto LABEL_1035;
            case 0x3E0:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 8i64 * (unsigned __int8)__ROR4__(v5, 6)) + 0x148i64, &v28, v5, v4);
                goto LABEL_1035;
            case 0x3E1:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x678);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x280);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x288);
                v28 += FuckEnc::CacheRead<_DWORD>(v10 + 0x198) ^ 0x7F3836FB;
                goto LABEL_1035;
            case 0x3E2:
                v28 = v5 + v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x460) ^ v5);
                Calls::FastCall(v4 + 0x4E0, &v28, v5, v4);
                goto LABEL_1035;
            case 0x3E3:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x50) & 0x3D)) + 0xA8i64) + 0x210i64, &v28, v5, v4);
                goto LABEL_1035;
            case 0x3E4:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x420);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x478) + 0x400i64) + 8i64 * ((unsigned __int8)v5 ^ 0xFDu), &v28, v5, v4);
                goto LABEL_1035;
            case 0x3E5:
                v28 = v11 + 0x34C31131;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x340) + 0x4A8i64) + 8i64 * ((unsigned __int8)v5 & 0xC5)) + 0x330i64) + 0x288i64);
                v28 = v11 + 0x34C31131 + FuckEnc::CacheRead<_DWORD>(v10 + 0x6F0);
                goto LABEL_1035;
            case 0x3E6:
                v28 = v11 + ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x7A0) ^ 0xC43366D8);
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x6B8);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x530);
                goto LABEL_1035;
            case 0x3E7:
                Calls::FastCall(v4 + 0x668, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 0x298i64) + 8i64 * ((unsigned __int8)v5 & 0xA9)) + 0x48i64));
                goto LABEL_1035;
            case 0x3E8:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x7A8);
                LODWORD(v11) = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x150) + 8i64 * ((0xE8 * FuckEnc::CacheRead<_BYTE>(v10 + 0x88)) & 0x38)) + 0x160i64) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x78), 0x1C)) + 0x598i64);
                goto LABEL_1034;
            case 0x3E9:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3F0) + 8i64 * (__ROR4__(v5, 0xE) & 0x66)) + 0x3C0i64);
                v28 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x650) ^ 0xC3018944;
                goto LABEL_1035;
            case 0x3EA:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x280), 0x14)) + 0x488i64);
                Calls::FastCall(v4 + 0x108, &v28, v5, v10);
                v28 = __ROR4__(v28, FuckEnc::CacheRead<_DWORD>(v4 + 0x460));
                goto LABEL_1035;
            case 0x3EB:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x158);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xD0) + 8i64 * (((unsigned __int8)v5 ^ 0xE7) & 0x7E)) + 0x478i64) + 0x478i64) + 0x198i64);
                goto LABEL_1035;
            case 0x3EC:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x6B8) * v5;
                v28 += FuckEnc::CacheRead<_DWORD>(v4 + 0x88);
                v28 = __ROL4__(v28, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 0xB0i64) + 0x6B8i64));
                goto LABEL_1035;
            case 0x3ED:
                v28 = v11 ^ 0xC3018944;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xC0);
                Calls::FastCall(v4 + 0x310, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x298) + 8i64 * ((0x15 * (_BYTE)v5) & 0x6A)));
                goto LABEL_1035;
            case 0x3EE:
                LODWORD(v11) = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x670) + 8i64 * ((unsigned __int8)(0xDE * FuckEnc::CacheRead<_BYTE>(v4 + 0x88)) & 0x9B)) + 0x670i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1A)) + 0x798i64) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x570) | 0x14));
                goto LABEL_1034;
            case 0x3EF:
                v28 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D0) + 0x6B8i64) ^ v11;
                Calls::FastCall(v4 + 0x4D8, &v28, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0xB0));
                goto LABEL_1035;
            case 0x3F0:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5E0) + 0x488i64);
                v28 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 0x3C8));
                v28 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x130);
                v28 += ~FuckEnc::CacheRead<_DWORD>(v4 + 0x198);
                goto LABEL_1035;
            case 0x3F1:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x460) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x440);
                v28 += ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x420) + 0x328i64) + 4i64 * (unsigned __int8)(0x1A * v5)) >> 0x11);
                goto LABEL_1035;
            case 0x3F2:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5E0) + 0x660i64);
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0xC0) + 0x298i64) + 8i64 * (__ROR4__(v5, 0x14) & 0x49)) + 0x330i64) + 0x6B8i64);
                goto LABEL_1035;
            case 0x3F3:
                v28 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0));
                v28 = __ROL4__(v28, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x420) + 0x88i64));
                v28 ^= (unsigned int)~FuckEnc::CacheRead<_DWORD>(v4 + 0x570) >> 0x17;
                goto LABEL_1035;
            case 0x3F4:
                v28 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x728) + 0x470i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 0x10)) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x68) + 0x450i64) & 0xFFFFFFE9;
                goto LABEL_1035;
            case 0x3F5:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x658i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4A8) + 8i64 * ((unsigned __int8)v5 ^ 0x20u)) + 0x440i64);
                v28 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x450);
                goto LABEL_1035;
            case 0x3F6:
                v28 = ~(_DWORD)v11;
                Calls::FastCall(v4 + 0x238, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x528) + 8i64 * (v5 & 0x6B)));
                goto LABEL_1035;
            case 0x3F7:
                v28 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x78);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x4A8i64) + 8i64 * ((unsigned __int8)v5 & 0xFD)) + 0x6B0i64);
                v28 += FuckEnc::CacheRead<_DWORD>(v10 + 0x658);
                goto LABEL_1035;
            case 0x3F8:
                LODWORD(v11) = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA0) + 0x338i64) + 0x1F0i64) + 0x340i64) + 0x3F0i64) + 8i64 * (unsigned __int8)(0x62 * v5)) + 0x280i64);
                goto LABEL_1034;
            case 0x3F9:
                Calls::FastCall(v4 + 0x240, &v28, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x140) + 0x710i64) + 0x6B0i64) + 0x208i64) + 0x480i64));
                goto LABEL_1035;
            case 0x3FA:
                v28 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x508) - v5;
                v28 = __ROR4__(v28, FuckEnc::CacheRead<_DWORD>(v4 + 0x1D0));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1F8);
                v28 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x6A0) + 4i64 * (v5 & 0x2B));
                goto LABEL_1035;
            case 0x3FB:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x728);
                Calls::FastCall(v4 + 0x768, &v28, v5, v10);
                v28 = __ROL4__(v28, FuckEnc::CacheRead<_DWORD>(v4 + 0x138) >> 4);
                goto LABEL_1035;
            case 0x3FC:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x560) + 0xC0i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x1A0) + 8i64 * (((unsigned __int8)v5 ^ 0x10) & 0xD2), &v28, v5, v4);
                goto LABEL_1035;
            case 0x3FD:
                v28 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x6F0) + 0x1C3FA618);
                v28 = __ROR4__(v28, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x418) + 0x1B0i64) + 0x190i64) + 0x308i64));
                goto LABEL_1035;
            case 0x3FE:
                v28 = FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) ^ v11;
                v28 += v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x130);
                v28 ^= (FuckEnc::CacheRead<_DWORD>(v4 + 0x50) ^ 0xC3018944) - 0x3CEECEDC;
                goto LABEL_1035;
            case 0x3FF:
                LODWORD(v11) = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x598));
                v28 = v11;
                v12 = (unsigned __int8)(0xD8 * v5) & 0xCD;
                v13 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5D0) + 0x670i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 6)) + 0x2D8i64) + 0x328i64);
            LABEL_1033:
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(v13 + 4 * v12) ^ v11;
            LABEL_1034:
                v28 = v11;
            LABEL_1035:
                v6 += 4;
                *a2 = v28;
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
