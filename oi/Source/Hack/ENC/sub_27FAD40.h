#pragma once

#include <Hack/FuckEnc.h>
#include <Hack/ENC/Calls.h>
#include <IDA/ida_defs.h>

void sub_27FAD40(__int64 a1, unsigned int* a2, unsigned int a3, int a4)
{
    __int64 v4;           // rbx
    unsigned int v5;      // edi
    int v6;               // r13d
    __int64 v10;          // rsi
    __int64 v11;          // rax
    __int64 v12;          // r8
    int v13;              // eax
    unsigned __int64 v14; // r9
    __int64 v15;          // rax
    __int64 v16;          // r8
    __int64 v17;          // rdx
    __int64 v18;          // r10
    __int64 v19;          // rax
    __int64 v20;          // r8
    __int64 v21;          // rcx
    __int64 v22;          // r9
    int v23;              // eax
    __int64 v24;          // r9
    __int64 v25;          // r8
    __int64 v26;          // rcx
    __int64 v27;          // r8
    __int64 v28;          // rcx
    int v29;              // [rsp+60h] [rbp+40h] BYREF

    v4 = a1;
    v5 = a4 ^ 0x8100776B;
    v6 = 0;
    v10 = a1;
    if (a3 > 3)
    {
        while (2)
        {
            v11 = *a2;
            v29 = *a2;
            switch (((unsigned __int16)(a4 + v6) ^ 0xFFD4) & 0x3FF)
            {
            case 0:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 0x108) + 264i64) + 720i64) + 1376i64);
                v12 = v10;
                goto LABEL_4;
            case 1:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 200) + 8i64 * (unsigned __int8)__ROL4__(v5, 27)) + 288i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 6)) + 1952i64, &v29, v5, v4);
                goto LABEL_1038;
            case 2:
                v29 = v11 - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1312) + 1400i64) + 1376i64);
                v13 = v11 - v5 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1928) + 8i64 * ((unsigned __int8)v5 & 0xB9)) + 96i64);
                goto LABEL_1037;
            case 3:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 352) + 1432i64);
                v29 += 32 * FuckEnc::CacheRead<_DWORD>(v4 + 752);
                goto LABEL_1038;
            case 4:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 832);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 936);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 592);
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1224) + 4i64 * (v5 & 0x7C));
                goto LABEL_1038;
            case 5:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 1832) ^ v11;
                v13 = __ROR4__(v29, FuckEnc::CacheRead<_BYTE>(v4 + 1504) + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 568i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 20)) >> 20));
                goto LABEL_1037;
            case 6:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 120);
                v29 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 1920i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1576);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v10 + 520);
                goto LABEL_1038;
            case 7:
                v29 = v11 + 1385543190;
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 608) ^ (v11 + 1385543190);
                v29 += (v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1664) + 504i64)) | 0x16;
                goto LABEL_1038;
            case 8:
                v29 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 832));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1640);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1832) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1576) + 240i64) + 4i64 * (unsigned __int8)(87 * v5));
                goto LABEL_1038;
            case 9:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1936);
                v29 = v11 + v5 * (FuckEnc::CacheRead<_DWORD>(v10 + 1776) ^ 0x18EFF1DF);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1376) + 1504i64);
                goto LABEL_1038;
            case 0xA:
                v29 = v5 ^ (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1080) * v5);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 744) + 984i64);
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1728) + 1432i64);
                goto LABEL_1038;
            case 0xB:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 280) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 720);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1480) + 4i64 * (__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 120) ^ 0xC3018944, 29) & 0x29));
                goto LABEL_1038;
            case 0xC:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 24);
                v13 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v10 + 1808) + 4i64 * (((unsigned __int8)v5 ^ 0xEF) & 0xB3)) + FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 856) + 8i64 * ((-6 * (_BYTE)v5) & 0x1C)) + 792i64));
                goto LABEL_1037;
            case 0xD:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 528i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 16)) + 200i64) + 8i64 * ((unsigned __int8)v5 & 0xF6)) + 1752i64) + 328i64);
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 464);
                goto LABEL_1038;
            case 0xE:
                v29 = __ROR4__(v11, 19 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 168) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1832) & 0xC9)));
                v13 = __ROL4__(v29, ~(54 * FuckEnc::CacheRead<_BYTE>(v4 + 96)));
                goto LABEL_1037;
            case 0xF:
                v29 = __ROL4__(v11, v5 * (FuckEnc::CacheRead<_DWORD>(v4 + 1592) ^ 0x20));
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 936) & 0x8F)) + 504i64);
                goto LABEL_1038;
            case 0x10:
                v29 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 88) + 280i64) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1104) >> 17);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1400) + 1432i64);
                goto LABEL_1038;
            case 0x11:
                v29 = (v11 + 2102465482) ^ 0xB1DCBA34;
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 1920);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 296);
                v29 = __ROR4__(v29, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 240) + 4i64 * (v5 & 0xA)));
                goto LABEL_1038;
            case 0x12:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1432);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 8i64 * (((unsigned __int8)v5 ^ 0xFD) & 0xA)) + 1400i64) + 952i64) + 296i64);
                v29 += FuckEnc::CacheRead<_DWORD>(v10 + 1592);
                goto LABEL_1038;
            case 0x13:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 656) + 1632i64, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 8i64 * ((unsigned __int8)v5 & 0xE5)));
                goto LABEL_1038;
            case 0x14:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 936) ^ v11;
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1920) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(v4 + 360) + 1736i64);
                goto LABEL_1038;
            case 0x15:
                v29 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 464));
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 192);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 744i64) + 920i64);
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(v10 + 120);
                goto LABEL_1037;
            case 0x16:
                v29 = v11 ^ (v5 * FuckEnc::CacheRead<_DWORD>(v4 + 1104) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 464i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1280);
                v29 += FuckEnc::CacheRead<_DWORD>(v10 + 1592);
                goto LABEL_1038;
            case 0x17:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 656) + 1664i64);
                v13 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 120) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 984i64) + 1760i64) >> 28);
                goto LABEL_1037;
            case 0x18:
                v29 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 936));
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1704) + 216i64, &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 680));
                goto LABEL_1038;
            case 0x19:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 176);
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 200) + 8i64 * (unsigned __int8)(-61 * v5)) + 1600i64) + 8i64 * (((unsigned __int8)v5 ^ 0xF7) & 0x8B)) + 464i64);
                goto LABEL_1037;
            case 0x1A:
                v29 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 8i64 * ((unsigned __int8)v5 ^ 0xF5u)) + 1104i64) << 19);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1704);
                v29 += FuckEnc::CacheRead<_DWORD>(v10 + 1104) + 1;
                goto LABEL_1038;
            case 0x1B:
                v13 = ((v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1904) + 1552i64) + 4i64 * (unsigned __int8)(20 * v5)) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 264) + 792i64)) ^ 0xAF418EDB) - 197329201;
                goto LABEL_1037;
            case 0x1C:
                Calls::FastCall(v4 + 1584, &v29, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1096);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v10 + 936);
                goto LABEL_1038;
            case 0x1D:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1336);
                v14 = (unsigned __int8)v5 & 0x84;
                v15 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1272) + 8i64 * (v5 & 0x6D)) + 672i64);
                goto LABEL_34;
            case 0x1E:
                v29 = v11 + 721662203;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 24) + 64i64);
                v13 = ((v11 + 721662203) ^ ((unsigned int)~FuckEnc::CacheRead<_DWORD>(v10 + 1120) >> 10)) - 2123614718;
                goto LABEL_1037;
            case 0x1F:
                v29 = v11 + 1870818158;
                v29 = v11 + 1870818158 - FuckEnc::CacheRead<_DWORD>(v4 + 936);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 800);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1184) + 8i64 * (unsigned __int8)(-11 * v5)) + 1432i64);
                goto LABEL_1038;
            case 0x20:
                v29 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 352) + 1096i64) + 1488i64) ^ (8 * FuckEnc::CacheRead<_DWORD>(v4 + 120));
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 792);
                goto LABEL_1038;
            case 0x21:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1840) + 8i64 * ((unsigned __int8)v5 ^ 0x91u)) + 744i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 1328) + 8i64 * (unsigned __int8)(-96 * v5), &v29, v5, v4);
                goto LABEL_1038;
            case 0x22:
                v29 = -(v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 1808i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 24))) - 129766391;
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1920);
                goto LABEL_1038;
            case 0x23:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 920) + 328i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1672) + 8i64 * ((unsigned __int8)v5 & 0x81)) + 928i64, &v29, v5, v4);
                goto LABEL_1038;
            case 0x24:
                Calls::FastCall(v4 + 1296, &v29, v5, v4);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 1752i64) + 464i64);
                goto LABEL_1038;
            case 0x25:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 504) ^ v11;
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1808) + 4i64 * FuckEnc::CacheRead<unsigned __int8>(v4 + 448));
                v13 = __ROR4__(v29, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 832i64));
                goto LABEL_1037;
            case 0x26:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 224i64, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 984) + 1072i64));
                goto LABEL_1038;
            case 0x27:
                v29 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 896i64) + 4i64 * (((unsigned __int8)v5 ^ 0xF7) & 0xCD)) ^ (-407117293 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1904) + 1760i64)));
                goto LABEL_1038;
            case 0x28:
                v29 = v11 + 633536817;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1640);
                goto LABEL_1038;
            case 0x29:
                v29 = __ROR4__(v11, v5) ^ 0x7EF5077F;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 392);
                v29 -= FuckEnc::CacheRead<_DWORD>(v10 + 1264);
                v13 = v29 - (FuckEnc::CacheRead<_DWORD>(v4 + 464) ^ 0x53454AD5);
                goto LABEL_1037;
            case 0x2A:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 88) + 624i64);
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 504);
                v29 = __ROR4__(v29, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 568) + 4i64 * (unsigned __int8)(67 * FuckEnc::CacheRead<_BYTE>(v4 + 280))));
                goto LABEL_1038;
            case 0x2B:
                v29 = v11 - 2052918693;
                v29 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 616i64) + 192i64) ^ (v11 - 2052918693) ^ 0xD1FF4141;
                goto LABEL_1038;
            case 0x2C:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1736);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1840) + 8i64 * ((unsigned __int8)v5 ^ 0xA7u)) + 1072i64) + 328i64) + 680i64);
                v13 = FuckEnc::CacheRead<_DWORD>(v10 + 1816) ^ v29;
                goto LABEL_1037;
            case 0x2D:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 744);
                v29 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 1776) ^ (FuckEnc::CacheRead<_DWORD>(v10 + 792) + (FuckEnc::CacheRead<_DWORD>(v4 + 792) ^ 0xA7C31131));
                goto LABEL_1038;
            case 0x2E:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 120), 16)) + 720i64);
                v29 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 64) + 776i64) * ~FuckEnc::CacheRead<_DWORD>(v10 + 832));
                goto LABEL_1038;
            case 0x2F:
                v29 = v11 + ~(1958940977 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1184) + 8i64 * (v5 & 0x10)) + 1704i64) + 1608i64) + 624i64) + 936i64));
                goto LABEL_1038;
            case 0x30:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 392);
                v29 = v11 + 1 + FuckEnc::CacheRead<_DWORD>(v10 + 1920);
                v29 -= (unsigned int)0x14510CCF ^ FuckEnc::CacheRead<_DWORD>(v4 + 176) ^ FuckEnc::CacheRead<_DWORD>(v4 + 792);
                goto LABEL_1038;
            case 0x31:
                v29 = v11 + 808754196 + FuckEnc::CacheRead<_DWORD>(v4 + 1160);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 8i64 * (unsigned __int8)(51 * v5)) + 1664i64) + 1424i64);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1160);
                goto LABEL_1038;
            case 0x32:
                v13 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 744) + 1016i64) + 8i64 * (((unsigned __int8)v5 ^ 0xC) & 0x5C)) + 776i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 32) + 8i64 * ((unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 848), 11) & 0xAC)) + 1592i64));
                goto LABEL_1037;
            case 0x33:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1080);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 264) + 1816i64) + (FuckEnc::CacheRead<_DWORD>(v4 + 136) ^ v5);
                goto LABEL_1038;
            case 0x34:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 24) + 1480i64) + 4i64 * (v5 & 0x3E)) - v5;
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 896i64) + 4i64 * (v5 & 0x49)) ^ v29;
                goto LABEL_1037;
            case 0x35:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 96) ^ v11 ^ 0x47D0FF65;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 8i64 * (unsigned __int8)(41 * v5)) + 264i64);
                v29 += FuckEnc::CacheRead<_DWORD>(v10 + 280);
                goto LABEL_1038;
            case 0x36:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1152) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 752), 23));
                v29 = __ROL4__(v29, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 1736i64) ^ v5);
                goto LABEL_1038;
            case 0x37:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 392i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 1800) + 8i64 * (v5 & 0x43), &v29, v5, v4);
                goto LABEL_1038;
            case 0x38:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 8i64 * ((unsigned __int8)(-115 * v5) & 0xFC)) + 672i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 29), &v29, v5, v4);
                goto LABEL_1038;
            case 0x39:
                v29 = v11 + 1974180476 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 392) + 520i64) + 1);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1264) ^ 0xD6C5983E;
                goto LABEL_1038;
            case 0x3A:
                v29 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 424) ^ 0x9931321D);
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 848) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1312) + 1152i64) + 4i64 * ((unsigned __int8)__ROL4__(v5, 9) & 0xCE));
                goto LABEL_1038;
            case 0x3B:
                v29 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 1776);
                v29 = __ROL4__(v29, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 1840i64) + 8i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 1488), 6) & 0x14)) + 776i64));
                goto LABEL_1038;
            case 0x3C:
                v29 = v11 ^ 0xA1370D75;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 472);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1312) + 536i64, &v29, v5, v10);
                goto LABEL_1038;
            case 0x3D:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 792) - 772268541;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 656);
                v29 = __ROR4__(v29, 108 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v10 + 240) + 4i64 * (__ROL4__(v5, 21) & 0x56)));
                goto LABEL_1038;
            case 0x3E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 720);
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1736);
                v13 = ~(v29 - (FuckEnc::CacheRead<_DWORD>(v4 + 1160) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1832) | 9)));
                goto LABEL_1037;
            case 0x3F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 352);
                v29 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 936));
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 776);
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 1904i64) + 1776i64);
                goto LABEL_1038;
            case 0x40:
                Calls::FastCall(v4 + 312, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1016) + 8i64 * (unsigned __int8)(25 * v5)) + 360i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 1)));
                goto LABEL_1038;
            case 0x41:
                v29 = v11 ^ ~(-976467231 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 328) + 192i64));
                v13 = v29 + 1720070775 * FuckEnc::CacheRead<_DWORD>(v4 + 1160);
                goto LABEL_1037;
            case 0x42:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1072);
                v29 = (v11 ^ ((FuckEnc::CacheRead<_DWORD>(v10 + 832) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 416) + 136i64)) | 0xF)) - 771800818;
                goto LABEL_1038;
            case 0x43:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 8i64 * ((unsigned __int8)v5 ^ 0xD0u)) + 504i64);
                v29 -= 913213956 * FuckEnc::CacheRead<_DWORD>(v4 + 792);
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(v4 + 520);
                goto LABEL_1037;
            case 0x44:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 8i64 * ((unsigned __int8)v5 ^ 0x6Au)) + 1048i64) + 1504i64) + 1;
                v29 = __ROR4__(v29, FuckEnc::CacheRead<_DWORD>(v4 + 776));
                goto LABEL_1038;
            case 0x45:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1184) + 8i64 * (v5 & 0xA)) + 1128i64) + 1512i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 7)) + 1096i64) + 1736i64);
                goto LABEL_1038;
            case 0x46:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 392) + 288i64) + 8i64 * (unsigned __int8)(-96 * v5)) + 528i64) + 8i64 * ((unsigned __int8)(83 * v5) & 0xC6)) + 496i64) + 4i64 * (((unsigned __int8)v5 ^ 0xD3) & 0x6E));
                goto LABEL_1038;
            case 0x47:
                v29 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1344) + 8i64 * ((unsigned __int8)__ROR4__(v5, 17) & 0xE1)) + 32i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 31)) + 176i64) ^ FuckEnc::CacheRead<_DWORD>(v4 + 520) & 0xFFFFFFEC);
                goto LABEL_1038;
            case 0x48:
                Calls::FastCall(v4 + 1960, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 624i64));
                v29 = __ROR4__(v29, FuckEnc::CacheRead<_DWORD>(v4 + 1776));
                goto LABEL_1038;
            case 0x49:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 672i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 17), &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 680));
                goto LABEL_1038;
            case 0x4A:
                v29 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1376) + 1048i64) + 1344i64) + 8i64 * ((unsigned __int8)__ROL4__(v5, 21) & 0xB9)) + 112i64) + 1120i64) - 859635407);
                goto LABEL_1038;
            case 0x4B:
                v29 = v5 ^ v11;
                v13 = __ROR4__(v5 ^ v11, ~(FuckEnc::CacheRead<_BYTE>(v4 + 176) * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 8i64 * ((unsigned __int8)(119 * v5) & 0xEB)) + 1504i64)));
                goto LABEL_1037;
            case 0x4C:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 192);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 1336i64) + 1280i64) + 1752i64) + 1104i64);
                goto LABEL_1038;
            case 0x4D:
                v29 = ~(v11 + 1 + (FuckEnc::CacheRead<_DWORD>(v4 + 520) ^ 0xAC7B2FF4));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1728);
                v13 = v29 + (FuckEnc::CacheRead<_DWORD>(v10 + 1736) | 0x11);
                goto LABEL_1037;
            case 0x4E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 984);
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 392) + 1760i64);
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1072) + 688i64) + 8i64 * (unsigned __int8)(-121 * v5)) + 608i64) ^ v29;
                goto LABEL_1037;
            case 0x4F:
                Calls::FastCall(v4 + 640, &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1072));
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 1408) ^ 0x904434D9;
                goto LABEL_1038;
            case 0x50:
                v29 = (v11 - FuckEnc::CacheRead<_DWORD>(v4 + 776)) ^ 0x33369A3C;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 112);
                v29 -= FuckEnc::CacheRead<_DWORD>(v10 + 1832);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1104) + 1002905784;
                goto LABEL_1038;
            case 0x51:
                v29 = v5 ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 952);
                v13 = (v5 ^ v11) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 616) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 1592), 3)) + 1808i64) + 4i64 * (((unsigned __int8)v5 ^ 0x20) & 0x6D));
                goto LABEL_1037;
            case 0x52:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 984) + 616i64) + 8i64 * ((unsigned __int8)v5 ^ 0x70u)) + 864i64, &v29, v5, v4);
                goto LABEL_1038;
            case 0x53:
                Calls::FastCall(v4 + 968, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 1336i64) + 1016i64) + 8i64 * (unsigned __int8)(53 * v5)));
                goto LABEL_1038;
            case 0x54:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1048) + 752i64);
                v13 = v29 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 848) & 0x9F)) + 88i64) + 936i64);
                goto LABEL_1037;
            case 0x55:
                v29 = (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 792)) ^ 0xC3018944;
                v29 = __ROL4__(v29, ~(v5 * (FuckEnc::CacheRead<_BYTE>(v4 + 1448) - 12)));
                goto LABEL_1038;
            case 0x56:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1248);
                Calls::FastCall(v4 + 648, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 656) + 1272i64) + 8i64 * (unsigned __int8)(23 * v5)));
                v29 ^= v5;
                goto LABEL_1038;
            case 0x57:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 360i64) + 8i64 * (unsigned __int8)(41 * v5)) + 680i64) + 944i64) + 8i64 * (((unsigned __int8)v5 ^ 0xE8) & 0x97)) + 1048i64);
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 424);
                goto LABEL_1038;
            case 0x58:
                v13 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 416) + 1592i64) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 1120i64) + (FuckEnc::CacheRead<_DWORD>(v4 + 192) ^ 0x5E0B1C90)));
                goto LABEL_1037;
            case 0x59:
                Calls::FastCall(v4 + 904, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 1104), 29)) + 32i64) + 8i64 * (unsigned __int8)v5) + 1072i64));
                goto LABEL_1038;
            case 0x5A:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1840) + 8i64 * (unsigned __int8)(-117 * v5)) + 984i64) + 1840i64) + 8i64 * (unsigned __int8)(126 * v5)) + 264i64);
                v13 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1728) + 1176i64);
                goto LABEL_1037;
            case 0x5B:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 32) + 8i64 * ((unsigned __int8)v5 & 0xEC)) + 568i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 26));
                v13 = ~__ROL4__(v29, FuckEnc::CacheRead<_DWORD>(v4 + 1920));
                goto LABEL_1037;
            case 0x5C:
                v29 = v11 ^ 0x1B317686;
                v13 = __ROL4__(v11 ^ 0x1B317686, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 360) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 280) & 0x2A)) + 800i64) + 328i64) + 280i64));
                goto LABEL_1037;
            case 0x5D:
                v29 = (v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1432)) ^ 0xC3018944;
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 688) + 8i64 * (__ROL4__(v5, 11) & 0x43)) + 1312i64) + 192i64) ^ v29;
                goto LABEL_1037;
            case 0x5E:
                v29 = v11 ^ (-788589273 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 752i64));
                v13 = v29 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1016) + 8i64 * (unsigned __int8)(-65 * v5)) + 568i64) + 4i64 * (v5 & 0x46));
                goto LABEL_1037;
            case 0x5F:
                Calls::FastCall(v4 + 1856, &v29, v5, v4);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1672) + 8i64 * ((unsigned __int8)(76 * v5) & 0xCC)) + 1408i64);
                goto LABEL_1038;
            case 0x60:
                v29 = v11 - 376985119 + (FuckEnc::CacheRead<_DWORD>(v4 + 1104) << 20);
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 592) + 616i64) + 8i64 * (unsigned __int8)(-106 * v5)) + 120i64);
                goto LABEL_1038;
            case 0x61:
                v29 = v11 - 404636144;
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 1120) ^ (v11 - 404636144);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 656) + 800i64) + 1400i64);
                v29 -= FuckEnc::CacheRead<_DWORD>(v10 + 424);
                goto LABEL_1038;
            case 0x62:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 1408) ^ v11;
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1344) + 8i64 * ((25 * (_BYTE)v5) & 0x4F)) + 504i64);
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(v4 + 192);
                goto LABEL_1037;
            case 0x63:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 1848i64, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * (unsigned __int8)__ROR4__(v5, 3)));
                goto LABEL_1038;
            case 0x64:
                Calls::FastCall(v4 + 216, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 88) + 944i64) + 8i64 * (unsigned __int8)(-109 * v5)) + 296i64) + 744i64));
                goto LABEL_1038;
            case 0x65:
                v29 = v11 + 832240736;
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 1504) ^ (v11 + 832240736);
                v13 = v29 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1672) + 8i64 * (__ROL4__(v5, 1) & 0x1B)) + 296i64) + 520i64);
                goto LABEL_1037;
            case 0x66:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1336);
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1344) + 8i64 * (unsigned __int8)(-54 * FuckEnc::CacheRead<_BYTE>(v10 + 1736))) + 32i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 5)) + 1432i64);
                goto LABEL_1038;
            case 0x67:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 264) + 1080i64);
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 1408) ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 280));
                goto LABEL_1038;
            case 0x68:
                Calls::FastCall(v4 + 640, &v29, v5, v4);
                v29 = __ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 96) + v29, 152);
                goto LABEL_1038;
            case 0x69:
                v29 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1400) + 856i64) + 8i64 * ((unsigned __int8)v5 & 0xA6)) + 1224i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 14)) ^ v11;
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(v4 + 1920);
                goto LABEL_1037;
            case 0x6A:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1776);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1336);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1176) + (FuckEnc::CacheRead<_DWORD>(v4 + 192) << 10) - 638394412;
                goto LABEL_1038;
            case 0x6B:
                v29 = v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 464) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 1864i64, &v29, v5, v4);
                goto LABEL_1038;
            case 0x6C:
                v29 = v11 ^ 0x4AD22544;
                v29 = v11 ^ 0x4AD22544 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1080) * v5);
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 1120i64) + v29 + 1;
                goto LABEL_1037;
            case 0x6D:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 1456i64);
                v13 = v11 - (FuckEnc::CacheRead<_DWORD>(v10 + 832) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1312) + 64i64) + 120i64));
                goto LABEL_1037;
            case 0x6E:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 200) + 8i64 * (__ROR4__(v5, 4) & 0xF)) + 1736i64) + 1;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1704);
                v29 += FuckEnc::CacheRead<_DWORD>(v10 + 192);
                goto LABEL_1038;
            case 0x6F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1904);
                v16 = v10;
                v14 = ((unsigned __int8)v5 ^ 0xA) & 0x4B;
                v15 = FuckEnc::CacheRead<_QWORD>(v10 + 1688);
                goto LABEL_35;
            case 0x70:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 1016i64) + 8i64 * (unsigned __int8)(-59 * v5)) + 432i64, &v29, v5, v4);
                goto LABEL_1038;
            case 0x71:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1048) + 760i64, &v29, v5, v4);
                v29 += 8 * FuckEnc::CacheRead<_DWORD>(v4 + 424);
                goto LABEL_1038;
            case 0x72:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 472);
                v13 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1248) + 1760i64) - (FuckEnc::CacheRead<_DWORD>(v4 + 1120) >> 3) - FuckEnc::CacheRead<_DWORD>(v10 + 464);
                goto LABEL_1037;
            case 0x73:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 1952i64, &v29, v5, v4);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 280);
                goto LABEL_1038;
            case 0x74:
                v29 = v11 ^ 0xE327D0FF;
                v29 = ((v11 ^ 0xE327D0FF) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1072) + 504i64)) ^ 0x28D0FFBB;
                v29 = v29 - FuckEnc::CacheRead<_DWORD>(v4 + 1776) - v5;
                goto LABEL_1038;
            case 0x75:
                v29 = v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 328) + 1176i64);
                v13 = v29 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1672) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 520) & 0x6E)) + 392i64) + 608i64);
                goto LABEL_1037;
            case 0x76:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1432);
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 136);
                v29 ^= -135273303 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 568) + 4i64 * (unsigned __int8)(-64 * ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1432)));
                goto LABEL_1038;
            case 0x77:
                v13 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 88) + 528i64) + 8i64 * (__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 120) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 920) + 120i64), 21) & 0x61)) + 1816i64);
                goto LABEL_1037;
            case 0x78:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1664);
                v29 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 448) + FuckEnc::CacheRead<_DWORD>(v10 + 752) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1840) + 8i64 * ((unsigned __int8)__ROL4__(v5, 28) & 0xBD)) + 1832i64));
                goto LABEL_1038;
            case 0x79:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 832) + FuckEnc::CacheRead<_DWORD>(v4 + 1592) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * (unsigned __int8)(-8 * v5)) + 176i64);
                goto LABEL_1038;
            case 0x7A:
                v29 = v5 + v11 - 1007086068;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 440);
                Calls::FastCall(v4 + 1296, &v29, v5, FuckEnc::CacheRead<_QWORD>(v10 + 472));
                goto LABEL_1038;
            case 0x7B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1072);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1144) + 8i64 * (unsigned __int8)(-6 * FuckEnc::CacheRead<_DWORD>(v10 + 1816)), &v29, v5, v4);
                v29 += 1654854090;
                goto LABEL_1038;
            case 0x7C:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1224) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 280) & 0x96));
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(v4 + 1488) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 680) + 176i64);
                goto LABEL_1037;
            case 0x7D:
                v29 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1104));
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1592);
                v29 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1840) + 8i64 * (((unsigned __int8)v5 ^ 0xF7) & 0x98)) + 1408i64);
                goto LABEL_1038;
            case 0x7E:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1160) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 360i64) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1264) & 0x2D)) + 1456i64) + 136i64);
                goto LABEL_1038;
            case 0x7F:
                v29 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 792) & 0xFFFFFFEC;
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 592) + 424i64);
                v29 = __ROL4__(v29, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 264) + 832i64));
                goto LABEL_1038;
            case 0x80:
                v29 = ~(v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 96) | 0xC) ^ ~(v5 * v5 * FuckEnc::CacheRead<_DWORD>(v4 + 96)));
                goto LABEL_1038;
            case 0x81:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 720) + 440i64);
                v29 = v11 ^ (v5 * (FuckEnc::CacheRead<_DWORD>(v4 + 608) + ~FuckEnc::CacheRead<_DWORD>(v10 + 848)));
                goto LABEL_1038;
            case 0x82:
                v17 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 744) + 1008i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v17);
                v13 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1336) + 1592i64) - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v17) + 1816i64) & 0xFFFFFFEA);
                goto LABEL_1037;
            case 0x83:
                v29 = v11 ^ 0x65D1FF41;
                v29 = (v11 ^ 0x65D1FF41) + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1048) + 1816i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 8i64 * ((unsigned __int8)(-28 * v5) & 0xC4)) + 504i64));
                goto LABEL_1038;
            case 0x84:
                v29 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 192) >> 14);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1344) + 8i64 * ((-28 * (_BYTE)v5) & 0x51)) + 624i64);
                v29 -= FuckEnc::CacheRead<_DWORD>(v10 + 752);
                goto LABEL_1038;
            case 0x85:
                v29 = v11;
                v18 = (unsigned __int8)__ROL4__(v5, 29);
                v19 = FuckEnc::CacheRead<_QWORD>(v4 + 416);
                goto LABEL_854;
            case 0x86:
                v29 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 464) ^ 0x8CB17D7);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 768);
                v29 -= FuckEnc::CacheRead<_DWORD>(v10 + 504);
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 1104);
                goto LABEL_1038;
            case 0x87:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 504);
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 464) + FuckEnc::CacheRead<_DWORD>(v4 + 1760) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 328) + 776i64);
                goto LABEL_1038;
            case 0x88:
                v29 = __ROL4__(v11, 213) + 380819128;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1248) + 1376i64);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1184) + 8i64 * (((unsigned __int8)v5 ^ 0xEF) & 0xFC)) + 120i64);
                goto LABEL_1038;
            case 0x89:
                Calls::FastCall(v4 + 248, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1640) + 1280i64) + 1376i64));
                goto LABEL_1038;
            case 0x8A:
                v29 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 192) & 0xFFFFFFF4;
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1152) + 4i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1336) + 752i64) ^ 0x24u));
                goto LABEL_1038;
            case 0x8B:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 448);
                Calls::FastCall(v4 + 1848, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1080) & 0xD7)));
                goto LABEL_1038;
            case 0x8C:
                v29 = v11 ^ 0x70EE783F;
                v29 = (v11 ^ 0x70EE783F) + FuckEnc::CacheRead<_DWORD>(v4 + 1816);
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * ((unsigned __int8)v5 & 0xC8)) + 24i64) + 448i64);
                goto LABEL_1038;
            case 0x8D:
                v13 = ~(v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 1920) ^ (v5 * ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 832i64) - 1110843917)));
                goto LABEL_1037;
            case 0x8E:
                v29 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 688) + 8i64 * ((unsigned __int8)v5 & 0xBA)) + 1784i64) + 832i64) ^ v11);
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 264) + 424i64) ^ v29;
                goto LABEL_1037;
            case 0x8F:
                v20 = ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 752) ^ 0xEE) & 0x95;
                v21 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 264) + 744i64) + 1128i64);
                goto LABEL_150;
            case 0x90:
                v29 = v11 + v5;
                v22 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 688) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 608) & 0xD8));
                goto LABEL_934;
            case 0x91:
                v29 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 1760) & 0xFFFFFFE6;
                Calls::FastCall(v4 + 760, &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1608));
                goto LABEL_1038;
            case 0x92:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 296);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 1144i64) + 8i64 * (unsigned __int8)(FuckEnc::CacheRead<_BYTE>(v10 + 1176) << 7), &v29, v5, v4);
                goto LABEL_1038;
            case 0x93:
                v29 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1176) << 22);
                v13 = v29 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1400) + 416i64) + 464i64) - 1054757529);
                goto LABEL_1037;
            case 0x94:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1280);
                v14 = (unsigned __int8)(96 * (FuckEnc::CacheRead<_BYTE>(v10 + 520) + FuckEnc::CacheRead<_BYTE>(v4 + 1104)));
                v15 = FuckEnc::CacheRead<_QWORD>(v4 + 1032);
                goto LABEL_34;
            case 0x95:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 192) ^ v11;
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 792i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 352) + 1920i64) + 1340474823;
                goto LABEL_1038;
            case 0x96:
                v29 = v5 ^ (v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 1760) ^ 0x806E9A64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 328);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1840) + 8i64 * (unsigned __int8)(-2 * v5)) + 1448i64);
                goto LABEL_1038;
            case 0x97:
                v29 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 608);
                v13 = v29 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1432) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 88) + 496i64) + 4i64 * ((unsigned __int8)v5 & 0xF8)));
                goto LABEL_1037;
            case 0x98:
                v29 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1664) + 1736i64) ^ v11;
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 920) + 1488i64);
                goto LABEL_1038;
            case 0x99:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 8i64 * (unsigned __int8)__ROR4__(v5, 9)) + 624i64);
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(v10 + 688) + 616i64) + 8i64 * (((unsigned __int8)v5 ^ 0xEE) & 0x39)) + 136i64) ^ v11;
                goto LABEL_1037;
            case 0x9A:
                v14 = (unsigned __int8)v5 ^ 2u;
                v15 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * (unsigned __int8)__ROR4__(v5, 9)) + 1800i64);
                goto LABEL_34;
            case 0x9B:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 984) + 752i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1248);
                v13 = v29 + (FuckEnc::CacheRead<_DWORD>(v4 + 464) ^ FuckEnc::CacheRead<_DWORD>(v10 + 1488) ^ 0x44011B50);
                goto LABEL_1037;
            case 0x9C:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1080);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1664);
                Calls::FastCall(v4 + 872, &v29, v5, FuckEnc::CacheRead<_QWORD>(v10 + 88));
                goto LABEL_1038;
            case 0x9D:
                v29 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1408));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 112i64);
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(v10 + 520) * FuckEnc::CacheRead<_DWORD>(v4 + 1408);
                goto LABEL_1037;
            case 0x9E:
                v29 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 96) << 14);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1344) + 8i64 * ((unsigned __int8)v5 ^ 0xA1u)) + 1312i64);
                v29 += FuckEnc::CacheRead<_DWORD>(v10 + 1432);
                goto LABEL_1038;
            case 0x9F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 720);
                Calls::FastCall(v10 + 1632, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 88) + 768i64));
                goto LABEL_1038;
            case 0xA0:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 1552i64) + 4i64 * (unsigned __int8)v5);
                v13 = v29 + ((-60007566 * FuckEnc::CacheRead<_DWORD>(v4 + 176)) | 0x15);
                goto LABEL_1037;
            case 0xA1:
                v29 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1336) + 1120i64) + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1184) + 8i64 * (__ROR4__(v5, 28) & 0x40)) + 752i64));
                goto LABEL_1038;
            case 0xA2:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 136);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 528) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 744) + 1280i64) + 1104i64), 3)) + 352i64);
                v13 = __ROR4__(v29, FuckEnc::CacheRead<_DWORD>(v10 + 504));
                goto LABEL_1037;
            case 0xA3:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 1816) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1608);
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1672) + 8i64 * (unsigned __int8)(37 * v5)) + 1576i64) + 608i64);
                goto LABEL_1037;
            case 0xA4:
                v29 = v11 + 1617545908 + FuckEnc::CacheRead<_DWORD>(v4 + 1104);
                v29 = __ROR4__(v29, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 1608i64) + 608i64) | 0x12);
                goto LABEL_1038;
            case 0xA5:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1736);
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 752);
                v29 = ~(v29 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 120i64) ^ v5));
                goto LABEL_1038;
            case 0xA6:
                v29 = v11 + ~FuckEnc::CacheRead<_DWORD>(v4 + 1104) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1728) + 1784i64) + 1880i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 20));
                goto LABEL_1038;
            case 0xA7:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1312);
                v29 = FuckEnc::CacheRead<_DWORD>(v10 + 1176) ^ v11;
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 832) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * (__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 136), 21) & 0x3C)) + 424i64);
                goto LABEL_1038;
            case 0xA8:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 1008i64) + 1264i64);
                v13 = v29 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 528) + 8i64 * (v5 & 0x5C)) + 568i64) + 4i64 * (((unsigned __int8)v5 ^ 0xDE) & 0x61));
                goto LABEL_1037;
            case 0xA9:
                v29 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1920));
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 936);
                v29 = ~__ROR4__(v29, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 776i64) + 49);
                goto LABEL_1038;
            case 0xAA:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1120);
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 1176) & 0xFFFFFFE9;
                v13 = ~(v29 + (FuckEnc::CacheRead<_DWORD>(v4 + 1408) ^ 0x70E447E6));
                goto LABEL_1037;
            case 0xAB:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 832);
                v29 = __ROL4__(v29, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1664) + 1928i64) + 8i64 * ((unsigned __int8)v5 & 0xEE)) + 504i64) ^ 0xFB);
                goto LABEL_1038;
            case 0xAC:
                v29 = ~__ROL4__(v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1264), v5);
                v13 = (v29 ^ ~(FuckEnc::CacheRead<_DWORD>(v4 + 280) ^ 0x86DC1C3D)) + 222101199;
                goto LABEL_1037;
            case 0xAD:
                v29 = (v11 - 1037185559 + FuckEnc::CacheRead<_DWORD>(v4 + 936)) ^ 0xC3018944;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1376) + 1280i64);
                v29 -= FuckEnc::CacheRead<_DWORD>(v10 + 776);
                goto LABEL_1038;
            case 0xAE:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1280);
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1344) + 8i64 * (unsigned __int8)(-44 * FuckEnc::CacheRead<_BYTE>(v10 + 848))) + 616i64) + 8i64 * (unsigned __int8)(-49 * v5)) + 1432i64) ^ v11;
                goto LABEL_1037;
            case 0xAF:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1760) + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1904) + 200i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 31)) + 136i64);
                goto LABEL_1038;
            case 0xB0:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 448);
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 504);
                v29 -= 1022283480 * (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 1760));
                goto LABEL_1038;
            case 0xB1:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 392) + 720i64);
                Calls::FastCall(v10 + 640, &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1704));
                goto LABEL_1038;
            case 0xB2:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 416i64) + 1600i64) + 8i64 * ((unsigned __int8)v5 ^ 0x10u)) + 264i64);
                v29 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v10 + 1432);
                goto LABEL_1038;
            case 0xB3:
                v29 = v11 + 973489711;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1728) + 1376i64);
                v29 = v11 + 973489711 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 528) + 8i64 * (unsigned __int8)(33 * v5)) + 1552i64) + 4i64 * (unsigned __int8)(61 * v5));
                goto LABEL_1038;
            case 0xB4:
                v29 = v11 - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(v4 + 680) + 1376i64);
                v29 = (v11 - v5) ^ (16 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1784) + 752i64));
                goto LABEL_1038;
            case 0xB5:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 136) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1248);
                v29 = (v29 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 1760) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 176i64))) + 801308977;
                goto LABEL_1038;
            case 0xB6:
                v29 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 1448) & 0xFFFFFFF0 | 8);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1640);
                v29 ^= ~(FuckEnc::CacheRead<_DWORD>(v10 + 1760) ^ 0x44D1FF41);
                goto LABEL_1038;
            case 0xB7:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1920);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 624);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 752) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1576) + 440i64) + 1776i64);
                goto LABEL_1038;
            case 0xB8:
                v29 = __ROL4__(v11, 15 * FuckEnc::CacheRead<_BYTE>(v4 + 848));
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1704) + 1344i64) + 8i64 * ((unsigned __int8)v5 ^ 0x1Eu)) + 1312i64) + 448i64) ^ v29;
                goto LABEL_1037;
            case 0xB9:
                v29 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1160) - 2109688966);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 8i64 * ((unsigned __int8)v5 & 0xDE)) + 32i64) + 8i64 * (unsigned __int8)(108 * v5)) + 1080i64);
                goto LABEL_1038;
            case 0xBA:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 608);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 1128i64);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1504) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 392) + 520i64);
                goto LABEL_1038;
            case 0xBB:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1400);
                v29 = v11 ^ ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1008) + 1080i64) * ~(FuckEnc::CacheRead<_DWORD>(v4 + 1104) ^ 0x3461C34A));
                goto LABEL_1038;
            case 0xBC:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 720) + 1576i64) + 1576i64);
                Calls::FastCall(v4 + 1560, &v29, v5, v10);
                goto LABEL_1038;
            case 0xBD:
                v29 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * ((unsigned __int8)v5 ^ 0x31u)) + 1592i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 496) + 4i64 * (((_BYTE)v5 + ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 832)) & 0x1B)));
                goto LABEL_1038;
            case 0xBE:
                v29 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1728) + 240i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 12)) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 416);
                v13 = __ROR4__(v29, ~FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v10 + 568) + 4i64 * ((unsigned __int8)v5 & 0xCC)));
                goto LABEL_1037;
            case 0xBF:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 1176) ^ v11;
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 656) + 424i64);
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 520) + 1;
                goto LABEL_1038;
            case 0xC0:
                v29 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 1776) ^ v5);
                v29 = __ROL4__(v29, FuckEnc::CacheRead<_DWORD>(v4 + 776));
                Calls::FastCall(v4 + 976, &v29, v5, v4);
                goto LABEL_1038;
            case 0xC1:
                v29 = v11 - 890807458;
                v29 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 832i64) ^ (v11 - 890807458);
                goto LABEL_1038;
            case 0xC2:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 8i64 * ((unsigned __int8)v5 & 0xCD)) + 1664i64);
                v29 = __ROL4__(1519548420 - (v11 ^ (v5 + FuckEnc::CacheRead<_DWORD>(v10 + 1832))), v5);
                goto LABEL_1038;
            case 0xC3:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 1344i64) + 8i64 * (((unsigned __int8)v5 ^ 0xFB) & 0xCC)) + 1608i64) + 360i64) + 8i64 * ((34 * (_BYTE)v5) & 0x76)) + 24i64);
                v13 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 136);
                goto LABEL_1037;
            case 0xC4:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 936) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 656);
                v29 += FuckEnc::CacheRead<_DWORD>(v10 + 1736);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 168i64) + 4i64 * (v5 & 1));
                goto LABEL_1038;
            case 0xC5:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1104);
                v29 ^= ~FuckEnc::CacheRead<_DWORD>(v4 + 192) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 744i64) + 1408i64);
                goto LABEL_1038;
            case 0xC6:
                v29 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 792));
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 32) + 8i64 * (unsigned __int8)__ROL4__(v5, 25)) + 1952i64, &v29, v5, v4);
                goto LABEL_1038;
            case 0xC7:
                v29 = v11 ^ 0x52EF5072;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1784);
                v29 = __ROL4__(FuckEnc::CacheRead<_DWORD>(v10 + 1776) ^ v11 ^ 0x52EF5072, v5);
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 1104) + 1;
                goto LABEL_1038;
            case 0xC8:
                v23 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 528) + 8i64 * ((unsigned __int8)v5 & 0xD0)) + 1640i64) + 1456i64) + 1096i64) + 1152i64) + 4i64 * (((unsigned __int8)v5 ^ 0xBB) & 0xCE));
                goto LABEL_1036;
            case 0xC9:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1008) + 1448i64);
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 192) >> 11;
                v13 = FuckEnc::CacheRead<_DWORD>(v4 + 1120) ^ v29 ^ 0xC59E4371;
                goto LABEL_1037;
            case 0xCA:
                v29 = (FuckEnc::CacheRead<_DWORD>(v4 + 1120) ^ v11) - 1876033345;
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1512) + 8i64 * ((-16 * (_BYTE)v5) & 0x1F)) + 1104i64);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1120);
                goto LABEL_1038;
            case 0xCB:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 848i64);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 200) + 8i64 * (__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 280), 19) & 0x15)) + 1336i64) + 1408i64);
                goto LABEL_1038;
            case 0xCC:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 952);
                Calls::FastCall(v10 + 648, &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1936));
                v29 -= 1561796384;
                goto LABEL_1038;
            case 0xCD:
                v29 = v11 - v5;
                v29 = v11 - v5 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 32) + 8i64 * (((unsigned __int8)v5 ^ 4) & 0x4F)) + 1504i64);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 504) * v5;
                goto LABEL_1038;
            case 0xCE:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1400) + 112i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 352) + 968i64, &v29, v5, v10);
                goto LABEL_1038;
            case 0xCF:
                v29 = v5 ^ (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1816));
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 856) + 8i64 * ((unsigned __int8)v5 ^ 0x80u)) + 200i64) + 8i64 * (unsigned __int8)(63 * v5)) + 1832i64);
                goto LABEL_1038;
            case 0xD0:
                v29 = (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 832)) ^ 0xDC678B1E;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 24);
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 296) + 1832i64);
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 424);
                goto LABEL_1038;
            case 0xD1:
                v29 = __ROL4__(v11 + 386648793, 206) - 531681857;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1072);
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1880) + 4i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1920) ^ 0xB2u));
                goto LABEL_1038;
            case 0xD2:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 1008i64) + 104i64, &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1128));
                goto LABEL_1038;
            case 0xD3:
                v29 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 120) << 8);
                Calls::FastCall(v4 + 1232, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 264) + 768i64));
                goto LABEL_1038;
            case 0xD4:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 424) ^ v11;
                v29 ^= 905367347 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 592) + 896i64) + 4i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 192i64) ^ 0x10) & 0x54));
                goto LABEL_1038;
            case 0xD5:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 8i64 * (v5 & 0x1D)) + 1424i64);
                Calls::FastCall(v10 + 1912, &v29, v5, v4);
                goto LABEL_1038;
            case 0xD6:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1280);
                v29 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v10 + 520) + FuckEnc::CacheRead<_BYTE>(v4 + 776));
                v29 = ~(v29 + ~FuckEnc::CacheRead<_DWORD>(v4 + 1160));
                goto LABEL_1038;
            case 0xD7:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 192);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 88);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1936) + 1928i64) + 8i64 * ((unsigned __int8)(92 * v5) & 0xE5)) + 496i64) + 4i64 * ((unsigned __int8)__ROL4__(v5, 5) & 0x85));
                goto LABEL_1038;
            case 0xD8:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 248i64, &v29, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 440);
                v29 -= FuckEnc::CacheRead<_DWORD>(v10 + 176);
                goto LABEL_1038;
            case 0xD9:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 520);
                v29 = v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 200) + 8i64 * (unsigned __int8)(10 * v5)) + 896i64) + 4i64 * (((unsigned __int8)v5 ^ 0xD3) & 0xAC)) - FuckEnc::CacheRead<_DWORD>(v4 + 504);
                goto LABEL_1038;
            case 0xDA:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 936) ^ v11;
                v29 = ~__ROL4__(v29, ~FuckEnc::CacheRead<_BYTE>(v4 + 1160));
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 832);
                goto LABEL_1038;
            case 0xDB:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1016) + 8i64 * (unsigned __int8)__ROL4__(v5, 4)) + 1448i64);
                v29 = ~__ROL4__(v29, FuckEnc::CacheRead<_DWORD>(v4 + 1488));
                goto LABEL_1038;
            case 0xDC:
                v29 = v5 ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1248) + 1584i64, &v29, v5, FuckEnc::CacheRead<_QWORD>(v4));
                goto LABEL_1038;
            case 0xDD:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 848);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 296);
                LODWORD(v11) = v29 - FuckEnc::CacheRead<_DWORD>(v10 + 1832);
                v29 = v11;
                v20 = (unsigned __int8)v5 & 0xCB;
                v21 = FuckEnc::CacheRead<_QWORD>(v4 + 920);
            LABEL_150:
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v21 + 824) + 4 * v20) ^ v11;
                goto LABEL_1037;
            case 0xDE:
                v29 = v11 + 1 + FuckEnc::CacheRead<_DWORD>(v4 + 464);
                v29 = __ROR4__(v29, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1344) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 752) & 0x3C)) + 776i64));
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 1736);
                goto LABEL_1038;
            case 0xDF:
                v29 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 520));
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 416) + 1728i64) + 1904i64) + 1400i64) + 1312i64) + 608i64);
                goto LABEL_1038;
            case 0xE0:
                v29 = v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1576) + 1832i64);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1592);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1408);
                goto LABEL_1038;
            case 0xE1:
                v13 = v11 - (v5 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1344) + 8i64 * ((FuckEnc::CacheRead<_DWORD>(v4 + 448) & 1) == 0)) + 1832i64) * ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 792i64)));
                goto LABEL_1037;
            case 0xE2:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 920) + 1576i64);
                v29 = v11 ^ ((FuckEnc::CacheRead<_DWORD>(v10 + 752) << 31) + ~FuckEnc::CacheRead<_DWORD>(v4 + 1120));
                goto LABEL_1038;
            case 0xE3:
                v29 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1432));
                v29 += ((_DWORD)0xFB17284 + FuckEnc::CacheRead<_DWORD>(v4 + 1104)) * (FuckEnc::CacheRead<_DWORD>(v4 + 520) + 1);
                goto LABEL_1038;
            case 0xE4:
                v29 = __ROR4__(v11, 68);
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 848);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1400);
                v13 = __ROL4__(v29, 43 - FuckEnc::CacheRead<_BYTE>(v10 + 280));
                goto LABEL_1037;
            case 0xE5:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 136) ^ v11;
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 1432);
                Calls::FastCall(v4 + 968, &v29, v5, v4);
                v29 ^= v5;
                goto LABEL_1038;
            case 0xE6:
                v29 = v5 ^ (v11 - FuckEnc::CacheRead<_DWORD>(v4 + 792));
                v29 = ~(FuckEnc::CacheRead<_DWORD>(v4 + 1816) ^ v29);
                v13 = v29 - 373092047 * FuckEnc::CacheRead<_DWORD>(v4 + 792);
                goto LABEL_1037;
            case 0xE7:
                v29 = ~(v5 + v11 + 489554111);
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 608) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1176) + 1273880597);
                goto LABEL_1038;
            case 0xE8:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 176);
                v29 = v29 - FuckEnc::CacheRead<_DWORD>(v4 + 1432) - v5;
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 848) + 1;
                goto LABEL_1038;
            case 0xE9:
                v29 = v11 - 649707995 * FuckEnc::CacheRead<_DWORD>(v4 + 176);
                v13 = v5 ^ (v29 - FuckEnc::CacheRead<_DWORD>(v4 + 120) * (FuckEnc::CacheRead<_DWORD>(v4 + 176) << 22));
                goto LABEL_1037;
            case 0xEA:
                v29 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 832)) - 771800735;
                v29 += v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 136) ^ 0x69u)) + 1808i64) + 4i64 * (((unsigned __int8)v5 ^ 0xEF) & 0x50));
                goto LABEL_1038;
            case 0xEB:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 720);
                v15 = FuckEnc::CacheRead<_QWORD>(v4 + 16);
                v14 = (((unsigned __int64)FuckEnc::CacheRead<unsigned int>(v10 + 1816) >> 28) ^ 0xFE) & 9;
                goto LABEL_34;
            case 0xEC:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1576);
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1672) + 8i64 * (unsigned __int8)(-60 * FuckEnc::CacheRead<_BYTE>(v10 + 120) * FuckEnc::CacheRead<_BYTE>(v10 + 752))) + 1160i64) ^ v11;
                goto LABEL_1037;
            case 0xED:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 160) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1264) & 2), &v29, v5, v4);
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 1264);
                goto LABEL_1038;
            case 0xEE:
                Calls::FastCall(v4 + 544, &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1248));
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1160) & 0x55)) + 792i64);
                goto LABEL_1038;
            case 0xEF:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1904);
                Calls::FastCall(v4 + 1304, &v29, v5, v10);
                v29 ^= (unsigned int)(-1789464776 * FuckEnc::CacheRead<_DWORD>(v4 + 280)) >> 28;
                goto LABEL_1038;
            case 0xF0:
                v29 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1008) + 752i64));
                Calls::FastCall(v4 + 1848, &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 440));
                goto LABEL_1038;
            case 0xF1:
                v29 = v11 + 708555133 * FuckEnc::CacheRead<_DWORD>(v4 + 1776) - FuckEnc::CacheRead<_DWORD>(v4 + 792);
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 1080) & 0xFFFFFFE0 | 0xF;
                goto LABEL_1038;
            case 0xF2:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1248) + 952i64) + 144i64);
                Calls::FastCall(v10 + 272, &v29, v5, v4);
                v29 = __ROL4__(v29, v5);
                goto LABEL_1038;
            case 0xF3:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1784);
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 392) + 120i64);
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 1264);
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 504) + 1;
                goto LABEL_1038;
            case 0xF4:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 264);
                Calls::FastCall(v10 + 1560, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1512) + 8i64 * ((-32 * (_BYTE)v5) & 0x7D)));
                goto LABEL_1038;
            case 0xF5:
                v29 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 392) + 1664i64) + 1272i64) + 8i64 * (v5 & 0x4C)) + 1080i64) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 792) | 0x1D));
                goto LABEL_1038;
            case 0xF6:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 1512i64) + 8i64 * ((unsigned __int8)v5 ^ 0x2Cu)) + 1664i64) + 1728i64);
                v13 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1152) + 4i64 * ((unsigned __int8)(73 * v5) & 0xF7)) + 771800762;
                goto LABEL_1037;
            case 0xF7:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1456);
                v29 = FuckEnc::CacheRead<_DWORD>(v10 + 1832) ^ v11;
                v29 = v5 ^ (v5 + v29 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 984) + 608i64));
                goto LABEL_1038;
            case 0xF8:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 720) + 744i64);
                Calls::FastCall(v4 + 1624, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1936) + 1752i64));
                goto LABEL_1038;
            case 0xF9:
                v29 = v11 - 1942163761;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 8i64 * (__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 504), 19) & 0x73)) + 88i64);
                v29 = v11 - 1942163761 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1672) + 8i64 * (v5 & 0x53)) + 1592i64);
                goto LABEL_1038;
            case 0xFA:
                v29 = v11 - 537394750 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1704) + 1776i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1664) + 416i64);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1408);
                goto LABEL_1038;
            case 0xFB:
                v29 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 192) ^ 0x8411E584);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 176);
                v13 = __ROL4__(v29, v5 + ~FuckEnc::CacheRead<_BYTE>(v4 + 424));
                goto LABEL_1037;
            case 0xFC:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 424);
                v29 += 1023309500 * (FuckEnc::CacheRead<_DWORD>(v4 + 1080) + (FuckEnc::CacheRead<_DWORD>(v4 + 832) ^ 0x328B4F74));
                goto LABEL_1038;
            case 0xFD:
                Calls::FastCall(v4 + 552, &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1400));
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1432) - 1023309500;
                goto LABEL_1038;
            case 0xFE:
                v14 = (unsigned __int8)(112 * FuckEnc::CacheRead<_DWORD>(v4 + 1104));
                v15 = FuckEnc::CacheRead<_QWORD>(v4 + 1688);
                goto LABEL_34;
            case 0xFF:
                v13 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 112i64) + 1080i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1336) + 1072i64) + 848i64);
                goto LABEL_1037;
            case 0x100:
                v29 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1400) + 1264i64));
                v13 = __ROL4__(v29, FuckEnc::CacheRead<_BYTE>(v4 + 464) + FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1704) + 120i64));
                goto LABEL_1037;
            case 0x101:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1184) + 8i64 * (~(_BYTE)v5 & 0x32)) + 1664i64);
                v14 = (unsigned __int8)(-121 * v5);
                v15 = FuckEnc::CacheRead<_QWORD>(v10 + 1032);
                goto LABEL_34;
            case 0x102:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 976i64, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 8i64 * ((unsigned __int8)v5 & 0x96)));
                goto LABEL_1038;
            case 0x103:
                v29 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 192));
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 8i64 * ((unsigned __int8)v5 ^ 0xDFu)) + 648i64, &v29, v5, v4);
                goto LABEL_1038;
            case 0x104:
                v13 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 1784i64) + 720i64) + 1512i64) + 8i64 * (v5 & 0x5E)) + 1344i64) + 8i64 * ((unsigned __int8)v5 & 0xDF)) + 424i64);
                goto LABEL_1037;
            case 0x105:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 296i64) + 776i64);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 88) + 1344i64) + 8i64 * (unsigned __int8)(-54 * v5)) + 1408i64);
                goto LABEL_1038;
            case 0x106:
                v29 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 352) + 1816i64) ^ v11;
                v29 += (FuckEnc::CacheRead<_DWORD>(v4 + 280) | 0x19) ^ FuckEnc::CacheRead<_DWORD>(v4 + 832) & 0xFFFFFFE3;
                goto LABEL_1038;
            case 0x107:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1840) + 8i64 * (unsigned __int8)__ROR4__(v5, 25)) + 88i64);
                Calls::FastCall(v10 + 1912, &v29, v5, v4);
                goto LABEL_1038;
            case 0x108:
                v29 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1408));
                v24 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 360) + 8i64 * (v5 & 0x2A));
                goto LABEL_272;
            case 0x109:
                v29 = v11 + 1336279855 + FuckEnc::CacheRead<_DWORD>(v4 + 464);
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 504);
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1016) + 8i64 * (__ROR4__(v5, 22) & 0x6B)) + 464i64);
                goto LABEL_1038;
            case 0x10A:
                v13 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 200) + 8i64 * ((unsigned __int8)__ROR4__(v5, 6) & 0x87)) + 920i64) + 1784i64) + 1672i64) + 8i64 * (unsigned __int8)(80 * v5)) + 1128i64) + 792i64);
                goto LABEL_1037;
            case 0x10B:
                v29 = v11 - 1807785509;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 328);
                v29 = FuckEnc::CacheRead<_DWORD>(v10 + 1104) ^ (v11 - 1807785509);
                v13 = v29 + (FuckEnc::CacheRead<_DWORD>(v4 + 1104) ^ 0x8160925);
                goto LABEL_1037;
            case 0x10C:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 352) + 752i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 112);
                v13 = v29 + (FuckEnc::CacheRead<_DWORD>(v4 + 520) ^ FuckEnc::CacheRead<_DWORD>(v10 + 1176)) + 1;
                goto LABEL_1037;
            case 0x10D:
                Calls::FastCall(v4 + 1256, &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1904));
                v29 += -1962213817 - FuckEnc::CacheRead<_DWORD>(v4 + 424);
                goto LABEL_1038;
            case 0x10E:
                v24 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 528) + 8i64 * ((unsigned __int8)v5 & 0xAD)) + 1344i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 29));
                goto LABEL_272;
            case 0x10F:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 1176i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 680);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1736) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 776i64);
                goto LABEL_1038;
            case 0x110:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 416) + 592i64);
                v29 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 568) + 4i64 * ((unsigned __int8)__ROR4__(v5, 14) & 0xF8)) * ~((unsigned int)0xE086227 ^ FuckEnc::CacheRead<_DWORD>(v4 + 136)));
                goto LABEL_1038;
            case 0x111:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 88) + 1928i64) + 8i64 * ((-36 * (_BYTE)v5) & 0x79)) + 1488i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1008);
                v29 ^= ~FuckEnc::CacheRead<_DWORD>(v10 + 1408);
                goto LABEL_1038;
            case 0x112:
                Calls::FastCall(v4 + 1856, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 360) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 464) & 0xA5)));
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 520);
                goto LABEL_1038;
            case 0x113:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1512) + 8i64 * (unsigned __int8)__ROL4__(v5, 14)) + 1784i64) + 1608i64);
                Calls::FastCall(v10 + 1632, &v29, v5, v4);
                goto LABEL_1038;
            case 0x114:
                v29 = ~((FuckEnc::CacheRead<_DWORD>(v4 + 1448) ^ v11 ^ 0x6DD0FFC8) - 1109858885);
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 656) + 1776i64) - 1981619368;
                goto LABEL_1037;
            case 0x115:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 744) + 392i64);
                v29 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 136) ^ 0xC301310B) + ~FuckEnc::CacheRead<_DWORD>(v10 + 1592);
                goto LABEL_1038;
            case 0x116:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 520) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 720);
                v29 = __ROR4__(v29, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1344) + 8i64 * (__ROR4__(v5, 2) & 0x6C)) + 1504i64));
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(v4 + 136);
                goto LABEL_1037;
            case 0x117:
                v29 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 1736i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 264);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v10 + 504);
                v13 = (FuckEnc::CacheRead<_DWORD>(v4 + 1176) ^ v29) - 1023309500;
                goto LABEL_1037;
            case 0x118:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1728) + 1512i64) + 8i64 * (v5 & 0x23)) + 264i64) + 64i64);
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 496) + 4i64 * (unsigned __int8)(54 * v5));
                goto LABEL_1038;
            case 0x119:
                v29 = v5 ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 1752i64);
                Calls::FastCall(v10 + 968, &v29, v5, v4);
                goto LABEL_1038;
            case 0x11A:
                v29 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1840) + 8i64 * (((unsigned __int8)v5 ^ 8) & 0x8D)) + 752i64) ^ v11) - 1479409855;
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 8i64 * ((unsigned __int8)v5 ^ 0xEAu)) + 848i64);
                goto LABEL_1038;
            case 0x11B:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1336) + 1784i64) + 112i64) + 528i64) + 8i64 * ((unsigned __int8)v5 ^ 0xDDu)) + 744i64);
                v13 = FuckEnc::CacheRead<_DWORD>(v10 + 1160) ^ v11;
                goto LABEL_1037;
            case 0x11C:
                v29 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 1312i64) + 792i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1336) + 1128i64) + 1336i64) + 792i64));
                goto LABEL_1038;
            case 0x11D:
                v29 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1776) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 360) + 8i64 * ((-10 * (_BYTE)v5) & 0x3F)) + 496i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 28)));
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 1488);
                goto LABEL_1038;
            case 0x11E:
                v29 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 936i64)) + 1820261508;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 768);
                Calls::FastCall(v4 + 320, &v29, v5, v10);
                goto LABEL_1038;
            case 0x11F:
                v29 = v11 - 248619877;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1664) + 680i64) + 920i64);
                v29 = ~(FuckEnc::CacheRead<_DWORD>(v10 + 464) ^ (v11 - 248619877));
                goto LABEL_1038;
            case 0x120:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 744);
                v29 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 520));
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 120);
                v29 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 744) + 1264i64);
                goto LABEL_1038;
            case 0x121:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 96);
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 528) + 8i64 * ((unsigned __int8)(38 * (FuckEnc::CacheRead<_DWORD>(v4 + 1448) - 116)) & 0xBF)) + 1480i64) + 4i64 * (v5 & 0x47));
                goto LABEL_1037;
            case 0x122:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1936);
                Calls::FastCall(v10 + 312, &v29, v5, v4);
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 1448);
                goto LABEL_1038;
            case 0x123:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 416) + 496i64) + 4i64 * ((unsigned __int8)v5 ^ 0xE7u));
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1336) + 1424i64) + 1152i64) + 4i64 * ((unsigned __int8)v5 ^ 0xA4u));
                goto LABEL_1038;
            case 0x124:
                v29 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1344) + 8i64 * (unsigned __int8)__ROR4__(v5, 29)) + 120i64) ^ v11;
                v13 = v29 - (~FuckEnc::CacheRead<_DWORD>(v4 + 1832) | 4);
                goto LABEL_1037;
            case 0x125:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 800);
                v29 = ~(v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1736));
                Calls::FastCall(v4 + 1208, &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 64));
                goto LABEL_1038;
            case 0x126:
                v29 = v11 ^ 0x1CC31131;
                v29 = ~((v11 ^ 0x1CC31131) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 32) + 8i64 * (unsigned __int8)(32 * FuckEnc::CacheRead<_DWORD>(v4 + 120))) + 752i64));
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 1104);
                goto LABEL_1038;
            case 0x127:
                v29 = v5 ^ v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 776) ^ FuckEnc::CacheRead<_DWORD>(v4 + 1920);
                v29 = __ROL4__(v29 - (FuckEnc::CacheRead<_DWORD>(v4 + 1776) ^ v5), 170);
                goto LABEL_1038;
            case 0x128:
                v29 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 936));
                Calls::FastCall(v4 + 1744, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1336) + 744i64));
                goto LABEL_1038;
            case 0x129:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1400);
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1840) + 8i64 * ((unsigned __int8)__ROR4__(v5, 17) & 0xB5)) + 1016i64) + 8i64 * ((unsigned __int8)v5 & 0x9A)) + 824i64) + 4i64 * (unsigned __int8)(-49 * v5));
                goto LABEL_1038;
            case 0x12A:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1096);
                v29 = FuckEnc::CacheRead<_DWORD>(v10 + 1488) ^ v11;
                v29 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 720) + 288i64) + 8i64 * (unsigned __int8)(108 * v5)) + 192i64);
                goto LABEL_1038;
            case 0x12B:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1576) + 1096i64) + 768i64) + 1608i64);
                v13 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1576) + 120i64) << 27);
                goto LABEL_1037;
            case 0x12C:
                v29 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 64) + 168i64) + 4i64 * (v5 & 0x65)));
                Calls::FastCall(v4 + 904, &v29, v5, v4);
                goto LABEL_1038;
            case 0x12D:
                v29 = v11 ^ 0xD2088530;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1312);
                v29 = (v11 ^ 0xD2088530) + FuckEnc::CacheRead<_DWORD>(v10 + 1920);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 8i64 * (v5 & 0x2C)) + 280i64);
                goto LABEL_1038;
            case 0x12E:
                Calls::FastCall(v4 + 760, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 744) + 800i64) + 1600i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 16)) + 952i64));
                goto LABEL_1038;
            case 0x12F:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1576) + 1456i64) + 1344i64) + 8i64 * (v5 & 0x76)) + 624i64);
                v29 = v11 + 166250282 * FuckEnc::CacheRead<_DWORD>(v10 + 1776);
                goto LABEL_1038;
            case 0x130:
                v29 = __ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 1176) ^ v11, 207) - 349902799;
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 936);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1312);
                v29 += FuckEnc::CacheRead<_DWORD>(v10 + 1592);
                goto LABEL_1038;
            case 0x131:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 800);
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 936);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1816) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 984) + 96i64);
                goto LABEL_1038;
            case 0x132:
                v29 = v11 ^ 0x1B26C72F;
                v29 = v11 ^ 0x1B26C72F ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1832) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 416) + 496i64) + 4i64 * ((unsigned __int8)v5 ^ 0x62u))) & 0xFFFFFFE2;
                goto LABEL_1038;
            case 0x133:
                v29 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 1080i64) & 0xFFFFFFF9;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1280);
                v13 = v29 + ~FuckEnc::CacheRead<_DWORD>(v10 + 1176);
                goto LABEL_1037;
            case 0x134:
                v14 = (unsigned __int8)(95 * v5);
                v15 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 856) + 8i64 * ((unsigned __int8)v5 & 0xC7)) + 1376i64) + 704i64);
                goto LABEL_34;
            case 0x135:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1008) + 280i64);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 752);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 680);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1160);
                goto LABEL_1038;
            case 0x136:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1080);
                v29 -= v5 * ((FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 8i64 * (v5 & 0x5A)) + 424i64) - 1023309500) ^ 0x848A4B75);
                goto LABEL_1038;
            case 0x137:
                v29 = __ROR4__(__ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1160)), v5);
                Calls::FastCall(v4 + 976, &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 680));
                v29 += v5;
                goto LABEL_1038;
            case 0x138:
                Calls::FastCall(v4 + 928, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 352) + 328i64) + 1728i64));
                goto LABEL_1038;
            case 0x139:
                v29 = (v11 ^ 0x82C5BF7B) + 1691801945;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 328);
                v29 = __ROR4__(v29, FuckEnc::CacheRead<_BYTE>(v10 + 192) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1048) + 1504i64));
                goto LABEL_1038;
            case 0x13A:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 360) + 8i64 * ((unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1048) + 1816i64), 2) & 0xD8)) + 200i64) + 8i64 * (v5 & 0xA)) + 1400i64);
                v29 = ~(v11 + FuckEnc::CacheRead<_DWORD>(v10 + 1504));
                goto LABEL_1038;
            case 0x13B:
                v13 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 328i64) + 1672i64) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1104) & 0x3A)) + 984i64) + 416i64) + 176i64));
                goto LABEL_1037;
            case 0x13C:
                v29 = v11 - v5;
                v29 = (v11 - v5) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1760) + -FuckEnc::CacheRead<_DWORD>(v4 + 1120) - 561734606);
                goto LABEL_1038;
            case 0x13D:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1904) + 1784i64) + 1376i64);
                v29 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 1264) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1840) + 8i64 * (unsigned __int8)(96 * v5)) + 776i64);
                goto LABEL_1038;
            case 0x13E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1640);
                v29 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 168) + 4i64 * (((unsigned __int8)v5 ^ 0xDF) & 0xEA)) ^ v11;
                v13 = ~(v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1728) + 656i64) + 1504i64));
                goto LABEL_1037;
            case 0x13F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 352);
                v29 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 504) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 680) + 96i64) & 0xE2)) + 1736i64));
                goto LABEL_1038;
            case 0x140:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 1264) ^ v11;
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 440i64) + 496i64) + 4i64 * (unsigned __int8)(32 * FuckEnc::CacheRead<_DWORD>(v4 + 192)));
                goto LABEL_1037;
            case 0x141:
                v14 = (unsigned __int8)(-76 * v5);
                v15 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 768i64) + 16i64);
                goto LABEL_34;
            case 0x142:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 32) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1080) ^ 0x2Fu)) + 1096i64);
                Calls::FastCall(v4 + 1864, &v29, v5, FuckEnc::CacheRead<_QWORD>(v10 + 416));
                goto LABEL_1038;
            case 0x143:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1248);
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 360) + 8i64 * (unsigned __int8)__ROL4__(v5, 13)) + 856i64) + 8i64 * (v5 & 0x3D)) + 288i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 1)) + 176i64);
                goto LABEL_1038;
            case 0x144:
                v29 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 1080i64));
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(v4 + 192) * (FuckEnc::CacheRead<_DWORD>(v4 + 1488) ^ 0x871C7486);
                goto LABEL_1037;
            case 0x145:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 352);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1184) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v10 + 1448) & 0x74)) + 248i64, &v29, v5, v4);
                goto LABEL_1038;
            case 0x146:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1016) + 8i64 * ((-8 * FuckEnc::CacheRead<_BYTE>(v4 + 792)) & 0x24)) + 1296i64, &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 440));
                goto LABEL_1038;
            case 0x147:
                v13 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 984) + 1080i64) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1832) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 608i64)));
                goto LABEL_1037;
            case 0x148:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 800);
                v13 = v11 - (v5 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 504) | 0xA) ^ ~FuckEnc::CacheRead<_DWORD>(v10 + 1264));
                goto LABEL_1037;
            case 0x149:
                v29 = ~(v11 + FuckEnc::CacheRead<_DWORD>(v4 + 520));
                v29 = v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1376) + 504i64) - FuckEnc::CacheRead<_DWORD>(v4 + 192);
                goto LABEL_1038;
            case 0x14A:
                v29 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 624i64) + 496i64) + 4i64 * (~(_BYTE)v5 & 2)) ^ v11;
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 1832i64) & 0xFFFFFFF9;
                goto LABEL_1038;
            case 0x14B:
                Calls::FastCall(v4 + 432, &v29, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 264);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1400) + 504i64);
                goto LABEL_1038;
            case 0x14C:
                v13 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 200i64) + 8i64 * ((unsigned __int8)v5 & 0x87)) + 1336i64) + 1512i64) + 8i64 * ((unsigned __int8)v5 ^ 0x57u)) + 792i64);
                goto LABEL_1037;
            case 0x14D:
                v29 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 424));
                v13 = __ROL4__(v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 856) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 136) & 0x99)) + 360i64) + 8i64 * ((unsigned __int8)__ROL4__(v5, 23) & 0xC4)) + 1920i64), v5);
                goto LABEL_1037;
            case 0x14E:
                v29 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1080));
                v29 = (FuckEnc::CacheRead<_DWORD>(v4 + 752) ^ v29) - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 800);
                v13 = FuckEnc::CacheRead<_DWORD>(v10 + 1080) ^ v29;
                goto LABEL_1037;
            case 0x14F:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1312) + 672i64) + 8i64 * (__ROR4__(v5, 3) & 0x9C), &v29, v5, v4);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1776);
                goto LABEL_1038;
            case 0x150:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1448);
                v13 = (v29 - v5 * (FuckEnc::CacheRead<_DWORD>(v4 + 608) - 1943925940 * FuckEnc::CacheRead<_DWORD>(v4 + 504))) ^ 0x4DD0FF92;
                goto LABEL_1037;
            case 0x151:
                v29 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 1816) | 0x10);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 208i64, &v29, v5, v4);
                goto LABEL_1038;
            case 0x152:
                v29 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1376) + 280i64) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 144i64) + 952i64) + 1592i64) >> 28));
                goto LABEL_1038;
            case 0x153:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1664) + 1608i64) + 1952i64, &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 416));
                goto LABEL_1038;
            case 0x154:
                v29 = v11 ^ (((v5 * (FuckEnc::CacheRead<_DWORD>(v4 + 1816) >> 29)) | 0xE) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 792) & 0x5B)) + 608i64));
                goto LABEL_1038;
            case 0x155:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 1592) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1904);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 352) + 1080i64);
                v13 = v29 ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 192));
                goto LABEL_1037;
            case 0x156:
                v29 = v11 + 2072850680;
                v29 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 1072i64) + 1488i64) ^ (v11 + 2072850680);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 624);
                v29 = __ROR4__(v29, FuckEnc::CacheRead<_DWORD>(v10 + 792));
                goto LABEL_1038;
            case 0x157:
                Calls::FastCall(v4 + 1528, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 1608i64) + 1008i64) + 1376i64));
                goto LABEL_1038;
            case 0x158:
                v29 = v11 ^ 0x102C15D5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1608);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 328) + 904i64, &v29, v5, v4);
                goto LABEL_1038;
            case 0x159:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 448) ^ v11;
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 64) + 1280i64) + 1936i64) + 528i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 25)) + 464i64);
                goto LABEL_1038;
            case 0x15A:
                v29 = v5 ^ (v11 - 1022283324);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 120i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1576) + 1920i64);
                goto LABEL_1038;
            case 0x15B:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 1120) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 592) + 1640i64) + 1096i64);
                Calls::FastCall(v4 + 760, &v29, v5, v10);
                goto LABEL_1038;
            case 0x15C:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 984);
                v13 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 944) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 1776), 20)) + 1480i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 28)) >> 10);
                goto LABEL_1037;
            case 0x15D:
                v29 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1488) << 15);
                Calls::FastCall(v4 + 544, &v29, v5, v4);
                goto LABEL_1038;
            case 0x15E:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 8i64 * ((unsigned __int8)(-108 * v5) & 0x9C)) + 392i64);
                v13 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 32) + 8i64 * ((unsigned __int8)v5 & 0xAD)) + 1344i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 26)) + 848i64);
                goto LABEL_1037;
            case 0x15F:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 328) + 64i64) + 1600i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 12)) + 328i64);
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 568) + 4i64 * (unsigned __int8)(121 * v5)) ^ v11 ^ 0x3F704AA6;
                goto LABEL_1037;
            case 0x160:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 424);
                v25 = FuckEnc::CacheRead<_QWORD>(v4 + 1512);
                v26 = (unsigned __int8)(-120 * v5);
                goto LABEL_753;
            case 0x161:
                v29 = ~(v5 ^ v11);
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 24) + 568i64) + 4i64 * (((unsigned __int8)v5 ^ 0xFA) & 0x57));
                v13 = FuckEnc::CacheRead<_DWORD>(v4 + 1760) ^ v29;
                goto LABEL_1037;
            case 0x162:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1104);
                v13 = v29 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1816) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * (unsigned __int8)(-124 * v5)) + 1408i64));
                goto LABEL_1037;
            case 0x163:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1488);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1264);
                v13 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 720) + 264i64) + 464i64) ^ v29);
                goto LABEL_1037;
            case 0x164:
                v29 = __ROL4__(v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1760), 68);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 1840i64) + 8i64 * (v5 & 0x2F)) + 952i64);
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(v10 + 608);
                goto LABEL_1037;
            case 0x165:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 136) ^ v11;
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1344) + 8i64 * (unsigned __int8)__ROR4__(v5, 3)) + 1120i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1904);
                v13 = __ROR4__(v29, FuckEnc::CacheRead<_DWORD>(v10 + 1760));
                goto LABEL_1037;
            case 0x166:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 1120) ^ v11;
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 448i64) + 1;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 984);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1736);
                goto LABEL_1038;
            case 0x167:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 96);
                v29 += (FuckEnc::CacheRead<_DWORD>(v4 + 936) & 0xFFFFFFFE) + 1;
                v29 = ~(FuckEnc::CacheRead<_DWORD>(v4 + 1504) ^ v29);
                goto LABEL_1038;
            case 0x168:
                v29 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1072) + 776i64) ^ v11;
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(v4 + 1752) + 1832i64);
                v13 = FuckEnc::CacheRead<_DWORD>(v4 + 1432) ^ v29;
                goto LABEL_1037;
            case 0x169:
                Calls::FastCall(v4 + 1856, &v29, v5, v4);
                v29 -= 1281744336;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1072);
                v13 = __ROL4__(v29, FuckEnc::CacheRead<_DWORD>(v10 + 1776));
                goto LABEL_1037;
            case 0x16A:
                v29 = v5 ^ v11;
                v29 = v5 ^ v11 ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 464));
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 360) + 8i64 * (unsigned __int8)__ROR4__(v5, 31)) + 1264i64);
                goto LABEL_1038;
            case 0x16B:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 832);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 656) + 1048i64) + 144i64);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 168) + 4i64 * (unsigned __int8)(-109 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v10 + 1152) + 4i64 * ((unsigned __int8)(113 * v5) & 0x8A))));
                goto LABEL_1038;
            case 0x16C:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 328) + 1248i64) + 1784i64);
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 952) + 1488i64) - 618006950;
                goto LABEL_1038;
            case 0x16D:
                v29 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 464));
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * (v5 & 0x5B)) + 1432i64);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 832i64);
                goto LABEL_1038;
            case 0x16E:
                v29 = v11 + 1137475174;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1640) + 112i64) + 1400i64);
                v29 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1344) + 8i64 * (unsigned __int8)__ROR4__(v5, 5)) + 832i64) ^ (v11 + 1137475174);
                goto LABEL_1038;
            case 0x16F:
                v29 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1048) + 88i64) + 1264i64));
                Calls::FastCall(v4 + 1848, &v29, v5, v4);
                goto LABEL_1038;
            case 0x170:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 464);
                v29 += (FuckEnc::CacheRead<_DWORD>(v4 + 1832) >> 11) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 264) + 520i64) << 20);
                goto LABEL_1038;
            case 0x171:
                v29 = v11 ^ 0xD6DAE523;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 592) + 1336i64);
                Calls::FastCall(v10 + 208, &v29, v5, v4);
                goto LABEL_1038;
            case 0x172:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1456);
                Calls::FastCall(v4 + 1256, &v29, v5, v10);
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 720) + 192i64);
                goto LABEL_1038;
            case 0x173:
                Calls::FastCall(v4 + 1520, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1576) + 528i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 21)));
                goto LABEL_1038;
            case 0x174:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1576) + 1840i64) + 8i64 * (unsigned __int8)(-43 * FuckEnc::CacheRead<_DWORD>(v4 + 1120))) + 1088i64, &v29, v5, v4);
                goto LABEL_1038;
            case 0x175:
                v13 = __ROR4__(v11, ~(FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 592) + 296i64) + 568i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 3)) ^ (FuckEnc::CacheRead<_BYTE>(v4 + 1736) - 49)));
                goto LABEL_1037;
            case 0x176:
                v29 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 1448) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 688) + 8i64 * ((unsigned __int8)v5 ^ 0x93u)) + 1592i64) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 752) >> 17);
                goto LABEL_1038;
            case 0x177:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 360) + 8i64 * (v5 & 0x70)) + 312i64, &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1424));
                goto LABEL_1038;
            case 0x178:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1184) + 8i64 * (v5 & 0x30)) + 448i64);
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 1776);
                v13 = v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 1832) ^ v29;
                goto LABEL_1037;
            case 0x179:
                v29 = __ROR4__(v11, 94) - 926377474;
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * (unsigned __int8)__ROR4__(v5, 8)) + 848i64);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 96);
                goto LABEL_1038;
            case 0x17A:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 1376i64);
                v29 = v11 + (FuckEnc::CacheRead<_DWORD>(v10 + 1760) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 1224i64) + 4i64 * (v5 & 0xE)));
                goto LABEL_1038;
            case 0x17B:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1376) + 1728i64) + 1784i64);
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 1264);
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 1120) >> 13;
                goto LABEL_1038;
            case 0x17C:
                v29 = v11 ^ 0xC06A6940;
                v29 = __ROR4__(v11 ^ 0xC06A6940, v5 + FuckEnc::CacheRead<_DWORD>(v4 + 752) + 74);
                v13 = v29 - 1841512787 * FuckEnc::CacheRead<_DWORD>(v4 + 1488);
                goto LABEL_1037;
            case 0x17D:
                v29 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1776) + 1213956950);
                v29 = __ROR4__(v29, FuckEnc::CacheRead<_BYTE>(v4 + 1176) ^ (-70 - FuckEnc::CacheRead<_BYTE>(v4 + 1504)));
                goto LABEL_1038;
            case 0x17E:
                v29 = __ROR4__(v11, v5);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 720) + 1008i64);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1736);
                v29 ^= -455999679 * FuckEnc::CacheRead<_DWORD>(v4 + 1488);
                goto LABEL_1038;
            case 0x17F:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1016) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1016) + 8i64 * (unsigned __int8)(118 * FuckEnc::CacheRead<_BYTE>(v4 + 1176))) + 1016i64) + 8i64 * (((unsigned __int8)v5 ^ 0xEB) & 0xB6)) + 832i64) ^ 0x19u)) + 608i64);
                goto LABEL_1038;
            case 0x180:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 832) ^ v11;
                v29 = __ROL4__(v29, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 856) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 96) & 0x3A)) + 1776i64));
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(v4 + 1776) - 1472401713;
                goto LABEL_1037;
            case 0x181:
                v29 = __ROR4__(v11, v5);
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 1160);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 440);
                v29 += FuckEnc::CacheRead<_DWORD>(v10 + 1504);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 192);
                goto LABEL_1038;
            case 0x182:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 744i64);
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1504);
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 120);
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 1504) + 1;
                goto LABEL_1038;
            case 0x183:
                v29 = v11 + 1 + FuckEnc::CacheRead<_DWORD>(v4 + 448);
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 1104);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1936);
                v13 = v29 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1880) + 4i64 * (unsigned __int8)__ROR4__(v5, 26));
                goto LABEL_1037;
            case 0x184:
                v29 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 936));
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 464i64) & 0xFFFFFFED;
                v13 = v29 - FuckEnc::CacheRead<unsigned __int8>(v4 + 1595);
                goto LABEL_1037;
            case 0x185:
                v29 = v11 ^ ~(FuckEnc::CacheRead<_DWORD>(v4 + 1432) ^ 0x6ED0FF38);
                v29 = __ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1344) + 8i64 * (unsigned __int8)v5) + 1432i64) ^ v29, 16);
                goto LABEL_1038;
            case 0x186:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1448);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 392);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 824) + 4i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1248) + 64i64) + 1920i64) ^ 0xA9) & 0xDE));
                goto LABEL_1038;
            case 0x187:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1456);
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1120) + FuckEnc::CacheRead<_DWORD>(v10 + 1736) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 264) + 832i64);
                goto LABEL_1038;
            case 0x188:
                v29 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 176));
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 744) + 536i64, &v29, v5, v4);
                goto LABEL_1038;
            case 0x189:
                v29 = v11 + 771800729;
                v29 = v11 + 771800729 - FuckEnc::CacheRead<_DWORD>(v4 + 96);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1640) + 1160i64);
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(v4 + 1760);
                goto LABEL_1037;
            case 0x18A:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 592) + 1952i64, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 528) + 8i64 * ((unsigned __int8)v5 ^ 0x40u)));
                goto LABEL_1038;
            case 0x18B:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 624i64);
                v13 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1400) + 1728i64) + 656i64) + 1880i64) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v10 + 464), 26));
                goto LABEL_1037;
            case 0x18C:
                v29 = v11 + 2050426427;
                v29 = v11 + 2050426427 - (FuckEnc::CacheRead<_DWORD>(v4 + 1448) ^ 0xCFDF5156);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1128);
                v29 += FuckEnc::CacheRead<_DWORD>(v10 + 136);
                goto LABEL_1038;
            case 0x18D:
                v24 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1840) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1904) + 1832i64), 15));
            LABEL_272:
                Calls::FastCall(v24 + 1632, &v29, v5, v4);
                goto LABEL_1038;
            case 0x18E:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 1920i64);
                Calls::FastCall(v4 + 904, &v29, v5, v4);
                goto LABEL_1038;
            case 0x18F:
                v29 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 120i64) ^ ~(707519584 * FuckEnc::CacheRead<_DWORD>(v4 + 1176));
                goto LABEL_1038;
            case 0x190:
                Calls::FastCall(v4 + 1232, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 32) + 8i64 * ((unsigned __int8)v5 & 0xEC)) + 1576i64) + 1640i64));
                goto LABEL_1038;
            case 0x191:
                v29 = v11 + v5;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 640i64, &v29, v5, v4);
                v29 += v5;
                goto LABEL_1038;
            case 0x192:
                v29 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 776) ^ 0xC91136F2);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1336) + 552i64, &v29, v5, v4);
                goto LABEL_1038;
            case 0x193:
                v13 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 1752i64) + 1928i64) + 8i64 * (unsigned __int8)(-62 * v5)) + 1280i64) + 1928i64) + 8i64 * ((unsigned __int8)(118 * v5) & 0x8E)) + 136i64);
                goto LABEL_1037;
            case 0x194:
                v29 = v11 ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 1264));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 680) + 1280i64);
                v13 = v29 ^ FuckEnc::CacheRead<_DWORD>(v10 + 280) ^ FuckEnc::CacheRead<_DWORD>(v4 + 1832);
                goto LABEL_1037;
            case 0x195:
                v29 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 936));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 592);
                v29 -= FuckEnc::CacheRead<_DWORD>(v10 + 1504);
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 392) + 1608i64) + 1504i64);
                goto LABEL_1037;
            case 0x196:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 120);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 24);
                v29 = __ROR4__(v29, ~FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1344) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 464) & 7)) + 504i64));
                goto LABEL_1038;
            case 0x197:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 448);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 24) + 1272i64) + 8i64 * ((unsigned __int8)v5 ^ 0x2Eu)) + 920i64);
                v13 = v29 + (FuckEnc::CacheRead<_DWORD>(v10 + 1120) << 25);
                goto LABEL_1037;
            case 0x198:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1664);
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 1736);
                v29 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1224) + 4i64 * (unsigned __int8)(-64 * FuckEnc::CacheRead<_BYTE>(v4 + 1832))) ^ v29) - v5;
                goto LABEL_1038;
            case 0x199:
                v29 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 680) + 1152i64) + 4i64 * ((unsigned __int8)(-8 * v5) & 0xDF)) ^ v11;
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 568i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 28)) ^ v29;
                goto LABEL_1037;
            case 0x19A:
                v29 = v5 ^ (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 136));
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1672) + 8i64 * (v5 & 0xD)) + 176i64);
                goto LABEL_1038;
            case 0x19B:
                v29 = __ROL4__(v11, v5);
                v29 = __ROL4__(v29, ~(FuckEnc::CacheRead<_BYTE>(v4 + 776) ^ 0x33));
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 192) + v29 - 1128555106;
                goto LABEL_1038;
            case 0x19C:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 744) + 1832i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 1816) ^ v5) - 712009942;
                goto LABEL_1038;
            case 0x19D:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 472i64);
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 776);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 848i64);
                goto LABEL_1038;
            case 0x19E:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1664) + 656i64);
                v14 = (unsigned __int8)(-68 * v5);
                v15 = FuckEnc::CacheRead<_QWORD>(v10 + 672);
                goto LABEL_34;
            case 0x19F:
                v29 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 264) + 616i64) + 8i64 * (unsigned __int8)v5) + 1936i64) + 464i64) ^ 0x1760E642) & 0xFFFFFFE7;
                goto LABEL_1038;
            case 0x1A0:
                Calls::FastCall(v4 + 1088, &v29, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1704) + 1072i64);
                v29 -= FuckEnc::CacheRead<_DWORD>(v10 + 1776);
                goto LABEL_1038;
            case 0x1A1:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 88);
                v29 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 424) | 0x18);
                v29 = __ROR4__(v29, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1512) + 8i64 * ((unsigned __int8)v5 & 0xF8)) + 88i64) + 1920i64));
                goto LABEL_1038;
            case 0x1A2:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 416) + 288i64) + 8i64 * (v5 & 0x39)) + 800i64) + 1256i64, &v29, v5, v4);
                goto LABEL_1038;
            case 0x1A3:
                v29 = v11 + 209907575;
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 1488) ^ (v11 + 209907575);
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 936) ^ v5;
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 752);
                goto LABEL_1038;
            case 0x1A4:
                v29 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 528) + 8i64 * (((unsigned __int8)v5 ^ 0xFB) & 0xC4)) + 608i64) ^ v11;
                v13 = v29 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1704) + 1160i64) | 0xD);
                goto LABEL_1037;
            case 0x1A5:
                v29 = v5 ^ __ROL4__(v11, 141);
                v29 = __ROL4__(v29, FuckEnc::CacheRead<_DWORD>(v4 + 1448));
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 744) + 1760i64) ^ 0x95FFCE2B;
                goto LABEL_1038;
            case 0x1A6:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 1592) ^ v11;
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1576) + 192i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1336);
                v29 += ~FuckEnc::CacheRead<_DWORD>(v10 + 1504);
                goto LABEL_1038;
            case 0x1A7:
                v29 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 424) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1400) + 496i64) + 4i64 * (unsigned __int8)(-94 * FuckEnc::CacheRead<_BYTE>(v4 + 96))));
                goto LABEL_1038;
            case 0x1A8:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 856) + 8i64 * ((41 * FuckEnc::CacheRead<_BYTE>(v4 + 1080)) & 0x78)) + 1176i64);
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(v4 + 464) * (FuckEnc::CacheRead<_DWORD>(v4 + 1080) ^ 0x87EFF1F9);
                goto LABEL_1037;
            case 0x1A9:
                v29 = __ROL4__(v11 - FuckEnc::CacheRead<_DWORD>(v4 + 832) - 1023309500, v5);
                v13 = ~__ROL4__(v29, (FuckEnc::CacheRead<_BYTE>(v4 + 1120) + 54) ^ 0xFC);
                goto LABEL_1037;
            case 0x1AA:
                v13 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 1264) ^ (v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 8i64 * ((-14 * (_BYTE)v5) & 0x70)) + 504i64))) - FuckEnc::CacheRead<_DWORD>(v4 + 96);
                goto LABEL_1037;
            case 0x1AB:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 64);
                v29 = v11 + ~FuckEnc::CacheRead<_DWORD>(v10 + 752);
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 88) + 1224i64) + 4i64 * ((unsigned __int8)(-8 * v5) & 0xE4));
                goto LABEL_1038;
            case 0x1AC:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 592);
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 1488);
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1224) + 4i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1920) ^ 0x2Cu));
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1776);
                goto LABEL_1038;
            case 0x1AD:
                v29 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 1456i64) + 1936i64) + 1120i64) ^ (32 * FuckEnc::CacheRead<_DWORD>(v4 + 1080));
                goto LABEL_1038;
            case 0x1AE:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1776);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 592);
                v13 = v29 - 1855151417 * (FuckEnc::CacheRead<_DWORD>(v4 + 1592) ^ 0xC4D6925C) - FuckEnc::CacheRead<_DWORD>(v10 + 1160);
                goto LABEL_1037;
            case 0x1AF:
                Calls::FastCall(v4 + 1536, &v29, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 592i64);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1432);
                goto LABEL_1038;
            case 0x1B0:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 8i64 * ((unsigned __int8)v5 ^ 0xABu)) + 1704i64);
                v13 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 288) + 8i64 * (unsigned __int8)(108 * FuckEnc::CacheRead<_BYTE>(v4 + 280))) + 1880i64) + 4i64 * (v5 & 0x21));
                goto LABEL_1037;
            case 0x1B1:
                Calls::FastCall(v4 + 1256, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 592) + 1600i64) + 8i64 * (((unsigned __int8)v5 ^ 0xD7) & 0xAE)));
                goto LABEL_1038;
            case 0x1B2:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 392);
                Calls::FastCall(v10 + 648, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1664) + 1784i64));
                goto LABEL_1038;
            case 0x1B3:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 1120i64);
                v29 += 205072503 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1704) + 424i64) + 1);
                goto LABEL_1038;
            case 0x1B4:
                v29 = ~(_DWORD)v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 8i64 * (unsigned __int8)__ROL4__(~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1904) + 1264i64), 7)) + 1640i64);
                v13 = ~(_DWORD)v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1120);
                goto LABEL_1037;
            case 0x1B5:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 120);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 792);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1640);
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1008) + 1080i64);
                goto LABEL_1037;
            case 0x1B6:
                v29 = v11 - 1592738775;
                v29 = v11 - 1592738775 + (FuckEnc::CacheRead<_DWORD>(v4 + 520) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 32) + 8i64 * ((2 * (unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 752)) & 5)) + 1312i64) + 1504i64));
                goto LABEL_1038;
            case 0x1B7:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 392) + 112i64) + 1504i64);
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1840) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 448) & 0xCD)) + 448i64) ^ v29;
                goto LABEL_1037;
            case 0x1B8:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1408);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 1536i64, &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1728));
                goto LABEL_1038;
            case 0x1B9:
                v29 = __ROL4__(v11, 77);
                Calls::FastCall(v4 + 1088, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 856) + 8i64 * (v5 & 0x68)));
                goto LABEL_1038;
            case 0x1BA:
                v29 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1152) + 4i64 * (unsigned __int8)(FuckEnc::CacheRead<_BYTE>(v4 + 176) - 92)));
                Calls::FastCall(v4 + 1888, &v29, v5, v4);
                goto LABEL_1038;
            case 0x1BB:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 1096i64) + 1736i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * (unsigned __int8)__ROL4__(v5, 12)) + 1736i64);
                goto LABEL_1038;
            case 0x1BC:
                v29 = (v11 - 1023309500) ^ 0xD1FF4179;
                v13 = v29 + ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1344) + 8i64 * (__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 1760), 7) & 0x77)) + 424i64) & 0xFFFFFFE5);
                goto LABEL_1037;
            case 0x1BD:
                v29 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1048) + 1176i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 592) + 680i64) + 144i64) + 1480i64) + 4i64 * (__ROL4__(v5, 12) & 0x3A));
                goto LABEL_1038;
            case 0x1BE:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 1432) ^ v11 ^ 0x880ADD22;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1704) + 352i64);
                Calls::FastCall(v4 + 320, &v29, v5, v10);
                goto LABEL_1038;
            case 0x1BF:
                v29 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 1736) & 0xFFFFFFF1);
                v13 = __ROR4__(v29, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1512) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 752i64), 17)) + 1920i64));
                goto LABEL_1037;
            case 0x1C0:
                v29 = v11 ^ (-332467043 * FuckEnc::CacheRead<_DWORD>(v4 + 192) * FuckEnc::CacheRead<_DWORD>(v4 + 464));
                v13 = v29 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1760) | 9);
                goto LABEL_1037;
            case 0x1C1:
                v29 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * (((unsigned __int8)v5 ^ 9) & 0x5B)) + 1280i64) + 1552i64) + 4i64 * ((unsigned __int8)__ROR4__(v5, 22) & 0xB6));
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 448);
                goto LABEL_1038;
            case 0x1C2:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 920) + 24i64) + 280i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 1160) ^ (-1619599215 * FuckEnc::CacheRead<_DWORD>(v4 + 1920)));
                goto LABEL_1038;
            case 0x1C3:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 264) + 1144i64) + 8i64 * ((unsigned __int8)v5 & 0xE9), &v29, v5, v4);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1816);
                goto LABEL_1038;
            case 0x1C4:
                Calls::FastCall(v4 + 1632, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 328i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 144);
                v29 += FuckEnc::CacheRead<_DWORD>(v10 + 1104);
                goto LABEL_1038;
            case 0x1C5:
                v13 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 280) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1840) + 8i64 * (unsigned __int8)(11 * FuckEnc::CacheRead<_BYTE>(v4 + 1760))) + 1104i64) ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 848)));
                goto LABEL_1037;
            case 0x1C6:
                v29 = v11 ^ (-2130325249 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1904) + 1672i64) + 8i64 * (unsigned __int8)(-75 * v5)) + 856i64) + 8i64 * (unsigned __int8)(17 * v5)) + 1920i64));
                goto LABEL_1038;
            case 0x1C7:
                v14 = (unsigned __int8)v5 ^ 0xC1u;
                v15 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 1248i64) + 1000i64);
                goto LABEL_34;
            case 0x1C8:
                v29 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 280);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1512) + 8i64 * (unsigned __int8)(-101 * v5)) + 1120i64) ^ 0x4AFA6CCC;
                goto LABEL_1038;
            case 0x1C9:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 848) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1640);
                v29 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 32) + 8i64 * ((unsigned __int8)v5 ^ 0xFAu)) + 776i64) + v29 + 1);
                goto LABEL_1038;
            case 0x1CA:
                v15 = FuckEnc::CacheRead<_QWORD>(v4 + 1800);
                v14 = ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 752) & 0x30;
                goto LABEL_34;
            case 0x1CB:
                v29 = v11 + 881059236;
                v14 = (unsigned __int8)v5 & 0xE2;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1640);
                v15 = FuckEnc::CacheRead<_QWORD>(v10 + 376);
                goto LABEL_34;
            case 0x1CC:
                Calls::FastCall(v4 + 1584, &v29, v5, v4);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 752i64);
                goto LABEL_1038;
            case 0x1CD:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 680) + 1752i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 720) + 1520i64, &v29, v5, v10);
                goto LABEL_1038;
            case 0x1CE:
                v29 = v11 ^ 0xC30131F5;
                v29 = v11 ^ 0xC30131F5 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 520) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 984) + 1176i64) - 409550190);
                goto LABEL_1038;
            case 0x1CF:
                v29 = v11 + 1522541063;
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 608) ^ (v11 + 1522541063);
                v29 ^= v5 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 1152i64) + 4i64 * (((unsigned __int8)v5 ^ 0x21) & 0xE5));
                goto LABEL_1038;
            case 0x1D0:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1488);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 64);
                v13 = v29 + FuckEnc::CacheRead<_DWORD>(v4 + 1920) * (FuckEnc::CacheRead<_DWORD>(v10 + 1104) + FuckEnc::CacheRead<_DWORD>(v4 + 1432));
                goto LABEL_1037;
            case 0x1D1:
                v29 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * (((unsigned __int8)v5 ^ 4) & 0xF)) + 1432i64));
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 8i64 * (unsigned __int8)(79 * v5)) + 1832i64);
                goto LABEL_1037;
            case 0x1D2:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 88) + 1664i64) + 1704i64) + 1152i64) + 4i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1248) + 1760i64) ^ 0xEu));
                goto LABEL_1038;
            case 0x1D3:
                v29 = ~(v11 ^ 0x4481BD53);
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(v4 + 1184) + 568i64) + 4i64 * ((unsigned __int8)v5 & 0x89)) ^ v29;
                goto LABEL_1037;
            case 0x1D4:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1248);
                v15 = FuckEnc::CacheRead<_QWORD>(v4 + 1032);
                v16 = v10;
                v14 = (unsigned __int8)(-89 * FuckEnc::CacheRead<_BYTE>(v4 + 280)) & 0xEA;
                goto LABEL_35;
            case 0x1D5:
                v29 = __ROR4__(v11, 3);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1248);
                Calls::FastCall(v10 + 1296, &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1424));
                goto LABEL_1038;
            case 0x1D6:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 592) + 592i64) + 1128i64) + 472i64) + 328i64);
                v13 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1376) + 1120i64));
                goto LABEL_1037;
            case 0x1D7:
                Calls::FastCall(v4 + 224, &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 328));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1280);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1816);
                goto LABEL_1038;
            case 0x1D8:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 176);
                v13 = v29 + (FuckEnc::CacheRead<_DWORD>(v4 + 1080) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1504) * (FuckEnc::CacheRead<_DWORD>(v4 + 136) & 0xFFFFFFF9)));
                goto LABEL_1037;
            case 0x1D9:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1280);
                v29 = __ROR4__(v11 ^ (v5 + FuckEnc::CacheRead<_DWORD>(v10 + 1920)), 57);
                v29 = __ROL4__(v29, ~(v5 + FuckEnc::CacheRead<_DWORD>(v4 + 752)));
                goto LABEL_1038;
            case 0x1DA:
                v13 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 1672i64) + 8i64 * (v5 & 0x2B)) + 896i64) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 136) + 1880045667, 6));
                goto LABEL_1037;
            case 0x1DB:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1104);
                v29 += ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1312) + 136i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 680) + 1816i64));
                goto LABEL_1038;
            case 0x1DC:
                v29 = v11 + 419414870;
                v29 = ~__ROL4__(v11 + 419414870, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * (unsigned __int8)(56 * v5)) + 1096i64) + 1552i64) + 4i64 * (unsigned __int8)(-19 * v5)));
                goto LABEL_1038;
            case 0x1DD:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 608) ^ v11;
                Calls::FastCall(v4 + 1208, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 32) + 8i64 * (((unsigned __int8)v5 ^ (unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 752)) & 0x77)));
                goto LABEL_1038;
            case 0x1DE:
                v15 = FuckEnc::CacheRead<_QWORD>(v4 + 376);
                v14 = __ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 424i64), 9) & 0xDB;
                goto LABEL_34;
            case 0x1DF:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1840) + 8i64 * ((unsigned __int8)v5 ^ 0xE8u)) + 752i64);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1760) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 120i64);
                goto LABEL_1038;
            case 0x1E0:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 688) + 8i64 * (unsigned __int8)(88 * FuckEnc::CacheRead<_DWORD>(v4 + 1816))) + 1904i64);
                Calls::FastCall(v4 + 1256, &v29, v5, v10);
                goto LABEL_1038;
            case 0x1E1:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 176) ^ v11;
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 120) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1336) + 200i64) + 8i64 * ((unsigned __int8)v5 ^ 0xB5u)) + 832i64);
                goto LABEL_1038;
            case 0x1E2:
                v29 = (unsigned int)0x4C31131 + v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1904) + 176i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1008) + 440i64);
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1048) + 424i64);
                goto LABEL_1038;
            case 0x1E3:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1336);
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1832);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 832) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1248) + 280i64);
                goto LABEL_1038;
            case 0x1E4:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1264) + v5;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1344) + 8i64 * ((unsigned __int8)~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1408) & 0xCD)) + 112i64);
                v29 += FuckEnc::CacheRead<_DWORD>(v10 + 280);
                goto LABEL_1038;
            case 0x1E5:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 424);
                v29 = v5 ^ (v29 + FuckEnc::CacheRead<_DWORD>(v4 + 1920));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1008);
                v13 = v29 + ~FuckEnc::CacheRead<_DWORD>(v10 + 280);
                goto LABEL_1037;
            case 0x1E6:
                v29 = ~(_DWORD)v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 472i64);
                v29 = ~(_DWORD)v11 + FuckEnc::CacheRead<_DWORD>(v4 + 464) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 352) + 792i64);
                goto LABEL_1038;
            case 0x1E7:
                v29 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1920));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 264);
                v13 = __ROR4__(v29, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 616) + 8i64 * ((unsigned __int8)(-28 * FuckEnc::CacheRead<_BYTE>(v4 + 1832)) & 0x8B)) + 1504i64));
                goto LABEL_1037;
            case 0x1E8:
                v29 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 120);
                v29 = v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 520i64) - FuckEnc::CacheRead<_DWORD>(v4 + 280);
                goto LABEL_1038;
            case 0x1E9:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1920);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 24) + 1080i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1904);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1408);
                goto LABEL_1038;
            case 0x1EA:
                v29 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 776) ^ 0xFAD1FF41);
                v29 += (unsigned int)(FuckEnc::CacheRead<_DWORD>(v4 + 280) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1336) + 608i64)) >> 4;
                goto LABEL_1038;
            case 0x1EB:
                v29 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 88) + 136i64) ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 424) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1640) + 1592i64));
                goto LABEL_1038;
            case 0x1EC:
                v13 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 1176) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1840) + 8i64 * (unsigned __int8)__ROR4__(v5, 4)) + 1592i64) ^ (-27 * FuckEnc::CacheRead<_BYTE>(v4 + 136)));
                goto LABEL_1037;
            case 0x1ED:
                Calls::FastCall(v4 + 928, &v29, v5, v4);
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 176);
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 1448);
                goto LABEL_1038;
            case 0x1EE:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 520) ^ v11;
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 1080);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1760);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 352) + 1080i64);
                goto LABEL_1038;
            case 0x1EF:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1008);
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 96);
                v29 ^= -1023309500 * FuckEnc::CacheRead<_DWORD>(v4 + 1176);
                v29 = __ROR4__(v29, FuckEnc::CacheRead<_DWORD>(v4 + 1160));
                goto LABEL_1038;
            case 0x1F0:
                v13 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 856) + 8i64 * ((unsigned __int8)__ROL4__(v5, 8) & 0xCB)) + 792i64) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1512) + 8i64 * (unsigned __int8)__ROL4__(v5, 21)) + 1760i64));
                goto LABEL_1037;
            case 0x1F1:
                v29 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1048) + 1488i64) ^ v11;
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 1080);
                v13 = v29 ^ (1055432706 * FuckEnc::CacheRead<_DWORD>(v4 + 936) + 1476730762);
                goto LABEL_1037;
            case 0x1F2:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1016) + 8i64 * (((unsigned __int8)v5 ^ 0xDF) & 0x62)) + 264i64) + 1752i64) + 984i64) + 1008i64) + 984i64);
                v13 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1816);
                goto LABEL_1037;
            case 0x1F3:
                v29 = ~(_DWORD)v11;
                Calls::FastCall(v4 + 1744, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 528) + 8i64 * (__ROR4__(v5, 3) & 0x1F)) + 296i64));
                goto LABEL_1038;
            case 0x1F4:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 472i64) + 744i64);
                v13 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1376) + 1272i64) + 1592i64));
                goto LABEL_1037;
            case 0x1F5:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 1752i64);
                v29 = v11 ^ (v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 592) + 1272i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 21)) + 1176i64));
                goto LABEL_1038;
            case 0x1F6:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 520) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1048) + 968i64, &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1008));
                goto LABEL_1038;
            case 0x1F7:
                v29 = v11 + 1023309500 + FuckEnc::CacheRead<_DWORD>(v4 + 936);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1672) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 1408), 15)) + 1008i64);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 680) + 520i64);
                goto LABEL_1038;
            case 0x1F8:
                v13 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 176) ^ FuckEnc::CacheRead<_DWORD>(v4 + 504) ^ FuckEnc::CacheRead<_DWORD>(v4 + 1760) ^ 0x33B2D0FF);
                goto LABEL_1037;
            case 0x1F9:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 1008i64) + 952i64) + 624i64);
                Calls::FastCall(v4 + 760, &v29, v5, v10);
                goto LABEL_1038;
            case 0x1FA:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1760);
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1016) + 8i64 * (unsigned __int8)(-46 * FuckEnc::CacheRead<_BYTE>(v4 + 280))) + 1552i64) + 4i64 * (((unsigned __int8)v5 ^ 1) & 0x21));
                goto LABEL_1037;
            case 0x1FB:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 264) + 880i64, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 592) + 1664i64));
                goto LABEL_1038;
            case 0x1FC:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 88) + 1128i64) + 592i64);
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 856) + 8i64 * (v5 & 0x58)) + 800i64) + 776i64);
                goto LABEL_1038;
            case 0x1FD:
                v29 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 752));
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 504), 23)) + 744i64) + 1488i64);
                goto LABEL_1038;
            case 0x1FE:
                v29 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 608i64) ^ v11 ^ 0xD1FF4184;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 200) + 8i64 * (unsigned __int8)(71 * v5)) + 1072i64);
                v13 = __ROR4__(v29, FuckEnc::CacheRead<_DWORD>(v10 + 1920));
                goto LABEL_1037;
            case 0x1FF:
                v13 = v11 - (v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 936) ^ FuckEnc::CacheRead<_DWORD>(v4 + 1816) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1904) + 448i64) - 1131462239));
                goto LABEL_1037;
            case 0x200:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 752) + 1022283434;
                v29 = __ROL4__(v29, ~FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 360i64) + 8i64 * (v5 & 0x68)) + 1920i64));
                goto LABEL_1038;
            case 0x201:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 752) ^ v11;
                v29 = (v29 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 920) + 528i64) + 8i64 * ((unsigned __int8)(-89 * v5) & 0xF1)) + 1448i64) * v5) ^ 0x3878DE25;
                goto LABEL_1038;
            case 0x202:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 776) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1248);
                v29 = __ROL4__(v29, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 824) + 4i64 * ((unsigned __int8)__ROL4__(v5, 8) & 0xBD)));
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(v4 + 1160);
                goto LABEL_1037;
            case 0x203:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1728) + 1312i64) + 424i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 112);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1480) + 4i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v10 + 1504), 26));
                goto LABEL_1038;
            case 0x204:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 688i64) + 8i64 * ((unsigned __int8)__ROR4__(v5, 10) & 0xC7)) + 344i64) + 8i64 * ((unsigned __int8)v5 & 0x9A), &v29, v5, v4);
                goto LABEL_1038;
            case 0x205:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 200) + 8i64 * (unsigned __int8)(-9 * v5)) + 1664i64);
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1224) + 4i64 * ((unsigned __int8)v5 ^ 0x2Fu)) * (FuckEnc::CacheRead<_DWORD>(v4 + 1488) - 305983183);
                goto LABEL_1038;
            case 0x206:
                v29 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 792) << 14);
                Calls::FastCall(v4 + 104, &v29, v5, v4);
                v29 = ~v29;
                goto LABEL_1038;
            case 0x207:
                v29 = v11 + v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1096);
                v13 = ((v11 + v5) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1184) + 8i64 * ((unsigned __int8)v5 & 0xEA)) + 504i64) & 0xFFFFFFEA) + 1869502339;
                goto LABEL_1037;
            case 0x208:
                v29 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 176));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1640) + 352i64);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1816);
                v13 = __ROR4__(v29, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 608i64));
                goto LABEL_1037;
            case 0x209:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 768);
                v15 = FuckEnc::CacheRead<_QWORD>(v4 + 488);
                v16 = FuckEnc::CacheRead<_QWORD>(v4 + 144);
                v14 = FuckEnc::CacheRead<_DWORD>(v10 + 1120) & 0x5D;
                goto LABEL_35;
            case 0x20A:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1904);
                v29 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1488) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 328) + 464i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 1176) | 0xC));
                goto LABEL_1038;
            case 0x20B:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 920) + 200i64) + 8i64 * (v5 & 0x25)) + 64i64) + 32i64) + 8i64 * (unsigned __int8)(-63 * v5)) + 1312i64);
                v13 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1504);
                goto LABEL_1037;
            case 0x20C:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 680) + 1576i64);
                v29 = __ROL4__(v11, -92 * (FuckEnc::CacheRead<_DWORD>(v10 + 1448) >> 25));
                v13 = FuckEnc::CacheRead<_DWORD>(v4 + 1776) ^ v29;
                goto LABEL_1037;
            case 0x20D:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1104);
                v29 ^= v5 + FuckEnc::CacheRead<_DWORD>(v4 + 280);
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 776) + 1;
                goto LABEL_1038;
            case 0x20E:
                v29 = (v11 + 941897075) ^ 0xCB4F97D3;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1728);
                v29 = v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1600) + 8i64 * (v5 & 0x18)) + 1736i64) - 1253005887;
                goto LABEL_1038;
            case 0x20F:
                v29 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 280) ^ 0x6385D0FF);
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1376) + 1808i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 28)) << 14;
                goto LABEL_1038;
            case 0x210:
                v29 = v11 ^ 0x42C30131;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 1904i64);
                Calls::FastCall(v4 + 1256, &v29, v5, v10);
                goto LABEL_1038;
            case 0x211:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1704) + 136i64);
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1672) + 8i64 * (unsigned __int8)__ROL4__(v5, 5)) + 168i64) + 4i64 * (unsigned __int8)(83 * v5));
                goto LABEL_1037;
            case 0x212:
                v29 = v11 + ((v5 + FuckEnc::CacheRead<_DWORD>(v4 + 1448) + 1041325694) >> 29);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 32) + 8i64 * (((unsigned __int8)v5 ^ 0xFE) & 0xBF)) + 192i64);
                goto LABEL_1038;
            case 0x213:
                v29 = (v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 504) ^ 0xC311314D)) ^ 0xEAF42F00;
                v13 = __ROR4__(v29, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 264) + 1248i64) + 176i64));
                goto LABEL_1037;
            case 0x214:
                v29 = v11 - 1023309500;
                v29 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 8i64 * (unsigned __int8)(19 * v5)) + 1920i64) ^ (v11 - 1023309500));
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 464);
                goto LABEL_1038;
            case 0x215:
                Calls::FastCall(v4 + 1560, &v29, v5, v4);
                v29 = ~v29;
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 1832) ^ 0x5877B62F;
                goto LABEL_1038;
            case 0x216:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1312);
                v29 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 504) ^ (~FuckEnc::CacheRead<_DWORD>(v10 + 936) << 27));
                goto LABEL_1038;
            case 0x217:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1840) + 8i64 * ((unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 752), 4) & 0x92)) + 608i64);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 608i64) * v5;
                goto LABEL_1038;
            case 0x218:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1048);
                v29 = v11 + ~(FuckEnc::CacheRead<_DWORD>(v4 + 1776) ^ v5) + (FuckEnc::CacheRead<_DWORD>(v10 + 1264) ^ 0xAEE9D0FF);
                goto LABEL_1038;
            case 0x219:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1120);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1704);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1152) + 4i64 * ((unsigned __int8)v5 ^ 0xCEu)) + 8 * FuckEnc::CacheRead<_DWORD>(v4 + 120);
                goto LABEL_1038;
            case 0x21A:
                v29 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1264));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 472);
                v29 = (FuckEnc::CacheRead<_DWORD>(v10 + 424) ^ v29) + 997111964;
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 744) + 848i64);
                goto LABEL_1038;
            case 0x21B:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 192) ^ v11;
                v13 = ~(v29 - (FuckEnc::CacheRead<_DWORD>(v4 + 520) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1672) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 936), 21)) + 1432i64)));
                goto LABEL_1037;
            case 0x21C:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 280);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1048) + 544i64, &v29, v5, v4);
                goto LABEL_1038;
            case 0x21D:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 744) + 264i64);
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 176);
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 848) + 365101362;
                goto LABEL_1038;
            case 0x21E:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1080);
                v13 = v29 + (FuckEnc::CacheRead<_DWORD>(v4 + 1160) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 352) + 1152i64) + 4i64 * ((unsigned __int8)v5 & 0xFB)) ^ 0xC3018944);
                goto LABEL_1037;
            case 0x21F:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 984) + 1928i64) + 8i64 * (~(_BYTE)v5 & 0x48)) + 768i64) + 720i64);
                Calls::FastCall(v4 + 208, &v29, v5, v10);
                goto LABEL_1038;
            case 0x220:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 1432) ^ v11;
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 776);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 688i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 30)) + 192i64);
                goto LABEL_1038;
            case 0x221:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1184) + 8i64 * (v5 & 8)) + 192i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1752);
                v29 += ~(-437993018 * FuckEnc::CacheRead<_DWORD>(v10 + 1176));
                goto LABEL_1038;
            case 0x222:
                v29 = ~(unsigned int)((unsigned int)0xA37FBE3 + v11);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 440);
                v29 -= FuckEnc::CacheRead<_DWORD>(v10 + 832);
                v13 = v29 + ~FuckEnc::CacheRead<_DWORD>(v4 + 1104);
                goto LABEL_1037;
            case 0x223:
                v10 = FuckEnc::CacheRead<_QWORD>(v4);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4) + 1304i64, &v29, v5, v4);
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 424) ^ 0x8C445216;
                goto LABEL_1038;
            case 0x224:
                v13 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 1248i64) + 440i64) + 1376i64) + 680i64) + 296i64) + 96i64);
                goto LABEL_1037;
            case 0x225:
                v29 = v11 ^ 0xF02ADEC9;
                Calls::FastCall(v4 + 760, &v29, v5, v4);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 464i64);
                goto LABEL_1038;
            case 0x226:
                v29 = __ROR4__(v11, 68);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1336);
                Calls::FastCall(v10 + 1536, &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 24));
                goto LABEL_1038;
            case 0x227:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 592) + 1128i64) + 1104i64) + 2120391676;
                v13 = v29 ^ (-1596442340 * FuckEnc::CacheRead<_DWORD>(v4 + 1176));
                goto LABEL_1037;
            case 0x228:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 24i64) + 952i64) + 312i64, &v29, v5, v4);
                goto LABEL_1038;
            case 0x229:
                v29 = ~(_DWORD)v11;
                v29 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 24) + 1264i64) ^ v5) + ~(_DWORD)v11;
                v13 = v29 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1776) >> 23);
                goto LABEL_1037;
            case 0x22A:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1400);
                v13 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v10 + 1816) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 392) + 328i64) + 328i64) + 1592i64)) ^ 0x41D0FF64;
                goto LABEL_1037;
            case 0x22B:
                v29 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 200) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 1816), 19)) + 504i64) >> 13);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 984);
                v29 = __ROR4__(v29, FuckEnc::CacheRead<_DWORD>(v10 + 1120));
                goto LABEL_1038;
            case 0x22C:
                v29 = __ROL4__(v11, 126 * FuckEnc::CacheRead<_BYTE>(v4 + 832));
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 608);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1904) + 1488i64);
                goto LABEL_1038;
            case 0x22D:
                v29 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 416) + 32i64) + 8i64 * ((unsigned __int8)v5 & 0x86)) + 1920i64));
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1344) + 8i64 * (unsigned __int8)(-97 * v5)) + 1432i64) ^ v29;
                goto LABEL_1037;
            case 0x22E:
                v29 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 520) ^ FuckEnc::CacheRead<_DWORD>(v4 + 1760) ^ 0x8C5D532);
                v29 = v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 656) + 136i64) - v5;
                goto LABEL_1038;
            case 0x22F:
                v13 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1048) + 1512i64) + 8i64 * ((unsigned __int8)v5 ^ 0x42u)) + 944i64) + 8i64 * (((unsigned __int8)v5 ^ 0x10) & 0x53)) + 1344i64) + 8i64 * ((unsigned __int8)__ROL4__(v5, 16) & 0x84)) + 1816i64));
                goto LABEL_1037;
            case 0x230:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 592) + 792i64);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1344) + 8i64 * (unsigned __int8)(-14 * v5)) + 680i64) + 1160i64);
                goto LABEL_1038;
            case 0x231:
                v29 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1832));
                v29 ^= v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 1592);
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 1760);
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(v4 + 280);
                goto LABEL_1037;
            case 0x232:
                v29 = v11 + v5;
                v29 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 200i64) + 8i64 * (unsigned __int8)(58 * v5)) + 1376i64) + 1552i64) + 4i64 * (unsigned __int8)(88 * v5)) ^ (v11 + v5);
                goto LABEL_1038;
            case 0x233:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 744) + 472i64) + 1400i64) + 1840i64) + 8i64 * (((unsigned __int8)v5 ^ 8) & 0x19)) + 1904i64);
                v13 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 520);
                goto LABEL_1037;
            case 0x234:
                Calls::FastCall(v4 + 1208, &v29, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 264) + 64i64);
                v29 -= FuckEnc::CacheRead<_DWORD>(v10 + 136);
                goto LABEL_1038;
            case 0x235:
                v29 = __ROR4__(v11 + 1113603627, 82);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 200) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1248) + 176i64) ^ 2) & 0xEF)) + 64i64) + 1408i64);
                goto LABEL_1038;
            case 0x236:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1664) + 328i64) + 64i64) + 1656i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 30), &v29, v5, v4);
                goto LABEL_1038;
            case 0x237:
                v14 = (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 424), 7);
                v15 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * (~(_BYTE)v5 & 0x28)) + 488i64);
                goto LABEL_34;
            case 0x238:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1640);
                v29 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 1080));
                v13 = v29 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 1736i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1576) + 792i64));
                goto LABEL_1037;
            case 0x239:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1736);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 1424i64);
                v29 -= FuckEnc::CacheRead<_DWORD>(v10 + 448) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 792) * v5);
                goto LABEL_1038;
            case 0x23A:
                v29 = v11 - 2 * v5;
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 136);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 32) + 8i64 * ((unsigned __int8)v5 & 0xBE)) + 520i64);
                goto LABEL_1038;
            case 0x23B:
                v29 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 1920i64) | 2);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 800);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1280) + 800i64) + 448i64);
                goto LABEL_1038;
            case 0x23C:
                v29 = v11 ^ 0x15B99D6D;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 920) + 1664i64);
                v29 = (v11 ^ 0x15B99D6D) + (FuckEnc::CacheRead<_DWORD>(v10 + 520) ^ 0x72DA1514) - 911245158;
                goto LABEL_1038;
            case 0x23D:
                v29 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1176));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 352i64) + 616i64) + 8i64 * (((unsigned __int8)v5 ^ 0xEF) & 0x50)) + 720i64);
                v29 += FuckEnc::CacheRead<_DWORD>(v10 + 1592);
                goto LABEL_1038;
            case 0x23E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 296);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 1032) + 8i64 * ((unsigned __int8)v5 & 0xA1), &v29, v5, v4);
                v29 = ~v29;
                goto LABEL_1038;
            case 0x23F:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 8i64 * ((unsigned __int8)(51 * FuckEnc::CacheRead<_BYTE>(v4 + 752)) & 0xC1)) + 352i64) + 1312i64) + 24i64);
                v13 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 1592));
                goto LABEL_1037;
            case 0x240:
                v29 = v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 1408) ^ v11;
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 176);
                Calls::FastCall(v4 + 1912, &v29, v5, v4);
                goto LABEL_1038;
            case 0x241:
                v29 = (v5 ^ (v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 1432i64))) + 1720716943;
                v29 += 901215818 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1904) + 448i64);
                goto LABEL_1038;
            case 0x242:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 1920) ^ v11;
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1048) + 328i64) + 920i64) + 1248i64) + 64i64) + 424i64);
                goto LABEL_1037;
            case 0x243:
                v29 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 1160);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1704);
                v29 = v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 112) + 1448i64) - FuckEnc::CacheRead<_DWORD>(v4 + 848);
                goto LABEL_1038;
            case 0x244:
                v13 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 720) + 360i64) + 8i64 * (unsigned __int8)(60 * v5)) + 920i64) + 1080i64) - (FuckEnc::CacheRead<_DWORD>(v4 + 120) | 0xA);
                goto LABEL_1037;
            case 0x245:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 752) ^ v11;
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 328) + 568i64) + 4i64 * (((unsigned __int8)v5 ^ 0xDC) & 0x6F));
                v29 += ~FuckEnc::CacheRead<_DWORD>(v4 + 936);
                goto LABEL_1038;
            case 0x246:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 720);
                v29 = v11 + (FuckEnc::CacheRead<_DWORD>(v10 + 1104) ^ FuckEnc::CacheRead<_DWORD>(v4 + 1760) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 32) + 8i64 * (unsigned __int8)(85 * v5)) + 1176i64));
                goto LABEL_1038;
            case 0x247:
                v29 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 1408i64) ^ v11 ^ 0xA8C31131;
                v10 = FuckEnc::CacheReadPlural<_QWORD>(v4 + 920);
                v13 = v29 - (FuckEnc::CacheRead<_DWORD>(v10 + 1408) | 0xE);
                goto LABEL_1037;
            case 0x248:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 424);
                v29 = __ROR4__(v29, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 8i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 1504i64) >> 8, 10) & 3)) + 1832i64));
                goto LABEL_1038;
            case 0x249:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1728) + 1936i64);
                v13 = (v11 - FuckEnc::CacheRead<_DWORD>(v10 + 752) * (FuckEnc::CacheRead<_DWORD>(v4 + 1504) ^ 0x88F2A12C)) ^ 0xB37D09E7;
                goto LABEL_1037;
            case 0x24A:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1832);
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 680) + 1080i64) ^ (-1819173780 * FuckEnc::CacheRead<_DWORD>(v4 + 464)) ^ 0xC3113143;
                goto LABEL_1038;
            case 0x24B:
                v29 = v11 ^ ~(FuckEnc::CacheRead<_DWORD>(v4 + 1736) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1576) + 776i64));
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 1120);
                goto LABEL_1038;
            case 0x24C:
                v29 = v11 + (FuckEnc::CacheReadPlural<_DWORD>(v4 + 1552) << 13);
                v13 = v29 + (FuckEnc::CacheRead<_DWORD>(v4 + 1264) & 0xFFFFFFE5) + 1982833208;
                goto LABEL_1037;
            case 0x24D:
                v13 = v11 - (v5 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 392) + 112i64) + 1776i64) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 608i64));
                goto LABEL_1037;
            case 0x24E:
                v29 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 1488) >> 31);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 352);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 8i64 * (unsigned __int8)(76 * FuckEnc::CacheRead<_BYTE>(v10 + 1776))) + 448i64);
                goto LABEL_1038;
            case 0x24F:
                v13 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 1728i64) + 264i64) + 32i64) + 8i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 1832), 18) & 0x11)) + 280i64));
                goto LABEL_1037;
            case 0x250:
                v29 = v11 - 568862940 * FuckEnc::CacheRead<_DWORD>(v4 + 1592) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1640) + 1920i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 264);
                v13 = FuckEnc::CacheRead<_DWORD>(v10 + 448) ^ v29;
                goto LABEL_1037;
            case 0x251:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 64);
                v29 = v11 + (((FuckEnc::CacheRead<_DWORD>(v10 + 504) << 8) + (_DWORD)0x132134AD + FuckEnc::CacheRead<_DWORD>(v4 + 1816)) | 0xE) + 1;
                goto LABEL_1038;
            case 0x252:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 464);
                Calls::FastCall(v4 + 272, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1184) + 8i64 * ((unsigned __int8)(-44 * FuckEnc::CacheRead<_BYTE>(v4 + 192)) & 0xF8)));
                goto LABEL_1038;
            case 0x253:
                v29 = v11 ^ 0xC3018944;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1184) + 8i64 * (v5 & 0x71)) + 592i64);
                Calls::FastCall(v4 + 248, &v29, v5, v10);
                goto LABEL_1038;
            case 0x254:
                v29 = (v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 448) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1072) + 752i64)) - 1396539192;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1664);
                v29 -= FuckEnc::CacheRead<_DWORD>(v10 + 1176);
                goto LABEL_1038;
            case 0x255:
                v29 = (v11 - FuckEnc::CacheRead<_DWORD>(v4 + 96)) ^ 0x3ED3F3AF;
                v29 ^= (FuckEnc::CacheRead<_DWORD>(v4 + 776) >> 30) * (FuckEnc::CacheRead<_DWORD>(v4 + 1488) - 2063093640);
                goto LABEL_1038;
            case 0x256:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 352i64) + 64i64) + 1728i64) + 768i64);
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1672) + 8i64 * (__ROR4__(v5, 4) & 0x2D)) + 936i64) ^ v11;
                goto LABEL_1037;
            case 0x257:
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * (unsigned __int8)(33 * ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 1104i64))) + 824i64) + 4i64 * ((unsigned __int8)v5 ^ 0x24u)) ^ v11;
                goto LABEL_1037;
            case 0x258:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1904) + 1704i64);
                LODWORD(v11) = FuckEnc::CacheRead<_DWORD>(v10 + 1104) ^ v11;
                v29 = v11;
                v27 = v5 & 0x4B;
                v28 = FuckEnc::CacheRead<_QWORD>(v4 + 1072);
                goto LABEL_833;
            case 0x259:
                v29 = __ROL4__(v11 ^ 0xC30131E2, 12);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 984) + 1920i64) + 847800874;
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 832);
                goto LABEL_1038;
            case 0x25A:
                v29 = v11 + 1636264974;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1072) + 552i64, &v29, v5, v4);
                v29 -= 532873521;
                goto LABEL_1038;
            case 0x25B:
                v29 = v11 + ((FuckEnc::CacheRead<_DWORD>(v4 + 792) * FuckEnc::CacheRead<_DWORD>(v4 + 1776)) << 31);
                v13 = v29 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 1816);
                goto LABEL_1037;
            case 0x25C:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 1080) ^ v11;
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 360) + 8i64 * ((43 * FuckEnc::CacheRead<_BYTE>(v4 + 520)) & 0x49)) + 1936i64) + 920i64) + 1880i64) + 4i64 * (unsigned __int8)(-72 * v5));
                goto LABEL_1037;
            case 0x25D:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1504) * v5;
                v29 = __ROR4__(v29, FuckEnc::CacheRead<_DWORD>(v4 + 96));
                v29 = (v29 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1400) + 1736i64)) ^ 0xBFC31131;
                goto LABEL_1038;
            case 0x25E:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1160);
                v29 = __ROL4__(v29, FuckEnc::CacheRead<_DWORD>(v4 + 1504));
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 1504) * v5 + 644850540;
                goto LABEL_1038;
            case 0x25F:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1736) + 350310545;
                v13 = v29 + FuckEnc::CacheRead<_DWORD>(v4 + 120) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 392) + 896i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 17));
                goto LABEL_1037;
            case 0x260:
                v13 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1184) + 8i64 * ((-12 * FuckEnc::CacheRead<_BYTE>(v4 + 1080)) & 0x18)) + 360i64) + 8i64 * (v5 & 0x64)) + 1576i64) + 136i64);
                goto LABEL_1037;
            case 0x261:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 424) & 0xDE)) + 1264i64);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 688) + 8i64 * (unsigned __int8)((_BYTE)v5 << 6)) + 792i64);
                goto LABEL_1038;
            case 0x262:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1344) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 176) & 0x87)) + 240i64) + 4i64 * (unsigned __int8)(122 * v5));
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 8i64 * (unsigned __int8)(-12 * FuckEnc::CacheRead<_BYTE>(v4 + 936))) + 752i64);
                goto LABEL_1038;
            case 0x263:
                v29 = v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 680) + 1880i64) + 4i64 * (unsigned __int8)(97 * v5));
                Calls::FastCall(v4 + 1520, &v29, v5, v4);
                goto LABEL_1038;
            case 0x264:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1008) + 416i64) + 416i64);
                v13 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v10 + 1176) * (FuckEnc::CacheRead<_BYTE>(v4 + 192) & 0xF2));
                goto LABEL_1037;
            case 0x265:
                v13 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1576) + 984i64) + 1488i64) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 416) + 1760i64) + 886367987) + 1221677766;
                goto LABEL_1037;
            case 0x266:
                v29 = __ROR4__(v11, 65);
                Calls::FastCall(v4 + 312, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 296i64) + 1096i64));
                goto LABEL_1038;
            case 0x267:
                Calls::FastCall(v4 + 904, &v29, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1096);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1480) + 4i64 * (unsigned __int8)(-43 * v5));
                goto LABEL_1038;
            case 0x268:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 1120i64);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1728) + 896i64) + 4i64 * (v5 & 0x24));
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 1920);
                goto LABEL_1038;
            case 0x269:
                v29 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 504) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1048) + 240i64) + 4i64 * (unsigned __int8)((_BYTE)v5 << 7));
                goto LABEL_1038;
            case 0x26A:
                v15 = FuckEnc::CacheRead<_QWORD>(v4 + 1360);
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 32) + 8i64 * ((unsigned __int8)(-89 * v5) & 0xF3)) + 1592i64) & 0xA6;
                goto LABEL_34;
            case 0x26B:
                v29 = ~((v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1344) + 8i64 * ((unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 1104), 4) & 0xDC)) + 1376i64) + 1832i64)) ^ 0x8F842275);
                goto LABEL_1038;
            case 0x26C:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1248) + 1072i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1096) + 1656i64) + 8i64 * (unsigned __int8)(-46 * v5), &v29, v5, v4);
                goto LABEL_1038;
            case 0x26D:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1400);
                v29 = FuckEnc::CacheRead<_DWORD>(v10 + 1832) ^ v11;
                Calls::FastCall(v4 + 1624, &v29, v5, v4);
                goto LABEL_1038;
            case 0x26E:
                Calls::FastCall(v4 + 1200, &v29, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1728) + 1664i64);
                v29 = __ROL4__(v29, FuckEnc::CacheRead<_DWORD>(v10 + 1832));
                goto LABEL_1038;
            case 0x26F:
                v29 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 1264) ^ v5);
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 504);
                Calls::FastCall(v4 + 1200, &v29, v5, v4);
                goto LABEL_1038;
            case 0x270:
                Calls::FastCall(v4 + 320, &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 416));
                goto LABEL_1038;
            case 0x271:
                v29 = __ROL4__(v11, 49);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1456);
                Calls::FastCall(v10 + 552, &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 144));
                goto LABEL_1038;
            case 0x272:
                v29 = v11 ^ 0xF17FBAB0;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 1280i64);
                v13 = (v11 ^ 0xF17FBAB0) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1272) + 8i64 * (unsigned __int8)(-7 * v5)) + 568i64) + 4i64 * ((unsigned __int8)__ROR4__(v5, 1) & 0xA7));
                goto LABEL_1037;
            case 0x273:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 1264) ^ v11;
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 280i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 88);
                v13 = v29 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 792) * v5);
                goto LABEL_1037;
            case 0x274:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1184) + 8i64 * (unsigned __int8)__ROL4__(-934912179 * FuckEnc::CacheRead<_DWORD>(v4 + 448), 2)) + 264i64);
                v13 = FuckEnc::CacheRead<_DWORD>(v10 + 1920) ^ v11 ^ 0x78F18DE2;
                goto LABEL_1037;
            case 0x275:
                v29 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 776) ^ 0xF7F31A74) - 1938096661;
                v29 += v5 + ~FuckEnc::CacheRead<_DWORD>(v4 + 1920);
                goto LABEL_1038;
            case 0x276:
                v29 = __ROL4__(v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 832) ^ v11, 25);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 296);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1224) + 4i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(v10 + 1176), 1) & 2)) + 491804756;
                goto LABEL_1038;
            case 0x277:
                v29 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1104));
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1512) + 8i64 * (v5 & 0x25)) + 1192i64, &v29, v5, v4);
                goto LABEL_1038;
            case 0x278:
                v29 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 120) ^ 0x67C6D616);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 392i64);
                Calls::FastCall(v4 + 760, &v29, v5, v10);
                goto LABEL_1038;
            case 0x279:
                v29 = (__ROL4__(v11, v5) ^ 0xA6D1FF41) - 1247388690;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1608);
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 200) + 8i64 * (((unsigned __int8)v5 ^ 0x12) & 0xF2)) + 1448i64);
                goto LABEL_1038;
            case 0x27A:
                v29 = v11 ^ 0x353AF550;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1704) + 312i64, &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 24));
                goto LABEL_1038;
            case 0x27B:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1376) + 984i64) + 1952i64, &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1048));
                goto LABEL_1038;
            case 0x27C:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1504);
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 1504);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1008);
                v29 = __ROR4__(v29, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v10 + 1336) + 448i64) ^ 0xC);
                goto LABEL_1038;
            case 0x27D:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 800);
                v29 = FuckEnc::CacheRead<_DWORD>(v10 + 1776) ^ v11;
                v29 += 1889203145 * FuckEnc::CacheRead<_DWORD>(v4 + 1104);
                v13 = v29 + ~FuckEnc::CacheRead<_DWORD>(v4 + 424);
                goto LABEL_1037;
            case 0x27E:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 192) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 328) + 1264i64);
                v29 ^= v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 1920i64);
                goto LABEL_1038;
            case 0x27F:
                v29 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 448) << 16);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 984) + 360i64) + 8i64 * ((unsigned __int8)v5 & 0xA1)) + 1664i64);
                v29 += FuckEnc::CacheRead<_DWORD>(v10 + 752);
                goto LABEL_1038;
            case 0x280:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 416);
                v29 = FuckEnc::CacheRead<_DWORD>(v10 + 136) ^ v11;
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 608);
                v13 = v29 - (FuckEnc::CacheRead<_DWORD>(v4 + 1448) << 16);
                goto LABEL_1037;
            case 0x281:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 832) ^ v11;
                v13 = v29 - (((FuckEnc::CacheRead<_DWORD>(v4 + 1408) & 0xFFFFFFE3) * (FuckEnc::CacheRead<_DWORD>(v4 + 1736) - 2022621929)) ^ 0xAA40976C);
                goto LABEL_1037;
            case 0x282:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1248) + 504i64);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 616i64) + 8i64 * (unsigned __int8)(-80 * v5)) + 752i64) - 1718312540;
                goto LABEL_1038;
            case 0x283:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 1736) ^ v11;
                v13 = __ROR4__(v29, (FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1400) + 1160i64) + FuckEnc::CacheRead<_BYTE>(v4 + 520) * v5) | 1);
                goto LABEL_1037;
            case 0x284:
                v29 = v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 64) + 896i64) + 4i64 * (((unsigned __int8)v5 ^ (unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 360) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 280) & 0xDC)) + 504i64)) & 0x57));
                goto LABEL_1038;
            case 0x285:
                v29 = (v11 - 902763429) ^ 0xA0C5B1B7;
                Calls::FastCall(v4 + 216, &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1904));
                goto LABEL_1038;
            case 0x286:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 136);
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 192);
                v29 += 592164188 * FuckEnc::CacheRead<_DWORD>(v4 + 1408);
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 1080);
                goto LABEL_1038;
            case 0x287:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 120);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 1704i64);
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 1776) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1808) + 4i64 * ((unsigned __int8)v5 & 0xFC));
                goto LABEL_1038;
            case 0x288:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 520) ^ v11;
                v13 = __ROR4__(v29, (_DWORD)0x1129BC70 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 8i64 * (v5 & 0x73)) + 240i64) + 4i64 * (unsigned __int8)(23 * v5)));
                goto LABEL_1037;
            case 0x289:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 352) + 848i64) * v5;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * ((unsigned __int8)v5 & 0x94)) + 1072i64);
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(v10 + 176);
                goto LABEL_1037;
            case 0x28A:
                v29 = v5 ^ (v11 - 1023309500);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 352);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1920) + FuckEnc::CacheRead<_DWORD>(v10 + 1080) - 168738505;
                goto LABEL_1038;
            case 0x28B:
                v29 = v11 + ((FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 720) + 1920i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * ((unsigned __int8)v5 & 0xAA)) + 1608i64) + 1120i64)) ^ 0xEEAB2478);
                goto LABEL_1038;
            case 0x28C:
                v15 = FuckEnc::CacheRead<_QWORD>(v4 + 672);
                v14 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1072) + 1576i64) + 1480i64) + 4i64 * ((35 * (_BYTE)v5) & 0x5E)) & 0x1D;
            LABEL_34:
                v16 = v4;
            LABEL_35:
                Calls::FastCall(v15 + 8 * v14, &v29, v5, v16);
                goto LABEL_1038;
            case 0x28D:
                v29 = v11 - 336829738;
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 1080) ^ (v11 - 336829738);
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 792);
                v13 = v29 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1728) + 1776i64);
                goto LABEL_1037;
            case 0x28E:
                Calls::FastCall(v4 + 1960, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1016) + 8i64 * (v5 & 0x1D)) + 952i64) + 1840i64) + 8i64 * (v5 & 0x11)));
                goto LABEL_1038;
            case 0x28F:
                v29 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 1176) >> 26);
                v29 += 344885532 * FuckEnc::CacheRead<_DWORD>(v4 + 520) * FuckEnc::CacheRead<_DWORD>(v4 + 1448);
                goto LABEL_1038;
            case 0x290:
                v29 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1344) + 8i64 * (((unsigned __int8)v5 ^ 3) & 0x6B)) + 1096i64) + 520i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1424);
                v13 = FuckEnc::CacheRead<_DWORD>(v10 + 1448) ^ v29;
                goto LABEL_1037;
            case 0x291:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1312) + 1488i64);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 792) ^ FuckEnc::CacheRead<_DWORD>(v4 + 1264);
                goto LABEL_1038;
            case 0x292:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1640) + 496i64) + 4i64 * ((unsigned __int8)v5 & 0x8B));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 1936i64);
                v29 += FuckEnc::CacheRead<_DWORD>(v10 + 1448) ^ 0xC3018944;
                goto LABEL_1038;
            case 0x293:
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1840) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 920) + 1016i64) + 8i64 * ((unsigned __int8)v5 & 0xA7)) + 920i64) + 1776i64) & 0xDD)) + 1120i64) ^ v11;
                goto LABEL_1037;
            case 0x294:
                v13 = __ROL4__(v11, (v5 + FuckEnc::CacheRead<_BYTE>(v4 + 936)) * (FuckEnc::CacheRead<_BYTE>(v4 + 1832) ^ (FuckEnc::CacheRead<_BYTE>(v4 + 448) + 114)));
                goto LABEL_1037;
            case 0x295:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1344) + 8i64 * FuckEnc::CacheRead<unsigned __int8>(v4 + 120)) + 720i64) + 1728i64);
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 440) + 1120i64) ^ v11;
                goto LABEL_1037;
            case 0x296:
                v29 = v11 - v5;
                v29 = v11 - v5 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1904) + 1176i64) ^ 0x5E389664);
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1400) + 1488i64);
                goto LABEL_1038;
            case 0x297:
                v29 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 120) * v5);
                v13 = ~(v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 64) + 984i64) + 168i64) + 4i64 * ((unsigned __int8)v5 ^ 0xB9u)));
                goto LABEL_1037;
            case 0x298:
                v29 = v11 ^ 0x76C9244C;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 264) + 1400i64);
                v13 = (v11 ^ 0x76C9244C) - FuckEnc::CacheRead<_DWORD>(v4 + 792) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 896) + 4i64 * ((5 * (_BYTE)v5) & 0x2C));
                goto LABEL_1037;
            case 0x299:
                v29 = (FuckEnc::CacheRead<_DWORD>(v4 + 136) ^ v11) - 221935230;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 680i64);
                Calls::FastCall(v4 + 1192, &v29, v5, v10);
                goto LABEL_1038;
            case 0x29A:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 24);
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 424);
                Calls::FastCall(v4 + 552, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 392) + 720i64));
                goto LABEL_1038;
            case 0x29B:
                v29 = v11 ^ (-2076483275 * FuckEnc::CacheRead<_DWORD>(v4 + 136));
                v13 = v29 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1664) + 96i64);
                goto LABEL_1037;
            case 0x29C:
                Calls::FastCall(v4 + 1848, &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 64));
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1376) + 1096i64) + 1176i64);
                goto LABEL_1038;
            case 0x29D:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 568i64) + 4i64 * ((unsigned __int8)v5 ^ 0xF3u));
                Calls::FastCall(v4 + 1192, &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1728));
                goto LABEL_1038;
            case 0x29E:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 8i64 * ((unsigned __int8)v5 ^ 0xC1u)) + 1488i64);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1904) + 920i64) + 752i64);
                goto LABEL_1038;
            case 0x29F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 720);
                v29 = v11 + 1023309500 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 112i64) + 752i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 824) + 4i64 * (__ROL4__(v5, 27) & 0x15));
                goto LABEL_1038;
            case 0x2A0:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 416) + 608i64) - FuckEnc::CacheRead<_DWORD>(v4 + 1760);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 416);
                v29 += FuckEnc::CacheRead<_DWORD>(v10 + 176);
                goto LABEL_1038;
            case 0x2A1:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1904) + 1120i64) ^ 0xCF) & 0x71)) + 1488i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1312);
                v13 = FuckEnc::CacheRead<_DWORD>(v10 + 1120) ^ v29;
                goto LABEL_1037;
            case 0x2A2:
                v29 = v11 ^ 0xC3018944;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1576) + 768i64);
                Calls::FastCall(v4 + 432, &v29, v5, v10);
                goto LABEL_1038;
            case 0x2A3:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 752);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 920) + 1336i64) + 1120i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1048);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v10 + 792);
                goto LABEL_1038;
            case 0x2A4:
                v29 = v11 + 1125738116;
                v29 = v11 + 1125738116 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 88) + 592i64) + 1488i64);
                v29 = v29 - FuckEnc::CacheRead<_DWORD>(v4 + 1488) + 1023309500;
                goto LABEL_1038;
            case 0x2A5:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1336) + 768i64) + 896i64) + 4i64 * ((unsigned __int8)v5 & 0xAF));
                Calls::FastCall(v4 + 1584, &v29, v5, v4);
                goto LABEL_1038;
            case 0x2A6:
                v29 = v11 + (v5 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 32) + 8i64 * (unsigned __int8)(96 * v5)) + 1592i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1840) + 8i64 * (unsigned __int8)__ROL4__(v5, 17)) + 1160i64));
                goto LABEL_1038;
            case 0x2A7:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 792);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1312);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1160);
                v29 = __ROL4__(v29, (unsigned int)0x11B7C64F ^ FuckEnc::CacheRead<_DWORD>(v4 + 792));
                goto LABEL_1038;
            case 0x2A8:
                v29 = 1023309499 - (v5 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 200) + 8i64 * (unsigned __int8)(76 * v5)) + 280i64) ^ v11 ^ 0xF3EB7D40);
                goto LABEL_1038;
            case 0x2A9:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1096);
                v29 = FuckEnc::CacheRead<_DWORD>(v10 + 1504) ^ v11 ^ 0x7156D310;
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 88) + 1928i64) + 8i64 * (unsigned __int8)(66 * v5)) + 1408i64) ^ v29;
                goto LABEL_1037;
            case 0x2AA:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 8i64 * ((unsigned __int8)(20 * v5) & 0xC8)) + 352i64);
                v13 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1840) + 8i64 * (unsigned __int8)(67 * v5)) + 32i64) + 8i64 * (((unsigned __int8)v5 ^ 0x28) & 0xB8)) + 608i64);
                goto LABEL_1037;
            case 0x2AB:
                v29 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1432));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 952i64);
                v29 = __ROL4__(v29, FuckEnc::CacheRead<_DWORD>(v10 + 776));
                v13 = v29 - 178707837 * FuckEnc::CacheRead<_DWORD>(v4 + 96);
                goto LABEL_1037;
            case 0x2AC:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 328) + 880i64, &v29, v5, v4);
                v29 = __ROR4__(v29, v5 + FuckEnc::CacheRead<_DWORD>(v4 + 1264));
                goto LABEL_1038;
            case 0x2AD:
                v29 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1104)) - 1023332083;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 1312i64);
                v13 = v29 + FuckEnc::CacheRead<_DWORD>(v4 + 1104) * FuckEnc::CacheRead<_DWORD>(v10 + 1816);
                goto LABEL_1037;
            case 0x2AE:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 896i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 19));
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 280) + 1261772777;
                goto LABEL_1038;
            case 0x2AF:
                v29 = (((v11 + 773860532) ^ 0xD0FF9D3D) + 539740992) ^ 0xD3946E37;
                v13 = v29 + ((FuckEnc::CacheRead<_DWORD>(v4 + 1760) - 2116944063) ^ 0xCC4D29B9);
                goto LABEL_1037;
            case 0x2B0:
                v29 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 848));
                v29 += (FuckEnc::CacheRead<_DWORD>(v4 + 1760) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 688) + 8i64 * ((unsigned __int8)v5 ^ 0xF8u)) + 448i64)) - 771800716;
                goto LABEL_1038;
            case 0x2B1:
                v29 = v11 ^ 0x68369A9E;
                v29 = (FuckEnc::CacheRead<_DWORD>(v4 + 1592) ^ 0x17C28DD3) - 1851749111 * FuckEnc::CacheRead<_DWORD>(v4 + 1176) + (v11 ^ 0x68369A9E) - 1464329676;
                goto LABEL_1038;
            case 0x2B2:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 800);
                v29 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 96));
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 136) & 0xFFFFFFE7;
                v13 = v29 + ~FuckEnc::CacheRead<_DWORD>(v4 + 1120);
                goto LABEL_1037;
            case 0x2B3:
                v29 = (FuckEnc::CacheRead<_DWORD>(v4 + 848) ^ v11) + 1658823238;
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 520i64);
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 1736);
                goto LABEL_1038;
            case 0x2B4:
                v29 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 936) + FuckEnc::CacheRead<_DWORD>(v4 + 608) + 1270242190) ^ 0xC3018944;
                v13 = v29 + (FuckEnc::CacheRead<_DWORD>(v4 + 752) ^ 0x599F45EA);
                goto LABEL_1037;
            case 0x2B5:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 1080) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 392) + 1128i64);
                v29 += FuckEnc::CacheRead<_DWORD>(v10 + 1264);
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 1264) + v29 - 272397813;
                goto LABEL_1038;
            case 0x2B6:
                v13 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1728) + 1488i64) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 240) + 4 * ((FuckEnc::CacheRead<_DWORD>(v4 + 120) & 0xEF | 0x10i64) ^ 0x94)) | 8));
                goto LABEL_1037;
            case 0x2B7:
                v10 = FuckEnc::CacheRead<_QWORD>(v4);
                v29 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 120i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 920) + 792i64));
                v29 = __ROR4__(v29, 44 * FuckEnc::CacheRead<_BYTE>(v4 + 936));
                goto LABEL_1038;
            case 0x2B8:
                v29 = v11 ^ (-1023331933 * (FuckEnc::CacheRead<_DWORD>(v4 + 1432) | 3)) ^ 0x7DFE2122;
                v29 = v29 - FuckEnc::CacheRead<_DWORD>(v4 + 280) - v5 + 584063003;
                goto LABEL_1038;
            case 0x2B9:
                v29 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 328) + 1408i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1456);
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 280i64) - FuckEnc::CacheRead<_DWORD>(v10 + 464);
                goto LABEL_1037;
            case 0x2BA:
                Calls::FastCall(v4 + 1864, &v29, v5, v4);
                Calls::FastCall(v4 + 208, &v29, v5, v4);
                goto LABEL_1038;
            case 0x2BB:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1264) & 0xA3)) + 1336i64) + 1560i64, &v29, v5, v4);
                goto LABEL_1038;
            case 0x2BC:
                v29 = ~((_DWORD)0xE9051B2 + v11 + FuckEnc::CacheRead<_DWORD>(v4 + 96));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 984);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1016) + 8i64 * ((unsigned __int8)(-80 * v5) & 0x80)) + 520i64);
                goto LABEL_1038;
            case 0x2BD:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1936);
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 192);
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1016) + 8i64 * (((unsigned __int8)v5 ^ 0xBD) & 0xC6)) + 200i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 27)) + 1592i64);
                goto LABEL_1038;
            case 0x2BE:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 1776) ^ v11;
                Calls::FastCall(v4 + 552, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 8i64 * ((unsigned __int8)v5 & 0xE8)));
                goto LABEL_1038;
            case 0x2BF:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1904) + 360i64) + 8i64 * ((-16 * (_BYTE)v5) & 0x1E)) + 360i64) + 8i64 * (v5 & 0x21)) + 464i64);
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 1736);
                goto LABEL_1038;
            case 0x2C0:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 800);
                v29 = FuckEnc::CacheRead<_DWORD>(v10 + 1448) ^ v11;
                Calls::FastCall(v4 + 864, &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 440));
                goto LABEL_1038;
            case 0x2C1:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 624);
                v12 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 688) + 8i64 * ((unsigned __int8)(-39 * v5) & 0x82)) + 1008i64);
            LABEL_4:
                Calls::FastCall(v4 + 600, &v29, v5, v12);
                goto LABEL_1038;
            case 0x2C2:
                v29 = ~(_DWORD)v11;
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 1760) ^ ~(_DWORD)v11;
                Calls::FastCall(v4 + 248, &v29, v5, v4);
                goto LABEL_1038;
            case 0x2C3:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 8i64 * (unsigned __int8)(103 * FuckEnc::CacheRead<_BYTE>(v4 + 1176))) + 744i64) + 392i64) + 64i64);
                v13 = FuckEnc::CacheRead<_DWORD>(v10 + 1160) ^ v11;
                goto LABEL_1037;
            case 0x2C4:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 952);
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1728) + 1160i64) * (FuckEnc::CacheRead<_DWORD>(v10 + 1448) + (FuckEnc::CacheRead<_DWORD>(v4 + 1176) ^ 0xCA4051C));
                goto LABEL_1038;
            case 0x2C5:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 280);
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 1816);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 624);
                Calls::FastCall(v4 + 1888, &v29, v5, v10);
                goto LABEL_1038;
            case 0x2C6:
                v29 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 920i64) + 1400i64) + 1400i64) + 448i64));
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(v4 + 120);
                goto LABEL_1037;
            case 0x2C7:
                v29 = ~(v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 328) + 1408i64));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 1096i64);
                v13 = v29 ^ ~FuckEnc::CacheRead<_DWORD>(v10 + 848);
                goto LABEL_1037;
            case 0x2C8:
                Calls::FastCall(v4 + 880, &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 112));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1576) + 1752i64);
                v29 += FuckEnc::CacheRead<_DWORD>(v10 + 1120);
                goto LABEL_1038;
            case 0x2C9:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 280);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1456);
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 32) + 8i64 * (unsigned __int8)(-71 * v5)) + 1928i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 10)) + 1080i64);
                goto LABEL_1038;
            case 0x2CA:
                v13 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 688) + 8i64 * ((unsigned __int8)v5 & 0xB8)) + 32i64) + 8i64 * ((unsigned __int8)v5 & 0xA7)) + 944i64) + 8i64 * (~(_BYTE)v5 & 0x3A)) + 240i64) + 4i64 * (v5 & 0x2A)));
                goto LABEL_1037;
            case 0x2CB:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 464);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1776);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * (unsigned __int8)(-2 * v5)) + 416i64) + 832i64);
                goto LABEL_1038;
            case 0x2CC:
                v29 = ~(v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1840) + 8i64 * (unsigned __int8)(-43 * FuckEnc::CacheRead<_BYTE>(v4 + 848))) + 616i64) + 8i64 * (__ROL4__(v5, 10) & 0x21)) + 944i64) + 8i64 * (v5 & 0x66)) + 1080i64));
                goto LABEL_1038;
            case 0x2CD:
                v29 = (FuckEnc::CacheRead<_DWORD>(v4 + 1592) ^ v11) + 1023309500;
                v13 = v29 + (FuckEnc::CacheRead<_DWORD>(v4 + 1816) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 8i64 * (((unsigned __int8)v5 ^ 0xFD) & 0x36)) + 1080i64));
                goto LABEL_1037;
            case 0x2CE:
                v29 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 608) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 1920i64) + (FuckEnc::CacheRead<_DWORD>(v4 + 1264) ^ v5));
                goto LABEL_1038;
            case 0x2CF:
                v29 = v5 ^ (v11 + v5);
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1184) + 8i64 * (__ROL4__(v5, 28) & 0x4C)) + 1072i64) + 1096i64) + 176i64);
                goto LABEL_1038;
            case 0x2D0:
                v29 = v11 + 1023309500;
                v29 = __ROR4__(v11 + 1023309500, FuckEnc::CacheRead<_BYTE>(v4 + 1504) + 81);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1424);
                v13 = ~(FuckEnc::CacheRead<_DWORD>(v10 + 752) ^ v29);
                goto LABEL_1037;
            case 0x2D1:
                v13 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 88) + 1776i64) ^ (v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 8i64 * ((unsigned __int8)v5 & 0xE1)) + 424i64)));
                goto LABEL_1037;
            case 0x2D2:
                v29 = ~(_DWORD)v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1728);
                v29 = ~(~(_DWORD)v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1480) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 1592), 28)));
                goto LABEL_1038;
            case 0x2D3:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1816);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 856) + 8i64 * (((unsigned __int8)v5 ^ 0x12) & 0x7B)) + 1456i64) + 1640i64) + 88i64);
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(v10 + 1176);
                goto LABEL_1037;
            case 0x2D4:
                v29 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1120));
                v29 = __ROL4__(v29, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 856) + 8i64 * ((unsigned __int8)__ROL4__(v5, 20) & 0xB5)) + 1120i64));
                v13 = v29 - (FuckEnc::CacheRead<_DWORD>(v4 + 1264) | 0x15);
                goto LABEL_1037;
            case 0x2D5:
                v29 = (FuckEnc::CacheRead<_DWORD>(v4 + 424) ^ v11) + 736194341;
                v29 += ~FuckEnc::CacheRead<_DWORD>(v4 + 848);
                v29 ^= v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 1488);
                goto LABEL_1038;
            case 0x2D6:
                v29 = v11 ^ ((FuckEnc::CacheRead<_DWORD>(v4 + 1816) & 1) << 20);
                v13 = v29 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 192) + (FuckEnc::CacheRead<_DWORD>(v4 + 1432) >> 22));
                goto LABEL_1037;
            case 0x2D7:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1400) + 1512i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 4)) + 688i64) + 8i64 * ((unsigned __int8)v5 ^ 0x1Eu)) + 352i64);
                v13 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 752);
                goto LABEL_1037;
            case 0x2D8:
                v29 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 1448i64));
                v29 += v5 + FuckEnc::CacheRead<_DWORD>(v4 + 1408);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1640);
                v29 -= FuckEnc::CacheRead<_DWORD>(v10 + 424);
                goto LABEL_1038;
            case 0x2D9:
                Calls::FastCall(v4 + 1584, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 200) + 8i64 * (unsigned __int8)__ROL4__(v5, 31)) + 616i64) + 8i64 * (__ROL4__(v5, 15) & 0x24)) + 24i64));
                goto LABEL_1038;
            case 0x2DA:
                v29 = v5 + (v11 ^ 0xD2BECDB2);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1904) + 1088i64, &v29, v5, v4);
                goto LABEL_1038;
            case 0x2DB:
                v29 = ~(FuckEnc::CacheRead<_DWORD>(v4 + 1504) ^ v11) - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 592) + 472i64);
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(v10 + 1432);
                goto LABEL_1037;
            case 0x2DC:
                v29 = v11 + v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 296);
                v29 = FuckEnc::CacheRead<_DWORD>(v10 + 192) ^ (v11 + v5);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 176) ^ 0x696CDB4D;
                goto LABEL_1038;
            case 0x2DD:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1504);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1784);
                Calls::FastCall(v4 + 1528, &v29, v5, FuckEnc::CacheRead<_QWORD>(v10 + 64));
                goto LABEL_1038;
            case 0x2DE:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 744i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 1000) + 8i64 * ((unsigned __int8)v5 ^ 0x60u), &v29, v5, v4);
                goto LABEL_1038;
            case 0x2DF:
                v29 = __ROR4__(v11, ~(FuckEnc::CacheRead<_BYTE>(v4 + 1816) ^ v5));
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 1808i64) + 4i64 * ((unsigned __int8)v5 & 0xF5)) ^ v29;
                goto LABEL_1037;
            case 0x2E0:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1936);
                Calls::FastCall(v10 + 1088, &v29, v5, v4);
                v29 = __ROR4__(v29, FuckEnc::CacheRead<_BYTE>(v4 + 1080) | 0x15);
                goto LABEL_1038;
            case 0x2E1:
                v29 = v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1248) + 1504i64);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1248) + 168i64) + 4i64 * (((unsigned __int8)v5 ^ 0xCB) & 0xB4));
                goto LABEL_1038;
            case 0x2E2:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1736);
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 1264);
                v10 = FuckEnc::CacheRead<_QWORD>(v4);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 792i64) + 1;
                goto LABEL_1038;
            case 0x2E3:
                v29 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 112i64) + 464i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1904);
                v13 = __ROL4__(v29, (v5 + FuckEnc::CacheRead<_BYTE>(v10 + 464)) ^ 0x2B);
                goto LABEL_1037;
            case 0x2E4:
                v29 = v11 + v5;
                v29 = v11 + v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1184) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 280), 4)) + 288i64) + 8i64 * ((33 * (_BYTE)v5) & 0x51)) + 848i64);
                goto LABEL_1038;
            case 0x2E5:
                v29 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 1760) & 0xFFFFFFFB);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1920) ^ 0x53C31131;
                goto LABEL_1038;
            case 0x2E6:
                v29 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 1592i64));
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 32) + 8i64 * (unsigned __int8)(-10 * v5)) + 592i64) + 608i64);
                goto LABEL_1037;
            case 0x2E7:
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 656) + 720i64) + 200i64) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 504) & 0x7E)) + 1760i64) ^ v11 ^ 0x5C2E00BE;
                goto LABEL_1037;
            case 0x2E8:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 96);
                v25 = FuckEnc::CacheRead<_QWORD>(v4 + 688);
                v26 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 1760i64) & 0x50;
            LABEL_753:
                Calls::FastCall(v4 + 1296, &v29, v5, FuckEnc::CacheRead<_QWORD>(v25 + 8 * v26));
                goto LABEL_1038;
            case 0x2E9:
                Calls::FastCall(v4 + 600, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 856) + 8i64 * (unsigned __int8)(-67 * v5)));
                v29 = ~v29;
                goto LABEL_1038;
            case 0x2EA:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 952);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 744) + 920i64) + 872i64, &v29, v5, v4);
                goto LABEL_1038;
            case 0x2EB:
                v29 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 680) + 1160i64) ^ v11;
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 776);
                v23 = v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 656) + 120i64);
                goto LABEL_1036;
            case 0x2EC:
                v29 = v11 + 1126785512;
                v29 = __ROL4__(v11 + 1126785512, ((FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1008) + 1760i64) ^ 0x41) - 22) ^ 0x45);
                goto LABEL_1038;
            case 0x2ED:
                v29 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 392) + 848i64) | 5);
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 472i64) + 1120i64);
                goto LABEL_1037;
            case 0x2EE:
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 768i64) + 800i64) + 1840i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 30)) + 1840i64) + 8i64 * (unsigned __int8)(2 * v5)) + 1592i64) ^ v11;
                goto LABEL_1037;
            case 0x2EF:
                v29 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 176));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * ((unsigned __int8)(-127 * (FuckEnc::CacheRead<_DWORD>(v4 + 1120) - 91)) & 0xC5)) + 592i64);
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1072) + 504i64) ^ v29;
                goto LABEL_1037;
            case 0x2F0:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 136) ^ v11;
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1312) + 1728i64) + 520i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 296);
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(v10 + 176);
                goto LABEL_1037;
            case 0x2F1:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 464);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1728) + 240i64) + 4i64 * (((unsigned __int8)v5 ^ 0xEB) & 0x34)) + 1;
                v29 = __ROR4__(v29, FuckEnc::CacheRead<_DWORD>(v4 + 1816));
                goto LABEL_1038;
            case 0x2F2:
                v29 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1248) + 464i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 64);
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1752) + 288i64) + 8i64 * (unsigned __int8)(-93 * v5)) + 464i64);
                goto LABEL_1037;
            case 0x2F3:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 792) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1376);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 568) + 4i64 * ((unsigned __int8)(FuckEnc::CacheRead<_DWORD>(v10 + 280) ^ FuckEnc::CacheRead<_DWORD>(v4 + 792)) ^ 0xACu));
                goto LABEL_1038;
            case 0x2F4:
                v29 = (unsigned int)0x112254F5 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 352) + 1448i64) ^ v11;
                v29 ^= (FuckEnc::CacheRead<_DWORD>(v4 + 832) ^ v5) >> 5;
                goto LABEL_1038;
            case 0x2F5:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1072) + 1952i64, &v29, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 472);
                v29 += FuckEnc::CacheRead<_DWORD>(v10 + 504);
                goto LABEL_1038;
            case 0x2F6:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 448) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1224) + 4i64 * (~(unsigned __int8)((unsigned int)~FuckEnc::CacheRead<_DWORD>(v4 + 176) >> 4) & 0x2A));
                goto LABEL_1038;
            case 0x2F7:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 1424i64);
                v13 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 144) + 288i64) + 8i64 * (unsigned __int8)(-32 * FuckEnc::CacheRead<_BYTE>(v4 + 752))) + 1760i64));
                goto LABEL_1037;
            case 0x2F8:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1904);
                Calls::FastCall(v4 + 1088, &v29, v5, v10);
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 1488i64) ^ 0x6BCC3A26;
                goto LABEL_1038;
            case 0x2F9:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1376) + 376i64) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 1776i64) & 0x47), &v29, v5, v4);
                goto LABEL_1038;
            case 0x2FA:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 608) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1344) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 1816i64) & 0x4A)) + 120i64);
                goto LABEL_1038;
            case 0x2FB:
                v29 = v11 + ~FuckEnc::CacheRead<_DWORD>(v4 + 936);
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 1176i64) + v29 + 1;
                goto LABEL_1037;
            case 0x2FC:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 200) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 424) & 0xE8)) + 720i64) + 1456i64);
                v13 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 176) * (FuckEnc::CacheRead<_DWORD>(v10 + 1448) >> 1);
                goto LABEL_1037;
            case 0x2FD:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 520);
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 176);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 360) + 8i64 * (unsigned __int8)__ROR4__(v5, 6)) + 1736i64);
                goto LABEL_1038;
            case 0x2FE:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1736);
                Calls::FastCall(v4 + 104, &v29, v5, v4);
                v29 += ~FuckEnc::CacheRead<_DWORD>(v4 + 1776);
                goto LABEL_1038;
            case 0x2FF:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1704) + 1328i64) + 8i64 * ((unsigned __int8)v5 ^ 0x8Fu), &v29, v5, v4);
                v29 += 734467806;
                goto LABEL_1038;
            case 0x300:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 1936i64) + 376i64) + 8i64 * (v5 & 0x25), &v29, v5, v4);
                goto LABEL_1038;
            case 0x301:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 24);
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1264) - FuckEnc::CacheRead<_DWORD>(v4 + 776);
                v13 = __ROL4__(v29, ~FuckEnc::CacheRead<_BYTE>(v4 + 120));
                goto LABEL_1037;
            case 0x302:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1800) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 120) ^ 0x69u), &v29, v5, v4);
                goto LABEL_1038;
            case 0x303:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 448) * v5;
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1248) + 1592i64) - FuckEnc::CacheRead<_DWORD>(v4 + 424);
                goto LABEL_1037;
            case 0x304:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 832);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1664) + 1600i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 1)) + 1456i64);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 744) + 1264i64);
                goto LABEL_1038;
            case 0x305:
                Calls::FastCall(v4 + 880, &v29, v5, v4);
                v29 += (unsigned int)(FuckEnc::CacheRead<_DWORD>(v4 + 176) + 663364743) >> 19;
                goto LABEL_1038;
            case 0x306:
                v29 = v11 + 1822380676 * ~FuckEnc::CacheRead<_DWORD>(v4 + 1408);
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 416) + 64i64) + 1504i64) * v5;
                goto LABEL_1038;
            case 0x307:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1816);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 296);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v10 + 280);
                Calls::FastCall(v4 + 1528, &v29, v5, v4);
                goto LABEL_1038;
            case 0x308:
                Calls::FastCall(v4 + 1632, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1336) + 200i64) + 8i64 * (v5 & 0x4F)));
                goto LABEL_1038;
            case 0x309:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1432) - (FuckEnc::CacheRead<_DWORD>(v4 + 848) | 3) - FuckEnc::CacheRead<_DWORD>(v4 + 1760) + 1;
                goto LABEL_1038;
            case 0x30A:
                Calls::FastCall(v4 + 1848, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1512) + 8i64 * (unsigned __int8)__ROR4__(v5, 29)) + 1312i64) + 984i64));
                goto LABEL_1038;
            case 0x30B:
                v29 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1904) + 776i64) ^ v11;
                v29 += ~(FuckEnc::CacheRead<_DWORD>(v4 + 608) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1072) + 1120i64));
                goto LABEL_1038;
            case 0x30C:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 8i64 * ((unsigned __int8)(114 * v5) & 0x98)) + 1328i64) + 8i64 * ((unsigned __int8)__ROL4__(v5, 5) & 0xD2), &v29, v5, v4);
                goto LABEL_1038;
            case 0x30D:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 112i64);
                Calls::FastCall(v4 + 1856, &v29, v5, v10);
                v29 = v29 - 339537615 + FuckEnc::CacheRead<_DWORD>(v4 + 1736);
                goto LABEL_1038;
            case 0x30E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1424);
                v29 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 720) + 1816i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 352) + 824i64) + 4i64 * (unsigned __int8)(-14 * v5)));
                goto LABEL_1038;
            case 0x30F:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 1408) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 680);
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 656) + 688i64) + 8i64 * ((-14 * (_BYTE)v5) & 0x3A)) + 752i64);
                goto LABEL_1037;
            case 0x310:
                v29 = v5 ^ v11 ^ 0xA8F59B78;
                v29 += (FuckEnc::CacheRead<_DWORD>(v4 + 1816) + 1) << 29;
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 176);
                goto LABEL_1038;
            case 0x311:
                v29 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * ((unsigned __int8)v5 ^ 0x92u)) + 1928i64) + 8i64 * (v5 & 7)) + 1080i64) ^ v11;
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 192) - 1970502629;
                goto LABEL_1038;
            case 0x312:
                v29 = v11 + 2010251073;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1096);
                v29 = __ROL4__(v11 + 2010251073, FuckEnc::CacheRead<_BYTE>(v10 + 1776) - 82);
                v13 = v29 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 1120i64);
                goto LABEL_1037;
            case 0x313:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 744);
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1736);
                v13 = v5 ^ (v29 - 46334257 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 88) + 1152i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 8)));
                goto LABEL_1037;
            case 0x314:
                v29 = (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 832)) ^ 0x710382C5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1336);
                v13 = v29 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 1176) + FuckEnc::CacheRead<_DWORD>(v4 + 936) * v5);
                goto LABEL_1037;
            case 0x315:
                v29 = v11 + 571132941;
                v29 = (v11 + 571132941) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 896) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 352) + 1752i64) + 1224i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 24)), 28));
                goto LABEL_1038;
            case 0x316:
                v29 = ~(_DWORD)v11;
                v29 = ~(~(_DWORD)v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1264));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 656);
                v29 += FuckEnc::CacheRead<_DWORD>(v10 + 424) + 1;
                goto LABEL_1038;
            case 0x317:
                v29 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 176) ^ v5);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1704);
                v29 = __ROL4__(v29, FuckEnc::CacheRead<_DWORD>(v10 + 464));
                v29 = __ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 1176) ^ v29, 49);
                goto LABEL_1038;
            case 0x318:
                v29 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 192));
                v29 ^= v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 464);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 984);
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(v10 + 1408);
                goto LABEL_1037;
            case 0x319:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1456);
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 64) + 752i64) * ~FuckEnc::CacheRead<_DWORD>(v10 + 1120) - 479994717;
                goto LABEL_1038;
            case 0x31A:
                v29 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 1448i64));
                v13 = __ROL4__(v29, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 240) + 4i64 * (__ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 824) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 936) & 0x87)), 24) & 0x84)));
                goto LABEL_1037;
            case 0x31B:
                v29 = v11 + 771800781 + FuckEnc::CacheRead<_DWORD>(v4 + 832);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 920) + 1280i64);
                v23 = v29 ^ ~FuckEnc::CacheRead<_DWORD>(v10 + 1080);
                goto LABEL_1036;
            case 0x31C:
                v29 = v11 ^ (1111544063 * FuckEnc::CacheRead<_DWORD>(v4 + 1736));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1840) + 8i64 * (unsigned __int8)(18 * FuckEnc::CacheRead<_DWORD>(v4 + 776))) + 1312i64) + 1096i64);
                v29 += FuckEnc::CacheRead<_DWORD>(v10 + 1176);
                goto LABEL_1038;
            case 0x31D:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 504) - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1608);
                v29 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 688) + 8i64 * (unsigned __int8)__ROR4__(v5, 25)) + 1176i64);
                goto LABEL_1038;
            case 0x31E:
                Calls::FastCall(v4 + 872, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 288i64) + 8i64 * ((unsigned __int8)~(_BYTE)v5 & 0xB2)) + 1672i64) + 8i64 * ((unsigned __int8)(73 * v5) & 0xC8)));
                goto LABEL_1038;
            case 0x31F:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 448);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 8i64 * ((unsigned __int8)__ROL4__(v5 + FuckEnc::CacheRead<_DWORD>(v4 + 96), 14) & 0x8B)) + 120i64);
                goto LABEL_1038;
            case 0x320:
                v29 = (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1776)) ^ 0x80C30131;
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 448);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 472);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1832);
                goto LABEL_1038;
            case 0x321:
                v29 = v11 ^ 0xD1FF41E2;
                v29 = (v11 ^ 0xD1FF41E2) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 448i64) - FuckEnc::CacheRead<_DWORD>(v4 + 1504);
                v13 = FuckEnc::CacheRead<_DWORD>(v4 + 1760) ^ v29;
                goto LABEL_1037;
            case 0x322:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 1448) ^ v11;
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 1160) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 8i64 * (((unsigned __int8)v5 ^ 0xAB) & 0xD7)) + 1280i64) + 1504i64);
                goto LABEL_1038;
            case 0x323:
                v13 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1920) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1184) + 8i64 * ((unsigned __int8)(24 * FuckEnc::CacheRead<_DWORD>(v4 + 1816)) & 0xD6)) + 824i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 11));
                goto LABEL_1037;
            case 0x324:
                v29 = v11 ^ 0xCA446A27;
                v29 = (v11 ^ 0xCA446A27) + 1023332066 * FuckEnc::CacheRead<_DWORD>(v4 + 1080);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 392);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 392) + 752i64);
                goto LABEL_1038;
            case 0x325:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1672) + 8i64 * (unsigned __int8)__ROR4__(v5, 31)) + 1272i64) + 8i64 * ((unsigned __int8)v5 ^ 0x7Bu)) + 1728i64);
                v13 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1400) + 96i64));
                goto LABEL_1037;
            case 0x326:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1176);
                Calls::FastCall(v4 + 208, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 1512i64) + 8i64 * (unsigned __int8)(-118 * v5)));
                goto LABEL_1038;
            case 0x327:
                v29 = __ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 1160) ^ v11, 249);
                v29 ^= (FuckEnc::CacheRead<_DWORD>(v4 + 1120) & 0xFFFFFFE0) + 870503592 * FuckEnc::CacheRead<_DWORD>(v4 + 1592);
                goto LABEL_1038;
            case 0x328:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 800i64) + 624i64);
                Calls::FastCall(v4 + 968, &v29, v5, v10);
                v29 -= 1090310399;
                goto LABEL_1038;
            case 0x329:
                v29 = v5 ^ v11;
                v29 = (v5 ^ v11) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1704) + 1816i64);
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 8i64 * (unsigned __int8)__ROL4__(v5, 30)) + 776i64);
                goto LABEL_1037;
            case 0x32A:
                v29 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 136) ^ 0x31EE3091) + 566279276;
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(v4 + 608) + 2088901090;
                goto LABEL_1037;
            case 0x32B:
                Calls::FastCall(v4 + 1304, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 352) + 1312i64) + 472i64) + 88i64) + 1312i64));
                goto LABEL_1038;
            case 0x32C:
                v29 = v5 ^ v11 ^ 0x49C168D9;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 144);
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 32) + 8i64 * (v5 & 0x1C)) + 64i64) + 1160i64);
                goto LABEL_1037;
            case 0x32D:
                Calls::FastCall(v4 + 208, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 1672i64) + 8i64 * (((unsigned __int8)v5 ^ 0xB5) & 0xEB)) + 328i64) + 1704i64));
                goto LABEL_1038;
            case 0x32E:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 1504) ^ v11;
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 624i64) + 504i64);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1920) * v5;
                goto LABEL_1038;
            case 0x32F:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 1016i64) + 8i64 * (unsigned __int8)(14 * v5)) + 528i64) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 280) ^ 0xF7) & 0x8F)) + 768i64);
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 1776);
                goto LABEL_1038;
            case 0x330:
                v29 = __ROR4__(v11, v5);
                Calls::FastCall(v4 + 272, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 32) + 8i64 * (unsigned __int8)(95 * v5)));
                goto LABEL_1038;
            case 0x331:
                v29 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 688) + 8i64 * ((unsigned __int8)v5 & 0xE8)) + 800i64) + 504i64) ^ v11;
                v13 = v29 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 744) + 176i64) ^ v5);
                goto LABEL_1037;
            case 0x332:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 64);
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1432);
                v29 = ~(v29 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 520) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 920) + 1760i64)));
                goto LABEL_1038;
            case 0x333:
                v29 = (v11 - FuckEnc::CacheRead<_DWORD>(v4 + 792)) ^ 0xA80AB40E;
                v13 = __ROL4__(v29, FuckEnc::CacheRead<_BYTE>(v4 + 832) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 504) >> 17) ^ 0xAA);
                goto LABEL_1037;
            case 0x334:
                v29 = v11 ^ 0xC3018944;
                v29 = (v11 ^ 0xC3018944) - 265667341 * FuckEnc::CacheRead<_DWORD>(v4 + 1736);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1480) + 4i64 * (~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1760) & 0x55));
                goto LABEL_1038;
            case 0x335:
                Calls::FastCall(v4 + 1584, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 856) + 8i64 * ((-58 * (_BYTE)v5) & 0x5C)));
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 520);
                goto LABEL_1038;
            case 0x336:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 472);
                v13 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 856) + 8i64 * (unsigned __int8)__ROL4__(v5, 7)) + 768i64) + 1016i64) + 8i64 * ((unsigned __int8)v5 & 0xAE)) + 136i64);
                goto LABEL_1037;
            case 0x337:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1312);
                v27 = (unsigned __int8)(-47 * ~FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v10 + 568) + 4i64 * ((unsigned __int8)__ROL4__(v5, 20) & 0x80)));
                v28 = FuckEnc::CacheRead<_QWORD>(v4 + 264);
            LABEL_833:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v28 + 168) + 4 * v27);
                goto LABEL_1038;
            case 0x338:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 1920) ^ v11;
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 520);
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 360) + 8i64 * (unsigned __int8)(36 * v5)) + 1008i64) + 1408i64) ^ v29;
                goto LABEL_1037;
            case 0x339:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 120) & 0xAE)) + 360i64) + 8i64 * ((unsigned __int8)v5 & 0xFD)) + 720i64);
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 568) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1736) & 0x42)) ^ v11;
                goto LABEL_1037;
            case 0x33A:
                v29 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1728) + 1224i64) + 4i64 * (((unsigned __int8)v5 ^ 0xF7) & 0xAB)) & 0xFFFFFFF3);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 680);
                v29 = __ROL4__(v29, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 896) + 4i64 * (unsigned __int8)__ROL4__(v5, 10)));
                goto LABEL_1038;
            case 0x33B:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 264) + 1008i64) + 944i64) + 8i64 * ((unsigned __int8)v5 & 0x95)) + 144i64);
                v13 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 944) + 8i64 * ((unsigned __int8)~(_BYTE)v5 & 0xC0)) + 1120i64);
                goto LABEL_1037;
            case 0x33C:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1640) + 1048i64) + 920i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 1328) + 8i64 * (v5 & 0x15), &v29, v5, v4);
                goto LABEL_1038;
            case 0x33D:
                v29 = v5 ^ (v11 + 1608144419);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1008);
                Calls::FastCall(v10 + 760, &v29, v5, v4);
                goto LABEL_1038;
            case 0x33E:
                v29 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 856) + 8i64 * ((unsigned __int8)__ROR4__(v5, 11) & 0x97)) + 1576i64) + 1664i64) + 656i64) + 1176i64) + 683644661);
                goto LABEL_1038;
            case 0x33F:
                Calls::FastCall(v4 + 1200, &v29, v5, v4);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 984i64) + 1160i64);
                goto LABEL_1038;
            case 0x340:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * (unsigned __int8)(-95 * FuckEnc::CacheRead<_DWORD>(v4 + 96))) + 1664i64) + 1888i64, &v29, v5, v4);
                goto LABEL_1038;
            case 0x341:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1336) + 1784i64) + 200i64) + 8i64 * (unsigned __int8)(15 * v5)) + 656i64);
                v13 = v5 + v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1904) + 464i64);
                goto LABEL_1037;
            case 0x342:
                v13 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 176) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 856i64) + 8i64 * ((unsigned __int8)v5 & 0x81)) + 832i64) ^ 0x33D8B1A8);
                goto LABEL_1037;
            case 0x343:
                v29 = v11 - 482545969 + FuckEnc::CacheRead<_DWORD>(v4 + 1592);
                Calls::FastCall(v4 + 1192, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1016) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1592) ^ 0xFC) & 0x83)));
                goto LABEL_1038;
            case 0x344:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1400) + 376i64) + 8i64 * ((unsigned __int8)(-29 * v5) & 0xA9), &v29, v5, v4);
                v29 ^= 0xD1704CBu;
                goto LABEL_1038;
            case 0x345:
                v29 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 1736) & 0xFFFFFFEA;
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 192);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 352);
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 568) + 4i64 * ((unsigned __int8)v5 & 0xBA));
                goto LABEL_1038;
            case 0x346:
                v29 = v11 + 1036394635;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1664) + 1752i64);
                v13 = v11 + 1036394635 + FuckEnc::CacheRead<_DWORD>(v10 + 1432) + (FuckEnc::CacheRead<_DWORD>(v4 + 1776) | 0x18);
                goto LABEL_1037;
            case 0x347:
                v29 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 920) + 200i64) + 8i64 * (((unsigned __int8)v5 ^ 2) & 0x47)) + 176i64) ^ v11;
                Calls::FastCall(v4 + 536, &v29, v5, v4);
                goto LABEL_1038;
            case 0x348:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 264);
                Calls::FastCall(v10 + 1960, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * (((unsigned __int8)v5 ^ 0xFB) & 0x84)));
                goto LABEL_1038;
            case 0x349:
                v29 = v11 ^ 0xF647AF81;
                v29 = __ROR4__(v11 ^ 0xF647AF81, FuckEnc::CacheRead<_DWORD>(v4 + 120) ^ 0x32);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1608);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1920) | 4;
                goto LABEL_1038;
            case 0x34A:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1672) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 328i64) + 240i64) + 4i64 * ((unsigned __int8)v5 & 0xC7)) ^ 0xFB) & 0x1D)) + 1936i64);
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 848);
                goto LABEL_1038;
            case 0x34B:
                v18 = (unsigned __int8)v5 & 0xB9;
                v19 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 352) + 288i64) + 8i64 * ((unsigned __int8)__ROL4__(v5, 13) & 0xDD));
            LABEL_854:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v19 + 16) + 8 * v18, &v29, v5, v4);
                goto LABEL_1038;
            case 0x34C:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 296);
                v29 = v11 + v5 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 656) + 848i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1344) + 8i64 * (v5 & 0x41)) + 848i64);
                goto LABEL_1038;
            case 0x34D:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 592);
                v29 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 1432));
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 504) + 1363352431;
                v13 = v29 + (FuckEnc::CacheRead<_DWORD>(v4 + 136) ^ v5);
                goto LABEL_1037;
            case 0x34E:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 832);
                v13 = v29 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 360) + 8i64 * ((unsigned __int8)__ROR4__(v5, 24) & 0xEB)) + 1512i64) + 8i64 * ((-29 * (_BYTE)v5) & 0x69)) + 1808i64) + 4i64 * (((unsigned __int8)v5 ^ 0x97) & 0xED));
                goto LABEL_1037;
            case 0x34F:
                v29 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 1920);
                v29 = __ROL4__(v29, ~FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1072) + 1424i64) + 280i64));
                goto LABEL_1038;
            case 0x350:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 64) + 1504i64);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 352) + 936i64);
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(v4 + 1816);
                goto LABEL_1037;
            case 0x351:
                v29 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 96));
                Calls::FastCall(v4 + 1200, &v29, v5, v4);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 656) + 1760i64);
                goto LABEL_1038;
            case 0x352:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 984) + 136i64);
                v29 += ~FuckEnc::CacheRead<_DWORD>(v4 + 136);
                v29 = v29 - FuckEnc::CacheRead<_DWORD>(v4 + 608) + 1871623858;
                goto LABEL_1038;
            case 0x353:
                v29 = __ROL4__(v11, 255);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 984) + 1344i64) + 8i64 * ((unsigned __int8)v5 & 0x94)) + 1048i64);
                v13 = v29 - (FuckEnc::CacheRead<_DWORD>(v10 + 848) ^ 0xD29959D8);
                goto LABEL_1037;
            case 0x354:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 776);
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1664) + 952i64) + 1704i64) + 1480i64) + 4i64 * ((unsigned __int8)v5 & 0x84)) ^ v29;
                goto LABEL_1037;
            case 0x355:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 832);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 744);
                v29 += FuckEnc::CacheRead<_DWORD>(v10 + 936);
                v13 = v29 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 1592i64);
                goto LABEL_1037;
            case 0x356:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 448) - 516638049;
                v29 += 1023332006 * ((FuckEnc::CacheRead<_DWORD>(v4 + 1736) | 0x10) + 1) + 1542635970;
                goto LABEL_1038;
            case 0x357:
                v29 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 720) + 1048i64) + 592i64) + 792i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1456);
                v29 += FuckEnc::CacheRead<_DWORD>(v10 + 848);
                goto LABEL_1038;
            case 0x358:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1120);
                v29 = __ROL4__(v29, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1008) + 1832i64) + 49);
                v13 = __ROR4__(v29, ~FuckEnc::CacheRead<_BYTE>(v4 + 1432));
                goto LABEL_1037;
            case 0x359:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 280);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 920);
                v29 += FuckEnc::CacheRead<_DWORD>(v10 + 176);
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 1120i64) ^ v5;
                goto LABEL_1038;
            case 0x35A:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 112);
                v29 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 1736) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1920) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 824) + 4i64 * (unsigned __int8)__ROL4__(v5, 14)));
                goto LABEL_1038;
            case 0x35B:
                Calls::FastCall(v4 + 1888, &v29, v5, v4);
                v29 = v29 - 1010626255 + FuckEnc::CacheRead<_DWORD>(v4 + 1920);
                goto LABEL_1038;
            case 0x35C:
                v29 = v11 + ~(-1629370980 * FuckEnc::CacheRead<_DWORD>(v4 + 792));
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1376) + 416i64) + 680i64) + 1504i64);
                goto LABEL_1038;
            case 0x35D:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1072) + 528i64) + 8i64 * ((unsigned __int8)__ROR4__(v5, 27) & 0xBB)) + 816i64) + 8i64 * (unsigned __int8)(125 * v5), &v29, v5, v4);
                goto LABEL_1038;
            case 0x35E:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1736);
                Calls::FastCall(v4 + 1232, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1512) + 8i64 * (((unsigned __int8)v5 ^ 0x40) & 0xE3)));
                v29 ^= 0xF108D0FF;
                goto LABEL_1038;
            case 0x35F:
                v29 = v11 ^ (v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 856i64) + 8i64 * ((unsigned __int8)v5 & 0xE7)) + 424i64));
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 1080);
                goto LABEL_1038;
            case 0x360:
                v29 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 280) + 1912038477);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1456);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 824) + 4i64 * ((unsigned __int8)__ROL4__(v5, 26) & 0x81)) + 824856653;
                goto LABEL_1038;
            case 0x361:
                v29 = v11 + v5;
                v29 = (v11 + v5) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 96) | 0x1A);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 1480i64) + 4i64 * (((unsigned __int8)v5 ^ 0xF7) & 0x58));
                goto LABEL_1038;
            case 0x362:
                v29 = v11 ^ 0xE324C76F;
                v13 = (v11 ^ 0xE324C76F) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 1184i64) + 8i64 * (unsigned __int8)(74 * v5)) + 392i64) + 136i64);
                goto LABEL_1037;
            case 0x363:
                v29 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 464i64) ^ v11;
                v29 += 1625394310 * (FuckEnc::CacheRead<_DWORD>(v4 + 1408) ^ v5) - FuckEnc::CacheRead<_DWORD>(v4 + 504);
                goto LABEL_1038;
            case 0x364:
                v29 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1248) + 1152i64) + 4i64 * ((unsigned __int8)v5 ^ 0x18u)) << 18);
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 464) ^ 0x1469DFB9;
                goto LABEL_1038;
            case 0x365:
                v29 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1736) >> 21) ^ 0x7CD3317D;
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 568) + 4i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 752) ^ 0x5Eu));
                goto LABEL_1038;
            case 0x366:
                v29 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 656i64) + 504i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 264);
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1152) + 4i64 * ((-10 * (_BYTE)v5) & 0x1A)) ^ v29;
                goto LABEL_1037;
            case 0x367:
                v29 = v11 ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 136));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1664);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1184) + 8i64 * (unsigned __int8)__ROL4__(v5, 28)) + 1080i64);
                goto LABEL_1038;
            case 0x368:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1264);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 64) + 1784i64) + 1400i64);
                v29 ^= ~FuckEnc::CacheRead<_DWORD>(v10 + 192);
                goto LABEL_1038;
            case 0x369:
                v29 = __ROR4__(v11, 203);
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 8i64 * (unsigned __int8)(55 * v5)) + 1552i64) + 4i64 * ((unsigned __int8)__ROL4__(v5, 5) & 0xE4));
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(v4 + 1832);
                goto LABEL_1037;
            case 0x36A:
                v29 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 1080);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1904) + 224i64, &v29, v5, v4);
                goto LABEL_1038;
            case 0x36B:
                Calls::FastCall(v4 + 1536, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 200) + 8i64 * (v5 & 0x5A)));
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 136);
                goto LABEL_1038;
            case 0x36C:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 264) + 1456i64) + 848i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1704);
                v29 = __ROR4__(v29, (v5 + FuckEnc::CacheRead<_BYTE>(v10 + 608)) & 0xFC);
                goto LABEL_1038;
            case 0x36D:
                v29 = v11 - 952303921 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 1504i64);
                v29 = (v29 + 917703590 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 280i64)) ^ 0x4AD63695;
                goto LABEL_1038;
            case 0x36E:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 8i64 * (unsigned __int8)__ROR4__(v5, 10)) + 328i64) + 1208i64, &v29, v5, v4);
                goto LABEL_1038;
            case 0x36F:
                Calls::FastCall(v4 + 872, &v29, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1664);
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 392) + 1920i64);
                goto LABEL_1038;
            case 0x370:
                v29 = v11 ^ 0xAAD3432B;
                v29 = (v11 ^ 0xAAD3432B) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 1664i64) + 392i64) + 832i64);
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(v4 + 136);
                goto LABEL_1037;
            case 0x371:
                v29 = v5 ^ v11;
                v29 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 984) + 848i64) ^ v5 ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 592) + 416i64);
                v13 = __ROL4__(v29, FuckEnc::CacheRead<_DWORD>(v10 + 792));
                goto LABEL_1037;
            case 0x372:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 392i64);
                v13 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10) + 1344i64) + 8i64 * ((unsigned __int8)v5 ^ 0xF2u)) + 1272i64) + 8i64 * ((unsigned __int8)v5 ^ 0xCDu)) + 1264i64));
                goto LABEL_1037;
            case 0x373:
                v29 = v11 - 1023309500;
                v29 = v11 - 1023309500 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1640) + 1592i64);
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 896i64) + 4i64 * (__ROR4__(v5, 17) & 0x5D));
                goto LABEL_1038;
            case 0x374:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 688) + 8i64 * (v5 & 0x50)) + 1016i64) + 8i64 * (v5 & 0x10)) + 1248i64);
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1272) + 8i64 * (((unsigned __int8)v5 ^ 0x10) & 0x71)) + 1448i64) ^ v11;
                goto LABEL_1037;
            case 0x375:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1312) + 64i64) + 1672i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 2)) + 776i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 768);
                v13 = __ROR4__(v29, FuckEnc::CacheRead<_DWORD>(v10 + 1504));
                goto LABEL_1037;
            case 0x376:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 8i64 * (unsigned __int8)(-51 * v5)) + 1048i64) + 1576i64);
                v29 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 120));
                v13 = v29 - (FuckEnc::CacheRead<_DWORD>(v4 + 176) ^ v5);
                goto LABEL_1037;
            case 0x377:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1312) + 328i64) + 392i64) + 1600i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 12)) + 1456i64) + 592i64);
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 1832);
                goto LABEL_1038;
            case 0x378:
                v13 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 680) + 1408i64) * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 624i64) + 624i64) + 1776i64));
                goto LABEL_1037;
            case 0x379:
                v29 = __ROR4__(v11, 38 - FuckEnc::CacheRead<_DWORD>(v4 + 424));
                v13 = v29 - (FuckEnc::CacheRead<_DWORD>(v4 + 504) >> 19);
                goto LABEL_1037;
            case 0x37A:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 392) + 88i64) + 1160i64);
                v29 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 496) + 4i64 * (unsigned __int8)(-94 * FuckEnc::CacheRead<_BYTE>(v4 + 176)));
                goto LABEL_1038;
            case 0x37B:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 1264) ^ v11;
                v13 = __ROR4__(v29, ~FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1480) + 4i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1448) - 10) & 0x13)));
                goto LABEL_1037;
            case 0x37C:
                v29 = v11 - 490839269;
                v29 = v11 - 490839269 + (FuckEnc::CacheRead<_DWORD>(v4 + 136) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1488) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 720) + 504i64)));
                goto LABEL_1038;
            case 0x37D:
                v29 = v11 ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 96) + FuckEnc::CacheRead<_DWORD>(v4 + 848));
                v13 = v29 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1008) + 1592i64);
                goto LABEL_1037;
            case 0x37E:
                v29 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 136) >> 26);
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 328i64) + 624i64) + 1128i64) + 1816i64);
                goto LABEL_1038;
            case 0x37F:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 16) + 8i64 * ((unsigned __int8)(22 * FuckEnc::CacheRead<_BYTE>(v4 + 1832)) & 0xDB), &v29, v5, v4);
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 1920);
                goto LABEL_1038;
            case 0x380:
                v29 = ~(v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1336) + 1184i64) + 8i64 * ((unsigned __int8)v5 & 0xE5)) + 1840i64) + 8i64 * (unsigned __int8)v5) + 1704i64) + 1776i64));
                goto LABEL_1038;
            case 0x381:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1008) + 312i64, &v29, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 592);
                v29 -= FuckEnc::CacheRead<_DWORD>(v10 + 464);
                goto LABEL_1038;
            case 0x382:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1176);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1816);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 920) + 744i64);
                v29 -= FuckEnc::CacheRead<_DWORD>(v10 + 1776);
                goto LABEL_1038;
            case 0x383:
                v29 = v11 + ~(FuckEnc::CacheRead<_DWORD>(v4 + 1488) & 0xFFFFFFFA);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1336);
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 800) + 504i64);
                goto LABEL_1038;
            case 0x384:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1920);
                v29 += (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * ((unsigned __int8)v5 ^ 0x3Fu)) + 520i64) << 19) + 394878798;
                goto LABEL_1038;
            case 0x385:
                Calls::FastCall(v4 + 600, &v29, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1072);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1640) + 176i64);
                goto LABEL_1038;
            case 0x386:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 328);
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1072) + 688i64) + 8i64 * ((unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v10 + 848), 31) & 0xA9)) + 464i64) ^ v11;
                goto LABEL_1037;
            case 0x387:
                v29 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 416) + 680i64) + 936i64) * (v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 424) ^ FuckEnc::CacheRead<_DWORD>(v4 + 504)));
                goto LABEL_1038;
            case 0x388:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 448) ^ v11;
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 504) & 0xB8)) + 1224i64) + 4i64 * (v5 & 0x42));
                v13 = FuckEnc::CacheRead<_DWORD>(v4 + 464) ^ v29;
                goto LABEL_1037;
            case 0x389:
                v29 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 352) + 1152i64) + 4i64 * (unsigned __int8)(-36 * v5)) ^ v11;
                Calls::FastCall(v4 + 1200, &v29, v5, v4);
                goto LABEL_1038;
            case 0x38A:
                v29 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 96));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 296);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 688) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v10 + 1776) & 0x7A)) + 176i64) + 1104546595;
                goto LABEL_1038;
            case 0x38B:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 280) ^ v11;
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1808) + 4i64 * ((unsigned __int8)__ROL4__(-999995039 * ~FuckEnc::CacheRead<_DWORD>(v4 + 464), 10) & 0xE1));
                goto LABEL_1037;
            case 0x38C:
                Calls::FastCall(v4 + 1088, &v29, v5, v4);
                v29 ^= 0xE614FFC7;
                v13 = v29 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 64) + 1760i64);
                goto LABEL_1037;
            case 0x38D:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1816) * ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1400) + 1600i64) + 8i64 * ((unsigned __int8)v5 & 0x8A)) + 936i64);
                goto LABEL_1038;
            case 0x38E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 984);
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1120) - 876956364;
                v29 = __ROR4__(v29, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 528) + 8i64 * (unsigned __int8)__ROR4__(v5, 2)) + 1152i64) + 4i64 * (v5 & 0x2D)));
                goto LABEL_1038;
            case 0x38F:
                v29 = ~(_DWORD)v11;
                v29 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1512) + 8i64 * (unsigned __int8)(-100 * v5)) + 528i64) + 8i64 * (__ROL4__(v5, 15) & 0x22)) + 120i64) + 1382224240 - v11;
                goto LABEL_1038;
            case 0x390:
                v13 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 8i64 * (unsigned __int8)(12 * v5)) + 1160i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 528) + 8i64 * (unsigned __int8)__ROR4__(v5, 19)) + 1408i64));
                goto LABEL_1037;
            case 0x391:
                v29 = ~(_DWORD)v11;
                v29 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 744) + 1776i64) ^ ~(_DWORD)v11;
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1184) + 8i64 * (((unsigned __int8)v5 ^ 0xD2) & 0xFD)) + 1104i64);
                goto LABEL_1037;
            case 0x392:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 920i64);
                v29 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 1080i64) * v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 240) + 4i64 * (unsigned __int8)(121 * v5)));
                goto LABEL_1038;
            case 0x393:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 192);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1832) - 878067927;
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 1920i64);
                goto LABEL_1038;
            case 0x394:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1408);
                v29 = ~__ROL4__(v29, FuckEnc::CacheRead<_DWORD>(v4 + 936));
                v13 = v29 ^ ((FuckEnc::CacheRead<_DWORD>(v4 + 176) | 3) << 8);
                goto LABEL_1037;
            case 0x395:
                v29 = v11 - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1312);
                Calls::FastCall(v4 + 1528, &v29, v5, v10);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1080);
                goto LABEL_1038;
            case 0x396:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 608);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1640) + 1640i64);
                v29 = __ROR4__(v29, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1512) + 8i64 * (unsigned __int8)__ROL4__(v5, 29)) + 624i64) + 1264i64));
                goto LABEL_1038;
            case 0x397:
                v29 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 8i64 * ((-49 * FuckEnc::CacheRead<_BYTE>(v4 + 176)) & 0x6A)) + 112i64) + 1080i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 416);
                v29 += FuckEnc::CacheRead<_DWORD>(v10 + 752) + 1;
                goto LABEL_1038;
            case 0x398:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 264) + 920i64) + 1576i64);
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 120);
                v13 = v29 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 1776);
                goto LABEL_1037;
            case 0x399:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1264);
                v29 ^= (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1480) + 4i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 136) ^ 0xB7) & 0xE8)) >> 20) ^ 0x532A3AD4;
                goto LABEL_1038;
            case 0x39A:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1592);
                v22 = FuckEnc::CacheReadPlural<_QWORD>(v4 + 944);
            LABEL_934:
                Calls::FastCall(v22 + 968, &v29, v5, v4);
                goto LABEL_1038;
            case 0x39B:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1016) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1760) & 0x6A)) + 648i64, &v29, v5, v4);
                goto LABEL_1038;
            case 0x39C:
                Calls::FastCall(v4 + 648, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 752) & 0x32)));
                v29 = ~v29;
                goto LABEL_1038;
            case 0x39D:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 1272i64) + 8i64 * ((unsigned __int8)v5 & 0xAB)) + 1640i64) + 1928i64) + 8i64 * ((unsigned __int8)__ROL4__(v5, 18) & 0xE7)) + 1432i64);
                goto LABEL_1038;
            case 0x39E:
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 32) + 8i64 * (~(_BYTE)v5 & 0x11)) + 528i64) + 8i64 * (unsigned __int8)(93 * FuckEnc::CacheRead<_BYTE>(v4 + 776) - 127)) + 520i64) ^ v11;
                goto LABEL_1037;
            case 0x39F:
                v29 = ~(_DWORD)v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1248);
                Calls::FastCall(v10 + 1528, &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1096));
                goto LABEL_1038;
            case 0x3A0:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 464) + 690880703;
                v13 = v29 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1016) + 8i64 * (unsigned __int8)(58 * v5)) + 504i64) * v5;
                goto LABEL_1037;
            case 0x3A1:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 360) + 8i64 * (unsigned __int8)__ROR4__(v5, 9)) + 704i64) + 8i64 * ((unsigned __int8)v5 & 0x8F), &v29, v5, v4);
                goto LABEL_1038;
            case 0x3A2:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1832);
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1248) + 1840i64) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1592) ^ 0xF7) & 0x68)) + 464i64) ^ v29;
                goto LABEL_1037;
            case 0x3A3:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1376);
                v13 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1152) + 4i64 * (__ROR4__(v5, 10) & 0x4E)) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 8i64 * (((unsigned __int8)v5 ^ 0xEF) & 0xDA)) + 1776i64));
                goto LABEL_1037;
            case 0x3A4:
                v29 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 608) + 1579364095) ^ 0xE8B22C0F;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 1664i64) + 1400i64);
                v29 -= FuckEnc::CacheRead<_DWORD>(v10 + 464);
                goto LABEL_1038;
            case 0x3A5:
                Calls::FastCall(v4 + 1952, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1376) + 688i64) + 8i64 * ((unsigned __int8)v5 ^ 0x8Fu)));
                v29 += 2023830814;
                goto LABEL_1038;
            case 0x3A6:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 520);
                Calls::FastCall(v4 + 904, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * ((unsigned __int8)(-108 * FuckEnc::CacheRead<_BYTE>(v4 + 1120)) & 0xBA)));
                goto LABEL_1038;
            case 0x3A7:
                v29 = v11 - 22528417;
                v29 = __ROR4__(v11 - 22528417, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * (unsigned __int8)(-85 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1840) + 8i64 * ((unsigned __int8)~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1816) & 0xDF)) + 504i64))) + 1760i64));
                goto LABEL_1038;
            case 0x3A8:
                v13 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * ((unsigned __int8)v5 ^ 0xFEu)) + 1400i64) + 96i64) ^ (v5 * ~FuckEnc::CacheRead<_DWORD>(v4 + 1592)));
                goto LABEL_1037;
            case 0x3A9:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1432) - 281215281;
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 448i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 1832) ^ 0x37F62E3C);
                goto LABEL_1038;
            case 0x3AA:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 768i64) + 1128i64);
                v13 = v5 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 24) + 1512i64) + 8i64 * (v5 & 0x22)) + 1408i64) ^ v11;
                goto LABEL_1037;
            case 0x3AB:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 920) + 488i64) + 8i64 * ((unsigned __int8)v5 & 0xD7), &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 592));
                goto LABEL_1038;
            case 0x3AC:
                v29 = v11 - 1509030033;
                v29 = (v11 - 1509030033) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 24) + 1272i64) + 8i64 * ((unsigned __int8)v5 ^ 0xDAu)) + 120i64) - 628679571);
                goto LABEL_1038;
            case 0x3AD:
                v29 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1400) + 608i64) ^ v11;
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * ((unsigned __int8)v5 & 0xEC)) + 1512i64) + 8i64 * (unsigned __int8)(-48 * v5)) + 1120i64);
                goto LABEL_1038;
            case 0x3AE:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 168) + 4i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 1776i64) & 0xA6));
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * (((unsigned __int8)v5 ^ 0xFE) & 0xC1)) + 776i64) ^ v29;
                goto LABEL_1037;
            case 0x3AF:
                v29 = v11 ^ 0x12505B77;
                v29 = (v11 ^ 0x12505B77) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 8i64 * (((unsigned __int8)v5 ^ 0xFB) & 0xA6)) + 176i64);
                v13 = v29 - (FuckEnc::CacheRead<_DWORD>(v4 + 1592) ^ v5);
                goto LABEL_1037;
            case 0x3B0:
                v29 = v11 - 788534534;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 920) + 1784i64) + 1400i64) + 1784i64) + 1376i64);
                v29 = __ROR4__(v11 - 788534534, FuckEnc::CacheRead<_DWORD>(v10 + 192));
                goto LABEL_1038;
            case 0x3B1:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 768);
                v29 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 496) + 4i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(v10 + 176), 30) & 0xE9)));
                v13 = __ROR4__(v29, ~FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 1760i64));
                goto LABEL_1037;
            case 0x3B2:
                v29 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 8i64 * (v5 & 0x55)) + 1280i64) + 1408i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 296);
                v29 += FuckEnc::CacheRead<_DWORD>(v10 + 1448);
                goto LABEL_1038;
            case 0x3B3:
                v29 = v5 + v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 280) ^ ((v5 + (FuckEnc::CacheRead<_DWORD>(v4 + 176) ^ v5)) << 9) ^ 0xC31131A7);
                goto LABEL_1038;
            case 0x3B4:
                v29 = v5 ^ (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1776));
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 264) + 1256i64, &v29, v5, v4);
                goto LABEL_1038;
            case 0x3B5:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 64) + 416i64);
                v29 = v11 + v5 * FuckEnc::CacheRead<_DWORD>(v4 + 832) * (FuckEnc::CacheRead<_DWORD>(v10 + 504) + 1);
                goto LABEL_1038;
            case 0x3B6:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 120) ^ v11;
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 192);
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 1816) | 9;
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 1592);
                goto LABEL_1038;
            case 0x3B7:
                v13 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 448) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 496) + 4i64 * (unsigned __int8)(111 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 792i64))));
                goto LABEL_1037;
            case 0x3B8:
                Calls::FastCall(v4 + 1192, &v29, v5, v4);
                v29 ^= ~FuckEnc::CacheRead<_DWORD>(v4 + 1816);
                goto LABEL_1038;
            case 0x3B9:
                v29 = v11 ^ 0xED773E08;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 352);
                v29 = FuckEnc::CacheRead<_DWORD>(v10 + 1504) ^ v11 ^ 0xED773E08 ^ 0x815E249D;
                v13 = __ROL4__(v29, FuckEnc::CacheRead<_DWORD>(v4 + 1760));
                goto LABEL_1037;
            case 0x3BA:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1704) + 1848i64, &v29, v5, v4);
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 520);
                goto LABEL_1038;
            case 0x3BB:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 744) + 608i64);
                v13 = v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 8i64 * ((unsigned __int8)(83 * v5) & 0xA1)) + 1376i64) + 1008i64) + 832i64);
                goto LABEL_1037;
            case 0x3BC:
                Calls::FastCall(v4 + 312, &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 624));
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 776);
                goto LABEL_1038;
            case 0x3BD:
                Calls::FastCall(v4 + 872, &v29, v5, v4);
                v29 = __ROR4__(v29, v5 ^ ~FuckEnc::CacheRead<_BYTE>(v4 + 1120));
                goto LABEL_1038;
            case 0x3BE:
                v29 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1832));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 352);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1664) + 224i64, &v29, v5, v10);
                goto LABEL_1038;
            case 0x3BF:
                Calls::FastCall(v4 + 576, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 856) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 280) ^ 0xDF) & 0xA9)));
                v29 = __ROR4__(v29, v5);
                goto LABEL_1038;
            case 0x3C0:
                v29 = v11 - 1023309500 + 1274735455 * (FuckEnc::CacheRead<_DWORD>(v4 + 280) ^ 0xCD0BEA7C);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 1128i64) + 96i64);
                goto LABEL_1038;
            case 0x3C1:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 1408i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1640);
                Calls::FastCall(v10 + 1744, &v29, v5, v4);
                goto LABEL_1038;
            case 0x3C2:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1336);
                v13 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 656) + 848i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 1936i64) + 448i64);
                goto LABEL_1037;
            case 0x3C3:
                Calls::FastCall(v4 + 976, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 616i64) + 8i64 * ((unsigned __int8)v5 & 0xDA)) + 984i64));
                v29 ^= v5;
                goto LABEL_1038;
            case 0x3C4:
                Calls::FastCall(v4 + 904, &v29, v5, v4);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 200) + 8i64 * ((unsigned __int8)v5 & 0x9A)) + 96i64);
                goto LABEL_1038;
            case 0x3C5:
                v29 = v11 ^ 0xEF4D7A82;
                v29 = v11 ^ 0xEF4D7A82 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 136) * ((FuckEnc::CacheRead<_DWORD>(v4 + 776) ^ 0x66D55C00u) >> 10));
                goto LABEL_1038;
            case 0x3C6:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 440);
                v29 = v11 + (FuckEnc::CacheRead<_DWORD>(v10 + 1432) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 800i64) + 1784i64) + 1816i64));
                goto LABEL_1038;
            case 0x3C7:
                v29 = v11 + 1076590388;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 720);
                v29 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1224) + 4i64 * (unsigned __int8)(63 * v5)) ^ (v11 + 1076590388);
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 832i64);
                goto LABEL_1038;
            case 0x3C8:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 88) + 1096i64) + 1120i64) - v5;
                v29 ^= 399572969 * ~FuckEnc::CacheRead<_DWORD>(v4 + 1504);
                goto LABEL_1038;
            case 0x3C9:
                v29 = v11 + 781476970 * (FuckEnc::CacheRead<_DWORD>(v4 + 832) | 2);
                v29 = ~(v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 824i64) + 4i64 * (unsigned __int8)(31 * v5)));
                goto LABEL_1038;
            case 0x3CA:
                v29 = ~(v11 + 221184088);
                v29 = __ROR4__(v29, FuckEnc::CacheRead<_DWORD>(v4 + 120));
                v29 = __ROR4__(v29, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 8i64 * (__ROL4__(v5, 6) & 0x55)) + 1832i64));
                goto LABEL_1038;
            case 0x3CB:
                v29 = __ROR4__(v11, 140);
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 792);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 688) + 8i64 * (unsigned __int8)(-58 * v5)) + 896i64) + 4i64 * ((unsigned __int8)v5 & 0xE3));
                goto LABEL_1038;
            case 0x3CC:
                Calls::FastCall(v4 + 432, &v29, v5, v4);
                Calls::FastCall(v4 + 1856, &v29, v5, v4);
                goto LABEL_1038;
            case 0x3CD:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 592) + 640i64, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 528) + 8i64 * (unsigned __int8)__ROR4__(v5, 21)));
                goto LABEL_1038;
            case 0x3CE:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 264) + 1344i64) + 8i64 * ((unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 136) ^ v5, 27) & 0xF4)) + 264i64);
                v13 = FuckEnc::CacheRead<_DWORD>(v10 + 1104) ^ v11;
                goto LABEL_1037;
            case 0x3CF:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 768);
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1120);
                v13 = ~(v29 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 24) + 568i64) + 4i64 * (v5 & 0xF)) + 1700734715);
                goto LABEL_1037;
            case 0x3D0:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 472i64);
                v29 = FuckEnc::CacheRead<_DWORD>(v10 + 752) ^ v11;
                v29 = (FuckEnc::CacheRead<_DWORD>(v4 + 792) + v29 + 1023309501) ^ 0xB34EB6AE;
                goto LABEL_1038;
            case 0x3D1:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1672) + 8i64 * (unsigned __int8)__ROR4__(v5, 18)) + 1296i64, &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1904));
                goto LABEL_1038;
            case 0x3D2:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 24);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1184) + 8i64 * ((unsigned __int8)v5 & 0xBC)) + 160i64) + 8i64 * (((unsigned __int8)v5 ^ 0xF8) & 0xE7), &v29, v5, v4);
                goto LABEL_1038;
            case 0x3D3:
                Calls::FastCall(v4 + 1256, &v29, v5, v4);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 1728i64) + 120i64);
                goto LABEL_1038;
            case 0x3D4:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 8i64 * ((unsigned __int8)(-36 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 1920i64)) & 0xD1)) + 1128i64);
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1424) + 1760i64) ^ v11;
                goto LABEL_1037;
            case 0x3D5:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 96) ^ v11 ^ 0xD3A89A1E;
                v10 = FuckEnc::CacheRead<_QWORD>(v4);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 496i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 27)) << 8;
                goto LABEL_1038;
            case 0x3D6:
                v29 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 88) + 768i64) + 1264i64) ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 448)) + v11;
                v29 = __ROR4__(v29, FuckEnc::CacheRead<_DWORD>(v4 + 1264));
                goto LABEL_1038;
            case 0x3D7:
                v29 = (FuckEnc::CacheRead<_DWORD>(v4 + 1448) ^ v11) - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1936);
                v13 = __ROR4__(v29, FuckEnc::CacheRead<_BYTE>(v10 + 1816) ^ 0x5A);
                goto LABEL_1037;
            case 0x3D8:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 920) + 1184i64) + 8i64 * ((unsigned __int8)v5 ^ 0xE7u)) + 1008i64) + 392i64) + 352i64);
                v29 = (v11 + FuckEnc::CacheRead<_DWORD>(v10 + 120)) ^ 0xB5D80221;
                goto LABEL_1038;
            case 0x3D9:
                Calls::FastCall(v4 + 1952, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1344) + 8i64 * (__ROL4__(v5, 26) & 0xF2)) + 1280i64));
                goto LABEL_1038;
            case 0x3DA:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 1128i64);
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 608) + FuckEnc::CacheRead<_DWORD>(v4 + 1432);
                v29 = __ROR4__(v29, FuckEnc::CacheRead<_DWORD>(v4 + 1264));
                goto LABEL_1038;
            case 0x3DB:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 120);
                v29 += FuckEnc::CacheRead<_DWORD>(v4 + 752);
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 88) + 416i64) + 608i64);
                goto LABEL_1038;
            case 0x3DC:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1120);
                v29 ^= ~FuckEnc::CacheRead<_DWORD>(v4 + 464);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 952);
                v29 -= FuckEnc::CacheRead<_DWORD>(v10 + 1120);
                goto LABEL_1038;
            case 0x3DD:
                v29 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 1120) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 8i64 * (unsigned __int8)(7 * v5)) + 200i64) + 8i64 * (((unsigned __int8)v5 ^ 0x22) & 0xA2)) + 832i64));
                goto LABEL_1038;
            case 0x3DE:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1920) + FuckEnc::CacheRead<_DWORD>(v4 + 1176) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 920) + 1488i64) >> 20);
                goto LABEL_1038;
            case 0x3DF:
                v29 = v11 + 1902799505;
                v29 = v11 + 1902799505 - FuckEnc::CacheRead<_DWORD>(v4 + 464);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1376);
                v29 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1840) + 8i64 * ((unsigned __int8)v5 & 0xCB)) + 176i64);
                goto LABEL_1038;
            case 0x3E0:
                v29 = v11 + ((19779839 * FuckEnc::CacheRead<_DWORD>(v4 + 280)) ^ 0x40C30131);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1664) + 1640i64);
                v29 = ~(v29 - FuckEnc::CacheRead<_DWORD>(v10 + 1488));
                goto LABEL_1038;
            case 0x3E1:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 592);
                v29 = v11 ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 1504) + 559933416 - FuckEnc::CacheRead<_DWORD>(v10 + 1080));
                goto LABEL_1038;
            case 0x3E2:
                v29 = v11 ^ (-624750287 * FuckEnc::CacheRead<_DWORD>(v4 + 1504) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1840) + 8i64 * ((unsigned __int8)(80 * FuckEnc::CacheRead<_DWORD>(v4 + 464)) & 0x93)) + 240i64) + 4i64 * ((-54 * (_BYTE)v5) & 0x75)));
                goto LABEL_1038;
            case 0x3E3:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 592) + 1400i64) + 656i64) + 920i64);
                Calls::FastCall(v10 + 880, &v29, v5, v4);
                goto LABEL_1038;
            case 0x3E4:
                v29 = v11 - 2009272625 * FuckEnc::CacheRead<_DWORD>(v4 + 504);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 352) + 1608i64) + 1576i64);
                v29 += ~FuckEnc::CacheRead<_DWORD>(v10 + 1776);
                goto LABEL_1038;
            case 0x3E5:
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 1176i64);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1592);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 472);
                v29 += FuckEnc::CacheRead<_DWORD>(v10 + 1432);
                goto LABEL_1038;
            case 0x3E6:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1728) + 856i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 21)) + 32i64) + 8i64 * (unsigned __int8)(10 * v5)) + 720i64) + 1424i64);
                v13 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1408);
                goto LABEL_1037;
            case 0x3E7:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1248);
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 856i64) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v10 + 136) & 0x68)) + 1048i64) + 792i64) ^ v11;
                goto LABEL_1037;
            case 0x3E8:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 1904i64);
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 1224i64) + 4i64 * (unsigned __int8)(35 * v5)) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1224) + 4i64 * (unsigned __int8)__ROL4__(v5, 2));
                goto LABEL_1038;
            case 0x3E9:
                v29 = (v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1400) + 1160i64)) ^ 0xC311319F;
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1336) + 64i64) + 1080i64);
                goto LABEL_1038;
            case 0x3EA:
                v29 = v11 ^ ~(1494051964 * FuckEnc::CacheRead<_DWORD>(v4 + 1448));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 720);
                v29 = __ROL4__(v29, FuckEnc::CacheRead<_DWORD>(v10 + 424));
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 1408);
                goto LABEL_1038;
            case 0x3EB:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1488);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 200) + 8i64 * (((unsigned __int8)v5 ^ 0xDD) & 0xA7)) + 472i64);
                v29 ^= FuckEnc::CacheRead<_DWORD>(v10 + 752) + FuckEnc::CacheRead<_DWORD>(v4 + 832);
                goto LABEL_1038;
            case 0x3EC:
                v29 = FuckEnc::CacheRead<_DWORD>(v4 + 776) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 768);
                v29 += ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1672) + 8i64 * (unsigned __int8)(-63 * v5)) + 1104i64) | 6);
                goto LABEL_1038;
            case 0x3ED:
                Calls::FastCall(v4 + 1416, &v29, v5, v4);
                v29 = __ROL4__(v29, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 360) + 8i64 * (v5 & 0x41)) + 1504i64));
                goto LABEL_1038;
            case 0x3EE:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 8i64 * ((unsigned __int8)v5 & 0xB7)) + 984i64) + 1344i64) + 8i64 * ((unsigned __int8)v5 ^ 0x46u)) + 1608i64) + 624i64);
                v13 = FuckEnc::CacheRead<_DWORD>(v10 + 1816) ^ v11;
                goto LABEL_1037;
            case 0x3EF:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1008) + 1664i64) + 744i64) + 1416i64, &v29, v5, v4);
                goto LABEL_1038;
            case 0x3F0:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1904) + 608i64);
                v29 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 200) + 8i64 * ((unsigned __int8)v5 ^ 0x7Cu)) + 1448i64) + 1481730584;
                goto LABEL_1038;
            case 0x3F1:
                v29 = v11 ^ 0x2D595978;
                v29 = (v11 ^ 0x2D595978) + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 88) + 568i64) + 4i64 * (unsigned __int8)-FuckEnc::CacheRead<_BYTE>(v4 + 1776)) | 4) + 1;
                goto LABEL_1038;
            case 0x3F2:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 472);
                v29 = FuckEnc::CacheRead<_DWORD>(v10 + 832) ^ v11;
                v29 -= FuckEnc::CacheRead<_DWORD>(v4 + 1264);
                v13 = (__ROL4__(v29, FuckEnc::CacheRead<_DWORD>(v4 + 792)) + 788530271) ^ 0xD0FFDB45;
                goto LABEL_1037;
            case 0x3F3:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 832);
                v29 += 1390799024 * FuckEnc::CacheRead<_DWORD>(v4 + 832);
                v29 = __ROR4__(v29, FuckEnc::CacheRead<_DWORD>(v4 + 192));
                goto LABEL_1038;
            case 0x3F4:
                Calls::FastCall(v4 + 1416, &v29, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1248) + 1608i64) + 88i64) + 1096i64) + 1336i64));
                goto LABEL_1038;
            case 0x3F5:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 1424i64);
                Calls::FastCall(v10 + 760, &v29, v5, FuckEnc::CacheRead<_QWORD>(v4 + 720));
                goto LABEL_1038;
            case 0x3F6:
                Calls::FastCall(v4 + 1856, &v29, v5, v4);
                v29 = __ROR4__(v29, FuckEnc::CacheRead<_BYTE>(v4 + 520) - 118);
                goto LABEL_1038;
            case 0x3F7:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 688) + 8i64 * (unsigned __int8)__ROL4__(v5, 10)) + 288i64) + 8i64 * ((unsigned __int8)__ROR4__(v5, 29) & 0x88)) + 720i64);
                v29 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1344) + 8i64 * ((unsigned __int8)v5 ^ 0xEDu)) + 1488i64);
                goto LABEL_1038;
            case 0x3F8:
                v29 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 424i64) * ((FuckEnc::CacheRead<_DWORD>(v4 + 520) << 12) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 176) - 1825205965)));
                goto LABEL_1038;
            case 0x3F9:
                v29 = v11 - 559741765;
                v29 = ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1400) + 1432i64) + v11 - 559741765;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1008);
                v29 += FuckEnc::CacheRead<_DWORD>(v10 + 424);
                goto LABEL_1038;
            case 0x3FA:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 144i64) + 144i64) + 1664i64) + 576i64, &v29, v5, v4);
                goto LABEL_1038;
            case 0x3FB:
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 936) - 1485246437;
                v29 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 1480i64) + 4i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1104) ^ 0x57u));
                goto LABEL_1038;
            case 0x3FC:
                v29 = v11 + 1445896467;
                v13 = v11 + 1445896467 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 8 * ((FuckEnc::CacheRead<_DWORD>(v4 + 96) & 0xA4 | 8i64) ^ 4)) + 352i64) + 280i64);
                goto LABEL_1037;
            case 0x3FD:
                Calls::FastCall(v4 + 1856, &v29, v5, v4);
                v29 += 1098965356 + FuckEnc::CacheRead<_DWORD>(v4 + 1432);
                goto LABEL_1038;
            case 0x3FE:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1184) + 8i64 * (unsigned __int8)__ROR4__(v5, 25)) + 1336i64);
                v13 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1184) + 8i64 * (unsigned __int8)__ROL4__(v5, 12)) + 1344i64) + 8i64 * ((12 * (_BYTE)v5) & 0x78)) + 464i64));
                goto LABEL_1037;
            case 0x3FF:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 472);
                v29 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1488);
                v23 = __ROR4__(v29, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1016) + 8i64 * ((-8 * (_BYTE)v5) & 0x51)) + 1736i64));
            LABEL_1036:
                v13 = v23 - v5;
            LABEL_1037:
                v29 = v13;
            LABEL_1038:
                v6 += 4;
                *a2 = v29;
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
