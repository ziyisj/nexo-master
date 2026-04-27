#pragma once

#include <Hack/FuckEnc.h>
#include <Hack/ENC/Calls.h>
#include <IDA/ida_defs.h>

void sub_28097D0(_QWORD a1, unsigned int* a2, unsigned int a3, int a4)
{
    __int64 v4;      // rbx
    unsigned int v5; // edi
    int v6;          // r13d
    __int64 v10;     // rsi
    __int64 v11;     // rax
    __int64 v12;     // rdx
    __int64 v13;     // rax
    __int64 v14;     // r8
    int v15;         // r8d
    __int64 v16;     // rcx
    __int64 v17;     // rax
    int v18;         // ecx
    __int64 v19;     // r8
    __int64 v20;     // rcx
    int v21;         // [rsp+60h] [rbp+40h] BYREF

    v4 = a1;
    v5 = a4 ^ 0x9147006E;
    v6 = 0;
    v10 = a1;
    if (a3 > 3)
    {
        do
        {
            v11 = *a2;
            v21 = *a2;
            switch (((unsigned __int16)(a4 + v6) ^ 0xFF93) & 0x3FF)
            {
            case 0:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x260);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D8) + 0x1B8i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 0x14));
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x668) + 0x620i64);
                break;
            case 1:
                v21 = __ROL4__(v11, 0x98);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8);
                v21 = __ROR4__(v21, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x748) + 8i64 * (v5 & 0x5A)) + 0x370i64) + 8i64 * ((0x1D * (_BYTE)v5) & 0x21)) + 0x540i64));
                break;
            case 2:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x568) + 8i64 * (unsigned __int8)(0xB0 * FuckEnc::CacheRead<_DWORD>(v4 + 0x3A8))) + 0x440i64) + 0x530i64, &v21, v5, v4);
                break;
            case 3:
                v21 = (FuckEnc::CacheRead<_DWORD>(v4 + 0x390) ^ v11) - 0x55376D47;
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x5F8) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x568) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x4B0) ^ 0xB9u)) + 0x688i64);
                break;
            case 4:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1A0) + 0x6D0i64) + 0x3D8i64) + 0x1A0i64) + 0x440i64) + 0x1F0i64) + 0x388i64) + 0x308i64) ^ v11;
                break;
            case 5:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x368);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0) + 0x240i64);
                v21 += FuckEnc::CacheRead<_DWORD>(v10 + 0x100) * FuckEnc::CacheRead<_DWORD>(v4 + 0x688);
                break;
            case 6:
                v21 = v11 + v5;
                v21 = __ROL4__(v11 + v5, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x420) + 8i64 * (unsigned __int8)(0xE1 * FuckEnc::CacheRead<_BYTE>(v4 + 0x28))) + 0x520i64) + 0xC0i64) + 4i64 * (v5 & 0x34))) + 0x70CE999D;
                break;
            case 7:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x430) + 0x520i64);
                v21 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x1E8) + 0x3F8i64) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x2B8) >> 0xA));
                break;
            case 8:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x168) - 0x53CFECF;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x88) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0xD8), 0x19)) + 0xF8i64);
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_DWORD>(v10 + 0x620));
                break;
            case 9:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B8) + 4i64 * ((unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0) << 0x10, 0xD) & 0xF5)) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x388);
                v21 += FuckEnc::CacheRead<_DWORD>(v10 + 0x6E0) << 0x1F;
                break;
            case 0xA:
                v21 = (v11 + 0x393CFECF) ^ 0x95099343;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6C8) + 0x6C8i64) + 0x388i64) + 0x60i64);
                v21 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x100);
                break;
            case 0xB:
                v21 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x520) + 0x6D8i64) + 4i64 * ((unsigned __int8)__ROR4__(v5, 0x10) & 0x92)));
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x168);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x668);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x4F0);
                break;
            case 0xC:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 8i64 * ((unsigned __int8)__ROR4__(v5, 7) & 0xC0)) + 0x4D8i64) ^ v11 ^ 0xD1FF4140;
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x440) + 0x588i64) + 0x4B0i64);
                break;
            case 0xD:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x2B8);
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1A0) + 0x520i64) + 0x2F0i64) + 0x480i64) + 0x780i64);
                break;
            case 0xE:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x440i64);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x448) + 4i64 * ((FuckEnc::CacheRead<_DWORD>(v10 + 0x780) >> 4) & 0x86));
                break;
            case 0xF:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x580);
                Calls::FastCall(v4 + 0x258, &v21, v5, v10);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8);
                break;
            case 0x10:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x2B8) ^ v11;
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0) ^ 0x42885615;
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x330) + 0x688i64) + v21 - 0x3CFE76BC;
                break;
            case 0x11:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x168);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6C8) + 0x1B0i64) + 0x668i64) + 0x240i64) + 0x618i64);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x540);
                break;
            case 0x12:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x378) + 0x290i64);
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4C0) + 0x598i64) * ~FuckEnc::CacheRead<_DWORD>(v10 + 0x780);
                break;
            case 0x13:
                v21 = v5 ^ v11;
                Calls::FastCall(v4 + 0x3F0, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x568) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x638) ^ 0x20) & 0x7D)));
                break;
            case 0x14:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x480);
                v21 = FuckEnc::CacheRead<_DWORD>(v10 + 0x20) ^ v11;
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6C0) + 0x448i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 0x1C));
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x768);
                break;
            case 0x15:
                v10 = FuckEnc::CacheRead<_QWORD>(v4);
                v21 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B8) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 0x2B8i64), 3)) + 0xD8i64));
                v21 += (FuckEnc::CacheRead<_DWORD>(v4 + 0x28) ^ 0xAD37A25E) + 0x2507D10F;
                break;
            case 0x16:
                Calls::FastCall(v4 + 0x258, &v21, v5, v4);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1A)) + 0x4D8i64);
                break;
            case 0x17:
                Calls::FastCall(v4 + 0x458, &v21, v5, v4);
                v21 ^= 0x6DC414F + 1 - 1440754332 * FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0);
                break;
            case 0x18:
                v21 = v5 ^ v11;
                v21 = v5 ^ v11 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x600) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x12)) + 0x6B0i64) + 8i64 * (v5 & 0x59)) + 0x3F8i64);
                break;
            case 0x19:
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x540) & 0xE5);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x780) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6C8) + 0x780i64) ^ 0xBF2F894F;
                break;
            case 0x1A:
                v21 = v11 + (~FuckEnc::CacheRead<_DWORD>(v4 + 0x28) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xF8) + 0x498i64) + 4i64 * (v5 & 9)) & 0xFFFFFFE2);
                break;
            case 0x1B:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x28) ^ v11;
                v21 = __ROR4__(v21, ~FuckEnc::CacheRead<_BYTE>(v4 + 0x620));
                v21 = ~(v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x168) ^ v21);
                break;
            case 0x1C:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x318) + 8i64 * (unsigned __int8)(0x95 * FuckEnc::CacheRead<_BYTE>(v4 + 0x540))) + 0x588i64);
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x190) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x14)) + 0x208i64) + 4i64 * ((unsigned __int8)v5 & 0xA5));
                break;
            case 0x1D:
                Calls::FastCall(v4 + 0x108, &v21, v5, v4);
                break;
            case 0x1E:
                v21 = __ROR4__(v11, 0x2C);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x78);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x608);
                v21 += v5 + ~FuckEnc::CacheRead<_DWORD>(v10 + 0x260);
                break;
            case 0x1F:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x460) + 8i64 * ((unsigned __int8)v5 & 0xDE)) + 0x668i64) + 0x48i64) + 8i64 * (((unsigned __int8)v5 ^ 0xFD) & 0x63)) + 0x4C0i64) + 0x1F0i64);
                v21 = FuckEnc::CacheRead<_DWORD>(v10 + 0x4D8) ^ v11;
                break;
            case 0x20:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D8) + 0xA8i64);
                v21 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x5F8) + 1) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x368) + FuckEnc::CacheRead<_DWORD>(v10 + 0x6E0));
                break;
            case 0x21:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B8) + 8i64 * ((((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0xD8) ^ 0x18) + (unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE8) + 0x450i64)) & 0x2A)) + 0x20i64) ^ v11;
                break;
            case 0x22:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x740) ^ v11;
                Calls::FastCall(v4 + 0x18, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x58) + 0x2F0i64));
                break;
            case 0x23:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x240) + 0x748i64) + 8i64 * ((unsigned __int8)v5 & 0xF2)) + 0x1D0i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0xA)) + 0x708i64);
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0xF8) + 0x3F8i64) ^ v11;
                break;
            case 0x24:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6C0) + 0x618i64) + 0x5A8i64) + 8i64 * (unsigned __int8)(0x63 * v5)) + 0x3E8i64, &v21, v5, v4);
                break;
            case 0x25:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x450);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6C0) + 0x190i64) + 8i64 * ((unsigned __int8)v5 & 0xD1)) + 0x4B8i64) + 8i64 * ((unsigned __int8)v5 & 0xE5)) + 0x6E0i64);
                break;
            case 0x26:
                Calls::FastCall(v4 + 0x5A0, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x88) + 8i64 * (unsigned __int8)(0x57 * FuckEnc::CacheRead<_DWORD>(v4 + 0x690))) + 0xF8i64));
                break;
            case 0x27:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x460) + 8i64 * (((unsigned __int8)v5 ^ 0xCF) & 0x70)) + 0x438i64) + 0x3F8i64) ^ v11;
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x58) + 0x260i64);
                break;
            case 0x28:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0);
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x390);
                v21 = __ROL4__(v21, ~FuckEnc::CacheRead<_BYTE>(v4 + 0x260));
                break;
            case 0x29:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x368) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x28) << 0xB);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x308) & 0xFFFFFFE8;
                break;
            case 0x2A:
                v21 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6C8) + 0x588i64) + 0x6E0i64) - 0x8320D9F)) - v5;
                break;
            case 0x2B:
                v21 = v11 + ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) ^ (0x9DBCD265 * FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8)) ^ 0xA49A60B0);
                break;
            case 0x2C:
                Calls::FastCall(v4 + 0x738, &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x608);
                v21 += FuckEnc::CacheRead<_DWORD>(v10 + 0x3F8);
                break;
            case 0x2D:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x308) ^ v11;
                v21 = v21 - FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) + 0x6F72C83E;
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x290) + 0x688i64) >> 8;
                break;
            case 0x2E:
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x548));
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x600) + 8i64 * (__ROR4__(v5, 0x18) & 0x39)) + 0x88i64) + 8i64 * ((unsigned __int8)v5 ^ 0xB0u)) + 0x308i64);
                break;
            case 0x2F:
                v21 = v11 ^ 0xADD0FF07;
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x368) ^ v11 ^ 0xADD0FF07 ^ 0x4FEC71A2;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x240) + 0x378i64);
                v21 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x3F8);
                break;
            case 0x30:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 8i64 * (unsigned __int8)(0x68 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x400) ^ 0x9A) - 0x38 * FuckEnc::CacheRead<_BYTE>(v4 + 0x688))) + 0x350i64) + 4i64 * (v5 & 0x69));
                break;
            case 0x31:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x440) + 0x668i64) + 0x6D0i64) + 0xA0i64);
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x748) + 8i64 * ((unsigned __int8)v5 ^ 0xE0u)) + 0x100i64);
                break;
            case 0x32:
                v21 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x4F0) << 0x1F);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0) + 0x6D0i64) + 0x480i64);
                v21 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x248);
                break;
            case 0x33:
                v21 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 0x620i64) >> 0x19);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x318) + 8i64 * (((unsigned __int8)v5 ^ 0xFD) & 0xAA)) + 0x728i64) + 4i64 * (unsigned __int8)(0xEE * v5));
                break;
            case 0x34:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x230) + 0x6A8i64, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE0) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x12)));
                break;
            case 0x35:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x478) + 0xA8i64);
                v21 = FuckEnc::CacheRead<_DWORD>(v10 + 0x248) ^ v11;
                v21 ^= 0x82CE0845 * FuckEnc::CacheRead<_DWORD>(v4 + 0x4F0) * FuckEnc::CacheRead<_DWORD>(v4 + 0x768);
                break;
            case 0x36:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x248);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x400);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x248) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x248) | 0x1C);
                break;
            case 0x37:
                v21 = v11 ^ 0xFCD1FF41;
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x370) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x548) & 0xC4)) + 0x548i64) ^ v11 ^ 0xFCD1FF41;
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x750) + 0x690i64);
                break;
            case 0x38:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE8) + 0x228i64) + 8i64 * ((unsigned __int8)v5 ^ 0xAAu)) + 0x538i64, &v21, v5, v4);
                break;
            case 0x39:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x228) + 8i64 * (unsigned __int8)(0xCD * FuckEnc::CacheRead<_BYTE>(v4 + 0x688))) + 0xE8i64) + 0x1C0i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1A0);
                v21 += FuckEnc::CacheRead<_DWORD>(v10 + 0x368);
                break;
            case 0x3A:
                v12 = FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x318) + 8 * (((FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 0x390i64) ^ 0x1200ui64) >> 8) & 0x57));
                v10 = v12;
                v21 = FuckEnc::CacheRead<_DWORD>(v12 + 0x5F8) ^ v11;
                break;
            case 0x3B:
                v21 = v11 + 0x3CFE76BC * FuckEnc::CacheRead<_DWORD>(v4 + 0x100);
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x330) + 0x220i64) ^ (0xDD0A7E01 * FuckEnc::CacheRead<_DWORD>(v4 + 0x4F0));
                break;
            case 0x3C:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4C0) + 0x248i64);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xF8) + 0x578i64) + 0x388i64) + 0x170i64);
                break;
            case 0x3D:
                Calls::FastCall(v4 + 0x218, &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x580));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1A8);
                v21 += FuckEnc::CacheRead<_DWORD>(v10 + 0x170);
                break;
            case 0x3E:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x430) + 0x540i64);
                v21 = ~(v21 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x350) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x4B0) & 7)));
                break;
            case 0x3F:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x78);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x748) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x540) & 0xE8)) + 0x480i64) + 0x608i64) + 0x2E8i64) + 0xD8i64);
                break;
            case 0x40:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x430) + 0x440i64);
                Calls::FastCall(v10 + 0x2A0, &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x618));
                break;
            case 0x41:
                Calls::FastCall(v4 + 0x458, &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x520));
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x78) | 0x1F;
                break;
            case 0x42:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x388) + 0x148i64) + 0xE0i64) + 8i64 * (v5 & 0x2F)) + 0x608i64) + 0x618i64);
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x308);
                break;
            case 0x43:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6C8);
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x6D8) + 4i64 * (unsigned __int8)__ROR4__(v5, 0x18)) * ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x688) >> 0x16));
                break;
            case 0x44:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 8i64 * (unsigned __int8)(0xDF * v5)) + 0x1E8i64) + 0x388i64) + 0x578i64);
                v21 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x300) + 4i64 * ((unsigned __int8)v5 ^ 0xF3u)) ^ v11);
                break;
            case 0x45:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x748) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1C)) + 0x160i64, &v21, v5, v4);
                break;
            case 0x46:
                v21 = v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0) + 0x1B8i64) + 4i64 * (unsigned __int8)(0xB1 * v5));
                v21 = __ROL4__(v21 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 0x688i64), 0x3B);
                break;
            case 0x47:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0) ^ v11;
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 0x368i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x148) + 0x760i64);
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_DWORD>(v10 + 0x308));
                break;
            case 0x48:
                v21 = v11 ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x168));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x240);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x540) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x28) << 0x11);
                break;
            case 0x49:
                v21 = v11 - v5 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x300) + 4i64 * (unsigned __int8)__ROR4__(v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x400), 0x12)) | 0x1E);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x100) ^ v5;
                break;
            case 0x4A:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x710);
                Calls::FastCall(v10 + 0x4A8, &v21, v5, v4);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x248) << 0x11;
                break;
            case 0x4B:
                v21 = ~(v11 ^ 0xA14B9C13);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x148);
                v21 += FuckEnc::CacheRead<_DWORD>(v10 + 0x248) * v5;
                break;
            case 0x4C:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x338);
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x620) + FuckEnc::CacheRead<_DWORD>(v4 + 0x20) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x70) + 4i64 * ((unsigned __int8)v5 ^ 0x8Cu)));
                break;
            case 0x4D:
                v21 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x4B0) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4D0) + 0x690i64) * ~FuckEnc::CacheRead<_DWORD>(v4 + 0x740)));
                break;
            case 0x4E:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x768);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0);
                Calls::FastCall(v4 + 0x648, &v21, v5, FuckEnc::CacheRead<_QWORD>(v10 + 0xF8));
                v21 -= 0x7EBC2222;
                break;
            case 0x4F:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x478) + 0x2F0i64) + 0xE8i64) + 0x220i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x2E8i64) + 0x4F0i64);
                break;
            case 0x50:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x690) ^ v11;
                v21 = v21 - FuckEnc::CacheRead<_DWORD>(v4 + 0xD8) - 0x3FFFC502;
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x690) >> 0x16;
                break;
            case 0x51:
                v21 = v11 + v5;
                v21 = __ROL4__(v11 + v5, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x420) + 8i64 * (unsigned __int8)(0x52 * v5)) + 0x4D8i64) ^ v5);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x390);
                break;
            case 0x52:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0);
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x1C0) * (FuckEnc::CacheRead<_BYTE>(v4 + 0x4D8) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v10 + 0x590) + 4i64 * (unsigned __int8)(0x63 * v5))));
                break;
            case 0x53:
                v21 = __ROL4__(v11, 0x44);
                v21 = __ROR4__(v21, 0xF0 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0x5C0i64) + 0x368i64));
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0);
                break;
            case 0x54:
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x690) + FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x600) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D8) + 0x620i64) ^ 0x38) & 0x79)) + 0x668i64) + 0x168i64));
                break;
            case 0x55:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x220) * (FuckEnc::CacheRead<_DWORD>(v4 + 0xD8) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x4F0) | 0x1C) ^ 0x18D0FF1A);
                break;
            case 0x56:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0);
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x168);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x5F8);
                v21 += 0xB4CE6CC * (FuckEnc::CacheRead<_DWORD>(v4 + 0x688) | 0x1A);
                break;
            case 0x57:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x168);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x688) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x58) + 0x768i64);
                break;
            case 0x58:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0);
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x2E8) + 0x390i64) ^ v11;
                v21 = v21 - FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) - FuckEnc::CacheRead<_DWORD>(v4 + 0x20) - 0x671756F0;
                break;
            case 0x59:
                Calls::FastCall(v4 + 0x538, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x600) + 8i64 * ((unsigned __int8)__ROL4__(v5, 0x15) & 0xCE)) + 0x2D8i64) + 8i64 * (~(_BYTE)v5 & 2)));
                break;
            case 0x5A:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0);
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x568) + 8i64 * (v5 & 0x2B)) + 0x5A8i64) + 8i64 * (unsigned __int8)(0x73 * v5)) + 0x5A8i64) + 8i64 * (__ROL4__(v5, 0xD) & 0x23)) + 0x3A8i64) ^ v11;
                break;
            case 0x5B:
                v21 = v11 + 0x57442868;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x58) + 0x440i64);
                Calls::FastCall(v4 + 0x110, &v21, v5, v10);
                break;
            case 0x5C:
                v21 = v11 ^ (0x2FF3C550 * FuckEnc::CacheRead<_DWORD>(v4 + 0x170));
                v21 = ~__ROR4__(v21, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5A8) + 8i64 * (unsigned __int8)__ROR4__(0x1C765574 * FuckEnc::CacheRead<_DWORD>(v4 + 0x4B0), 0xB)) + 0x4B0i64));
                break;
            case 0x5D:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x228) + 8i64 * (__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x620), 0x15) & 0x45)) + 0x6C8i64) + 0x3A8i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6C8);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x1B8) + 4i64 * (((unsigned __int8)v5 ^ 4) & 0x86));
                break;
            case 0x5E:
                Calls::FastCall(v4 + 0x408, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D8) + 0x60i64) + 0x460i64) + 8i64 * ((unsigned __int8)v5 & 0xF7)));
                break;
            case 0x5F:
                v21 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 8i64 * ((unsigned __int8)v5 & 0x9C)) + 0x3F8i64));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x608) + 0x148i64);
                v21 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x4F0);
                break;
            case 0x60:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x318) + 8i64 * ((0x39 * (_BYTE)v5) & 0x41)) + 0x600i64) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0x548i64), 5)) + 0x118i64);
                break;
            case 0x61:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x5F8);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x88) + 8i64 * (unsigned __int8)__ROR4__(v5, 5)) + 0x4D8i64) ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x248);
                break;
            case 0x62:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x740);
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x420) + 8i64 * ((unsigned __int8)(0x5E * FuckEnc::CacheRead<_BYTE>(v4 + 0x170)) & 0xE8)) + 0x4B8i64) + 8i64 * (unsigned __int8)(0xF8 * v5)) + 0x450i64);
                break;
            case 0x63:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x608);
                v21 = v11 + 1 + FuckEnc::CacheRead<_DWORD>(v10 + 0x620);
                v21 += 0x33D0FF01 * FuckEnc::CacheRead<_DWORD>(v4 + 0x598);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0);
                break;
            case 0x64:
                v21 = (FuckEnc::CacheRead<_DWORD>(v4 + 0x170) ^ v11) + v5;
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x740);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x290);
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x480) + 0x118i64);
                break;
            case 0x65:
                Calls::FastCall(v4 + 0x408, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 8i64 * (unsigned __int8)__ROL4__(v5, 9)) + 0x748i64) + 8i64 * (unsigned __int8)(0x60 * v5)));
                break;
            case 0x66:
                v21 = __ROL4__(v11, 0x49);
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x600) + 8i64 * (__ROR4__(v5, 9) & 0x3C)) + 0x1B0i64) + 0x378i64) + 0x728i64) + 4i64 * (((unsigned __int8)v5 ^ 0x1B) & 0x3F));
                break;
            case 0x67:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x548);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6C0) + 0xF8i64);
                Calls::FastCall(v10 + 0x418, &v21, v5, v4);
                break;
            case 0x68:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4D0) + 0xA8i64);
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x5A8) + 8i64 * ((unsigned __int8)v5 & 0xFE)) + 0x5A8i64) + 8i64 * (unsigned __int8)(0x2E * v5)) + 0x330i64) + 0x220i64);
                break;
            case 0x69:
                v21 = (v11 - 0x216B2F01) ^ 0xC31131B3;
                Calls::FastCall(v4 + 0x18, &v21, v5, v4);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x2B8);
                break;
            case 0x6A:
                Calls::FastCall(v4 + 0x270, &v21, v5, v4);
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x750) + 0x708i64) + 0x638i64));
                break;
            case 0x6B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x760);
                v21 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8) ^ (FuckEnc::CacheRead<_DWORD>(v10 + 0x5F8) >> 9);
                break;
            case 0x6C:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6C8) + 0x590i64) + 4i64 * (((unsigned __int8)v5 ^ 8) & 0xAB)) ^ v11;
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x400);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x58) + 0x450i64);
                break;
            case 0x6D:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8);
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 0x1C0) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6C8) + 0x620i64));
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x400) ^ v5;
                break;
            case 0x6E:
                v21 = v11 + 0x217ADE99;
                v21 = (v11 + 0x217ADE99) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x498) + 4i64 * ((unsigned __int8)(FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0) - 0x57) & 0xBD)) * (FuckEnc::CacheRead<_DWORD>(v4 + 0xD8) - 0x2639F393));
                break;
            case 0x6F:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x170);
                Calls::FastCall(v4 + 0x4A8, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 0x5C0i64));
                break;
            case 0x70:
                Calls::FastCall(v4 + 0x158, &v21, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x668);
                v21 ^= v5 + FuckEnc::CacheRead<_DWORD>(v10 + 0x168);
                break;
            case 0x71:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8);
                v21 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v10 + 0x548) ^ ~(0x78D8E892 * FuckEnc::CacheRead<_DWORD>(v4 + 0x620)) & 0xFFFFFFE7;
                break;
            case 0x72:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6C8);
                v21 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x760i64) + 0xD8i64) + FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x5A8) + 8i64 * ((unsigned __int8)(0x6A * v5) & 0xC1)) + 0x368i64));
                break;
            case 0x73:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x608) + 0x4D0i64) + 0x220i64);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x580) + 0x728i64) + 4i64 * (unsigned __int8)(0xB1 * v5));
                break;
            case 0x74:
                v21 = v11 - 0x57434607;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x708);
                v21 = FuckEnc::CacheRead<_DWORD>(v10 + 0x2B0) ^ (v11 - 0x57434607);
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x388) + 0x478i64) + 0x20i64);
                break;
            case 0x75:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0x240i64) + 0x438i64) + 0x710i64);
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x450) + (FuckEnc::CacheRead<_DWORD>(v10 + 0x248) ^ 0x636454D);
                break;
            case 0x76:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x618) + 0x228i64) + 8i64 * ((unsigned __int8)v5 & 0xD7)) + 0x68i64);
                Calls::FastCall(v10 + 0x3E8, &v21, v5, v4);
                break;
            case 0x77:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x60);
                v21 = FuckEnc::CacheRead<_DWORD>(v10 + 0x4F0) ^ v11;
                Calls::FastCall(v4 + 0x698, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5A8) + 8i64 * (((unsigned __int8)v5 ^ 2) & 0xC2)));
                break;
            case 0x78:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0);
                v21 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 8i64 * (v5 & 0x3B)) + 0x228i64) + 8i64 * (unsigned __int8)(0x22 * v5)) + 0x100i64) ^ v21) - 0x53A8D729;
                break;
            case 0x79:
                Calls::FastCall(v4 + 0x678, &v21, v5, v4);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x568) + 8i64 * ((unsigned __int8)__ROR4__(v5, 0x15) & 0x9F)) + 0x118i64);
                break;
            case 0x7A:
                v21 = v11 + 0xD0D582E;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6C8);
                v21 = (FuckEnc::CacheRead<_DWORD>(v10 + 0x740) ^ 0x8EF05AF4) + v11 + 0xD0D582E;
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x220);
                break;
            case 0x7B:
                v21 = v11 + 0x5293D911;
                Calls::FastCall(v4 + 0x4A8, &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x478));
                v21 += 0x30642D08;
                break;
            case 0x7C:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x148) + 0x750i64) + 0x480i64);
                Calls::FastCall(v4 + 0x550, &v21, v5, v10);
                break;
            case 0x7D:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA0) + 0x580i64) + 0x788i64) + 8i64 * ((unsigned __int8)v5 & 0xF9), &v21, v5, v4);
                break;
            case 0x7E:
                v21 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x170) << 7);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x228) + 8i64 * ((unsigned __int8)__ROR4__(v5, 0xD) & 0xDC)) + 0x450i64) ^ 0x52867ECB;
                break;
            case 0x7F:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3D8);
                v21 ^= ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x600) + 8i64 * (unsigned __int8)(0xAF * v5)) + 0x740i64) ^ 0xA0BE63E6);
                break;
            case 0x80:
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x2B8));
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x4B0) + (FuckEnc::CacheRead<_DWORD>(v4 + 0x220) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x230) + 0x598i64));
                break;
            case 0x81:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x400) ^ v11;
                v21 ^= ~FuckEnc::CacheRead<_DWORD>(v4 + 0xD8);
                v21 ^= v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x780);
                break;
            case 0x82:
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0) + 0x540i64));
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x780);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0) + 0x388i64);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x4B0);
                break;
            case 0x83:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x450);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x438) + 0x4D0i64);
                Calls::FastCall(v4 + 0x3F0, &v21, v5, v10);
                break;
            case 0x84:
                v21 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x5F8));
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 0x690i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1A8) + 0x5C0i64);
                v21 += FuckEnc::CacheRead<_DWORD>(v10 + 0x368);
                break;
            case 0x85:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x780) ^ v11;
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0) + 0x6B0i64) + 8i64 * (v5 & 0x55)) + 0x2E8i64) + 0x118i64);
                break;
            case 0x86:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x20) + v5;
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x390) ^ 0xD5BA5ABB;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x710);
                v21 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x400);
                break;
            case 0x87:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x290);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x58) + 0x258i64, &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x520));
                break;
            case 0x88:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x170) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0x290i64);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x638);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x5F8) | 2;
                break;
            case 0x89:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x750) + 0x330i64);
                Calls::FastCall(v4 + 0x648, &v21, v5, FuckEnc::CacheRead<_QWORD>(v10 + 0x5C8));
                break;
            case 0x8A:
                Calls::FastCall(v4 + 0x360, &v21, v5, v4);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0) + 0x300i64) + 4i64 * ((unsigned __int8)__ROL4__(v5, 0xB) & 0xDC));
                break;
            case 0x8B:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4D0) + 0x448i64) + 4i64 * (~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5A8) + 8i64 * (unsigned __int8)(0xDD * v5)) + 0x1B8i64) + 4i64 * ((unsigned __int8)(0x66 * v5) & 0xAB)) & 0x2C));
                break;
            case 0x8C:
                v21 = v11 + 1 + FuckEnc::CacheRead<_DWORD>(v4 + 0x20);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x4B0) + (FuckEnc::CacheRead<_DWORD>(v4 + 0x548) ^ v5) + 1;
                break;
            case 0x8D:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x60);
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0xD8) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D8) + 0x608i64) + 0x300i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 0x17));
                break;
            case 0x8E:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x460) + 8i64 * (__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x620), 6) & 0x89)) + 0x4E0i64) + 8i64 * (v5 & 0xA), &v21, v5, v4);
                break;
            case 0x8F:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x3A8) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x378);
                Calls::FastCall(v4 + 0x6E8, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x6F0) + 8i64 * ((unsigned __int8)v5 ^ 0xE8u)));
                break;
            case 0x90:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x168) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8);
                Calls::FastCall(v10 + 0x3B8, &v21, v5, FuckEnc::CacheRead<_QWORD>(v4));
                break;
            case 0x91:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x608) + 0x260i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x600) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x620) & 0x50)) + 0x2F0i64) + 0x588i64);
                v21 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x540);
                break;
            case 0x92:
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x248));
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_DWORD>(v4 + 0x20) ^ 0x58);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 0x620i64);
                break;
            case 0x93:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x400) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x708);
                Calls::FastCall(v10 + 0x2D0, &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x148));
                break;
            case 0x94:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0xD8) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x788) + 8i64 * (~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x390) & 0x4C), &v21, v5, v4);
                break;
            case 0x95:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x400);
                v21 += v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x5F8) & 0x15)) + 0x1B8i64) + 4i64 * (unsigned __int8)(0x44 * v5));
                break;
            case 0x96:
                v21 = __ROR4__(v11, 0x7B);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x708);
                v21 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x28);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x370) + 8i64 * (unsigned __int8)__ROR4__(v5, 0xA)) + 0x28i64);
                break;
            case 0x97:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x338) + 0x350i64) + 4i64 * (unsigned __int8)(0xBD * v5));
                v21 = __ROR4__(v21, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x88) + 8i64 * (unsigned __int8)(0x11 * v5)) + 0x620i64));
                break;
            case 0x98:
                v21 = (v5 ^ v11) - 0x8A8F051;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x618) + 0x608i64);
                v21 ^= ~FuckEnc::CacheRead<_DWORD>(v10 + 0x3F8) << 0x1D;
                break;
            case 0x99:
                v21 = __ROR4__((v11 ^ 0x8D1FF41) - 0x1E3C243F, v5);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x230) + 0x6C8i64) + 0x290i64);
                v21 += FuckEnc::CacheRead<_DWORD>(v10 + 0x3F8);
                break;
            case 0x9A:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x1A8i64) + 0x228i64) + 8i64 * (unsigned __int8)(0xDA * v5)) + 0x48i64) + 8i64 * ((0xEB * (_BYTE)v5) & 0x4A)) + 0x118i64);
                break;
            case 0x9B:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8) + 8i64 * (v5 & 0x5F)) + 0x440i64) + 0x538i64, &v21, v5, v4);
                break;
            case 0x9C:
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x260));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1A0) + 0x460i64) + 8i64 * (v5 & 0x45)) + 0x1B0i64);
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_DWORD>(v10 + 0x78));
                break;
            case 0x9D:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x540) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x240) + 0xA0i64) + 0x6D0i64) + 0x450i64) + 1;
                break;
            case 0x9E:
                Calls::FastCall(v4 + 0x6E8, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x438) + 0x480i64) + 0x608i64) + 0x5C8i64));
                break;
            case 0x9F:
                Calls::FastCall(v4 + 0x258, &v21, v5, v4);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x750) + 0x70i64) + 4i64 * (__ROR4__(v5, 0x13) & 0xA));
                break;
            case 0xA0:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4C0);
                v21 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x608) + 0x1F0i64) + 0x400i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x460) + 8i64 * (((unsigned __int8)v5 ^ 0x18) & 0xDF)) + 0x248i64);
                break;
            case 0xA1:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x598);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x548) * v5;
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x78) * v5 - 0x4DBEB770;
                break;
            case 0xA2:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x118);
                v21 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B8) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x4B0), 0xF));
                break;
            case 0xA3:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x148) + 0x260i64);
                Calls::FastCall(v4 + 0x648, &v21, v5, v4);
                break;
            case 0xA4:
                v21 = v11 + ((FuckEnc::CacheRead<_DWORD>(v4 + 0x3A8) + 0x4794D3DF) ^ 0x493875F0);
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x438) + 0x300i64) + 4i64 * ((unsigned __int8)v5 & 0xAB)));
                break;
            case 0xA5:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x688) + 0x53003966;
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 8i64 * ((unsigned __int8)v5 ^ 0x1Cu)) + 0x260i64));
                break;
            case 0xA6:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x580);
                v21 = v11 + ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x220) * (FuckEnc::CacheRead<_DWORD>(v10 + 0x3A8) ^ 0x7E11538E));
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x2B8);
                break;
            case 0xA7:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x60) + 0x600i64) + 8i64 * (unsigned __int8)(0xD1 * v5)) + 0x1C8i64, &v21, v5, v4);
                break;
            case 0xA8:
                v21 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x290) + 0x390i64) ^ 0x3BF8E5E4);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x4F0);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8) >> 4;
                break;
            case 0xA9:
                v21 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x3A8) | 0x17);
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 8i64 * (v5 & 0x78)) + 0x1B8i64) + 4i64 * ((unsigned __int8)v5 & 0xB1));
                break;
            case 0xAA:
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x78));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0) + 0x378i64) + 0x230i64) + 0x1E8i64) + 0x290i64);
                v21 += FuckEnc::CacheRead<_DWORD>(v10 + 0x368);
                break;
            case 0xAB:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x450);
                v21 = v21 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x638) ^ 0xD1ED81F1) - FuckEnc::CacheRead<_DWORD>(v4 + 0x5F8);
                break;
            case 0xAC:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x20) ^ v11;
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x170);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x1C0);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x78);
                break;
            case 0xAD:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8);
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x5F8) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA0) + 0x2D8i64) + 8i64 * (unsigned __int8)(0x73 * v5)) + 0x448i64) + 4i64 * (unsigned __int8)(0x31 * v5));
                break;
            case 0xAE:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x330);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x668) + 0x658i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x13), &v21, v5, v10);
                break;
            case 0xAF:
                v21 = v11 ^ (0x55A32C7F * FuckEnc::CacheRead<_DWORD>(v4 + 0x2B8));
                Calls::FastCall(v4 + 0x648, &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x6C0));
                break;
            case 0xB0:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x100) ^ v11;
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x308) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x370) + 8i64 * (unsigned __int8)((_BYTE)v5 << 6)) + 0x2B0i64) ^ 0xD9FD30B7;
                break;
            case 0xB1:
                v21 = v11 - 0x8C2E163;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x580);
                v21 = v11 - 0x8C2E163 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x2E8) + 0x370i64) + 8i64 * (((unsigned __int8)v5 ^ 0xEC) & 0x33)) + 0x448i64) + 4i64 * ((unsigned __int8)(0x2B * v5) & 0x96));
                break;
            case 0xB2:
                v21 = v11 - 0x49BEEB66;
                v10 = FuckEnc::CacheRead<_QWORD>(v4);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x148) + 0x2C0i64, &v21, v5, FuckEnc::CacheRead<_QWORD>(v4));
                break;
            case 0xB3:
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x370) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x20) & 0xB8)) + 0x78i64)) - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x68);
                v21 += FuckEnc::CacheRead<_DWORD>(v10 + 0x6E0);
                break;
            case 0xB4:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x760) + 0xA8i64) + 0x1E8i64) + 0x2F0i64);
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 0x78) + FuckEnc::CacheRead<_DWORD>(v4 + 0x118));
                break;
            case 0xB5:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x338) + 0x738i64, &v21, v5, v4);
                v21 = __ROR4__(v21, FuckEnc::CacheRead<_DWORD>(v4 + 0x100)) - 0x58AD34A4;
                break;
            case 0xB6:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xC0) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x690), 0xF)) ^ v11;
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x300i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 0x1D));
                break;
            case 0xB7:
                v21 = ~(_DWORD)v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0) + 0x600i64) + 8i64 * (unsigned __int8)(0xD8 * v5)) + 0x148i64) + 0x710i64);
                v21 = __ROR4__(~(_DWORD)v11, FuckEnc::CacheRead<_DWORD>(v10 + 0x548));
                break;
            case 0xB8:
                v21 = __ROR4__(v11, v5);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x388);
                v21 -= v5 * FuckEnc::CacheRead<_DWORD>(v10 + 0x220) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x330) + 0x5F8i64);
                break;
            case 0xB9:
                v21 = ~(v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x308));
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x690) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0) + 0x540i64);
                break;
            case 0xBA:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 8i64 * ((unsigned __int8)__ROR4__(v5, 0x17) & 0xB7)) + 0x628i64) + 8i64 * ((unsigned __int8)v5 & 0xEE), &v21, v5, v4);
                break;
            case 0xBB:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0);
                v21 = FuckEnc::CacheRead<_DWORD>(v10 + 0x6E0) ^ v11;
                v21 = __ROR4__(v21, FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8));
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2E8) + 0x4F0i64);
                break;
            case 0xBC:
                v21 = __ROR4__(__ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x168)), 0xF4);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x338) + 0x240i64);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x2F8) + 0x548i64) ^ 0x22D1FF41;
                break;
            case 0xBD:
                Calls::FastCall(v4 + 0x158, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x420) + 8i64 * (__ROL4__(~FuckEnc::CacheRead<_DWORD>(v4 + 0x220), 0xD) & 0x67)) + 0x6D0i64));
                break;
            case 0xBE:
                v21 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x618) + 0x170i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x228) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x16)) + 0x448i64) + 4i64 * ((unsigned __int8)v5 & 0xD6)));
                break;
            case 0xBF:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x68i64) + 0x5C0i64);
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x48) + 8i64 * (~(_BYTE)v5 & 0x14)) + 0x6D8i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 0xC)) ^ v11;
                break;
            case 0xC0:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x248);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8) + 0x190i64) + 8i64 * ((unsigned __int8)v5 & 0xD6)) + 0x100i64);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x390);
                break;
            case 0xC1:
                v21 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x290) + 0x740i64) | 6);
                v21 ^= v5 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x750) + 0x168i64);
                break;
            case 0xC2:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x450) ^ 0x2Cu)) + 0x350i64) + 4i64 * (__ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x230) + 0x498i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 8)), 4) & 0x75));
                break;
            case 0xC3:
                v21 = __ROR4__(v11, 0x76);
                v21 ^= ~FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0);
                v21 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0) + 0x220i64);
                break;
            case 0xC4:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x4F8) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x598) & 0x15), &v21, v5, v4);
                break;
            case 0xC5:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8) + 0xE8i64);
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x228) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x14)) + 0x740i64) * v5 - FuckEnc::CacheRead<_DWORD>(v10 + 0x100);
                break;
            case 0xC6:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1A8) + 0x520i64) + 0x750i64);
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x350) + 4i64 * (((unsigned __int8)v5 ^ 0x24) & 0xAD)) ^ v11 ^ 0xB9423CAC;
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_DWORD>(v4 + 0x168));
                break;
            case 0xC7:
                v21 = v11 ^ (0xFA82FC5C * FuckEnc::CacheRead<_DWORD>(v4 + 0xD8));
                v21 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1D0) + 8i64 * (v5 & 8)) + 0x638i64);
                break;
            case 0xC8:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x460) + 8i64 * ((unsigned __int8)v5 ^ 0xA0u)) + 0x4D0i64);
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x20) * (0x7226FAFE - FuckEnc::CacheRead<_DWORD>(v4 + 0x620));
                break;
            case 0xC9:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x748) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xF8) + 0x498i64) + 4i64 * ((unsigned __int8)__ROL4__(v5, 8) & 0x9D)) & 0x88)) + 0x378i64) + 0x690i64) ^ v11;
                break;
            case 0xCA:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x78) ^ v11;
                v21 += 0x608844C7 * FuckEnc::CacheRead<_DWORD>(v4 + 0x3A8);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1A0) + 0x5E0i64) + 4i64 * ((unsigned __int8)v5 & 0xB1));
                break;
            case 0xCB:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x148) + 0x118i64);
                v21 = __ROR4__(v21, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4D0) + 0x780i64));
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x2B8);
                break;
            case 0xCC:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x58);
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x78);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x308) * v5;
                v21 += 0x2F00F706 * FuckEnc::CacheRead<_DWORD>(v4 + 0x220);
                break;
            case 0xCD:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 8i64 * (unsigned __int8)(0x97 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x430) + 0x6C0i64) + 0x390i64))) + 0x588i64) + 0x6D0i64);
                v21 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 0x308));
                break;
            case 0xCE:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x3A8) ^ v11;
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x390);
                v21 = __ROR4__(v21, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x568) + 8i64 * (((unsigned __int8)v5 ^ 8) & 0x1C)) + 0x6D8i64) + 4i64 * (unsigned __int8)(0xF6 * v5)));
                break;
            case 0xCF:
                Calls::FastCall(v4 + 0x258, &v21, v5, v4);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2E8) + 0x308i64);
                break;
            case 0xD0:
                v21 = __ROR4__(v11, 0xF0) - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2E8);
                v21 = v21 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0) + 0x390i64) - FuckEnc::CacheRead<_DWORD>(v10 + 0x740);
                break;
            case 0xD1:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2F0);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x7A0) + 8i64 * ((unsigned __int8)v5 & 0xCD), &v21, v5, v4);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x620);
                break;
            case 0xD2:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x28);
                v21 = __ROR4__(v21, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xC0) + 4i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x620) ^ 8) & 0x89)));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x588);
                v21 += FuckEnc::CacheRead<_DWORD>(v10 + 0x308);
                break;
            case 0xD3:
                v21 = (v11 + 986368081 - -923596749 * FuckEnc::CacheRead<_DWORD>(v4 + 0x78)) ^ 0x9AC50428;
                v21 = v21 - FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8) - v5;
                break;
            case 0xD4:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 0x750i64) + 0x388i64) + 0x600i64) + 8i64 * (unsigned __int8)(0xE5 * v5)) + 0x608i64);
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0xC0) + 4i64 * (v5 & 0x39)) ^ v11;
                break;
            case 0xD5:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x68i64) + 0x708i64) + 0x20i64) ^ v11;
                v21 = __ROR4__(v21, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4D0) + 0x588i64) + 0x78i64));
                break;
            case 0xD6:
                v10 = FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x420) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x10));
                Calls::FastCall(v10 + 0x6E8, &v21, v5, v4);
                break;
            case 0xD7:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 0x448i64) + 4i64 * ((unsigned __int8)v5 ^ 0x25u));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA0) + 0x68i64);
                v21 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x20);
                break;
            case 0xD8:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x708) + 0x1E8i64) + 0x520i64);
                v21 = v11 - (FuckEnc::CacheRead<_DWORD>(v10 + 0x4B0) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 0x6C8i64) + 0x390i64));
                break;
            case 0xD9:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xA0);
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x638);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x260);
                v21 = ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0) + (_DWORD)0x26D1A48 + v21);
                break;
            case 0xDA:
                v21 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 0x438i64) + 0x5F8i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x568) + 8i64 * (unsigned __int8)(0x33 * v5)) + 0xA0i64) + 0x598i64);
                break;
            case 0xDB:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x448) + 4i64 * (~(FuckEnc::CacheRead<_BYTE>(v4 + 0x4B0) ^ (unsigned __int8)(FuckEnc::CacheRead<_BYTE>(v4 + 0x220) * v5)) & 0x38)) ^ v11;
                break;
            case 0xDC:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x240) + 0x480i64) + 0x2B8i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x378);
                v21 = ~(v21 ^ (0x2D4895C8 * FuckEnc::CacheRead<_DWORD>(v10 + 0x3F8)));
                break;
            case 0xDD:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1A0) + 0x138i64) + 8i64 * (unsigned __int8)(0x4F * v5), &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x668));
                break;
            case 0xDE:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4C0);
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x368) * FuckEnc::CacheRead<_DWORD>(v10 + 0x400) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x450) + 0x4C721D76);
                break;
            case 0xDF:
                v21 = ~(v11 + 0x72D1FF41);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x450) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x88) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1B)) + 0x4B0i64);
                break;
            case 0xE0:
                v21 = v11 - 0x471DB9A2;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4C0) + 0x600i64) + 8i64 * (v5 & 0xC)) + 0x1E8i64);
                v21 = (v11 - 0x471DB9A2 - FuckEnc::CacheRead<_DWORD>(v10 + 0x450)) ^ 0xA653AEDA;
                break;
            case 0xE1:
                Calls::FastCall(v4 + 0x2A0, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x60) + 0x760i64));
                v21 += 0x452E00BF * FuckEnc::CacheRead<_DWORD>(v4 + 0x4B0);
                break;
            case 0xE2:
                v21 = ~(v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x780));
                v21 = __ROL4__(v21, v5 + FuckEnc::CacheRead<_BYTE>(v4 + 0x100) * (v5 + FuckEnc::CacheRead<_BYTE>(v4 + 0x2B8)));
                break;
            case 0xE3:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x478) + 0x260i64) ^ v11;
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x308) ^ (0xC3113171 * FuckEnc::CacheRead<_DWORD>(v4 + 0x260));
                break;
            case 0xE4:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x330);
                v21 = v5 ^ FuckEnc::CacheRead<_DWORD>(v10 + 0x5F8) ^ v11;
                v21 ^= 0x6D3B9018 * FuckEnc::CacheRead<_DWORD>(v4 + 0x4B0);
                break;
            case 0xE5:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x290) + 0x3F8i64) ^ v11;
                v21 += v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x390);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x28);
                break;
            case 0xE6:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x20);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2F0);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x230) + 0x458i64, &v21, v5, v10);
                break;
            case 0xE7:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x430) + 0x608i64) + 0x240i64);
                Calls::FastCall(v4 + 0x560, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0xE0) + 8i64 * (((unsigned __int8)v5 ^ 1) & 9)));
                break;
            case 0xE8:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0);
                v21 += (FuckEnc::CacheRead<_DWORD>(v4 + 0x260) - 0x2E00BE40) * ~(v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0xD8));
                break;
            case 0xE9:
                Calls::FastCall(v4 + 0x110, &v21, v5, v4);
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xF8) + 0x60i64) + 0x5F8i64);
                break;
            case 0xEA:
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x578);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x118);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6F0) + 8i64 * (v5 & 0x3A)) + 0x4F0i64);
                break;
            case 0xEB:
                v21 = v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x118) ^ v11;
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x248);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 0x1B8i64) + 4i64 * (unsigned __int8)(0x28 * v5));
                break;
            case 0xEC:
                v21 = v5 + v11 + 0x4A2E00BF;
                v21 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x228) + 8i64 * (unsigned __int8)(0xDC * FuckEnc::CacheRead<_BYTE>(v4 + 0x598))) + 0x308i64);
                break;
            case 0xED:
                v21 = v11 - v5;
                v21 = __ROL4__(v11 - v5, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8) + 0x28i64) + ~(v5 + FuckEnc::CacheRead<_BYTE>(v4 + 0x620)));
                break;
            case 0xEE:
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x248) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x60) + 0x290i64) + 0x100i64));
                break;
            case 0xEF:
                v21 = v11 + v5 * FuckEnc::CacheRead<_DWORD>(v4 + 0x540) * FuckEnc::CacheRead<_DWORD>(v4 + 0x688);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8) + 8i64 * ((unsigned __int8)v5 ^ 2u)) + 0x308i64);
                break;
            case 0xF0:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x3A8);
                v21 = __ROR4__(v21, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x478) + 0x6E0i64));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1A0) + 0x480i64);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x170);
                break;
            case 0xF1:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x438);
                v21 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v10 + 0x28);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x578) + 0x1B8i64) + 4i64 * (v5 & 0x1B));
                break;
            case 0xF2:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x168) ^ v11;
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x438) + 0x400i64);
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x1C0i64) ^ v5;
                break;
            case 0xF3:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x308);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6C0) + 0x370i64) + 8i64 * (unsigned __int8)(0x91 * FuckEnc::CacheRead<_BYTE>(v4 + 0x1C0))) + 0x350i64) + 4i64 * ((unsigned __int8)v5 ^ 0x20u));
                break;
            case 0xF4:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0);
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x6F0) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x13)) + 0x20i64);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x568) + 8i64 * (__ROR4__(v5, 8) & 0x5C)) + 0x638i64);
                break;
            case 0xF5:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA0) + 0x290i64) + 0x5E0i64) + 4i64 * (unsigned __int8)(0x5F * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5A8) + 8i64 * (v5 & 0x11)) + 0x118i64)));
                break;
            case 0xF6:
                Calls::FastCall(v4 + 0x360, &v21, v5, v4);
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4D0) + 0xA0i64) + 0x1C0i64);
                break;
            case 0xF7:
                v21 = v11 + 1 + FuckEnc::CacheRead<_DWORD>(v4 + 0x390);
                v21 = __ROR4__(v21, FuckEnc::CacheRead<_DWORD>(v4 + 0x688));
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6C8) + 0x100i64);
                break;
            case 0xF8:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 0x748i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 3)) + 0x2E8i64) + 0x5E0i64) + 4i64 * ((unsigned __int8)v5 & 0xA6));
                break;
            case 0xF9:
                v21 = v11 - 0x53C30131;
                v21 = (FuckEnc::CacheRead<_DWORD>(v4 + 0x690) ^ (v11 - 0x53C30131)) + v5;
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x5F8) ^ 0x69A0A78;
                break;
            case 0xFA:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE0) + 8i64 * (unsigned __int8)(0x8A * FuckEnc::CacheRead<_BYTE>(v4 + 0x450))) + 0x6C0i64);
                v21 = __ROL4__(v11, ((FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x70) + 4i64 * (unsigned __int8)__ROL4__(v5, 0x1A)) >> 0xB) - 0x15) | 0xE);
                break;
            case 0xFB:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x318) + 8i64 * (unsigned __int8)__ROR4__(v5, 0xA)) + 0x108i64) + 8i64 * (unsigned __int8)(0x78 * v5), &v21, v5, v4);
                break;
            case 0xFC:
                v21 = v11 ^ 0x61F6DAA7;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x18i64, &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0));
                break;
            case 0xFD:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x710);
                v21 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x220) * (~FuckEnc::CacheRead<_BYTE>(v10 + 0x3A8) ^ FuckEnc::CacheRead<_BYTE>(v4 + 0x3F8) & 0xE1));
                break;
            case 0xFE:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x230) + 0x618i64);
                v21 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x370) + 8i64 * ((unsigned __int8)v5 & 0xC5)) + 0x1D0i64) + 8i64 * (v5 & 0xE)) + 0x3A8i64));
                break;
            case 0xFF:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x598) ^ v11;
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x620) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x230) + 0x1E8i64) + 0x388i64) + 0x450i64);
                break;
            case 0x100:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x390) ^ v11;
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2E8) + 0x3A8i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x58);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x100);
                break;
            case 0x101:
                v21 = ~(v11 + 0x26C31131);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1A0) + 0x1C0i64) * v5;
                break;
            case 0x102:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x170) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F0) + 0xD8i64);
                break;
            case 0x103:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x168) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x768) ^ 0xBBD1FF41) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) + 0x7B2C1E33);
                break;
            case 0x104:
                v21 = (FuckEnc::CacheRead<_DWORD>(v4 + 0x450) ^ v11 ^ 0xB4CCDF92) - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x230);
                v21 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x590) + 4i64 * ((unsigned __int8)v5 ^ 0xB3u)) ^ v21);
                break;
            case 0x105:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x170) ^ v11;
                v21 = v21 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x760) + 0x1C0i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2E8) + 0x100i64);
                break;
            case 0x106:
                v21 = __ROR4__(v11, v5);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x168) ^ 0x8999ED01;
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x668) + 0x170i64) ^ v5);
                break;
            case 0x107:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x290);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x5A8) + 8i64 * (unsigned __int8)__ROR4__(v5, 0xE)) + 0x230i64) + 0x310i64, &v21, v5, v4);
                break;
            case 0x108:
                v21 = __ROL4__(v11, 0xEE);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x230i64) + 0x480i64);
                v21 = v5 + v21 - FuckEnc::CacheRead<_DWORD>(v10 + 0x4D8) + 0x49B0CC70;
                break;
            case 0x109:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x330) + 0x248i64) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1D0) + 8i64 * (unsigned __int8)(0x8D * v5)) + 0x240i64) + 0x260i64) + 1);
                break;
            case 0x10A:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x390);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x5F8);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xE8);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0xD8);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0);
                break;
            case 0x10B:
                v21 = v11 - 0xB0017B2 * FuckEnc::CacheRead<_DWORD>(v4 + 0x768);
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x370) + 8i64 * (unsigned __int8)(0xB5 * FuckEnc::CacheRead<_BYTE>(v4 + 0x690))) + 0xE8i64) + 0x448i64) + 4i64 * (v5 & 0x7E));
                break;
            case 0x10C:
                v21 = v5 ^ v11;
                v21 = (v5 ^ v11 ^ (0xD7AEFE07 * FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8) * ~FuckEnc::CacheRead<_DWORD>(v4 + 0x100))) + 0x1583F4A6;
                break;
            case 0x10D:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x520);
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x768) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0) + 0x620i64) * (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x780));
                break;
            case 0x10E:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x2E8) + 0x530i64, &v21, v5, v4);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x100);
                break;
            case 0x10F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x68);
                v13 = FuckEnc::CacheRead<unsigned __int8>(v4 + 0x768);
                v14 = FuckEnc::CacheRead<_QWORD>(v10 + 0x5A8);
                goto LABEL_275;
            case 0x110:
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0xD8i64) - 0x5C5D15C6);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x618) + 0x170i64);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x3A8);
                break;
            case 0x111:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x248) ^ v11;
                v21 = __ROR4__(v21 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x420) + 8i64 * ((unsigned __int8)v5 ^ 7u)) + 0x6C0i64) + 0x388i64) + 0x400i64), v5);
                break;
            case 0x112:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1A8);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x3B0) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x638) & 0x3B), &v21, v5, v10);
                break;
            case 0x113:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x5F8);
                v21 += 0x55D6B5A0 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 0x590i64) + 4i64 * ((unsigned __int8)v5 & 0xDD)) >> 8);
                break;
            case 0x114:
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x88) + 8i64 * ((unsigned __int8)v5 & 0xDC)) + 0x2B0i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6C0) + 0x578i64) + 0x598i64) + 0x695DE6A8);
                break;
            case 0x115:
                v21 = v11 + 1 + FuckEnc::CacheRead<_DWORD>(v4 + 0x100);
                Calls::FastCall(v4 + 0x80, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x460) + 8i64 * ((unsigned __int8)v5 & 0xD6)));
                break;
            case 0x116:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0) + 0x768i64) ^ v11;
                v21 ^= ~FuckEnc::CacheRead<_DWORD>(v4 + 0x308);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x100);
                break;
            case 0x117:
                v21 = v11 ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x368));
                v21 = v21 - FuckEnc::CacheRead<_DWORD>(v4 + 0x248) * v5 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x668) + 0x4F0i64);
                break;
            case 0x118:
                v21 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x88) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x13)) + 0x300i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 0x18)) & 0xFFFFFFF0);
                v21 ^= ~FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0);
                break;
            case 0x119:
                v21 = (v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B8) + 8i64 * (unsigned __int8)__ROR4__(v5, 4)) + 0x6B0i64) + 8i64 * ((unsigned __int8)(0x5A * v5) & 0xC4)) + 0x70i64) + 4i64 * ((unsigned __int8)v5 ^ 8u))) ^ 0x5C99FE87;
                break;
            case 0x11A:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6F0) + 8i64 * (unsigned __int8)__ROR4__(v5, 5)) + 0x10i64, &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x6C8));
                break;
            case 0x11B:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x390);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x430);
                Calls::FastCall(v4 + 0x3B8, &v21, v5, v10);
                v21 = __ROR4__(v21, FuckEnc::CacheRead<_DWORD>(v4 + 0x78));
                break;
            case 0x11C:
                v21 = __ROR4__(v11, v5);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x5F8);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x3A8) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x4B0) + 0x65C30131);
                break;
            case 0x11D:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x240) + 0x728i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 0x17));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x608);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x20) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0);
                break;
            case 0x11E:
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x600) + 8i64 * ((unsigned __int8)(0xAA * FuckEnc::CacheRead<_BYTE>(v4 + 0x170)) & 0xBA)) + 0x400i64) ^ ~(FuckEnc::CacheRead<_BYTE>(v4 + 0x220) - 0x66));
                break;
            case 0x11F:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8) + 0x5C0i64);
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x88) + 8i64 * (~((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x450) + 0x23) & 0x5F)) + 0x170i64);
                break;
            case 0x120:
                v21 = (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x620)) ^ 0x7530E128;
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8) + 8i64 * ((unsigned __int8)(v5 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x230) + 0x5F8i64)) & 0xB3)) + 0x28i64);
                break;
            case 0x121:
                v21 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0) + 0x6E0i64)) ^ 0xC3018944;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x618);
                v21 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x710) + 0x540i64);
                break;
            case 0x122:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x668);
                v21 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x318) + 8i64 * (unsigned __int8)(0x61 * FuckEnc::CacheRead<_BYTE>(v10 + 0x20))) + 0x420i64) + 8i64 * ((unsigned __int8)v5 & 0xF6)) + 0x748i64) + 8i64 * (unsigned __int8)(0xB7 * v5)) + 0x2B0i64));
                break;
            case 0x123:
                v21 = v11 - 0x317438AD;
                v21 = __ROR4__(v11 - 0x317438AD, ~FuckEnc::CacheRead<_BYTE>(v4 + 0x3F8));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0);
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x708) + 0x390i64);
                break;
            case 0x124:
                v21 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x450);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x170) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x580) + 0xC0i64) + 4i64 * ((unsigned __int8)v5 & 0x94));
                break;
            case 0x125:
                v21 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x598) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x60) + 0x6E0i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x70i64) + 4i64 * ((unsigned __int8)v5 ^ 0x7Bu)));
                break;
            case 0x126:
                v21 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x440i64) + 0xD8i64) << 0x1F) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x760) + 0xE8i64) + 0x548i64);
                break;
            case 0x127:
                v21 = v11 + 0x29EEF07F;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x88) + 8i64 * (v5 & 0x7D)) + 0x550i64, &v21, v5, v4);
                break;
            case 0x128:
                Calls::FastCall(v4 + 0x790, &v21, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x290);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x668) + 0x4F0i64);
                break;
            case 0x129:
                v21 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) ^ 0xC3018944);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE8) + 0x370i64) + 8i64 * (__ROR4__(v5, 0x1A) & 0x1C)) + 0x728i64) + 4i64 * ((unsigned __int8)v5 & 0x88));
                break;
            case 0x12A:
                Calls::FastCall(v4 + 0x310, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 8i64 * (v5 & 0xA)));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x240);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x4B0);
                break;
            case 0x12B:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x568) + 8i64 * (unsigned __int8)__ROL4__(v5, 7)) + 0x658i64) + 8i64 * ((unsigned __int8)v5 ^ 0xA7u), &v21, v5, v4);
                break;
            case 0x12C:
                v21 = __ROR4__(v11, v5);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 8i64 * ((unsigned __int8)v5 & 0xEA)) + 0x88i64) + 8i64 * ((unsigned __int8)v5 & 0x81)) + 0x5E0i64) + 4i64 * (((unsigned __int8)v5 ^ 0xED) & 0x33));
                break;
            case 0x12D:
                v21 = v11 - 0x2C30131;
                v21 = v11 - 0x2C30131 + (v5 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x430) + 0x1C0i64) | 0x15));
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_DWORD>(v4 + 0x548));
                break;
            case 0x12E:
                v21 = v11 + v5;
                v14 = FuckEnc::CacheRead<_QWORD>(v4 + 0x420);
                v13 = ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x100) ^ 6) & 0x67;
            LABEL_275:
                Calls::FastCall(v4 + 0x4E8, &v21, v5, FuckEnc::CacheRead<_QWORD>(v14 + 8 * v13));
                break;
            case 0x12F:
                v21 = v11 + 0x512E00BF;
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x520) + 0x388i64) + 0x100i64) ^ (v11 + 0x512E00BF);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8) + 1;
                break;
            case 0x130:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x260);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x438);
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_BYTE>(v10 + 0x168) * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1D0) + 8i64 * (((unsigned __int8)v5 ^ 0x11) & 0x95)) + 0x768i64));
                break;
            case 0x131:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 0x750i64) + 0x3F8i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3D8);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x300) + 4i64 * ((unsigned __int8)v5 & 0xC4));
                break;
            case 0x132:
                v21 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x248) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4D0) + 0x2B8i64) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8) & 0xFFFFFFEF);
                break;
            case 0x133:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x5F8);
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 8i64 * ((unsigned __int8)v5 ^ 0x71u)) + 0x6F0i64) + 8i64 * ((0xE * (_BYTE)v5) & 0x61)) + 0x6D8i64) + 4i64 * (((unsigned __int8)v5 ^ 0xE6) & 0x59)));
                break;
            case 0x134:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x148);
                v21 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v10 + 0x620);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x220);
                break;
            case 0x135:
                v21 = ~(v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x460) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x308) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x378) + 0x4D8i64), 0x1B)) + 0x620i64));
                break;
            case 0x136:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x760) + 0x420i64) + 8i64 * (unsigned __int8)(0x4E * v5)) + 0x578i64) + 0x2B0i64);
                break;
            case 0x137:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2E8);
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x228) + 8i64 * (((unsigned __int8)v5 ^ 0xAE) & 0xDD)) + 0x368i64) ^ ~FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0x598i64));
                break;
            case 0x138:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x378) + 0x3A8i64);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6F0) + 8i64 * ((unsigned __int8)~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) ^ 0xA1u)) + 0x690i64);
                break;
            case 0x139:
                Calls::FastCall(v4 + 0x110, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x388i64) + 0x290i64));
                break;
            case 0x13A:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x578);
                Calls::FastCall(v4 + 0x10, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x228) + 8i64 * (unsigned __int8)(0x81 * v5)) + 0x6C8i64));
                break;
            case 0x13B:
                v15 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0);
                v21 = v15;
                v16 = (unsigned __int8)(0x7A * v5);
                v17 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x370) + 8i64 * ((unsigned __int8)v5 & 0xB9)) + 0x228i64);
                goto LABEL_320;
            case 0x13C:
                v21 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x578) + 0x48i64) + 8i64 * (((unsigned __int8)v5 ^ (unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8)) & 0xC)) + 0x1D0i64) + 8i64 * ((unsigned __int8)v5 ^ 0x63u)) + 0x5F8i64));
                break;
            case 0x13D:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) ^ v11;
                Calls::FastCall(v4 + 0x500, &v21, v5, v4);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x2B8);
                break;
            case 0x13E:
                v21 = ~(v11 - v5);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x58);
                Calls::FastCall(v10 + 0x550, &v21, v5, v4);
                break;
            case 0x13F:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x58) + 0x2D8i64) + 8i64 * ((unsigned __int8)v5 & 0xC8)) + 0xE8i64) + 0x338i64) + 0x6D0i64);
                v21 = FuckEnc::CacheRead<_DWORD>(v10 + 0x768) ^ v11;
                break;
            case 0x140:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x740);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x568) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x248), 0x18)) + 0x668i64);
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_BYTE>(v10 + 0x308) * v5);
                break;
            case 0x141:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6C8);
                v21 = v11 - (FuckEnc::CacheRead<_DWORD>(v10 + 0x2B0) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x638) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x5F8) + 0xD64A826));
                break;
            case 0x142:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2E8) + 0xA8i64) + 0x4C0i64) + 0x378i64) + 0x2E8i64) + 0x420i64) + 8i64 * (v5 & 0x12)) + 0x170i64) ^ v11;
                break;
            case 0x143:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x88) + 8i64 * (unsigned __int8)__ROR4__(~FuckEnc::CacheRead<_DWORD>(v4 + 0x28), 0x19)) + 0x640i64) + 8i64 * ((unsigned __int8)v5 & 0x87), &v21, v5, v4);
                break;
            case 0x144:
                v21 = __ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0xD8) ^ v11, 0x87);
                v21 = ~(v21 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x4B0) | 0xD));
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x308);
                break;
            case 0x145:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0);
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x58) + 0x148i64) + 0x438i64) + 0x5E0i64) + 4i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x690) ^ 0xFE) & 0xD));
                break;
            case 0x146:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x148) + 0x620i64) ^ v11;
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x370) + 8i64 * (unsigned __int8)(0x5C * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D8) + 0x220i64))) + 0x6D8i64) + 4i64 * (__ROL4__(v5, 9) & 0x46));
                break;
            case 0x147:
                v21 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x5F8);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x58) + 0x48i64) + 8i64 * ((unsigned __int8)v5 & 0xB8)) + 0x58i64);
                v21 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x168);
                break;
            case 0x148:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x780);
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x370) + 8i64 * (unsigned __int8)__ROL4__(v5, 0xF)) + 0x6D8i64) + 4i64 * (v5 & 0x36)) ^ v5;
                break;
            case 0x149:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x308);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x620);
                v21 ^= v5 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8) ^ 0x813D61E1 | 1);
                break;
            case 0x14A:
                v21 = __ROL4__(v11 - v5, 0x34);
                v21 = ~(v21 + 0x43EE4569 * ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x4F0i64));
                break;
            case 0x14B:
                v21 = (v11 + 0x2960EBB5) ^ 0x95A2231;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x750);
                v21 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x4F0) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6C0) + 0x28i64);
                break;
            case 0x14C:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x390) ^ v11 ^ 0x243A9987;
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x618) + 0x460i64) + 8i64 * (unsigned __int8)(0x6F * v5)) + 0x4F0i64) ^ 0xC3018944;
                break;
            case 0x14D:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 0x3E8i64, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x520i64));
                break;
            case 0x14E:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 8i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x440) + 0x100i64), 0x1E) & 0xEC)) + 0x738i64, &v21, v5, v4);
                break;
            case 0x14F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x378);
                v21 = v11 ^ (~FuckEnc::CacheRead<_DWORD>(v4 + 0x780) + FuckEnc::CacheRead<_DWORD>(v4 + 0x308) * FuckEnc::CacheRead<_DWORD>(v10 + 0x688));
                break;
            case 0x150:
                v21 = v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x230) + 0x640i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x17), &v21, v5, v4);
                break;
            case 0x151:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE0) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x368), 0xC)) + 0x750i64) + 0xA0i64) + 0x338i64);
                v21 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v10 + 0x400);
                break;
            case 0x152:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6C8) + 0x748i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0xC)) + 0x80i64, &v21, v5, v4);
                break;
            case 0x153:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x378);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x770) + 8i64 * (unsigned __int8)(0xC8 * FuckEnc::CacheRead<_DWORD>(v10 + 0x390)), &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x338));
                break;
            case 0x154:
                v21 = v11 + 0x3CEECEC4 * FuckEnc::CacheRead<_DWORD>(v4 + 0x3A8);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8) + 8i64 * (unsigned __int8)(0x8E * v5)) + 0x1A8i64) + 0x548i64);
                break;
            case 0x155:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x578);
                v21 = (unsigned int)0x11C31131 ^ FuckEnc::CacheRead<_DWORD>(v10 + 0x620) ^ v11;
                v21 = v21 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5A8) + 8i64 * (__ROL4__(v5, 8) & 0x6E)) + 0x5F8i64) + 0x2E00BE8A;
                break;
            case 0x156:
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x118) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x608) + 0x2B0i64));
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x388) + 0x300i64) + 4i64 * ((unsigned __int8)v5 & 0xD5));
                break;
            case 0x157:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x438) + 0x4B8i64) + 8i64 * ((unsigned __int8)v5 ^ 0x1Eu)) + 0x350i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 0x12));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4C0);
                v21 += FuckEnc::CacheRead<_DWORD>(v10 + 0x740);
                break;
            case 0x158:
                v21 = __ROL4__(v11, ~((unsigned int)(0x3CFE76BC * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0) + 0x440i64) + 0x690i64) + 0x545D69BB) >> 0xA));
                break;
            case 0x159:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x688);
                v21 = 0x41E41BA3 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE0) + 8i64 * ((unsigned __int8)__ROR4__(v5, 0x1D) & 0xAA)) + 0x240i64) + 0x400i64) ^ v21);
                break;
            case 0x15A:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x248) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x618);
                v21 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x6E0) ^ (0x7102952D * FuckEnc::CacheRead<_DWORD>(v4 + 0x548));
                break;
            case 0x15B:
                v21 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x220));
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x440) + 0x118i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x70) + 4i64 * (__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x78), 0x1A) & 5));
                break;
            case 0x15C:
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x70) + 4i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x450), 0x18)));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xA8);
                v21 -= FuckEnc::CacheRead<unsigned __int16>(v10 + 0x24A);
                break;
            case 0x15D:
                v21 = v11 ^ 0x911C4401;
                v21 = (v11 ^ 0x911C4401) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0x768i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4D0) + 0x290i64);
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_DWORD>(v10 + 0x100));
                break;
            case 0x15E:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1A0) + 0x388i64) + 0x1A0i64) + 0x3A8i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4);
                v21 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 0x368i64);
                break;
            case 0x15F:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0) + 0x2F0i64) + 0x580i64) + 0x1E8i64) + 0x60i64);
                Calls::FastCall(v4 + 0x790, &v21, v5, v10);
                break;
            case 0x160:
                v21 = v5 ^ (v11 - 0xD2F329A);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x608) + 0x378i64) + 0x230i64);
                v21 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x2B8);
                break;
            case 0x161:
                v21 = v11 ^ (0xE5F62A77 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xF8) + 0x4B0i64) ^ 0xC311312A));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xA0);
                v21 += FuckEnc::CacheRead<_DWORD>(v10 + 0x740) + 1;
                break;
            case 0x162:
                v21 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x3A8) ^ v5);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x440);
                v21 = __ROL4__(v21 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x430) + 0x4D8i64) * v5, 0xD4);
                break;
            case 0x163:
                v21 = (v5 ^ v11) + 0x1CB9D6EB;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x148);
                v21 = __ROR4__(v21, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x5C0) + 0x4F0i64));
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x638);

                break;
            case 0x164:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x440);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x688) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x228) + 8i64 * (unsigned __int8)(0xA0 * FuckEnc::CacheRead<_BYTE>(v10 + 0x1C0))) + 0x368i64);
                break;
            case 0x165:
                v21 = ~__ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x78));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x760);
                v21 += FuckEnc::CacheRead<_DWORD>(v10 + 0x688) - 0x27F44BEC * FuckEnc::CacheRead<_DWORD>(v4 + 0x3A8);
                break;
            case 0x166:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x578) + 0x760i64) + 0x158i64, &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x290));
                break;
            case 0x167:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4D0) + 0x620i64) ^ v11;
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x740);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B8) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x13)) + 0x4B0i64);
                break;
            case 0x168:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2F0);
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 0x3F8) >> 4);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x4F0) - v5 + 1;
                break;
            case 0x169:
                v21 = ((v11 ^ 0x84645EC6) - 0x57725355) ^ 0x5798107F;
                v21 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x68) + 0x5C0i64) + 0xD8i64) ^ v21);
                break;
            case 0x16A:
                v21 = v11 ^ 0x8D79E655;
                v21 = (v11 ^ 0x8D79E655) - FuckEnc::CacheRead<_DWORD>(v4 + 0x78) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x338) + 0x4D8i64);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x598);
                break;
            case 0x16B:
                v21 = v5 ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 8i64 * (v5 & 0x3A)) + 0x330i64) + 0x330i64);
                v21 = (v5 ^ v11) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x230) + 0x620i64);
                break;
            case 0x16C:
                v21 = v11 + 0x3CFECEED;
                Calls::FastCall(v4 + 0x218, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 8i64 * (unsigned __int8)(0xB1 * v5)));
                break;
            case 0x16D:
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x368) * v5);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x2B8);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x378);
                v21 = v21 - FuckEnc::CacheRead<_DWORD>(v10 + 0x220) - v5;
                break;
            case 0x16E:
                Calls::FastCall(v4 + 0x310, &v21, v5, v4);
                v21 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA0) + 0x450i64);
                break;
            case 0x16F:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8) ^ v11;
                Calls::FastCall(v4 + 0x2D0, &v21, v5, v4);
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x388) + 0x598i64);
                break;
            case 0x170:
                v21 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) ^ (0xD11ACDB2 * FuckEnc::CacheRead<_DWORD>(v4 + 0x308) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x5F8) ^ 0x2CC31131));
                break;
            case 0x171:
                v21 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x768) ^ 0x9CD21560);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x170) ^ 0x2980B1A9;
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x148) + 0x20i64);
                break;
            case 0x172:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6F0) + 8i64 * (v5 & 0x35)) + 0x688i64);
                v21 -= 0x6A402E61 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x170) ^ 0xD1FF41E4);
                break;
            case 0x173:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x378) + 0x338i64) + 0x190i64) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x688) ^ 0x47) & 0xC7)) + 0x388i64);
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x638);
                break;
            case 0x174:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x438);
                v21 = v11 - 0x600C4180 * FuckEnc::CacheRead<_DWORD>(v10 + 0x4F0);
                v21 = __ROL4__(v21, ~FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x318) + 8i64 * (__ROL4__(v5, 0x1C) & 0x42)) + 0x768i64));
                break;
            case 0x175:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2E8) + 0x4B0i64);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x618) + 0x230i64) + 0x20i64);
                break;
            case 0x176:
                Calls::FastCall(v4 + 0x648, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x580) + 0x438i64));
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x118);
                break;
            case 0x177:
                v21 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x220) ^ 0xA295AC95);
                v21 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x430) + 0x6B0i64) + 8i64 * (unsigned __int8)(0xAE * v5)) + 0x400i64);
                break;
            case 0x178:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x5F8);
                v21 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xF8) + 0x48i64) + 8i64 * (v5 & 0x5B)) + 0x768i64);
                break;
            case 0x179:
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x20) ^ 0xD) + 0x33D1FF41;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0);
                v21 = __ROR4__(v21, FuckEnc::CacheRead<_BYTE>(v10 + 0x3F8) * FuckEnc::CacheRead<_BYTE>(v4 + 0x620));
                break;
            case 0x17A:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x540);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x438) + 0x68i64);
                v21 ^= 0x6BC31131 * FuckEnc::CacheRead<_DWORD>(v10 + 0x308);
                break;
            case 0x17B:
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x20) ^ v5) + 0x2E00BED8;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x430);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x440) + 0x618i64) + 0x450i64);
                break;
            case 0x17C:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x58) + 0x4D8i64);
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0) + 0x2E8i64) + 0x5A8i64) + 8i64 * ((unsigned __int8)__ROL4__(v5, 0x18) & 0xC6)) + 0x100i64));
                break;
            case 0x17D:
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x390));
                Calls::FastCall(v4 + 0x6E8, &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x668));
                v21 -= 0x503AA00F;
                break;
            case 0x17E:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x438) + 0x6F0i64) + 8i64 * ((unsigned __int8)(0x2F * v5) & 0xF7)) + 0x628i64) + 8i64 * ((unsigned __int8)v5 ^ 0xFDu), &v21, v5, v4);
                break;
            case 0x17F:
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x170) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0) + 0x540i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xC0) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x78) & 0x8B)));
                break;
            case 0x180:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x258i64, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1D0) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1B)));
                break;
            case 0x181:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x608);
                v21 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x58) + 0x600i64) + 8i64 * ((unsigned __int8)__ROR4__(v5, 7) & 0xAA)) + 0x688i64) ^ (FuckEnc::CacheRead<_DWORD>(v10 + 0x390) >> 3);
                break;
            case 0x182:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x668) + 0x20i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x750);
                Calls::FastCall(v4 + 0x178, &v21, v5, v10);
                break;
            case 0x183:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x668);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x138) + 8i64 * (v5 & 0x70), &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x148));
                break;
            case 0x184:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 8i64 * ((unsigned __int8)v5 ^ 0x68u)) + 0x750i64) + 0x638i64) ^ v11;
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x88) + 8i64 * (((unsigned __int8)v5 ^ 4) & 0x8F)) + 0x390i64);
                break;
            case 0x185:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x760);
                v21 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x370) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x100) ^ 0x10) & 0x52)) + 0x6E0i64));
                break;
            case 0x186:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2E8) + 0x70i64) + 4i64 * (unsigned __int8)(0x45 * v5)) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 0x1A0i64);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x100);
                break;
            case 0x187:
                v21 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x100) | 0x1B);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 0x6B0i64) + 8i64 * (unsigned __int8)(0xCC * v5)) + 0x598i64) ^ 0xC239F97A;
                break;
            case 0x188:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x780);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x28) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x450) << 0x1E);
                break;
            case 0x189:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x170) + (FuckEnc::CacheRead<_DWORD>(v4 + 0x768) | 0xC) + -FuckEnc::CacheRead<_DWORD>(v4 + 0x100) - 0x45AD3DC0;
                break;
            case 0x18A:
                v21 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B8) + 4 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x668) + 0x4F0i64) & 0x22 | 4i64)) ^ (0x424EFFCB * FuckEnc::CacheRead<_DWORD>(v4 + 0x4B0)));
                break;
            case 0x18B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0);
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x668) + 0x4B8i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x1D)) + 0x708i64) + 0x390i64) ^ v11 ^ 0x2DD0FF7E;
                break;
            case 0x18C:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x230);
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0xC0) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x368) & 0xC1));
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x308) + 1;
                break;
            case 0x18D:
                v21 = v11 ^ 0x3BABDCFB;
                Calls::FastCall(v4 + 0x648, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x438) + 0x430i64));
                break;
            case 0x18E:
                v21 = v5 + v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4C0) + 0x230i64) + 0xD8i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8) + 0x520i64) + 0x308i64);
                break;
            case 0x18F:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x438) + 0x20i64) ^ v11;
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_BYTE>(v4 + 0xD8) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x370) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0), 0x1B)) + 0x5F8i64));
                break;
            case 0x190:
                Calls::FastCall(v4 + 0x40, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x318) + 8i64 * (__ROR4__(v5, 0xF) & 0x41)));
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x248);
                break;
            case 0x191:
                v21 = v11 - 0x19F68C4C;
                v21 = v11 - 0x19F68C4C - (v5 ^ (v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x370) + 8i64 * (v5 & 0x30)) + 0x378i64) + 0x4F0i64)));
                break;
            case 0x192:
                v21 = ~(_DWORD)v11;
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0x248i64) ^ ~(_DWORD)v11;
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x318) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x170), 8)) + 0x400i64));
                break;
            case 0x193:
                Calls::FastCall(v4 + 0x790, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x318) + 8i64 * ((FuckEnc::CacheRead<_DWORD>(v4 + 0x308) >> 0x14) & 0x61)));
                break;
            case 0x194:
                v21 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8));
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8) + 8i64 * ((unsigned __int8)(0x77 * v5) & 0x9E)) + 0x748i64) + 8i64 * ((unsigned __int8)(0xED * FuckEnc::CacheRead<_BYTE>(v4 + 0x6E0)) & 0xCD)) + 0x3F8i64);
                break;
            case 0x195:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1A8) + 0x88i64) + 8i64 * (unsigned __int8)(0x3D * v5)) + 0x318i64) + 8i64 * ((unsigned __int8)v5 & 0xA1)) + 0x318i64) + 8i64 * (__ROR4__(v5, 0x1E) & 0x50)) + 0x118i64) ^ v11;
                break;
            case 0x196:
                v21 = v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1A0) + 0x2D8i64) + 8i64 * ((unsigned __int8)v5 & 0xE3)) + 0x28i64);
                v21 += v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x170);
                break;
            case 0x197:
                v21 = v11 + 0x3CFE76BC;
                v21 = (v11 + 0x3CFE76BC) ^ ((FuckEnc::CacheRead<_DWORD>(v4 + 0x308) >> 6) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x208) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x5F8), 0x10)));
                break;
            case 0x198:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x240) + 0x618i64) + 0x368i64) ^ v11;
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA0) + 0x1F0i64) + 0x2B8i64) ^ 0xB6953189;
                break;
            case 0x199:
                v21 = v11 ^ 0xE0408193;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1A0) + 0x1F0i64);
                v21 = (_DWORD)0x13706F27 + __ROL4__(v11 ^ 0xE0408193, FuckEnc::CacheRead<_DWORD>(v10 + 0x780));
                v21 = __ROR4__(v21, FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0));
                break;
            case 0x19A:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4D0);
                v21 = v11 - 0x2C6D9779 + FuckEnc::CacheRead<_DWORD>(v10 + 0x170);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x148) + 0x220i64) * v5;
                break;
            case 0x19B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x520);
                Calls::FastCall(v4 + 0xD0, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x228) + 8i64 * (unsigned __int8)(0x90 * v5)));
                break;
            case 0x19C:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x100);
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8) + 0x118i64);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B8) + 8i64 * ((unsigned __int8)v5 ^ 0x30u)) + 0x118i64);
                break;
            case 0x19D:
                v21 = ~(_DWORD)v11;
                v21 = ~(_DWORD)v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x580) + 0x710i64) + 0x4D8i64) ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x598);
                break;
            case 0x19E:
                v21 = __ROL4__(v11, v5);
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6C8) + 0x740i64) ^ (0x28 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x118i64)));
                break;
            case 0x19F:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8) ^ v11;
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x4B0);
                v21 = __ROL4__(v21, (FuckEnc::CacheRead<_BYTE>(v4 + 0x620) ^ v5) + 0x44);
                break;
            case 0x1A0:
                v21 = (FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) ^ v11) - 0x5B29DE37;
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8) + 8i64 * (((unsigned __int8)v5 ^ 0xF6) & 0xED)) + 0x5C0i64) + 0x438i64) + 0x390i64);
                break;
            case 0x1A1:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5A8) + 8i64 * (v5 & 0x21)) + 0x170i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x388) + 0x1A8i64);
                v21 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x3F8);
                break;
            case 0x1A2:
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x368) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x318) + 8i64 * (unsigned __int8)(0x6E * v5)) + 0x260i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8) & 0xFFFFFFE8));
                break;
            case 0x1A3:
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x368) + (FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0) | 0x13));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x378);
                v21 = __ROR4__(v21, FuckEnc::CacheRead<_DWORD>(v10 + 0x220));
                break;
            case 0x1A4:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x240) + 0x2B8i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x378) + 0x6C0i64);
                v21 = v21 - FuckEnc::CacheRead<_DWORD>(v4 + 0x450) - FuckEnc::CacheRead<_DWORD>(v10 + 0x20);
                break;
            case 0x1A5:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) + ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x420) + 8i64 * ((unsigned __int8)v5 & 0x83)) + 0x20i64) & 0xFFFFFFE8);
                break;
            case 0x1A6:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x690);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x668);
                v21 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x220);
                v21 += ~FuckEnc::CacheRead<_DWORD>(v4 + 0x308);
                break;
            case 0x1A7:
                v21 = v5 ^ (v11 + 0x5852B0F0);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4D0) + 0x6C0i64);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x568) + 8i64 * (v5 & 0x78)) + 0x740i64);
                break;
            case 0x1A8:
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x20) << 0x1A);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x290);
                v21 = v5 + (v21 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x1B0) + 0x308i64));
                break;
            case 0x1A9:
                v21 = (v11 ^ 0xD6C31131) - 0x303CFECF;
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x390);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x388);
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x378) + 0x260i64));
                break;
            case 0x1AA:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8) ^ v11 ^ 0x4708FFA9;
                Calls::FastCall(v4 + 0x790, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 0x6D0i64));
                break;
            case 0x1AB:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x220);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x600) + 8i64 * (__ROL4__(v5, 3) & 0x30)) + 0x458i64, &v21, v5, v4);
                break;
            case 0x1AC:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0) + 0x1A8i64) + 0xF8i64) + 0x628i64) + 8i64 * (__ROL4__(v5, 0x17) & 0x74), &v21, v5, v4);
                break;
            case 0x1AD:
                v21 = ~(_DWORD)v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0) + 0x510i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 2), &v21, v5, v4);
                break;
            case 0x1AE:
                v21 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6C0) + 0x3A8i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1A0);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x6F0) + 8i64 * ((4 * (_BYTE)v5) & 0xA)) + 0x768i64);
                break;
            case 0x1AF:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x420) + 8i64 * ((unsigned __int8)v5 ^ 0x51u)) + 0x338i64);
                Calls::FastCall(v4 + 0x418, &v21, v5, FuckEnc::CacheRead<_QWORD>(v10 + 0x388));
                break;
            case 0x1B0:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x618);
                v21 = v5 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x6D0) + 0x4F0i64) ^ v11;
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0) + 0x608i64) + 0x308i64);
                break;
            case 0x1B1:
                v21 = v11 + 0x2E00BEA6;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1A8) + 0x2D8i64) + 8i64 * (v5 & 0x4D)) + 0x6C8i64);
                v21 = __ROR4__(FuckEnc::CacheRead<_DWORD>(v10 + 0x548) ^ (v11 + 0x2E00BEA6), 0x47);
                break;
            case 0x1B2:
                v21 = v5 ^ (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x620));
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x440) + 0x370i64) + 8i64 * ((0xC * (_BYTE)v5) & 0x2F)) + 0x768i64);
                break;
            case 0x1B3:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2E8) + 0xA0i64) + 0x208i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 0x1D)) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x750);
                v21 += FuckEnc::CacheRead<_DWORD>(v10 + 0x308);
                break;
            case 0x1B4:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x168) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 8i64 * ((0x33 * (_BYTE)v5) & 0x4C)) + 0x88i64) + 8i64 * ((unsigned __int8)v5 ^ 0x69u)) + 0x300i64) + 4i64 * ((unsigned __int8)~(_BYTE)v5 & 0xA0));
                break;
            case 0x1B5:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8);
                v21 = v11 - (FuckEnc::CacheRead<_DWORD>(v10 + 0x170) ^ (0x20 * (v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x230) + 0x1A0i64) + 0x4F0i64))));
                break;
            case 0x1B6:
                v21 = v5 + __ROL4__(v11, 0xC1);
                Calls::FastCall(v4 + 0x110, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0) + 0x388i64));
                break;
            case 0x1B7:
                v21 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x760) + 0x260i64) ^ (v5 * FuckEnc::CacheRead<_DWORD>(v4 + 0x220) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 0x220i64));
                break;
            case 0x1B8:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0) + 0x780i64) ^ v11;
                v21 -= v5 * FuckEnc::CacheRead<_DWORD>(v4 + 0x620) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x60) + 0x540i64);
                break;
            case 0x1B9:
                v21 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x318) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 0x290i64) + 0x780i64), 0x1A)) + 0x520i64) + 0x1C0i64) ^ v5);
                break;
            case 0x1BA:
                Calls::FastCall(v4 + 0x258, &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x618));
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x578) + 0x368i64);
                break;
            case 0x1BB:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x58) + 0x5E0i64) + 4i64 * ((unsigned __int8)v5 & 0xEF));
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8) + 0x28i64) << 0xC;
                break;
            case 0x1BC:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x378);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x7A0) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x708) + 0x688i64), 0xD), &v21, v5, v10);
                break;
            case 0x1BD:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x578) + 0x6F0i64) + 8i64 * (unsigned __int8)(0xDC * v5)) + 0x1B0i64) + 0xE8i64) + 0x290i64) + 0x4B0i64);
                break;
            case 0x1BE:
                v21 = v11 + 1 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x168) >> 0xD);
                v21 += 0x584C5E8A * FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x220);
                break;
            case 0x1BF:
                v21 = v11 - v5;
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x638) ^ (v11 - v5);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0);
                v21 += 0x1EC42674 * FuckEnc::CacheRead<_DWORD>(v4 + 0x400);
                break;
            case 0x1C0:
                v21 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x768);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x708) + 0x6C8i64) + 0x760i64);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x540);
                break;
            case 0x1C1:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x330) + 0x330i64) + 0x740i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 0x148i64) + 0x1A8i64);
                v21 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x2B0);
                break;
            case 0x1C2:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x118) - v5;
                Calls::FastCall(v4 + 0x778, &v21, v5, v4);
                break;
            case 0x1C3:
                v21 = v11 - 0x22F0069 + FuckEnc::CacheRead<_DWORD>(v4 + 0x3A8);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x338) + 0x588i64) + 0xA8i64) + 0x400i64);
                break;
            case 0x1C4:
                v21 = ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x780) ^ v11);
                Calls::FastCall(v4 + 0x560, &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x230));
                break;
            case 0x1C5:
                Calls::FastCall(v4 + 0x178, &v21, v5, FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F0) + 0x240i64) + 0x5C8i64) + 0x6D0i64));
                break;
            case 0x1C6:
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x248));
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x248) - 0x4860C2EB;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2F0);
                v21 += ~FuckEnc::CacheRead<_DWORD>(v10 + 0x20);
                break;
            case 0x1C7:
                v21 = __ROL4__(v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x598), 0x3E);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F0) + 0x330i64) + 0x338i64) + 0x430i64);
                v21 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x4D8);
                break;
            case 0x1C8:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F0) + 0xD8i64);
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6C0) + 0x5E0i64) + 4i64 * (unsigned __int8)(0x68 * v5));
                break;
            case 0x1C9:
                v21 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x430) + 0x78i64);
                v21 ^= v5 * ~FuckEnc::CacheRead<_DWORD>(v4 + 0x260);
                break;
            case 0x1CA:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x480);
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x78);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x168) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8) * v5);
                break;
            case 0x1CB:
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8));
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) * v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x370) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x19)) + 0x2B8i64);
                break;
            case 0x1CC:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x230) + 0x240i64) + 0x58i64) + 0x430i64) + 0x6C8i64) + 0x520i64) + 0x4C0i64);
                v21 = FuckEnc::CacheRead<_DWORD>(v10 + 0x78) ^ v11;
                break;
            case 0x1CD:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x28);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x540) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x6F0i64) + 8i64 * ((unsigned __int8)v5 & 0xA7)) + 0x598i64);
                break;
            case 0x1CE:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE8) + 0x170i64) ^ v11;
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1A8) + 0x318i64) + 8i64 * (v5 & 0x21)) + 0x5F8i64);
                break;
            case 0x1CF:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x580);
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x350) + 4i64 * ((unsigned __int8)(FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x748) + 8i64 * (v5 & 0x5B)) + 0x230i64) + 0x2B0i64) * v5) ^ 0xBBu));
                break;
            case 0x1D0:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x640) + 8i64 * (unsigned __int8)(0xFD * FuckEnc::CacheRead<_DWORD>(v4 + 0x780)), &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x6C8));
                break;
            case 0x1D1:
                v21 = v11 + 0x2F00077A * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x370) + 8i64 * (unsigned __int8)(0x69 * v5)) + 0xD8i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x58) + 0xC0i64) + 4i64 * (__ROR4__(v5, 0x15) & 0x30));
                break;
            case 0x1D2:
                Calls::FastCall(v4 + 0x738, &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x1A0));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x578);
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x70) + 4i64 * ((unsigned __int8)(0x96 * v5) & 0xF8));
                break;
            case 0x1D3:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 0x400i64);
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x228) + 8i64 * ((unsigned __int8)v5 ^ 0xA0u)) + 0x448i64) + 4i64 * (__ROR4__(v5, 0xB) & 0x1A)) ^ v5;
                break;
            case 0x1D4:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x250) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) ^ 0xFBu), &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x750));
                break;
            case 0x1D5:
                Calls::FastCall(v4 + 0x3A0, &v21, v5, v4);
                v21 = (v21 ^ 0x67D0FFC0) - 0x40E6EDE1;
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x118);
                break;
            case 0x1D6:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 8i64 * (unsigned __int8)(0x91 * FuckEnc::CacheRead<_BYTE>(v4 + 0x28))) + 0x388i64);
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x460) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1B)) + 0x370i64) + 8i64 * (v5 & 0x6E)) + 0x3F8i64);
                break;
            case 0x1D7:
                v21 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x780));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8) + 8i64 * (unsigned __int8)(0x5D * FuckEnc::CacheRead<_BYTE>(v4 + 0x5F8) + 0x52)) + 0x1A0i64) + 0x430i64);
                v21 = __ROR4__(v21, FuckEnc::CacheRead<_DWORD>(v10 + 0x450));
                break;
            case 0x1D8:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x388);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x748) + 8i64 * ((0xB * (_BYTE)v5) & 0x77)) + 0x80i64, &v21, v5, v10);
                break;
            case 0x1D9:
                v21 = v11 + 0x41E7EDDC;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x318) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x1F)) + 0x560i64, &v21, v5, v4);
                break;
            case 0x1DA:
                v21 = (v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x4F0) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x548) * v5))) ^ 0x68CE4734;
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_BYTE>(v4 + 0x3F8) + 0x3E);
                break;
            case 0x1DB:
                Calls::FastCall(v4 + 0x3E8, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B8) + 8i64 * ((unsigned __int8)v5 & 0xC9)) + 0x618i64) + 0x430i64));
                break;
            case 0x1DC:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 0x3D8i64) + 0x2B0i64);
                v21 += ~(v5 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x78) | 0x17));
                break;
            case 0x1DD:
                v21 = ~(v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x248) | 0x1F));
                v21 = __ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x600) + 8i64 * ((unsigned __int8)v5 & 0xD8)) + 0x28i64) + v21, v5);
                break;
            case 0x1DE:
                v21 = (v11 ^ 0x1A820351) - 0x100582EF;
                v21 = __ROL4__(v21, 0x9D * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x460) + 8i64 * (unsigned __int8)(0xF6 * v5)) + 0x3D8i64) + 0x308i64));
                break;
            case 0x1DF:
                v21 = v11 - 0x118BC09C;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 8i64 * (__ROR4__(v5, 9) & 0xDD)) + 0x648i64, &v21, v5, v4);
                break;
            case 0x1E0:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x598);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x378) + 0x148i64) + 0x318i64) + 8i64 * ((unsigned __int8)v5 & 0xDC)) + 0x308i64);
                break;
            case 0x1E1:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6C0) + 0x290i64) + 0x148i64) + 0x310i64, &v21, v5, v4);
                break;
            case 0x1E2:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x608);
                v21 = v11 ^ FuckEnc::CacheRead<_DWORD>(v10 + 0x4B0) ^ (0x4173D0FF * ((unsigned int)(FuckEnc::CacheRead<_DWORD>(v4 + 0x548) - 0x5899DBE7) >> 0x15));
                break;
            case 0x1E3:
                v21 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x688) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8) + 8i64 * ((0xC1 * (_BYTE)v5) & 0x7A)) + 0x88i64) + 8i64 * (v5 & 0x45)) + 0x300i64) + 4i64 * (unsigned __int8)(0xC9 * v5)));
                break;
            case 0x1E4:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x260) - 0x762F323A;
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x708) + 0x3A8i64);
                break;
            case 0x1E5:
                v21 = v11 - 0x67306CD7;
                v21 = v11 - 0x67306CD7 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x230) + 0x78i64) | 4);
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE8) + 0x368i64));
                break;
            case 0x1E6:
                v21 = v11 + ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x148) + 0x690i64) ^ 0xA54638BC);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2E8) + 0x4C0i64);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x2B8);
                break;
            case 0x1E7:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D8) + 0x58i64) + 0x3F8i64);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x420) + 8i64 * (unsigned __int8)__ROR4__(v5, 0xD)) + 0x308i64);
                break;
            case 0x1E8:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x220) - 0x38404C89;
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1A0) + 0x88i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 2)) + 0x590i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 0x13));
                break;
            case 0x1E9:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 0x5E0i64) + 4i64 * (((unsigned __int8)v5 ^ 1) & 0x83)) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x300i64) + 4i64 * ((0xC8 * (_BYTE)v5) & 0x62));
                break;
            case 0x1EA:
                v21 = ~(v11 + v5 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x388) + 0x690i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x3A8) ^ 0xAE1BC27A));
                break;
            case 0x1EB:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x228) + 8i64 * (unsigned __int8)(0x8D * FuckEnc::CacheRead<_DWORD>(v4 + 0x3A8))) + 0xD0i64, &v21, v5, v4);
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8));
                break;
            case 0x1EC:
                Calls::FastCall(v4 + 0x678, &v21, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x618);
                v21 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x78);
                break;
            case 0x1ED:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x220);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x388) + 0x228i64) + 8i64 * ((unsigned __int8)v5 & 0xEE)) + 0x60i64) + 0x6C8i64);
                v21 += FuckEnc::CacheRead<_DWORD>(v10 + 0x2B0);
                break;
            case 0x1EE:
                v21 = ~(_DWORD)v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x330);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x138) + 8i64 * (((unsigned __int8)v5 ^ 0xD) & 0xAD), &v21, v5, v4);
                break;
            case 0x1EF:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8);
                v21 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 0x20));
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 0x3F8i64);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x170) + 1;
                break;
            case 0x1F0:
                v21 = v11 ^ 0xB04949CC;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x438);
                Calls::FastCall(v4 + 0x18, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x228) + 8i64 * (v5 & 0x1B)));
                break;
            case 0x1F1:
                v21 = v11 - 0x72232554 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x388) + 0x1A8i64) + 0x420i64) + 8i64 * (unsigned __int8)(0xBD * v5)) + 0x368i64);
                break;
            case 0x1F2:
                v21 = (v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x4F0)) ^ 0x9AC30131;
                v21 = v5 ^ (v21 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x568) + 8i64 * (((unsigned __int8)v5 ^ 0xFD) & 0xE)) + 0x260i64) * v5);
                break;
            case 0x1F3:
                v21 = v11 + 0x563AFC54;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xF8) + 0x240i64);
                v21 = v11 + 0x563AFC54 + FuckEnc::CacheRead<_DWORD>(v10 + 0x5F8) * (FuckEnc::CacheRead<_DWORD>(v4 + 0xD8) - 0x2E00BEC0);
                break;
            case 0x1F4:
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x690) ^ 0x2B);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x588);
                v21 += ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x400) + FuckEnc::CacheRead<_DWORD>(v10 + 0x780));
                break;
            case 0x1F5:
                v21 = __ROR4__(v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x638) - 0x49820E31, 0x41);
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x228) + 8i64 * (unsigned __int8)v5) + 0x580i64) + 0x4B0i64);
                break;
            case 0x1F6:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xA8);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x628) + 0x20i64, &v21, v5, v4);
                break;
            case 0x1F7:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x248);
                v21 ^= (FuckEnc::CacheRead<_DWORD>(v4 + 0x3A8) ^ 0xC716524) - 0x8A62055;
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x598) * v5;
                break;
            case 0x1F8:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0);
                v21 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v10 + 0x168) + (FuckEnc::CacheRead<_BYTE>(v4 + 0x308) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA0) + 0x3F8i64)));
                break;
            case 0x1F9:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x590) + 4i64 * (((unsigned __int8)(0x5E * FuckEnc::CacheRead<_BYTE>(v4 + 0x768)) ^ 0xFD) & 0x86)) ^ v11;
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x568) + 8i64 * (v5 & 0x3C)) + 0x260i64);
                break;
            case 0x1FA:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4D0) + 0x708i64) + 0x5C0i64) + 0x3D8i64) + 0x588i64);
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x368) * FuckEnc::CacheRead<_DWORD>(v4 + 0x688);
                break;
            case 0x1FB:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x330) + 0x370i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 2)) + 0x1B0i64) + 0x448i64) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x740), 2)) ^ v11;
                break;
            case 0x1FC:
                v21 = v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x308) ^ v11 ^ 0xD1854572;
                v21 -= v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x2B8) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x740);
                break;
            case 0x1FD:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2E8);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x788) + 8i64 * (unsigned __int8)(0x48 * FuckEnc::CacheRead<_BYTE>(v4 + 0xD8)), &v21, v5, v4);
                break;
            case 0x1FE:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x580) + 0x290i64);
                v21 = v11 ^ (~FuckEnc::CacheRead<_DWORD>(v10 + 0x100) + ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x168) ^ 0xE85F4E43));
                break;
            case 0x1FF:
                v21 = v11 + 0x42A324BD;
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x20) ^ (v11 + 0x42A324BD);
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x400) & 0x27)) + 0x2B0i64) & 0xFFFFFFEA;
                break;
            case 0x200:
                v21 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x598) << 0x1B);
                Calls::FastCall(v4 + 0x258, &v21, v5, v4);
                break;
            case 0x201:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2E8) + 0x290i64) + 0x750i64);
                Calls::FastCall(v4 + 0x418, &v21, v5, v10);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x2B8);
                break;
            case 0x202:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0) + 0x690i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1A8);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x620);
                v21 = v21 - FuckEnc::CacheRead<_DWORD>(v4 + 0x390) - 0x4AF019D8;
                break;
            case 0x203:
                v21 = v5 ^ v11;
                v21 = (v5 ^ v11) - (FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) ^ 0x42FE638F);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2E8) + 0x6D8i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 0x1D));
                break;
            case 0x204:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x220) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x440) + 0x178i64, &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x60));
                break;
            case 0x205:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x748) + 8i64 * ((unsigned __int8)v5 & 0x9C)) + 0x1A0i64) + 0x318i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 8)) + 0xF8i64) + 0x598i64);
                break;
            case 0x206:
                v21 = v11 - v5;
                v21 = __ROR4__(v11 - v5, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 0x460i64) + 8i64 * ((unsigned __int8)v5 & 0x81)) + 0x478i64) + 0x708i64) + 0x78i64));
                break;
            case 0x207:
                Calls::FastCall(v4 + 0x418, &v21, v5, v4);
                v21 ^= ~(v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x308));
                break;
            case 0x208:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x438) + 0x2E8i64);
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x4B8) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x688) & 0xD4)) + 0x5E0i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 0xE)));
                break;
            case 0x209:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x620);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x330) + 0x750i64) + 0x2A0i64, &v21, v5, v4);
                break;
            case 0x20A:
                v10 = FuckEnc::CacheRead<_QWORD>(v4);
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 0x28i64);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 8i64 * (unsigned __int8)(0xD1 * v5)) + 0x4D8i64);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x740);
                break;
            case 0x20B:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x378) + 0x618i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x588) + 0x5A0i64, &v21, v5, v4);
                break;
            case 0x20C:
                v21 = v11 - v5;
                v21 = (FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0) ^ (v11 - v5)) + 0x3CFECEDE;
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8) + 8i64 * (__ROR4__(v5, 0xA) & 0x67)) + 0x170i64);
                break;
            case 0x20D:
                v21 = (FuckEnc::CacheRead<_DWORD>(v4 + 0xD8) ^ v11) - 0x3CFECE22;
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1D0) + 8i64 * (unsigned __int8)__ROL4__(v5, 0xB)) + 0x2B0i64);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x2B8);
                break;
            case 0x20E:
                v21 = v11 - 0x3742C05A;
                Calls::FastCall(v4 + 0x648, &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x668));
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x28);
                break;
            case 0x20F:
                v21 = ~((v11 ^ ~((unsigned int)0x11D4EF45 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6C8) + 0x170i64))) - 0x3CFECE43);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x768);
                break;
            case 0x210:
                v10 = FuckEnc::CacheRead<_QWORD>(v4);
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 0x390i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x438) + 0x420i64) + 8i64 * ((unsigned __int8)v5 ^ 0x41u)) + 0x548i64));
                break;
            case 0x211:
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE0) + 8i64 * (unsigned __int8)(0x62 * FuckEnc::CacheRead<_DWORD>(v4 + 0x220))) + 0x2B0i64) * FuckEnc::CacheRead<_DWORD>(v4 + 0x220));
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x548);
                break;
            case 0x212:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x100) ^ v11;
                Calls::FastCall(v4 + 0x80, &v21, v5, v4);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x690) >> 6;
                break;
            case 0x213:
                v21 = v11 + 0x59ADD0FF;
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1D0) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x598) & 0xEE)) + 0x760i64) + 0x2E8i64) + 0x6E0i64) ^ (v11 + 0x59ADD0FF);
                break;
            case 0x214:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x708) + 0x228i64) + 8i64 * (unsigned __int8)(0x8E * v5)) + 0x1E8i64) + 0x6C8i64);
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x668) + 0x70i64) + 4i64 * (__ROL4__(v5, 0x14) & 0xF)) ^ v11;
                break;
            case 0x215:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x690);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x4B0) ^ 0x5554B81E;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x608);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x668) + 0x248i64);
                break;
            case 0x216:
                Calls::FastCall(v4 + 0x258, &v21, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3D8);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x4B0);
                break;
            case 0x217:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x5F8) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x460) + 8i64 * ((0xF * FuckEnc::CacheRead<_BYTE>(v4 + 0x598)) & 0x7F)) + 0x360i64, &v21, v5, v4);
                break;
            case 0x218:
                v21 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4D0) + 0x740i64) + 0x31);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x220);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x3A8);
                break;
            case 0x219:
                v21 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x740)) + 0x2F21C609;
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x598);
                v21 ^= FuckEnc::CacheRead<unsigned __int8>(v4 + 0x3AB);
                break;
            case 0x21A:
                v21 = v11 + 1 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4C0) + 0xE0i64) + 8i64 * ((unsigned __int8)v5 & 0x8B)) + 0x620i64);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x2B8) ^ v5;
                break;
            case 0x21B:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x690);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x450) ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x168);
                break;
            case 0x21C:
                v21 = __ROR4__(v11, v5);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 0x430i64) + 0x100i64);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x118) + 1;
                break;
            case 0x21D:
                v10 = FuckEnc::CacheRead<_QWORD>(v4);
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x58) + 0x2E8i64) + 0x48i64) + 8i64 * (unsigned __int8)(0xD1 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4) + 0x3F8i64))) + 0x118i64) ^ v11;
                break;
            case 0x21E:
                v21 = v11 + v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0);
                v21 = (v11 + v5) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x1B8) + 4i64 * (unsigned __int8)v5) ^ (0xC2F75F99 * FuckEnc::CacheRead<_DWORD>(v4 + 0x170));
                break;
            case 0x21F:
                Calls::FastCall(v4 + 0x158, &v21, v5, v4);
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA0) + 0x728i64) + 4i64 * (((unsigned __int8)v5 ^ 4) & 0x3C));
                break;
            case 0x220:
                Calls::FastCall(v4 + 0x310, &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x438));
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x20) * v5;
                break;
            case 0x221:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x638);
                v21 -= ((FuckEnc::CacheRead<_DWORD>(v4 + 0xD8) - 0xE38) & 0xFFFFFFFC) << 0x12;
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x28);
                break;
            case 0x222:
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x388) + 0x740i64));
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5E0) + 4i64 * ((unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 8i64 * (v5 & 9)) + 0x70i64) + 4i64 * (((unsigned __int8)v5 ^ 5) & 0x1F)), 0x10) & 0x8B));
                break;
            case 0x223:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 8i64 * ((0x3A * FuckEnc::CacheRead<_BYTE>(v4 + 0x548)) & 0x69)) + 0xE8i64) + 0x478i64) + 0x438i64) + 0x2D8i64) + 8i64 * (v5 & 0x19)) + 0x768i64);
                break;
            case 0x224:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xA8);
                v21 = v5 ^ FuckEnc::CacheRead<_DWORD>(v10 + 0x780) ^ v11;
                v21 += v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x390) + 0x4A7A0EBF;
                break;
            case 0x225:
                v21 = ~(v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6F0) + 8i64 * (unsigned __int8)(0xC4 * v5)) + 0xD8i64) ^ 0x4EE1B07B));
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 0x390i64);
                break;
            case 0x226:
                v21 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x780);
                v21 = (v21 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x740) + 0x1AD675E7)) + 0x6CE984F;
                break;
            case 0x227:
                v21 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x768) & 0xFFFFFFF2);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x240);
                v21 = __ROR4__(v21 - FuckEnc::CacheRead<_DWORD>(v10 + 0x118) + 0x3CFE76BC, 0xBE);
                break;
            case 0x228:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x260) ^ v11;
                v21 = __ROL4__(v21, ~(FuckEnc::CacheRead<_BYTE>(v4 + 0x390) ^ (0x24 * FuckEnc::CacheRead<_BYTE>(v4 + 0x118)) ^ 0x4C));
                break;
            case 0x229:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x600i64) + 8i64 * ((unsigned __int8)v5 ^ 0x28u)) + 0x108i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0xC), &v21, v5, v4);
                break;
            case 0x22A:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x750);
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 0x4B0));
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x548) - 0x72F7ABD3;
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x5F8);
                break;
            case 0x22B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2E8);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x580) + 0x1B0i64) + 0x4E8i64, &v21, v5, v4);
                break;
            case 0x22C:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x440);
                v21 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8) ^ (0x7427799 * FuckEnc::CacheRead<_DWORD>(v10 + 0x740))) - 0x30F5AD71;
                break;
            case 0x22D:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x430) + 0x208i64) + 4i64 * (unsigned __int8)(0x8D * v5));
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x400);
                break;
            case 0x22E:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x1C0i64) ^ 0x22) & 0x6B)) + 0xF8i64);
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x1C0) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x440) + 0x548i64);
                break;
            case 0x22F:
                v21 = v11 - 0x75C31131;
                v21 = v11 - 0x75C31131 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x430) + 0x598i64);
                v21 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x118i64) ^ v21);
                break;
            case 0x230:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x20) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D8) + 0x458i64, &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x2E8));
                break;
            case 0x231:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x728) + 4i64 * ((0xC * ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x170)) & 0x51)) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4D0);
                v21 ^= v5 * 8 * FuckEnc::CacheRead<_DWORD>(v10 + 0x4B0);
                break;
            case 0x232:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x710);
                v21 = v11 - (FuckEnc::CacheRead<_DWORD>(v10 + 0x2B0) ^ 0xD1FF41FE) - FuckEnc::CacheRead<_DWORD>(v4 + 0x690) + 0x3CEECE07;
                break;
            case 0x233:
                v21 = v11 - v5;
                v21 = __ROL4__(v11 - v5, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x600) + 8i64 * ((unsigned __int8)(0xEE * FuckEnc::CacheRead<_BYTE>(v4 + 0x4D8)) & 0x8E)) + 0x2F8i64) + 0xC0i64) + 4i64 * (v5 & 0x1C)));
                break;
            case 0x234:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA0) + 0x620i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x60) + 0x750i64);
                Calls::FastCall(v4 + 0x550, &v21, v5, v10);
                break;
            case 0x235:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x400);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x2B8);
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x578) + 0xD8i64));
                break;
            case 0x236:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x260);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x260) ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x598);
                break;
            case 0x237:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x480);
                Calls::FastCall(v10 + 0x778, &v21, v5, v4);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x768) >> 0x1F;
                break;
            case 0x238:
                v21 = v11 + ((FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6C8) + 0x28i64) - 0x6A8E0595 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1A8) + 0x28i64)) | 0x12) + 1;
                break;
            case 0x239:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x378) + 0x28i64) - 0x4A1B9E3C;
                v21 = __ROR4__(v21, 0xAA * FuckEnc::CacheRead<_BYTE>(v4 + 0x368) * FuckEnc::CacheRead<_BYTE>(v4 + 0x390));
                break;
            case 0x23A:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x768);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6C8) + 0x4B0i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x330);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x208) + 4i64 * ((unsigned __int8)v5 ^ 0x10u));
                break;
            case 0x23B:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 0x338i64) + 0x2F0i64);
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x420) + 8i64 * (unsigned __int8)(0x53 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v10 + 0x438) + 0x3A8i64))) + 0x638i64);
                break;
            case 0x23C:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x740);
                v21 = __ROR4__(v21, FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x60);
                v21 += FuckEnc::CacheRead<_DWORD>(v10 + 0x450);
                break;
            case 0x23D:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2E8) + 0x780i64) - FuckEnc::CacheRead<_DWORD>(v4 + 0x690);
                v21 ^= 0x9B35CF4D * FuckEnc::CacheRead<_DWORD>(v4 + 0x2B8);
                break;
            case 0x23E:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x2B8) ^ v11;
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x88) + 8i64 * ((unsigned __int8)v5 ^ 0xF2u)) + 0x248i64);
                v21 ^= v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x598);
                break;
            case 0x23F:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x220);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x478) + 0x158i64, &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x6C8));
                break;
            case 0x240:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0) + 0x450i64) ^ v11;
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F0) + 0x3A8i64) * (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x78));
                break;
            case 0x241:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x568) + 8i64 * (((unsigned __int8)v5 ^ 1) & 0x81)) + 0x540i64) ^ v11;
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x600) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x368) & 0x3A)) + 0x170i64);
                break;
            case 0x242:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x568) + 8i64 * (unsigned __int8)(0x58 * v5)) + 0x268i64) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x78), 0x19), &v21, v5, v4);
                break;
            case 0x243:
                v21 = v11 ^ 0x7DC30131;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8) + 8i64 * (v5 & 0x32)) + 0x408i64, &v21, v5, v4);
                break;
            case 0x244:
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x2B8) | 0xF);
                v21 ^= ~FuckEnc::CacheRead<_DWORD>(v4 + 0x598);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x2B8);
                break;
            case 0x245:
                v21 = ~(v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x780));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x68);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x4B8) + 8i64 * ((unsigned __int8)(0x3D * FuckEnc::CacheRead<_BYTE>(v4 + 0x220)) & 0xDC)) + 0x390i64);
                break;
            case 0x246:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x600) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1A)) + 0x1D0i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 0xB)) + 0x388i64);
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x370) + 8i64 * (v5 & 0x36)) + 0x220i64);
                break;
            case 0x247:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x438) + 0x620i64);
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE8) + 0x6F0i64) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x400), 6)) + 0x4B0i64);
                break;
            case 0x248:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2E8) + 0x440i64) + 0x20i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x208) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v10 + 0x5F8), 0xA));
                break;
            case 0x249:
                v21 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 0x638i64) ^ v11) - 0x38C84AFE;
                v21 += 0xFDC21AD * (FuckEnc::CacheRead<_DWORD>(v4 + 0x2B8) ^ 0x2E00BEE9);
                break;
            case 0x24A:
                v21 = v11 ^ (v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x600) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x1A)) + 0x368i64));
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x60) + 0x2B8i64) & 0xFFFFFFE4;
                break;
            case 0x24B:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2E8) + 0xF8i64);
                v21 = FuckEnc::CacheRead<_DWORD>(v10 + 0x2B0) ^ v11;
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x388) + 0x6D0i64) + 0x638i64) >> 0xE;
                break;
            case 0x24C:
                v21 = (v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x690)) ^ 0x89E8E819;
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x760) + 0x2F8i64) + 0x1C0i64);
                break;
            case 0x24D:
                v21 = ~(_DWORD)v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x750i64) + 0x5C8i64);
                Calls::FastCall(v4 + 0x188, &v21, v5, v10);
                break;
            case 0x24E:
                v21 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x220) << 0x15);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x688);
                v21 -= (FuckEnc::CacheRead<_DWORD>(v4 + 0x368) ^ 0x240B) << 0x11;
                break;
            case 0x24F:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x220) * (v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(v4 + 0x6C8) + 0x4B0i64)) - FuckEnc::CacheRead<_DWORD>(v4 + 0x768);
                break;
            case 0x250:
                v21 = (unsigned int)0x12536278 + v11;
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x748) + 8i64 * ((unsigned __int8)v5 ^ 0xCFu)) + 0x48i64) + 8i64 * ((0xE8 * (_BYTE)v5) & 0x23)) + 0x4D8i64) ^ v5);
                break;
            case 0x251:
                v21 = v11 ^ 0x79D1FF41;
                Calls::FastCall(v4 + 0x1C8, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6F0) + 8i64 * ((unsigned __int8)v5 ^ 9u)));
                break;
            case 0x252:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x240);
                v21 = v11 ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x170) + FuckEnc::CacheRead<_DWORD>(v10 + 0x2B8) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x118) ^ 0x3B163D3B));
                break;
            case 0x253:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B8) + 8i64 * (unsigned __int8)(0xFA * v5)) + 0x318i64) + 8i64 * ((unsigned __int8)__ROL4__(v5, 0xE) & 0xF7)) + 0x5F8i64);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x220) + 0x12D1FF41;
                break;
            case 0x254:
                v21 = v11 + 0x1E2E00BF * FuckEnc::CacheRead<_DWORD>(v4 + 0x20);
                v21 = __ROL4__(v21, 8 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheReadPlural<_QWORD>(v4 + 0x230) + 0x620i64));
                break;
            case 0x255:
                v21 = __ROL4__(v11, v5) ^ 0x828B855;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0);
                v21 = v21 - FuckEnc::CacheRead<_DWORD>(v4 + 0x450) - FuckEnc::CacheRead<_DWORD>(v10 + 0x20);
                break;
            case 0x256:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x390) * v5;
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x450);
                Calls::FastCall(v4 + 0x538, &v21, v5, v4);
                break;
            case 0x257:
                v21 = ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x390) ^ v11);
                v21 = (FuckEnc::CacheRead<_DWORD>(v4 + 0x2B8) ^ v21) - v5;
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x220);
                break;
            case 0x258:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x618) + 0x48i64) + 8i64 * (__ROR4__(v5, 0xA) & 0x66)) + 0x450i64);
                v21 ^= v5 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0) + 0x78i64);
                break;
            case 0x259:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x318) + 8i64 * ((unsigned __int8)v5 & 0x80)) + 0x1A8i64);
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x548);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x568) + 8i64 * ((unsigned __int8)(0xDE * FuckEnc::CacheRead<_BYTE>(v4 + 0x3A8)) & 0xF9)) + 0x20i64);
                break;
            case 0x25A:
                v21 = v11 + 0x3DBCB90D + FuckEnc::CacheRead<_DWORD>(v4 + 0x118);
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_DWORD>(v4 + 0x450));
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x240) + 0x4B0i64);
                break;
            case 0x25B:
                v21 = v11 + ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x170) >> 2);
                v21 ^= 0x7F37AE16 * FuckEnc::CacheRead<_DWORD>(v4 + 0x170);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x308);
                break;
            case 0x25C:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 0x5C0i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0xF8) + 0x2A0i64, &v21, v5, v10);
                break;
            case 0x25D:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x58) + 0x6D0i64) + 0xA8i64) + 0x148i64);
                Calls::FastCall(v4 + 0x2D0, &v21, v5, v10);
                break;
            case 0x25E:
                v21 = v5 ^ v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x170) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x768);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x438);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x740);
                break;
            case 0x25F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4D0);
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x290) + 0x370i64) + 8i64 * ((unsigned __int8)(0x22 * (FuckEnc::CacheRead<_BYTE>(v4 + 0x168) + FuckEnc::CacheRead<_BYTE>(v10 + 0x3A8))) & 0x9E)) + 0x400i64) ^ v11;
                break;
            case 0x260:
                v21 = ~(v11 + 0x4D121A0D * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x330) + 0x690i64) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x760) + 0x168i64) + 1));
                break;
            case 0x261:
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x220) * ~FuckEnc::CacheRead<_DWORD>(v4 + 0x170) - 0x7309137E * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE8) + 0x690i64));
                break;
            case 0x262:
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x668) + 0x768i64) * v5);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x438);
                v21 = ~(v21 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 0x1C0) * v5));
                break;
            case 0x263:
                v21 = v11 + (v5 ^ (0xDAD1FF41 * ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x450) ^ (0xBE0DB73B * FuckEnc::CacheRead<_DWORD>(v4 + 0x4B0)))));
                break;
            case 0x264:
                v21 = ~(_DWORD)v11;
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5A8) + 8i64 * ((unsigned __int8)__ROL4__(v5, 0x16) & 0x82)) + 0x580i64) + 0x2E8i64) + 0x350i64) + 4i64 * (v5 & 0x66)) ^ ~(_DWORD)v11;
                break;
            case 0x265:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x3A8);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x208) + 4i64 * (unsigned __int8)(0xAC * FuckEnc::CacheRead<_BYTE>(v4 + 0x118)));
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x100);
                break;
            case 0x266:
                v21 = ~(v11 + 0x78A44D05);
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x600) + 8i64 * ((unsigned __int8)__ROR4__(v5, 8) & 0xE6)) + 0x618i64) + 0x350i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 0x14));
                break;
            case 0x267:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x58) + 0x378i64);
                v21 = FuckEnc::CacheRead<_DWORD>(v10 + 0x20) ^ v11;
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE8) + 0x318i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1E)) + 0x168i64);
                break;
            case 0x268:
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 0x2F0i64) + 0xA8i64) + 0x3F8i64) * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5A8) + 8i64 * ((unsigned __int8)v5 ^ 0xEEu)) + 0x100i64));
                break;
            case 0x269:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 0x240i64) + 0x628i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 6), &v21, v5, v4);
                break;
            case 0x26A:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x390) ^ v11 ^ 0x320276C4;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x290);
                v21 -= (FuckEnc::CacheRead<_DWORD>(v10 + 0x118) | 0x1C) ^ 0x8BA99860;
                break;
            case 0x26B:
                v21 = ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) ^ v11);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6F0) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x768) ^ 0x14) & 0x95)) + 0x580i64) + 0x2F0i64);
                v21 = __ROR4__(v21, FuckEnc::CacheRead<_DWORD>(v10 + 0x4D8));
                break;
            case 0x26C:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0xF8i64) + 0x330i64) + 0x1F0i64);
                Calls::FastCall(v4 + 0x40, &v21, v5, FuckEnc::CacheRead<_QWORD>(v10 + 0x330));
                break;
            case 0x26D:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4C0) + 0x690i64);
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x230) + 0x170i64);
                v21 += 0x8D69D11 * FuckEnc::CacheRead<_DWORD>(v4 + 0x390);
                break;
            case 0x26E:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x88) + 8i64 * ((unsigned __int8)(0x60 * v5) & 0xA4)) + 0x1B0i64) + 0x378i64);
                Calls::FastCall(v4 + 0x6A8, &v21, v5, v10);
                break;
            case 0x26F:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x228) + 8i64 * ((unsigned __int8)v5 & 0xB6)) + 0x148i64) + 0xA0i64) + 0x618i64) + 0x1B0i64);
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x290) + 0x2B8i64) ^ v11;
                break;
            case 0x270:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x688);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x760) + 0x1F0i64) + 0x260i64);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x3A8) ^ v5;
                break;
            case 0x271:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B8) + 8i64 * (unsigned __int8)(0xCE * v5)) + 0x2B8i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x618) + 0x618i64);
                v21 = __ROR4__(v21, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x440) + 0x170i64));
                break;
            case 0x272:
                v21 = v11 - 0x4A3CEECF;
                v21 = (v11 - 0x4A3CEECF) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x148) + 0x168i64) * v5);
                v21 -= 0x3162DB99 * FuckEnc::CacheRead<_DWORD>(v4 + 0x740);
                break;
            case 0x273:
                v21 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x230) + 0x260i64) ^ v11) + 0x407348E;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x388);
                v21 -= 0x5B3CFECF * FuckEnc::CacheRead<_DWORD>(v10 + 0x3A8);
                break;
            case 0x274:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x5F8) - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x438);
                v21 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x3F8) ^ 0x48DE76E9;
                break;
            case 0x275:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x620) ^ v11;
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1D0) + 8i64 * (__ROL4__(v5, 0xC) & 7)) + 0x190i64) + 8i64 * (unsigned __int8)(0x91 * FuckEnc::CacheRead<_BYTE>(v4 + 0x780))) + 0x368i64);
                break;
            case 0x276:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x100);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x240) + 0x2C0i64, &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x4D0));
                break;
            case 0x277:
                v21 = v5 ^ (v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x58) + 0x690i64));
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B8) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0), 0x1E)) + 0x260i64);
                break;
            case 0x278:
                v21 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8) | 9);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x330) + 0x78i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x478);
                v21 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x598);
                break;
            case 0x279:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x230);
                v21 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 0x168)) - v5;
                v21 += 0x52E00BF * FuckEnc::CacheRead<_DWORD>(v4 + 0x3A8) - FuckEnc::CacheRead<_DWORD>(v4 + 0x740);
                break;
            case 0x27A:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x58) + 0x60i64);
                v21 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v10 + 0x2B0);
                Calls::FastCall(v4 + 0x630, &v21, v5, v4);
                break;
            case 0x27B:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4D0) + 0xD8i64) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x438) + 0x4E8i64, &v21, v5, v4);
                break;
            case 0x27C:
                v21 = v11 ^ 0x538684EE;
                v21 = (v11 ^ 0x538684EE) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x568i64) + 8i64 * (v5 & 0x62)) + 0x2B0i64);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0);
                break;
            case 0x27D:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x388) + 0x4B8i64) + 8i64 * (__ROR4__(v5, 0x17) & 0x71)) + 0x2E8i64);
                Calls::FastCall(v4 + 0x790, &v21, v5, v10);
                break;
            case 0x27E:
                v21 = v11 - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x440);
                v21 = __ROL4__(v11 - v5, FuckEnc::CacheRead<_DWORD>(v10 + 0x2B0));
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 8i64 * ((unsigned __int8)v5 & 0xDB)) + 0x220i64);
                break;
            case 0x27F:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5A8) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x248) ^ 0xAFu)) + 0x568i64) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x338) + 0x100i64) & 0x76)) + 0x2E8i64) + 0x688i64);
                break;
            case 0x280:
                v21 = v11 + v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x230);
                v21 = v11 + v5 + FuckEnc::CacheRead<_DWORD>(v10 + 0x100) - 0x48AF6096;
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0) + 0x2B0i64);
                break;
            case 0x281:
                v10 = FuckEnc::CacheReadPlural<_QWORD>(v4 + 0x338);
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x740) - 0x4C46942E;
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x608) + 0x450i64) >> 2;
                break;
            case 0x282:
                Calls::FastCall(v4 + 0x530, &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x230));
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x708) + 0x68i64) + 0x220i64);
                break;
            case 0x283:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F0) + 0x100i64) ^ v11;
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x78) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x220i64);
                break;
            case 0x284:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x100) ^ v11 ^ 0x3B0F8D75;
                Calls::FastCall(v4 + 0x680, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x60i64));
                break;
            case 0x285:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x668) + 0x588i64);
                Calls::FastCall(v4 + 0x2D0, &v21, v5, v10);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x690) ^ 0xD0A7A130;
                break;
            case 0x286:
                v21 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 8i64 * (unsigned __int8)(0xF * v5)) + 0x248i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x88) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x19)) + 0x620i64));
                break;
            case 0x287:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 8i64 * (unsigned __int8)(0x7F * v5)) + 0x620i64);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x740) + 1;
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x740);
                break;
            case 0x288:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x450) - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x338) + 0x190i64) + 8i64 * ((unsigned __int8)v5 ^ 5u)) + 0x60i64);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x598);
                break;
            case 0x289:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x240) + 0x580i64);
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x1B8) + 4i64 * (v5 & 0x21)) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 0x230i64) + 0x170i64);
                break;
            case 0x28A:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x4F0) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x2F8i64);
                v21 += FuckEnc::CacheRead<_DWORD>(v10 + 0x118);
                v21 = ~__ROR4__(v21, FuckEnc::CacheRead<_DWORD>(v4 + 0x390));
                break;
            case 0x28B:
                v21 = v11 + v5;
                v21 = v11 + v5 + ((0x7620610A - FuckEnc::CacheRead<_DWORD>(v4 + 0x168)) ^ 0x31607BDC);
                break;
            case 0x28C:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D8) + 0x3B0i64) + 8i64 * (v5 & 0x4A), &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x330));
                break;
            case 0x28D:
                Calls::FastCall(v4 + 0x680, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE0) + 8i64 * ((FuckEnc::CacheRead<_DWORD>(v4 + 0x780) & 1u) << 7)));
                break;
            case 0x28E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x578);
                v21 = v11 + 0x1CEA0F81 * FuckEnc::CacheRead<_DWORD>(v4 + 0x308) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x1B8) + 4i64 * (unsigned __int8)(0x5B * v5));
                break;
            case 0x28F:
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x688));
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4C0) + 0x2B0i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x240) + 0xF8i64) + 0xD8i64);
                break;
            case 0x290:
                v21 = v11 ^ 0xC3018944;
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x168) ^ v11 ^ 0xC3018944;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x520) + 0x5C8i64) + 0x68i64);
                v21 += FuckEnc::CacheRead<_DWORD>(v10 + 0x390);
                break;
            case 0x291:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2F0);
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 0x540) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x438) + 0x5A8i64) + 8i64 * (((unsigned __int8)v5 ^ 0xF5) & 0xDA)) + 0x540i64) >> 2));
                break;
            case 0x292:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0);
                v21 = __ROR4__(v21, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B8) + 8i64 * (unsigned __int8)__ROL4__(v5, 2)) + 0x430i64) + 0x148i64) + 0x780i64));
                break;
            case 0x293:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x208) + 4i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x448) + 4i64 * (unsigned __int8)(0xEB * (FuckEnc::CacheRead<_BYTE>(v4 + 0x400) + (FuckEnc::CacheRead<_BYTE>(v4 + 0x768) ^ 0x40)))) ^ 0x68u));
                break;
            case 0x294:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 0x308i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x330) + 0x750i64);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x400);
                break;
            case 0x295:
                v21 = __ROL4__(v11, 0x17);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x68) + 0x708i64);
                Calls::FastCall(v10 + 0x18, &v21, v5, v4);
                break;
            case 0x296:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x88) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1D)) + 0x680i64, &v21, v5, v10);
                break;
            case 0x297:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x460) + 8i64 * ((unsigned __int8)v5 ^ 0xB8u)) + 0x600i64) + 8i64 * ((unsigned __int8)__ROR4__(v5, 0x1B) & 0x9E)) + 0x228i64) + 8i64 * (unsigned __int8)(0xB3 * v5)) + 0x4D0i64);
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 0x6E0));
                break;
            case 0x298:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6F0) + 8i64 * ((unsigned __int8)__ROR4__(v5, 0xF) & 0xB6)) + 0x6B0i64) + 8i64 * (__ROL4__(v5, 0x1C) & 0x4C)) + 0x760i64);
                Calls::FastCall(v4 + 0x778, &v21, v5, v10);
                break;
            case 0x299:
                v21 = ~(v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x3A8));
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2E8) + 0x430i64) + 0x1E8i64) + 0x168i64) | 0xD;
                break;
            case 0x29A:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x308);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) - 0x3CFE76BC;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6C0);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x728) + 4i64 * (unsigned __int8)(0xE5 * v5));
                break;
            case 0x29B:
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x368));
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x4F8) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x4F0), 0x10), &v21, v5, v4);
                break;
            case 0x29C:
                Calls::FastCall(v4 + 0x648, &v21, v5, v4);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x400);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x168);
                break;
            case 0x29D:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x68) + 0x1D0i64) + 8i64 * ((unsigned __int8)v5 ^ 0x11u)) + 0x3D8i64) + 0x88i64) + 8i64 * ((unsigned __int8)__ROR4__(v5, 5) & 0xAE)) + 0x690i64);
                break;
            case 0x29E:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x100);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8) + 8i64 * ((unsigned __int8)(0xD8 * v5) & 0xF6)) + 0x530i64, &v21, v5, v4);
                break;
            case 0x29F:
                v21 = v11 - v5 - 0x5F2885DA;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1A0);
                v21 = __ROL4__(v21, 0x88 * (FuckEnc::CacheRead<_BYTE>(v10 + 0x400) ^ 0x2E));
                break;
            case 0x2A0:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x768);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x520);
                v21 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x1C0);
                Calls::FastCall(v4 + 0x218, &v21, v5, v4);
                break;
            case 0x2A1:
                v21 = v11 + 0x6B1CC704;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8);
                v21 = v11 + 0x6B1CC704 + FuckEnc::CacheRead<_DWORD>(v10 + 0x5F8) - FuckEnc::CacheRead<_DWORD>(v4 + 0x308) + 0x7F90415;
                break;
            case 0x2A2:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x620) ^ v11;
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x230) + 0xA0i64) + 0x598i64);
                v21 += 2 * FuckEnc::CacheRead<_DWORD>(v4 + 0x3A8);
                break;
            case 0x2A3:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0) + 0x1B0i64) + 0x280i64, &v21, v5, v4);
                break;
            case 0x2A4:
                Calls::FastCall(v4 + 0x630, &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x1A8));
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x58) + 0x170i64);
                break;
            case 0x2A5:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8) + 8i64 * ((unsigned __int8)(0x6C * (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x170))) & 0xE3)) + 0x2F0i64);
                v21 = __ROL4__(v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x28) ^ FuckEnc::CacheRead<_DWORD>(v10 + 0x5F8)), 0x8D);
                break;
            case 0x2A6:
                v21 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(v4 + 0x580) + 0x2B0i64) & 0xFFFFFFF3);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x58);
                v21 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x2B0);
                break;
            case 0x2A7:
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x740) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x438) + 0x28i64));
                v21 = ~__ROR4__(v21, FuckEnc::CacheRead<_BYTE>(v4 + 0x220) * v5);
                break;
            case 0x2A8:
                v21 = ~(v11 + ~FuckEnc::CacheRead<_DWORD>(v4 + 0xD8));
                v21 = __ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x760) + 0x780i64) ^ v21, v5);
                break;
            case 0x2A9:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x290) + 0x218i64, &v21, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x58);
                v21 += FuckEnc::CacheRead<_DWORD>(v10 + 0x400);
                break;
            case 0x2AA:
                v21 = __ROR4__(__ROR4__(v11, 0x44), 0xA7);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x480);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x638) ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8);
                break;
            case 0x2AB:
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x540) ^ 0xBB);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x588);
                v21 += FuckEnc::CacheRead<_DWORD>(v10 + 0x100);
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_BYTE>(v4 + 0x248) + 0x70);
                break;
            case 0x2AC:
                v21 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x638) ^ 0x4DE2DCF7);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x220) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1D0) + 8i64 * ((unsigned __int8)v5 & 0x8F)) + 0x4B0i64);
                break;
            case 0x2AD:
                v21 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x740) | 0x13) - 0x79198572;
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x170) ^ 0xC8FE77DC;
                break;
            case 0x2AE:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x318) + 8i64 * (unsigned __int8)(0x3A * v5)) + 0x430i64);
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x5A8) + 8i64 * (v5 & 0x53)) + 0x448i64) + 4i64 * (((unsigned __int8)v5 ^ 0xEF) & 0xF2)) >> 0x1D);
                break;
            case 0x2AF:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0);
                v21 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xC0) + 4i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v10 + 0x20) ^ 0xFD) & 0x36)) ^ ~((FuckEnc::CacheRead<_DWORD>(v4 + 0x690) | 0x1000000u) >> 0x14);
                break;
            case 0x2B0:
                v21 = v11 ^ 0x4E75A5E0;
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x28) ^ v11 ^ 0x4E75A5E0;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x58);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x28) ^ FuckEnc::CacheRead<_DWORD>(v10 + 0x780);
                break;
            case 0x2B1:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) ^ v11;
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x400);
                Calls::FastCall(v4 + 0x6E8, &v21, v5, v4);
                break;
            case 0x2B2:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1A0) + 0x248i64) ^ v11;
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x118) | 4;
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0);
                break;
            case 0x2B3:
                v18 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x420) + 8i64 * (unsigned __int8)((_BYTE)v5 << 7)) + 0x588i64) + 0x6E0i64);
                goto LABEL_697;
            case 0x2B4:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 8i64 * (__ROR4__(v5, 7) & 0x2B)) + 0x750i64) + 0xA8i64);
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x100) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x590) + 4i64 * (v5 & 0x3E)));
                break;
            case 0x2B5:
                v21 = v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x2B8) + v11;
                v21 = (v21 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x638) | 0x10)) + 0x6ACF7FF7;
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x780);
                break;
            case 0x2B6:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2E8) + 0xA8i64) + 0xE0i64) + 8i64 * ((unsigned __int8)v5 & 0x9F)) + 0x620i64) ^ v11;
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0);
                break;
            case 0x2B7:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x100);
                v21 += (FuckEnc::CacheRead<_DWORD>(v4 + 0x308) ^ 0x4E9DBC7C) + 1;
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x780) + 1;
                break;
            case 0x2B8:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6F0) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x740) & 0xD5)) + 0x1A0i64);
                v21 = v11 ^ ~(FuckEnc::CacheRead<_DWORD>(v10 + 0x688) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x768) | 7));
                break;
            case 0x2B9:
                Calls::FastCall(v4 + 0x128, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6F0) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8) & 0x88)) + 0x600i64) + 8i64 * (((unsigned __int8)v5 ^ 0x14) & 0x56)));
                break;
            case 0x2BA:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8) ^ v11;
                v21 = (FuckEnc::CacheRead<_DWORD>(v4 + 0x620) ^ v21) - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x520);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x668) + 0x118i64);
                break;
            case 0x2BB:
                v21 = v11 - ((unsigned int)(FuckEnc::CacheRead<_DWORD>(v4 + 0x5F8) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0) >> 0x1A)) >> 0x17) - FuckEnc::CacheRead<_DWORD>(v4 + 0x400) + 0x7119F43D;
                break;
            case 0x2BC:
                Calls::FastCall(v4 + 0x500, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE0) + 8i64 * (unsigned __int8)(0xDD * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x708) + 0x6D8i64) + 4i64 * (((unsigned __int8)v5 ^ 0xA7) & 0xD8)))));
                break;
            case 0x2BD:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x290);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x280) + 8i64 * (unsigned __int8)(0x44 * v5), &v21, v5, v4);
                v21 += 0x733CBB7C;
                break;
            case 0x2BE:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x330) + 0x2E8i64) + 0x100i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1A8);
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x728) + 4i64 * (v5 & 0x68)));
                break;
            case 0x2BF:
                v21 = ~(v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x2B8));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x710i64);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x220) + FuckEnc::CacheRead<_DWORD>(v4 + 0x4B0);
                break;
            case 0x2C0:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x668) + 0x548i64);
                v21 -= (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x240) + 0x248i64) & 0xFFFFFFEC) << 0x11;
                break;
            case 0x2C1:
                v21 = v11 ^ 0x150991E9;
                v21 = (v11 ^ 0x150991E9) + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B8) + 4i64 * ((unsigned __int8)(0x86 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x388) + 0x168i64)) & 0xD8)) ^ (0xACD0FF81 * FuckEnc::CacheRead<_DWORD>(v4 + 0x540)));
                break;
            case 0x2C2:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x440);
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x370i64) + 8i64 * ((unsigned __int8)(0x77 * FuckEnc::CacheRead<_BYTE>(v10 + 0x118)) & 0xE5)) + 0x780i64) - 0xDC2ADD0;
                break;
            case 0x2C3:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x480);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x4B8) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x16)) + 0x118i64) & 0xFFFFFFF2;
                break;
            case 0x2C4:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x400) ^ v11;
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x330) + 0x68i64) + 0x460i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 0xA)) + 0x760i64) + 0x368i64);
                break;
            case 0x2C5:
                v15 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6C0) + 0x750i64) + 0x4D0i64) + 0x260i64);
                v21 = v15;
                v16 = (unsigned __int8)(0x52 * v5);
                v17 = FuckEnc::CacheRead<_QWORD>(v4 + 0x568);
            LABEL_320:
                v21 = v15 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v17 + 8 * v16) + 0x368i64);
                break;
            case 0x2C6:
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x28) | 0x19);
                v18 = FuckEnc::CacheRead<_DWORD>(v4 + 0x620) ^ v21;
            LABEL_697:
                v21 = v18;
                v21 = v18 - FuckEnc::CacheRead<_DWORD>(v4 + 0x690) * v5;
                break;
            case 0x2C7:
                v21 = v11 ^ 0x8DBD8F31;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x290) + 0x560i64, &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x388));
                break;
            case 0x2C8:
                v21 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x460) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x308) & 0x59)) + 0x370i64) + 8i64 * ((unsigned __int8)v5 ^ 0x65u)) + 0x768i64) ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x688));
                break;
            case 0x2C9:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x230) + 0x250i64) + 8i64 * (v5 & 2), &v21, v5, v4);
                break;
            case 0x2CA:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1A0);
                v21 = (_DWORD)0x66D08BD + v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x608) + 0x248i64) - v5;
                v21 ^= 0x30BC0C7D * FuckEnc::CacheRead<_DWORD>(v4 + 0x168);
                break;
            case 0x2CB:
                v21 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x460) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x13)) + 0x240i64) + 0x548i64) ^ 0xD1FF4123) - FuckEnc::CacheRead<_DWORD>(v4 + 0x638);
                break;
            case 0x2CC:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xE8);
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x690);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0xD8) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x338) + 0x5E0i64) + 4i64 * (v5 & 0x3C));
                break;
            case 0x2CD:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x20);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x390) * (v5 + 0x34E945F5 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x5F8) | 7));
                break;
            case 0x2CE:
                v21 = v11 + 0x3CFE76BC + FuckEnc::CacheRead<_DWORD>(v4 + 0x4B0);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x388) + 0x240i64);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x168) + FuckEnc::CacheRead<_DWORD>(v4 + 0x4B0);
                break;
            case 0x2CF:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE8) + 0x190i64) + 8i64 * (v5 & 0x4A)) + 0x2E8i64);
                v21 = FuckEnc::CacheRead<_DWORD>(v10 + 0x368) ^ v11;
                v21 ^= 0xA1FB0F50 * FuckEnc::CacheRead<_DWORD>(v4 + 0x400);
                break;
            case 0x2D0:
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x618) + 0x578i64) + 0x368i64) + FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0) + 0x350i64) + 4i64 * (((unsigned __int8)v5 ^ 0xDF) & 0xA1)));
                break;
            case 0x2D1:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x58) + 0x668i64) + 0x5C8i64) + 0x760i64) + 0x580i64);
                Calls::FastCall(v4 + 0x790, &v21, v5, v10);
                break;
            case 0x2D2:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x760) + 0x5F0i64, &v21, v5, v4);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x688);
                break;
            case 0x2D3:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4C0) + 0x600i64) + 8i64 * ((unsigned __int8)v5 ^ 0xF4u)) + 0x408i64, &v21, v5, v4);
                break;
            case 0x2D4:
                v21 = v11 + v5;
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x330) + 0x688i64) ^ (v11 + v5);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x438) + 0x760i64) + 0x28i64);
                break;
            case 0x2D5:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x378);
                v21 = __ROR4__(v21, FuckEnc::CacheRead<_BYTE>(v10 + 0x780) * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6C8) + 0x290i64) + 0x768i64));
                break;
            case 0x2D6:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0);
                v21 = __ROR4__(v21, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x568) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x1A)) + 0x3A8i64));
                v21 += 0x581E6FA4 * FuckEnc::CacheRead<_DWORD>(v4 + 0x260);
                break;
            case 0x2D7:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0) + 0x568i64) + 8i64 * (unsigned __int8)(0xEF * v5)) + 0x230i64);
                Calls::FastCall(v4 + 0x3B8, &v21, v5, v10);
                break;
            case 0x2D8:
                Calls::FastCall(v4 + 0x2C0, &v21, v5, v4);
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 8i64 * ((unsigned __int8)(0x60 * v5) & 0xDB)) + 0x20i64);
                break;
            case 0x2D9:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x520);
                v21 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x6D8) + 4i64 * ((0x1A * (_BYTE)v5) & 0x38)));
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x220);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) ^ 0xA22ADDC6;
                break;
            case 0x2DA:
                v21 = v11 - (v5 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0) + 0x740i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x600) + 8i64 * ((unsigned __int8)(0x4B * FuckEnc::CacheRead<_BYTE>(v4 + 0x2B8)) & 0xF5)) + 0x170i64));
                break;
            case 0x2DB:
                v21 = v11 - 0x3480EDB0;
                v21 = (v11 - 0x3480EDB0) ^ ((unsigned int)((FuckEnc::CacheRead<_DWORD>(v4 + 0x220) >> 0xE) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x118) - 0x3CFECE8B)) >> 0x13);
                break;
            case 0x2DC:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x478) + 0x600i64) + 8i64 * ((unsigned __int8)v5 & 0xEF)) + 0x6C8i64);
                v21 = (unsigned int)0x861F991 ^ (v11 - 0x388D013B * (FuckEnc::CacheRead<_DWORD>(v10 + 0x540) >> 2));
                break;
            case 0x2DD:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) * v5;
                v21 ^= ~FuckEnc::CacheRead<_DWORD>(v4 + 0x638);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x390);
                break;
            case 0x2DE:
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x308) + 0x75);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x740) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x768) ^ 0xC311317F;
                break;
            case 0x2DF:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 8i64 * (((unsigned __int8)v5 ^ 0xF7) & 0x4B)) + 0x6D0i64);
                v21 = v11 - (FuckEnc::CacheRead<_DWORD>(v10 + 0x690) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x708) + 0x540i64));
                break;
            case 0x2E0:
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x540));
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_DWORD>(v4 + 0x390));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x480);
                v21 ^= v5 + FuckEnc::CacheRead<_DWORD>(v10 + 0x248);
                break;
            case 0x2E1:
                v21 = v11 ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x4B0) + FuckEnc::CacheRead<_DWORD>(v4 + 0x768) + ((0x807B532F * FuckEnc::CacheRead<_DWORD>(v4 + 0x598)) ^ 0xDACA258C));
                break;
            case 0x2E2:
                v21 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x438) + 0x378i64) + 0x4C0i64) + 0x2B0i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B8) + 8i64 * (__ROR4__(v5, 0x10) & 0x43)) + 0x688i64));
                break;
            case 0x2E3:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1A8) + 0x58i64) + 0x668i64) + 0x3B0i64) + 8i64 * ((unsigned __int8)v5 & 0x8A), &v21, v5, v4);
                break;
            case 0x2E4:
                v21 = v11 ^ ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8) ^ 0x56D1FF41);
                v21 = ~(v21 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 8i64 * (v5 & 0x14)) + 0x3F8i64));
                break;
            case 0x2E5:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x480);
                v21 = v11 + (FuckEnc::CacheRead<_DWORD>(v10 + 0x2B8) ^ (0x8B64B08 * FuckEnc::CacheRead<_DWORD>(v4 + 0x400) * v5 - 0x2E3A62D8)) + 1;
                break;
            case 0x2E6:
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1A0) + 0x2B0i64) + 0x47FCD0CC * FuckEnc::CacheRead<_DWORD>(v4 + 0x260));
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x100);
                break;
            case 0x2E7:
                Calls::FastCall(v4 + 0x458, &v21, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x480);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x1B8) + 4i64 * ((unsigned __int8)v5 ^ 0x62u));
                break;
            case 0x2E8:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x620) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x748) + 8i64 * ((unsigned __int8)v5 & 0xB1)) + 0x128i64, &v21, v5, v4);
                break;
            case 0x2E9:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x400) ^ v11 ^ 0x9353E417;
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x378) + 0x6B0i64) + 8i64 * ((unsigned __int8)v5 ^ 0xB8u)) + 0xC0i64) + 4i64 * (unsigned __int8)(0xD1 * v5));
                break;
            case 0x2EA:
                v21 = v11 + 0x422E22AB;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x760);
                v21 = (v11 + 0x422E22AB) ^ (FuckEnc::CacheRead<_DWORD>(v10 + 0x690) + ((0x3EC31131 * FuckEnc::CacheRead<_DWORD>(v4 + 0x688)) ^ 0x24F80060));
                break;
            case 0x2EB:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8) + 8i64 * ((unsigned __int8)v5 & 0xEA)) + 0x338i64) + 0x708i64) + 0x590i64) + 4i64 * (((unsigned __int8)v5 ^ 0xE7) & 0x98));
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8);
                break;
            case 0x2EC:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x450) ^ v11;
                v21 = v21 - FuckEnc::CacheRead<_DWORD>(v4 + 0x780) - 0x4BAF6459;
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0) + 0x1B8i64) + 4i64 * ((unsigned __int8)v5 ^ 0x91u));
                break;
            case 0x2ED:
                v21 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8) >> 8);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xA0);
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x748) + 8i64 * ((unsigned __int8)(0x6C * v5) & 0xE7)) + 0x308i64);
                break;
            case 0x2EE:
                v21 = v11 - 0x63561DB1;
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x118) ^ (v11 - 0x63561DB1);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1A0) + 0x6D8i64) + 4i64 * (unsigned __int8)(0xF7 * v5)) + 1;
                break;
            case 0x2EF:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1D0) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x598), 0x1A)) + 0xA0i64) + 0x88i64) + 8i64 * (v5 & 0x48)) + 0xA8i64) + 0x300i64) + 4i64 * (v5 & 0x1A));
                break;
            case 0x2F0:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x248);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x750);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x4B8) + 8i64 * (v5 & 0x1F)) + 0x338i64) + 0xC0i64) + 4i64 * ((unsigned __int8)__ROR4__(v5, 4) & 0xBD));
                break;
            case 0x2F1:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2F0);
                v21 = v5 ^ __ROL4__(v11, 0xB5 * v5 * FuckEnc::CacheRead<_BYTE>(v4 + 0x3A8) * FuckEnc::CacheRead<_BYTE>(v10 + 0x690));
                break;
            case 0x2F2:
                Calls::FastCall(v4 + 0x18, &v21, v5, v4);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x4B0);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x620);
                break;
            case 0x2F3:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4D0);
                Calls::FastCall(v10 + 0x5F0, &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x440));
                break;
            case 0x2F4:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x5F8);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1D0) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x728) + 4i64 * (((unsigned __int8)~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x260) ^ 0xFB) & 0x55)), 0x11)) + 0x368i64);
                break;
            case 0x2F5:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8);
                Calls::FastCall(v4 + 0x458, &v21, v5, v4);
                v21 = ~v21 ^ 0xC8D1FF41;
                break;
            case 0x2F6:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x4F0);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x540);
                v21 = __ROR4__(v21, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D8) + 0x2B8i64));
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x78);
                break;
            case 0x2F7:
                v21 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x20) & 0xFFFFFFED);
                v21 = __ROR4__(v21, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x440) + 0x608i64) + 0x460i64) + 8i64 * (unsigned __int8)(9 * v5)) + 0x5F8i64));
                break;
            case 0x2F8:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x2B8);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x308);
                v21 = __ROR4__(v21, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4C0) + 0x88i64) + 8i64 * ((unsigned __int8)v5 ^ 0x4Du)) + 0x308i64));
                break;
            case 0x2F9:
                Calls::FastCall(v4 + 0x560, &v21, v5, v4);
                v21 ^= 0xA2BDB3E1 * FuckEnc::CacheRead<_DWORD>(v4 + 0x248);
                break;
            case 0x2FA:
                v21 = v11 - v5 - 0x2C390A62;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x708);
                v21 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x368) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x450) ^ 0x88F95B5A;
                break;
            case 0x2FB:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x368);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6C0) + 0x478i64);
                v21 += FuckEnc::CacheRead<_DWORD>(v10 + 0x638);
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8) + 0x390i64));
                break;
            case 0x2FC:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 0x540i64);
                v21 -= (FuckEnc::CacheRead<_DWORD>(v4 + 0x768) * (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x168))) | 0xD;
                break;
            case 0x2FD:
                v21 = v11 - 0x3CFECE20;
                v21 = (FuckEnc::CacheRead<_DWORD>(v4 + 0x2B8) - 0x73F55D45 * FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8) + v11 - 0x3CFECE20 + 0x242FC312) ^ 0x5C7409FB;
                break;
            case 0x2FE:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x168) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x708);
                v21 += FuckEnc::CacheRead<_DWORD>(v10 + 0x768);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x768);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x3A8);
                break;
            case 0x2FF:
                v21 = (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8)) ^ 0x76C31131;
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x228) + 8i64 * (unsigned __int8)(0x6A * FuckEnc::CacheRead<_BYTE>(v4 + 0x20))) + 0x248i64);
                break;
            case 0x300:
                v21 = (unsigned int)0x115E1FC9 ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x148);
                v21 = ~(((unsigned int)0x115E1FC9 ^ v11) - FuckEnc::CacheRead<_DWORD>(v10 + 0x170));
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0) << 0xC;
                break;
            case 0x301:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 0x740i64) ^ v11;
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x5F8);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1A8) + 0x688i64);
                break;
            case 0x302:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x420) + 8i64 * (unsigned __int8)(0x53 * FuckEnc::CacheRead<_BYTE>(v4 + 0x3F8))) + 0xF8i64) + 0x598i64) * ((FuckEnc::CacheRead<_DWORD>(v4 + 0x2B8) + 0x756A9F47) | 0x1B);
                break;
            case 0x303:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x60) + 0x460i64) + 8i64 * ((unsigned __int8)__ROL4__(v5, 0xE) & 0x9C)) + 0x240i64) + 0x4B8i64) + 8i64 * ((unsigned __int8)v5 ^ 2u)) + 0x308i64) ^ v11;
                break;
            case 0x304:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8) + 8i64 * (unsigned __int8)__ROL4__(v5, 6)) + 0x6B0i64) + 8i64 * (unsigned __int8)(0xEB * v5)) + 0x60i64);
                v21 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x588) + 0x4D8i64));
                break;
            case 0x305:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x148);
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x6F0) + 8i64 * (v5 & 0x4B)) + 0x1C0i64);
                v21 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 0x248i64);
                break;
            case 0x306:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x338) + 0x318i64) + 8i64 * (unsigned __int8)((_BYTE)v5 << 6)) + 0x480i64) + 0xE0i64) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x690) & 0x98)) + 0x2B8i64);
                break;
            case 0x307:
                v21 = v11 - 0x1289220E;
                Calls::FastCall(v4 + 0x4E8, &v21, v5, v4);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) ^ v5;
                break;
            case 0x308:
                Calls::FastCall(v4 + 0x360, &v21, v5, v4);
                v21 = __ROL4__(v21, ~(0xB8 * FuckEnc::CacheRead<_BYTE>(v4 + 0x740)));
                break;
            case 0x309:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x330) + 0x230i64) + 0x588i64);
                Calls::FastCall(v10 + 0x2A8, &v21, v5, v4);
                break;
            case 0x30A:
                v21 = ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x168) ^ v11);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x4F0);
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1D0) + 8i64 * (__ROL4__(v5, 0x1B) & 0x57)) + 0x118i64);
                break;
            case 0x30B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x668);
                v21 = (v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x450) * v5) ^ 0x62B1C8;
                v21 = v5 + __ROR4__(v21, FuckEnc::CacheRead<_BYTE>(v4 + 0x390) << 6);
                break;
            case 0x30C:
                v21 = (v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x68) + 0xD8i64) * v5)) - 0x3CFE76BC;
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8) >> 7;
                break;
            case 0x30D:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0);
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x3A8) + FuckEnc::CacheRead<_DWORD>(v10 + 0x4D8));
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x100) ^ 0xBD56DD21;
                break;
            case 0x30E:
                v21 = v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x308) ^ v11;
                v21 = ~(v21 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x100) + 0x23C70AFF) ^ 0x16BBECA4);
                break;
            case 0x30F:
                v21 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8) ^ 0xD1FF41BB);
                v21 = (v21 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0) + 0x6D8i64) + 4i64 * (__ROR4__(v5, 0x15) & 0x73))) ^ 0x8769E02D;
                break;
            case 0x310:
                Calls::FastCall(v4 + 0x4A8, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1D0) + 8i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1A8) + 0x260i64) - 0x48F3FBA7, 0x15) & 0xAF)));
                break;
            case 0x311:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x588);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x780) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x240) + 0x448i64) + 4i64 * (v5 & 0x12));
                break;
            case 0x312:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x28);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x420) + 8i64 * ((unsigned __int8)v5 & 0x85)) + 0x370i64) + 8i64 * (v5 & 0x79)) + 0x520i64);
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_DWORD>(v10 + 0x780));
                break;
            case 0x313:
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x450) - 0x6D2ECC08);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3D8);
                Calls::FastCall(v10 + 0x310, &v21, v5, v4);
                break;
            case 0x314:
                v21 = v11 + 0x3CEECEE2;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x460) + 8i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x4F0), 5) & 0x6E)) + 0x218i64, &v21, v5, v4);
                break;
            case 0x315:
                Calls::FastCall(v4 + 0x6A8, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x58i64) + 0x6B0i64) + 8i64 * (((unsigned __int8)v5 ^ 0xF9) & 0x4F)) + 0x480i64));
                break;
            case 0x316:
                v21 = v11 - 0x2E00BE7C;
                v21 = v11 - 0x2E00BE7C + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 0x6C8i64) + 0xF8i64) + 0xE8i64) + 0x6D8i64) + 4i64 * ((unsigned __int8)v5 ^ 0x84u));
                break;
            case 0x317:
                v21 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6C8) + 0x6E0i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x148) + 0x438i64);
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_DWORD>(v10 + 0x390));
                break;
            case 0x318:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x450);
                v21 = __ROR4__(__ROR4__(v21, ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x220)), v5);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x20) >> 0x1A;
                break;
            case 0x319:
                v21 = v5 ^ v11;
                v21 = (v5 ^ v11) - FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xA8);
                v21 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x6D8) + 4i64 * (unsigned __int8)(0x95 * v5));
                break;
            case 0x31A:
                v21 = v11 ^ 0x9EF2E1D4;
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x100) ^ v11 ^ 0x9EF2E1D4 ^ 0x70F7DF0E;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6C8);
                v21 += 0x3102627A * FuckEnc::CacheRead<_DWORD>(v10 + 0x6E0);
                break;
            case 0x31B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x608);
                v21 = FuckEnc::CacheRead<_DWORD>(v10 + 0x540) ^ v11;
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6F0) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) & 0xB4)) + 0x440i64) + 0x1C0i64);
                break;
            case 0x31C:
                v21 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x3A8) ^ 0x27C31131);
                v21 -= v5 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x248) + ~FuckEnc::CacheRead<_DWORD>(v4 + 0x780));
                break;
            case 0x31D:
                v21 = v11 - v5 - 0x7589D0FF;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8) + 0xF8i64);
                v21 = __ROR4__(v21, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x4B8) + 8i64 * (((unsigned __int8)v5 ^ 8) & 0x9E)) + 0x78i64));
                break;
            case 0x31E:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x330) + 0x588i64) + 0x6C0i64);
                v21 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v10 + 0x638) - 0xF5 * (FuckEnc::CacheRead<_BYTE>(v4 + 0x20) ^ 0x27));
                break;
            case 0x31F:
                v21 = v5 ^ ((_DWORD)0x115E11F8 + v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x620));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x750) + 0x3D8i64);
                v21 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x368);
                break;
            case 0x320:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE0) + 8i64 * (unsigned __int8)(0xB1 * FuckEnc::CacheRead<_BYTE>(v4 + 0x2B0))) + 0x138i64) + 8i64 * (v5 & 5), &v21, v5, v4);
                break;
            case 0x321:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0) + 0x218i64, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xF8) + 0x148i64));
                break;
            case 0x322:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x338) + 0x668i64);
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 0x28) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x88) + 8i64 * ((0xCE * (_BYTE)v5) & 0x47)) + 0x1A8i64) + 0x5F8i64));
                break;
            case 0x323:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x598) ^ v11;
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 0x6E0i64) + 0x7EC30131 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x578) + 0xD8i64);
                break;
            case 0x324:
                v21 = __ROR4__(__ROL4__(v11, 0xEB), v5);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x520) + 0x760i64) + 0xE0i64) + 8i64 * (v5 & 0x6C)) + 0x2B8i64);
                break;
            case 0x325:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x290) + 0x5A8i64) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x118) & 0xC8)) + 0x378i64) + 0x448i64) + 4i64 * ((unsigned __int8)v5 & 0xCA));
                break;
            case 0x326:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 0xA8i64) + 0x1E8i64);
                v21 = ~(v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x248));
                v21 ^= v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x540);
                break;
            case 0x327:
                v21 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x390), 3)) + 0x1D0i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 9)) + 0xC0i64) + 4i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x3A8) ^ 0x2Cu)) ^ v11);
                break;
            case 0x328:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xA8);
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v10 + 0x5F8) * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5A8) + 8i64 * ((unsigned __int8)v5 & 0xC1)) + 0x5F8i64));
                break;
            case 0x329:
                v21 = __ROR4__(v11, 0xD2);
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA0) + 0x638i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x370) + 8i64 * (v5 & 4)) + 0x248i64);
                break;
            case 0x32A:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0) ^ v11;
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x760) + 0x6C0i64) + 0x520i64) + 0x2E8i64) + 0x4D0i64) + 0x400i64));
                break;
            case 0x32B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x60);
                Calls::FastCall(v10 + 0x188, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x368) & 0x53)));
                break;
            case 0x32C:
                v21 = (_DWORD)0x1A662F0 + v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xA8);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x618) + 0x2A8i64, &v21, v5, v10);
                break;
            case 0x32D:
                v21 = v11 - (~(0x832BC2E9 * FuckEnc::CacheRead<_DWORD>(v4 + 0x308)) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F0) + 0x68i64) + 0x368i64) << 0xD));
                break;
            case 0x32E:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6F0) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x620) ^ 2) & 0x23)) + 0xD8i64);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE0) + 8i64 * (((unsigned __int8)v5 ^ 0x12) & 0xDA)) + 0x638i64);
                break;
            case 0x32F:
                v21 = __ROL4__((FuckEnc::CacheRead<_DWORD>(v4 + 0x368) ^ v11) + 0x1293072F, v5);
                v21 = v21 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x330) + 0x690i64) + 0x3CFECE44;
                break;
            case 0x330:
                v21 = v11 + 0x5F04B512;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 0x480i64);
                Calls::FastCall(v4 + 0x6E8, &v21, v5, v10);
                break;
            case 0x331:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x12)) + 0x4D0i64);
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x748) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1E)) + 0x580i64) + 0x620i64);
                break;
            case 0x332:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x740);
                Calls::FastCall(v4 + 0x560, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 8i64 * (unsigned __int8)(0x58 * v5)));
                break;
            case 0x333:
                v21 = v5 ^ v11 ^ 0x516025F7;
                v21 = __ROL4__(v21, 0xE4 * ~(FuckEnc::CacheRead<_BYTE>(v4 + 0x598) | 0x1F));
                break;
            case 0x334:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x368) ^ v11;
                v21 = v5 ^ __ROL4__(v21, FuckEnc::CacheRead<_DWORD>(v4 + 0x638));
                v21 ^= v5 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x368) ^ v5);
                break;
            case 0x335:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x240) + 0x440i64);
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 0x4D8);
                v21 = v21 - FuckEnc::CacheRead<_DWORD>(v4 + 0x390) + 0x61D16C90;
                break;
            case 0x336:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2E8) + 0xA0i64) + 0x740i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0);
                v21 = __ROR4__(v21, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x350) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x390) & 0xAC)));
                break;
            case 0x337:
                v21 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xF8) + 0x78i64) >> 0x13);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x440);
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_DWORD>(v10 + 0x4F0));
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x368);
                break;
            case 0x338:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x2F0i64) + 0x338i64);
                Calls::FastCall(v4 + 0x500, &v21, v5, FuckEnc::CacheRead<_QWORD>(v10 + 0x6C0));
                break;
            case 0x339:
                v21 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x620) * (FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x708) + 0x4B0i64) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4D0) + 0x728i64) + 4i64 * ((0xF4 * (_BYTE)v5) & 0x2C))));
                break;
            case 0x33A:
                v21 = v5 + v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x170);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x388);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x420) + 8i64 * ((unsigned __int8)__ROR4__(v5, 5) & 0xBF)) + 0x20i64);
                break;
            case 0x33B:
                v21 = v11 + 1 + FuckEnc::CacheRead<_DWORD>(v4 + 0x28);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x318) + 8i64 * (v5 & 0x7D)) + 0x6D8i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 0x17));
                break;
            case 0x33C:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6C8) + 0x6F0i64) + 8i64 * (unsigned __int8)v5) + 0x190i64) + 8i64 * (unsigned __int8)(0x9E * v5)) + 0x440i64);
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x400);
                break;
            case 0x33D:
                Calls::FastCall(v4 + 0x630, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 0x378i64) + 0x520i64));
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x548);
                break;
            case 0x33E:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1D0) + 8i64 * ((unsigned __int8)(0xB2 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x308) ^ 0xFE)) & 0x9C)) + 0x4D8i64);
                v21 += ~(0x4CB70356 * FuckEnc::CacheRead<_DWORD>(v4 + 0x548));
                break;
            case 0x33F:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0) + 0x560i64, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1D0) + 8i64 * (((unsigned __int8)v5 ^ 0xFB) & 0x26)));
                break;
            case 0x340:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6C0);
                Calls::FastCall(v10 + 0x3B8, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x460) + 8i64 * (unsigned __int8)__ROL4__(v5, 0xD)));
                break;
            case 0x341:
                v21 = __ROL4__(v11, 0x62);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x480);
                Calls::FastCall(v10 + 0x680, &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x338));
                break;
            case 0x342:
                v21 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x58) + 0x100i64));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x608) + 0x2E8i64);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x480) + 0x4F0i64) * v5;
                break;
            case 0x343:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x430) + 0x368i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x60);
                Calls::FastCall(v4 + 0x408, &v21, v5, v10);
                break;
            case 0x344:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x780);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x608);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x6D8) + 4i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x600) + 8i64 * (v5 & 0x3B)) + 0x620i64) ^ 0x3Bu));
                break;
            case 0x345:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x118) ^ v11 ^ 0x61EB58ED;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0);
                Calls::FastCall(v4 + 0x3F0, &v21, v5, v10);
                break;
            case 0x346:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0);
                v21 = FuckEnc::CacheRead<_DWORD>(v10 + 0x78) ^ v11 ^ 0xD1FF414B;
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_BYTE>(v4 + 0x4B0) | 0x16);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x780);
                break;
            case 0x347:
                v21 = v11 - v5 * FuckEnc::CacheRead<_DWORD>(v4 + 0x400) * 0x20 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1D0) + 8i64 * ((unsigned __int8)v5 & 0xEE)) + 0xC0i64) + 4i64 * (unsigned __int8)(0xDE * v5));
                break;
            case 0x348:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x588);
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x6D8) + 4i64 * (unsigned __int8)__ROR4__(v5, 0x1C)) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x4F0i64) + 0x3CFE76BC;
                break;
            case 0x349:
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x768i64));
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x368) ^ 0xA9705A66;
                break;
            case 0x34A:
                v21 = v11 - 0x1C3CFECF;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2F0);
                v21 = v11 - 0x1C3CFECF + ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x740) ^ (FuckEnc::CacheRead<_DWORD>(v10 + 0x220) * v5));
                break;
            case 0x34B:
                v21 = ~(v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0x368i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x68) + 0x2D8i64) + 8i64 * ((unsigned __int8)v5 ^ 0x84u)) + 0x540i64)));
                break;
            case 0x34C:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 0x6C0i64) + 0x58i64) + 0x2F0i64);
                Calls::FastCall(v4 + 0x10, &v21, v5, v10);
                break;
            case 0x34D:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6F0) + 8i64 * (unsigned __int8)(0xA8 * v5)) + 0x378i64);
                v21 = v11 - (FuckEnc::CacheRead<_DWORD>(v10 + 0x780) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8) + 0x78i64));
                break;
            case 0x34E:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8) + 0xE0i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1D)) + 0x2F0i64) + 0x760i64);
                v21 = v11 ^ (v5 + FuckEnc::CacheRead<_DWORD>(v10 + 0x260));
                break;
            case 0x34F:
                v21 = v11 + 0x58BE6D2 + FuckEnc::CacheRead<_DWORD>(v4 + 0x768);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1A0) + 0x5C8i64) + 0x230i64);
                v21 += FuckEnc::CacheRead<_DWORD>(v10 + 0x260) + 1;
                break;
            case 0x350:
                v21 = v11 + 0x7A80F19F;
                v21 = v11 + 0x7A80F19F + FuckEnc::CacheRead<_DWORD>(v4 + 0x118);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x228) + 8i64 * ((unsigned __int8)v5 & 0xCE)) + 0x430i64);
                v21 += FuckEnc::CacheRead<_DWORD>(v10 + 0x390);
                break;
            case 0x351:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x248);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x520) + 0x178i64, &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x240));
                break;
            case 0x352:
                v21 = v11 ^ (0x7064A23E * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x520) + 0x548i64));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x388) + 0xA0i64);
                v21 += FuckEnc::CacheRead<_DWORD>(v10 + 0x78) + 1;
                break;
            case 0x353:
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2E8) + 0x688i64) << 0xF);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1A0) + 0x728i64) + 4i64 * ((unsigned __int8)(0xC9 * v5) & 0xA8)) ^ v5;
                break;
            case 0x354:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 8i64 * (unsigned __int8)(0x2E * v5)) + 0x478i64);
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v10 + 0x688) + FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x148) + 0x20i64));
                break;
            case 0x355:
                v21 = v11 - 0x46666DD0;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x708);
                Calls::FastCall(v4 + 0x3A0, &v21, v5, FuckEnc::CacheRead<_QWORD>(v10 + 0x58));
                break;
            case 0x356:
                v21 = __ROR4__(v11, v5);
                v21 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x228) + 8i64 * (unsigned __int8)(0x22 * v5)) + 0x378i64) + 0x1B8i64) + 4i64 * (v5 & 6));
                break;
            case 0x357:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x390);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8);
                Calls::FastCall(v10 + 0x778, &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x580));
                break;
            case 0x358:
                v21 = v5 ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x148) + 0x460i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 2)) + 0xF8i64);
                v21 = (v5 ^ v11) - FuckEnc::CacheRead<_DWORD>(v10 + 0x6E0) - v5;
                break;
            case 0x359:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE0) + 8i64 * ((unsigned __int8)(0x29 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1A0) + 0x4F0i64)) & 0xDF)) + 0x330i64) + 0x118i64) ^ v11;
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x598);
                break;
            case 0x35A:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x370) + 8i64 * (v5 & 0x62)) + 0x138i64) + 8i64 * (unsigned __int8)(0xD4 * v5), &v21, v5, v4);
                break;
            case 0x35B:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D8) + 0x260i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x378);
                Calls::FastCall(v10 + 0x560, &v21, v5, v4);
                break;
            case 0x35C:
                v21 = (v11 + v5) ^ 0xF5BC28D0;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x330);
                v21 ^= -FuckEnc::CacheRead<_DWORD>(v10 + 0x168) - 0x2E037F12;
                break;
            case 0x35D:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8) + 0x5C0i64) + 0x6C8i64);
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x598) - 0xFB4DFB8;
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x168);
                break;
            case 0x35E:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x308);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x430) + 0x608i64) + 0x230i64) + 0x580i64);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x780);
                break;
            case 0x35F:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0) + 0x420i64) + 8i64 * (unsigned __int8)(0x2C * FuckEnc::CacheRead<_BYTE>(v4 + 0x100))) + 0x60i64);
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x568) + 8i64 * (unsigned __int8)(0xF0 * v5)) + 0x168i64));
                break;
            case 0x360:
                v21 = v5 + ~(v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x118));
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 8i64 * ((unsigned __int8)v5 & 0xB7)) + 0x100i64);
                break;
            case 0x361:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x2B8) ^ v11;
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8) + 8i64 * ((0x22 * FuckEnc::CacheRead<_BYTE>(v4 + 0x4D8)) & 0x67)) + 0x780i64);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0);
                break;
            case 0x362:
                v21 = v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x390) ^ v11;
                v21 ^= v5 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x168) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x220) - 0x46D22B77));
                break;
            case 0x363:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x568) + 8i64 * ((unsigned __int8)~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0) + 0x308i64) & 0x80)) + 0x5C0i64) + 0x2D8i64) + 8i64 * ((unsigned __int8)v5 & 0xC8)) + 0x740i64);
                break;
            case 0x364:
                Calls::FastCall(v4 + 0x178, &v21, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xA8);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x498) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v10 + 0x20) & 0x53));
                break;
            case 0x365:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x28);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x618) + 0x640i64) + 8i64 * ((unsigned __int8)v5 ^ 0x9Cu), &v21, v5, v4);
                break;
            case 0x366:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 0x4B0i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2F8);
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x448) + 4i64 * ((unsigned __int8)v5 & 0xD6));
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x260);
                break;
            case 0x367:
                v21 = v11 - (FuckEnc::CacheReadPlural<_DWORD>(v4 + 0x728) ^ 0x9A8C8A7) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2E8) + 0x688i64);
                break;
            case 0x368:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x760);
                v21 = v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x1F0) + 0x4D8i64) - v5;
                v21 = v21 - FuckEnc::CacheRead<_DWORD>(v4 + 0x4B0) - 0x37D0FFE2;
                break;
            case 0x369:
                v21 = __ROL4__(v11, 0x9B);
                v21 += ~FuckEnc::CacheRead<_DWORD>(v4 + 0x740);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x618) + 0x4F0i64) * v5;
                break;
            case 0x36A:
                v21 = v11 ^ 0xB800C40A;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x460) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x598), 1)) + 0x4D0i64);
                v21 = (v11 ^ 0xB800C40A) + FuckEnc::CacheRead<_DWORD>(v4 + 0x5F8) + FuckEnc::CacheRead<_DWORD>(v10 + 0x688);
                break;
            case 0x36B:
                v21 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8) + 0x370i64) + 8i64 * (((unsigned __int8)v5 ^ 0x2E) & 0x6E)) + 0x1E8i64) + 0x1A8i64) + 0x590i64) + 4i64 * (unsigned __int8)(0x4F * v5)));
                break;
            case 0x36C:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x220) ^ v11;
                v21 = __ROR4__(__ROR4__(v21, FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8) >> 0x1A), 0xE5);
                break;
            case 0x36D:
                v21 = v11 - (v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x170) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x3A8) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 0x740i64) ^ 0x3F1EF4A2);
                break;
            case 0x36E:
                v21 = v11 + 0x2D2704BA * FuckEnc::CacheRead<_DWORD>(v4 + 0x118);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x768) ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 0x548);
                break;
            case 0x36F:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B8) + 8i64 * (unsigned __int8)(0x5B * v5)) + 0x2B8i64);
                v21 ^= ~FuckEnc::CacheRead<_DWORD>(v4 + 0x28);
                break;
            case 0x370:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x168);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x290);
                v21 = v5 ^ (v21 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x350) + 4i64 * (v5 & 0x5E)));
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x2B8);
                break;
            case 0x371:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5A8) + 8i64 * ((unsigned __int8)v5 & 0x9F)) + 0x1C0i64);
                v21 -= v5 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x248) - 0x672F0063);
                break;
            case 0x372:
                v21 = v11 ^ 0xD5DA0B5C;
                v21 = (v11 ^ 0xD5DA0B5C) + 0x695EFC4D * FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) * FuckEnc::CacheRead<_DWORD>(v4 + 0x740);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x638);
                break;
            case 0x373:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x6D0i64);
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x600) + 8i64 * ((9 * (unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x248)) & 0x12)) + 0x78i64) + 0x1BCBDDE9;
                break;
            case 0x374:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x4F0);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x318) + 8i64 * ((unsigned __int8)v5 & 0xA8)) + 0x378i64);
                v21 += ~FuckEnc::CacheRead<_DWORD>(v10 + 0x598);
                break;
            case 0x375:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x6E0) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x420) + 8i64 * (v5 & 0x78)) + 0x230i64);
                v21 = v5 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x728) + 4i64 * (unsigned __int8)(0x39 * v5)) ^ v21);
                break;
            case 0x376:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x638) ^ v11;
                v21 = (v21 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1A8) + 0x300i64) + 4i64 * (__ROL4__(v5, 3) & 0x6F))) ^ 0xAF77D0FF;
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x768);
                break;
            case 0x377:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x3D8);
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x350) + 4i64 * ((0xFC * (_BYTE)v5) & 0x7E)) ^ v11;
                v21 = v21 - FuckEnc::CacheRead<_DWORD>(v4 + 0x260) - 0x7E3DC1CD;
                v21 = __ROR4__(v21, FuckEnc::CacheRead<_DWORD>(v4 + 0x170));
                break;
            case 0x378:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B8) + 8i64 * (-FuckEnc::CacheRead<_DWORD>(v4 + 0x248) & 0xC)) + 0x638i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x100) | 9);
                break;
            case 0x379:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x568) + 8i64 * ((unsigned __int8)v5 & 0x96)) + 0x498i64) + 4i64 * ((unsigned __int8)v5 ^ 0x3Bu)) ^ v11;
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0xD8) + 0x554EDED5;
                break;
            case 0x37A:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0xD8) - (FuckEnc::CacheRead<_DWORD>(v4 + 0x688) ^ 0x55F34FA2) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4C0) + 0x170i64) + 1;
                break;
            case 0x37B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x388);
                v21 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 0x5F8)) - v5;
                v21 += ~(v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x3A8));
                break;
            case 0x37C:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x4E0) + 8i64 * (unsigned __int8)__ROR4__(0x7AF80DC6 - 0x28ABAC09 * FuckEnc::CacheRead<_DWORD>(v4 + 0x780), 1), &v21, v5, v4);
                break;
            case 0x37D:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x600) + 8i64 * ((unsigned __int8)v5 ^ 0x24u)) + 0xE0i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 0xA)) + 0x1C0i64);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8);
                break;
            case 0x37E:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x168);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0xD8i64);
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x388) + 0x1E8i64) + 0x4D8i64);
                break;
            case 0x37F:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 0x88i64) + 8i64 * ((unsigned __int8)v5 ^ 0x4Bu)) + 0x430i64);
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5A8) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v10 + 0x400) & 8)) + 0x6D8i64) + 4i64 * (((unsigned __int8)v5 ^ 0x89) & 0xFE));
                break;
            case 0x380:
                v21 = v11 ^ (0x2746D0FF * FuckEnc::CacheRead<_DWORD>(v4 + 0x688));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x710);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x1D0) + 8i64 * ((unsigned __int8)v5 ^ 0x5Au)) + 0x28i64) * v5;
                break;
            case 0x381:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4D0) + 0x170i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0) + 0x6E0i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x578) + 0x780i64);
                break;
            case 0x382:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x208) + 4i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x600) + 8i64 * (v5 & 0x1D)) + 0x688i64) ^ 0xF9u)) ^ v11;
                v21 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x618) + 0x400i64);
                break;
            case 0x383:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x378) + 0x400i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6C0);
                v21 = v21 - 0x4B86F909 * (FuckEnc::CacheRead<_DWORD>(v10 + 0x4D8) >> 0x19) + 1;
                break;
            case 0x384:
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x20) * ((FuckEnc::CacheRead<_DWORD>(v4 + 0x2B8) - 0x36D4A8) ^ (0xE87AC6A7 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x580) + 0x548i64))));
                break;
            case 0x385:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x2B8);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D8) + 0x2D8i64) + 8i64 * ((unsigned __int8)__ROR4__(v5, 7) & 0xC3)) + 0x750i64);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x260);
                break;
            case 0x386:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x290) + 0x568i64) + 8i64 * ((unsigned __int8)((unsigned __int64)(unsigned int)~FuckEnc::CacheRead<_DWORD>(v4 + 0x118) >> 6) ^ 0xFCu)) + 0x60i64);
                v21 = FuckEnc::CacheRead<_DWORD>(v10 + 0x5F8) ^ v11;
                break;
            case 0x387:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x148) + 0x548i64);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x78) ^ v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x478);
                v21 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x220);
                break;
            case 0x388:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4D0);
                Calls::FastCall(v4 + 0x270, &v21, v5, v10);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x20);
                break;
            case 0x389:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x338) + 0x60i64) + 0x318i64) + 8i64 * (v5 & 0x36)) + 0x438i64) + 0x6C8i64) + 0x368i64);
                break;
            case 0x38A:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0) + 0xF8i64);
                Calls::FastCall(v4 + 0x3B8, &v21, v5, v10);
                v21 += 0x9158433F * FuckEnc::CacheRead<_DWORD>(v4 + 0x620);
                break;
            case 0x38B:
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 0x78) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x580) + 0x400i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x60) + 0x2F8i64) + 0x78i64)));
                break;
            case 0x38C:
                v21 = v11 + 0x6274B280;
                v21 = v11 + 0x6274B280 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5A8) + 8i64 * (((unsigned __int8)v5 ^ 0xF5) & 0x4E)) + 0x168i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x578);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x688);
                break;
            case 0x38D:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) ^ v11;
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x118);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0) + 0x2F8i64);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x2B8);
                break;
            case 0x38E:
                v21 = (v11 ^ 0x90078A6D) - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x290) + 0x4C0i64);
                v21 = __ROL4__(v21, FuckEnc::CacheRead<_BYTE>(v10 + 0x3A8) * FuckEnc::CacheRead<_BYTE>(v4 + 0x4D8));
                break;
            case 0x38F:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x170) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0) + 0x248i64) + 1) - FuckEnc::CacheRead<_DWORD>(v4 + 0x620);
                break;
            case 0x390:
                v21 = v11 - 0x83CFECF + FuckEnc::CacheRead<_DWORD>(v4 + 0x400);
                v21 ^= 0xCDF1A6CE * FuckEnc::CacheRead<_DWORD>(v4 + 0x308) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x710) + 0x540i64);
                break;
            case 0x391:
                v21 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F0) + 0x578i64) + 0xA8i64) + 0x338i64) + 0x620i64));
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x118);
                break;
            case 0x392:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x748) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x15)) + 0x578i64) + 0x4B8i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 4)) + 0x300i64) + 4i64 * (__ROR4__(v5, 0x18) & 0x3F)) ^ v11;
                break;
            case 0x393:
                Calls::FastCall(v4 + 0x3A0, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x580) + 0x6B0i64) + 8i64 * ((unsigned __int8)v5 & 0xBE)) + 0x588i64) + 0x668i64));
                break;
            case 0x394:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x78);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x148) + 0x4C0i64) + 0x228i64) + 8i64 * (__ROL4__(v5, 6) & 0x11)) + 0x390i64);
                break;
            case 0x395:
                v21 = v11 + 1 + FuckEnc::CacheRead<_DWORD>(v4 + 0x5F8);
                v21 += (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x460) + 8i64 * ((unsigned __int8)__ROR4__(v5, 0x12) & 0xB8)) + 0x308i64) << 0x10) - v5;
                break;
            case 0x396:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8);
                v21 -= v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x248) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x498) + 4i64 * (unsigned __int8)(0xB2 * FuckEnc::CacheRead<_BYTE>(v4 + 0x390)));
                break;
            case 0x397:
                v21 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0));
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x228) + 8i64 * ((0xEE * (_BYTE)v5) & 0x2E)) + 0x4D8i64);
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x78) >> 5;
                break;
            case 0x398:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x2B8) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4D0) + 0x1B0i64) + 0x5E0i64) + 4i64 * (((unsigned __int8)v5 ^ 0x1B) & 0x5F)) + 1;
                break;
            case 0x399:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x20i64) - v5;
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x740) & 0x3C)) + 0xD8i64);
                break;
            case 0x39A:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x580) + 0x530i64, &v21, v5, FuckEnc::CacheRead<_QWORD>(v4 + 0x750));
                v21 -= 0x2F005669;
                break;
            case 0x39B:
                v21 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0) & 0xFFFFFFEA);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x750);
                v21 = (v21 - FuckEnc::CacheRead<_DWORD>(v10 + 0x768) + 0x6A21888C) ^ 0xDCC30131;
                break;
            case 0x39C:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x70i64) + 4i64 * ((unsigned __int8)v5 ^ 6u)) & 0x73)) + 0x5F8i64) ^ v11;
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6C0) + 0x4B0i64);
                break;
            case 0x39D:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x4F0) ^ v11;
                v21 += (FuckEnc::CacheRead<_DWORD>(v4 + 0x260) ^ v5) - FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0) + 1;
                break;
            case 0x39E:
                v21 = __ROL4__(v11, ~(v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x548) & 0xE1));
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x580) + 0x390i64);
                break;
            case 0x39F:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x598);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6C8) + 0x118i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 8i64 * (v5 & 0x22)) + 0x4D8i64);
                break;
            case 0x3A0:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE0) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1A0) + 0x168i64) ^ 0x34u)) + 0x590i64) + 4i64 * (((unsigned __int8)v5 ^ 0xF7) & 0x89));
                v21 += 0x12E00BF * FuckEnc::CacheRead<_DWORD>(v4 + 0x620);
                break;
            case 0x3A1:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x368) ^ v11;
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x318) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x78), 0x16)) + 0x1C0i64);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x618) + 0x100i64);
                break;
            case 0x3A2:
                v21 = v11 - 0x6B2F0016 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) ^ v5);
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x60) + 0x6D8i64) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x780) & 0xED));
                break;
            case 0x3A3:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x580);
                v21 = FuckEnc::CacheRead<_DWORD>(v10 + 0x390) ^ v11;
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 8i64 * (unsigned __int8)(0xD8 * v5)) + 0x768i64);
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x598);
                break;
            case 0x3A4:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xA8);
                Calls::FastCall(v4 + 0x188, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x4B8) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x308) & 0xCA)) + 0x388i64));
                break;
            case 0x3A5:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0x378i64) + 0xE0i64) + 8i64 * (unsigned __int8)(0xF4 * v5)) + 0x6C0i64);
                Calls::FastCall(v4 + 0x530, &v21, v5, v10);
                break;
            case 0x3A6:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x290) + 0x618i64);
                v21 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v10 + 0x2B0) + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x668) + 0x390i64) >> 4));
                break;
            case 0x3A7:
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6D0) + 0x6B0i64) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0x378i64) + 0x638i64) & 0xA1)) + 0x1A0i64) + 0x118i64));
                break;
            case 0x3A8:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x390);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1A0) + 0x6C8i64);
                v21 += FuckEnc::CacheRead<_DWORD>(v10 + 0x118);
                break;
            case 0x3A9:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0);
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 0x690) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1E8) + 0xA0i64) + 0x590i64) + 4i64 * (v5 & 0x4D)));
                break;
            case 0x3AA:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x430) + 0x6E8i64, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xF8) + 0x1A0i64));
                break;
            case 0x3AB:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x168);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x228) + 8i64 * (~(_BYTE)v5 & 0x42)) + 0x48i64) + 8i64 * ((unsigned __int8)v5 ^ 0x37u)) + 0x6C0i64);
                v21 += FuckEnc::CacheRead<_DWORD>(v10 + 0x400);
                break;
            case 0x3AC:
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x480) + 0x20i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x578) + 0x3A8i64));
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x620);
                break;
            case 0x3AD:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4D0) + 0x330i64) + 0x578i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x280) + 8i64 * (__ROL4__(v5, 9) & 0xB1), &v21, v5, v4);
                break;
            case 0x3AE:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2D8) + 8i64 * ((0xE1 * (_BYTE)v5) & 0x20)) + 0x228i64) + 8i64 * ((unsigned __int8)v5 ^ 0x90u)) + 0x460i64) + 8i64 * ((unsigned __int8)v5 & 0x9E)) + 0x448i64) + 4i64 * ((unsigned __int8)v5 ^ 0xCDu)) ^ v11;
                break;
            case 0x3AF:
                Calls::FastCall(v4 + 0x160, &v21, v5, v4);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x540) + 2 * v5;
                break;
            case 0x3B0:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x378);
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x148) + 0x740i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x420) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x12)) + 0x598i64));
                break;
            case 0x3B1:
                v21 = (FuckEnc::CacheRead<_DWORD>(v4 + 0x100) ^ v11) - 0x495DBFC6;
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x118) >> 1;
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2F0) + 0x768i64);
                break;
            case 0x3B2:
                v21 = v11 + 0x1B68FBFF * (FuckEnc::CacheRead<_DWORD>(v4 + 0x5F8) | 0x13);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x568) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x14)) + 0x400i64);
                break;
            case 0x3B3:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x1A0) + 0x420i64) + 8i64 * (v5 & 0x46)) + 0x1F0i64);
                v21 = FuckEnc::CacheRead<_DWORD>(v10 + 0x168) ^ v11;
                v21 = __ROR4__(__ROL4__(v21, FuckEnc::CacheRead<_DWORD>(v4 + 0x540)), v5);
                break;
            case 0x3B4:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x480);
                v21 = -(v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x5F8)) - 0x5EA95FE;
                Calls::FastCall(v4 + 0x258, &v21, v5, v4);
                break;
            case 0x3B5:
                v21 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0) ^ 0x3456DA0D) * ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x60) + 0x690i64) & 0xFFFFFFF0);
                break;
            case 0x3B6:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x248) * ((unsigned int)0x11EA7C25 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x220));
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x768) >> 0x15;
                break;
            case 0x3B7:
                v21 = v11 ^ 0xBD8B4A3B;
                v21 = v11 ^ 0xBD8B4A3B ^ (v5 + (FuckEnc::CacheRead<_DWORD>(v4 + 0x4F0) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0) & 0xFFFFFFE5)) & 0xFFFFFFFB;
                break;
            case 0x3B8:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x760) + 0x430i64) + 0x240i64);
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x1C0) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x220) & 0xFFFFFFEF);
                break;
            case 0x3B9:
                v21 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x638));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1A8);
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x148) + 0x48i64) + 8i64 * ((unsigned __int8)v5 ^ 0x5Cu)) + 0x740i64);
                break;
            case 0x3BA:
                Calls::FastCall(v4 + 0x4E8, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B8) + 8i64 * ((9 * (unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 0x450)) & 0x43)) + 0x388i64));
                break;
            case 0x3BB:
                v21 = __ROL4__(v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x100), 0xE2);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA0) + 0xE0i64) + 8i64 * ((unsigned __int8)(0xFE * v5) & 0xE1)) + 0x118i64) ^ v5;
                break;
            case 0x3BC:
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x768));
                v21 -= FuckEnc::CacheRead<_DWORD>(v4 + 0x620) ^ v5;
                v21 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE8) + 0x168i64);
                break;
            case 0x3BD:
                v21 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 0x100));
                v21 += ~(FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0) & 0xFFFFFFEE);
                break;
            case 0x3BE:
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x440) + 0x4D8i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x750) + 0x768i64));
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x598);
                break;
            case 0x3BF:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4B8) + 8i64 * (((unsigned __int8)v5 ^ 0x18) & 0x7B)) + 0xA8i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x770) + 8i64 * (unsigned __int8)(0xB7 * v5), &v21, v5, v4);
                break;
            case 0x3C0:
                v21 = v5 + (v11 ^ 0x2431D289);
                v19 = FuckEnc::CacheRead<_QWORD>(v4 + 0x88);
                v20 = (unsigned __int8)(0x33 * v5);
                goto LABEL_967;
            case 0x3C1:
                v21 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA0) + 0x4F0i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x420) + 8i64 * (((unsigned __int8)v5 ^ 8) & 0x18)) + 0x728i64) + 4i64 * (unsigned __int8)(0xFD * FuckEnc::CacheRead<_BYTE>(v4 + 0x5F8))));
                break;
            case 0x3C2:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C0) + 0xA8i64) + 0x240i64);
                Calls::FastCall(v4 + 0x500, &v21, v5, v10);
                break;
            case 0x3C3:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA8) + 0x1A0i64);
                Calls::FastCall(v4 + 0x3B8, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x228) + 8i64 * ((unsigned __int8)(0x53 * v5) & 0xA2)));
                break;
            case 0x3C4:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x568) + 8i64 * ((unsigned __int8)v5 ^ 0xFDu)) + 0xE0i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 7)) + 0x748i64) + 8i64 * ((unsigned __int8)v5 ^ 0xB7u)) + 0x688i64);
                break;
            case 0x3C5:
                v21 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x450) ^ v5);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6C8);
                v21 += FuckEnc::CacheRead<_DWORD>(v10 + 0x260);
                break;
            case 0x3C6:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE8) + 0x658i64) + 8i64 * FuckEnc::CacheRead<unsigned __int8>(FuckEnc::CacheRead<_QWORD>(v4 + 0x3D8) + 0x168i64), &v21, v5, v4);
                break;
            case 0x3C7:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x578) + 0x420i64) + 8i64 * ((unsigned __int8)v5 & 0xAC)) + 0xA8i64) + 0x318i64) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0) & 0x65)) + 0x780i64);
                break;
            case 0x3C8:
                v21 = v11 ^ 0x2A994CCB;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 8i64 * (unsigned __int8)(6 * v5)) + 0x678i64, &v21, v5, v4);
                break;
            case 0x3C9:
                v21 = (v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 8i64 * (v5 & 0x3F)) + 0x220i64)) ^ 0xB15125DC;
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x60) + 0x78i64);
                break;
            case 0x3CA:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x4F0);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4D0);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 0x4F8) + 8i64 * (unsigned __int8)__ROL4__(v5, 5), &v21, v5, v4);
                break;
            case 0x3CB:
                v21 = (v11 ^ 0xD49C8DC9) - v5;
                v21 = __ROR4__(v21, FuckEnc::CacheRead<_DWORD>(v4 + 0x2B0));
                v21 = __ROL4__(v21, ~FuckEnc::CacheRead<_BYTE>(v4 + 0x2B0)) - v5;
                break;
            case 0x3CC:
                v21 = __ROR4__(v11, 0x31);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4D0) + 0x690i64) ^ (0xEFC0D0FF * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x618) + 0x6E0i64));
                break;
            case 0x3CD:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6C8) + 0x190i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x18)) + 0x420i64) + 8i64 * (unsigned __int8)(0xBF * v5)) + 0x230i64);
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x728) + 4i64 * (v5 & 0x6C));
                break;
            case 0x3CE:
                v21 = __ROR4__(v11, 0x70 * FuckEnc::CacheRead<_BYTE>(v4 + 0x638));
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x370) + 8i64 * (__ROL4__(v5, 0xD) & 0x38)) + 0x1D0i64) + 8i64 * ((unsigned __int8)__ROR4__(v5, 9) & 0xD7)) + 0x248i64);
                break;
            case 0x3CF:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x118) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x618);
                v21 = __ROR4__(v21, FuckEnc::CacheRead<_BYTE>(v10 + 0x4B0));
                break;
            case 0x3D0:
                v21 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x388) + 0x78i64) * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x88) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x78) & 0xDF)) + 0x448i64) + 4i64 * (unsigned __int8)(0xFE * v5)));
                break;
            case 0x3D1:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x78) ^ v11;
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x440) + 0xE8i64) + 0x668i64) + 0x440i64) + 0x668i64) + 0x168i64);
                break;
            case 0x3D2:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x220) ^ v11;
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xA0) + 0x440i64) + 0x1D0i64) + 8i64 * (__ROR4__(v5, 4) & 0xC)) + 0x4D8i64);
                break;
            case 0x3D3:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x2E8) + 0x240i64);
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x208) + 4i64 * ((unsigned __int8)(0xCA * FuckEnc::CacheRead<_BYTE>(v4 + 0x20)) & 0xE8)) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x70) + 4i64 * (v5 & 0x3E));
                break;
            case 0x3D4:
                v21 = (v11 ^ (0xBCFB530E * FuckEnc::CacheRead<_DWORD>(v4 + 0xD8))) + 0x52F000D;
                v21 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x608) + 0x2F8i64) + 0x5F8i64);
                break;
            case 0x3D5:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8);
                v21 += (v5 * ~FuckEnc::CacheRead<_DWORD>(v10 + 0x740)) >> 0x16;
                break;
            case 0x3D6:
                v20 = v5 & 0x75;
                v19 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x608) + 0x190i64);
            LABEL_967:
                Calls::FastCall(v4 + 0x160, &v21, v5, FuckEnc::CacheRead<_QWORD>(v19 + 8 * v20));
                break;
            case 0x3D7:
                v21 = v11 + 0x5BA781E7;
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4D0) + 0x308i64) ^ (v11 + 0x5BA781E7);
                v21 = __ROR4__(v21, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x420) + 8i64 * (unsigned __int8)__ROR4__(v5, 0x11)) + 0x168i64));
                break;
            case 0x3D8:
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 0x618) + 0x4F0i64) * (FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x190) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x220) & 0xB7)) + 0x590i64) + 4i64 * (v5 & 0x79)) | 0x1E));
                break;
            case 0x3D9:
                v21 = v11 - 0x6C8B522C;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0xE8);
                v21 = __ROR4__(v11 - 0x6C8B522C, FuckEnc::CacheRead<_BYTE>(v10 + 0x598) ^ 0x5D);
                v21 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x388) + 0x390i64);
                break;
            case 0x3DA:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x4F0);
                Calls::FastCall(v4 + 0x160, &v21, v5, v4);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x170) << 0x1E;
                break;
            case 0x3DB:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6C8);
                v21 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x768) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x760) + 0x450i64));
                v21 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x760) + 0x4B0i64);
                break;
            case 0x3DC:
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x608) + 0xE8i64) + 0x3A8i64) ^ v5);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x480);
                v21 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x170) | 0xE;
                break;
            case 0x3DD:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x620) ^ v11;
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x388) + 0x2D8i64) + 8i64 * (unsigned __int8)(0x31 * v5)) + 0x168i64);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x740);
                break;
            case 0x3DE:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x750) + 0x440i64) + 0x1C0i64) ^ v11;
                v10 = FuckEnc::CacheReadPlural<_QWORD>(v4 + 0x1A8);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x620) * v5;
                break;
            case 0x3DF:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4C0);
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x5E0) + 4i64 * (unsigned __int8)(0xAE * v5));
                v21 += FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8) ^ (0x8DE8F5E2 * FuckEnc::CacheRead<_DWORD>(v4 + 0x170));
                break;
            case 0x3E0:
                v21 = v11 + 0x4E9411E;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x668) + 0x280i64) + 8i64 * (unsigned __int8)(3 * v5), &v21, v5, v4);
                break;
            case 0x3E1:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x148) + 0x2E8i64);
                v21 = v11 + 1 + FuckEnc::CacheRead<_DWORD>(v10 + 0x540);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x260) * v5;
                break;
            case 0x3E2:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2E8);
                v21 = v11 ^ ((FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) ^ 0xEC1214C6) * (FuckEnc::CacheRead<_DWORD>(v10 + 0x2B8) ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x1C0) ^ 0x1770129B));
                break;
            case 0x3E3:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x440);
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x600) + 8i64 * (unsigned __int8)(0xFE * v5)) + 0x540i64) * ~FuckEnc::CacheRead<_DWORD>(v4 + 0x768);
                break;
            case 0x3E4:
                v21 = (FuckEnc::CacheRead<_DWORD>(v4 + 0x768) ^ v11) - v5 + 0x49FF0029;
                v21 -= 0x7B80CBF * FuckEnc::CacheRead<_DWORD>(v4 + 0x368);
                break;
            case 0x3E5:
                v21 = v5 ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x480);
                v21 = (v5 ^ v11) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x88) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x3F8) & 1)) + 0x70i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 0x15));
                break;
            case 0x3E6:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x690);
                Calls::FastCall(v4 + 0x3F0, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x370) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1C)) + 0x290i64));
                break;
            case 0x3E7:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0xD8) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x478);
                Calls::FastCall(v4 + 0x680, &v21, v5, v10);
                break;
            case 0x3E8:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x668) + 0x750i64) + 0x6C8i64) + 0x580i64);
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x220) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0xE8) + 0x540i64);
                break;
            case 0x3E9:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0xD8) ^ v11;
                v21 += v5 + FuckEnc::CacheRead<_DWORD>(v4 + 0x5F8) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x438) + 0x688i64) + 1;
                break;
            case 0x3EA:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x588) + 0x2D8i64) + 8i64 * (unsigned __int8)(0xD9 * v5)) + 0x28i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x20i64) + 0x582E00BF;
                break;
            case 0x3EB:
                v21 = v11 - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x290);
                v21 = v11 - v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x338) + 0x1D0i64) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x620), 0x13)) + 0xD8i64);
                break;
            case 0x3EC:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x220) ^ v11;
                v21 = (v21 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 0x4D8i64)) ^ 0x70788738;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x230);
                v21 += FuckEnc::CacheRead<_DWORD>(v10 + 0x688);
                break;
            case 0x3ED:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x768) + 0x3CE74F74;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1A8);
                v21 = (v21 + FuckEnc::CacheRead<_DWORD>(v10 + 0x4B0) * FuckEnc::CacheRead<_DWORD>(v4 + 0x4F0)) ^ 0x1A348864;
                break;
            case 0x3EE:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6C8) + 0x5E0i64) + 4i64 * (unsigned __int8)(0x79 * v5));
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x598);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x2F0);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v10 + 0x3F8);
                break;
            case 0x3EF:
                v21 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 0x638) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x4D0) + 0x20i64) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x338) + 0x768i64);
                break;
            case 0x3F0:
                Calls::FastCall(v4 + 0x6E8, &v21, v5, v4);
                v21 += 0xF2421646 - (FuckEnc::CacheRead<_DWORD>(v4 + 0x168) >> 0x1D);
                break;
            case 0x3F1:
                v21 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 0x4D8));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x430) + 0x6B0i64) + 8i64 * ((unsigned __int8)v5 & 0xCA)) + 0x760i64);
                v21 += FuckEnc::CacheRead<_DWORD>(v10 + 0x740);
                break;
            case 0x3F2:
                v21 = (unsigned int)0x114E57FE ^ (v11 + ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x208) + 4i64 * ((unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 0x3A8), 0x11) & 0x8C)) * ~FuckEnc::CacheRead<_DWORD>(v4 + 0x368)));
                break;
            case 0x3F3:
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 0x638) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x6C0);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 0x430) + 0x40i64, &v21, v5, v10);
                break;
            case 0x3F4:
                Calls::FastCall(v4 + 0x4A8, &v21, v5, v4);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x60) + 0x290i64) + 0x2B0i64);
                break;
            case 0x3F5:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x748) + 8i64 * (v5 & 0x75)) + 0x370i64) + 8i64 * ((unsigned __int8)v5 & 0xD9)) + 0x260i64);
                v21 ^= FuckEnc::CacheRead<_DWORD>(v4 + 0x220) ^ 0x7641C69A;
                break;
            case 0x3F6:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 0x78);
                v21 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x58) + 0x450i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x618);
                v21 -= FuckEnc::CacheRead<_DWORD>(v10 + 0x168);
                break;
            case 0x3F7:
                v21 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x60) + 0x598i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1B0);
                Calls::FastCall(v4 + 0x10, &v21, v5, v10);
                break;
            case 0x3F8:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x578) + 0x148i64);
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 0x450);
                Calls::FastCall(v4 + 0x160, &v21, v5, v4);
                break;
            case 0x3F9:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x4D0);
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x1E8) + 0x118i64), 0xA)) + 0x548i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 0x690) | 0xB);
                break;
            case 0x3FA:
                v21 = v11 ^ (v5 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x638) - 0x154FA795));
                v21 ^= (FuckEnc::CacheRead<_DWORD>(v4 + 0x368) >> 3) - 0x1474E292;
                break;
            case 0x3FB:
                v21 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x460) + 8i64 * (v5 & 0x79)) + 0x228i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 6)) + 0x438i64) + 0x498i64) + 4i64 * (__ROL4__(v5, 0x11) & 0x11));
                break;
            case 0x3FC:
                v21 = __ROL4__(v11, ~(FuckEnc::CacheRead<_BYTE>(v4 + 0x3F8) + FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x6B0) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x308) & 0x13)) + 0x1B8i64) + 4i64 * (unsigned __int8)(0xBC * v5)))) ^ 0xF6D1FF41;
                break;
            case 0x3FD:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x5C8) + 0x770i64) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 0x620) & 0x8C), &v21, v5, v4);
                break;
            case 0x3FE:
                Calls::FastCall(v4 + 0x630, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x48) + 8i64 * ((unsigned __int8)v5 ^ 0xA4u)) + 0xA0i64));
                break;
            case 0x3FF:
                v21 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 0x100);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 0x1F0);
                Calls::FastCall(v4 + 0x2A8, &v21, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 0x1D0) + 8i64 * (unsigned __int8)__ROL4__(v5, 0x1F)));
                break;
            }
            v6 += 4;
            *a2 = v21;
            v5 += a4;
            ++a2;
            v4 = v10;
        } while (v6 + 3 < a3);
    }
}
