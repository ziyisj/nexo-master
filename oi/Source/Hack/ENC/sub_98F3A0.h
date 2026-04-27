#pragma once

#include <Hack/FuckEnc.h>
#include <Hack/ENC/Calls.h>
#include <IDA/ida_defs.h>

void __fastcall sub_98F3A0(__int64 a1, unsigned int* a2, unsigned int a3, int a4)
{
    __int64 v4;      // rbx
    unsigned int v5; // edi
    int v6;          // r13d
    __int64 v10;     // rsi
    __int64 v11;     // r10
    int v12;         // r10d
    __int64 v13;     // r9
    int v14;         // edx
    int v15;         // ecx
    __int64 v16;     // r8
    __int64 v17;     // r9
    __int64 v18;     // rcx
    __int64 v19;     // r8
    int v20;         // r10d
    __int64 v21;     // rax
    __int64 v22;     // r8
    int v23;         // [rsp+60h] [rbp+40h] BYREF

    v4 = a1;
    v5 = a4 ^ 0xF6B43619;
    v6 = 0;
    v10 = a1;
    if (a3 > 3)
    {
        do
        {
            v11 = *a2;
            v23 = *a2;
            switch (((unsigned __int16)(a4 + v6) ^ 0xD8) & 0x3FF)
            {
            case 0:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 8i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 1440), 1) & 0xA2)) + 1176i64, &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 184));
                break;
            case 1:
                v23 = v11 - v5;
                Calls::FastCall(v4 + 1904, &v23, v5, v4);
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 312) ^ 0x9F990C5D;
                break;
            case 2:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * (unsigned __int8)(31 * v5)) + 464i64) + 8i64 * (((unsigned __int8)v5 ^ 0xD7) & 0xE9), &v23, v5, v4);
                break;
            case 3:
                v23 = __ROR4__(v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1104) + 640i64) + 1) * ((FuckEnc::CacheRead<_DWORD>(v4 + 1696) - 771800634) ^ 0x5F4E46A2), 242);
                break;
            case 4:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 928) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1736) + 1840i64, &v23, v5, v4);
                break;
            case 5:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1152) + 1384i64) + 8i64 * (((unsigned __int8)v5 ^ 0xE5) & 0x3A), &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 776));
                break;
            case 6:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 840) + 1048i64);
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 8i64 * ((unsigned __int8)v5 & 0x92)) + 1208i64) + 4i64 * ((unsigned __int8)v5 ^ 0x30u)) - FuckEnc::CacheRead<_DWORD>(v10 + 128);
                break;
            case 7:
                v23 = v11 + 1448197007;
                v23 = v11 + 1448197007 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1152) + 640i64) - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 824);
                v23 -= FuckEnc::CacheRead<_DWORD>(v10 + 1240);
                break;
            case 8:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 112);
                Calls::FastCall(v10 + 8, &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 776));
                v23 += 1039260419;
                break;
            case 9:
                Calls::FastCall(v4 + 1960, &v23, v5, v4);
                v23 = v23 - 1582639994 + FuckEnc::CacheRead<_DWORD>(v4 + 760);
                break;
            case 0xA:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1496);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 280) + 8i64 * ((unsigned __int8)v5 & 0xD9)) + 1632i64, &v23, v5, v4);
                break;
            case 0xB:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 424);
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 1368) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1048) + 472i64) + 4i64 * ((unsigned __int8)(-3 * FuckEnc::CacheRead<_BYTE>(v4 + 1952)) ^ 0x56u)));
                break;
            case 0xC:
                v23 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1480) + 584i64) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1112) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 88) + 1112i64));
                break;
            case 0xD:
                v23 = v11 ^ ((FuckEnc::CacheRead<_DWORD>(v4 + 1112) ^ v5) & 0xFFFFFFE8 | 0x12);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 608) + 8i64 * (v5 & 0x7D)) + 1440i64);
                break;
            case 0xE:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 912);
                Calls::FastCall(v4 + 848, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * (unsigned __int8)__ROL4__(v5, 6)));
                break;
            case 0xF:
                v23 = v11 ^ 0x8C35745A;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * ((unsigned __int8)v5 & 0xDB)) + 1480i64) + 768i64);
                v23 = FuckEnc::CacheRead<_DWORD>(v10 + 1040) ^ v11 ^ 0x8C35745A;
                break;
            case 0x10:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 120) + 1936i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 19)) + 1784i64) + 4i64 * ((unsigned __int8)v5 & 0x86));
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 712) ^ v5;
                break;
            case 0x11:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1744);
                Calls::FastCall(v4 + 264, &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1704));
                break;
            case 0x12:
                v23 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 1896) | 2) - 666636406;
                v23 = __ROR4__(v23, FuckEnc::CacheRead<_BYTE>(v4 + 1240) & 0xF8);
                break;
            case 0x13:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 8i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 104), 3) & 0x52)) + 1048i64);
                Calls::FastCall(v10 + 216, &v23, v5, v4);
                break;
            case 0x14:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1432);
                v23 = FuckEnc::CacheRead<_DWORD>(v10 + 432) ^ v11;
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 128) ^ FuckEnc::CacheRead<_DWORD>(v4 + 312) ^ 0x5E88D0FF;
                break;
            case 0x15:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 56);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 368) + 1264i64) + 8i64 * (unsigned __int8)(31 * v5)) + 768i64);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1440) | 0x1C;
                break;
            case 0x16:
                v23 = v11 + ~FuckEnc::CacheRead<_DWORD>(v4 + 1952);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 712) ^ 0x4C619187;
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 760);
                break;
            case 0x17:
                v23 = __ROL4__(v11 - 239747319, 71);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1168) + 776i64) + 776i64);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 768) + 1624i64);
                break;
            case 0x18:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 272) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1048) + 256i64);
                v23 -= 97582992 * FuckEnc::CacheRead<_DWORD>(v4 + 1416);
                break;
            case 0x19:
                Calls::FastCall(v4 + 200, &v23, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 512) + 1760i64);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1440);
                break;
            case 0x1A:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1768);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 384) ^ 3u)) + 96i64) + 56i64);
                break;
            case 0x1B:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1912) ^ v11 ^ 0x802F005C;
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 496) + 1536i64) + 4i64 * ((unsigned __int8)v5 & 0xD6));
                break;
            case 0x1C:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 640);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 368);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1760) + 1048i64) + 472i64) + 4i64 * (unsigned __int8)(99 * v5)) ^ 0xEA7C7D03;
                break;
            case 0x1D:
                v23 = v11 - 2057268622;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1752);
                v23 = v11 - 2057268622 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 96) + 1096i64) + 1296i64) - FuckEnc::CacheRead<_DWORD>(v10 + 256);
                break;
            case 0x1E:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 600) + 1;
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 824) + 1608i64) + 8i64 * ((unsigned __int8)v5 ^ 0x60u)) + 880i64) + 4i64 * ((unsigned __int8)(-41 * v5) & 0xE4));
                break;
            case 0x1F:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 128);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1808);
                Calls::FastCall(v10 + 1640, &v23, v5, v4);
                break;
            case 0x20:
                v23 = v11 - v5;
                v23 = ~(v11 - v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1704) + 1744i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1808);
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_DWORD>(v10 + 600));
                break;
            case 0x21:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 768);
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1496) + 432i64) - FuckEnc::CacheRead<_DWORD>(v10 + 1440);
                v23 += 1251251937 * FuckEnc::CacheRead<_DWORD>(v4 + 312);
                break;
            case 0x22:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 600);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1480);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(v10 + 296) + 784i64) & 0xFFFFFFE0 | 0x14;
                break;
            case 0x23:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1736) + 1168i64) + 776i64) + 824i64) + 1432i64) + 1168i64);
                v23 = FuckEnc::CacheRead<_DWORD>(v10 + 1696) ^ v11;
                break;
            case 0x24:
                v23 = ~(v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 416) + 144i64) + 4i64 * (__ROL4__(v5, 9) & 0x1F)));
                v23 = (v23 - FuckEnc::CacheRead<_DWORD>(v4 + 456)) ^ 0xA7CD4030;
                break;
            case 0x25:
                v23 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 8i64 * (unsigned __int8)(-84 * FuckEnc::CacheRead<_BYTE>(v4 + 1768))) + 1744i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 720) + 1272i64) + 8i64 * ((unsigned __int8)__ROR4__(v5, 11) & 0xCC)) + 928i64));
                break;
            case 0x26:
                v23 = v11 - 585071543;
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 88) + 1864i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 25)) + v11 - 585071543 + 1;
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 1952);
                break;
            case 0x27:
                v23 = ~(v11 ^ 0xDA0C49D4);
                v23 = __ROL4__(v23, v5 ^ FuckEnc::CacheRead<_BYTE>(v4 + 104) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 368) + 600i64));
                break;
            case 0x28:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 104);
                v23 += 1023309500 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * (v5 & 0x4A)) + 936i64) + 8i64 * (unsigned __int8)(71 * v5)) + 712i64);
                break;
            case 0x29:
                v23 = v11 ^ 0x5B4FDEB1;
                v23 = v11 ^ 0x5B4FDEB1 ^ (5951742 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 8i64 * (v5 & 0x33)) + 1896i64) * v5);
                break;
            case 0x2A:
                v23 = v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 8i64 * ((unsigned __int8)v5 & 0xE6)) + 456i64);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1728) + 600i64);
                break;
            case 0x2B:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 928i64);
                v23 = __ROR4__(v23, FuckEnc::CacheRead<_BYTE>(v4 + 456) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 8i64 * (unsigned __int8)__ROL4__(v5, 23)) + 1896i64));
                break;
            case 0x2C:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 752) + 744i64);
                v23 = v11 + (FuckEnc::CacheRead<_DWORD>(v10 + 432) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 224i64) + 4i64 * ((unsigned __int8)v5 ^ 0x68u)));
                break;
            case 0x2D:
                v23 = v5 ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 8i64 * ((unsigned __int8)v5 ^ 0xB6u)) + 392i64) + 768i64) + 1760i64);
                v23 = (v5 ^ v11) - FuckEnc::CacheRead<_DWORD>(v10 + 712);
                break;
            case 0x2E:
                v23 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 720) + 712i64) ^ 0xCC8B3788);
                v23 ^= ~(FuckEnc::CacheRead<_DWORD>(v4 + 760) ^ 0x8B7BB703);
                break;
            case 0x2F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 392);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 960) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 928) ^ 0x17u), &v23, v5, v4);
                break;
            case 0x30:
                v23 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1592) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 928) ^ 2) & 0x1A)) + 1376i64) + 56i64) ^ (691916455 * FuckEnc::CacheRead<_DWORD>(v4 + 1240));
                break;
            case 0x31:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 968);
                Calls::FastCall(v4 + 216, &v23, v5, v4);
                v23 += ~FuckEnc::CacheRead<_DWORD>(v4 + 456);
                break;
            case 0x32:
                v23 = __ROL4__(v11, 229);
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 760) | 0x12;
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * (unsigned __int8)(104 * v5)) + 784i64);
                break;
            case 0x33:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1440);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1352);
                Calls::FastCall(v4 + 520, &v23, v5, v10);
                v23 += 1111289551;
                break;
            case 0x34:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 8i64 * ((unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 1368), 14) & 0x8F)) + 424i64);
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 968) * (FuckEnc::CacheRead<_DWORD>(v4 + 1256) - 1023309500));
                break;
            case 0x35:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1952) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 424) + 64i64);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 296) + 8i64 * (unsigned __int8)(60 * v5)) + 1040i64);
                break;
            case 0x36:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 912) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1704) + 1080i64);
                Calls::FastCall(v10 + 1312, &v23, v5, v4);
                break;
            case 0x37:
                v23 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1920) + 8i64 * ((unsigned __int8)v5 & 0xCA)) + 1768i64) ^ (v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 712i64))) + 1;
                break;
            case 0x38:
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(v4 + 1600) + 744i64) + 552i64) + 4i64 * (unsigned __int8)(-109 * v5)) ^ v11;
                break;
            case 0x39:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1264) + 8i64 * ((unsigned __int8)v5 & 0xD3)) + 720i64) + 1080i64) + 944i64) + 8i64 * ((unsigned __int8)v5 & 0x96)) + 840i64) + 384i64);
                break;
            case 0x3A:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 928) ^ v11;
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 8i64 * (unsigned __int8)(50 * FuckEnc::CacheRead<_BYTE>(v4 + 56))) + 296i64) + 8i64 * ((unsigned __int8)v5 & 0xBE)) + 1048i64) + 128i64);
                break;
            case 0x3B:
                v23 = (FuckEnc::CacheRead<_DWORD>(v4 + 1240) ^ v11) - 747644663;
                v23 = (v23 - FuckEnc::CacheRead<_DWORD>(v4 + 312)) ^ 0x497A9B5B;
                v23 ^= v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 104);
                break;
            case 0x3C:
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 184) + 1368i64));
                v23 += ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1704) + 1416i64) * v5);
                break;
            case 0x3D:
                v23 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 120) + 1256i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 8i64 * (((unsigned __int8)v5 ^ 0xFB) & 0xFC)) + 752i64) + 784i64);
                break;
            case 0x3E:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1704) + 696i64) + 1152i64) + 64i64);
                Calls::FastCall(v4 + 1184, &v23, v5, v10);
                break;
            case 0x3F:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 784) ^ v11;
                Calls::FastCall(v4 + 544, &v23, v5, v4);
                v23 ^= ~FuckEnc::CacheRead<_DWORD>(v4 + 1088);
                break;
            case 0x40:
                Calls::FastCall(v4 + 920, &v23, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 112);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v10 + 256) * v5;
                break;
            case 0x41:
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1152) + 1256i64) * ~FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1080) + 608i64) + 8i64 * ((unsigned __int8)v5 ^ 0xB0u)) + 600i64));
                break;
            case 0x42:
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 824) + 584i64) ^ v11;
                Calls::FastCall(v4 + 1312, &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 744));
                break;
            case 0x43:
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 8i64 * ((FuckEnc::CacheRead<_DWORD>(v4 + 384) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1408) + 1352i64) + 272i64)) & 0x79)) + 1128i64) + 4i64 * ((unsigned __int8)v5 & 0xF9)) ^ v11;
                break;
            case 0x44:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1424);
                v23 = v11 + (FuckEnc::CacheRead<_DWORD>(v10 + 1912) ^ 0x34357618);
                Calls::FastCall(v4 + 656, &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1496));
                break;
            case 0x45:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1736) + 1544i64, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1048) + 1072i64));
                break;
            case 0x46:
                v23 = v11 ^ 0x5117A4DC;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 120);
                Calls::FastCall(v10 + 1544, &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1704));
                break;
            case 0x47:
                v23 = __ROL4__(v11, (FuckEnc::CacheRead<_BYTE>(v4 + 128) * (FuckEnc::CacheRead<_BYTE>(v4 + 1296) + (_DWORD)0x747FD07 + 2 + FuckEnc::CacheRead<_DWORD>(v4 + 1744))) ^ 0xE9);
                break;
            case 0x48:
                v23 = v11 ^ 0x33793A21;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 120) + 720i64);
                Calls::FastCall(v4 + 1832, &v23, v5, v10);
                break;
            case 0x49:
                v23 = v11 + 1544740887;
                v23 = __ROR4__(v11 + 1544740887, FuckEnc::CacheRead<_DWORD>(v4 + 912));
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 608) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1256) ^ 0x99u)) + 824i64) + 1112i64);
                break;
            case 0x4A:
                Calls::FastCall(v4 + 1176, &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 88));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 440);
                v23 -= FuckEnc::CacheRead<_DWORD>(v10 + 1696);
                break;
            case 0x4B:
                v23 = v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1408) + 640i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * ((-8 * (_BYTE)v5) & 0x20)) + 424i64);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1896);
                break;
            case 0x4C:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1824);
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v10 + 1456) + 4i64 * (unsigned __int8)__ROR4__(v5, 26)) + ~FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1704) + 224i64) + 4i64 * ((unsigned __int8)v5 & 0xB0)));
                break;
            case 0x4D:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 600);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 1088), 11)) + 288i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 10)) + 1784i64) + 4i64 * ((unsigned __int8)v5 ^ 0x7Cu));
                break;
            case 0x4E:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1896) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 96) + 1648i64, &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 512));
                break;
            case 0x4F:
                v23 = v11 - 451311838;
                Calls::FastCall(v4 + 1640, &v23, v5, v4);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 784);
                break;
            case 0x50:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 912) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1104);
                v23 -= FuckEnc::CacheRead<_DWORD>(v10 + 968) ^ ~(-86603419 * FuckEnc::CacheRead<_DWORD>(v4 + 968));
                break;
            case 0x51:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 496);
                Calls::FastCall(v10 + 544, &v23, v5, v4);
                v23 ^= v5 ^ 0xB23C51DE;
                break;
            case 0x52:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 760);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 496) + 392i64) + 1864i64) + 4i64 * (((unsigned __int8)v5 ^ 0x11) & 0x59));
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 584);
                break;
            case 0x53:
                v23 = v11 - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 280) + 8i64 * ((5 * (unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 912)) & 0x49)) + 40i64);
                v23 = (v11 - v5) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 128) * FuckEnc::CacheRead<_DWORD>(v10 + 600));
                break;
            case 0x54:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 696);
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 448) + 1088i64) + FuckEnc::CacheRead<_DWORD>(v4 + 1088) * FuckEnc::CacheRead<_DWORD>(v10 + 1696));
                break;
            case 0x55:
                v23 = __ROL4__(v11, 65);
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 912);
                Calls::FastCall(v4 + 192, &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1752));
                break;
            case 0x56:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 784);
                Calls::FastCall(v4 + 216, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1704) + 424i64) + 1096i64));
                break;
            case 0x57:
                v23 = v11 - 213838303 * FuckEnc::CacheRead<_DWORD>(v4 + 1584);
                v23 = v23 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 8i64 * ((unsigned __int8)(19 * FuckEnc::CacheRead<_BYTE>(v4 + 928)) & 0xC2)) + 1240i64) - FuckEnc::CacheRead<_DWORD>(v4 + 312);
                break;
            case 0x58:
                Calls::FastCall(v4 + 920, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 280) + 8i64 * (__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 712), 9) & 0x2E)) + 368i64));
                break;
            case 0x59:
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1824) + 760i64));
                v23 ^= -512917276 * FuckEnc::CacheRead<_DWORD>(v4 + 1952);
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 760);
                break;
            case 0x5A:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 608) + 8i64 * ((unsigned __int8)(-2 * v5) & 0x80)) + 752i64) + 496i64);
                Calls::FastCall(v4 + 200, &v23, v5, v10);
                break;
            case 0x5B:
                Calls::FastCall(v4 + 872, &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1704));
                v23 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 64) + 1368i64);
                break;
            case 0x5C:
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 928));
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 720) + 1080i64) + 744i64) + 608i64) + 8i64 * (v5 & 0xB)) + 1440i64);
                break;
            case 0x5D:
                v23 = v11 ^ ~(901429744 * FuckEnc::CacheRead<_DWORD>(v4 + 1952));
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 280) + 8i64 * ((unsigned __int8)v5 & 0x9B)) + 1784i64) + 4i64 * ((unsigned __int8)v5 & 0xBF));
                break;
            case 0x5E:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 128);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 720) + 1376i64) + 1952i64);
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 712) + v23 - 473759439;
                break;
            case 0x5F:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 496) + 1376i64);
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1240);
                v23 += (FuckEnc::CacheRead<_DWORD>(v4 + 312) << 10) + 1;
                break;
            case 0x60:
                v23 = ~(_DWORD)v11;
                v23 = ~(_DWORD)v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1912);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1808) + 1280i64) + 8i64 * ((unsigned __int8)__ROR4__(v5, 13) & 0xA7)) + 1296i64);
                break;
            case 0x61:
                v23 = v11 + 1897212360;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 8i64 * (((unsigned __int8)v5 ^ 0x78) & 0xF8)) + 1048i64) + 168i64);
                v23 = v11 + 1897212360 - FuckEnc::CacheRead<_DWORD>(v10 + 1240) - v5;
                break;
            case 0x62:
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 1744) + (FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 936) + 8i64 * (unsigned __int8)(3 * FuckEnc::CacheRead<_DWORD>(v4 + 104))) + 1048i64) + 640i64) ^ 0x28));
                break;
            case 0x63:
                v23 = ~(v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 456) >> 14));
                v23 = __ROR4__(v23, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1080) + 1128i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 22)));
                break;
            case 0x64:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 824) + 1960i64, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1920) + 8i64 * ((unsigned __int8)v5 ^ 0x7Eu)));
                break;
            case 0x65:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 384);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 448) + 1040i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1400);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1536) + 4i64 * (((unsigned __int8)v5 ^ 4) & 0x17));
                break;
            case 0x66:
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 600));
                v23 = __ROR4__(v23, ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1736) + 912i64));
                v23 = __ROR4__(v23, ~FuckEnc::CacheRead<_BYTE>(v4 + 456));
                break;
            case 0x67:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1240);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 368);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1744) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 256) ^ 0xA1u)) + 432i64);
                break;
            case 0x68:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 448) + 1736i64);
                Calls::FastCall(v4 + 1504, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1376) + 752i64));
                break;
            case 0x69:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1408) + 104i64) - 1201098041;
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 936) + 8i64 * (((unsigned __int8)v5 ^ 0x29) & 0xAD)) + 968i64);
                break;
            case 0x6A:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 8i64 * ((unsigned __int8)v5 & 0x8B)) + 128i64) - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1680);
                v23 = (_DWORD)0xCD95B68 + 2 + (FuckEnc::CacheRead<_DWORD>(v10 + 1568) ^ v23);
                break;
            case 0x6B:
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 456) - 771800626);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 696) + 1936i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 8)) + 1784i64) + 4i64 * (unsigned __int8)(-50 * v5));
                break;
            case 0x6C:
                v23 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 8i64 * (unsigned __int8)__ROR4__(v5 + FuckEnc::CacheRead<_DWORD>(v4 + 1416), 19)) + 720i64) + 1256i64) ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 1952));
                break;
            case 0x6D:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 768);
                v23 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v10 + 1768) & 0x8B)) + 1584i64) | 0x16);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 584);
                break;
            case 0x6E:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 8i64 * ((unsigned __int8)(119 * FuckEnc::CacheRead<_BYTE>(v4 + 1952)) & 0x93)) + 1608i64) + 8i64 * (unsigned __int8)(99 * v5)) + 952i64) + 8i64 * ((unsigned __int8)(28 * v5) & 0xE5)) + 432i64);
                break;
            case 0x6F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 440);
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1352) + 928i64) * ((FuckEnc::CacheRead<_DWORD>(v4 + 1584) - 833519454) & 0xFFFFFFF7));
                break;
            case 0x70:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1072);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 720) + 1184i64, &v23, v5, v10);
                v23 ^= 0xA1AFF449;
                break;
            case 0x71:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1416);
                v23 = __ROR4__(v23, FuckEnc::CacheRead<_BYTE>(v4 + 712) ^ ~FuckEnc::CacheRead<_BYTE>(v4 + 432) & 0xEE ^ 0xD7);
                break;
            case 0x72:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 168) + 1752i64) + 800i64) + 4i64 * (((unsigned __int8)v5 ^ 0xF7) & 0xC8)) & 0x42)) + 776i64);
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 1416);
                break;
            case 0x73:
                v23 = (v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 456) ^ 0x94D4BA79)) ^ 0xC3113111;
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1824) + 1168i64) + 96i64) + 1040i64);
                break;
            case 0x74:
                v23 = v11 + (_DWORD)0x55D291F + 2 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 608) + 8i64 * (((unsigned __int8)v5 ^ 0xDB) & 0xB5)) + 1352i64) + 968i64) << 25);
                break;
            case 0x75:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1072);
                Calls::FastCall(v10 + 1304, &v23, v5, v4);
                v23 = ~v23 ^ 0xCDC30131;
                break;
            case 0x76:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 184);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1448) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1368) & 0xC0), &v23, v5, v10);
                break;
            case 0x77:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 128) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1808) + 304i64) + 8i64 * (v5 & 8), &v23, v5, v4);
                break;
            case 0x78:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1808) + 616i64) + 8i64 * (unsigned __int8)(91 * v5)) + 824i64) + 120i64) + 1096i64);
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 312);
                break;
            case 0x79:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1296);
                v12 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * ((unsigned __int8)__ROR4__(v5, 12) & 0xF6)) + 584i64) ^ v23);
                goto LABEL_125;
            case 0x7A:
                v23 = v5 ^ v11;
                v23 = v5 ^ v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 1624);
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 1088) - v5 + 1;
                break;
            case 0x7B:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1104) + 1496i64);
                v23 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v10 + 600);
                break;
            case 0x7C:
                v23 = ~(_DWORD)v11;
                v23 = ~(_DWORD)v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 8i64 * (((unsigned __int8)~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1296) ^ 0xF2) & 0xAD)) + 1768i64);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 760);
                break;
            case 0x7D:
                Calls::FastCall(v4 + 1528, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1376) + 1920i64) + 8i64 * (unsigned __int8)(-102 * v5)));
                break;
            case 0x7E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 392);
                Calls::FastCall(v4 + 1640, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 608) + 8i64 * (__ROR4__(v5, 26) & 0x44)));
                break;
            case 0x7F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 768);
                v13 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1272) + 8i64 * (unsigned __int8)(-31 * v5));
                goto LABEL_132;
            case 0x80:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 928) ^ 0xBu)) + 1776i64) + 8i64 * (unsigned __int8)(-95 * v5), &v23, v5, v4);
                break;
            case 0x81:
                v23 = v11 + ~FuckEnc::CacheRead<_DWORD>(v4 + 1240);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * (unsigned __int8)__ROR4__(v5, 16)) + 1600i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 29)) + 1568i64);
                break;
            case 0x82:
                v23 = v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 760), 5)) + 1920i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 29)) + 760i64);
                break;
            case 0x83:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1696);
                v12 = v5 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 184) + 768i64) + 1696i64) ^ v23);
            LABEL_125:
                v23 = v12;
                v23 = v12 + FuckEnc::CacheRead<_DWORD>(v4 + 1768);
                break;
            case 0x84:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1728) + 1088i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 744);
                v23 ^= -1133445526 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 720) + 1368i64) ^ 0x3C444F68);
                break;
            case 0x85:
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1168) + 1568i64));
                Calls::FastCall(v4 + 1184, &v23, v5, v4);
                break;
            case 0x86:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 8i64 * ((unsigned __int8)v5 ^ 0xA2u)) + 448i64) + 400i64) + 8i64 * (unsigned __int8)(32 * v5), &v23, v5, v4);
                break;
            case 0x87:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1944) + 8i64 * (unsigned __int8)(119 * ~FuckEnc::CacheRead<_BYTE>(v4 + 784)), &v23, v5, v4);
                break;
            case 0x88:
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 968) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * (unsigned __int8)__ROR4__(v5, 11)) + 640i64));
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1696) | 0x1C;
                break;
            case 0x89:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1736);
                v23 = ~(v11 - FuckEnc::CacheRead<_DWORD>(v10 + 128));
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 128);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1952) | 0x15;
                break;
            case 0x8A:
                v23 = ~(_DWORD)v11;
                v23 = ~(_DWORD)v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 760) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 8i64 * (unsigned __int8)__ROL4__(v5, 28)) + 1256i64) - 1871283681);
                break;
            case 0x8B:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * (unsigned __int8)__ROL4__(v5, 7)) + 1736i64);
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 1256);
                v23 = v23 - FuckEnc::CacheRead<_DWORD>(v4 + 104) - 1337877644;
                break;
            case 0x8C:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1408) + 1680i64);
                v23 = __ROR4__(v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * (__ROR4__(~FuckEnc::CacheRead<_DWORD>(v10 + 272), 18) & 0x5B)) + 256i64), v5);
                break;
            case 0x8D:
                v23 = ~(v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 936) + 8i64 * ((8 * ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 8i64 * ((unsigned __int8)v5 & 0xEA)) + 928i64)) & 0x5B)) + 712i64));
                break;
            case 0x8E:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1896);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 1752i64) + 424i64) + 1104i64);
                v23 += FuckEnc::CacheRead<_DWORD>(v10 + 128);
                break;
            case 0x8F:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 752) + 1904i64, &v23, v5, v4);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 128);
                break;
            case 0x90:
                v23 = v11 + ((1292557026 * FuckEnc::CacheRead<_DWORD>(v4 + 256) + ((v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1432) + 1952i64)) ^ 0x31125575)) ^ 0x583FAB89);
                break;
            case 0x91:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1096);
                v23 = ~(v11 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 584) * v5) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 760) * v5));
                break;
            case 0x92:
                v23 = ~(v11 - 788565710);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 696) + 968i64);
                v23 += ~FuckEnc::CacheRead<_DWORD>(v4 + 640);
                break;
            case 0x93:
                v23 = v5 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 1928i64) + 8i64 * (unsigned __int8)v5) + 1920i64) + 8i64 * (v5 & 0x2D)) + 800i64) + 4i64 * ((unsigned __int8)(-50 * v5) & 0x8D)) ^ v11);
                break;
            case 0x94:
                v23 = v11 + 1320475699;
                //(*(void(__fastcall**)(int*, _QWORD, __int64))v4)(&v23, v5, v4);
                Calls::FastCall(v4, &v23, v5, v4);
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 1368);
                break;
            case 0x95:
                v23 = __ROR4__(v11, 12);
                v23 = __ROL4__(v23, ~FuckEnc::CacheRead<_BYTE>(v4 + 600)) - 809299663;
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 392) + 1568i64);
                break;
            case 0x96:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1168);
                v23 = FuckEnc::CacheRead<_DWORD>(v10 + 1256) ^ v11;
                Calls::FastCall(v4 + 1640, &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 184));
                break;
            case 0x97:
                Calls::FastCall(v4 + 192, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1264) + 8i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 120) + 472i64) + 4i64 * ((unsigned __int8)(-16 * v5) & 0x97)), 19) & 0xDF)));
                break;
            case 0x98:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1104) + 1824i64) + 784i64) + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 936) + 8i64 * (((unsigned __int8)v5 ^ 0x10) & 0x52)) + 784i64);
                break;
            case 0x99:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 768);
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 1744) + FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1408) + 288i64) + 8i64 * ((unsigned __int8)v5 & 0xBA)) + 1400i64) + 432i64));
                break;
            case 0x9A:
                v23 = (unsigned int)0xF2D95F9 + v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 752) + 416i64);
                Calls::FastCall(v4 + 1320, &v23, v5, v10);
                break;
            case 0x9B:
                v23 = __ROL4__(v11, 163) - 1016035105;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1400) + 1304i64, &v23, v5, v4);
                break;
            case 0x9C:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1024);
                Calls::FastCall(v10 + 1904, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 752) + 40i64));
                break;
            case 0x9D:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 8i64 * ((-20 * ((unsigned int)(FuckEnc::CacheRead<_DWORD>(v4 + 272) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1352) + 384i64)) >> 26)) & 0x29)) + 1736i64);
                v23 = FuckEnc::CacheRead<_DWORD>(v10 + 456) ^ v11;
                break;
            case 0x9E:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1416) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1072) + 560i64, &v23, v5, v4);
                break;
            case 0x9F:
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 384) ^ 0x5C);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * (__ROR4__(v5, 28) & 0x32)) + 1152i64) + 1896i64) ^ 0xC31131FB;
                break;
            case 0xA0:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 256) ^ v11;
                v23 = __ROL4__(__ROR4__(v23 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1920) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 776) + 384i64) & 0x9E)) + 1256i64), 100), 75);
                break;
            case 0xA1:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 912);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 64) + 88i64);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 288) + 8i64 * (v5 & 0x19)) + 104i64);
                break;
            case 0xA2:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 8i64 * (unsigned __int8)(91 * FuckEnc::CacheRead<_DWORD>(v4 + 928))) + 1680i64);
                Calls::FastCall(v4 + 320, &v23, v5, v10);
                break;
            case 0xA3:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1256) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 392);
                v23 -= (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1536) + 4i64 * (((unsigned __int8)v5 ^ 0x40) & 0xDC)) ^ 0x91DFFFFF) >> 20;
                break;
            case 0xA4:
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1416)) ^ 0xF43E1FBF;
                v23 = __ROR4__(v23, FuckEnc::CacheRead<_DWORD>(v4 + 1240));
                v23 ^= (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 432)) << 29;
                break;
            case 0xA5:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * ((unsigned __int8)v5 ^ 0xF2u)) + 496i64) + 1424i64) + 1024i64) + 1152i64);
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 1568);
                break;
            case 0xA6:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1168);
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 56) * FuckEnc::CacheRead<_DWORD>(v10 + 1624) * (FuckEnc::CacheRead<_DWORD>(v4 + 1088) << 29);
                break;
            case 0xA7:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1296) & 0x3B)) + 1072i64);
                Calls::FastCall(v4 + 1312, &v23, v5, v10);
                break;
            case 0xA8:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1104) + 848i64, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 824) + 1424i64));
                break;
            case 0xA9:
                Calls::FastCall(v4 + 992, &v23, v5, v4);
                v23 = ~(v23 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 1624));
                break;
            case 0xAA:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 448) + 1376i64);
                v23 = v11 + ~FuckEnc::CacheRead<_DWORD>(v10 + 456) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1408) + 1296i64) + 1);
                break;
            case 0xAB:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1432);
                Calls::FastCall(v10 + 1216, &v23, v5, v4);
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 1296);
                break;
            case 0xAC:
                v23 = (v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 448) + 512i64) + 1480i64) + 912i64)) ^ 0x64C58AB9;
                break;
            case 0xAD:
                v23 = v11 ^ ~((unsigned int)(FuckEnc::CacheRead<_DWORD>(v4 + 104) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1408) + 696i64) + 1296i64)) >> 1);
                break;
            case 0xAE:
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1112) * v5);
                Calls::FastCall(v4 + 1856, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 120) + 1480i64));
                break;
            case 0xAF:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 968);
                v23 = v23 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1408) + 1088i64) - 695485889;
                break;
            case 0xB0:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 424) + 1920i64) + 8i64 * ((unsigned __int8)v5 ^ 0xD6u)) + 1264i64) + 8i64 * ((unsigned __int8)v5 & 0xDC)) + 144i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 4));
                break;
            case 0xB1:
                v23 = ~(_DWORD)v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 8i64 * ((unsigned __int8)(-47 * v5) & 0xB2)) + 448i64) + 64i64) + 1168i64);
                v23 = FuckEnc::CacheRead<_DWORD>(v10 + 1584) ^ ~(_DWORD)v11;
                break;
            case 0xB2:
                v23 = ~(v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1824) + 512i64) + 1272i64) + 8i64 * ((unsigned __int8)v5 ^ 0x33u)) + 1728i64) + 256i64));
                break;
            case 0xB3:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 8i64 * ((unsigned __int8)v5 ^ 0x9Cu)) + 584i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1096);
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 424) + 144i64) + 4i64 * (unsigned __int8)(49 * v5)));
                break;
            case 0xB4:
                v23 = v11 ^ 0x7A17BCF9;
                v23 = (v11 ^ 0x7A17BCF9) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 744) + 760i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1592) + 8i64 * (unsigned __int8)(30 * v5)) + 712i64);
                break;
            case 0xB5:
                v23 = v11 - ((FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 1864i64) + 4i64 * ((unsigned __int8)v5 ^ 0x7Au)) | 0x10) ^ 0xDACFF2EC);
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 128);
                break;
            case 0xB6:
                Calls::FastCall(v4 + 1544, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 8i64 * (unsigned __int8)__ROR4__(v5, 1)) + 624i64) + 8i64 * ((unsigned __int8)v5 & 0xD3)));
                break;
            case 0xB7:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 280) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1768) ^ 0xBE) & 0xF9)) + 944i64) + 8i64 * (unsigned __int8)(113 * v5)) + 1808i64);
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 712);
                break;
            case 0xB8:
                v23 = ((v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 1256) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 696) + 784i64))) ^ 0xC3018944) - v5;
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 1896);
                break;
            case 0xB9:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * ((unsigned __int8)v5 ^ 0x18u)) + 416i64) + 768i64) + 144i64) + 4i64 * ((unsigned __int8)~(_BYTE)v5 & 0x88)) + 1;
                break;
            case 0xBA:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 432) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1496) + 1352i64) + 1760i64);
                v23 = __ROR4__(v23, FuckEnc::CacheRead<_DWORD>(v10 + 432));
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_DWORD>(v4 + 1416));
                break;
            case 0xBB:
                v23 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 1568) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 752) + 1296i64);
                break;
            case 0xBC:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1736) + 1088i64) & 0xA6)) + 1496i64);
                Calls::FastCall(v4 + 520, &v23, v5, FuckEnc::CacheRead<_QWORD>(v10 + 1408));
                break;
            case 0xBD:
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1736) + 1784i64) + 4i64 * (v5 & 1)));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1352);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1696) >> 1;
                break;
            case 0xBE:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * ((unsigned __int8)~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 256) ^ 0xA4u)) + 416i64) + 768i64) + 1704i64) + 712i64);
                break;
            case 0xBF:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1760) + 1960i64, &v23, v5, v4);
                v23 += ~FuckEnc::CacheRead<_DWORD>(v4 + 712);
                break;
            case 0xC0:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1040) + 1;
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 424) + 1608i64) + 8i64 * (unsigned __int8)(-125 * v5)) + 1080i64) + 1912i64);
                break;
            case 0xC1:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 8i64 * (unsigned __int8)__ROR4__(v5, 20)) + 616i64) + 8i64 * (((unsigned __int8)v5 ^ 0xFD) & 0x6E)) + 1072i64);
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 472) + 4i64 * ((unsigned __int8)v5 & 0xBE));
                break;
            case 0xC2:
                v23 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 1896);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 368) + 616i64) + 8i64 * (v5 & 0x47)) + 1048i64);
                v23 += FuckEnc::CacheRead<_DWORD>(v10 + 760);
                break;
            case 0xC3:
                v23 = __ROR4__(v11, v5);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1048);
                v23 -= FuckEnc::CacheRead<_DWORD>(v10 + 1624);
                Calls::FastCall(v4 + 1856, &v23, v5, v4);
                break;
            case 0xC4:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * ((unsigned __int8)__ROR4__(v5, 9) & 0x99)) + 752i64);
                v23 = ~(v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1600) + 8i64 * ((unsigned __int8)(28 * v5) & 0xD5)) + 1496i64) + 1912i64));
                break;
            case 0xC5:
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * ((unsigned __int8)v5 & 0xCA)) + 952i64) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 968) & 0x72)) + 1208i64) + 4i64 * (v5 & 0x40)));
                break;
            case 0xC6:
                v23 = v11 - 1669934849;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 168) + 616i64) + 8i64 * (unsigned __int8)(113 * v5)) + 64i64);
                v23 = __ROL4__(v11 - 1669934849, FuckEnc::CacheRead<_BYTE>(v10 + 312) * v5);
                break;
            case 0xC7:
                v23 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 8i64 * (__ROR4__(v5, 8) & 0x7D)) + 224i64) + 4i64 * ((unsigned __int8)v5 & 0x90)) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1704) + 1368i64) - 791609581);
                break;
            case 0xC8:
                v23 = (v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 312) ^ 0x4D5257CC)) ^ 0x9CCC274B;
                v23 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1824) + 1864i64) + 4i64 * (v5 & 0x2A));
                break;
            case 0xC9:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1680) + 760i64);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 640) ^ 0x41u)) + 280i64) + 8i64 * (((unsigned __int8)v5 ^ 0x1D) & 0x9D)) + 1896i64);
                break;
            case 0xCA:
                v23 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 1896) << 7);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1152) + 1080i64) + 1088i64) ^ 0xD6C2335B;
                break;
            case 0xCB:
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 616i64) + 8i64 * ((unsigned __int8)v5 & 0xD9)) + 1592i64) + 8i64 * (v5 & 0x64)) + 1536i64) + 4i64 * (unsigned __int8)(82 * FuckEnc::CacheRead<_BYTE>(v4 + 104))));
                break;
            case 0xCC:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1072) + 1440i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1704);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 696) + 1128i64) + 4i64 * ((unsigned __int8)v5 & 0xF6));
                break;
            case 0xCD:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 384);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 280) + 8i64 * ((unsigned __int8)(-63 * v5) & 0xE3)) + 1744i64);
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 1240) ^ 0x349A035E;
                break;
            case 0xCE:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 928);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 280) + 8i64 * (v5 & 0x3C)) + 720i64) + 448i64) + 1040i64) + 1;
                break;
            case 0xCF:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 696) + 392i64);
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 1896);
                v23 ^= (_DWORD)0x127CBD50 - 1210111268 * (FuckEnc::CacheRead<_DWORD>(v4 + 968) >> 9);
                break;
            case 0xD0:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1400) + 392i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1168) + 1840i64, &v23, v5, v10);
                break;
            case 0xD1:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1440) * (FuckEnc::CacheRead<_DWORD>(v4 + 584) - 1085421502) * (-1936032444 - 1673431485 * FuckEnc::CacheRead<_DWORD>(v4 + 968));
                break;
            case 0xD2:
                v23 = v11 ^ 0xB8C13169;
                v23 = ~(v11 ^ 0xB8C13169 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1736) + 1536i64) + 4i64 * (__ROR4__(v5, 17) & 0x54)) * v5));
                break;
            case 0xD3:
                v23 = v11 - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1432) + 96i64);
                v23 = v11 - v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 608) + 8i64 * ((unsigned __int8)v5 ^ 0x3Du)) + 552i64) + 4i64 * (unsigned __int8)(127 * v5));
                break;
            case 0xD4:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1768) ^ v11;
                Calls::FastCall(v4 + 856, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 936) + 8i64 * (unsigned __int8)(-38 * v5)));
                break;
            case 0xD5:
                Calls::FastCall(v4 + 1832, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1256) & 0x28)));
                break;
            case 0xD6:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1824);
                v23 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1928) + 8i64 * ((unsigned __int8)__ROR4__(~(-1618489089 * FuckEnc::CacheRead<_DWORD>(v4 + 128)), 28) & 0xF6)) + 1416i64) ^ v11);
                break;
            case 0xD7:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1736) + 72i64) + 8i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 1584) << 8, 6) & 0xE7), &v23, v5, v4);
                break;
            case 0xD8:
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 600) + FuckEnc::CacheRead<_DWORD>(v4 + 640) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 512) + 640i64) - 1023332080);
                break;
            case 0xD9:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1168) + 288i64) + 8i64 * (v5 & 0x52)) + 744i64) + 1200i64, &v23, v5, v4);
                break;
            case 0xDA:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1584);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1112);
                v23 += (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 1768)) ^ 0xD3467EE7;
                break;
            case 0xDB:
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1168) + 1696i64) ^ v11;
                v23 = (_DWORD)0x9558C9F + 1 + ~(v23 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 1864i64) + 4i64 * (unsigned __int8)(-12 * v5)));
                break;
            case 0xDC:
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 1784i64) + 4i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 720) + 912i64) & 0xF)));
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 416) + 1744i64);
                break;
            case 0xDD:
                v23 = __ROL4__(v11, 111);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1048) + 768i64) + 1736i64) + 1760i64) + 88i64);
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_DWORD>(v10 + 1440));
                break;
            case 0xDE:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1808) + 696i64);
                v23 = v5 ^ (v11 - FuckEnc::CacheRead<_DWORD>(v10 + 104));
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 128) ^ 0x4401F1A7;
                break;
            case 0xDF:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 112);
                v23 = FuckEnc::CacheRead<_DWORD>(v10 + 968) ^ v11;
                v23 = ~(v23 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1864) + 4i64 * ((-3 * FuckEnc::CacheRead<_BYTE>(v4 + 384)) & 0x4B)));
                break;
            case 0xE0:
                v23 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 744) + 448i64) + 1456i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 18)) ^ v5) - 1023309500;
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 312);
                break;
            case 0xE1:
                v23 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 104);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1432) + 1496i64) + 1456i64) + 4i64 * ((unsigned __int8)(-92 * v5) & 0xE9));
                break;
            case 0xE2:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 912) ^ v11;
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 1952) + 1;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1728);
                v23 -= FuckEnc::CacheRead<_DWORD>(v10 + 1040);
                break;
            case 0xE3:
                v23 = v5 ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 776) + 936i64) + 8i64 * ((unsigned __int8)v5 & 0x9B)) + 112i64);
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1048) + 1744i64) ^ v5 ^ v11;
                break;
            case 0xE4:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1480);
                v23 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 1568) ^ ((_DWORD)0x1BFCF51 + FuckEnc::CacheRead<_DWORD>(v4 + 1584))) - FuckEnc::CacheRead<_DWORD>(v10 + 384);
                break;
            case 0xE5:
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 56));
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 1952);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 168);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 496) + 1584i64);
                break;
            case 0xE6:
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 840) + 1256i64));
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1376) + 1744i64) ^ 0x454414F9;
                break;
            case 0xE7:
                v23 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 1912) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 1608i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 28)) + 1432i64) + 56i64);
                break;
            case 0xE8:
                Calls::FastCall(v4 + 520, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1408) + 936i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 10)) + 608i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 25)));
                break;
            case 0xE9:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1704) + 40i64) + 120i64) + 1752i64);
                Calls::FastCall(v4 + 320, &v23, v5, v10);
                break;
            case 0xEA:
                v23 = v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 1088) ^ v11 ^ 0xE753BE3E;
                v23 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * (unsigned __int8)(92 * v5)) + 1584i64);
                break;
            case 0xEB:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1432) + 1760i64);
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 8i64 * ((unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v10 + 712), 6) & 0x95)) + 912i64);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 104);
                break;
            case 0xEC:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1152) + 952i64) + 8i64 * (unsigned __int8)(112 * v5)) + 1072i64) + 1168i64);
                v23 = FuckEnc::CacheRead<_DWORD>(v10 + 1440) ^ v11;
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 1912);
                break;
            case 0xED:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 584);
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 1624) & 0xFFFFFFFC;
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 880) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1736) + 456i64), 13));
                break;
            case 0xEE:
                v23 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 256) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1896) >> 6) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 1696i64));
                break;
            case 0xEF:
                v23 = v11 - (~FuckEnc::CacheRead<_DWORD>(v4 + 640) | 4);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 368i64);
                v23 += FuckEnc::CacheRead<_DWORD>(v10 + 1696);
                break;
            case 0xF0:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 776) + 1072i64);
                Calls::FastCall(v10 + 192, &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 392));
                break;
            case 0xF1:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1744);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 96);
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 952) + 8i64 * ((unsigned __int8)v5 & 0xC4)) + 744i64) + 584i64));
                break;
            case 0xF2:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 968) ^ v11;
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 1624);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 968) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1760) + 1088i64);
                break;
            case 0xF3:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1768);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1584);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 184) + 712i64);
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 1624);
                break;
            case 0xF4:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 640) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1704) + 112i64);
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v10 + 1432) + 1240i64) & 0xEF);
                break;
            case 0xF5:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1408) + 720i64);
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 584);
                v23 ^= v5 + FuckEnc::CacheRead<_DWORD>(v4 + 456) - 200123589;
                break;
            case 0xF6:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 384) ^ v11;
                Calls::FastCall(v4 + 560, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 1744), 10)));
                break;
            case 0xF7:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 416);
                Calls::FastCall(v10 + 528, &v23, v5, v4);
                v23 ^= 121952812 * FuckEnc::CacheRead<_DWORD>(v4 + 784);
                break;
            case 0xF8:
                v23 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 456) & 0xFFFFFFE4;
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 8i64 * (((unsigned __int8)(v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 432)) ^ 0x44) & 0xF6)) + 456i64);
                break;
            case 0xF9:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1376);
                Calls::FastCall(v10 + 1352, &v23, v5, v4);
                v23 = (unsigned int)0xFC31131 ^ (v23 + 1023331998);
                break;
            case 0xFA:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 104) * v5;
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 824) + 936i64) + 8i64 * ((unsigned __int8)v5 ^ 0x89u)) + 56i64);
                break;
            case 0xFB:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1912) ^ v11;
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 784) - (FuckEnc::CacheRead<_DWORD>(v4 + 1112) & 0xFFFFFFEF) - 1874164222;
                break;
            case 0xFC:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 416);
                v23 = __ROR4__(FuckEnc::CacheRead<_DWORD>(v10 + 1240) ^ v11, 49);
                v23 -= (unsigned int)(-110293260 * FuckEnc::CacheRead<_DWORD>(v4 + 1768)) >> 21;
                break;
            case 0xFD:
                v23 = (unsigned int)0x11F903EE ^ v11;
                v23 = ((unsigned int)0x11F903EE ^ v11) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 552) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1624) & 0x5E));
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 912) & 0xFFFFFFE2;
                break;
            case 0xFE:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1168);
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 640)) ^ 0xBA87262F;
                Calls::FastCall(v4 + 264, &v23, v5, v4);
                break;
            case 0xFF:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1480);
                v23 = __ROR4__(v11 + (FuckEnc::CacheRead<_DWORD>(v10 + 272) ^ FuckEnc::CacheRead<_DWORD>(v4 + 1744) ^ FuckEnc::CacheRead<_DWORD>(v4 + 1912)) + 1, 190);
                break;
            case 0x100:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1896) ^ v11;
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1040) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 936) + 8i64 * ((unsigned __int8)v5 ^ 0x72u)) + 1912i64);
                break;
            case 0x101:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 840);
                v23 = v11 - 1556287793;
                break;
            case 0x102:
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1768) & 0x99)) + 432i64) >> 1);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 824) + 272i64);
                break;
            case 0x103:
                v23 = (v11 ^ (~(393367912 * FuckEnc::CacheRead<_DWORD>(v4 + 912)) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 4i64 * ((unsigned __int8)(v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 760)) & 0x8A)))) + 1632623682;
                break;
            case 0x104:
                v23 = v11 + (_DWORD)0x58CC4B0 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 424) + 912i64) >> 3);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1168);
                v23 -= FuckEnc::CacheRead<_DWORD>(v10 + 912);
                break;
            case 0x105:
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 56) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1680) + 1416i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1408) + 1080i64) + 928i64));
                break;
            case 0x106:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 936) + 8i64 * (v5 & 0x4C)) + 88i64);
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 144) + 4i64 * (v5 & 0x21));
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 1744);
                break;
            case 0x107:
                v23 = __ROL4__(v11, 22);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 184) + 608i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 6)) + 1424i64) + 96i64);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1896);
                break;
            case 0x108:
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 744) + 104i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 936) + 8i64 * ((unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 968i64), 19) & 0xFD)) + 1912i64));
                break;
            case 0x109:
                v23 = __ROL4__(v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1584), 68);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 368) + 128i64);
                break;
            case 0x10A:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 496) + 1624i64);
                v23 = __ROR4__(v23, FuckEnc::CacheRead<_WORD>(v4 + 1370));
                v23 ^= v5 + FuckEnc::CacheRead<_DWORD>(v4 + 1952);
                break;
            case 0x10B:
                v23 = v11 ^ ((FuckEnc::CacheRead<_DWORD>(v4 + 1768) << 16) * ((FuckEnc::CacheRead<_DWORD>(v4 + 1112) ^ 0x13C7) << 15));
                break;
            case 0x10C:
                Calls::FastCall(v4 + 1528, &v23, v5, v4);
                Calls::FastCall(v4 + 1640, &v23, v5, v4);
                break;
            case 0x10D:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 632) + 8i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1352) + 928i64), 3) & 0x9A), &v23, v5, v4);
                break;
            case 0x10E:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 928) - 312475249;
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 608) + 8i64 * (unsigned __int8)__ROL4__(v5, 19)) + 280i64) + 8i64 * (((unsigned __int8)v5 ^ 0xB6) & 0xE9)) + 1368i64);
                break;
            case 0x10F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 448);
                v23 = v5 ^ v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 128) ^ FuckEnc::CacheRead<_DWORD>(v4 + 712) ^ ~FuckEnc::CacheRead<_DWORD>(v10 + 1696);
                break;
            case 0x110:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 600);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1752);
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 1112) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1680) + 1096i64) + 1256i64);
                break;
            case 0x111:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1624);
                Calls::FastCall(v4 + 1640, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1104) + 1152i64));
                break;
            case 0x112:
                v23 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 824) + 280i64) + 8i64 * ((unsigned __int8)__ROR4__(v5, 1) & 0xA2)) + 1112i64) ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 1296);
                break;
            case 0x113:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 64);
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1864) + 4i64 * (__ROR4__(v5, 12) & 0x51));
                v23 = __ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 1240) + v23 - 1913106691, 230);
                break;
            case 0x114:
                Calls::FastCall(v4 + 336, &v23, v5, v4);
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_WORD>(v4 + 714) ^ 0xED);
                break;
            case 0x115:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 744) + 40i64);
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 616) + 8i64 * (unsigned __int8)__ROR4__(v5, 27)) + 1936i64) + 8i64 * ((unsigned __int8)v5 ^ 0xCu)) + 1896i64);
                break;
            case 0x116:
                v23 = v11 + 1023331881;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * ((unsigned __int8)v5 & 0xD0)) + 440i64);
                v23 = v11 + 1023331881 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 952) + 8i64 * ((unsigned __int8)v5 ^ 0xFCu)) + 1912i64);
                break;
            case 0x117:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1496) + 384i64);
                Calls::FastCall(v4 + 1832, &v23, v5, v4);
                v23 = ~v23;
                break;
            case 0x118:
                v23 = v11 - 14036888;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1736);
                v23 = (v11 - 14036888) ^ (FuckEnc::CacheRead<_DWORD>(v10 + 640) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1104) + 800i64) + 4i64 * ((unsigned __int8)__ROR4__(v5, 16) & 0xB2)));
                break;
            case 0x119:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 512) + 1096i64) + 728i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 9), &v23, v5, v4);
                break;
            case 0x11A:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 120);
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1128) + 4i64 * (unsigned __int8)(51 * v5)) ^ v11;
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 8i64 * ((unsigned __int8)v5 & 0xFC)) + 1768i64);
                break;
            case 0x11B:
                Calls::FastCall(v4 + 320, &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1352));
                v23 = ~(v23 - FuckEnc::CacheRead<_DWORD>(v4 + 1296));
                break;
            case 0x11C:
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 256i64) ^ v11;
                v23 = __ROL4__(v23 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 280) + 8i64 * (__ROR4__(v5, 1) & 0x79)) + 1456i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 2)), 132);
                break;
            case 0x11D:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 752) + 624i64) + 8i64 * (unsigned __int8)(-47 * v5)) + 496i64);
                v23 = ~(v11 ^ ~(v5 + FuckEnc::CacheRead<_DWORD>(v10 + 312)));
                break;
            case 0x11E:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 96) + 752i64);
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 784) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1920) + 8i64 * ((unsigned __int8)v5 & 0x8E)) + 600i64));
                break;
            case 0x11F:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1920) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1624) & 0x68)) + 792i64) + 8i64 * ((unsigned __int8)v5 & 0xEC), &v23, v5, v4);
                break;
            case 0x120:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 280) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 56) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 424) + 968i64), 26)) + 944i64) + 8i64 * (((unsigned __int8)v5 ^ 0xEC) & 0x7F)) + 712i64);
                break;
            case 0x121:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1152);
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 712);
                v23 += ~FuckEnc::CacheRead<_DWORD>(v4 + 384) * ~FuckEnc::CacheRead<_DWORD>(v4 + 1768);
                break;
            case 0x122:
                v23 = v11 - v5;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 1528i64, &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1496));
                break;
            case 0x123:
                v23 = v11 + v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 448);
                v23 = v11 + v5 - (~FuckEnc::CacheRead<_DWORD>(v10 + 272) ^ FuckEnc::CacheRead<_DWORD>(v4 + 912) & 0xFFFFFFFE);
                break;
            case 0x124:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 8i64 * ((unsigned __int8)v5 ^ 0xF5u)) + 56i64);
                v23 = __ROR4__(v23, FuckEnc::CacheRead<_BYTE>(v4 + 272) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 40) + 104i64));
                break;
            case 0x125:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 584);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 768);
                v23 += (FuckEnc::CacheRead<_DWORD>(v4 + 1744) + FuckEnc::CacheRead<_DWORD>(v10 + 272) + 1) << 27;
                break;
            case 0x126:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1584);
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 712) ^ 0x430D14F6;
                v23 ^= ~(FuckEnc::CacheRead<_DWORD>(v4 + 584) ^ 0xFF327DF5);
                break;
            case 0x127:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 760);
                v23 = v23 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 824) + 1768i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 1416i64);
                break;
            case 0x128:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 304) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1264) + 8i64 * (v5 & 0x5B)) + 256i64), 19), &v23, v5, v4);
                break;
            case 0x129:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1440) ^ v11;
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 928) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 8i64 * ((unsigned __int8)v5 & 0x9A)) + 1568i64) + 1;
                break;
            case 0x12A:
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1912)) - 668008438;
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1496) + 104i64);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1736) + 968i64);
                break;
            case 0x12B:
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1624)) + 1023309500;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 232i64, &v23, v5, v4);
                break;
            case 0x12C:
                v23 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 1296) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 776) + 776i64) + 720i64) + 272i64));
                break;
            case 0x12D:
                v23 = v11 ^ (32 * FuckEnc::CacheRead<_DWORD>(v4 + 256));
                v23 -= ~FuckEnc::CacheRead<_DWORD>(v4 + 1952) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 584) * v5);
                break;
            case 0x12E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 496);
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1240);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 40) + 1440i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 64) + 1568i64);
                break;
            case 0x12F:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 8i64 * (unsigned __int8)(81 * v5)) + 640i64);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 8i64 * ((unsigned __int8)v5 ^ 0xF4u)) + 104i64);
                break;
            case 0x130:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 928);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 280) + 8i64 * (unsigned __int8)(66 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 96) + 128i64))) + 912i64);
                break;
            case 0x131:
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 392) + 368i64) + 432i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 776);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1784) + 4i64 * (unsigned __int8)(34 * v5)) + 1;
                break;
            case 0x132:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 8i64 * ((27 * (_BYTE)v5) & 0x23)) + 1752i64) + 624i64) + 8i64 * (((unsigned __int8)v5 ^ 0xEF) & 0x31)) + 1168i64);
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 456);
                break;
            case 0x133:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 256), 11)) + 1944i64) + 8i64 * (unsigned __int8)(-61 * v5), &v23, v5, v4);
                break;
            case 0x134:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 392) + 968i64);
                Calls::FastCall(v4 + 856, &v23, v5, v4);
                break;
            case 0x135:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1072) + 40i64);
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 600) + FuckEnc::CacheRead<_DWORD>(v4 + 1368) + 2;
                break;
            case 0x136:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 712), 2)) + 1168i64) + 1856i64, &v23, v5, v4);
                break;
            case 0x137:
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 696) + 1624i64));
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 1584) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 416) + 1784i64) + 4i64 * ((unsigned __int8)v5 & 0xF4));
                break;
            case 0x138:
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 928i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 696);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1416);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 56);
                break;
            case 0x139:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1416) - 1000230987;
                v23 -= (FuckEnc::CacheRead<_DWORD>(v4 + 1952) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 776) + 1696i64)) ^ 0xB7FCF4E7;
                break;
            case 0x13A:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1040);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1728) + 456i64) ^ FuckEnc::CacheRead<_DWORD>(v4 + 600) & 0xFFFFFFE9 ^ 0xC3018944;
                break;
            case 0x13B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 168);
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 600) + 1836180888;
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 1440);
                break;
            case 0x13C:
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 720) + 1608i64) + 8i64 * (v5 & 0x62)) + 1704i64) + 1536i64) + 4i64 * ((unsigned __int8)(-65 * v5) & 0x9F)) ^ v11;
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 584);
                break;
            case 0x13D:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1728);
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 800) + 4i64 * (v5 & 0x71));
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1376) + 256i64) ^ v5 ^ 0x4152DB35;
                break;
            case 0x13E:
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1440) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1080) + 968i64));
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 1040) - v5 + 1;
                break;
            case 0x13F:
                v23 = ~(unsigned int)((unsigned int)0xA8F31ED + v11 + 4);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1704) + 1744i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1824);
                v23 -= FuckEnc::CacheRead<_DWORD>(v10 + 784);
                break;
            case 0x140:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 840);
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 312);
                v23 ^= ~(FuckEnc::CacheRead<_DWORD>(v4 + 1088) * (FuckEnc::CacheRead<_DWORD>(v4 + 1240) << 13));
                break;
            case 0x141:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1704);
                v23 = v11 + (_DWORD)0x59B32C9 + 1 + FuckEnc::CacheRead<_DWORD>(v10 + 1952);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1736) + 88i64) + 1240i64) >> 26;
                break;
            case 0x142:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1584);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * ((-5 * FuckEnc::CacheRead<_BYTE>(v4 + 256)) & 0x33)) + 1432i64) + 1376i64) + 416i64) + 640i64);
                break;
            case 0x143:
                v23 = (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1896)) ^ 0x9873F8E0;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1496);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 448) + 424i64) + 1696i64);
                break;
            case 0x144:
                v23 = v11 ^ (789786865 * FuckEnc::CacheRead<_DWORD>(v4 + 56) * FuckEnc::CacheRead<_DWORD>(v4 + 1416) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 88) + 432i64) - 1692014429);
                break;
            case 0x145:
                v23 = __ROL4__(v11, v5);
                Calls::FastCall(v4 + 1840, &v23, v5, v4);
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 968);
                break;
            case 0x146:
                v23 = __ROR4__(v11, 125 * FuckEnc::CacheRead<_BYTE>(v4 + 1040));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1736) + 1824i64) + 1824i64);
                v23 += FuckEnc::CacheRead<_DWORD>(v10 + 928);
                break;
            case 0x147:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 8i64 * (unsigned __int8)__ROL4__(v5, 24)) + 624i64) + 8i64 * (((unsigned __int8)v5 ^ 0xA7) & 0xFB)) + 472i64) + 4i64 * (unsigned __int8)(41 * v5));
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_DWORD>(v4 + 784));
                break;
            case 0x148:
                v23 = ~(_DWORD)v11;
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1920) + 8i64 * (((unsigned __int8)v5 ^ 0xEF) & 0xB5)) + 1264i64) + 8i64 * (((unsigned __int8)v5 ^ 0xFD) & 0x32)) + 1152i64) + 104i64) ^ ~(_DWORD)v11;
                break;
            case 0x149:
                v23 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 608i64) + 8i64 * (unsigned __int8)(15 * v5)) + 840i64) + 256i64) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1256) >> 21);
                break;
            case 0x14A:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1408) + 1096i64) + 1760i64) + 1496i64) + 720i64) + 1608i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 8)) + 128i64);
                break;
            case 0x14B:
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 696) + 1584i64) * v5);
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 1112) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1760) + 456i64);
                break;
            case 0x14C:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 8i64 * ((unsigned __int8)__ROL4__(v5, 16) & 0xAA)) + 304i64) + 8i64 * (__ROR4__(v5, 6) & 0x56), &v23, v5, v4);
                break;
            case 0x14D:
                v23 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 928) ^ v5);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 512) + 1760i64) + 1168i64) + 584i64) + 1;
                break;
            case 0x14E:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1152) + 120i64);
                v23 = FuckEnc::CacheRead<_DWORD>(v10 + 1896) ^ v11;
                v23 -= 748052944 * FuckEnc::CacheRead<_DWORD>(v4 + 1440);
                break;
            case 0x14F:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1400) + 1608i64) + 8i64 * (v5 & 0x41)) + 1776i64) + 8i64 * (v5 & 0xC), &v23, v5, v4);
                break;
            case 0x150:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1240) ^ v11;
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 1440);
                v23 = ~__ROR4__(__ROL4__(v23, FuckEnc::CacheRead<_DWORD>(v4 + 1912)) + 1099769347, 164);
                break;
            case 0x151:
                v23 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 40) + 1408i64) + 432i64) << 23);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1264) + 8i64 * (unsigned __int8)__ROL4__(v5, 23)) + 784i64);
                break;
            case 0x152:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 280) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 608) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1440) & 0xDF)) + 912i64) & 0x5E)) + 544i64, &v23, v5, v4);
                break;
            case 0x153:
                v23 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 432) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1040) - (_DWORD)0xDB5F58A)) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 512) + 1912i64) - v5;
                break;
            case 0x154:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1496) + 1608i64) + 8i64 * (v5 & 0x1C)) + 416i64) + 1680i64);
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 712)) - 2078097851;
                break;
            case 0x155:
                v23 = v11 ^ 0xAB0ADC4D;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 120) + 1048i64);
                v23 = __ROR4__(v11 ^ 0xAB0ADC4D, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v10 + 1952), 13))) - ((_DWORD)0xCADA5F8 + 1);
                break;
            case 0x156:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * FuckEnc::CacheRead<unsigned __int8>(v4 + 312)) + 1432i64);
                Calls::FastCall(v4 + 1200, &v23, v5, v10);
                break;
            case 0x157:
                Calls::FastCall(v4 + 112, &v23, v5, v4);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1088);
                break;
            case 0x158:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 40i64) + 1480i64);
                Calls::FastCall(v10 + 656, &v23, v5, v4);
                break;
            case 0x159:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 784);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 720) + 288i64) + 8i64 * ((unsigned __int8)v5 & 0xD7)) + 1592i64) + 8i64 * ((unsigned __int8)v5 ^ 0xDu)) + 784i64);
                break;
            case 0x15A:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 720) + 120i64);
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 584));
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1704) + 840i64) + 1736i64) + 1912i64);
                break;
            case 0x15B:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 608) + 8i64 * ((unsigned __int8)v5 & 0x9B)) + 744i64) + 112i64) + 112i64) + 1048i64);
                v23 = FuckEnc::CacheRead<_DWORD>(v10 + 1440) ^ v11 ^ 0xC3018944;
                break;
            case 0x15C:
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1440)) - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 120);
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_DWORD>(v10 + 1088)) ^ 0x95C30131;
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 600);
                break;
            case 0x15D:
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1152) + 312i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 720) + 1168i64);
                v23 -= FuckEnc::CacheRead<_DWORD>(v10 + 1296);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1896);
                break;
            case 0x15E:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 640) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 720);
                v23 = __ROR4__(v23, FuckEnc::CacheRead<_BYTE>(v10 + 912) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 368) + 1568i64));
                break;
            case 0x15F:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1728) + 1616i64) + 8i64 * ((unsigned __int8)v5 ^ 0xDCu), &v23, v5, v4);
                v23 += 1697513663;
                break;
            case 0x160:
                v23 = v11 + 961619557;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 960) + 8i64 * (unsigned __int8)(-22 * (FuckEnc::CacheRead<_DWORD>(v4 + 432) >> 6)), &v23, v5, v4);
                break;
            case 0x161:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 40) + 1776i64) + 8i64 * (unsigned __int8)(-105 * v5), &v23, v5, v4);
                v23 += 1965799521;
                break;
            case 0x162:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 600) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1736) + 472i64) + 4i64 * ((unsigned __int8)v5 ^ 0xACu)) - FuckEnc::CacheRead<_DWORD>(v4 + 256);
                break;
            case 0x163:
                v23 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 912) << 12);
                Calls::FastCall(v4 + 1512, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 776) + 824i64));
                break;
            case 0x164:
                v23 = v11 ^ (-416612000 - 1636960736 * (FuckEnc::CacheRead<_DWORD>(v4 + 1568) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1168) + 496i64) + 312i64)));
                break;
            case 0x165:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 424) + 776i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1616) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v10 + 1696), 14), &v23, v5, v4);
                v23 = ~v23;
                break;
            case 0x166:
                v23 = v11 ^ (-1819497823 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 928i64));
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 1768);
                break;
            case 0x167:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 912) ^ v11;
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1824) + 1168i64) + 272i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1072);
                v23 -= FuckEnc::CacheRead<_DWORD>(v10 + 1040);
                break;
            case 0x168:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 104) ^ v11;
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 720) + 1920i64) + 8i64 * ((unsigned __int8)(109 * v5) & 0xAC)) + 768i64) + 1080i64) + 784i64);
                break;
            case 0x169:
                v23 = v11 ^ 0x4E06F911;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1704) + 1808i64);
                v23 = FuckEnc::CacheRead<_DWORD>(v10 + 1296) ^ v11 ^ 0x4E06F911;
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 184) + 912i64);
                break;
            case 0x16A:
                Calls::FastCall(v4 + 200, &v23, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1728);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1040);
                break;
            case 0x16B:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * (unsigned __int8)__ROR4__(v5, 17)) + 1696i64) - (FuckEnc::CacheRead<_DWORD>(v4 + 584) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1480) + 912i64));
                break;
            case 0x16C:
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1704) + 760i64));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1400) + 744i64);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1272) + 8i64 * ((unsigned __int8)v5 & 0xB1)) + 584i64);
                break;
            case 0x16D:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1432) + 384i64) + 1;
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 776) + 184i64) + 784i64) * v5;
                break;
            case 0x16E:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1728) + 1952i64) + 1527246440;
                v23 += v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1824) + 1256i64);
                break;
            case 0x16F:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1624) ^ v11;
                v23 = __ROR4__(v23, FuckEnc::CacheRead<_DWORD>(v4 + 1112));
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1952);
                v23 = ~(v23 + FuckEnc::CacheRead<_DWORD>(v4 + 256));
                break;
            case 0x170:
                v23 = v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1760) + 256i64);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1256);
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_BYTE>(v4 + 312) ^ 0x50);
                break;
            case 0x171:
                Calls::FastCall(v4 + 648, &v23, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 768);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 472) + 4i64 * (v5 & 0x2E));
                break;
            case 0x172:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 712) ^ v11;
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1432) + 624i64) + 8i64 * (unsigned __int8)(-66 * v5)) + 1952i64) >> 18;
                break;
            case 0x173:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1040);
                Calls::FastCall(v4 + 1504, &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 824));
                break;
            case 0x174:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 272);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 368) + 1680i64);
                v23 -= FuckEnc::CacheRead<_DWORD>(v10 + 1584);
                v23 = v23 - FuckEnc::CacheRead<_DWORD>(v4 + 1088) - v5;
                break;
            case 0x175:
                Calls::FastCall(v4 + 1176, &v23, v5, v4);
                v23 = __ROL4__(v23, 68);
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 912) + 1;
                break;
            case 0x176:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1696);
                Calls::FastCall(v4 + 1200, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 8i64 * ((unsigned __int8)v5 & 0xD4)));
                break;
            case 0x177:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 584);
                v23 += ((unsigned int)0x86174 ^ ((FuckEnc::CacheRead<_DWORD>(v4 + 1256) & 0x7F) << 14)) - 1670779928;
                break;
            case 0x178:
                v23 = v11 + 1161734611 * FuckEnc::CacheRead<_DWORD>(v4 + 640);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 776) + 616i64) + 8i64 * ((unsigned __int8)v5 ^ 0x6Du)) + 552i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 17));
                break;
            case 0x179:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 8i64 * ((unsigned __int8)v5 & 0xD6)) + 616i64) + 8i64 * ((unsigned __int8)v5 & 0xCF)) + 88i64);
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1456) + 4i64 * (unsigned __int8)(-12 * FuckEnc::CacheRead<_BYTE>(v4 + 1952)));
                break;
            case 0x17A:
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 1568i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1376) + 1240i64) * (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 1744)));
                break;
            case 0x17B:
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 392) + 1864i64) + 4i64 * (unsigned __int8)(-112 * v5)) * ~FuckEnc::CacheRead<_DWORD>(v4 + 912)) ^ 0xAFBCAA28;
                break;
            case 0x17C:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 416) + 1640i64, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1704) + 768i64));
                break;
            case 0x17D:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1896);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 608) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1112) ^ 0xBF) & 0xC5)) + 1912i64) ^ 0xE3D0FFCD;
                break;
            case 0x17E:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1400) + 976i64, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 1760i64));
                break;
            case 0x17F:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 392) + 600i64);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 968);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 440);
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 696) + 1768i64));
                break;
            case 0x180:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1240);
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_DWORD>(v4 + 928));
                v23 ^= ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 1768i64) | 0x14);
                break;
            case 0x181:
                v23 = v11 - 2053178641;
                v23 = __ROR4__(v11 - 2053178641, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * (unsigned __int8)(-95 * v5)) + 912i64));
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 1744) & 0xFFFFFFED;
                break;
            case 0x182:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 64) + 1080i64) + 1256i64) - 2083455016;
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 928) - v5 + 1;
                break;
            case 0x183:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 96) + 1912i64) * ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1728) + 496i64) + 784i64);
                break;
            case 0x184:
                Calls::FastCall(v4 + 872, &v23, v5, v4);
                v23 = ~v23;
                v23 = v23 - FuckEnc::CacheRead<_DWORD>(v4 + 1112) - v5;
                break;
            case 0x185:
                Calls::FastCall(v4 + 1304, &v23, v5, v4);
                v23 += ~FuckEnc::CacheRead<_DWORD>(v4 + 1696);
                break;
            case 0x186:
                Calls::FastCall(v4 + 192, &v23, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1736);
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_DWORD>(v10 + 600));
                break;
            case 0x187:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 224) + 4i64 * (~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 912) & 0x13));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1704) + 112i64) + 1024i64);
                v23 -= FuckEnc::CacheRead<_DWORD>(v10 + 128);
                break;
            case 0x188:
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 368) + 144i64) + 4i64 * (unsigned __int8)(109 * v5)) + FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1352) + 1592i64) + 8i64 * (unsigned __int8)(-67 * v5)) + 1912i64));
                break;
            case 0x189:
                v23 = v11 + 909724894;
                v23 = v11 + 909724894 - FuckEnc::CacheRead<_DWORD>(v4 + 1240) - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 168) + 768i64);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1256);
                break;
            case 0x18A:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1896) ^ v11;
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 448) + 1752i64) + 1928i64) + 8i64 * (v5 & 0x56)) + 968i64);
                break;
            case 0x18B:
                v23 = ~(v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 1744) ^ v5) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 760), 27)) + 600i64));
                break;
            case 0x18C:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 256);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1024) + 512i64) + 1112i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1680);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1768);
                break;
            case 0x18D:
                v23 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 600) ^ 0x4698EE84) + 1;
                v23 += (FuckEnc::CacheRead<_DWORD>(v4 + 1040) >> 10) ^ 0x5437064C;
                break;
            case 0x18E:
                Calls::FastCall(v4 + 1304, &v23, v5, v4);
                v23 += 457704239;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1400);
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_DWORD>(v10 + 1584));
                break;
            case 0x18F:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1112);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 416) + 56i64);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 96) + 928i64);
                break;
            case 0x190:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 784) ^ v11;
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 432) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 760) + FuckEnc::CacheRead<_DWORD>(v4 + 384) - 2056231691);
                break;
            case 0x191:
                v23 = v11 - 771800767 + FuckEnc::CacheRead<_DWORD>(v4 + 1256);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 696) + 664i64, &v23, v5, v4);
                break;
            case 0x192:
                v23 = v11 ^ 0xD1FF41DC;
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1744) ^ v11 ^ 0xD1FF41DC;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 720) + 1152i64);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 800) + 4i64 * ((-64 * (_BYTE)v5) & 0x49));
                break;
            case 0x193:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 104i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 824);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 944) + 8i64 * (unsigned __int8)(-112 * v5)) + 1768i64);
                break;
            case 0x194:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1920) + 8i64 * (v5 & 0xC)) + 1368i64);
                Calls::FastCall(v4 + 1528, &v23, v5, v4);
                break;
            case 0x195:
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 56));
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 496) + 1088i64) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 256) + 953286465);
                break;
            case 0x196:
                v23 = (v11 - FuckEnc::CacheRead<_DWORD>(v4 + 432)) ^ 0x3D4CA03D;
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1024) + 1040i64) + (FuckEnc::CacheRead<_DWORD>(v4 + 1088) ^ 0x35D2E8BD);
                break;
            case 0x197:
                v23 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1496) + 584i64) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1368) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 424) + 800i64) + 4i64 * ((unsigned __int8)__ROR4__(v5, 21) & 0x9B))));
                break;
            case 0x198:
                Calls::FastCall(v4 + 200, &v23, v5, v4);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1408) + 1696i64);
                break;
            case 0x199:
                v23 = v11 + (((FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 392) + 88i64) + 1696i64) * ~FuckEnc::CacheRead<_DWORD>(v4 + 1296)) | 0x220u) >> 5);
                break;
            case 0x19A:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 512) + 696i64);
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1208) + 4i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1680) + 928i64) & 0x57)) - FuckEnc::CacheRead<_DWORD>(v4 + 584);
                break;
            case 0x19B:
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 640) - 1987260161);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 88);
                v23 = (FuckEnc::CacheRead<_DWORD>(v10 + 1240) + v23 - 345628903) ^ 0x28222BA2;
                break;
            case 0x19C:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1680);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 1056) + 8i64 * ((22 * (_BYTE)v5) & 0x60), &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 112));
                break;
            case 0x19D:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1168) + 200i64, &v23, v5, v4);
                v23 += -1331141367 - FuckEnc::CacheRead<_DWORD>(v4 + 600);
                break;
            case 0x19E:
                v23 = __ROL4__(v11, 65 * FuckEnc::CacheRead<_BYTE>(v4 + 928) + (FuckEnc::CacheRead<_BYTE>(v4 + 1696) ^ (30 * ~FuckEnc::CacheRead<_BYTE>(v4 + 256))));
                break;
            case 0x19F:
                v23 = ~(v11 + 771800788);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1424);
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1592) + 8i64 * (unsigned __int8)(50 * v5)) + 472i64) + 4i64 * ((unsigned __int8)v5 ^ 0x27u)));
                break;
            case 0x1A0:
                v14 = ~(v11 + FuckEnc::CacheRead<_DWORD>(v4 + 456));
                v23 = v14;
                v15 = ~FuckEnc::CacheRead<_DWORD>(v4 + 1296);
                goto LABEL_422;
            case 0x1A1:
                v16 = v4;
                v23 = __ROL4__(v11, 149);
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_DWORD>(v4 + 968));
                goto LABEL_1033;
            case 0x1A2:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 456);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 88) + 1024i64) + 768i64) + 392i64);
                v23 += FuckEnc::CacheRead<_DWORD>(v10 + 1240);
                break;
            case 0x1A3:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 120);
                Calls::FastCall(v4 + 528, &v23, v5, v10);
                v23 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 1296i64) ^ v23);
                break;
            case 0x1A4:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1824);
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1352) + 1440i64);
                Calls::FastCall(v4 + 592, &v23, v5, v4);
                break;
            case 0x1A5:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 640i64);
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 1624);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 184);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v10 + 640);
                break;
            case 0x1A6:
                Calls::FastCall(v4 + 1544, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(v4 + 1608) + 440i64) + 1928i64) + 8i64 * (unsigned __int8)(-126 * v5)));
                break;
            case 0x1A7:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * (__ROL4__(v5, 6) & 0x72)) + 288i64) + 8i64 * (__ROL4__(v5, 7) & 0x11)) + 416i64) + 712i64) - v5;
                break;
            case 0x1A8:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 264i64, &v23, v5, v4);
                v23 += 1 + FuckEnc::CacheRead<_DWORD>(v4 + 928);
                break;
            case 0x1A9:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1048) + 1696i64), 12)) + 1152i64);
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1128) + 4i64 * ((unsigned __int8)__ROR4__(v5, 3) & 0x93));
                break;
            case 0x1AA:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 640) ^ v11;
                v23 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1400) + 1400i64) + 1784i64) + 4i64 * (((unsigned __int8)v5 ^ 0x10) & 0x38)) ^ v23) - 1792248322;
                break;
            case 0x1AB:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 584);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1240);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 8i64 * (__ROR4__(v5, 2) & 0x44)) + 168i64) + 712i64);
                break;
            case 0x1AC:
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1352) + 1240i64) ^ v11;
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 1256) ^ v5;
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1896) + 294734806;
                break;
            case 0x1AD:
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 8i64 * (unsigned __int8)(84 * v5)) + 952i64) + 8i64 * (unsigned __int8)__ROL4__(~FuckEnc::CacheRead<_DWORD>(v4 + 1952), 30)) + 712i64));
                break;
            case 0x1AE:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1584) ^ v11;
                Calls::FastCall(v4 + 1184, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 840) + 1752i64));
                v23 ^= 0x5ED0FF75u;
                break;
            case 0x1AF:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1624) ^ v11;
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1952);
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 1768) << 17;
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 1624);
                break;
            case 0x1B0:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 8i64 * ((unsigned __int8)v5 ^ 0x4Eu)) + 1272i64) + 8i64 * (v5 & 0x4A)) + 968i64);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1112);
                break;
            case 0x1B1:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * ((-61 * FuckEnc::CacheRead<_BYTE>(v4 + 1744)) & 0x52)) + 40i64);
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1416) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 8i64 * (unsigned __int8)(-94 * FuckEnc::CacheRead<_BYTE>(v4 + 1296))) + 256i64);
                break;
            case 0x1B2:
                v23 = v11 + 1120719103;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1408);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1288) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v10 + 1584) & 0x14), &v23, v5, v4);
                break;
            case 0x1B3:
                v23 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 8i64 * (unsigned __int8)__ROL4__(v5, 31)) + 472i64) + 4i64 * (v5 & 0x3A)) ^ v11) - 1908688441;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 448);
                v23 += FuckEnc::CacheRead<_DWORD>(v10 + 1768);
                break;
            case 0x1B4:
                v23 = ((v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 256)) - 1697135608) ^ 0xAFBA6F41;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 368);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1568);
                break;
            case 0x1B5:
                v23 = v11 + 1023331892;
                v23 = (v11 + 1023331892 + (FuckEnc::CacheRead<_DWORD>(v4 + 1440) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1824) + 1024i64) + 640i64))) ^ 0x6C7F8A68;
                break;
            case 0x1B6:
                v23 = v5 ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 768);
                v23 = v5 ^ v11 ^ FuckEnc::CacheRead<_DWORD>(v10 + 1952) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 392) + 1096i64) + 1952i64);
                break;
            case 0x1B7:
                v23 = (v5 ^ v11) - 1894463064;
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 1256i64);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 392) + 1440i64);
                break;
            case 0x1B8:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 1416i64) - 93229421;
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 8i64 * (unsigned __int8)__ROL4__(v5, 28)) + 1736i64) + 1368i64);
                break;
            case 0x1B9:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1696);
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1152) + 512i64) + 272i64) * (v5 + FuckEnc::CacheRead<_BYTE>(v4 + 1568)));
                break;
            case 0x1BA:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1352) + 1376i64) + 1824i64) + 944i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 20)) + 1376i64);
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 1584)) + 800221457;
                break;
            case 0x1BB:
                v13 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 8i64 * ((13 * (_BYTE)v5) & 0x15)) + 1168i64) + 1072i64);
            LABEL_132:
                Calls::FastCall(v13 + 1304, &v23, v5, v4);
                break;
            case 0x1BC:
                v23 = ((v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1368)) ^ 0x50B222A1) - 1984846680;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 184);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 168) + 1040i64);
                break;
            case 0x1BD:
                v23 = ~(v11 + 217801518 * FuckEnc::CacheRead<_DWORD>(v4 + 1256) + 1);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 448) + 456i64);
                break;
            case 0x1BE:
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 696) + 296i64) + 8i64 * ((unsigned __int8)v5 & 0x94)) + 1928i64) + 8i64 * (unsigned __int8)v5) + 1824i64) + 640i64) ^ v11;
                break;
            case 0x1BF:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 752) + 1736i64);
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v10 + 104) * FuckEnc::CacheRead<_BYTE>(v4 + 1296));
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 104);
                break;
            case 0x1C0:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 776);
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1088) * FuckEnc::CacheRead<_DWORD>(v10 + 1584);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 432i64) ^ 0x2E88826D;
                break;
            case 0x1C1:
                v23 = __ROR4__(v11, ~(FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1680) + 600i64) ^ (v5 + FuckEnc::CacheRead<_BYTE>(v4 + 1440)) ^ 0x1F));
                break;
            case 0x1C2:
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 784));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 440);
                Calls::FastCall(v10 + 1512, &v23, v5, v4);
                break;
            case 0x1C3:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 440);
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1096) + 1240i64);
                Calls::FastCall(v4 + 1312, &v23, v5, v4);
                break;
            case 0x1C4:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 824);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 448) + 728i64) + 8i64 * (v5 & 0x36), &v23, v5, v4);
                break;
            case 0x1C5:
                v23 = __ROR4__(v11, v5 + FuckEnc::CacheRead<_BYTE>(v4 + 128) + FuckEnc::CacheRead<_BYTE>(v4 + 1040));
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 768i64) + 1896i64);
                break;
            case 0x1C6:
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 456));
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 256) * FuckEnc::CacheRead<_DWORD>(v4 + 584) * (FuckEnc::CacheRead<_DWORD>(v4 + 1912) ^ 0xF7C13C3A);
                break;
            case 0x1C7:
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 696) + 624i64) + 8i64 * ((unsigned __int8)(FuckEnc::CacheRead<_DWORD>(v4 + 384) - 49) ^ 0xE0u)) + 456i64) ^ v11;
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 968);
                break;
            case 0x1C8:
                v23 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 1240) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1496) + 1416i64) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1584) + 433192769);
                break;
            case 0x1C9:
                v23 = __ROR4__(v11, v5);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 1432i64) + 1936i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 22)) + 1584i64) ^ 0x6E53A024;
                break;
            case 0x1CA:
                v23 = v11 ^ ~(FuckEnc::CacheRead<_DWORD>(v4 + 1368) + 1657275229);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 96) + 944i64) + 8i64 * ((unsigned __int8)v5 & 0xEE)) + 256i64);
                break;
            case 0x1CB:
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1440));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1048) + 1824i64);
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_DWORD>(v10 + 1256));
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1696) * v5;
                break;
            case 0x1CC:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 168);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 784) ^ 0x92u)) + 232i64, &v23, v5, v10);
                break;
            case 0x1CD:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 936) + 8i64 * (((unsigned __int8)v5 ^ 9) & 0xA9)) + 448i64) + 1248i64, &v23, v5, v4);
                break;
            case 0x1CE:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1480);
                Calls::FastCall(v10 + 560, &v23, v5, v4);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 168) + 928i64);
                break;
            case 0x1CF:
                v23 = __ROR4__(v5 ^ v11, 84);
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 776) + 56i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 120);
                v23 += FuckEnc::CacheRead<_DWORD>(v10 + 1368);
                break;
            case 0x1D0:
                v23 = __ROL4__(__ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1376) + 1296i64)), 181);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 424);
                v23 = v23 - 1023309500 * FuckEnc::CacheRead<_DWORD>(v10 + 256) - 1689545864;
                break;
            case 0x1D1:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 600) * (v5 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1152) + 96i64) + 1424i64) + 1768i64));
                break;
            case 0x1D2:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1072);
                v23 = __ROL4__(v11, ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v10 + 1416));
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 392) + 1784i64) + 4i64 * (unsigned __int8)(-67 * v5));
                break;
            case 0x1D3:
                v23 = __ROL4__(v11, 222) + 1565144216;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 496);
                v23 += FuckEnc::CacheRead<_DWORD>(v10 + 1696);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 968) | 0xD;
                break;
            case 0x1D4:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 640) ^ v11;
                Calls::FastCall(v4 + 216, &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1104));
                v23 ^= v5;
                break;
            case 0x1D5:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1024) + 1040i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 280) + 8i64 * (((unsigned __int8)v5 ^ 0x30) & 0xF2)) + 88i64);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1864) + 4i64 * ((unsigned __int8)v5 & 0x8A));
                break;
            case 0x1D6:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 608) + 8i64 * (unsigned __int8)__ROR4__(v5 + FuckEnc::CacheRead<_DWORD>(v4 + 1440), 8)) + 712i64);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1400) + 600i64);
                break;
            case 0x1D7:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1040);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 64);
                v23 = __ROR4__(v23, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v10 + 88) + 912i64) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 784) >> 25));
                break;
            case 0x1D8:
                v23 = ~(v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1296) - 761871255 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 56), 9)) + 1624i64)));
                break;
            case 0x1D9:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1744);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 168) + 464i64) + 8i64 * (v5 & 0x29), &v23, v5, v4);
                break;
            case 0x1DA:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 928);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1432) + 1080i64) + 1872i64, &v23, v5, v4);
                break;
            case 0x1DB:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1048);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 608) + 8i64 * (unsigned __int8)(117 * v5)) + 976i64, &v23, v5, v10);
                break;
            case 0x1DC:
                Calls::FastCall(v4 + 320, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 8i64 * ((3 * (unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1112)) & 0x30)));
                break;
            case 0x1DD:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 968);
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 928) ^ v5;
                v23 = v23 - FuckEnc::CacheRead<_DWORD>(v4 + 1416) - v5;
                break;
            case 0x1DE:
                v23 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 416) + 1408i64) + 256i64) ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 1624));
                break;
            case 0x1DF:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1824) + 184i64);
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 800) + 4i64 * ((unsigned __int8)__ROR4__(v5, 15) & 0xB4));
                v23 += ~(FuckEnc::CacheRead<_DWORD>(v4 + 1256) >> 7);
                break;
            case 0x1E0:
                v23 = v11 + 1489178929;
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 432) ^ (v11 + 1489178929);
                Calls::FastCall(v4 + 232, &v23, v5, v4);
                break;
            case 0x1E1:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 768);
                v23 = v11 ^ ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1456) + 4i64 * (((unsigned __int8)v5 ^ 0xEF) & 0xD4)) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 744) + 456i64) - 2112155563));
                break;
            case 0x1E2:
                v23 = v11 - 246473211;
                Calls::FastCall(v4 + 216, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 512) + 944i64) + 8i64 * (v5 & 0x3C)));
                break;
            case 0x1E3:
                v23 = (v11 + 1361969343) ^ 0x3A24F351;
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1400) + 1040i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 1416) + 1);
                break;
            case 0x1E4:
                v23 = v11 + 518928284;
                v23 = (v11 + 518928284) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 456) << 27);
                v23 -= v5 * (FuckEnc::CacheRead<_DWORD>(v4 + 1696) - 1845316836);
                break;
            case 0x1E5:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 432);
                Calls::FastCall(v4 + 528, &v23, v5, v4);
                v23 += 534174534 * FuckEnc::CacheRead<_DWORD>(v4 + 56);
                break;
            case 0x1E6:
                v23 = v11 - 1688102756;
                v23 = v11 - 1688102756 + FuckEnc::CacheRead<_DWORD>(v4 + 584);
                v23 ^= (-289205967 * FuckEnc::CacheRead<_DWORD>(v4 + 1744)) & 0xFFFFFFF9 ^ 0x7A2BCD1D;
                break;
            case 0x1E7:
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 840) + 1296i64));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1080) + 776i64);
                v23 = ~(FuckEnc::CacheRead<_DWORD>(v10 + 640) ^ v23);
                break;
            case 0x1E8:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1624) ^ v11;
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 104) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 96) + 1920i64) + 8i64 * ((12 * (_BYTE)v5) & 0x66)) + 432i64);
                break;
            case 0x1E9:
                v23 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 776) + 1152i64) + 784i64) ^ v11) + 1608616818;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1752);
                v23 += FuckEnc::CacheRead<_DWORD>(v10 + 1912);
                break;
            case 0x1EA:
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 280) + 8i64 * (unsigned __int8)(94 * FuckEnc::CacheRead<_BYTE>(v4 + 912))) + 1536i64) + 4i64 * ((unsigned __int8)v5 & 0x94)));
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 1088);
                break;
            case 0x1EB:
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1088) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 752) + 1048i64) + 1264i64) + 8i64 * ((unsigned __int8)__ROR4__(v5, 6) & 0xFE)) + 456i64));
                break;
            case 0x1EC:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1736);
                v23 = FuckEnc::CacheRead<_DWORD>(v10 + 456) ^ v11;
                v23 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1704) + 1928i64) + 8i64 * (((unsigned __int8)v5 ^ 3) & 0x47)) + 256i64) ^ v23);
                break;
            case 0x1ED:
                v23 = v11 ^ 0x9751E769;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 696i64) + 1264i64) + 8i64 * ((unsigned __int8)__ROR4__(v5, 31) & 0x85)) + 112i64);
                v23 = (v11 ^ 0x9751E769) + FuckEnc::CacheRead<_DWORD>(v10 + 1912);
                break;
            case 0x1EE:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 168) + 984i64, &v23, v5, v4);
                v23 -= 1680802003;
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 456);
                break;
            case 0x1EF:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 256) ^ v11;
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 432) << 31;
                v23 = __ROR4__(v23 + (FuckEnc::CacheRead<_DWORD>(v4 + 1768) ^ 0xC30131CF), 153);
                break;
            case 0x1F0:
                v23 = ((unsigned int)0xD00DFD8 + 2) ^ v5 ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1752);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1896) ^ (FuckEnc::CacheRead<_DWORD>(v10 + 1368) | 0x17);
                break;
            case 0x1F1:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 696) + 720i64) + 1264i64) + 8i64 * ((unsigned __int8)v5 & 0xD4)) + 1704i64);
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 1584) + 1;
                break;
            case 0x1F2:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1168) + 1072i64);
                v23 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 744) + 288i64) + 8i64 * ((-20 * (_BYTE)v5) & 0x6A)) + 1440i64) ^ v5);
                break;
            case 0x1F3:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1352) + 200i64, &v23, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 440);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v10 + 928);
                break;
            case 0x1F4:
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1040));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 96);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1608) + 8i64 * (unsigned __int8)__ROL4__(v5, 28)) + 1952i64) + 1;
                break;
            case 0x1F5:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1704) + 552i64) + 4i64 * (v5 & 0x29));
                v23 = __ROR4__(v23, (FuckEnc::CacheRead<_DWORD>(v4 + 456) >> 7) + 36);
                break;
            case 0x1F6:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1424);
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 720) + 1624i64) ^ v11;
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 104) * (FuckEnc::CacheRead<_DWORD>(v4 + 1744) ^ 0x44ECAA54);
                break;
            case 0x1F7:
                Calls::FastCall(v4 + 544, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 936) + 8i64 * ((unsigned __int8)__ROR4__(v5, 19) & 0xC7)) + 1264i64) + 8i64 * ((unsigned __int8)(110 * v5) & 0x8F)));
                break;
            case 0x1F8:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * (unsigned __int8)(126 * v5)) + 1240i64);
                Calls::FastCall(v4 + 1528, &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1424));
                break;
            case 0x1F9:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 88) + 448i64) + 840i64);
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 296) + 8i64 * ((unsigned __int8)(-28 * (FuckEnc::CacheRead<_DWORD>(v4 + 128) & 0xF1)) & 0xBC)) + 56i64);
                break;
            case 0x1FA:
                v23 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 712) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 424) + 1896i64) ^ 0x83626EC4);
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 256);
                break;
            case 0x1FB:
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1088) + 21);
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 1296);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1400);
                v23 += FuckEnc::CacheRead<_DWORD>(v10 + 312);
                break;
            case 0x1FC:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1376);
                v23 = v5 + v11 + (FuckEnc::CacheRead<_DWORD>(v10 + 56) & 0xFFFFFFE8) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 744) + 1208i64) + 4i64 * ((unsigned __int8)__ROL4__(v5, 10) & 0xCE));
                break;
            case 0x1FD:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1400);
                Calls::FastCall(v10 + 520, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 744) + 1080i64));
                break;
            case 0x1FE:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1952) - v5 - 170787007;
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1256);
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 1240) + 1;
                break;
            case 0x1FF:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 768);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1752) + 1384i64) + 8i64 * (v5 & 0x6E), &v23, v5, v4);
                break;
            case 0x200:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 40);
                Calls::FastCall(v10 + 888, &v23, v5, v4);
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 784);
                break;
            case 0x201:
                v23 = v11 - v5;
                v23 = v11 - v5 + FuckEnc::CacheRead<_DWORD>(v4 + 256) + FuckEnc::CacheRead<_DWORD>(v4 + 1568) + 385298625;
                break;
            case 0x202:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 584);
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 1112);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1080);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1128) + 4i64 * ((unsigned __int8)v5 ^ 0xBAu));
                break;
            case 0x203:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1416);
                v17 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 448i64);
                goto LABEL_522;
            case 0x204:
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 8i64 * ((unsigned __int8)(-59 * v5) & 0xAF)) + 88i64) + 144i64) + 4i64 * (v5 & 0x6D)) ^ v11;
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 256) ^ 0xC5C31131;
                break;
            case 0x205:
                v23 = v11 ^ 0xC3018944;
                v23 = __ROR4__(v11 ^ 0xC3018944, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 8i64 * (v5 & 0x76)) + 584i64));
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 96) + 456i64);
                break;
            case 0x206:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 416);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 120) + 1056i64) + 8i64 * (v5 & 0x36), &v23, v5, v10);
                break;
            case 0x207:
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 824) + 1608i64) + 8i64 * (((unsigned __int8)v5 ^ 6) & 0xB6)) + 448i64) + 1104i64) + 472i64) + 4i64 * (__ROL4__(v5, 19) & 0x57)));
                break;
            case 0x208:
                v23 = __ROR4__(v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 8i64 * ((unsigned __int8)v5 ^ 0xF4u)) + 1296i64), v5);
                v23 = __ROR4__(v23, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * (__ROR4__(v5, 8) & 0x71)) + 256i64));
                break;
            case 0x209:
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 1240i64) * ~FuckEnc::CacheRead<_DWORD>(v4 + 384));
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_BYTE>(v4 + 1624) + 68);
                break;
            case 0x20A:
                v23 = ((v5 + __ROR4__(v11, 251)) ^ 0x52DD8B04) - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1736);
                v23 += FuckEnc::CacheRead<_DWORD>(v10 + 968) >> 19;
                break;
            case 0x20B:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 496) + 424i64) + 424i64);
                v23 = v11 + ((~FuckEnc::CacheRead<_DWORD>(v10 + 1568) - ((_DWORD)0xA2208CA + 3)) ^ 0xAF4A04B9) + 1;
                break;
            case 0x20C:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 256);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 416);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 280) + 8i64 * (((unsigned __int8)v5 ^ 0xEF) & 0x3C)) + 1696i64) ^ 0x278AA710;
                break;
            case 0x20D:
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 720) + 1912i64) ^ v11;
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 640) ^ 0xE1B4FDD5;
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 1368);
                break;
            case 0x20E:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 712);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1368) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 4i64 * ((-40 * FuckEnc::CacheRead<_BYTE>(v4 + 1952)) & 0x7A));
                break;
            case 0x20F:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1024) + 1288i64) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 104) ^ 0xBDu), &v23, v5, v4);
                break;
            case 0x210:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 696);
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 1624));
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 752) + 640i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 912i64);
                break;
            case 0x211:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * (unsigned __int8)(-11 * FuckEnc::CacheRead<_BYTE>(v4 + 456))) + 744i64) + 120i64);
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 1256);
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 1896) + 1;
                break;
            case 0x212:
                v23 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1496) + 416i64) + 1896i64) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 272) | 0x10) | 0xC) + 1;
                break;
            case 0x213:
                v23 = (v5 ^ v11) - 973475364;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1480) + 184i64);
                v23 = (v23 - FuckEnc::CacheRead<_DWORD>(v10 + 56) - 36395741) ^ 0x33271000;
                break;
            case 0x214:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 256i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1432);
                Calls::FastCall(v4 + 648, &v23, v5, v10);
                break;
            case 0x215:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1408) + 1536i64) + 4i64 * (unsigned __int8)(-38 * v5));
                v23 ^= 878706688 * FuckEnc::CacheRead<_DWORD>(v4 + 432);
                break;
            case 0x216:
                v23 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1864) + 4i64 * ((FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 512) + 928i64) >> 15) & 0xA2)) ^ v5);
                break;
            case 0x217:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1624);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 384);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1808) + 128i64) + 1620861791;
                break;
            case 0x218:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 496);
                Calls::FastCall(v4 + 1960, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1424) + 936i64) + 8i64 * (v5 & 0x53)));
                break;
            case 0x219:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 760) ^ v11;
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 760) ^ 0x6BAF1D71;
                v23 += ~(954978355 * FuckEnc::CacheRead<_DWORD>(v4 + 1240));
                break;
            case 0x21A:
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 1952) ^ 0xC3);
                v23 -= v5 * ((FuckEnc::CacheRead<_DWORD>(v4 + 1624) | 5) - 1023309500);
                break;
            case 0x21B:
                v23 = v11 + ((FuckEnc::CacheRead<_DWORD>(v4 + 760) << 28) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1024) + 936i64) + 8i64 * ((-31 * (_BYTE)v5) & 0x21)) + 1952i64));
                break;
            case 0x21C:
                v23 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 760) ^ 0x272CF7E3);
                v23 = ((unsigned int)0x7BDFB86 + 5) ^ (v23 - (FuckEnc::CacheRead<_DWORD>(v4 + 384) ^ v5));
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1368);
                break;
            case 0x21D:
                v23 = ~((v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 368) + 1256i64)) ^ 0x4BBE389B);
                v23 += ~FuckEnc::CacheRead<_DWORD>(v4 + 600);
                break;
            case 0x21E:
                Calls::FastCall(v4 + 976, &v23, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1496);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 880) + 4i64 * ((unsigned __int8)__ROR4__(v5, 5) & 0xCA));
                break;
            case 0x21F:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 600) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 512) + 1024i64);
                v23 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1760) + 1744i64) ^ v23) - 1388511537;
                break;
            case 0x220:
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 272));
                v23 += (FuckEnc::CacheRead<_DWORD>(v4 + 1240) | 0xE) - 8 * FuckEnc::CacheRead<_DWORD>(v4 + 1896) + 1;
                break;
            case 0x221:
                v23 = v11 ^ ~(-771800673 * FuckEnc::CacheRead<_DWORD>(v4 + 912));
                v23 = v5 ^ __ROL4__(v23, ~(-11 * FuckEnc::CacheRead<_BYTE>(v4 + 1440)));
                break;
            case 0x222:
                v23 = (v5 ^ v11) + 646476013;
                v23 ^= ~(FuckEnc::CacheRead<_DWORD>(v4 + 1040) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1048) + 640i64));
                break;
            case 0x223:
                v23 = __ROL4__(v11, 119 * FuckEnc::CacheRead<_BYTE>(v4 + 1112)) + 2076557266;
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 256);
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 912);
                break;
            case 0x224:
                v23 = (v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1584)) ^ 0x51C31131;
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 456);
                v23 = (v23 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 432) - (_DWORD)0x8E12F01)) - v5;
                break;
            case 0x225:
                v23 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1536) + 4i64 * ((unsigned __int8)(50 * (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 712))) & 0xCE)) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 104) + 666678833));
                break;
            case 0x226:
                v23 = v5 ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1152) + 88i64) + 328i64, &v23, v5, v4);
                break;
            case 0x227:
                v23 = v11 ^ 0xF6F2A637;
                v23 = __ROR4__(v11 ^ 0xF6F2A637, FuckEnc::CacheRead<_DWORD>(v4 + 1296)) + 1746747939;
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 272);
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 56);
                break;
            case 0x228:
                v23 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 1896) | 0x15);
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 1896);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1400) + 1696i64) << 16;
                break;
            case 0x229:
                v23 = v11 + 1543503872 * FuckEnc::CacheRead<_DWORD>(v4 + 1768);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1480) + 1408i64);
                v23 = __ROR4__(v23, FuckEnc::CacheRead<_DWORD>(v10 + 128));
                break;
            case 0x22A:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1104) + 1296i64) + 1;
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1024) + 472i64) + 4i64 * ((unsigned __int8)__ROL4__(v5, 20) & 0xCA)) | 0xF;
                break;
            case 0x22B:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 416) + 1696i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1264) + 8i64 * ((unsigned __int8)v5 & 0x8F)) + 1208i64) + 4i64 * ((-6 * (_BYTE)v5) & 0x17));
                break;
            case 0x22C:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1112);
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 1440) >> 3;
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * (v5 & 0x11)) + 1296i64);
                break;
            case 0x22D:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 744) + 768i64) + 280i64) + 8i64 * (((unsigned __int8)v5 ^ 0xE3) & 0x5C)) + 1096i64) + 184i64) + 64i64);
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 712);
                break;
            case 0x22E:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1592) + 8i64 * ((unsigned __int8)v5 ^ 0xDCu)) + 272i64) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 184) + 1808i64) + 712i64) + 1137835841);
                break;
            case 0x22F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 40);
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1072) + 840i64) + 1424i64) + 1112i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1456) + 4i64 * (v5 & 0x62)));
                break;
            case 0x230:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 752);
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1936) + 8i64 * ((unsigned __int8)__ROR4__(v5, 4) & 0xAE)) + 928i64) - FuckEnc::CacheRead<_DWORD>(v4 + 1624) + 1513942735;
                break;
            case 0x231:
                v23 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 712) >> 8);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1736) + 1640i64, &v23, v5, v4);
                break;
            case 0x232:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1168) + 456i64);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 8i64 * ((unsigned __int8)v5 & 0x95)) + 1168i64) + 1952i64);
                break;
            case 0x233:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 8i64 * (v5 & 0x15)) + 384i64);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1376) + 552i64) + 4i64 * (v5 & 0x4C)) << 15;
                break;
            case 0x234:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1480) + 1704i64);
                v23 = v5 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 168) + 1920i64) + 1584i64) ^ v11;
                break;
            case 0x235:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 104);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 696);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * (unsigned __int8)(-77 * (FuckEnc::CacheRead<_DWORD>(v10 + 1768) ^ 0x7D))) + 912i64);
                break;
            case 0x236:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 288i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 18)) + 1728i64) + 112i64) + 440i64) + 1584i64);
                break;
            case 0x237:
                v23 = v11 - 1023309500;
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 272) + v11 - 1023309500 + 1;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1824);
                v23 += FuckEnc::CacheRead<_DWORD>(v10 + 128) + 1022283284;
                break;
            case 0x238:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 776) + 1592i64) + 8i64 * (unsigned __int8)(79 * v5)) + 1072i64);
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 624) + 8i64 * ((-16 * (_BYTE)v5) & 0x11)) + 800i64) + 4i64 * (((unsigned __int8)v5 ^ 1) & 0xB5));
                break;
            case 0x239:
                v16 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 512) + 1272i64) + 8i64 * (v5 & 0x2A)) + 1104i64);
                goto LABEL_1033;
            case 0x23A:
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1112) - 1529806898);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 608) + 8i64 * ((unsigned __int8)v5 ^ 0xE1u)) + 1744i64) - 1023331882;
                break;
            case 0x23B:
                v23 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 1584) | 0x1C);
                Calls::FastCall(v4 + 1544, &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 416));
                break;
            case 0x23C:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1040) ^ v11;
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 696) + 1768i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 440i64);
                v23 -= FuckEnc::CacheRead<_DWORD>(v10 + 928);
                break;
            case 0x23D:
                Calls::FastCall(v4 + 920, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 8i64 * ((unsigned __int8)v5 ^ 8u)) + 1752i64));
                break;
            case 0x23E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1072);
                v23 = FuckEnc::CacheRead<_DWORD>(v10 + 1584) ^ v11;
                Calls::FastCall(v4 + 336, &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 744));
                break;
            case 0x23F:
                v23 = v11 ^ 0xF6EB6569;
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1592) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 496) + 784i64), 15)) + 40i64) + 968i64) ^ v11 ^ 0xF6EB6569;
                break;
            case 0x240:
                v23 = v11 + 1062837242;
                v23 = v11 + 1062837242 - FuckEnc::CacheRead<_DWORD>(v4 + 640);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 496) + 776i64);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v10 + 1584), 18));
                break;
            case 0x241:
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 272)) + 1764687893;
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1264) + 8i64 * (unsigned __int8)__ROL4__(v5, 4)) + 1048i64) + 1952i64) - 1023331973;
                break;
            case 0x242:
                v23 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1592) + 8i64 * ((unsigned __int8)v5 & 0x94)) + 312i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 4i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 96) + 56i64) & 0x78));
                break;
            case 0x243:
                v23 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 912) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1168) + 1088i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 8i64 * (unsigned __int8)(-41 * v5)) + 256i64));
                break;
            case 0x244:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1584) ^ v11;
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 96) + 272i64);
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 1744) ^ v5 | 1;
                break;
            case 0x245:
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 184) + 1040i64));
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 760) + 226972452 * (FuckEnc::CacheRead<_DWORD>(v4 + 1584) + 1);
                break;
            case 0x246:
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 280) + 8i64 * (v5 & 0x21)) + 1416i64));
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1152) + 224i64) + 4i64 * (v5 & 0x3D));
                break;
            case 0x247:
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 584));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 8i64 * ((unsigned __int8)v5 ^ 0x1Au)) + 1752i64);
                v23 -= FuckEnc::CacheRead<_DWORD>(v10 + 1584) | 0x1D;
                break;
            case 0x248:
                v23 = __ROL4__(v11, ~FuckEnc::CacheRead<_BYTE>(v4 + 384));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1376);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1704) + 1744i64) ^ 0x577E320C;
                break;
            case 0x249:
                Calls::FastCall(v4 + 264, &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1680));
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 1368) ^ 0xCA0747D9;
                break;
            case 0x24A:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 600) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 312) ^ 0x2B) & 0x6B)) + 1168i64) + 448i64);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 120) + 56i64);
                break;
            case 0x24B:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1152) + 616i64) + 8i64 * ((-2 * (_BYTE)v5) & 0x31)) + 1048i64) + 1752i64) + 744i64);
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1040);
                break;
            case 0x24C:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * (unsigned __int8)__ROR4__(v5, 21)) + 280i64) + 8i64 * ((unsigned __int8)v5 & 0xA6)) + 64i64);
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 624) + 8i64 * (v5 & 0x16)) + 1624i64);
                break;
            case 0x24D:
                v23 = __ROL4__(__ROL4__(v11, v5), 143);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 512) + 1736i64);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1264) + 8i64 * ((unsigned __int8)v5 ^ 0x89u)) + 1568i64);
                break;
            case 0x24E:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 272);
                v23 = v23 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 112i64) + 776i64) + 1040i64) - FuckEnc::CacheRead<_DWORD>(v4 + 1568);
                break;
            case 0x24F:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 640) - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1824);
                v23 -= FuckEnc::CacheRead<_DWORD>(v10 + 1696) ^ (409959045 * FuckEnc::CacheRead<_DWORD>(v4 + 1088));
                break;
            case 0x250:
                Calls::FastCall(v4 + 264, &v23, v5, v4);
                v23 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1080) + 128i64);
                break;
            case 0x251:
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * (v5 & 0x54)) + 1864i64) + 4i64 * (unsigned __int8)(-121 * v5)) * (FuckEnc::CacheRead<_DWORD>(v4 + 1368) + 631283623));
                break;
            case 0x252:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 8i64 * (v5 & 0x1F)) + 432i64);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 936) + 8i64 * ((unsigned __int8)v5 & 0x8F)) + 1048i64) + 784i64);
                break;
            case 0x253:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1696);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 4i64 * (unsigned __int8)(-87 * (FuckEnc::CacheRead<_DWORD>(v4 + 1696) - 119)));
                break;
            case 0x254:
                Calls::FastCall(v4 + 560, &v23, v5, v4);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 280) + 8i64 * (unsigned __int8)(125 * v5)) + 968i64);
                break;
            case 0x255:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1704) + 312i64);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 824) + 272i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 720) + 968i64);
                break;
            case 0x256:
                Calls::FastCall(v4 + 1248, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 608) + 8i64 * ((unsigned __int8)v5 ^ 0x9Fu)) + 1272i64) + 8i64 * (v5 & 0x7D)));
                break;
            case 0x257:
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1264) + 8i64 * (unsigned __int8)(-61 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 496) + 1040i64) & 0xEF))) + 1112i64) ^ v11;
                v23 = __ROR4__(v23, ~FuckEnc::CacheRead<_BYTE>(v4 + 104));
                break;
            case 0x258:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 56) ^ v11;
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * (unsigned __int8)__ROR4__(v5, 17)) + 1024i64) + 1728i64) + 1432i64) + 640i64);
                break;
            case 0x259:
                v23 = v11 - 977075919;
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1744) ^ (v11 - 977075919) ^ 0x443A9302;
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1704) + 1824i64) + 1416i64);
                break;
            case 0x25A:
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 272) * v5);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 64) + 1640i64, &v23, v5, v4);
                break;
            case 0x25B:
                v23 = v5 ^ (v11 + 1418307836) ^ 0x320E63EA;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 512) + 1480i64);
                v23 += ~FuckEnc::CacheRead<_DWORD>(v10 + 256);
                break;
            case 0x25C:
                v23 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 1368) << 27);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 224) + 4i64 * ((unsigned __int8)~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1624) & 0x91));
                break;
            case 0x25D:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 760) ^ v11;
                v18 = ((unsigned __int8)v5 ^ 0xEB) & 0x55;
                v19 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 88) + 288i64);
                goto LABEL_613;
            case 0x25E:
                v23 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 640) << 25);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 8i64 * (unsigned __int8)(-89 * v5)) + 1376i64) + 880i64) + 4i64 * ((-46 * (_BYTE)v5) & 0x58));
                break;
            case 0x25F:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 584) ^ v11 ^ 0x2E4344A1;
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 456);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1072) + 224i64) + 4i64 * ((unsigned __int8)v5 ^ 0x4Bu));
                break;
            case 0x260:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 456) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1480) + 1352i64);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 936) + 8i64 * (unsigned __int8)__ROL4__(v5, 1)) + 1432i64) + 256i64);
                break;
            case 0x261:
                //(*(void(__fastcall**)(int*, _QWORD, __int64))v4)(&v23, v5, v4);
                Calls::FastCall(v4, &v23, v5, v4);
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * ((unsigned __int8)v5 & 0xEC)) + 1624i64));
                break;
            case 0x262:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1024);
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 616) + 8i64 * (unsigned __int8)(13 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1376) + 760i64) - 96)) + 144i64) + 4i64 * (unsigned __int8)(16 * v5));
                break;
            case 0x263:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 88) + 1584i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 40) + 1496i64) + 744i64);
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_DWORD>(v10 + 1696));
                break;
            case 0x264:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 128i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 824);
                v23 = v23 - FuckEnc::CacheRead<_DWORD>(v10 + 432) + 769610559;
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1768);
                break;
            case 0x265:
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1624));
                v23 ^= (FuckEnc::CacheRead<_DWORD>(v4 + 928) << 11) ^ (v5 + (FuckEnc::CacheRead<_DWORD>(v4 + 384) ^ 0xC3018944));
                break;
            case 0x266:
                Calls::FastCall(v4 + 216, &v23, v5, v4);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 256i64) ^ 0x7B1F9F1D;
                break;
            case 0x267:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1728) + 1512i64, &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 448));
                v23 ^= v5;
                break;
            case 0x268:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1624);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 424) + 416i64) + 1424i64);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 448) + 56i64) + 1;
                break;
            case 0x269:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1912) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1296) & 0x9B)) + 288i64) + 8i64 * ((unsigned __int8)__ROR4__(v5, 18) & 0xA1)) + 968i64);
                break;
            case 0x26A:
                Calls::FastCall(v4 + 1544, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 696) + 1080i64));
                v23 = __ROR4__(v23, FuckEnc::CacheRead<_DWORD>(v4 + 1584));
                break;
            case 0x26B:
                v23 = __ROR4__(__ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1440)), 68);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 512) + 760i64);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 184) + 432i64);
                break;
            case 0x26C:
                v23 = v11 ^ 0xAEF36B4C;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1704);
                Calls::FastCall(v10 + 1872, &v23, v5, v4);
                v23 ^= 0xC3013168;
                break;
            case 0x26D:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 8i64 * (v5 & 0x3D)) + 1920i64) + 8i64 * (unsigned __int8)(13 * v5)) + 696i64);
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1208) + 4i64 * (unsigned __int8)__ROR4__(v5, 20)));
                break;
            case 0x26E:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1296);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1352);
                Calls::FastCall(v4 + 232, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 616) + 8i64 * (unsigned __int8)__ROR4__(v5, 24)));
                break;
            case 0x26F:
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * ((unsigned __int8)~(_BYTE)v5 & 0xE1)) + 1416i64) ^ v11;
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 552) + 4i64 * ((unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1808) + 760i64), 21) & 0xFA));
                break;
            case 0x270:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 312) - v5;
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 928);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * (v5 & 0x51)) + 928i64);
                break;
            case 0x271:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 416);
                v23 = v5 ^ v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1784) + 4i64 * (v5 & 0x18)) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 776) + 1784i64) + 4i64 * ((unsigned __int8)v5 & 0xEF));
                break;
            case 0x272:
                v23 = __ROL4__(~(_DWORD)v11, 18);
                Calls::FastCall(v4 + 216, &v23, v5, v4);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1088);
                break;
            case 0x273:
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1088) * (FuckEnc::CacheRead<_DWORD>(v4 + 760) ^ 0x2C3B632B) * ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 392) + 1040i64));
                break;
            case 0x274:
                Calls::FastCall(v4 + 992, &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 96));
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 64) + 600i64);
                break;
            case 0x275:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 392) + 1784i64) + 4i64 * (((unsigned __int8)v5 ^ 1) & 0x81));
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 928);
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 1040) ^ v5;
                break;
            case 0x276:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1112);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 696);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1784) + 4i64 * (((unsigned __int8)v5 ^ 0xF9) & 0x4F));
                break;
            case 0x277:
                v23 = v11 ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 1768)) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1624) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1080) + 224i64) + 4i64 * (unsigned __int8)(103 * v5)));
                break;
            case 0x278:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 752) + 1624i64);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 272);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1824);
                v23 = __ROL4__(FuckEnc::CacheRead<_DWORD>(v10 + 1296) ^ v23, 164);
                break;
            case 0x279:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 440);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 728) + 8i64 * (unsigned __int8)(93 * FuckEnc::CacheRead<_DWORD>(v4 + 1416)), &v23, v5, v4);
                break;
            case 0x27A:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 720);
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1624) * FuckEnc::CacheRead<_DWORD>(v10 + 1912) * (1 - 1023309500 * FuckEnc::CacheRead<_DWORD>(v4 + 272));
                break;
            case 0x27B:
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 432));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 744);
                Calls::FastCall(v4 + 520, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 616) + 8i64 * (__ROL4__(v5, 27) & 0x91)));
                break;
            case 0x27C:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 824) + 328i64, &v23, v5, v4);
                v23 = __ROR4__(v23, ~FuckEnc::CacheRead<_BYTE>(v4 + 104));
                break;
            case 0x27D:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * (unsigned __int8)__ROL4__(v5, 12)) + 1920i64) + 8i64 * (unsigned __int8)(-78 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1376) + 272i64))) + 600i64);
                break;
            case 0x27E:
                v23 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 784) ^ 0x8C44D280);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * (unsigned __int8)__ROR4__(v5, 20)) + 1072i64) + 472i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 1));
                break;
            case 0x27F:
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 40) + 1864i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 2)) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1104) + 1480i64);
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1864) + 4i64 * (__ROR4__(v5, 31) & 0xAD)));
                break;
            case 0x280:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1088);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 128i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 168) + 1744i64);
                break;
            case 0x281:
                v16 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 824) + 624i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 31));
                goto LABEL_1033;
            case 0x282:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 424) + 712i64) ^ 2) & 0x32)) + 256i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 752);
                v23 += ~FuckEnc::CacheRead<_DWORD>(v10 + 1952);
                break;
            case 0x283:
                v23 = v11 ^ 0x4BF3CBF0;
                Calls::FastCall(v4 + 984, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1264) + 8i64 * (v5 & 0x64)));
                break;
            case 0x284:
                v23 = v11 - 879111937;
                v23 = v11 - 879111937 - FuckEnc::CacheRead<_DWORD>(v4 + 1568) - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1080);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 440) + 1584i64);
                break;
            case 0x285:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1768);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1480) + 824i64) + 1080i64);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1024) + 1912i64);
                break;
            case 0x286:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 368);
                v23 = v11 + 1806712566 * FuckEnc::CacheRead<_DWORD>(v10 + 128);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 928) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1400) + 584i64);
                break;
            case 0x287:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1760);
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1272) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 840) + 760i64) * v5, 19)) + 144i64) + 4i64 * (unsigned __int8)(-22 * v5)) ^ v11;
                break;
            case 0x288:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * ((unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 1624), 6) & 0x9B)) + 424i64) + 512i64) + 440i64);
                v23 = v11 + ~FuckEnc::CacheRead<_DWORD>(v10 + 256);
                break;
            case 0x289:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 440);
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1104) + 1496i64) + 1096i64) + 1536i64) + 4i64 * (unsigned __int8)(-3 * FuckEnc::CacheRead<_BYTE>(v10 + 760))));
                break;
            case 0x28A:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 8i64 * (__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 1256), 12) & 2)) + 424i64);
                v23 = FuckEnc::CacheRead<_DWORD>(v10 + 104) ^ v11 ^ 0x9D9BF077;
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1704) + 1568i64);
                break;
            case 0x28B:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1696) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1680);
                Calls::FastCall(v4 + 648, &v23, v5, v10);
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 312);
                break;
            case 0x28C:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1104) + 1736i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1104) + 1448i64) + 8i64 * (__ROR4__(v5, 19) & 0x60), &v23, v5, v4);
                break;
            case 0x28D:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1088) ^ v11;
                v23 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 1768i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1424);
                v23 -= FuckEnc::CacheRead<_DWORD>(v10 + 272);
                break;
            case 0x28E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 424);
                Calls::FastCall(v10 + 264, &v23, v5, v4);
                v23 ^= 1772355606 * FuckEnc::CacheRead<_DWORD>(v4 + 456);
                break;
            case 0x28F:
                v23 = v11 ^ 0xCE61CFEA;
                v23 = ((v11 ^ 0xCE61CFEA) + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * ((unsigned __int8)v5 & 0xF9)) + 1752i64) + 1040i64) ^ 0xD13FD4D8)) ^ 0x6E22D0FF;
                break;
            case 0x290:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 424);
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 616) + 8i64 * ((unsigned __int8)v5 & 0xFB)) + 1600i64) + 1416i64) - 788591534;
                break;
            case 0x291:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1584) ^ v11 ^ 0x6C1D4BED;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1104);
                Calls::FastCall(v4 + 336, &v23, v5, v10);
                break;
            case 0x292:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 712) & 0xF7)) + 1368i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 88);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 752) + 312i64) ^ 0xB1C31131;
                break;
            case 0x293:
                v23 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 928) ^ (1931058695 * FuckEnc::CacheRead<_DWORD>(v4 + 1112)) ^ 0x2C28A77F);
                break;
            case 0x294:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 384);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 696) + 1624i64);
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1072) + 1624i64));
                break;
            case 0x295:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1744) ^ v11;
                v23 ^= v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 8i64 * (unsigned __int8)(-19 * v5)) + 952i64) + 8i64 * (v5 & 0x58)) + 1040i64);
                break;
            case 0x296:
                v23 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 1416) << 7) * (FuckEnc::CacheRead<_DWORD>(v4 + 784) ^ v5) - FuckEnc::CacheRead<_DWORD>(v4 + 1696);
                break;
            case 0x297:
                v20 = __ROL4__(v11, 165);
                v23 = v20 + 579567138;
                v23 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1592) + 8i64 * (unsigned __int8)__ROL4__(v5, 8)) + 1696i64) + v20 - 1646350519);
                break;
            case 0x298:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 512);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 608) + 8i64 * (v5 & 0x13)) + 192i64, &v23, v5, v4);
                break;
            case 0x299:
                v23 = __ROL4__(v11, 4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1072);
                v23 = v23 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1680) + 456i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 776) + 56i64);
                break;
            case 0x29A:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1728) + 824i64);
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1536) + 4i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 8i64 * (((unsigned __int8)v5 ^ 0xFD) & 0x4A)) + 1112i64) & 0xB9)) + 1;
                break;
            case 0x29B:
                v23 = v11 - 941446237;
                v23 = __ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 392) + 1280i64) + 8i64 * (unsigned __int8)(-30 * FuckEnc::CacheRead<_BYTE>(v4 + 1040))) + 272i64) ^ (v11 - 941446237), 31);
                break;
            case 0x29C:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 776);
                v23 = FuckEnc::CacheRead<_DWORD>(v10 + 584) ^ v11;
                v23 += 619901770 * FuckEnc::CacheRead<_DWORD>(v4 + 1696) - FuckEnc::CacheRead<_DWORD>(v4 + 1568);
                break;
            case 0x29D:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 1624i64);
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 640);
                Calls::FastCall(v4 + 1176, &v23, v5, v4);
                break;
            case 0x29E:
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 824) + 608i64) + 8i64 * (unsigned __int8)(31 * v5)) + 184i64) + 184i64) + 824i64) + 1704i64) + 56i64) ^ v11;
                break;
            case 0x29F:
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 928) << 7);
                v23 = __ROR4__(v23, 93 * FuckEnc::CacheRead<_BYTE>(v4 + 104) * (FuckEnc::CacheRead<_BYTE>(v4 + 1440) | 0x18));
                break;
            case 0x2A0:
                v23 = (FuckEnc::CacheRead<_DWORD>(v4 + 968) ^ v11) - 692928684;
                v23 = v23 - FuckEnc::CacheRead<_DWORD>(v4 + 1744) + 771800639;
                v23 ^= ~FuckEnc::CacheRead<_DWORD>(v4 + 432);
                break;
            case 0x2A1:
                v23 = ~(v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 144i64) + 4i64 * ((unsigned __int8)v5 & 0xD4)) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 120) + 600i64) << 16)));
                break;
            case 0x2A2:
                Calls::FastCall(v4 + 1840, &v23, v5, v4);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 416) + 1728i64) + 128i64);
                break;
            case 0x2A3:
                v23 = __ROL4__(v11, 97);
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 1088);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * (unsigned __int8)__ROL4__(v5, 21)) + 1128i64) + 4i64 * (v5 & 0x30));
                break;
            case 0x2A4:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 1432i64) + 440i64);
                v23 = FuckEnc::CacheRead<_DWORD>(v10 + 1952) ^ v11;
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 1952) ^ 0x1F0CE705;
                break;
            case 0x2A5:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 56);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1952) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1408) + 128i64);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1568);
                break;
            case 0x2A6:
                v23 = (unsigned int)0x11269993 ^ v11;
                v23 = (unsigned int)0x11269993 ^ v11 ^ ((FuckEnc::CacheRead<_DWORD>(v4 + 256) + 2066163536) * ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1680) + 968i64));
                break;
            case 0x2A7:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1768) ^ v11;
                v23 += v5 + FuckEnc::CacheRead<_DWORD>(v4 + 584);
                Calls::FastCall(v4 + 520, &v23, v5, v4);
                break;
            case 0x2A8:
                v23 = v11 - 1469315481;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1760) + 1760i64);
                v23 = v11 - 1469315481 + ~(FuckEnc::CacheRead<_DWORD>(v4 + 256) * FuckEnc::CacheRead<_DWORD>(v10 + 272));
                break;
            case 0x2A9:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1584);
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 784) & 0xB4)) + 440i64) + 496i64) + 1240i64)) ^ 0xBCCBD0FF;
                break;
            case 0x2AA:
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 8i64 * ((unsigned __int8)(-19 * v5) & 0xA3)) + 1368i64) ^ v11;
                v23 -= 673496436 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1680) + 144i64) + 4i64 * (v5 & 0x64));
                break;
            case 0x2AB:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1088);
                Calls::FastCall(v4 + 856, &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1760));
                v23 ^= 0xA658C2C7;
                break;
            case 0x2AC:
                v23 = v11 - 1708195590;
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 600) ^ (v11 - 1708195590);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1080) + 368i64) + 112i64);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v10 + 104);
                break;
            case 0x2AD:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1864) + 4i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 432) ^ 0x10) & 0x30));
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1376) + 1536i64) + 4i64 * (unsigned __int8)(-107 * v5)) ^ 0x20C3627D;
                break;
            case 0x2AE:
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1352) + 552i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 28)) + v5 * ~FuckEnc::CacheRead<_BYTE>(v4 + 1624));
                break;
            case 0x2AF:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 640);
                v23 ^= v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 128) ^ FuckEnc::CacheRead<_DWORD>(v4 + 1440);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 784);
                break;
            case 0x2B0:
                Calls::FastCall(v4 + 592, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 744) + 1048i64));
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 584);
                break;
            case 0x2B1:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 584) ^ v11;
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 1296) << 27;
                v23 ^= 654927058 * (FuckEnc::CacheRead<_DWORD>(v4 + 432) ^ v5);
                break;
            case 0x2B2:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1808);
                v23 = v11 - 895931571 * FuckEnc::CacheRead<_DWORD>(v10 + 1040);
                Calls::FastCall(v4 + 320, &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1480));
                break;
            case 0x2B3:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 600);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 768);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v10 + 432) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 552) + 4i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1568) ^ 0xBB) & 0xD6));
                break;
            case 0x2B4:
                v23 = v11 ^ 0xC31131F0;
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1040) ^ v11 ^ 0xC31131F0;
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 968);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1256) & 0xFFFFFFF6;
                break;
            case 0x2B5:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 8i64 * ((unsigned __int8)v5 & 0xD0)) + 1712i64) + 8i64 * ((unsigned __int8)v5 & 0xF9), &v23, v5, v4);
                break;
            case 0x2B6:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 912);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 8i64 * (((unsigned __int8)v5 ^ 0xFB) & 0x4C)) + 1920i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 22)) + 912i64) ^ 0x7F1AA443;
                break;
            case 0x2B7:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 64);
                Calls::FastCall(v10 + 8, &v23, v5, v4);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 928);
                break;
            case 0x2B8:
                v23 = v11 ^ (-290427480 * ~(1839363858 * FuckEnc::CacheRead<_DWORD>(v4 + 104)));
                v23 = __ROR4__(v23, ~FuckEnc::CacheRead<_BYTE>(v4 + 104));
                break;
            case 0x2B9:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1240);
                Calls::FastCall(v4 + 1632, &v23, v5, v4);
                v23 += 1097882920;
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_DWORD>(v4 + 584));
                break;
            case 0x2BA:
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 56) - 788579943);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1680);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1624) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1824) + 1896i64);
                break;
            case 0x2BB:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 128) ^ v11;
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1416) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 424) + 768i64) + 1112i64);
                break;
            case 0x2BC:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 312);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 104) | 9;
                v23 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 96) + 1088i64) ^ v23);
                break;
            case 0x2BD:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1240) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 744);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v10 + 712);
                v23 -= 1581655482 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 512) + 312i64);
                break;
            case 0x2BE:
                v23 = v11 - 545305679;
                Calls::FastCall(v4 + 328, &v23, v5, v4);
                v23 -= 2 * FuckEnc::CacheRead<_DWORD>(v4 + 1112);
                break;
            case 0x2BF:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 432) * (FuckEnc::CacheRead<_DWORD>(v4 + 1768) + 1);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 8i64 * (((unsigned __int8)v5 ^ 0x3C) & 0xBF)) + 1568i64);
                break;
            case 0x2C0:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * (unsigned __int8)(2 * v5)) + 1592i64) + 8i64 * ((unsigned __int8)v5 ^ 0x26u)) + 648i64, &v23, v5, v4);
                break;
            case 0x2C1:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 8i64 * ((unsigned __int8)v5 & 0xAC)) + 840i64) + 936i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 23)) + 432i64) + 1;
                break;
            case 0x2C2:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 496) + 1280i64) + 8i64 * ((12 * (_BYTE)v5) & 0x19)) + 1152i64);
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v10 + 1240) + FuckEnc::CacheRead<_BYTE>(v4 + 1912));
                break;
            case 0x2C3:
                v23 = v11 + ~FuckEnc::CacheRead<_DWORD>(v4 + 760);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 840) + 1736i64) + 1480i64) + 472i64) + 4i64 * ((unsigned __int8)v5 & 0xF5));
                break;
            case 0x2C4:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1080) + 1280i64) + 8i64 * (__ROR4__(v5, 15) & 0x4B)) + 1480i64) + 760i64);
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 272) * v5;
                break;
            case 0x2C5:
                v23 = v11 + 1901150692;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1616) + 8i64 * ((-16 * FuckEnc::CacheRead<_BYTE>(v4 + 912)) & 0x11), &v23, v5, v4);
                break;
            case 0x2C6:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 168) + 96i64) + 840i64);
                Calls::FastCall(v10 + 920, &v23, v5, v4);
                break;
            case 0x2C7:
                v23 = v11 ^ (1605664390 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 384i64));
                Calls::FastCall(v4 + 232, &v23, v5, v4);
                break;
            case 0x2C8:
                v23 = __ROR4__(v11, 106 * FuckEnc::CacheRead<_BYTE>(v4 + 784));
                v23 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 368) + 1896i64);
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 912);
                break;
            case 0x2C9:
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 496) + 1408i64) + 1608i64) + 8i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 1568), 14) & 0x73)) + 1456i64) + 4i64 * (__ROR4__(v5, 28) & 0x6A)) ^ v11;
                break;
            case 0x2CA:
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1920) + 8i64 * (((unsigned __int8)v5 ^ 0xFD) & 0x22)) + 184i64) + 1152i64) + 1584i64) ^ v11;
                v23 = __ROR4__(v23, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1104) + 1296i64));
                break;
            case 0x2CB:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1048);
                v23 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1208) + 4i64 * (((unsigned __int8)v5 ^ 0xF3) & 0x1E)) ^ v11);
                v23 ^= ~FuckEnc::CacheRead<_DWORD>(v4 + 1040);
                break;
            case 0x2CC:
                v23 = (unsigned int)0x801C804 + v11 + 2;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 120i64) + 1280i64) + 8i64 * (unsigned __int8)(-19 * v5)) + 696i64);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v10 + 128);
                break;
            case 0x2CD:
                v23 = __ROL4__(v11, ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 448) + 1296i64));
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_DWORD>(v4 + 1368));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 416);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1040);
                break;
            case 0x2CE:
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 744) + 120i64) + 368i64) + 1088i64) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 8i64 * (((unsigned __int8)v5 ^ 1) & 0x25)) + 256i64));
                break;
            case 0x2CF:
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1480) + 1952i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 776);
                v23 = v5 + (v23 ^ ~FuckEnc::CacheRead<_DWORD>(v10 + 968));
                break;
            case 0x2D0:
                v23 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 128i64) | 9);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 40) + 912i64) ^ 0x71F3AE4F;
                break;
            case 0x2D1:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 64) + 1352i64);
                v17 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1824) + 1680i64);
            LABEL_522:
                Calls::FastCall(v17 + 984, &v23, v5, v4);
                break;
            case 0x2D2:
                v23 = (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1040)) ^ 0xC6D1FF41;
                v23 = (v23 ^ (1993473857 * ((FuckEnc::CacheRead<_DWORD>(v4 + 456) - 1023332080) & 0xFFFFFFFA))) - 14422495;
                break;
            case 0x2D3:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 368) + 720i64) + 1760i64) + 288i64) + 8i64 * ((-32 * (_BYTE)v5) & 0x28)) + 1680i64);
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 112) + 640i64);
                break;
            case 0x2D4:
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 312));
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1568);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 840);
                v23 = __ROR4__(v23, 16 * FuckEnc::CacheRead<_BYTE>(v10 + 1568));
                break;
            case 0x2D5:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 120) + 472i64) + 4i64 * ((unsigned __int8)~(_BYTE)v5 & 0xA1));
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1208) + 4i64 * ((unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 8i64 * ((4 * (_BYTE)v5) & 0xC)) + 56i64), 26) & 0xC9));
                break;
            case 0x2D6:
                v23 = v11 + v5;
                v23 = v11 + v5 + ~FuckEnc::CacheRead<_DWORD>(v4 + 928) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 184) + 1424i64) + 1624i64);
                break;
            case 0x2D7:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 824) + 120i64) + 720i64) + 952i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 31)) + 744i64) + 1040i64);
                break;
            case 0x2D8:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1240) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1536) + 4i64 * ((unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 1296) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1920) + 8i64 * (v5 & 0x4B)) + 1040i64), 26) & 0x9B));
                break;
            case 0x2D9:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 760i64);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 640);
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1112) + v23 - 1621005106;
                break;
            case 0x2DA:
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * (unsigned __int8)(95 * FuckEnc::CacheRead<_BYTE>(v4 + 104))) + 1256i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 120);
                v23 = v23 - FuckEnc::CacheRead<_DWORD>(v10 + 1088) - v5;
                break;
            case 0x2DB:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 104) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 752) + 88i64) + 1408i64);
                Calls::FastCall(v4 + 544, &v23, v5, v10);
                break;
            case 0x2DC:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1400) + 1696i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 696);
                v23 = (v23 + ~FuckEnc::CacheRead<_DWORD>(v10 + 600)) ^ 0x257F5FE1;
                break;
            case 0x2DD:
                v23 = v11 + 406650575;
                v23 = v11 + 406650576 + ((unsigned int)(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 280) + 8i64 * (unsigned __int8)(-103 * v5)) + 1040i64) - ((_DWORD)0x9D89681 + 2)) >> 5);
                break;
            case 0x2DE:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 744) + 96i64);
                v23 = v11 - (~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1536) + 4i64 * (unsigned __int8)__ROL4__(v5, 6)) & 0xFFFFFFF3);
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 1744);
                break;
            case 0x2DF:
                v23 = v5 ^ v11;
                v23 = __ROL4__(v5 ^ v11, FuckEnc::CacheRead<_DWORD>(v4 + 1368));
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 760) & 0x44)) + 784i64);
                break;
            case 0x2E0:
                Calls::FastCall(v4 + 1640, &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 752));
                v23 = __ROR4__(v23, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * ((unsigned __int8)v5 & 0x8D)) + 1040i64));
                break;
            case 0x2E1:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1072);
                v23 = v11 - ((unsigned int)0x10D6D0FF ^ FuckEnc::CacheRead<_DWORD>(v10 + 760));
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 120) + 720i64) + 800i64) + 4i64 * ((unsigned __int8)(-103 * v5) & 0x9A));
                break;
            case 0x2E2:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1376) + 1424i64);
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 288) + 8i64 * ((unsigned __int8)v5 & 0x9F)) + 432i64) ^ v11;
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 496) + 1440i64);
                break;
            case 0x2E3:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1080) + 1928i64) + 8i64 * (unsigned __int8)(-95 * v5)) + 1072i64) + 1408i64);
                v23 = __ROR4__(v11, ~FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v10 + 1168) + 1112i64));
                break;
            case 0x2E4:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1096);
                v23 = v11 + 710027584 * FuckEnc::CacheRead<_DWORD>(v10 + 1624);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1400) + 1912i64) ^ v5;
                break;
            case 0x2E5:
                v23 = ~(_DWORD)v11;
                v23 = ~(_DWORD)v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 8i64 * (unsigned __int8)__ROR4__(v5, 4)) + 1760i64) + 296i64) + 8i64 * (v5 & 0x53)) + 968i64);
                break;
            case 0x2E6:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1024);
                v23 = FuckEnc::CacheRead<_DWORD>(v10 + 1912) ^ v11;
                v23 = ~(v23 ^ (1681816448 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 120) + 1208i64) + 4i64 * (unsigned __int8)(85 * v5))));
                break;
            case 0x2E7:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 464) + 8i64 * ((unsigned __int8)(-80 * FuckEnc::CacheRead<_BYTE>(v4 + 1296)) & 0x90), &v23, v5, v4);
                break;
            case 0x2E8:
                v23 = v11 ^ 0xCAB9A5D5;
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 440i64) + 416i64) + 1424i64) + 112i64) + 968i64) ^ v11 ^ 0xCAB9A5D5;
                break;
            case 0x2E9:
                v23 = v11 ^ ~(FuckEnc::CacheRead<_DWORD>(v4 + 104) ^ v5);
                v23 = v5 + (v23 ^ ~(FuckEnc::CacheRead<_DWORD>(v4 + 1240) ^ v5));
                break;
            case 0x2EA:
                v23 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 312) | 0xF);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 368) + 512i64);
                v23 = (v23 - FuckEnc::CacheRead<_DWORD>(v10 + 600)) ^ 0x35A1023E;
                break;
            case 0x2EB:
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 720) + 640i64));
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1040);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 448);
                v23 += FuckEnc::CacheRead<_DWORD>(v10 + 968);
                break;
            case 0x2EC:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 416) + 1808i64);
                v23 = FuckEnc::CacheRead<_DWORD>(v10 + 1296) ^ v11;
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 456) * (FuckEnc::CacheRead<_DWORD>(v4 + 784) ^ 0x3CD0FFB6);
                break;
            case 0x2ED:
                v23 = v11 + 1023309500;
                v23 = __ROL4__(v11 + 1023309500, FuckEnc::CacheRead<_DWORD>(v4 + 1584));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1376);
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 1240) ^ FuckEnc::CacheRead<_DWORD>(v10 + 1896);
                break;
            case 0x2EE:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1744) + 1040296179;
                v23 += 463934322 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1264) + 8i64 * (unsigned __int8)__ROR4__(v5, 26)) + 1088i64) & 0xFFFFFFFD);
                break;
            case 0x2EF:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1584) + 1402470636;
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1264) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1088) ^ 0x5Au)) + 96i64) + 1296i64);
                break;
            case 0x2F0:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1824);
                v23 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 968) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 4i64 * (unsigned __int8)(-50 * (FuckEnc::CacheRead<_DWORD>(v10 + 1744) | 0x10))));
                break;
            case 0x2F1:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1912);
                v23 = __ROR4__(v23, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1808) + 296i64) + 8i64 * (__ROR4__(v5, 26) & 0xB1)) + 880i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 2)));
                break;
            case 0x2F2:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 912) + 1023332034;
                v23 = ~(v23 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 1368));
                break;
            case 0x2F3:
                v23 = v11 - 238700502;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1920) + 8i64 * (unsigned __int8)(-20 * v5)) + 1080i64) + 1728i64) + 1680i64);
                v23 = __ROR4__(v11 - 238700502, FuckEnc::CacheRead<_DWORD>(v10 + 128));
                break;
            case 0x2F4:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1408) + 456i64) - FuckEnc::CacheRead<_DWORD>(v4 + 912);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 1072i64);
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_DWORD>(v10 + 1256));
                break;
            case 0x2F5:
                Calls::FastCall(v4 + 648, &v23, v5, v4);
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 1952) * v5;
                break;
            case 0x2F6:
                v23 = __ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 640) ^ v11, 111);
                v23 = (v23 ^ FuckEnc::CacheRead<_DWORD>(v4 + 1568) & 0xFFFFFFF1) + 1694242847;
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_DWORD>(v4 + 1624));
                break;
            case 0x2F7:
                v23 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1352) + 880i64) + 4i64 * ((unsigned __int8)v5 ^ 0xC1u)) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 496) + 1440i64) & 0xFFFFFFF6;
                break;
            case 0x2F8:
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 608) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 584) & 0xA9)) + 1424i64) + 1728i64) + 752i64) + 1456i64) + 4i64 * (((unsigned __int8)v5 ^ 0xA9) & 0xD6)) ^ v11;
                break;
            case 0x2F9:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1352) + 1480i64);
                v23 = v11 - (FuckEnc::CacheRead<_DWORD>(v10 + 928) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 696) + 96i64) + 384i64) ^ 0xC311313C);
                break;
            case 0x2FA:
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1376) + 1768i64) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1168) + 824i64) + 600i64) >> 20));
                break;
            case 0x2FB:
                v23 = __ROL4__(v11 - 1577203826, 68);
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 1368);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1824) + 768i64);
                v23 -= FuckEnc::CacheRead<_DWORD>(v10 + 1296);
                break;
            case 0x2FC:
                v23 = v11 ^ 0xC311319D;
                v23 = (v11 ^ 0xC311319D) + 1296913632 * ((((unsigned int)0x7C3012F + 2) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1080) + 1256i64) + 858224699)) + 1);
                break;
            case 0x2FD:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 368) + 1048i64) + 296i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 24)) + 1456i64) + 4i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 1416) ^ 0x3A3CF123, 27) & 0x16));
                break;
            case 0x2FE:
                v23 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 1368) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1480) + 624i64) + 8i64 * (v5 & 0x68)) + 1408i64) + 968i64);
                break;
            case 0x2FF:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 440);
                v23 = FuckEnc::CacheRead<_DWORD>(v10 + 1112) ^ v11;
                v21 = ((unsigned __int8)v5 ^ 0x21) & 0x77;
                v22 = FuckEnc::CacheRead<_QWORD>(v4 + 1272);
                goto LABEL_776;
            case 0x300:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1808) + 600i64);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 600);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 120);
                v23 += FuckEnc::CacheRead<_DWORD>(v10 + 928) + 1;
                break;
            case 0x301:
                Calls::FastCall(v4 + 544, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 8i64 * (unsigned __int8)(32 * v5)) + 1728i64));
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_DWORD>(v4 + 128));
                break;
            case 0x302:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 40) + 1408i64) + 1608i64) + 8i64 * ((unsigned __int8)v5 & 0xC8)) + 976i64, &v23, v5, v4);
                break;
            case 0x303:
                v23 = v11 + ((-789076717 * FuckEnc::CacheRead<_DWORD>(v4 + 912)) ^ (-1023309500 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1040) & 0xE5)) + 256i64)));
                break;
            case 0x304:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1368) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1264) + 8i64 * ((unsigned __int8)v5 & 0xF6)) + 784i64);
                v23 = __ROR4__(v23, FuckEnc::CacheRead<_BYTE>(v4 + 1584) | 0xE);
                break;
            case 0x305:
                v23 = v11 + ~FuckEnc::CacheRead<_DWORD>(v4 + 56);
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 1416) + 1268449168 * FuckEnc::CacheRead<_DWORD>(v4 + 784) + 1;
                break;
            case 0x306:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1424);
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1864) + 4i64 * (unsigned __int8)(94 * v5)) ^ v11;
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 1912) ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 56);
                break;
            case 0x307:
                v23 = v11 ^ 0x7699A555;
                v23 = v11 ^ 0x7699A555 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 448) + 1912i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1480) + 168i64) + 1040i64));
                break;
            case 0x308:
                v23 = v11 ^ ((FuckEnc::CacheRead<_DWORD>(v4 + 1624) ^ 0x9B377D74) + (FuckEnc::CacheRead<_DWORD>(v4 + 1696) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1480) + 1896i64) << 29)));
                break;
            case 0x309:
                v23 = __ROL4__(v11, 188) - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1072);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1536) + 4i64 * (((unsigned __int8)v5 ^ 0x20) & 0xF0));
                break;
            case 0x30A:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 784);
                Calls::FastCall(v4 + 984, &v23, v5, v4);
                v23 += -1227226015 * FuckEnc::CacheRead<_DWORD>(v4 + 256);
                break;
            case 0x30B:
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 936) + 8i64 * (unsigned __int8)(22 * FuckEnc::CacheRead<_BYTE>(v4 + 272))) + 1424i64) + 1040i64) ^ v11 ^ 0x44D1FF41;
                break;
            case 0x30C:
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1080) + 1928i64) + 8i64 * (((unsigned __int8)v5 ^ 0x30) & 0xB6)) + 1072i64) + 1920i64) + 8i64 * (unsigned __int8)(9 * v5)) + 368i64) + 1768i64) ^ v11;
                break;
            case 0x30D:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 56);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * ((unsigned __int8)v5 ^ 0x84u)) + 1952i64);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 40) + 1040i64);
                break;
            case 0x30E:
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 128) | 0x14);
                v23 = v23 - (FuckEnc::CacheRead<_DWORD>(v4 + 600) << 22) - FuckEnc::CacheRead<_DWORD>(v4 + 456);
                break;
            case 0x30F:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 8i64 * (unsigned __int8)(104 * v5)) + 1120i64) + 8i64 * (unsigned __int8)(-27 * v5), &v23, v5, v4);
                break;
            case 0x310:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 104i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1400) + 1648i64, &v23, v5, v4);
                break;
            case 0x311:
                v23 = ((((unsigned int)0xF96A4FC ^ v11) - 1023309500) ^ 0x98D0FF5B) + 1566999675;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 40) + 368i64);
                v23 -= FuckEnc::CacheRead<_DWORD>(v10 + 912);
                break;
            case 0x312:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 720);
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1928) + 8i64 * (unsigned __int8)(-89 * v5)) + 800i64) + 4i64 * (v5 & 0x4E)) * (FuckEnc::CacheRead<_DWORD>(v4 + 1256) ^ 0x14C31131);
                break;
            case 0x313:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1240) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 840) + 1528i64, &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1104));
                break;
            case 0x314:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 8i64 * (~(_BYTE)v5 & 0x40)) + 64i64);
                v23 = v11 ^ (-1617226055 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 4i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v10 + 128), 4)));
                break;
            case 0x315:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 96) + 1752i64);
                v23 = v11 - ((FuckEnc::CacheRead<_DWORD>(v10 + 1296) * ~FuckEnc::CacheRead<_DWORD>(v4 + 1088)) | 0x16);
                break;
            case 0x316:
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1264) + 8i64 * (unsigned __int8)__ROR4__(v5, 12)) + 1624i64) ^ v11;
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 8i64 * (((unsigned __int8)v5 ^ 0xAD) & 0xDA)) + 584i64) ^ 0xB39E1C9B;
                break;
            case 0x317:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1480);
                Calls::FastCall(v4 + 336, &v23, v5, v10);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 840) + 184i64) + 432i64);
                break;
            case 0x318:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 784);
                v23 ^= v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 760);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1864) + 4i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1168) + 312i64) ^ 0x1A) & 0xFE));
                break;
            case 0x319:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 448);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1280) + 8i64 * ((unsigned __int8)v5 & 0xDE)) + 920i64, &v23, v5, v4);
                break;
            case 0x31A:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 448) + 1384i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 30), &v23, v5, v4);
                break;
            case 0x31B:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1104) + 96i64);
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 776) + 912i64);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1104) + 128i64);
                break;
            case 0x31C:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1568);
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_DWORD>(v4 + 1624) ^ 0x2A);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 8i64 * (unsigned __int8)(-110 * v5)) + 256i64);
                break;
            case 0x31D:
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1760) + 1240i64) ^ v11;
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * (unsigned __int8)(-4 * v5)) + 1040i64) + 1;
                break;
            case 0x31E:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1112) ^ v11 ^ 0xE9F99F15;
                v23 = __ROL4__(v23, ~(FuckEnc::CacheRead<_BYTE>(v4 + 456) ^ FuckEnc::CacheRead<_BYTE>(v4 + 1240) ^ 0x4A));
                break;
            case 0x31F:
                v23 = __ROR4__(v11, (unsigned int)(761072734 * FuckEnc::CacheRead<_DWORD>(v4 + 712)) >> 17);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 256), 1)) + 1368i64);
                break;
            case 0x320:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 776);
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 760) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1760) + 1920i64) + 8i64 * ((unsigned __int8)v5 ^ 0x8Du)) + 1752i64) + 1088i64));
                break;
            case 0x321:
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 640));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1104);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v10 + 312) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 496) + 1424i64) + 256i64);
                break;
            case 0x322:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1240);
                Calls::FastCall(v4 + 1640, &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1104));
                break;
            case 0x323:
                v23 = v11 - 4 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 1296i64);
                v23 = __ROR4__(v23, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1760) + 1152i64) + 1584i64));
                break;
            case 0x324:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1440) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1728) + 184i64);
                Calls::FastCall(v4 + 192, &v23, v5, v10);
                break;
            case 0x325:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 448);
                Calls::FastCall(v4 + 1632, &v23, v5, v10);
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 432) ^ 0xF68530F0;
                break;
            case 0x326:
                v23 = v11 - 1942333596;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 496);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 1104) + 320i64, &v23, v5, v4);
                break;
            case 0x327:
                v23 = v11 ^ (-1165923179 * FuckEnc::CacheRead<_DWORD>(v4 + 104));
                Calls::FastCall(v4 + 1960, &v23, v5, v4);
                break;
            case 0x328:
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1496) + 1928i64) + 8i64 * ((unsigned __int8)v5 & 0xF4)) + 1048i64) + 1480i64) + 1080i64) + 1400i64) + 600i64) ^ v11;
                break;
            case 0x329:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 600) ^ v11;
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 512) + 296i64) + 8i64 * (v5 & 0x2A)) + 584i64);
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_DWORD>(v4 + 256));
                break;
            case 0x32A:
                Calls::FastCall(v4 + 1184, &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1480));
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 424) + 1768i64);
                break;
            case 0x32B:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 184) + 1704i64);
                v23 = v11 + (((FuckEnc::CacheRead<_DWORD>(v4 + 432) ^ FuckEnc::CacheRead<_DWORD>(v10 + 456)) + 1) << 20);
                break;
            case 0x32C:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * (unsigned __int8)(126 * FuckEnc::CacheRead<_BYTE>(v4 + 784))) + 1568i64);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 1592i64) + 8i64 * (__ROR4__(v5, 20) & 0x35)) + 760i64);
                break;
            case 0x32D:
                v23 = v11 + 1848574178;
                v23 = __ROR4__(v11 + 1848574178, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * (unsigned __int8)__ROL4__(v5, 15)) + 224i64) + 4i64 * ((unsigned __int8)v5 & 0x93)));
                break;
            case 0x32E:
                v23 = v11 - v5;
                v23 = __ROL4__(v11 - v5, (FuckEnc::CacheRead<_DWORD>(v4 + 1568) >> 30) + ~(FuckEnc::CacheRead<_BYTE>(v4 + 1088) + 39));
                break;
            case 0x32F:
                v23 = __ROR4__(v11, ~FuckEnc::CacheRead<_BYTE>(v4 + 1768));
                break;
            case 0x330:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 784);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1704);
                v23 -= FuckEnc::CacheRead<_DWORD>(v10 + 600) ^ ~(FuckEnc::CacheRead<_DWORD>(v4 + 1568) * v5);
                break;
            case 0x331:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1112);
                Calls::FastCall(v4 + 848, &v23, v5, v4);
                v23 += (_DWORD)0xD28D0FD + 2 - FuckEnc::CacheRead<_DWORD>(v4 + 432);
                break;
            case 0x332:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 584);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 776) + 1752i64);
                v23 = __ROR4__(v23, ~FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v10 + 496) + 56i64));
                break;
            case 0x333:
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1912));
                Calls::FastCall(v4 + 992, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 312), 27)) + 496i64));
                break;
            case 0x334:
                v23 = ~(v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 56) - 1023331861));
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 4i64 * ((-3 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 424) + 432i64)) & 0xB)) + 1;
                break;
            case 0x335:
                v23 = v11 + v5;
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 424i64) + 712i64) ^ (v11 + v5);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1408);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1768);
                break;
            case 0x336:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 8i64 * ((unsigned __int8)(-84 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1048) + 128i64)) & 0xE4)) + 1352i64) + 392i64) + 1864i64) + 4i64 * ((unsigned __int8)v5 ^ 0x81u));
                break;
            case 0x337:
                v23 = v11 ^ (1701523333 * ~FuckEnc::CacheRead<_DWORD>(v4 + 1088));
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1264) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 456), 24)) + 720i64) + 1744i64);
                break;
            case 0x338:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1952);
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 640) | 6;
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 392) + 1952i64);
                break;
            case 0x339:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 312);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 696) + 1264i64) + 8i64 * ((unsigned __int8)__ROL4__(v5, 15) & 0xF5)) + 1096i64) + 1368i64);
                break;
            case 0x33A:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 120) + 1168i64);
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1608) + 8i64 * (v5 & 0x19)) + 1456i64) + 4i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 272) ^ 0xDF) & 0x76));
                break;
            case 0x33B:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1680) + 168i64) + 368i64) + 88i64) + 168i64) + 1912i64) - v5;
                break;
            case 0x33C:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 712) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1152);
                Calls::FastCall(v10 + 544, &v23, v5, v4);
                break;
            case 0x33D:
                v23 = __ROR4__(v11 - 1528259583, 15);
                v23 = __ROR4__(v23, ~(FuckEnc::CacheRead<_DWORD>(v4 + 1912) ^ 0x44));
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 1440);
                break;
            case 0x33E:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1072) + 1752i64) + 720i64) + 1096i64);
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 1240) + 1220720909;
                break;
            case 0x33F:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1264) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 128) ^ 0x54u)) + 1680i64) + 1048i64) + 752i64) + 472i64) + 4i64 * (unsigned __int8)v5) + 507131206;
                break;
            case 0x340:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 40) + 184i64) + 1096i64);
                v23 = FuckEnc::CacheRead<_DWORD>(v10 + 784) ^ v11;
                v23 += ~FuckEnc::CacheRead<_DWORD>(v4 + 1088);
                break;
            case 0x341:
                v23 = ~(v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * ((unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 584), 14) & 0xE4)) + 1352i64) + 1424i64) + 1432i64) + 128i64));
                break;
            case 0x342:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1696);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1416);
                v23 = __ROR4__(v23, FuckEnc::CacheRead<_DWORD>(v4 + 1088));
                v23 = __ROR4__(v23, -124 * FuckEnc::CacheRead<_BYTE>(v4 + 1040));
                break;
            case 0x343:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1952);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1168) + 1424i64) + 440i64) + 280i64) + 8i64 * ((unsigned __int8)(-8 * v5) & 0xE3)) + 912i64);
                break;
            case 0x344:
                Calls::FastCall(v4 + 920, &v23, v5, v4);
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 1368) ^ 0xF9248F2D;
                break;
            case 0x345:
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 56) ^ 0x11);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1480) + 424i64);
                v23 += FuckEnc::CacheRead<_DWORD>(v10 + 1112) + 1;
                break;
            case 0x346:
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 456) ^ 0xAD);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 936) + 8i64 * ((unsigned __int8)v5 & 0xE5)) + 1896i64);
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 784);
                break;
            case 0x347:
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 640) - 903991692);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 8i64 * (((unsigned __int8)v5 ^ 0x1A) & 0x9E)) + 472i64) + 4i64 * (v5 & 0x5C));
                break;
            case 0x348:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1040) - 1527743056;
                Calls::FastCall(v4 + 856, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 8i64 * (((unsigned __int8)v5 ^ 0x31) & 0xBD)));
                break;
            case 0x349:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1432);
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 1568) * ~(32 * FuckEnc::CacheRead<_DWORD>(v4 + 56)));
                break;
            case 0x34A:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 752) + 312i64), 20)) + 1272i64) + 8i64 * ((unsigned __int8)v5 ^ 0x31u)) + 1584i64);
                break;
            case 0x34B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1080);
                v23 = v11 ^ (v5 * ~(FuckEnc::CacheRead<_DWORD>(v10 + 1416) + v5 * ~FuckEnc::CacheRead<_DWORD>(v4 + 1896)));
                break;
            case 0x34C:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1704);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 1384) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1768) & 0x1F), &v23, v5, v4);
                break;
            case 0x34D:
                Calls::FastCall(v4 + 1304, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 88i64) + 496i64));
                break;
            case 0x34E:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1416);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1416) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1584) - 468163968) ^ 0x3AAB2FE9;
                break;
            case 0x34F:
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 608) + 8i64 * ((unsigned __int8)__ROL4__(v5, 20) & 0xB2)) + 1264i64) + 8i64 * (v5 & 0x13)) + 1936i64) + 8i64 * (((unsigned __int8)v5 ^ 0x28) & 0x7C)) + 1624i64) ^ v11;
                break;
            case 0x350:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 128);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 776);
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 96) + 1624i64) * (FuckEnc::CacheRead<_BYTE>(v10 + 928) + 68));
                break;
            case 0x351:
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1240));
                v23 = __ROR4__(v23, FuckEnc::CacheRead<_BYTE>(v4 + 712) + ~FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * ((unsigned __int8)v5 & 0xE9)) + 128i64));
                break;
            case 0x352:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 8i64 * (~(_BYTE)v5 & 4)) + 1480i64);
                Calls::FastCall(v4 + 200, &v23, v5, v10);
                break;
            case 0x353:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1704);
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 40) + 256i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1824) + 1048i64) + 1376i64) + 1112i64);
                break;
            case 0x354:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1584);
                v23 = __ROR4__(v23, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * (__ROR4__(v5 + FuckEnc::CacheRead<_DWORD>(v4 + 1952), 7) & 0x31)) + 1152i64) + 1296i64));
                break;
            case 0x355:
                v23 = __ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 4i64 * (unsigned __int8)((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1744) << 6)) ^ v11, 122);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1760);
                v23 = FuckEnc::CacheRead<_DWORD>(v10 + 384) + v23 - 1509442315;
                break;
            case 0x356:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 512) + 1872i64, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 8i64 * ((unsigned __int8)v5 ^ 0xD1u)));
                break;
            case 0x357:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 184) + 1096i64) + 496i64) + 776i64) + 280i64) + 8i64 * (((unsigned __int8)v5 ^ 0xF6) & 0x49)) + 1368i64);
                break;
            case 0x358:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 720);
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 880) + 4i64 * (unsigned __int8)__ROR4__(v5, 21)) ^ v11;
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 608) + 8i64 * (unsigned __int8)v5) + 800i64) + 4i64 * (unsigned __int8)(32 * v5));
                break;
            case 0x359:
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 936) + 8i64 * ((unsigned __int8)v5 ^ 0xEEu)) + 424i64) + 1728i64) + 448i64) + 384i64) - 920684009);
                break;
            case 0x35A:
                Calls::FastCall(v4 + 1856, &v23, v5, v4);
                v23 ^= ~(FuckEnc::CacheRead<_DWORD>(v4 + 784) ^ 0xAFCE9DD0);
                break;
            case 0x35B:
                v23 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 1584);
                v23 = ~(v23 + FuckEnc::CacheRead<_DWORD>(v4 + 1416));
                break;
            case 0x35C:
                v23 = v5 + (FuckEnc::CacheRead<_DWORD>(v4 + 968) ^ v11) + 1182360574;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 416) + 720i64);
                v23 = __ROR4__(v23, FuckEnc::CacheRead<_DWORD>(v10 + 1256));
                break;
            case 0x35D:
                v23 = __ROR4__(v11, -120 * FuckEnc::CacheRead<_BYTE>(v4 + 1744));
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 752) + 1408i64) + 1264i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 25)) + 1112i64);
                break;
            case 0x35E:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 8i64 * (v5 & 0x22)) + 1048i64);
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1568) - FuckEnc::CacheRead<_DWORD>(v10 + 600) - v5;
                break;
            case 0x35F:
                v23 = ~(v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 168) + 432i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 424);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 296) + 8i64 * (__ROR4__(v5, 16) & 0x21)) + 928i64);
                break;
            case 0x360:
                v23 = v11 + 1023331946;
                v23 = __ROR4__(v11 + 1023331946 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 840) + 384i64), 101);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1152);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v10 + 104);
                break;
            case 0x361:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1296) + 515899369;
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * (unsigned __int8)__ROL4__(v5, 8)) + 1456i64) + 4i64 * ((unsigned __int8)v5 & 0xA9));
                break;
            case 0x362:
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1368));
                v23 = __ROR4__(v23, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1264) + 8i64 * (unsigned __int8)(-43 * v5)) + 1696i64) ^ FuckEnc::CacheRead<_BYTE>(v4 + 1088) & 0xEA);
                break;
            case 0x363:
                v23 = v11 - 825164013;
                v23 = v11 - 825164013 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 608) + 8i64 * (unsigned __int8)(-53 * v5)) + 1608i64) + 8i64 * (unsigned __int8)~(_BYTE)v5) + 552i64) + 4i64 * ((unsigned __int8)(9 * v5) & 0x92));
                break;
            case 0x364:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 56) ^ v11;
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 384), 27)) + 720i64) + 824i64) + 120i64) + 600i64);
                break;
            case 0x365:
                Calls::FastCall(v4 + 232, &v23, v5, v4);
                v23 = v23 - 691169623 + FuckEnc::CacheRead<_DWORD>(v4 + 584);
                break;
            case 0x366:
                v23 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 1088) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1024) + 1280i64) + 8i64 * ((unsigned __int8)v5 ^ 0x92u)) + 456i64);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 104);
                break;
            case 0x367:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1424);
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 104);
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 104) ^ 0x6355D703;
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 1912) ^ 0xC311319F;
                break;
            case 0x368:
                v23 = __ROR4__(v11 - FuckEnc::CacheRead<_DWORD>(v4 + 56), 29);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 696) + 1432i64) + 392i64) + 112i64) + 1568i64);
                break;
            case 0x369:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1696) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 8i64 * ((unsigned __int8)v5 & 0xFD)) + 88i64) + 768i64) + 552i64) + 4i64 * ((unsigned __int8)v5 & 0xAD));
                break;
            case 0x36A:
                v23 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 1744) + 1) * FuckEnc::CacheRead<_DWORD>(v4 + 1744) - FuckEnc::CacheRead<_DWORD>(v4 + 600);
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 928);
                break;
            case 0x36B:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 8i64 * (unsigned __int8)__ROL4__(v5, 16)) + 168i64);
                Calls::FastCall(v10 + 1832, &v23, v5, v4);
                break;
            case 0x36C:
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 184) + 640i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1592) + 8i64 * ((unsigned __int8)v5 & 0xFB)) + 952i64) + 8i64 * ((unsigned __int8)v5 & 0xBD)) + 1112i64));
                break;
            case 0x36D:
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1584));
                v19 = FuckEnc::CacheRead<_QWORD>(v4 + 944);
                v18 = (unsigned __int8)v5 ^ 0xAFu;
            LABEL_613:
                Calls::FastCall(v4 + 1832, &v23, v5, FuckEnc::CacheRead<_QWORD>(v19 + 8 * v18));
                break;
            case 0x36E:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1240) - 1536281255;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1824);
                v23 -= v5 ^ ~FuckEnc::CacheRead<_DWORD>(v10 + 1440);
                break;
            case 0x36F:
                Calls::FastCall(v4 + 336, &v23, v5, v4);
                v23 ^= ~(v5 + FuckEnc::CacheRead<_DWORD>(v4 + 1768));
                break;
            case 0x370:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 584);
                v23 = v23 - FuckEnc::CacheRead<_DWORD>(v4 + 1112) + 763865505;
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1368);
                break;
            case 0x371:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 776);
                Calls::FastCall(v10 + 1504, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 720) + 1808i64));
                break;
            case 0x372:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 96) + 1104i64);
                v23 = v11 ^ (~FuckEnc::CacheRead<_DWORD>(v10 + 456) * (FuckEnc::CacheRead<_DWORD>(v4 + 456) + 2033348921));
                break;
            case 0x373:
                v23 = __ROR4__(v11, v5);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 1296i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 720) + 88i64);
                v23 -= FuckEnc::CacheRead<_DWORD>(v10 + 1568);
                break;
            case 0x374:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1088);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 776);
                Calls::FastCall(v4 + 1640, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1264) + 8i64 * (unsigned __int8)__ROR4__(v5, 31)));
                break;
            case 0x375:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 760);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1408);
                Calls::FastCall(v10 + 1176, &v23, v5, v4);
                break;
            case 0x376:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 968);
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 1624);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 824) + 384i64);
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 1584);
                break;
            case 0x377:
                v23 = v5 ^ v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1808) + 1936i64) + 8i64 * (__ROL4__(v5, 29) & 0x33)) + 600i64) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1256) * v5);
                break;
            case 0x378:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 384) ^ v11 ^ 0xBE4710BB;
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 1040);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 8i64 * ((15 * FuckEnc::CacheRead<_BYTE>(v4 + 1088)) & 0x4F)) + 968i64);
                break;
            case 0x379:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1728) + 1752i64) + 416i64) + 496i64);
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1096) + 144i64) + 4i64 * (unsigned __int8)(120 * v5)) + 1634222401;
                break;
            case 0x37A:
                Calls::FastCall(v4 + 856, &v23, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 96);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 448) + 1912i64);
                break;
            case 0x37B:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 432);
                v23 = __ROR4__(v23, FuckEnc::CacheRead<_DWORD>(v4 + 256));
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 1744) ^ v5;
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 312);
                break;
            case 0x37C:
                v23 = __ROL4__(v11 + FuckEnc::CacheRead<_DWORD>(v4 + 784), 86);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1496);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 288) + 8i64 * (unsigned __int8)(-77 * v5)) + 800i64) + 4i64 * (__ROR4__(v5, 4) & 0x50));
                break;
            case 0x37D:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1240) + 1;
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1048) + 1592i64) + 8i64 * (unsigned __int8)(-4 * v5)) + 384i64);
                break;
            case 0x37E:
                v23 = v11 - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 720);
                v23 = v11 - v5 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1280) + 8i64 * ((unsigned __int8)v5 & 0xD8)) + 1592i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 8)) + 1568i64);
                break;
            case 0x37F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 40);
                v23 = v11 ^ FuckEnc::CacheRead<_DWORD>(v10 + 1040) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1704) + 368i64) + 552i64) + 4i64 * ((unsigned __int8)v5 ^ 0x1Fu));
                break;
            case 0x380:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1896) + 1;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1376) + 768i64);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 224) + 4i64 * (v5 & 0x1E));
                break;
            case 0x381:
                Calls::FastCall(v4 + 232, &v23, v5, v4);
                v23 ^= 0xA4D099A7;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1424);
                v23 = __ROR4__(v23, FuckEnc::CacheRead<_DWORD>(v10 + 1744));
                break;
            case 0x382:
                v23 = v11 ^ 0x2AC31131;
                Calls::FastCall(v4 + 1200, &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 768));
                v23 += 1982346903 - v5;
                break;
            case 0x383:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1496) + 168i64);
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 928) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1280) + 8i64 * ((unsigned __int8)v5 ^ 0x4Bu)) + 1784i64) + 4i64 * (v5 & 0x3A)));
                break;
            case 0x384:
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 784));
                v23 ^= v5 + FuckEnc::CacheRead<_DWORD>(v4 + 1416);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 416) + 928i64) * v5;
                break;
            case 0x385:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1952);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 448) + 1056i64) + 8i64 * ((unsigned __int8)v5 & 0xA2), &v23, v5, v4);
                break;
            case 0x386:
                v23 = v11 + 1556283697;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 744);
                v23 = FuckEnc::CacheRead<_DWORD>(v10 + 1696) + v11 + 1556283697;
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 384) + 1179919648;
                break;
            case 0x387:
                v23 = (v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 1768)) - 1454036638;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 368);
                v23 += FuckEnc::CacheRead<_DWORD>(v10 + 1368);
                break;
            case 0x388:
                Calls::FastCall(v4 + 656, &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 744));
                v23 ^= v5;
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 600i64);
                break;
            case 0x389:
                v23 = v11 ^ ((FuckEnc::CacheRead<_DWORD>(v4 + 1112) - 639060340) * (1967558003 - 992936091 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 64) + 840i64) + 272i64)));
                break;
            case 0x38A:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * (unsigned __int8)(-66 * v5)) + 1928i64) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 56i64) & 0xD1)) + 776i64);
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 256);
                break;
            case 0x38B:
                v23 = ~(v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 64) + 1040i64) - 804696397);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 424) + 784i64) - 539857073;
                break;
            case 0x38C:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1416);
                Calls::FastCall(v4 + 264, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 8i64 * ((unsigned __int8)v5 ^ 0xE4u)));
                break;
            case 0x38D:
                v23 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 1624), 10)) + 1744i64) ^ 0x2CF59D86);
                v23 = v23 - FuckEnc::CacheRead<_DWORD>(v4 + 432) - v5;
                break;
            case 0x38E:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 496) + 1080i64);
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 1368);
                v23 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 512) + 432i64);
                break;
            case 0x38F:
                v23 = v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 128) ^ v11;
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 1584);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1424);
                v23 = v23 - FuckEnc::CacheRead<_DWORD>(v10 + 968) + 1023309500;
                break;
            case 0x390:
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1152) + 256i64) + FuckEnc::CacheRead<_DWORD>(v4 + 56) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 392) + 1680i64) + 1744i64));
                break;
            case 0x391:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1168);
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 1296));
                v23 = __ROR4__(v23, FuckEnc::CacheRead<_BYTE>(v4 + 1912) + 61);
                v23 = (FuckEnc::CacheRead<_DWORD>(v4 + 1112) ^ v23) - 2055389787;
                break;
            case 0x392:
                Calls::FastCall(v4 + 664, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 608) + 8i64 * (unsigned __int8)__ROR4__(v5, 2)));
                v23 -= 419571188;
                break;
            case 0x393:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1104);
                v23 = v11 + -1439590231 * (FuckEnc::CacheRead<_DWORD>(v10 + 1768) ^ 0xC3018944) - v5 * (FuckEnc::CacheRead<_DWORD>(v4 + 1624) + 838949709);
                break;
            case 0x394:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 64) + 1024i64) + 600i64) * (v5 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 720) + 784i64) ^ v5));
                break;
            case 0x395:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 424);
                v23 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v10 + 1368);
                v23 -= (unsigned int)(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 1040i64) + 391303423) >> 8;
                break;
            case 0x396:
                v23 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 1568) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 8i64 * ((unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 712), 6) & 0xFC)) + 112i64) + 1112i64) ^ 0x7A646786;
                break;
            case 0x397:
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1368) ^ v5 | 1);
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 928);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 776);
                v23 += FuckEnc::CacheRead<_DWORD>(v10 + 1416);
                break;
            case 0x398:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 512) + 1768i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1072);
                //(*(void(__fastcall**)(int*, _QWORD, __int64))v10)(&v23, v5, v4);
                Calls::FastCall(v10, &v23, v5, v4);
                break;
            case 0x399:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 512);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 792) + 8i64 * ((unsigned __int8)v5 ^ 0xB0u), &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 424));
                break;
            case 0x39A:
                v23 = __ROR4__(v11, 201);
                Calls::FastCall(v4 + 560, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1024) + 1400i64));
                break;
            case 0x39B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1824);
                v23 = v11 ^ ((FuckEnc::CacheRead<_DWORD>(v4 + 760) - 1261371579) * ((_DWORD)0xAD16400 + 6 - (FuckEnc::CacheRead<_DWORD>(v10 + 1368) ^ 0x629C4F73)));
                break;
            case 0x39C:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1088) ^ v11;
                Calls::FastCall(v4 + 8, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 824) + 88i64) + 424i64));
                break;
            case 0x39D:
                v23 = v11 + 641531599;
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 1088), 12)) + 1768i64) ^ (v11 + 641531599);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1408);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v10 + 456);
                break;
            case 0x39E:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1040);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 792) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 1744), 25), &v23, v5, v4);
                break;
            case 0x39F:
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 184) + 104i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1080);
                v23 += FuckEnc::CacheRead<_DWORD>(v10 + 1088) * FuckEnc::CacheRead<_DWORD>(v4 + 1440);
                break;
            case 0x3A0:
                v23 = ~(v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 104) ^ 0x6Bu)) + 1728i64) + 144i64) + 4i64 * ((unsigned __int8)(53 * FuckEnc::CacheRead<_BYTE>(v4 + 256)) & 0xEC)));
                break;
            case 0x3A1:
                v23 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 432) ^ FuckEnc::CacheRead<_DWORD>(v4 + 1440) ^ 0xCF340472);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 40) + 88i64);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1240);
                break;
            case 0x3A2:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 88) + 184i64);
                v23 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 760) + FuckEnc::CacheRead<_DWORD>(v10 + 1568));
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 1416) & 0xFFFFFFF3;
                break;
            case 0x3A3:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1168) + 184i64);
                v23 = __ROR4__(v11, -112 - (FuckEnc::CacheRead<_BYTE>(v10 + 1296) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 1568i64)));
                break;
            case 0x3A4:
                v23 = v11 - ((FuckEnc::CacheRead<_DWORD>(v4 + 1696) | 7) ^ 0x45AF25A6) - 1194791294;
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 120) + 1680i64) + 600i64);
                break;
            case 0x3A5:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1744);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1088);
                v23 = __ROR4__(v23, FuckEnc::CacheRead<_BYTE>(v4 + 1624) ^ (FuckEnc::CacheRead<_BYTE>(v4 + 1240) - 8));
                break;
            case 0x3A6:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 928) + 1;
                v23 ^= ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1352) + 104i64) * v5) << 9;
                break;
            case 0x3A7:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 88) + 1920i64) + 8i64 * ((unsigned __int8)(-7 * v5) & 0xCB)) + 1704i64);
                Calls::FastCall(v4 + 872, &v23, v5, v10);
                break;
            case 0x3A8:
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 8i64 * (FuckEnc::CacheRead<_BYTE>(v4 + 1256) & 0xEA ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 608) + 8i64 * (unsigned __int8)__ROL4__(v5, 5)) + 1952i64) ^ 0xCBu)) + 1416i64));
                break;
            case 0x3A9:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 600);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1256);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1104);
                v23 = 1792081692 * FuckEnc::CacheRead<_DWORD>(v10 + 1416) + v23 - 1227359644;
                break;
            case 0x3AA:
                v23 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 384) + 1) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 64) + 1040i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 744) + 1416i64);
                break;
            case 0x3AB:
                Calls::FastCall(v4 + 544, &v23, v5, v4);
                v23 ^= (FuckEnc::CacheRead<_DWORD>(v4 + 1952) * v5) ^ 0x9A322EAA;
                break;
            case 0x3AC:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1024) + 392i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 1288) + 8i64 * ((unsigned __int8)v5 ^ 0x51u), &v23, v5, v4);
                break;
            case 0x3AD:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 120);
                v23 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 1112) ^ (FuckEnc::CacheRead<_DWORD>(v10 + 1568) - FuckEnc::CacheRead<_DWORD>(v4 + 1696) + 1022283340));
                break;
            case 0x3AE:
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1744));
                v23 = __ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 272) ^ v23, 100);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 776);
                v23 -= 608329103 * FuckEnc::CacheRead<_DWORD>(v10 + 1112);
                break;
            case 0x3AF:
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 144i64) + 1736i64) + 448i64) + 968i64) ^ v11;
                break;
            case 0x3B0:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 608) + 8i64 * ((unsigned __int8)~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 312) & 0xC8)) + 216i64, &v23, v5, v4);
                break;
            case 0x3B1:
                v23 = v11 - v5 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1400) + 1744i64) + (FuckEnc::CacheRead<_DWORD>(v4 + 56) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1368) + 940066399)));
                break;
            case 0x3B2:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 104) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1736) + 1960i64, &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 696));
                break;
            case 0x3B3:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1920) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 640) ^ 0xF7) & 0x6A)) + 616i64) + 8i64 * ((unsigned __int8)v5 & 0x97)) + 912i64);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1296);
                break;
            case 0x3B4:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 272) - 161688743;
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 912) + -FuckEnc::CacheRead<_DWORD>(v4 + 1112) - 1023331974;
                break;
            case 0x3B5:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * (unsigned __int8)__ROL4__(v5, 3)) + 496i64);
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 600) * (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 56));
                break;
            case 0x3B6:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1584) ^ v11;
                v23 += ~FuckEnc::CacheRead<_DWORD>(v4 + 584);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 40) + 456i64) ^ 0x8BC31131;
                break;
            case 0x3B7:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 272) + 541278032;
                v23 ^= 1320157184 * FuckEnc::CacheRead<_DWORD>(v4 + 128) * v5;
                break;
            case 0x3B8:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1096);
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 104));
                v23 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1864) + 4i64 * (unsigned __int8)(49 * ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1696))) ^ v23);
                break;
            case 0x3B9:
            {
                // changed
                auto temp = FuckEnc::CacheRead<_DWORD>(v4 + 1440);
                v23 = __ROL4__(v11, BYTE1(temp));
                Calls::FastCall(v4 + 1648, &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 824));
                v23 -= 1863997464;
                break;
            }
            case 0x3BA:
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 912) - 15);
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 1440) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 968) << 19) ^ 0x67FD2E86;
                break;
            case 0x3BB:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1704);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 88) + 616i64) + 8i64 * ((unsigned __int8)v5 & 0x92)) + 232i64, &v23, v5, v4);
                break;
            case 0x3BC:
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 8i64 * ((6 * (_BYTE)v5) & 0x31)) + 1416i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 392);
                //(*(void(__fastcall**)(int*, _QWORD, __int64))v4)(&v23, v5, v10);
                Calls::FastCall(v4, &v23, v5, v10);
                break;
            case 0x3BD:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 96) + 624i64) + 8i64 * (v5 & 0x1C)) + 416i64) + 424i64) + 1280i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 23)) + 1368i64);
                break;
            case 0x3BE:
                Calls::FastCall(v4 + 920, &v23, v5, v4);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1736) + 776i64) + 928i64);
                break;
            case 0x3BF:
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1760) + 712i64) ^ v11;
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1808) + 1784i64) + 4i64 * ((unsigned __int8)v5 ^ 0xA8u)) >> 26);
                break;
            case 0x3C0:
                v23 = v11 - 2127965958;
                v23 = v11 - 2127965958 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 776) + 1256i64);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1568) << 25;
                break;
            case 0x3C1:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 640);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 368);
                Calls::FastCall(v10 + 1312, &v23, v5, v4);
                break;
            case 0x3C2:
                v23 = v11 ^ ~((FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 224) + 4i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1896) - 39) & 0x4A)) << 7) ^ 0x822E00BE);
                break;
            case 0x3C3:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 128) - 1468204955;
                Calls::FastCall(v4 + 848, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1480) + 1152i64));
                break;
            case 0x3C4:
                v23 = (v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1440)) ^ 0xBDC43E25;
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1592) + 8i64 * (unsigned __int8)__ROR4__(-1023331990 * FuckEnc::CacheRead<_DWORD>(v4 + 1088), 24)) + 432i64);
                break;
            case 0x3C5:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1440) ^ v11 ^ 0x3B88674F;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 392);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 608) + 8i64 * ((unsigned __int8)v5 & 0xD2)) + 1088i64) ^ 0x845A51A3;
                break;
            case 0x3C6:
                v23 = v11 ^ 0x5DD0BF2F;
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1112) ^ v11 ^ 0x5DD0BF2F;
                v23 += 881144605 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 8i64 * (unsigned __int8)(-72 * v5)) + 1568i64);
                break;
            case 0x3C7:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * (unsigned __int8)__ROL4__(v5, 27)) + 840i64) + 1072i64) + 184i64) + 368i64);
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 600);
                break;
            case 0x3C8:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 752) + 1040i64);
                v23 += ((FuckEnc::CacheRead<_DWORD>(v4 + 1040) | 0x11) ^ 0xB63CEECE) - v5;
                break;
            case 0x3C9:
                Calls::FastCall(v4 + 848, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1728) + 296i64) + 8i64 * (__ROR4__(v5, 11) & 0xA9)) + 1704i64) + 1424i64));
                break;
            case 0x3CA:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1432);
                v23 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 1088) ^ FuckEnc::CacheRead<_DWORD>(v10 + 1088) ^ FuckEnc::CacheRead<_DWORD>(v4 + 1440));
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 784);
                break;
            case 0x3CB:
                v14 = __ROR4__(v11 + 1023309500, v5);
                v23 = v14;
                v15 = FuckEnc::CacheRead<_DWORD>(v4 + 928) - 1023309500;
            LABEL_422:
                v23 = v14 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 368) + 272i64) ^ v15;
                break;
            case 0x3CC:
                v23 = v11 - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 496);
                v23 = __ROR4__(v11 - v5, FuckEnc::CacheRead<_BYTE>(v10 + 1296) * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 840) + 448i64) + 1624i64));
                break;
            case 0x3CD:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1096);
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1696);
                v23 ^= 1464442793 * FuckEnc::CacheRead<_DWORD>(v4 + 712) * ~FuckEnc::CacheRead<_DWORD>(v4 + 456);
                break;
            case 0x3CE:
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1824) + 616i64) + 8i64 * (((unsigned __int8)v5 ^ 3) & 0x2B)) + 1952i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1704);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 224) + 4i64 * (unsigned __int8)__ROL4__(v5, 20));
                break;
            case 0x3CF:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 720);
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 1912));
                v23 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * (unsigned __int8)__ROR4__(v5, 24)) + 1568i64);
                break;
            case 0x3D0:
                v23 = v11 + ((-605221086 * FuckEnc::CacheRead<_DWORD>(v4 + 1912)) ^ (-2017658672 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 448) + 1736i64) + 1952i64)));
                break;
            case 0x3D1:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 784);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1256) ^ 0x14) & 0x54)) + 1376i64) + 144i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 5));
                break;
            case 0x3D2:
                Calls::FastCall(v4 + 1528, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 120) + 1408i64) + 1432i64) + 824i64));
                break;
            case 0x3D3:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1080);
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 384) * (FuckEnc::CacheRead<_DWORD>(v4 + 760) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 456) - 1151954541));
                break;
            case 0x3D4:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1768) ^ v11;
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 1768);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 256);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 40);
                v23 -= FuckEnc::CacheRead<_DWORD>(v10 + 104);
                break;
            case 0x3D5:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1760);
                v23 = v11 + ~(FuckEnc::CacheRead<_DWORD>(v4 + 760) + (FuckEnc::CacheRead<_DWORD>(v10 + 56) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1824) + 1896i64)));
                break;
            case 0x3D6:
                v23 = v11 - (((unsigned int)0xD8D3F25 + 2) ^ ((FuckEnc::CacheRead<_DWORD>(v4 + 1440) & 0xFFFFFFF3) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1048) + 1568i64)));
                break;
            case 0x3D7:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 312);
                v22 = FuckEnc::CacheRead<_QWORD>(v4 + 608);
                v21 = FuckEnc::CacheRead<_DWORD>(v4 + 1744) & 0xAD;
            LABEL_776:
                Calls::FastCall(v4 + 976, &v23, v5, FuckEnc::CacheRead<_QWORD>(v22 + 8 * v21));
                break;
            case 0x3D8:
                Calls::FastCall(v4 + 848, &v23, v5, v4);
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 448) + 1440i64));
                break;
            case 0x3D9:
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1240));
                v23 = __ROR4__(v23, FuckEnc::CacheRead<_BYTE>(v4 + 456) + FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 8i64 * (((unsigned __int8)v5 ^ 0xFD) & 0x2E)) + 1568i64));
                break;
            case 0x3DA:
                v23 = __ROR4__(v11 ^ ~(FuckEnc::CacheRead<_DWORD>(v4 + 312) ^ 0xD06083F7), 167);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 768);
                v23 += FuckEnc::CacheRead<_DWORD>(v10 + 1768);
                break;
            case 0x3DB:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 752);
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 784)) + 916339534;
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 88) + 1400i64) + 1808i64) + 928i64);
                break;
            case 0x3DC:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1952);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1952) & 0xFFFFFFEC;
                v23 += ~(FuckEnc::CacheRead<_DWORD>(v4 + 1952) ^ v5);
                break;
            case 0x3DD:
                v23 = __ROR4__(v11, 141);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 720) + 136i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 11), &v23, v5, v4);
                break;
            case 0x3DE:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1256);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * ((unsigned __int8)v5 ^ 0xB6u)) + 1112i64);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 392) + 128i64);
                break;
            case 0x3DF:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 8i64 * (unsigned __int8)(-49 * (FuckEnc::CacheRead<_DWORD>(v4 + 584) & 0xF6))) + 1944i64) + 8i64 * ((unsigned __int8)v5 ^ 0xCFu), &v23, v5, v4);
                break;
            case 0x3E0:
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1104) + 1368i64) ^ v11 ^ 0x73D3CD0D;
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 944i64) + 8i64 * (__ROL4__(v5, 23) & 0x38)) + 1112i64);
                break;
            case 0x3E1:
                v23 = v11 + 1556834323;
                v23 = v11 + 1556834323 + (FuckEnc::CacheRead<_DWORD>(v4 + 384) >> 27);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 4i64 * (unsigned __int8)__ROL4__(-1022283512 * FuckEnc::CacheRead<_DWORD>(v4 + 1768), 3));
                break;
            case 0x3E2:
                v23 = v11 + 2032699241;
                v23 = v11 + 2032699241 - 32 * (FuckEnc::CacheRead<_DWORD>(v4 + 928) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1072) + 1784i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 21)));
                break;
            case 0x3E3:
                v23 = ~__ROR4__(v11, v5);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 752) + 272i64);
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1568) | 2;
                break;
            case 0x3E4:
                Calls::FastCall(v4 + 848, &v23, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1400) + 776i64) + 440i64));
                break;
            case 0x3E5:
                v23 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 8i64 * (unsigned __int8)(8 * FuckEnc::CacheRead<_BYTE>(v4 + 456))) + 280i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 28)) + 1928i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 3)) + 272i64));
                break;
            case 0x3E6:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 912);
                v23 ^= v5 + FuckEnc::CacheRead<_DWORD>(v4 + 104);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 8i64 * ((unsigned __int8)__ROL4__(v5, 17) & 0x90)) + 600i64);
                break;
            case 0x3E7:
                v23 = ~(_DWORD)v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 768);
                Calls::FastCall(v4 + 1320, &v23, v5, v10);
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 712);
                break;
            case 0x3E8:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 584) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 168);
                Calls::FastCall(v10 + 1648, &v23, v5, FuckEnc::CacheRead<_QWORD>(v4 + 64));
                break;
            case 0x3E9:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1480);
                Calls::FastCall(v4 + 200, &v23, v5, v10);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 512) + 272i64);
                break;
            case 0x3EA:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 784) + 1;
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 272) ^ 0xF387AB9E;
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 1896) + 1023876095;
                break;
            case 0x3EB:
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 496) + 1296i64) ^ v11 ^ 0x1AFC893E;
                v23 = __ROL4__(v23, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 912), 18)) + 1256i64));
                break;
            case 0x3EC:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 696);
                v23 = v11 - (FuckEnc::CacheRead<_DWORD>(v10 + 1696) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1104) + 608i64) + 8i64 * ((-26 * (_BYTE)v5) & 0x28)) + 1568i64) << 25));
                break;
            case 0x3ED:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 744);
                v23 = v11 ^ (373217142 * (FuckEnc::CacheRead<_DWORD>(v10 + 1744) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 1296i64)) - (_DWORD)0xE09B2E2);
                break;
            case 0x3EE:
                v23 = 1023331963 - (FuckEnc::CacheRead<_DWORD>(v4 + 1568) ^ v11);
                Calls::FastCall(v4 + 1184, &v23, v5, v4);
                v23 = ~v23;
                break;
            case 0x3EF:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1624) ^ v11 ^ 0xA94F5BFF;
                v23 = v23 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1080) + 456i64) + 2051142230;
                break;
            case 0x3F0:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 720) + 744i64) + 40i64);
                v23 = v11 ^ FuckEnc::CacheRead<_DWORD>(v10 + 1696) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1104) + 144i64) + 4i64 * ((unsigned __int8)v5 & 0xE9));
                break;
            case 0x3F1:
                v23 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 584);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 168) + 1168i64) + 840i64) + 64i64) + 432i64);
                break;
            case 0x3F2:
                v23 = v11 ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 128));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1024);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1600) + 8i64 * ((36 * (_BYTE)v5) & 0x67)) + 1368i64);
                break;
            case 0x3F3:
                v23 = v11 ^ 0x602804C1;
                v23 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 40) + 1584i64) + (FuckEnc::CacheRead<_DWORD>(v4 + 456) ^ v5) + (v11 ^ 0x602804C1) - 1023331924;
                break;
            case 0x3F4:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 1752i64);
                v23 = v5 + v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 424) + 1920i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 17)) + 1088i64) - 6022337;
                break;
            case 0x3F5:
                Calls::FastCall(v4 + 1960, &v23, v5, v4);
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 744) + 1536i64) + 4i64 * ((unsigned __int8)v5 & 0x9A));
                break;
            case 0x3F6:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * (unsigned __int8)(10 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1352) + 600i64))) + 368i64);
                Calls::FastCall(v4 + 1640, &v23, v5, v10);
                break;
            case 0x3F7:
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 696) + 1072i64) + 1824i64) + 936i64) + 8i64 * (v5 & 9)) + 696i64) + 1040i64) - 88);
                break;
            case 0x3F8:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1352);
                v23 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v10 + 1744);
                v23 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1104) + 1808i64) + 1296i64) ^ 0x71AE57EE;
                break;
            case 0x3F9:
                v23 = ~(v11 + FuckEnc::CacheRead<_DWORD>(v4 + 600) * (FuckEnc::CacheRead<_DWORD>(v4 + 760) >> 26));
                v23 -= FuckEnc::CacheRead<_DWORD>(v4 + 760);
                break;
            case 0x3FA:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 1568), 14)) + 168i64) + 1168i64) + 424i64);
                v23 = FuckEnc::CacheRead<_DWORD>(v10 + 1240) ^ v11;
                break;
            case 0x3FB:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1568);
                v23 += FuckEnc::CacheRead<_DWORD>(v4 + 1896);
                Calls::FastCall(v4 + 1216, &v23, v5, v4);
                break;
            case 0x3FC:
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1440) ^ v11;
                v23 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1048) + 640i64);
                v23 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * ((unsigned __int8)(-78 * v5) & 0xF4)) + 600i64);
                break;
            case 0x3FD:
                v23 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1416);
                v23 = v23 - 1690501425 * FuckEnc::CacheRead<_DWORD>(v4 + 1416) - v5;
                v23 ^= FuckEnc::CacheRead<_DWORD>(v4 + 128);
                break;
            case 0x3FE:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 96) + 776i64);
                v23 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 1256) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 608) + 8i64 * (v5 & 0x4A)) + 1744i64) ^ 0xCC34D0FF);
                break;
            case 0x3FF:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1680) + 1744i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1680);
                v16 = v10;
            LABEL_1033:
                Calls::FastCall(v4 + 1840, &v23, v5, v16);
                break;
            }
            v6 += 4;
            *a2 = v23;
            v5 += a4;
            ++a2;
            v4 = v10;
        } while (v6 + 3 < a3);
    }
}