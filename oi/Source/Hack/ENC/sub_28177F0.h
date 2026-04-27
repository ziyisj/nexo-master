#pragma once

#include <Hack/FuckEnc.h>
#include <Hack/ENC/Calls.h>
#include <IDA/ida_defs.h>

void sub_28177F0(__int64 a1, unsigned int* a2, unsigned int a3, int a4)
{
    __int64 v4;      // rbx
    unsigned int v5; // edi
    int v6;          // r13d
    __int64 v10;     // rsi
    int v11;         // eax
    int v12;         // ecx
    __int64 v13;     // r9
    __int64 v14;     // rax
    __int64 v15;     // r8
    __int64 v16;     // rax
    __int64 v17;     // r8
    int v18;         // ecx
    int v19;         // ecx
    __int64 v20;     // rcx
    __int64 v21;     // r8
    int v22;         // eax
    __int64 v23;     // r9
    int v24;         // [rsp+60h] [rbp+40h] BYREF

    v4 = a1;
    v5 = a4 ^ 0xD1619BBE;
    v6 = 0;
    v10 = a1;
    if (a3 > 3)
    {
        while (2)
        {
            v11 = *a2;
            v24 = *a2;
            switch (((unsigned __int16)(a4 + v6) ^ 0xBA) & 0x3FF)
            {
            case 0:
                Calls::FastCall(v4 + 1512, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 216) + 8i64 * (((unsigned __int8)v5 ^ 0x21) & 0xB9)));
                v24 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 80i64);
                goto LABEL_1036;
            case 1:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 216) + 8i64 * (unsigned __int8)(-8 * v5)) + 1768i64);
                v12 = ~(v24 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1216) + 304i64) + 4i64 * (((unsigned __int8)v5 ^ 0x40) & 0xC5)));
                goto LABEL_1035;
            case 2:
                v24 = __ROL4__(v11, v5);
                v24 = __ROR4__(v24, v5 * ~FuckEnc::CacheRead<_BYTE>(v4 + 1920) + 63);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1592);
                goto LABEL_1036;
            case 3:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1936);
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 768) + 1720i64) ^ v11;
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 8i64 * (__ROR4__(v5, 24) & 0x11)) + 456i64);
                goto LABEL_1036;
            case 4:
                v24 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 128));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 584) + 1872i64) + 1280i64) + 624i64) + 1280i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1112);
                goto LABEL_1036;
            case 5:
                v24 = -v11 - 2083389632;
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 8i64 * ((unsigned __int8)__ROL4__(v5, 6) & 0xB9)) + 408i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 384);
                goto LABEL_1036;
            case 6:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1480);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 112i64);
                v12 = v24 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1784) + 8i64 * (__ROL4__(v5, 16) & 0x5F)) + 952i64) + 168i64);
                goto LABEL_1035;
            case 7:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 8i64 * (((unsigned __int8)v5 ^ 0x70) & 0xFA)) + 600i64) + 8i64 * ((unsigned __int8)v5 & 0xF7)) + 272i64) + 8i64 * ((unsigned __int8)v5 ^ 0x83u)) + 1616i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 30));
                goto LABEL_1036;
            case 8:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1920);
                v13 = (unsigned __int8)v5 & 0x81;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1608);
                goto LABEL_12;
            case 9:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1528) + 8i64 * ((unsigned __int8)v5 & 0xE3)) + 1104i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 8i64 * (v5 & 0x75)) + 1752i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v10 + 784);
                goto LABEL_1036;
            case 0xA:
                v24 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 384) ^ 0xC301316D);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 736);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1120) + 1480i64) ^ 0xBB55F97B;
                goto LABEL_1036;
            case 0xB:
                v24 = v11 - 1023309500;
                v24 = __ROR4__(v11 - 1023309500, FuckEnc::CacheRead<_BYTE>(v4 + 936) + 39);
                v24 ^= ~FuckEnc::CacheRead<_DWORD>(v4 + 168) - ((_DWORD)0x1442FDC0 + 12);
                goto LABEL_1036;
            case 0xC:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1240);
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1720);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 8i64 * (unsigned __int8)(118 * v5)) + 1720i64) >> 13;
                goto LABEL_1036;
            case 0xD:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 256);
                v24 = FuckEnc::CacheRead<_DWORD>(v10 + 784) ^ v11;
                v12 = v24 + FuckEnc::CacheRead<_DWORD>(v4 + 80) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 1952i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 22));
                goto LABEL_1035;
            case 0xE:
                v24 = __ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 408) ^ v11, 131);
                v24 += ~FuckEnc::CacheRead<_DWORD>(v4 + 496) ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 1152));
                goto LABEL_1036;
            case 0xF:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 552i64);
                Calls::FastCall(v4 + 208, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 872) + 8i64 * (__ROR4__(v5, 7) & 0x14)));
                goto LABEL_1036;
            case 0x10:
                v24 = v11 - 1398278583;
                v24 = (v11 - 1398278583) ^ (4194305 * FuckEnc::CacheRead<_DWORD>(v4 + 1592));
                v12 = FuckEnc::CacheRead<_DWORD>(v4 + 128) + v24;
                goto LABEL_1035;
            case 0x11:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 256i64);
                v24 = __ROL4__(v11, (FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1872) + 1264i64) * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v10 + 632) + 4i64 * (unsigned __int8)(-114 * v5))) | 0x1F);
                goto LABEL_1036;
            case 0x12:
                v24 = v11 + 1731133591;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1936);
                v16 = (unsigned __int8)~(_BYTE)v5 & 0x88;
                v17 = FuckEnc::CacheRead<_QWORD>(v10 + 1200);
                goto LABEL_25;
            case 0x13:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 1528i64) + 8i64 * (((unsigned __int8)v5 ^ 1) & 0x3F)) + 624i64);
                Calls::FastCall(v10 + 520, &v24, v5, v4);
                goto LABEL_1036;
            case 0x14:
                Calls::FastCall(v4 + 856, &v24, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1776) + 1120i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1392);
                goto LABEL_1036;
            case 0x15:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1592);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 8i64 * (((unsigned __int8)v5 ^ 0xF7) & 0xCC)) + 496i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1272);
                v24 -= FuckEnc::CacheRead<_DWORD>(v10 + 1040);
                goto LABEL_1036;
            case 0x16:
                v24 = (unsigned int)0xE1F68AD ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1448) + 1784i64) + 8i64 * (v5 & 0x52)) + 768i64);
                v12 = ((unsigned int)0xE1F68AD ^ v11) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 312) + 4i64 * (unsigned __int8)__ROR4__(v5, 1));
                goto LABEL_1035;
            case 0x17:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1872);
                Calls::FastCall(v10 + 976, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 272) + 8i64 * ((11 * (_BYTE)v5) & 0x20)));
                goto LABEL_1036;
            case 0x18:
                v24 = ~v11;
                v24 = v5 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1368) & 0x96)) + 1624i64) + 4i64 * ((unsigned __int8)__ROL4__(v5, 14) & 0xAA)) ^ ~v11 ^ 0x8C3CE13E);
                goto LABEL_1036;
            case 0x19:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 272) + 8i64 * (unsigned __int8)(-10 * v5)) + 1344i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 21), &v24, v5, v4);
                goto LABEL_1036;
            case 0x1A:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1392);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 1232i64, &v24, v5, v4);
                goto LABEL_1036;
            case 0x1B:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 216) + 8i64 * (((unsigned __int8)v5 ^ 0x50) & 0xD7)) + 1040i64);
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 544i64) + 8i64 * (v5 & 0xE)) + 1432i64));
                goto LABEL_1036;
            case 0x1C:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1768);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 8i64 * ((17 * (_BYTE)v5) & 0x28)) + 776i64);
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_DWORD>(v4 + 824));
                goto LABEL_1036;
            case 0x1D:
                v24 = v11 + 1946871485;
                v12 = v11 + 1946871485 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1240) + 1584i64) + 1584i64) + 8i64 * ((unsigned __int8)v5 & 0x80)) + 384i64);
                goto LABEL_1035;
            case 0x1E:
                v24 = ~v11;
                v24 = ~v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 1872i64) + 888i64) + 288i64) + 1416i64) + 120i64);
                goto LABEL_1036;
            case 0x1F:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1368);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 784) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 1480i64);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 1808);
                goto LABEL_1036;
            case 0x20:
                Calls::FastCall(v4 + 1552, &v24, v5, v4);
                v24 = __ROL4__(v24, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 8i64 * ((unsigned __int8)v5 ^ 0x8Bu)) + 456i64));
                goto LABEL_1036;
            case 0x21:
                v24 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 784) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1200) + 8i64 * (unsigned __int8)(-22 * v5)) + 1392i64));
                v12 = FuckEnc::CacheRead<_DWORD>(v4 + 936) ^ v24;
                goto LABEL_1035;
            case 0x22:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 760) + 224i64) + 1752i64);
                v12 = ~(v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 800) + 8i64 * (unsigned __int8)(-122 * v5)) + 936i64));
                goto LABEL_1035;
            case 0x23:
                Calls::FastCall(v4 + 200, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1912) + 8i64 * (__ROL4__(v5, 24) & 0x60)) + 1120i64) + 1776i64));
                goto LABEL_1036;
            case 0x24:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 1696) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1424);
                v24 -= FuckEnc::CacheRead<_DWORD>(v10 + 776);
                v12 = v24 + (FuckEnc::CacheRead<_DWORD>(v4 + 736) ^ 0xE337F20C);
                goto LABEL_1035;
            case 0x25:
                v24 = v11 + ~FuckEnc::CacheRead<_DWORD>(v4 + 280);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 56) ^ 0xF8607CDF;
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 384) + 1390793878;
                goto LABEL_1036;
            case 0x26:
                v24 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 384);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 936) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1152) * v5) ^ 0x8B9AAD06;
                goto LABEL_1036;
            case 0x27:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 456);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 432) + 1456i64) + 8i64 * (v5 & 0x6C)) + 432i64) + 1896i64) + 1760i64);
                goto LABEL_1036;
            case 0x28:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 464) + 1536i64) + 1096i64) + 1752i64) + 1544i64) + 288i64);
                v24 = FuckEnc::CacheRead<_DWORD>(v10 + 1768) ^ v11;
                goto LABEL_1036;
            case 0x29:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 944);
                v24 = FuckEnc::CacheRead<_DWORD>(v10 + 1920) ^ v11;
                v24 = __ROL4__(v24, (FuckEnc::CacheRead<_BYTE>(v4 + 128) ^ 0x8C) + FuckEnc::CacheRead<_BYTE>(v4 + 280) - 45);
                goto LABEL_1036;
            case 0x2A:
                v24 = v11 - 1456179345 * FuckEnc::CacheRead<_DWORD>(v4 + 1368);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 560) + 1912i64) + 8i64 * (unsigned __int8)(11 * v5)) + 1120i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v10 + 496);
                goto LABEL_1036;
            case 0x2B:
                v24 = __ROL4__(v11, ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 408i64));
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 136) + 608i64) + v24 - 1023309500;
                goto LABEL_1035;
            case 0x2C:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1856) + 8i64 * (unsigned __int8)(-35 * v5)) + 464i64) + 256i64);
                v24 = ~(v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 136) + 1296i64) + 4i64 * (unsigned __int8)v5));
                goto LABEL_1036;
            case 0x2D:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1120) + 272i64) + 8i64 * ((unsigned __int8)v5 & 0xB7)) + 264i64, &v24, v5, v4);
                goto LABEL_1036;
            case 0x2E:
                Calls::FastCall(v4 + 920, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 272) + 8i64 * (unsigned __int8)__ROR4__(v5, 7)) + 472i64) + 8i64 * ((unsigned __int8)v5 & 0x8E)) + 1448i64));
                goto LABEL_1036;
            case 0x2F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 912);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1200) + 8i64 * (v5 & 0x2A)) + 32i64) + 8i64 * (v5 & 0x39), &v24, v5, v4);
                goto LABEL_1036;
            case 0x30:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 552) + 1528i64) + 8i64 * (unsigned __int8)(31 * v5)) + 1912i64) + 8i64 * (unsigned __int8)(24 * v5)) + 216i64) + 8i64 * (v5 & 0x32)) + 128i64);
                goto LABEL_1036;
            case 0x31:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 496);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 8i64 * (v5 & 0x49)) + 584i64);
                v24 += FuckEnc::CacheRead<_DWORD>(v10 + 608) + FuckEnc::CacheRead<_DWORD>(v4 + 1480);
                goto LABEL_1036;
            case 0x32:
                v24 = v11 - v5 + 1073998573;
                v24 = __ROL4__(v24, ~(FuckEnc::CacheRead<_BYTE>(v4 + 1152) * ~FuckEnc::CacheRead<_BYTE>(v4 + 1920)));
                goto LABEL_1036;
            case 0x33:
                v24 = v5 + v11 + 1 + FuckEnc::CacheRead<_DWORD>(v4 + 1720);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 136i64) + 128i64) + v24 + 1;
                goto LABEL_1035;
            case 0x34:
                Calls::FastCall(v4 + 1512, &v24, v5, v4);
                v24 ^= ~FuckEnc::CacheRead<_DWORD>(v4 + 1760) ^ 0x19DA0671;
                goto LABEL_1036;
            case 0x35:
                Calls::FastCall(v4 + 192, &v24, v5, v4);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1440) & 0xFFFFFFE9;
                goto LABEL_1036;
            case 0x36:
                Calls::FastCall(v4 + 248, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1536) + 1528i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 20)) + 1872i64));
                goto LABEL_1036;
            case 0x37:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 384) & 0xD8)) + 952i64) + 1216i64);
                v12 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1600) + 784i64);
                goto LABEL_1035;
            case 0x38:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 128);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1120) + 560i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1440) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 968) + 4i64 * (unsigned __int8)__ROL4__(v5, 16));
                goto LABEL_1036;
            case 0x39:
                v24 = v11 + 590578171 * FuckEnc::CacheRead<_DWORD>(v4 + 1808);
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 448) + 1;
                v12 = v24 - FuckEnc::CacheRead<_DWORD>(v4 + 56) - v5;
                goto LABEL_1035;
            case 0x3A:
                v11 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1568) + 1864i64) + 1928i64) + 640i64) + 4i64 * (unsigned __int8)(-31 * v5));
                v24 = v11;
                v18 = FuckEnc::CacheRead<_DWORD>(v4 + 1112);
                goto LABEL_1033;
            case 0x3B:
                v12 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 1920), 22)) + 120i64) * ~FuckEnc::CacheRead<_DWORD>(v4 + 1432) + 1811563090;
                goto LABEL_1035;
            case 0x3C:
                v24 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 408i64));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 104i64);
                v24 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 960) + 4i64 * (unsigned __int8)(97 * v5));
                goto LABEL_1036;
            case 0x3D:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 936);
                Calls::FastCall(v4 + 1840, &v24, v5, FuckEnc::CacheRead<_QWORD>(v4 + 768));
                goto LABEL_1036;
            case 0x3E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 232);
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 1368));
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 1896i64) + 552i64) + 1448i64) + 776i64);
                goto LABEL_1036;
            case 0x3F:
                v24 = v11 ^ 0x1ED0FFC2;
                v24 = __ROR4__(v11 ^ 0x1ED0FFC2, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1536) + 640i64) + 4i64 * ((unsigned __int8)v5 ^ 0x7Cu)) + 32 + FuckEnc::CacheRead<_DWORD>(v4 + 1768));
                goto LABEL_1036;
            case 0x40:
                Calls::FastCall(v4 + 848, &v24, v5, FuckEnc::CacheRead<_QWORD>(v4 + 232));
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1208) + 80i64);
                goto LABEL_1036;
            case 0x41:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(v4 + 272) + 288i64) + 1592i64);
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 1760);
                goto LABEL_1036;
            case 0x42:
                v24 = v11 ^ ~(8 * FuckEnc::CacheRead<_DWORD>(v4 + 1808));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 256) + 584i64);
                v12 = FuckEnc::CacheRead<_DWORD>(v10 + 1432) ^ v24;
                goto LABEL_1035;
            case 0x43:
                v24 = v11 - 1605881128;
                v24 = (v11 - 1605881128) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 448i64) >> 15);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1536);
                v24 = __ROL4__(v24, FuckEnc::CacheRead<_DWORD>(v10 + 408));
                goto LABEL_1036;
            case 0x44:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 256) + 1368i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 1536i64);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 784) * FuckEnc::CacheRead<_DWORD>(v10 + 784);
                goto LABEL_1036;
            case 0x45:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1200) + 8i64 * ((unsigned __int8)v5 & 0xC4)) + 1240i64) + 560i64);
                v12 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1768) + (FuckEnc::CacheRead<_DWORD>(v10 + 384) & 0xFFFFFFFD);
                goto LABEL_1035;
            case 0x46:
                Calls::FastCall(v4 + 976, &v24, v5, v4);
                v24 ^= ~FuckEnc::CacheRead<_DWORD>(v4 + 1920);
                goto LABEL_1036;
            case 0x47:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1064) + 1023331928;
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 584) + 1928i64) + 1088i64) + 1264i64);
                goto LABEL_1036;
            case 0x48:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 1264i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 432) + 544i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 31)) + 1872i64);
                v24 -= FuckEnc::CacheRead<_DWORD>(v10 + 1720);
                goto LABEL_1036;
            case 0x49:
                v24 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1432) | 0x15);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1568);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1296) + 4i64 * (unsigned __int8)(31 * FuckEnc::CacheRead<_BYTE>(v10 + 1696)));
                goto LABEL_1036;
            case 0x4A:
                v17 = FuckEnc::CacheRead<_QWORD>(v4 + 800);
                v16 = (unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1208) + 1112i64) ^ 0x69u;
            LABEL_25:
                Calls::FastCall(v4 + 1576, &v24, v5, FuckEnc::CacheRead<_QWORD>(v17 + 8 * v16));
                goto LABEL_1036;
            case 0x4B:
                Calls::FastCall(v4 + 840, &v24, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 136);
                v24 -= FuckEnc::CacheRead<_DWORD>(v10 + 1592) ^ 0xB6D851E;
                goto LABEL_1036;
            case 0x4C:
                v24 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 1064) | 0x12);
                v24 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 1936i64) + 1208i64) + 1280i64) + 824i64);
                goto LABEL_1036;
            case 0x4D:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 1440) ^ v11 ^ 0x3B51FFE7;
                v11 = v24 - FuckEnc::CacheRead<_DWORD>(v4 + 1392);
                v24 = v11;
                v19 = FuckEnc::CacheRead<_DWORD>(v4 + 1064) * v5;
                goto LABEL_1034;
            case 0x4E:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1720) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1088) + 80i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 792) + 1152i64);
                goto LABEL_1036;
            case 0x4F:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 8i64 * (unsigned __int8)(-70 * v5)) + 1128i64) + 880i64) + 1112i64);
                goto LABEL_1036;
            case 0x50:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 776);
                v24 = __ROL4__(v24, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 8i64 * (unsigned __int8)(106 * v5)) + 408i64));
                v24 += 1412366351 * FuckEnc::CacheRead<_DWORD>(v4 + 1696);
                goto LABEL_1036;
            case 0x51:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 384) * v5;
                v12 = v24 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 584) + 1200i64) + 8i64 * ((unsigned __int8)v5 & 0xC0)) + 1112i64) ^ 0x7DA59B9E);
                goto LABEL_1035;
            case 0x52:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 272) + 8i64 * (v5 & 0x4D)) + 464i64) + 760i64);
                Calls::FastCall(v4 + 1184, &v24, v5, v10);
                goto LABEL_1036;
            case 0x53:
                v24 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1696) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 8i64 * (unsigned __int8)(-77 * FuckEnc::CacheRead<_BYTE>(v4 + 1920))) + 1696i64));
                v24 = __ROL4__(v24, FuckEnc::CacheRead<_DWORD>(v4 + 448));
                goto LABEL_1036;
            case 0x54:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 8i64 * (__ROL4__(v5, 6) & 0x3E)) + 800i64) + 8i64 * (v5 & 0x78)) + 1184i64, &v24, v5, v4);
                goto LABEL_1036;
            case 0x55:
                Calls::FastCall(v4 + 1520, &v24, v5, v4);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1536) + 1480i64) ^ v24 ^ 0xB4EC0EE5;
                goto LABEL_1035;
            case 0x56:
                v11 -= FuckEnc::CacheRead<_DWORD>(v4 + 776) ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 456));
                v24 = v11;
                v19 = v5 + 483524417 * FuckEnc::CacheRead<_DWORD>(v4 + 168);
                goto LABEL_1034;
            case 0x57:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 880);
                v24 = FuckEnc::CacheRead<_DWORD>(v10 + 712) ^ v11;
                v12 = v24 + ~((_DWORD)0x12B392DA + (FuckEnc::CacheRead<_DWORD>(v4 + 1592) ^ 0xA09639A1));
                goto LABEL_1035;
            case 0x58:
                v24 = v5 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 1768i64) ^ v11;
                v12 = v24 + (FuckEnc::CacheRead<_DWORD>(v4 + 1368) ^ FuckEnc::CacheRead<_DWORD>(v4 + 120) & 0xFFFFFFE5);
                goto LABEL_1035;
            case 0x59:
                v24 = v5 ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 136);
                v12 = (v5 ^ v11) + 788573336 * FuckEnc::CacheRead<_DWORD>(v4 + 1040) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1928) + 384i64);
                goto LABEL_1035;
            case 0x5A:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 80) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1896);
                v24 = (v24 + FuckEnc::CacheRead<_DWORD>(v10 + 408)) ^ 0xE5FE9D20;
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1760) << 9;
                goto LABEL_1036;
            case 0x5B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1872);
                v24 = v11 ^ (v5 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 296) + 1696i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 384) - 771800810));
                goto LABEL_1036;
            case 0x5C:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 8i64 * (v5 & 0x6D)) + 616i64) + 1544i64) + 1928i64) + 1776i64) + 584i64);
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1720);
                goto LABEL_1036;
            case 0x5D:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 1720) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 560) + 1936i64);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1784) + 8i64 * (unsigned __int8)(-25 * v5)) + 1720i64);
                goto LABEL_1036;
            case 0x5E:
                v24 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 8i64 * (v5 & 0x72)) + 80i64) + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 272) + 8i64 * (__ROR4__(v5, 27) & 0x33)) + 80i64) >> 27));
                goto LABEL_1036;
            case 0x5F:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 872) + 8i64 * (unsigned __int8)(3 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1448) + 456i64))) + 584i64);
                Calls::FastCall(v4 + 904, &v24, v5, v10);
                goto LABEL_1036;
            case 0x60:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 456i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 792) + 1568i64) + 584i64) + 304i64) + 4i64 * (((unsigned __int8)v5 ^ 4) & 0x24));
                goto LABEL_1036;
            case 0x61:
                v24 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 8i64 * ((unsigned __int8)v5 ^ 0xD6u)) + 1480i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1584) + 8i64 * (unsigned __int8)(-118 * v5)) + 280i64));
                goto LABEL_1036;
            case 0x62:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1808);
                v12 = v24 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1584) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 496) ^ 1) & 0xCD)) + 1240i64) + 496i64);
                goto LABEL_1035;
            case 0x63:
                v24 = v11 ^ 0xC0D94695;
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 608) ^ v11 ^ 0xC0D94695;
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 456) + 1;
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 56);
                goto LABEL_1036;
            case 0x64:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1272);
                v15 = v10;
                v13 = (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 56), 1);
                v14 = FuckEnc::CacheRead<_QWORD>(v4 + 728);
                goto LABEL_14;
            case 0x65:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1264);
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 776) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1416) + 1216i64) + 640i64) + 4i64 * (__ROR4__(v5, 26) & 0x7B));
                goto LABEL_1036;
            case 0x66:
                v24 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1864) + 384i64) ^ (FuckEnc::CacheRead<_BYTE>(v4 + 824) + FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 544) + 8i64 * (unsigned __int8)(115 * v5)) + 1432i64)));
                goto LABEL_1036;
            case 0x67:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 448) ^ v11 ^ 0x567FB6EC;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1928);
                Calls::FastCall(v10 + 576, &v24, v5, v4);
                goto LABEL_1036;
            case 0x68:
                v24 = v11 - 852074592;
                v24 = v11 - 852074592 - FuckEnc::CacheRead<_DWORD>(v4 + 128);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1896) + 1600i64) + 1720i64) + 1327125297;
                goto LABEL_1036;
            case 0x69:
                v24 = v11 + v5;
                v24 = __ROR4__(v11 + v5, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1256) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 1040), 11)) + 928i64) + 8i64 * ((unsigned __int8)__ROL4__(v5, 1) & 0xF4)) + 824i64)) + 264438065;
                goto LABEL_1036;
            case 0x6A:
                v24 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 1064) & 0xFFFFFFEF;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 1552i64, &v24, v5, v4);
                goto LABEL_1036;
            case 0x6B:
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 456i64));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 8i64 * (((unsigned __int8)v5 ^ 0xF5) & 0x6B)) + 1096i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1616) + 4i64 * (unsigned __int8)__ROL4__(v5, 16));
                goto LABEL_1036;
            case 0x6C:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1896);
                v24 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 408i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1936) + 216i64) + 8i64 * ((unsigned __int8)v5 ^ 0x3Eu)) + 1768i64);
                goto LABEL_1036;
            case 0x6D:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 824) ^ v11;
                v24 ^= v5 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 8i64 * (unsigned __int8)(62 * v5)) + 1608i64) + 776i64);
                goto LABEL_1036;
            case 0x6E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 616);
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 80);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1040) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 824i64);
                goto LABEL_1036;
            case 0x6F:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 912) + 456i64);
                v24 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1200) + 8i64 * (((unsigned __int8)v5 ^ 1) & 0xA3)) + 56i64) ^ v5;
                goto LABEL_1036;
            case 0x70:
                v12 = v5 ^ (v11 + ~(FuckEnc::CacheRead<_DWORD>(v4 + 496) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 8i64 * ((unsigned __int8)v5 & 0x82)) + 56i64) << 8)));
                goto LABEL_1035;
            case 0x71:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1208) + 464i64) + 256i64) + 1584i64) + 8i64 * (v5 & 0x3C)) + 1864i64) + 120i64) * v5;
                goto LABEL_1036;
            case 0x72:
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 8i64 * ((unsigned __int8)v5 & 0xA5)) + 1808i64));
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1440);
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 280);
                goto LABEL_1036;
            case 0x73:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 256);
                v19 = FuckEnc::CacheRead<_DWORD>(v10 + 936) * (((FuckEnc::CacheRead<_DWORD>(v4 + 936) - 358420829) & 0xFFFFFFE5) + 198246282);
                goto LABEL_1034;
            case 0x74:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 872) + 8i64 * (((unsigned __int8)v5 ^ 0xED) & 0x36)) + 760i64);
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 544) + 8i64 * (__ROL4__(v5, 12) & 0x55)) + 960i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 3));
                goto LABEL_1036;
            case 0x75:
                Calls::FastCall(v4 + 1824, &v24, v5, v4);
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 1720) >> 11;
                goto LABEL_1036;
            case 0x76:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 464) + 1752i64) + 1448i64) + 872i64) + 8i64 * ((unsigned __int8)v5 & 0xE4)) + 1752i64);
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 1112);
                goto LABEL_1036;
            case 0x77:
                v24 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 56) << 23);
                Calls::FastCall(v4 + 184, &v24, v5, v4);
                goto LABEL_1036;
            case 0x78:
                Calls::FastCall(v4 + 184, &v24, v5, v4);
                v12 = v24 + 1022283304 + FuckEnc::CacheRead<_DWORD>(v4 + 1760);
                goto LABEL_1035;
            case 0x79:
                v24 = v11 + ~FuckEnc::CacheRead<_DWORD>(v4 + 1760);
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_BYTE>(v4 + 1064) * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 1808i64) + 10);
                goto LABEL_1036;
            case 0x7A:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 712) ^ v11;
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1592);
                v12 = v24 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1528) + 8i64 * ((unsigned __int8)__ROR4__(v5, 28) & 0xE5)) + 632i64) + 4i64 * ((unsigned __int8)v5 ^ 0xDBu));
                goto LABEL_1035;
            case 0x7B:
                v24 = (v11 + 2007029199) ^ 0x8A7257C4;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 896i64, &v24, v5, v4);
                goto LABEL_1036;
            case 0x7C:
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 600) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1440) & 0x68)) + 712i64));
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 56) + v24 - 1990984228;
                goto LABEL_1036;
            case 0x7D:
                v19 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 128i64) & 0xFFFFFFF5) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1120) + 800i64) + 8i64 * ((unsigned __int8)v5 & 0x85)) + 824i64);
                goto LABEL_1034;
            case 0x7E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1544);
                Calls::FastCall(v10 + 240, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 1240i64));
                goto LABEL_1036;
            case 0x7F:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 1920) ^ v11;
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1776) + 1448i64) + 144i64) + 8i64 * ((unsigned __int8)(80 * v5) & 0x98)) + 1760i64);
                goto LABEL_1036;
            case 0x80:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 888i64) + 792i64);
                v19 = FuckEnc::CacheRead<_DWORD>(v10 + 736) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 880i64) + 712i64);
                goto LABEL_1034;
            case 0x81:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 1432) ^ v11;
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1536) + 1064i64) - 1366520561;
                goto LABEL_1036;
            case 0x82:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1272);
                v24 = FuckEnc::CacheRead<_DWORD>(v10 + 1152) ^ v11;
                v12 = v24 + FuckEnc::CacheRead<_DWORD>(v4 + 1920) * (FuckEnc::CacheRead<_DWORD>(v4 + 456) - 491611224);
                goto LABEL_1035;
            case 0x83:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 1120i64);
                v24 = ~(v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 640) + 4i64 * ((-2 * (_BYTE)v5) & 0x10)) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1592) | 0x12)));
                goto LABEL_1036;
            case 0x84:
                v24 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 1592) & 0xFFFFFFEF;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1120);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 544) + 8i64 * (__ROL4__(v5, 16) & 0x64)) + 280i64) - 685610930;
                goto LABEL_1036;
            case 0x85:
                Calls::FastCall(v4 + 592, &v24, v5, v4);
                v24 += v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 256);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v10 + 408);
                goto LABEL_1036;
            case 0x86:
                v24 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1760) - 1023331973) ^ (683868464 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 1952i64) + 4i64 * (__ROR4__(v5, 1) & 0x5D)));
                goto LABEL_1036;
            case 0x87:
                v24 = v11 - 1023332073 + FuckEnc::CacheRead<_DWORD>(v4 + 736);
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 1040) ^ v5;
                v12 = v24 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1864) + 776i64);
                goto LABEL_1035;
            case 0x88:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1592);
                v24 = v24 - (FuckEnc::CacheRead<_DWORD>(v4 + 56) ^ 0x47489D8B) - v5 + 807458548;
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 1152);
                goto LABEL_1036;
            case 0x89:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1856) + 8i64 * ((7 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1592) ^ 1)) & 0x15)) + 224i64);
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 1808));
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 1440);
                goto LABEL_1036;
            case 0x8A:
                v24 = __ROR4__(v11, v5);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 1064);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 608);
                v24 = __ROR4__(v24, ~FuckEnc::CacheRead<_BYTE>(v4 + 1808));
                goto LABEL_1036;
            case 0x8B:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 8i64 * ((unsigned __int8)v5 & 0x9B)) + 1480i64) + v5;
                v24 += 791609586 * FuckEnc::CacheRead<_DWORD>(v4 + 280);
                goto LABEL_1036;
            case 0x8C:
                Calls::FastCall(v4 + 1520, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 1200i64) + 8i64 * ((unsigned __int8)(51 * FuckEnc::CacheRead<_BYTE>(v4 + 1760)) & 0x89)));
                goto LABEL_1036;
            case 0x8D:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1216);
                v20 = v5 & 0x41;
                v21 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1536) + 1256i64);
                goto LABEL_149;
            case 0x8E:
                v12 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 912) + 1912i64) + 8i64 * (unsigned __int8)(-124 * v5)) + 1216i64) + 472i64) + 8i64 * ((unsigned __int8)v5 & 0xE4)) + 960i64) + 4i64 * (unsigned __int8)(24 * v5));
                goto LABEL_1035;
            case 0x8F:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 456);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1912) + 8i64 * ((unsigned __int8)v5 & 0x80)) + 1256i64) + 8i64 * (((unsigned __int8)v5 ^ 0xFD) & 0x26)) + 1744i64);
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_DWORD>(v10 + 1152));
                goto LABEL_1036;
            case 0x90:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 80) ^ v11;
                v24 = v5 ^ (v24 + FuckEnc::CacheRead<_DWORD>(v4 + 1040));
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1584) + 8i64 * (~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 56) & 0x28)) + 496i64);
                goto LABEL_1036;
            case 0x91:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1392);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1544);
                v12 = v24 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 288) + 144i64) + 8i64 * (((unsigned __int8)v5 ^ 0xED) & 0x72)) + 1696i64);
                goto LABEL_1035;
            case 0x92:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1480);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1536) + 1064i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 960) + 4i64 * (unsigned __int8)__ROR4__(v5 + FuckEnc::CacheRead<_DWORD>(v4 + 1720), 18));
                goto LABEL_1036;
            case 0x93:
                v11 -= FuckEnc::CacheRead<_DWORD>(v4 + 1040);
                v24 = v11;
                v18 = ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1088) + 616i64) + 408i64) << 28;
                goto LABEL_1033;
            case 0x94:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 792i64);
                v12 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 544) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 776) & 0xAD)) + 952i64) + 1264i64);
                goto LABEL_1035;
            case 0x95:
                v24 = v11 - v5;
                v24 = v11 - v5 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 216) + 8i64 * ((unsigned __int8)v5 & 0x95)) + 1064i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 224);
                v24 -= FuckEnc::CacheRead<_DWORD>(v10 + 56);
                goto LABEL_1036;
            case 0x96:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 928) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1264) & 0xB1)) + 1896i64);
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v10 + 776) * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 1592i64));
                goto LABEL_1036;
            case 0x97:
                v24 = v11 ^ 0x3B5F746E;
                v24 = (v11 ^ 0x3B5F746E) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1872) + 1112i64);
                v12 = v24 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(v4 + 1456) + 168i64);
                goto LABEL_1035;
            case 0x98:
                v13 = ((unsigned __int8)v5 ^ 0xB) & 0x6B;
                v14 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1584) + 8i64 * (unsigned __int8)__ROL4__(v5, 24)) + 400i64);
                goto LABEL_13;
            case 0x99:
                v24 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 1432) ^ v5);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 464);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 824) ^ FuckEnc::CacheRead<_DWORD>(v10 + 1696) ^ 0x524A6301;
                goto LABEL_1036;
            case 0x9A:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1432);
                v24 = (v24 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 584) + 1528i64) + 8i64 * (v5 & 0x40)) + 120i64)) ^ 0x722ADF86;
                goto LABEL_1036;
            case 0x9B:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 1432i64);
                v12 = v24 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1288) + 4i64 * (__ROR4__(~FuckEnc::CacheRead<_DWORD>(v4 + 1064), 24) & 0x58));
                goto LABEL_1035;
            case 0x9C:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 784) + 1067157803;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 440i64);
                Calls::FastCall(v4 + 648, &v24, v5, v10);
                goto LABEL_1036;
            case 0x9D:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1544);
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 168);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 912) + 544i64) + 8i64 * (v5 & 0x25)) + 1568i64) + 1152i64);
                goto LABEL_1036;
            case 0x9E:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 296i64);
                v24 = FuckEnc::CacheRead<_DWORD>(v10 + 1040) ^ v11;
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1216) + 1784i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 17)) + 1392i64);
                goto LABEL_1036;
            case 0x9F:
                Calls::FastCall(v4 + 1560, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1448) + 1272i64));
                v24 = ~v24;
                goto LABEL_1036;
            case 0xA0:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 736) ^ v11;
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 600) + 8i64 * (unsigned __int8)(-111 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 8i64 * ((unsigned __int8)v5 ^ 0x98u)) + 768i64) + 1592i64))) + 1480i64);
                goto LABEL_1036;
            case 0xA1:
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1808));
                v24 += ~FuckEnc::CacheRead<_DWORD>(v4 + 1592) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1528) + 8i64 * (unsigned __int8)__ROR4__(v5, 25)) + 280i64);
                goto LABEL_1036;
            case 0xA2:
                v24 = v5 + v11 - FuckEnc::CacheRead<_DWORD>(v4 + 776);
                Calls::FastCall(v4 + 1848, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 8i64 * (unsigned __int8)(108 * v5)));
                goto LABEL_1036;
            case 0xA3:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 880);
                Calls::FastCall(v4 + 1824, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 272) + 8i64 * ((unsigned __int8)v5 & 0xA4)));
                goto LABEL_1036;
            case 0xA4:
                v24 = __ROL4__(~v11, 252) - 659239861;
                v12 = v5 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 880) + 280i64) ^ v24 ^ 0xCE2F8C8E;
                goto LABEL_1035;
            case 0xA5:
                v19 = FuckEnc::CacheRead<_DWORD>(v4 + 824) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 8i64 * ((4 * (unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 776)) & 0x3A)) + 112i64) + 1416i64) + 1112i64);
                goto LABEL_1034;
            case 0xA6:
                v24 = v11 ^ ((_DWORD)0x10110C80 + FuckEnc::CacheRead<_DWORD>(v4 + 712));
                v24 = v24 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1528) + 8i64 * ((unsigned __int8)(8 * v5) & 0xB4)) + 1480i64) - FuckEnc::CacheRead<_DWORD>(v4 + 496);
                goto LABEL_1036;
            case 0xA7:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 80);
                v12 = (v24 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 872) + 8i64 * ((unsigned __int8)v5 & 0xE5)) + 1752i64) + 1296i64) + 4i64 * (__ROR4__(v5, 31) & 0x40))) ^ 0x2B05897F;
                goto LABEL_1035;
            case 0xA8:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 952i64) + 624i64) + 448i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 280) ^ 0x235A3F49);
                goto LABEL_1036;
            case 0xA9:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 288);
                v24 = v11 ^ (1475237895 * ~FuckEnc::CacheRead<_DWORD>(v10 + 1392)) ^ 0xC30131C6;
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 496);
                goto LABEL_1036;
            case 0xAA:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 600i64) + 8i64 * ((unsigned __int8)v5 ^ 0x89u)) + 1384i64) + 8i64 * ((unsigned __int8)v5 ^ 0x21u), &v24, v5, v4);
                goto LABEL_1036;
            case 0xAB:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 288);
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v10 + 1440) * (FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1584) + 8i64 * (unsigned __int8)(-121 * v5)) + 1616i64) + 4i64 * (unsigned __int8)(-61 * v5)) ^ 0xFB));
                goto LABEL_1036;
            case 0xAC:
                v24 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 168) ^ 0xFD5B5B37);
                v24 = v24 - FuckEnc::CacheRead<_DWORD>(v4 + 1264) - v5;
                v12 = v24 + FuckEnc::CacheRead<_DWORD>(v4 + 776);
                goto LABEL_1035;
            case 0xAD:
                v24 = ~FuckEnc::CacheRead<_DWORD>(v4 + 736) + ((1490692417 * FuckEnc::CacheRead<_DWORD>(v4 + 1152)) ^ 0x9D2BA8E5) + v11 + 174732266;
                goto LABEL_1036;
            case 0xAE:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1608);
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 128));
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 408i64);
                goto LABEL_1036;
            case 0xAF:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 280) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 8i64 * ((unsigned __int8)v5 & 0x91)) + 888i64) + 1272i64) + 624i64) + 1720i64);
                goto LABEL_1036;
            case 0xB0:
                Calls::FastCall(v4 + 192, &v24, v5, v4);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1808);
                goto LABEL_1036;
            case 0xB1:
                v24 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1440));
                Calls::FastCall(v4 + 856, &v24, v5, v4);
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 608);
                goto LABEL_1036;
            case 0xB2:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 448i64) - v5;
                v12 = v5 ^ v24 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 1696);
                goto LABEL_1035;
            case 0xB3:
                v24 = v11 - 1854338003;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 912);
                v24 = __ROR4__((v11 - 1854338003) ^ (FuckEnc::CacheRead<_DWORD>(v10 + 456) << 6), 54);
                v12 = FuckEnc::CacheRead<_DWORD>(v4 + 736) ^ v24;
                goto LABEL_1035;
            case 0xB4:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1448) + 1744i64) + 640i64) + 4i64 * ((unsigned __int8)(-75 * v5) & 0xD1)) * (FuckEnc::CacheRead<_DWORD>(v4 + 712) + 1);
                goto LABEL_1036;
            case 0xB5:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 1056i64) + 8i64 * (__ROL4__(v5, 4) & 0xCD), &v24, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1272));
                goto LABEL_1036;
            case 0xB6:
                v24 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1920) >> 5);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1544) + 1416i64);
                v12 = v24 - FuckEnc::CacheRead<_DWORD>(v10 + 736);
                goto LABEL_1035;
            case 0xB7:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 8i64 * (v5 & 0x23)) + 224i64) + 952i64) + 648i64, &v24, v5, v4);
                goto LABEL_1036;
            case 0xB8:
                v14 = FuckEnc::CacheRead<_QWORD>(v4 + 1056);
                v13 = ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1616) + 4i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 824) ^ 0xE5u)) ^ 4) & 0x55;
                goto LABEL_13;
            case 0xB9:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 464);
                Calls::FastCall(v4 + 248, &v24, v5, FuckEnc::CacheRead<_QWORD>(v10 + 1600));
                v24 ^= 0xC6AECD9D;
                goto LABEL_1036;
            case 0xBA:
                v24 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 448);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1568) + 768i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 968) + 4i64 * (unsigned __int8)__ROR4__(v5, 2));
                goto LABEL_1036;
            case 0xBB:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1920);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 104i64) + 760i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1952) + 4i64 * (__ROL4__(v5, 22) & 0x32));
                goto LABEL_1036;
            case 0xBC:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1592);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 1368);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1744) + 1296i64) + 4i64 * (v5 & 0x41)) * v5;
                goto LABEL_1036;
            case 0xBD:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1592);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 768i64) + 960i64) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 784) & 0x11));
                goto LABEL_1036;
            case 0xBE:
                v24 = -(v11 + 1 + FuckEnc::CacheRead<_DWORD>(v4 + 784)) - 1647402356;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 584);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1280) + 1152i64);
                goto LABEL_1036;
            case 0xBF:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 8i64 * ((unsigned __int8)v5 ^ 0xF9u)) + 1088i64) + 912i64);
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1280) + 1944i64) + 4i64 * ((unsigned __int8)(-109 * v5) & 0xFC));
                goto LABEL_1036;
            case 0xC0:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 1528i64) + 8i64 * ((unsigned __int8)v5 ^ 0x15u)) + 1104i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1544);
                v12 = FuckEnc::CacheRead<_DWORD>(v10 + 1104) + v24;
                goto LABEL_1035;
            case 0xC1:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 432) + 784i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1120) + 136i64);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 312) + 4i64 * (v5 & 0x62));
                goto LABEL_1036;
            case 0xC2:
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 1040) + FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1088) + 168i64));
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 256) + 288i64) + 1064i64);
                goto LABEL_1036;
            case 0xC3:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 1392), 15)) + 296i64);
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1944) + 4i64 * (unsigned __int8)__ROR4__(v5, 12));
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 608);
                goto LABEL_1036;
            case 0xC4:
                v24 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 384) * (FuckEnc::CacheRead<_BYTE>(v4 + 608) ^ 0x53));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 256);
                v24 += FuckEnc::CacheRead<_DWORD>(v10 + 120) + 1;
                goto LABEL_1036;
            case 0xC5:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1752);
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 80);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1768) + FuckEnc::CacheRead<_DWORD>(v4 + 120) - 381168891;
                goto LABEL_1036;
            case 0xC6:
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1256) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 448) ^ FuckEnc::CacheRead<_DWORD>(v4 + 1592) ^ 0xC3113139, 16)) + 608i64));
                goto LABEL_1036;
            case 0xC7:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 272) + 8i64 * (v5 & 0x7F)) + 384i64) ^ v11;
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 8i64 * (((unsigned __int8)v5 ^ 0xD3) & 0xBC)) + 824i64);
                goto LABEL_1036;
            case 0xC8:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 280i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 232) + 472i64) + 8i64 * (v5 & 0x55)) + 304i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 19));
                goto LABEL_1036;
            case 0xC9:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 136);
                Calls::FastCall(v10 + 920, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 792) + 1088i64));
                goto LABEL_1036;
            case 0xCA:
                v24 = ~(v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1040));
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1864) + 760i64) + 288i64) + 256i64) + 1696i64);
                goto LABEL_1036;
            case 0xCB:
                v12 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 1456i64) + 8i64 * (unsigned __int8)(125 * FuckEnc::CacheRead<_BYTE>(v4 + 1592))) + 880i64) + 1416i64) + 1696i64);
                goto LABEL_1035;
            case 0xCC:
                v24 = v11 - 1023331916 + FuckEnc::CacheRead<_DWORD>(v4 + 1920);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 552);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 1040) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 880) + 1264i64);
                goto LABEL_1036;
            case 0xCD:
                v24 = v11 - 626141836;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 1536i64);
                v24 = v11 - 626141836 - FuckEnc::CacheRead<_DWORD>(v10 + 1480);
                v24 += 1317534303 * FuckEnc::CacheRead<_DWORD>(v4 + 1760);
                goto LABEL_1036;
            case 0xCE:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1872);
                v24 = (v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1776) + 312i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 18)) << 16)) ^ 0xC3018944;
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_DWORD>(v4 + 1152));
                goto LABEL_1036;
            case 0xCF:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1064);
                Calls::FastCall(v4 + 184, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 8i64 * (unsigned __int8)__ROR4__(v5, 10)) + 1864i64));
                goto LABEL_1036;
            case 0xD0:
                v24 = v11 - 1187297496;
                v12 = v11 - 1187297496 + FuckEnc::CacheRead<_DWORD>(v4 + 496) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 144i64) + 8i64 * (v5 & 0x5B)) + 1440i64);
                goto LABEL_1035;
            case 0xD1:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 608) - 2117922511;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 1936i64);
                v24 = __ROR4__(v24, 125 * FuckEnc::CacheRead<_BYTE>(v10 + 56));
                goto LABEL_1036;
            case 0xD2:
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 128) + 1);
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 8i64 * ((unsigned __int8)v5 ^ 0xEu)) + 1536i64) + 1616i64) + 4i64 * (((unsigned __int8)v5 ^ 0xEB) & 0xD6)));
                goto LABEL_1036;
            case 0xD3:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1240);
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 968) + 4i64 * (v5 & 0x36));
                v12 = ~(v24 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 608));
                goto LABEL_1035;
            case 0xD4:
                Calls::FastCall(v4 + 184, &v24, v5, v4);
                v24 += -2 * v5 - FuckEnc::CacheRead<_DWORD>(v4 + 608);
                goto LABEL_1036;
            case 0xD5:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 128) ^ v11;
                v24 = __ROR4__(v24 - FuckEnc::CacheRead<_DWORD>(v4 + 448) + 381288473, 84);
                v24 = __ROL4__(v24, FuckEnc::CacheRead<_DWORD>(v4 + 496) + 42);
                goto LABEL_1036;
            case 0xD6:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 912) + 256i64) + 1040i64) * ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 880) + 496i64);
                goto LABEL_1036;
            case 0xD7:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 768);
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 128) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 888) + 1440i64);
                v24 ^= v5 + FuckEnc::CacheRead<_DWORD>(v4 + 384);
                goto LABEL_1036;
            case 0xD8:
                v24 = v11 - 2 * FuckEnc::CacheRead<_DWORD>(v4 + 1368);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 824);
                v24 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 56i64) ^ 0x7857A043;
                goto LABEL_1036;
            case 0xD9:
                v24 = __ROR4__(v11, 199);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 216) + 8i64 * (unsigned __int8)__ROR4__(v5, 3)) + 288i64) + 1528i64) + 8i64 * (v5 & 0x72)) + 1920i64);
                goto LABEL_1036;
            case 0xDA:
                v24 = v11 + 1470864384;
                v24 = v11 + 1470864384 + ((FuckEnc::CacheRead<_DWORD>(v4 + 448) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1584) + 8i64 * (unsigned __int8)(69 * v5)) + 1768i64)) << 24);
                goto LABEL_1036;
            case 0xDB:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 8i64 * (unsigned __int8)(39 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1240) + 1952i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 28)))) + 1280i64) + 552i64);
                v24 = FuckEnc::CacheRead<_DWORD>(v10 + 128) ^ v11;
                goto LABEL_1036;
            case 0xDC:
                v24 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 448) * v5);
                v24 -= 985627018 * FuckEnc::CacheRead<_DWORD>(v4 + 1696);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 448i64) ^ v24;
                goto LABEL_1035;
            case 0xDD:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 496);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1088) + 496i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1448) + 280i64);
                goto LABEL_1036;
            case 0xDE:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 824) * (FuckEnc::CacheRead<_DWORD>(v4 + 456) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1536) + 120i64) ^ 0x29BD1CF6);
                goto LABEL_1036;
            case 0xDF:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1264);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1448);
                v24 = __ROL4__(v24, FuckEnc::CacheRead<_BYTE>(v10 + 1592) * ((v5 + FuckEnc::CacheRead<_BYTE>(v4 + 1760)) ^ 0x1A));
                goto LABEL_1036;
            case 0xE0:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1896);
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 408);
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 936i64)) ^ 0xA352081C;
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 1264);
                goto LABEL_1036;
            case 0xE1:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 1096i64) + 104i64);
                v24 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1256) + 8i64 * (unsigned __int8)__ROL4__(v5, 3)) + 928i64) + 8i64 * ((unsigned __int8)v5 & 0xB8)) + 1920i64));
                goto LABEL_1036;
            case 0xE2:
                v24 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1808));
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1368);
                v11 = __ROR4__(v24, FuckEnc::CacheRead<_DWORD>(v4 + 1920));
                v24 = v11;
                v19 = FuckEnc::CacheRead<_DWORD>(v4 + 1592) << 18;
                goto LABEL_1034;
            case 0xE3:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 912);
                v24 = v11 + ((FuckEnc::CacheRead<_DWORD>(v10 + 1440) - 788571257) ^ ~(FuckEnc::CacheRead<_DWORD>(v4 + 120) ^ v5));
                goto LABEL_1036;
            case 0xE4:
                v24 = (v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1760)) ^ 0x7F599C51;
                v24 = v24 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1088) + 760i64) + 1296i64) + 4i64 * (v5 & 0x63)) - v5;
                goto LABEL_1036;
            case 0xE5:
                v24 = v11 - 1730011473;
                v12 = (v11 - 1730011473) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 8i64 * (unsigned __int8)(-82 * v5)) + 1600i64) + 408i64) - 779483187);
                goto LABEL_1035;
            case 0xE6:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 760) + 448i64) ^ v11;
                v12 = (v24 + ((unsigned int)0xF95DB1B ^ FuckEnc::CacheRead<_DWORD>(v4 + 120))) ^ 0x94D1A65D;
                goto LABEL_1035;
            case 0xE7:
                v24 = v11 - 1023309500;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 1784i64) + 8i64 * ((unsigned __int8)v5 & 0x98)) + 1872i64) + 1608i64);
                v24 = FuckEnc::CacheRead<_DWORD>(v10 + 1112) ^ (v11 - 1023309500);
                goto LABEL_1036;
            case 0xE8:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 936);
                v24 = __ROL4__(v24, FuckEnc::CacheRead<_DWORD>(v4 + 56));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 136);
                v24 = __ROL4__(v24, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 640) + 4i64 * ((unsigned __int8)v5 ^ 0x3Du))) - 1523711809;
                goto LABEL_1036;
            case 0xE9:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1872);
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 1416i64) + 312i64) + 4i64 * (~(_BYTE)v5 & 0x4D)) - FuckEnc::CacheRead<_DWORD>(v10 + 608) - 2066278984;
                goto LABEL_1036;
            case 0xEA:
                v24 = v5 ^ (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 736));
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 280) + 1396398255, 26)) + 1272i64) + 712i64);
                goto LABEL_1036;
            case 0xEB:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1152) - v5;
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 600) + 8i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 1760i64), 30) & 0x23)) + 1952i64) + 4i64 * (v5 & 0x32));
                goto LABEL_1036;
            case 0xEC:
                v24 = v11 ^ 0x1F42D8B7;
                v24 = (v11 ^ 0x1F42D8B7) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 800i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 21)) + 712i64);
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 1104);
                goto LABEL_1036;
            case 0xED:
                v24 = v11 + 2140968976 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 232) + 448i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 224) + 888i64) + 224i64) + 1392i64);
                goto LABEL_1036;
            case 0xEE:
                v24 = v11 ^ (32 * FuckEnc::CacheRead<_DWORD>(v4 + 120));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1608);
                v12 = v24 - FuckEnc::CacheRead<_DWORD>(v4 + 168) * (FuckEnc::CacheRead<_DWORD>(v10 + 1432) - 771800650);
                goto LABEL_1035;
            case 0xEF:
                v11 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 784));
                v24 = v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 1600i64);
                v19 = FuckEnc::CacheRead<_DWORD>(v10 + 128) + FuckEnc::CacheRead<_DWORD>(v4 + 1768);
                goto LABEL_1034;
            case 0xF0:
                Calls::FastCall(v4 + 1496, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1256) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 888) + 712i64) ^ 1) & 0x21)));
                goto LABEL_1036;
            case 0xF1:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1240) + 216i64) + 8i64 * ((unsigned __int8)(-111 * v5) & 0xBC)) + 624i64) + 1120i64);
                v19 = FuckEnc::CacheRead<_DWORD>(v10 + 736) | 0x1E;
                goto LABEL_1034;
            case 0xF2:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 8i64 * (unsigned __int8)__ROL4__(v5, 10)) + 560i64) + 136i64) + 784i64);
                v24 = (FuckEnc::CacheRead<_DWORD>(v4 + 496) ^ v24) + 454266811;
                goto LABEL_1036;
            case 0xF3:
                Calls::FastCall(v4 + 1192, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1416) + 1424i64) + 888i64));
                goto LABEL_1036;
            case 0xF4:
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1064));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 1600i64) + 256i64) + 768i64);
                v12 = v24 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 304) + 4i64 * ((63 * (_BYTE)v5) & 0x4E));
                goto LABEL_1035;
            case 0xF5:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 1040) ^ v11;
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 8i64 * ((unsigned __int8)__ROL4__(v5, 20) & 0xAD)) + 56i64) * (FuckEnc::CacheRead<_BYTE>(v4 + 1432) + 58));
                goto LABEL_1036;
            case 0xF6:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 256i64) + 1600i64) + 1936i64);
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 792) + 1104i64) - FuckEnc::CacheRead<_DWORD>(v10 + 1368);
                goto LABEL_1036;
            case 0xF7:
                v24 = __ROR4__(v11, 239);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1280);
                Calls::FastCall(v10 + 920, &v24, v5, v4);
                v24 = ~v24;
                goto LABEL_1036;
            case 0xF8:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1536) + 1192i64, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 256) + 1872i64));
                goto LABEL_1036;
            case 0xF9:
                v24 = v11 - v5 + 1622186389;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 768);
                Calls::FastCall(v4 + 920, &v24, v5, v10);
                goto LABEL_1036;
            case 0xFA:
                v24 = __ROL4__(v11, 80 * (FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 8i64 * ((unsigned __int8)v5 ^ 0x2Fu)) + 824i64) + FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1856) + 8i64 * ((unsigned __int8)__ROL4__(v5, 16) & 0xC9)) + 1592i64)));
                goto LABEL_1036;
            case 0xFB:
                v24 = v11 + ~FuckEnc::CacheRead<_DWORD>(v4 + 280);
                v24 ^= ~(v5 + ((unsigned int)0xE1DD390 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1104) - 1959515313)));
                goto LABEL_1036;
            case 0xFC:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 232);
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1152) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 256) + 1112i64) - v5 - 7829033;
                goto LABEL_1036;
            case 0xFD:
                Calls::FastCall(v4 + 208, &v24, v5, v4);
                v24 += -297996593 * FuckEnc::CacheRead<_DWORD>(v4 + 1152);
                goto LABEL_1036;
            case 0xFE:
                v24 = v11 + 1602668730;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 232);
                v24 = (v11 + 1602668730) ^ (-1537881777 * FuckEnc::CacheRead<_DWORD>(v10 + 736) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 888) + 1768i64));
                goto LABEL_1036;
            case 0xFF:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1920);
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 56);
                v24 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 8i64 * (v5 & 0x1F)) + 552i64) + 128i64);
                goto LABEL_1036;
            case 0x100:
                v24 = v11 + 448853528;
                v24 = ~(1490492355 * FuckEnc::CacheRead<_DWORD>(v4 + 128)) + v11 + 448853528;
                v24 += FuckEnc::CacheRead<unsigned __int8>(v4 + 1435);
                goto LABEL_1036;
            case 0x101:
                v13 = (unsigned __int8)(65 * v5);
                v14 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 1912i64) + 8i64 * ((unsigned __int8)__ROR4__(v5, 12) & 0xAD)) + 1312i64);
                goto LABEL_13;
            case 0x102:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 1152) ^ v11;
                Calls::FastCall(v4 + 592, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1856) + 8i64 * (unsigned __int8)(85 * v5)) + 624i64));
                goto LABEL_1036;
            case 0x103:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 560) + 128i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 296);
                v24 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1528) + 8i64 * (((unsigned __int8)v5 ^ 0x24) & 0xF6)) + 1368i64) ^ 0x2D75E86F;
                goto LABEL_1036;
            case 0x104:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 712i64) ^ v11;
                v24 ^= (-2050421698 * FuckEnc::CacheRead<_DWORD>(v4 + 80)) ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 496));
                goto LABEL_1036;
            case 0x105:
                v24 = v11 + v5;
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 928i64) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1872) + 496i64), 27)) + 280i64) ^ (v11 + v5);
                goto LABEL_1036;
            case 0x106:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1216);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1584) + 8i64 * ((unsigned __int8)~(_BYTE)v5 & 0xF0)) + 896i64, &v24, v5, v10);
                goto LABEL_1036;
            case 0x107:
                v24 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 776) ^ v5);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 56) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 432) + 1744i64) + 1808i64);
                goto LABEL_1036;
            case 0x108:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1568) + 144i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 25)) + 1392i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1928);
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 960) + 4i64 * (unsigned __int8)(-83 * v5)));
                goto LABEL_1036;
            case 0x109:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 904i64, &v24, v5, v4);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1864) + 1440i64);
                goto LABEL_1036;
            case 0x10A:
                v24 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 784), 26)) + 936i64) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1064) ^ 0x8986907B) & 0xFFFFFFE4);
                goto LABEL_1036;
            case 0x10B:
                Calls::FastCall(v4 + 1248, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 296i64) + 1784i64) + 8i64 * (v5 & 0x19)));
                goto LABEL_1036;
            case 0x10C:
                v24 = v11 + 1878218429;
                v24 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 1104i64) ^ (v11 + 1878218429)) + 1023331955;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1568);
                v12 = v24 - FuckEnc::CacheRead<_DWORD>(v10 + 128);
                goto LABEL_1035;
            case 0x10D:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 440);
                v24 = v11 + ((FuckEnc::CacheRead<_DWORD>(v10 + 1104) ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 496)) << 10);
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_DWORD>(v4 + 80));
                goto LABEL_1036;
            case 0x10E:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 456);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1744);
                v12 = v24 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1752) + 1856i64) + 8i64 * (v5 & 0x28)) + 80i64) | 0x19);
                goto LABEL_1035;
            case 0x10F:
                v24 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 384) >> 13);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 560) + 520i64, &v24, v5, v4);
                goto LABEL_1036;
            case 0x110:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1544) + 136i64) + 1944i64) + 4i64 * (((unsigned __int8)v5 ^ 0x4C) & 0xDC)) ^ v11;
                v12 = __ROR4__(v24 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1104) << 25), 84);
                goto LABEL_1035;
            case 0x111:
                v24 = v5 ^ v11;
                v24 = (v5 ^ v11) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 880) + 1928i64) + 496i64);
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 1768) | 0x1C;
                goto LABEL_1036;
            case 0x112:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 600) + 8i64 * (unsigned __int8)(-28 * FuckEnc::CacheRead<_BYTE>(v4 + 1440))) + 888i64) + 1928i64) + 1120i64) + 1928i64);
                v24 = FuckEnc::CacheRead<_DWORD>(v10 + 1040) ^ v11;
                goto LABEL_1036;
            case 0x113:
                v24 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 1768) ^ 0xE164CC99);
                v24 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 8i64 * (((unsigned __int8)v5 ^ 0x11) & 0x91)) + 1856i64) + 8i64 * ((unsigned __int8)v5 & 0xD1)) + 456i64);
                goto LABEL_1036;
            case 0x114:
                v24 = v11 + ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 792) + 280i64) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 216) + 8i64 * ((unsigned __int8)__ROR4__(v5, 25) & 0x94)) + 1760i64));
                goto LABEL_1036;
            case 0x115:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 1064i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1872) + 928i64) + 8i64 * (unsigned __int8)(-11 * v5)) + 784i64);
                goto LABEL_1036;
            case 0x116:
                v24 = v11 - 1022283351 + FuckEnc::CacheRead<_DWORD>(v4 + 456);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1240) + 1416i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1152) ^ 0x9A2D170F;
                goto LABEL_1036;
            case 0x117:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1104);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1280);
                v24 = __ROR4__(v24, 52 * FuckEnc::CacheRead<_BYTE>(v4 + 736) * FuckEnc::CacheRead<_BYTE>(v10 + 1264));
                goto LABEL_1036;
            case 0x118:
                v24 = v5 ^ (v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 1040) ^ 0xC3013141));
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1872) + 912i64) + 1616i64) + 4i64 * (((unsigned __int8)v5 ^ 0xDB) & 0x66)));
                goto LABEL_1036;
            case 0x119:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 792) + 440i64) + 1208i64);
                Calls::FastCall(v10 + 1888, &v24, v5, v4);
                goto LABEL_1036;
            case 0x11A:
                v24 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 1808) ^ 0x408AC9E8 | 7);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 136);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 960) + 4i64 * (unsigned __int8)__ROR4__(v5, 4));
                goto LABEL_1036;
            case 0x11B:
                v24 = v11 ^ 0x37060798;
                v24 = (v11 ^ 0x37060798) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 8i64 * (__ROR4__(v5, 10) & 0x7C)) + 1784i64) + 8i64 * (unsigned __int8)(-115 * v5)) + 136i64) + 456i64);
                goto LABEL_1036;
            case 0x11C:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1368);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 1600i64);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1944) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1264) & 0xB6));
                goto LABEL_1036;
            case 0x11D:
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 384) * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 232) + 776i64) * ~FuckEnc::CacheRead<_BYTE>(v4 + 1592));
                goto LABEL_1036;
            case 0x11E:
                v24 = v11 - 434993308;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 552) + 1424i64);
                v24 = v11 - 434993308 - 765263686 * FuckEnc::CacheRead<_DWORD>(v10 + 1480) * FuckEnc::CacheRead<_DWORD>(v4 + 1720);
                goto LABEL_1036;
            case 0x11F:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 8i64 * (unsigned __int8)__ROR4__(v5, 20)) + 296i64);
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 1440) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1120) + 128i64) & 0xFFFFFFF7);
                goto LABEL_1036;
            case 0x120:
                v24 = (v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 736i64)) ^ 0x48CC0C51;
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 408) & 0xF0)) + 776i64);
                goto LABEL_1036;
            case 0x121:
                v24 = v5 + v11 + 1288765297 * FuckEnc::CacheRead<_DWORD>(v4 + 608);
                v24 = v24 - (FuckEnc::CacheRead<_DWORD>(v4 + 456) & 0xFFFFFFF5) - FuckEnc::CacheRead<_DWORD>(v4 + 608);
                goto LABEL_1036;
            case 0x122:
                v24 = ~(v5 ^ __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1864) + 1392i64)));
                v24 = __ROL4__(v24, ~FuckEnc::CacheRead<_BYTE>(v4 + 1368));
                goto LABEL_1036;
            case 0x123:
                v24 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1208) + 1624i64) + 4i64 * ((unsigned __int8)v5 ^ 0x58u)) * (FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 464) + 1760i64) ^ 0x31));
                goto LABEL_1036;
            case 0x124:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1856) + 8i64 * (unsigned __int8)(111 * v5)) + 1584i64) + 8i64 * (unsigned __int8)(46 * v5)) + 136i64) + 472i64) + 8i64 * (((unsigned __int8)v5 ^ 0x16) & 0x97)) + 1104i64) ^ v11;
                goto LABEL_1036;
            case 0x125:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1776) + 1432i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 792) + 1608i64);
                v12 = ~(v24 + FuckEnc::CacheRead<_DWORD>(v10 + 1064));
                goto LABEL_1035;
            case 0x126:
                v24 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1368) << 27);
                v24 = __ROL4__(v24, ~FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1944) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 1392), 10))) + 1450392543;
                goto LABEL_1036;
            case 0x127:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1096);
                v24 = FuckEnc::CacheRead<_DWORD>(v10 + 1920) ^ v11;
                v24 = v24 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 760) + 384i64) - FuckEnc::CacheRead<_DWORD>(v4 + 1592);
                goto LABEL_1036;
            case 0x128:
                v24 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 456) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 1920i64);
                v12 = v24 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 1104i64);
                goto LABEL_1035;
            case 0x129:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 544i64) + 8i64 * ((-10 * (_BYTE)v5) & 0x19)) + 104i64) + 544i64) + 8i64 * (unsigned __int8)(-118 * v5)) + 1440i64);
                goto LABEL_1036;
            case 0x12A:
                v24 = (v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1392)) ^ 0x5F21DEDA;
                v24 = (v24 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1808) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 56i64))) - 741072670;
                goto LABEL_1036;
            case 0x12B:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 1808) ^ v11;
                v12 = v24 + -(FuckEnc::CacheRead<_DWORD>(v4 + 1104) + 1541938717) - 1613592485;
                goto LABEL_1035;
            case 0x12C:
                v24 = v11 + ~(176548169 * ~FuckEnc::CacheRead<_DWORD>(v4 + 1368)) + (FuckEnc::CacheRead<_DWORD>(v4 + 1440) << 23);
                goto LABEL_1036;
            case 0x12D:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 256) + 1560i64, &v24, v5, v4);
                v24 += 765752260 * FuckEnc::CacheRead<_DWORD>(v4 + 784);
                goto LABEL_1036;
            case 0x12E:
                v24 = v5 ^ (v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1208) + 312i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 25)));
                v24 = ~__ROR4__(v24, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1208) + 56i64));
                goto LABEL_1036;
            case 0x12F:
                v24 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 456) ^ 0x70B2931A);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1584) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 736) & 0xAA)) + 280i64);
                goto LABEL_1036;
            case 0x130:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1936);
                v24 = v5 ^ FuckEnc::CacheRead<_DWORD>(v10 + 1040) ^ v11;
                v24 = __ROL4__(v24, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1616) + 4i64 * ((unsigned __int8)(100 * FuckEnc::CacheRead<_BYTE>(v4 + 784)) & 0x9E)) ^ 0x34);
                goto LABEL_1036;
            case 0x131:
                v24 = v11 + v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 944);
                Calls::FastCall(v10 + 1840, &v24, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1272));
                goto LABEL_1036;
            case 0x132:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 8i64 * ((unsigned __int8)v5 & 0xAA)) + 440i64) + 1768i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 888);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1720);
                goto LABEL_1036;
            case 0x133:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1864);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 72) + 8i64 * ((unsigned __int8)v5 ^ 0x4Bu), &v24, v5, v4);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1432);
                goto LABEL_1036;
            case 0x134:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1808);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 784) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1368) + (FuckEnc::CacheRead<_DWORD>(v4 + 496) ^ 0xA67C9619));
                goto LABEL_1036;
            case 0x135:
                v24 = v11 + 1 + FuckEnc::CacheRead<_DWORD>(v4 + 1040);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 280) ^ 0x7CAF5C64;
                v12 = v24 + FuckEnc::CacheRead<_DWORD>(v4 + 784);
                goto LABEL_1035;
            case 0x136:
                v11 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1896) + 912i64) + 1104i64));
                v24 = v11;
                v19 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 312i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 29)) | 0x1A;
                goto LABEL_1034;
            case 0x137:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 824);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 912);
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1912) + 8i64 * ((unsigned __int8)__ROR4__(v5, 8) & 0xF3)) + 128i64) >> 30);
                goto LABEL_1036;
            case 0x138:
                v22 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1120) + 440i64) + 168i64);
                v24 = v22 + v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 136);
                v24 = __ROR4__(v22 + v5, FuckEnc::CacheRead<_BYTE>(v10 + 80) * v5);
                goto LABEL_1036;
            case 0x139:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 736) ^ 0x28) & 0xBD)) + 1912i64) + 8i64 * ((unsigned __int8)v5 ^ 0xCu)) + 584i64) + 384i64) ^ v11 ^ 0xBB9904F7;
                goto LABEL_1036;
            case 0x13A:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 448);
                Calls::FastCall(v4 + 240, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 544) + 8i64 * (unsigned __int8)(80 * v5)) + 1272i64));
                goto LABEL_1036;
            case 0x13B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1544);
                v24 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 608) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 552) + 1784i64) + 8i64 * (unsigned __int8)(-29 * v5)) + 608i64));
                goto LABEL_1036;
            case 0x13C:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 80);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1152);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 1896i64) + 1752i64) + 448i64);
                goto LABEL_1036;
            case 0x13D:
                v24 = v11 - 771800675 * FuckEnc::CacheRead<_DWORD>(v4 + 1696);
                v24 = 771583972 * FuckEnc::CacheRead<_DWORD>(v4 + 1152) + v24 - 1983628485;
                goto LABEL_1036;
            case 0x13E:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 880) + 112i64);
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 872) + 8i64 * (unsigned __int8)__ROR4__(v5, 21)) + 456i64);
                goto LABEL_1036;
            case 0x13F:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 1608i64) + 1544i64) + 1256i64) + 8i64 * (v5 & 0x48)) + 888i64) + 1744i64);
                v24 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 80));
                goto LABEL_1036;
            case 0x140:
                v24 = v11 + 857889474;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 272) + 8i64 * ((-3 * (_BYTE)v5) & 0x14)) + 216i64) + 8i64 * ((unsigned __int8)v5 & 0xBF)) + 1216i64);
                v24 = FuckEnc::CacheRead<_DWORD>(v10 + 1064) ^ (v11 + 857889474);
                goto LABEL_1036;
            case 0x141:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 1768i64);
                v24 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 584) + 144i64) + 8i64 * ((unsigned __int8)v5 & 0xBE)) + 560i64) + 448i64);
                goto LABEL_1036;
            case 0x142:
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 56i64));
                v24 = __ROL4__(v24, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 584) + 1392i64) ^ (FuckEnc::CacheRead<_BYTE>(v4 + 736) + 49));
                goto LABEL_1036;
            case 0x143:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1088) + 1256i64) + 8i64 * (v5 & 0x13)) + 1208i64);
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1936) + 1856i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 25)) + 1768i64) ^ v11;
                goto LABEL_1036;
            case 0x144:
                Calls::FastCall(v4 + 240, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1912) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1856) + 8i64 * (unsigned __int8)__ROL4__(v5, 10)) + 1944i64) + 4i64 * (unsigned __int8)(80 * v5)) ^ 0xC) & 0x4E)));
                goto LABEL_1036;
            case 0x145:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1864) + 1544i64) + 1568i64);
                v12 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1104) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 624) + 1952i64) + 4i64 * (v5 & 0x16));
                goto LABEL_1035;
            case 0x146:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1896);
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1264) + v5;
                v24 ^= ~(FuckEnc::CacheRead<_DWORD>(v4 + 736) ^ 0xC301319A);
                goto LABEL_1036;
            case 0x147:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 560) + 1528i64) + 8i64 * ((unsigned __int8)v5 & 0xB2)) + 288i64) + 216i64) + 8i64 * (v5 & 0x7D)) + 1104i64) ^ v11;
                goto LABEL_1036;
            case 0x148:
                v24 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 168) >> 2);
                Calls::FastCall(v4 + 264, &v24, v5, v4);
                goto LABEL_1036;
            case 0x149:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 496);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 952i64) + 1272i64) + 432i64);
                v12 = v24 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1624) + 4i64 * (v5 & 0x4E));
                goto LABEL_1035;
            case 0x14A:
                v24 = v11 ^ 0x95EA0181;
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 1696) ^ v11 ^ 0x95EA0181;
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 1808) << 23;
                v12 = FuckEnc::CacheRead<_DWORD>(v4 + 128) + v24;
                goto LABEL_1035;
            case 0x14B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 440);
                Calls::FastCall(v10 + 320, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 272) + 8i64 * ((unsigned __int8)v5 & 0xB6)));
                goto LABEL_1036;
            case 0x14C:
                v24 = v11 + 1 + FuckEnc::CacheRead<_DWORD>(v4 + 776);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1112) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1216) + 888i64) + 1760i64);
                goto LABEL_1036;
            case 0x14D:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 608) - 1022011709;
                Calls::FastCall(v4 + 1520, &v24, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1568));
                goto LABEL_1036;
            case 0x14E:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1584) + 8i64 * ((26 * (FuckEnc::CacheRead<_DWORD>(v4 + 1760) & 0xFB)) & 0x5E)) + 1456i64) + 8i64 * (__ROR4__(v5, 25) & 0x37)) + 1920i64) ^ v11;
                goto LABEL_1036;
            case 0x14F:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 272) + 8i64 * (unsigned __int8)(-82 * v5)) + 624i64) + 1568i64);
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1584) + 8i64 * (unsigned __int8)__ROR4__(v5, 30)) + 1696i64) ^ v11;
                goto LABEL_1036;
            case 0x150:
                v19 = FuckEnc::CacheRead<_DWORD>(v4 + 1432) * (FuckEnc::CacheRead<_DWORD>(v4 + 784) ^ FuckEnc::CacheRead<_DWORD>(v4 + 448) & 0xFFFFFFE0);
                goto LABEL_1034;
            case 0x151:
                Calls::FastCall(v4 + 248, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 8i64 * ((unsigned __int8)(v5 * (FuckEnc::CacheRead<_BYTE>(v4 + 1112) + 1)) ^ 0x50u)));
                goto LABEL_1036;
            case 0x152:
                v24 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 80i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 216) + 8i64 * (((unsigned __int8)v5 ^ 4) & 0x15)) + 144i64) + 8i64 * (((unsigned __int8)v5 ^ 0x41) & 0xE1)) + 168i64));
                goto LABEL_1036;
            case 0x153:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 224) + 432i64) + 1448i64) + 288i64) + 1448i64);
                Calls::FastCall(v4 + 1520, &v24, v5, v10);
                goto LABEL_1036;
            case 0x154:
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1288) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 824) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1872) + 1200i64) + 8i64 * ((unsigned __int8)v5 & 0x98)) + 1368i64), 5)));
                goto LABEL_1036;
            case 0x155:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 960i64) + 4i64 * ((unsigned __int8)__ROR4__(v5, 11) & 0xA1)) - FuckEnc::CacheRead<_DWORD>(v4 + 1592) - v5 + 1887776513;
                goto LABEL_1036;
            case 0x156:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 288);
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1768);
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_BYTE>(v4 + 1112));
                goto LABEL_1036;
            case 0x157:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 136) + 944i64);
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 232) + 1720i64)) - v5;
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1152);
                goto LABEL_1036;
            case 0x158:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 1088i64) + 1416i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 104) + 528i64, &v24, v5, v4);
                goto LABEL_1036;
            case 0x159:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 616);
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 168);
                v24 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 8i64 * (v5 & 0x1A)) + 312i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 4)) * v5;
                goto LABEL_1036;
            case 0x15A:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 128);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 928) + 8i64 * (((unsigned __int8)v5 ^ 0xF3) & 0x4D)) + 1304i64, &v24, v5, v4);
                goto LABEL_1036;
            case 0x15B:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 304) + 4i64 * ((-23 * FuckEnc::CacheRead<_BYTE>(v4 + 1040)) & 0x3F));
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1536) + 408i64);
                goto LABEL_1036;
            case 0x15C:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1928);
                v24 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1240) + 712i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1216) + 1896i64) + 1272i64) + 456i64);
                goto LABEL_1036;
            case 0x15D:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 464);
                Calls::FastCall(v10 + 208, &v24, v5, v4);
                v24 ^= 0x2C3CB47u;
                v12 = FuckEnc::CacheRead<_DWORD>(v4 + 80) + v24;
                goto LABEL_1035;
            case 0x15E:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1896) + 280i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1872);
                v24 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1272) + 1392i64);
                goto LABEL_1036;
            case 0x15F:
                v24 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 712) + 1620181527) ^ 0x3CFE76BB;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1872);
                v12 = FuckEnc::CacheRead<_DWORD>(v10 + 1264) + v24 + 1;
                goto LABEL_1035;
            case 0x160:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 280);
                v12 = v24 + (FuckEnc::CacheRead<_DWORD>(v4 + 408) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1856) + 8i64 * (unsigned __int8)__ROR4__(v5, 7)) + 1368i64));
                goto LABEL_1035;
            case 0x161:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1584) + 8i64 * (unsigned __int8)(-25 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1744) + 1944i64) + 4i64 * (v5 & 0x3E)))) + 1568i64);
                Calls::FastCall(v4 + 848, &v24, v5, v10);
                goto LABEL_1036;
            case 0x162:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1112);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1416);
                v24 = __ROL4__(v24, FuckEnc::CacheRead<_DWORD>(v10 + 1696));
                v24 -= (unsigned int)(1941127907 * FuckEnc::CacheRead<_DWORD>(v4 + 1920)) >> 15;
                goto LABEL_1036;
            case 0x163:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1200) + 8i64 * ((unsigned __int8)(-4 * v5) & 0x8B)) + 448i64) - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1568) + 1216i64);
                v24 -= FuckEnc::CacheRead<_DWORD>(v10 + 1720);
                goto LABEL_1036;
            case 0x164:
                v24 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 1064);
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 280) - 1020218411;
                v24 += v5 + FuckEnc::CacheRead<_DWORD>(v4 + 1696);
                goto LABEL_1036;
            case 0x165:
                v24 = v5 + v11 - 819571619;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1872) + 1280i64) + 552i64);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1416) + 448i64);
                goto LABEL_1036;
            case 0x166:
                v24 = __ROR4__(v11 + 1921812596 * FuckEnc::CacheRead<_DWORD>(v4 + 280) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 8i64 * ((unsigned __int8)(124 * v5) & 0x8E)) + 280i64), 220);
                goto LABEL_1036;
            case 0x167:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 584) + 232i64) + 1192i64, &v24, v5, v4);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 456);
                goto LABEL_1036;
            case 0x168:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 8i64 * ((unsigned __int8)v5 & 0xEB)) + 1216i64);
                Calls::FastCall(v10 + 1832, &v24, v5, v4);
                goto LABEL_1036;
            case 0x169:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 1952i64) + 4i64 * ((unsigned __int8)v5 & 0x81));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1536) + 296i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1296) + 4i64 * ((unsigned __int8)v5 & 0xC8));
                goto LABEL_1036;
            case 0x16A:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1064);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1240);
                v24 += FuckEnc::CacheRead<_DWORD>(v10 + 776) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 1720i64) | 0xB;
                goto LABEL_1036;
            case 0x16B:
                v11 -= FuckEnc::CacheRead<_DWORD>(v4 + 784);
                v24 = v11;
                v19 = FuckEnc::CacheRead<_DWORD>(v4 + 1112) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 1808), 1)) + 1480i64) | 0xA;
                goto LABEL_1034;
            case 0x16C:
                v24 = (FuckEnc::CacheRead<_DWORD>(v4 + 712) ^ v11) + 943734759;
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 1696);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 232) + 1568i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1480);
                goto LABEL_1036;
            case 0x16D:
                v24 = v11 ^ (1767684642 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 432) + 1264i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 104);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 912) + 712i64);
                goto LABEL_1036;
            case 0x16E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 256);
                v24 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 408));
                Calls::FastCall(v4 + 1824, &v24, v5, v4);
                goto LABEL_1036;
            case 0x16F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1216);
                v24 = v11 - 1809964944 + FuckEnc::CacheRead<_DWORD>(v10 + 1152);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 1760) * (FuckEnc::CacheRead<_DWORD>(v4 + 1432) + 1313585406);
                goto LABEL_1036;
            case 0x170:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1864) + 1040i64);
                v12 = v24 + ((FuckEnc::CacheRead<_DWORD>(v4 + 1696) + FuckEnc::CacheRead<_DWORD>(v4 + 1720) * v5) << 14);
                goto LABEL_1035;
            case 0x171:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1896);
                v24 = v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 872) + 8i64 * (unsigned __int8)(-79 * FuckEnc::CacheRead<_BYTE>(v10 + 776))) + 1696i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 120i64);
                goto LABEL_1036;
            case 0x172:
                v24 = v5 ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 8i64 * ((unsigned __int8)(FuckEnc::CacheRead<_BYTE>(v4 + 1104) + 35) ^ 0x10u)) + 912i64);
                v24 = __ROL4__(v5 ^ v11, FuckEnc::CacheRead<_DWORD>(v10 + 128));
                goto LABEL_1036;
            case 0x173:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1216);
                v24 = v11 + ((-1688736568 * FuckEnc::CacheRead<_DWORD>(v4 + 1696)) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1208) + 120i64));
                goto LABEL_1036;
            case 0x174:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1744) + 1152i64) ^ v11;
                v24 = __ROR4__(v24 + 999499368 * FuckEnc::CacheRead<_DWORD>(v4 + 1264), 144);
                v24 = __ROL4__(v24, FuckEnc::CacheRead<_DWORD>(v4 + 168));
                goto LABEL_1036;
            case 0x175:
                v24 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 1392) >> 19);
                v24 = __ROL4__(v24, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1448) + 1256i64) + 8i64 * ((unsigned __int8)(-20 * v5) & 0xD0)) + 784i64));
                goto LABEL_1036;
            case 0x176:
                Calls::FastCall(v4 + 1184, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 8i64 * ((unsigned __int8)v5 ^ 0x43u)));
                v24 ^= ~FuckEnc::CacheRead<_DWORD>(v4 + 784);
                goto LABEL_1036;
            case 0x177:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 1720) ^ v11;
                v24 = __ROR4__(v24, ~FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 272) + 8i64 * (unsigned __int8)(-59 * v5)) + 384i64), 11)) + 1592i64));
                goto LABEL_1036;
            case 0x178:
                v24 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 1368) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 792) + 1912i64) + 8i64 * ((-55 * (_BYTE)v5) & 0x4D)) + 1432i64) ^ 0xF40BEF2C);
                goto LABEL_1036;
            case 0x179:
                v24 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 712) * v5);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 1096i64);
                v12 = v24 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1240) + 1152i64);
                goto LABEL_1035;
            case 0x17A:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 1864i64) + 1392i64) ^ v11 ^ 0xCB98A049;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1544);
                v12 = v24 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1624) + 4i64 * (unsigned __int8)(117 * v5));
                goto LABEL_1035;
            case 0x17B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1424);
                v24 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1544) + 168i64));
                v12 = v24 + (FuckEnc::CacheRead<_DWORD>(v4 + 776) ^ 0xFB6BF926) + 560777665;
                goto LABEL_1035;
            case 0x17C:
                v24 = __ROL4__(v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 872) + 8i64 * (unsigned __int8)(-22 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1208) + 1256i64) + 8i64 * (unsigned __int8)(54 * v5)) + 1264i64))) + 1392i64), 49);
                goto LABEL_1036;
            case 0x17D:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 552) + 632i64) + 4i64 * ((unsigned __int8)v5 & 0xE3));
                v24 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 304i64) + 4i64 * (unsigned __int8)(-121 * v5)) + 1;
                goto LABEL_1036;
            case 0x17E:
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 936));
                v12 = v24 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 1240i64) + 1928i64) + 216i64) + 8i64 * ((unsigned __int8)(-19 * v5) & 0x97)) + 784i64);
                goto LABEL_1035;
            case 0x17F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 256);
                v24 = v11 + 1 + FuckEnc::CacheRead<_DWORD>(v10 + 1064);
                v24 = v5 + v24 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1584) + 8i64 * (__ROR4__(v5, 8) & 0x73)) + 1064i64);
                goto LABEL_1036;
            case 0x180:
                v24 = v11 ^ (((8 * FuckEnc::CacheRead<_DWORD>(v4 + 1152)) ^ 0xD0FF4462) - 1022283273 * FuckEnc::CacheRead<_DWORD>(v4 + 1152));
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_DWORD>(v4 + 1104));
                goto LABEL_1036;
            case 0x181:
                v24 = v11 - 462568315;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 560);
                v24 = __ROL4__(v11 - 462568315, FuckEnc::CacheRead<_BYTE>(v10 + 1432) ^ (FuckEnc::CacheRead<_BYTE>(v4 + 1440) - 37));
                goto LABEL_1036;
            case 0x182:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 136);
                v24 = v11 + 703453480 * FuckEnc::CacheRead<_DWORD>(v10 + 1112);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 8i64 * (unsigned __int8)(-85 * v5)) + 1616i64) + 4i64 * ((unsigned __int8)v5 ^ 0xF4u));
                goto LABEL_1036;
            case 0x183:
                v24 = ~(v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1480));
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 592i64, &v24, v5, v4);
                goto LABEL_1036;
            case 0x184:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 8i64 * ((unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 1440), 1) & 0xB7)) + 1096i64);
                v19 = FuckEnc::CacheRead<_DWORD>(v10 + 168) + FuckEnc::CacheRead<unsigned __int16>(v4 + 122);
                goto LABEL_1034;
            case 0x185:
                Calls::FastCall(v4 + 184, &v24, v5, v4);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 168);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 456);
                goto LABEL_1036;
            case 0x186:
                v24 = ~(v5 + v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1480)) - v5;
                v12 = v24 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 8i64 * (unsigned __int8)(-55 * v5)) + 1040i64);
                goto LABEL_1035;
            case 0x187:
                v11 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1544) + 960i64) + 4i64 * ((unsigned __int8)v5 ^ 0x35u)));
                v24 = v11;
                v19 = v5 + ~FuckEnc::CacheRead<_DWORD>(v4 + 784);
                goto LABEL_1034;
            case 0x188:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 1368) ^ v11;
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1088) + 1152i64);
                v12 = v24 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 760) + 456i64);
                goto LABEL_1035;
            case 0x189:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 232) + 1480i64) ^ 0xDF) & 0xB4)) + 1600i64);
                v12 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 464) + 824i64);
                goto LABEL_1035;
            case 0x18A:
                v24 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 1112i64));
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 560) + 968i64) + 4i64 * ((unsigned __int8)v5 & 0xD4));
                goto LABEL_1036;
            case 0x18B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 584);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1424) + 1200i64) + 8i64 * ((unsigned __int8)v5 ^ 1u)) + 1512i64, &v24, v5, v4);
                goto LABEL_1036;
            case 0x18C:
                v24 = v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 136) + 1720i64);
                v24 += v5 * (FuckEnc::CacheRead<_DWORD>(v4 + 128) | 8);
                goto LABEL_1036;
            case 0x18D:
                Calls::FastCall(v4 + 192, &v24, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 952);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v10 + 776) ^ 0xAD44E431;
                goto LABEL_1036;
            case 0x18E:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1104);
                Calls::FastCall(v4 + 1224, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 952i64));
                goto LABEL_1036;
            case 0x18F:
                v24 = v5 + (FuckEnc::CacheRead<_DWORD>(v4 + 80) ^ v11) - 788563484;
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 56) & 0xD4)) + 1112i64);
                goto LABEL_1036;
            case 0x190:
                v24 = __ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 560) + 1936i64) + 1752i64) + 1528i64) + 8i64 * (unsigned __int8)(-21 * v5)) + 304i64) + 4i64 * ((unsigned __int8)v5 & 0x88)) ^ v11, 232);
                goto LABEL_1036;
            case 0x191:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 952);
                v24 = v11 - ((FuckEnc::CacheRead<_DWORD>(v10 + 1264) << 29) ^ (792560853 - FuckEnc::CacheRead<_DWORD>(v4 + 456)));
                goto LABEL_1036;
            case 0x192:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1432);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1584) + 8i64 * ((unsigned __int8)v5 ^ 0xC4u)) + 1088i64) + 1280i64);
                v24 -= FuckEnc::CacheRead<_DWORD>(v10 + 120);
                goto LABEL_1036;
            case 0x193:
                v24 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 1480) | 3);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 1856i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 6)) + 888i64) + 1920i64);
                goto LABEL_1036;
            case 0x194:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 168);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1544);
                v24 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 616) + 56i64) ^ v24 ^ 0x148275F6);
                goto LABEL_1036;
            case 0x195:
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 120));
                Calls::FastCall(v4 + 1576, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1744) + 1528i64) + 8i64 * (unsigned __int8)(-37 * v5)));
                goto LABEL_1036;
            case 0x196:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1776) + 1040i64) ^ v11;
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 928) + 8i64 * (unsigned __int8)__ROR4__(v5, 8)) + 1536i64) + 440i64) + 1112i64));
                goto LABEL_1036;
            case 0x197:
                v24 = v5 + v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1392);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 456), 30)) + 1760i64) + v24 + 1;
                goto LABEL_1035;
            case 0x198:
                v24 = v5 + v11 + 1023332015;
                v24 = v11 + 1023332015 - FuckEnc::CacheRead<_DWORD>(v4 + 1064);
                v12 = v24 - 1023309500 * FuckEnc::CacheRead<_DWORD>(v4 + 384);
                goto LABEL_1035;
            case 0x199:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 288i64) + 288i64) + 1528i64) + 8i64 * ((unsigned __int8)v5 ^ 0x9Fu)) + 112i64) + 944i64) + 128i64);
                goto LABEL_1036;
            case 0x19A:
                v24 = ~(v11 - 196285121 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 256) + 1480i64)) - v5;
                goto LABEL_1036;
            case 0x19B:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 128) ^ v11;
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 1104);
                Calls::FastCall(v4 + 248, &v24, v5, v4);
                goto LABEL_1036;
            case 0x19C:
                v12 = v11 + 811333680 * (FuckEnc::CacheRead<_DWORD>(v4 + 1264) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 800i64) + 8i64 * ((unsigned __int8)__ROL4__(v5, 21) & 0xCF)) + 1064i64));
                goto LABEL_1035;
            case 0x19D:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 760) + 800i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 5)) + 1280i64) + 1632i64, &v24, v5, v4);
                goto LABEL_1036;
            case 0x19E:
                v24 = (v11 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1952) + 4i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1416) + 408i64) & 0x45))) - 1147369708;
                v24 ^= v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 1768);
                goto LABEL_1036;
            case 0x19F:
                v13 = (unsigned __int8)(-34 * v5);
                v14 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1856) + 8i64 * (unsigned __int8)(38 * v5)) + 1384i64);
                goto LABEL_13;
            case 0x1A0:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 8i64 * (unsigned __int8)(-46 * v5)) + 464i64);
                Calls::FastCall(v4 + 1192, &v24, v5, v10);
                goto LABEL_1036;
            case 0x1A1:
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1216) + 1256i64) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 120), 19)) + 128i64));
                goto LABEL_1036;
            case 0x1A2:
                Calls::FastCall(v4 + 1304, &v24, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1752));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1416);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1296) + 4i64 * (unsigned __int8)(84 * v5));
                goto LABEL_1036;
            case 0x1A3:
                v24 = ~(FuckEnc::CacheRead<_DWORD>(v4 + 408) ^ v11);
                v24 = __ROL4__(v24, FuckEnc::CacheRead<_DWORD>(v4 + 168));
                v24 += 335544320 * FuckEnc::CacheRead<_DWORD>(v4 + 1808);
                goto LABEL_1036;
            case 0x1A4:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1872) + 1856i64) + 8i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 608i64), 14) & 0x36)) + 1448i64);
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 56);
                goto LABEL_1036;
            case 0x1A5:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 272) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1696) ^ 0xFEu)) + 312i64) + 4i64 * (unsigned __int8)(-71 * v5));
                v12 = FuckEnc::CacheRead<_DWORD>(v4 + 784) + v24;
                goto LABEL_1035;
            case 0x1A6:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 760) + 1944i64) + 4i64 * (unsigned __int8)(-32 * v5)) ^ v11;
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 8i64 * (unsigned __int8)(102 * v5)) + 464i64) + 448i64);
                goto LABEL_1036;
            case 0x1A7:
                v24 = ~(v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 8i64 * ((unsigned __int8)v5 ^ 0xB2u)) + 872i64) + 8i64 * (unsigned __int8)(-90 * FuckEnc::CacheRead<_BYTE>(v4 + 736))) + 736i64) + 1);
                goto LABEL_1036;
            case 0x1A8:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1864);
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 1760);
                v24 = v5 + __ROR4__(v24, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 1288i64) + 4i64 * (v5 & 0x74)) | 5);
                goto LABEL_1036;
            case 0x1A9:
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 1440i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 288);
                Calls::FastCall(v4 + 192, &v24, v5, v10);
                goto LABEL_1036;
            case 0x1AA:
                v23 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1200) + 8i64 * ((unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 408), 15) & 0xB1)) + 600i64) + 8i64 * ((unsigned __int8)v5 ^ 0x83u));
                goto LABEL_435;
            case 0x1AB:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 128) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 760) + 1544i64);
                v12 = v24 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 448) - 1609447928) ^ 0x2A13A78B;
                goto LABEL_1035;
            case 0x1AC:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1696) - v5;
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 128);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 288);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 312) + 4i64 * (unsigned __int8)__ROL4__(v5, 25));
                goto LABEL_1036;
            case 0x1AD:
                Calls::FastCall(v4 + 1832, &v24, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 760) + 440i64);
                v24 = __ROL4__(v24, FuckEnc::CacheRead<_DWORD>(v10 + 1768));
                goto LABEL_1036;
            case 0x1AE:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 1568i64) + 552i64);
                Calls::FastCall(v4 + 208, &v24, v5, v10);
                goto LABEL_1036;
            case 0x1AF:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1936);
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1264);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1528) + 8i64 * (unsigned __int8)__ROL4__(v5, 28)) + 712i64);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 1480);
                goto LABEL_1036;
            case 0x1B0:
                v12 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 712), 29)) + 1392i64) ^ 0x69554E44 | 0x18) ^ 0x629D9459;
                goto LABEL_1035;
            case 0x1B1:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1152);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1568);
                v24 += FuckEnc::CacheRead<_DWORD>(v10 + 608) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1120) + 608i64) | 3);
                goto LABEL_1036;
            case 0x1B2:
                v24 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 496) >> 1);
                v24 = __ROR4__(v24, (FuckEnc::CacheRead<_BYTE>(v4 + 56) | 0x16) + (FuckEnc::CacheRead<_BYTE>(v4 + 1760) ^ v5));
                goto LABEL_1036;
            case 0x1B3:
                v24 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 936) & 0xFFFFFFEE);
                v12 = ~(v24 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 552) + 1440i64));
                goto LABEL_1035;
            case 0x1B4:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 280);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 616);
                Calls::FastCall(v10 + 1840, &v24, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1608));
                goto LABEL_1036;
            case 0x1B5:
                v24 = v11 + 1660668879;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 552);
                Calls::FastCall(v4 + 1496, &v24, v5, v10);
                v24 = __ROR4__(v24, v5);
                goto LABEL_1036;
            case 0x1B6:
                Calls::FastCall(v4 + 976, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1872) + 1544i64) + 1776i64));
                v24 = __ROL4__(v24, 68);
                goto LABEL_1036;
            case 0x1B7:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 544) + 8i64 * (v5 & 0x43)) + 608i64);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 792) + 616i64) + 1920i64);
                goto LABEL_1036;
            case 0x1B8:
                v24 = (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 496)) ^ 0xDA3B2248;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 136i64);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 928) + 8i64 * ((-3 * (_BYTE)v5) & 9)) + 824i64);
                goto LABEL_1036;
            case 0x1B9:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 776);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1920);
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 1768) + v24 - 1996987871;
                v12 = FuckEnc::CacheRead<_DWORD>(v4 + 1040) + v24;
                goto LABEL_1035;
            case 0x1BA:
                Calls::FastCall(v4 + 1168, &v24, v5, v4);
                v24 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1256) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 712), 16)) + 128i64);
                goto LABEL_1036;
            case 0x1BB:
                Calls::FastCall(FuckEnc::CacheReadPlural<_QWORD>(v4 + 1776) + 8i64 * (unsigned __int8)__ROL4__(v5, 14), &v24, v5, FuckEnc::CacheRead<_QWORD>(v4 + 136));
                goto LABEL_1036;
            case 0x1BC:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 1912i64) + 8i64 * (unsigned __int8)(-19 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 888) + 1040i64))) + 1288i64) + 4i64 * (__ROR4__(v5, 1) & 0x16));
                goto LABEL_1036;
            case 0x1BD:
                v14 = FuckEnc::CacheRead<_QWORD>(v4 + 688);
                v13 = (unsigned __int8)__ROL4__(955030481 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 128i64), 9);
                goto LABEL_13;
            case 0x1BE:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1240) + 984i64) + 8i64 * (__ROL4__(v5, 31) & 0x14), &v24, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1280));
                goto LABEL_1036;
            case 0x1BF:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 608) ^ v11;
                v12 = v24 + (FuckEnc::CacheRead<_DWORD>(v4 + 56) ^ (1676031041 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 8i64 * ((15 * FuckEnc::CacheRead<_BYTE>(v4 + 1440)) & 0x7F)) + 1920i64)));
                goto LABEL_1035;
            case 0x1C0:
                v24 = v11 - 1615319193 * FuckEnc::CacheRead<_DWORD>(v4 + 1368) * FuckEnc::CacheRead<_DWORD>(v4 + 1920);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 280) ^ 0x630E2ADE;
                goto LABEL_1036;
            case 0x1C1:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1088);
                v12 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 760) + 1272i64) + 1368i64) - FuckEnc::CacheRead<_DWORD>(v10 + 1768);
                goto LABEL_1035;
            case 0x1C2:
                Calls::FastCall(v4 + 592, &v24, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1536));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1752);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1392) & 0xFFFFFFF5;
                goto LABEL_1036;
            case 0x1C3:
                v24 = v11 + v5;
                v24 = v11 + v5 - FuckEnc::CacheRead<_DWORD>(v4 + 1064);
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 280);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1936);
                v12 = FuckEnc::CacheRead<_DWORD>(v10 + 1152) ^ v24;
                goto LABEL_1035;
            case 0x1C4:
                v24 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 1432) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 912) + 1720i64) + 2018757440) ^ 0x40F88C50);
                goto LABEL_1036;
            case 0x1C5:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 1896i64) + 1280i64);
                Calls::FastCall(v10 + 320, &v24, v5, v4);
                v24 = ~v24;
                goto LABEL_1036;
            case 0x1C6:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 824);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 880);
                v24 -= 1159300940 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 800) + 8i64 * (v5 & 0x6B)) + 1424i64) + 1112i64);
                goto LABEL_1036;
            case 0x1C7:
                v24 = v5 + (unsigned int)0xC5782EF + ~(FuckEnc::CacheRead<_DWORD>(v4 + 56) ^ v11);
                v12 = v5 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 760) + 408i64) ^ v24;
                goto LABEL_1035;
            case 0x1C8:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 232);
                v24 = FuckEnc::CacheRead<_DWORD>(v10 + 120) ^ v11;
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 224i64) + 600i64) + 8i64 * (unsigned __int8)(-104 * v5)) + 736i64);
                goto LABEL_1036;
            case 0x1C9:
                Calls::FastCall(v4 + 1888, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1120) + 1584i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 6)));
                goto LABEL_1036;
            case 0x1CA:
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 128));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1608);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1200) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 408) & 0xE4)) + 1808i64);
                goto LABEL_1036;
            case 0x1CB:
                v24 = ~(v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 1064));
                v24 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 216) + 8i64 * (unsigned __int8)(-97 * v5)) + 968i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 2));
                goto LABEL_1036;
            case 0x1CC:
                v24 = v11 ^ 0xC3013150;
                v24 = v11 ^ 0xC3013150 ^ ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 1768i64) ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 384));
                goto LABEL_1036;
            case 0x1CD:
                v24 = v11 - 1323470766;
                v24 = v11 - 1323470766 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 608i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 872) + 8i64 * ((unsigned __int8)v5 ^ 0x1Fu)) + 456i64);
                goto LABEL_1036;
            case 0x1CE:
                v24 = (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 448)) ^ 0x2B01F4C3;
                Calls::FastCall(v4 + 976, &v24, v5, v4);
                v24 = ~__ROL4__(v24, 209);
                goto LABEL_1036;
            case 0x1CF:
                v24 = v11 + v5;
                v24 = __ROL4__(v11 + v5, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 8i64 * (__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 736), 26) & 0x3F)) + 1768i64));
                v24 ^= 2141047027 * FuckEnc::CacheRead<_DWORD>(v4 + 1368);
                goto LABEL_1036;
            case 0x1D0:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 216) + 8i64 * (unsigned __int8)(70 * v5)) + 584i64) + 184i64, &v24, v5, v4);
                goto LABEL_1036;
            case 0x1D1:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1440);
                v24 -= 1764033999 * (FuckEnc::CacheRead<_DWORD>(v4 + 1392) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 128i64) ^ 0x78F501F0);
                goto LABEL_1036;
            case 0x1D2:
                v24 = __ROR4__(v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1432), 22);
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 280) + 192956640;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1272);
                v12 = v24 + FuckEnc::CacheRead<_DWORD>(v10 + 456);
                goto LABEL_1035;
            case 0x1D3:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 256) + 616i64) + 272i64) + 8i64 * ((unsigned __int8)v5 & 0xD8)) + 1568i64);
                v12 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 632) + 4i64 * (v5 & 0x54));
                goto LABEL_1035;
            case 0x1D4:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 288i64) + 648i64, &v24, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1216));
                goto LABEL_1036;
            case 0x1D5:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 768);
                v24 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 1696) >> 18) * (FuckEnc::CacheRead<_DWORD>(v10 + 1064) ^ FuckEnc::CacheRead<_DWORD>(v4 + 1264));
                goto LABEL_1036;
            case 0x1D6:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 256);
                v12 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1864) + 312i64) + 4i64 * ((unsigned __int8)v5 & 0xCA)) ^ ~FuckEnc::CacheRead<_DWORD>(v10 + 1768));
                goto LABEL_1035;
            case 0x1D7:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 1432) ^ v11;
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 120i64));
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1776) + 1624i64) + 4i64 * (v5 & 0xA));
                goto LABEL_1036;
            case 0x1D8:
                v24 = v11 - 1575479301;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 888) + 1608i64) + 1416i64);
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 440) + 1760i64) ^ (v11 - 1575479301);
                goto LABEL_1036;
            case 0x1D9:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 776);
                v21 = FuckEnc::CacheRead<_QWORD>(v4 + 544);
                v20 = (unsigned __int8)(126 * v5);
            LABEL_149:
                Calls::FastCall(v4 + 1184, &v24, v5, FuckEnc::CacheRead<_QWORD>(v21 + 8 * v20));
                goto LABEL_1036;
            case 0x1DA:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1208) + 928i64) + 8i64 * ((unsigned __int8)v5 & 0x87)) + 1448i64) + 560i64) + 1936i64) + 104i64) + 936i64);
                goto LABEL_1036;
            case 0x1DB:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 1432i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 928) + 8i64 * ((8 * (unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1912) + 8i64 * (v5 & 0x38)) + 1808i64)) & 0x14)) + 1760i64);
                goto LABEL_1036;
            case 0x1DC:
                v24 = v11 + 388605807;
                Calls::FastCall(v4 + 1168, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 560i64));
                goto LABEL_1036;
            case 0x1DD:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1584) + 8i64 * ((-45 * FuckEnc::CacheRead<_BYTE>(v4 + 776)) & 0x61)) + 80i64) ^ v11;
                v24 = ((FuckEnc::CacheRead<_DWORD>(v4 + 56) & 0xFFFFFFF4) + v24 + 1) ^ 0xC301312E;
                goto LABEL_1036;
            case 0x1DE:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 912i64) + 1696i64), 11)) + 824i64);
                v12 = v24 + (FuckEnc::CacheRead<_DWORD>(v4 + 1440) ^ 0x35D0FFCE);
                goto LABEL_1035;
            case 0x1DF:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 552);
                v12 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1544) + 800i64) + 8i64 * ((10 * (unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 312) + 4i64 * (unsigned __int8)__ROL4__(v5, 16))) & 0x52)) + 1952i64) + 4i64 * (unsigned __int8)(100 * v5));
                goto LABEL_1035;
            case 0x1E0:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 216) + 8i64 * (unsigned __int8)(-21 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 80i64))) + 768i64);
                v24 = v11 + (FuckEnc::CacheRead<_DWORD>(v10 + 1480) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 1696i64));
                goto LABEL_1036;
            case 0x1E1:
                v24 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 496i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 1152) | 0x19));
                v12 = FuckEnc::CacheRead<_DWORD>(v4 + 120) + v24 + 1;
                goto LABEL_1035;
            case 0x1E2:
                v24 = v11 - 1169591528;
                v24 = __ROL4__(v11 - 1169591528, FuckEnc::CacheRead<_DWORD>(v4 + 736));
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 408) * (FuckEnc::CacheRead<_DWORD>(v4 + 1112) ^ 0xD5B82B5C);
                goto LABEL_1036;
            case 0x1E3:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 8i64 * (unsigned __int8)(-63 * v5)) + 1208i64) + 864i64, &v24, v5, v4);
                goto LABEL_1036;
            case 0x1E4:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 1768i64) ^ v11;
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 1720) + v24 - 1050000046;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 912);
                v24 -= FuckEnc::CacheRead<_DWORD>(v10 + 1368);
                goto LABEL_1036;
            case 0x1E5:
                v24 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 1448i64) + 216i64) + 8i64 * ((unsigned __int8)v5 ^ 0xBFu)) + 1776i64) + 936i64) ^ 0x41);
                goto LABEL_1036;
            case 0x1E6:
                v11 -= FuckEnc::CacheRead<_DWORD>(v4 + 1392) ^ FuckEnc::CacheRead<_DWORD>(v4 + 1760) ^ 0x2F2F6538;
                v24 = v11;
                v19 = FuckEnc::CacheRead<_DWORD>(v4 + 1392) - 1006447947;
                goto LABEL_1034;
            case 0x1E7:
                v11 ^= 0xF744BC0C;
                v24 = v11;
                v19 = v5 * FuckEnc::CacheRead<_DWORD>(v4 + 384) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 8i64 * (unsigned __int8)__ROL4__(v5, 14)) + 1368i64);
                goto LABEL_1034;
            case 0x1E8:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 496);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 8i64 * (unsigned __int8)__ROR4__(v5, 6)) + 224i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1288) + 4i64 * (unsigned __int8)(-13 * v5));
                goto LABEL_1036;
            case 0x1E9:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1208);
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 120) * FuckEnc::CacheRead<_DWORD>(v10 + 448);
                v24 -= 331889507 * FuckEnc::CacheRead<_DWORD>(v4 + 824);
                goto LABEL_1036;
            case 0x1EA:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1040);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1936);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 552) + 248i64, &v24, v5, v10);
                goto LABEL_1036;
            case 0x1EB:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1864) + 824i64) - 1463320751;
                v24 ^= ~(FuckEnc::CacheRead<_DWORD>(v4 + 496) ^ v5);
                goto LABEL_1036;
            case 0x1EC:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 216) + 8i64 * (unsigned __int8)(56 * v5)) + 184i64, &v24, v5, v4);
                v24 ^= 0xC3018944;
                goto LABEL_1036;
            case 0x1ED:
                v24 = ~(v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1264) - v5);
                v24 += -2 * v5 - FuckEnc::CacheRead<_DWORD>(v4 + 496);
                goto LABEL_1036;
            case 0x1EE:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 408) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 1768), 19)) + 1416i64);
                v24 += FuckEnc::CacheRead<_DWORD>(v10 + 448) + 148083925;
                goto LABEL_1036;
            case 0x1EF:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 944);
                v24 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 312) + 4i64 * (unsigned __int8)(-16 * v5)) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 600) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1040) ^ 0x18u)) + 608i64));
                goto LABEL_1036;
            case 0x1F0:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1112);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 232);
                v24 = __ROL4__(v24, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 1440i64) * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v10 + 960) + 4i64 * (v5 & 0x5B)));
                goto LABEL_1036;
            case 0x1F1:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 1368i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1272);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1440);
                v12 = v24 - FuckEnc::CacheRead<_DWORD>(v4 + 408);
                goto LABEL_1035;
            case 0x1F2:
                v24 = __ROR4__(v11, ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 128));
                v12 = v24 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 928) + 8i64 * (v5 & 6)) + 768i64) + 1720i64);
                goto LABEL_1035;
            case 0x1F3:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 552);
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1256) + 8i64 * ((unsigned __int8)__ROR4__(v5, 1) & 0x97)) + 496i64) ^ v11;
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 120i64);
                goto LABEL_1036;
            case 0x1F4:
                v24 = v5 ^ v11;
                v24 = __ROR4__(v5 ^ v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 408i64));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 624i64);
                v24 = __ROL4__(v24, FuckEnc::CacheRead<_DWORD>(v10 + 456));
                goto LABEL_1036;
            case 0x1F5:
                v14 = FuckEnc::CacheRead<_QWORD>(v4);
                v13 = (49 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 792) + 1440i64)) & 0x67;
                goto LABEL_13;
            case 0x1F6:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1200) + 8i64 * (unsigned __int8)(-102 * FuckEnc::CacheRead<_DWORD>(v4 + 784))) + 872i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 7)) + 1520i64, &v24, v5, v4);
                goto LABEL_1036;
            case 0x1F7:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 584) + 280i64) ^ v11;
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 408);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1864) + 1280i64);
                v24 += FuckEnc::CacheRead<_DWORD>(v10 + 120);
                goto LABEL_1036;
            case 0x1F8:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 584);
                v12 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 56) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1872) + 1608i64) + 1528i64) + 8i64 * (v5 & 0x1E)) + 736i64);
                goto LABEL_1035;
            case 0x1F9:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 608) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1096);
                v24 += (FuckEnc::CacheRead<_DWORD>(v10 + 608) << 12) + (FuckEnc::CacheRead<_DWORD>(v4 + 56) | 0x1D);
                goto LABEL_1036;
            case 0x1FA:
                v24 = v11 ^ 0xDEFEE219;
                v24 = v11 ^ 0xDEFEE219 ^ (v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 432) + 784i64));
                v24 = __ROL4__(v24, FuckEnc::CacheRead<_BYTE>(v4 + 824) << 6);
                goto LABEL_1036;
            case 0x1FB:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 8i64 * (((unsigned __int8)v5 ^ 0xFE) & 0x41)) + 1504i64, &v24, v5, FuckEnc::CacheRead<_QWORD>(v4 + 296));
                goto LABEL_1036;
            case 0x1FC:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1696);
                v24 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 1480i64);
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 712i64));
                goto LABEL_1036;
            case 0x1FD:
                v24 = v11 - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1416);
                v24 = v11 - v5 - FuckEnc::CacheRead<_DWORD>(v10 + 784) * (~FuckEnc::CacheRead<_DWORD>(v4 + 736) & 0xFFFFFFFC);
                goto LABEL_1036;
            case 0x1FE:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 936);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 912) + 1344i64) + 8i64 * ((unsigned __int8)(65 * v5) & 0xDC), &v24, v5, v4);
                goto LABEL_1036;
            case 0x1FF:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 216) + 8i64 * (unsigned __int8)(-117 * v5)) + 232i64) + 224i64) + 736i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1448) + 736i64);
                goto LABEL_1036;
            case 0x200:
                v24 = v11 ^ 0x35430E96;
                v24 = v11 ^ 0x35430E96 ^ FuckEnc::CacheRead<_DWORD>(v4 + 456) ^ FuckEnc::CacheRead<_DWORD>(v4 + 496) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1536) + 1392i64);
                goto LABEL_1036;
            case 0x201:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 560) + 408i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 952);
                Calls::FastCall(v10 + 1248, &v24, v5, v4);
                goto LABEL_1036;
            case 0x202:
                v24 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 1264) ^ 0xC101BFE4);
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 608);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 712);
                v12 = v24 - FuckEnc::CacheRead<_DWORD>(v4 + 1480);
                goto LABEL_1035;
            case 0x203:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 168);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 784);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 552);
                v24 += FuckEnc::CacheRead<_DWORD>(v10 + 1592) ^ 0xFD067DDD;
                goto LABEL_1036;
            case 0x204:
                v24 = __ROR4__(__ROL4__(v11, 255), 126);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 1120i64);
                v12 = v24 + (FuckEnc::CacheRead<_DWORD>(v10 + 1040) ^ FuckEnc::CacheRead<_DWORD>(v4 + 1432));
                goto LABEL_1035;
            case 0x205:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 456) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 872) + 8i64 * (unsigned __int8)__ROL4__(v5, 11)) + 760i64);
                v24 = __ROR4__(v24, (v5 + FuckEnc::CacheRead<_BYTE>(v10 + 120)) & 0xEF);
                goto LABEL_1036;
            case 0x206:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1040);
                Calls::FastCall(v4 + 1880, &v24, v5, v4);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 784) >> 18;
                goto LABEL_1036;
            case 0x207:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 1272i64) + 888i64) + 544i64) + 8i64 * (v5 & 7)) + 1600i64);
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 624) + 608i64);
                goto LABEL_1036;
            case 0x208:
                v24 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 80) - 318212217) ^ 0x22903B3;
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 8i64 * ((56 * (_BYTE)v5) & 0x6A)) + 1104i64);
                goto LABEL_1036;
            case 0x209:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1096);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 1640) + 8i64 * (unsigned __int8)(10 * v5), &v24, v5, v4);
                v24 ^= v5;
                goto LABEL_1036;
            case 0x20A:
                v24 = ~(v11 - FuckEnc::CacheRead<_DWORD>(v4 + 408));
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 1368i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 552);
                v24 -= FuckEnc::CacheRead<_DWORD>(v10 + 1480);
                goto LABEL_1036;
            case 0x20B:
                v24 = v11 + 1023332020;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1544);
                v24 = v11 + 1023332020 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 8i64 * ((unsigned __int8)(63 * ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v10 + 1592)) & 0xF2)) + 1112i64) - 1143395915;
                goto LABEL_1036;
            case 0x20C:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1120) + 1240i64) + 1280i64);
                Calls::FastCall(v10 + 208, &v24, v5, v4);
                goto LABEL_1036;
            case 0x20D:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 104);
                Calls::FastCall(v4 + 648, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1528) + 8i64 * (v5 & 0x39)));
                goto LABEL_1036;
            case 0x20E:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 232) + 1784i64) + 8i64 * ((unsigned __int8)v5 ^ 0x63u)) + 1536i64) + 912i64) + 872i64) + 8i64 * (unsigned __int8)(118 * v5)) + 936i64) ^ v11;
                goto LABEL_1036;
            case 0x20F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 560);
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1288) + 4i64 * ((unsigned __int8)(-18 * FuckEnc::CacheRead<_BYTE>(v10 + 448)) & 0x9A));
                v24 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1856) + 8i64 * ((unsigned __int8)v5 & 0xF0)) + 1440i64);
                goto LABEL_1036;
            case 0x210:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 128) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 792);
                v24 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 256) + 1096i64) + 872i64) + 8i64 * ((2 * (_BYTE)v5) & 0x79)) + 1112i64);
                goto LABEL_1036;
            case 0x211:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 1440i64);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1528) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 120) ^ 2) & 0xC2)) + 824i64);
                goto LABEL_1036;
            case 0x212:
                v24 = ~(v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1152));
                v24 = ~__ROL4__(v24, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 960i64) + 4i64 * (unsigned __int8)(53 * FuckEnc::CacheRead<_BYTE>(v4 + 608))));
                goto LABEL_1036;
            case 0x213:
                v24 = v11 + 1023309500;
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 304) + 4i64 * (__ROR4__(v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 8i64 * ((unsigned __int8)__ROR4__(v5, 11) & 0xE3)) + 1768i64), 22) & 0x79)) + v11 + 1023309501;
                goto LABEL_1036;
            case 0x214:
                v24 = v11 + 1718073210;
                v24 = v11 + 1718073210 - FuckEnc::CacheRead<_DWORD>(v4 + 1808);
                v24 = v24 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1256) + 8i64 * ((unsigned __int8)v5 ^ 0xB1u)) + 1480i64) - 1859256129;
                goto LABEL_1036;
            case 0x215:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1608);
                Calls::FastCall(v4 + 208, &v24, v5, v10);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1696) << 11;
                goto LABEL_1036;
            case 0x216:
                v24 = ~v11;
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 1760) ^ ~v11;
                v24 = ~(v24 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1544) + 104i64) + 1440i64));
                goto LABEL_1036;
            case 0x217:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 296);
                Calls::FastCall(v10 + 1224, &v24, v5, v4);
                v24 = __ROL4__(v24, FuckEnc::CacheRead<_DWORD>(v4 + 1368));
                goto LABEL_1036;
            case 0x218:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1480);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 912i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1296) + 4i64 * ((26 * (_BYTE)v5) & 0x28)) ^ 0x79FCCA44;
                goto LABEL_1036;
            case 0x219:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 280) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1528) + 8i64 * ((unsigned __int8)v5 & 0xED)) + 288i64) + 952i64) + 304i64) + 4i64 * (unsigned __int8)(-117 * v5));
                goto LABEL_1036;
            case 0x21A:
                v11 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 928) + 8i64 * (unsigned __int8)__ROR4__(v5, 2)) + 1592i64) ^ 0xACB85E20;
                v24 = v11;
                v19 = FuckEnc::CacheRead<_DWORD>(v4 + 1480) * v5;
                goto LABEL_1034;
            case 0x21B:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 384) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 888);
                Calls::FastCall(v10 + 1520, &v24, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1216));
                goto LABEL_1036;
            case 0x21C:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 216) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 448i64) & 0x82)) + 872i64) + 8i64 * (v5 & 0x1C)) + 464i64);
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 968) + 4i64 * ((unsigned __int8)v5 ^ 0xEAu)) ^ v11;
                goto LABEL_1036;
            case 0x21D:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 784);
                v12 = v24 + FuckEnc::CacheRead<_DWORD>(v4 + 1720) + FuckEnc::CacheRead<_DWORD>(v4 + 168) * ~FuckEnc::CacheRead<_DWORD>(v4 + 784);
                goto LABEL_1035;
            case 0x21E:
                v24 = __ROL4__(v11, -64 * FuckEnc::CacheRead<_BYTE>(v4 + 168));
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1208) + 192i64, &v24, v5, v4);
                goto LABEL_1036;
            case 0x21F:
                v24 = v5 ^ __ROL4__(v11 - v5, 208);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1544) + 288i64) + 464i64);
                v24 += FuckEnc::CacheRead<_DWORD>(v10 + 1104);
                goto LABEL_1036;
            case 0x220:
                v24 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 312) + 4i64 * ((((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 776) ^ 0x12) + (unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1200) + 8i64 * ((unsigned __int8)v5 & 0xB3)) + 168i64)) & 0x67)) | 0xF);
                goto LABEL_1036;
            case 0x221:
                v11 = ~v11;
                v24 = v11;
                v19 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 584) + 312i64) + 4i64 * (unsigned __int8)(-116 * v5)) * (FuckEnc::CacheRead<_DWORD>(v4 + 1760) ^ v5);
                goto LABEL_1034;
            case 0x222:
                v24 = v5 ^ __ROR4__(v11, v5);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1256) + 8i64 * (unsigned __int8)__ROL4__(v5, 16)) + 1416i64);
                v24 -= 16 * FuckEnc::CacheRead<_DWORD>(v10 + 280);
                goto LABEL_1036;
            case 0x223:
                v24 = v11 - 669568730;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 760);
                Calls::FastCall(v4 + 568, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1856) + 8i64 * (unsigned __int8)(18 * v5)));
                goto LABEL_1036;
            case 0x224:
                v24 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 496) ^ v5);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 1096i64) + 472i64) + 8i64 * (unsigned __int8)(-72 * v5)) + 1440i64);
                goto LABEL_1036;
            case 0x225:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 776);
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 8i64 * ((unsigned __int8)v5 & 0xF5)) + 1064i64) ^ (FuckEnc::CacheRead<_BYTE>(v4 + 784) | 0xB));
                goto LABEL_1036;
            case 0x226:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 768);
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 1064) - (v5 << 19);
                goto LABEL_1036;
            case 0x227:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 120);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 464);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 272) + 8i64 * (v5 & 0x6C)) + 304i64) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v10 + 56) & 0xE2));
                goto LABEL_1036;
            case 0x228:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 496i64);
                v11 = v24 - FuckEnc::CacheRead<_DWORD>(v4 + 1720);
                v24 = v11;
                v19 = FuckEnc::CacheRead<_DWORD>(v4 + 120) - 137232575;
                goto LABEL_1034;
            case 0x229:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1264);
                v24 = ~(v24 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 792) + 304i64) + 4i64 * ((14 * (_BYTE)v5) & 0x27)) - FuckEnc::CacheRead<_DWORD>(v4 + 496));
                goto LABEL_1036;
            case 0x22A:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1760);
                Calls::FastCall(v4 + 536, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 1856i64) + 8i64 * ((unsigned __int8)(-4 * v5) & 0xB4)));
                goto LABEL_1036;
            case 0x22B:
                Calls::FastCall(v4 + 1888, &v24, v5, v4);
                Calls::FastCall(v4 + 208, &v24, v5, v4);
                goto LABEL_1036;
            case 0x22C:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 928) + 8i64 * (((unsigned __int8)v5 ^ 8) & 0x2F)) + 1272i64) + 792i64);
                Calls::FastCall(v4 + 528, &v24, v5, FuckEnc::CacheRead<_QWORD>(v10 + 624));
                goto LABEL_1036;
            case 0x22D:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1696);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 1552i64, &v24, v5, FuckEnc::CacheRead<_QWORD>(v4 + 440));
                goto LABEL_1036;
            case 0x22E:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 8i64 * ((-6 * (_BYTE)v5) & 0x10)) + 544i64) + 8i64 * (v5 & 0x48)) + 904i64, &v24, v5, v4);
                goto LABEL_1036;
            case 0x22F:
                Calls::FastCall(v4 + 1552, &v24, v5, v4);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 464) + 936i64) ^ v24 ^ 0xC9522E08;
                goto LABEL_1035;
            case 0x230:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 1528i64) + 8i64 * ((unsigned __int8)v5 ^ 0x71u)) + 984i64) + 8i64 * ((unsigned __int8)v5 ^ 0x6Cu), &v24, v5, v4);
                goto LABEL_1036;
            case 0x231:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 1104) ^ v11;
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 8i64 * ((unsigned __int8)(71 * v5) & 0xB1)) + 1112i64) & 0x21)) + 1440i64);
                goto LABEL_1036;
            case 0x232:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 496);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1608);
                v24 += ~(FuckEnc::CacheRead<_DWORD>(v4 + 408) + 1732977955 * FuckEnc::CacheRead<_DWORD>(v10 + 784));
                goto LABEL_1036;
            case 0x233:
                v24 = v5 ^ v11;
                v24 = (v5 ^ v11 ^ (v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 1104i64))) + 1843245035;
                goto LABEL_1036;
            case 0x234:
                v24 = v11 + 1063019174 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 432i64) + 128i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1240);
                v24 -= FuckEnc::CacheRead<_DWORD>(v10 + 456) ^ v5;
                goto LABEL_1036;
            case 0x235:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1920);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 464);
                Calls::FastCall(v10 + 184, &v24, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1752));
                goto LABEL_1036;
            case 0x236:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 784) - 1023309499;
                v24 = v24 - FuckEnc::CacheRead<_DWORD>(v4 + 1808) + 771800685;
                goto LABEL_1036;
            case 0x237:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 232) + 472i64) + 8i64 * (unsigned __int8)(-124 * v5)) + 216i64) + 8i64 * (unsigned __int8)(-78 * v5)) + 104i64);
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 384);
                goto LABEL_1036;
            case 0x238:
                v24 = v11 - 1885189481;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 464);
                v24 = v11 - 1885189481 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 8i64 * (__ROL4__(~FuckEnc::CacheRead<_DWORD>(v10 + 1720), 13) & 0x18)) + 824i64);
                goto LABEL_1036;
            case 0x239:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 912);
                v24 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v10 + 1064) + FuckEnc::CacheRead<_BYTE>(v4 + 1104) + FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 544) + 8i64 * (unsigned __int8)__ROL4__(v5, 5)) + 784i64));
                goto LABEL_1036;
            case 0x23A:
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1480));
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 600) + 8i64 * ((unsigned __int8)(-103 * v5) & 0xD3)) + 880i64) + 1264i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1760);
                goto LABEL_1036;
            case 0x23B:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 56);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 8i64 * (unsigned __int8)(-59 * v5)) + 232i64);
                v24 = __ROL4__(v24, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1568) + 384i64));
                goto LABEL_1036;
            case 0x23C:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1776);
                Calls::FastCall(v4 + 576, &v24, v5, v10);
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_DWORD>(v4 + 80));
                goto LABEL_1036;
            case 0x23D:
                v24 = v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1872) + 280i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 112);
                v24 += 1497169615 * FuckEnc::CacheRead<_DWORD>(v10 + 784);
                goto LABEL_1036;
            case 0x23E:
                Calls::FastCall(v4 + 248, &v24, v5, v4);
                v12 = v24 + 1 + (FuckEnc::CacheRead<_DWORD>(v4 + 496) & 0xFFFFFFE3);
                goto LABEL_1035;
            case 0x23F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 224);
                v12 = v11 + (FuckEnc::CacheRead<_DWORD>(v10 + 408) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 456) + ~FuckEnc::CacheRead<_DWORD>(v4 + 1392)));
                goto LABEL_1035;
            case 0x240:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 448) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1600);
                v24 = __ROL4__(v24, 47 * FuckEnc::CacheRead<_BYTE>(v4 + 776) * (FuckEnc::CacheRead<_BYTE>(v10 + 408) & 0xF7));
                goto LABEL_1036;
            case 0x241:
                v24 = __ROR4__(v11, v5);
                v24 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 8i64 * ((16 * (_BYTE)v5) & 0x2D)) + 408i64) + 1120058493;
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 824);
                goto LABEL_1036;
            case 0x242:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 560);
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 928) + 8i64 * (__ROL4__(v5, 10) & 0x7D)) + 456i64);
                v12 = v24 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 584) + 712i64) >> 5);
                goto LABEL_1035;
            case 0x243:
                v24 = __ROL4__(v11, ~FuckEnc::CacheRead<_BYTE>(v4 + 280) + (FuckEnc::CacheRead<_BYTE>(v4 + 128) ^ (v5 + FuckEnc::CacheRead<_BYTE>(v4 + 1392))));
                goto LABEL_1036;
            case 0x244:
                v12 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 1128i64) + 8i64 * (unsigned __int8)(19 * v5)) + 1784i64) + 8i64 * (v5 & 0x1E)) + 1416i64) + 56i64);
                goto LABEL_1035;
            case 0x245:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1544) + 1720i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 800i64) + 8i64 * (v5 & 0x4B)) + 1936i64) + 1440i64);
                goto LABEL_1036;
            case 0x246:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 280);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 448);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1864) + 136i64);
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 632) + 4i64 * (unsigned __int8)(-81 * v5)));
                goto LABEL_1036;
            case 0x247:
                v24 = v11 - 930110551;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 912) + 1216i64);
                v12 = (v11 - 930110551) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1720) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 256) + 608i64));
                goto LABEL_1035;
            case 0x248:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1912) + 8i64 * (unsigned __int8)(-88 * ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1760))) + 1928i64) + 256i64);
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 496) + 1;
                goto LABEL_1036;
            case 0x249:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 8i64 * ((unsigned __int8)v5 ^ 1u)) + 760i64) + 848i64, &v24, v5, v4);
                goto LABEL_1036;
            case 0x24A:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 1720) ^ v11;
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1240) + 600i64) + 8i64 * (unsigned __int8)(-55 * v5)) + 432i64) + 1368i64);
                goto LABEL_1036;
            case 0x24B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1424);
                v12 = v5 + (v11 ^ ((FuckEnc::CacheRead<_DWORD>(v10 + 1040) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1568) + 1208i64) + 1104i64)) - 1023331904));
                goto LABEL_1035;
            case 0x24C:
                v24 = __ROL4__(v11, -60 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 8i64 * (((unsigned __int8)v5 ^ 0xFB) & 0x16)) + 1696i64) * (FuckEnc::CacheRead<_BYTE>(v4 + 1760) ^ 0x18));
                goto LABEL_1036;
            case 0x24D:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 880i64) + 1752i64);
                Calls::FastCall(v10 + 1176, &v24, v5, v4);
                goto LABEL_1036;
            case 0x24E:
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1368)) ^ 0x8BCA27B2;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1600);
                v24 = FuckEnc::CacheRead<_DWORD>(v10 + 1392) + v24 - 414927507;
                goto LABEL_1036;
            case 0x24F:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1528) + 8i64 * ((unsigned __int8)v5 & 0x90)) + 80i64) ^ v11;
                v24 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1256) + 8i64 * ((unsigned __int8)v5 ^ 0x98u)) + 456i64) ^ v24);
                goto LABEL_1036;
            case 0x250:
                v24 = v5 ^ (v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 496) ^ 0xC3018944));
                v24 = __ROL4__(v24, ~FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1200) + 8i64 * (unsigned __int8)__ROR4__(v5, 4)) + 1392i64));
                goto LABEL_1036;
            case 0x251:
                Calls::FastCall(v4 + 1888, &v24, v5, v4);
                v24 = __ROL4__(v24, ~(FuckEnc::CacheRead<_BYTE>(v4 + 1808) ^ 0xEA));
                goto LABEL_1036;
            case 0x252:
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1544) + 936i64));
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 776);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 464i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1720);
                goto LABEL_1036;
            case 0x253:
                v12 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1528) + 8 * (((FuckEnc::CacheRead<unsigned int>(v4 + 1104) ^ 0x40000ui64) >> 18) & 0xD)) + 224i64) + 1432i64);
                goto LABEL_1035;
            case 0x254:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1040);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 408);
                v24 += (-2009106655 * ~FuckEnc::CacheRead<_DWORD>(v4 + 280)) ^ 0x2AD0FF7D;
                goto LABEL_1036;
            case 0x255:
                v24 = __ROL4__(v11, v5) - 1486306217;
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 128);
                v12 = FuckEnc::CacheRead<_DWORD>(v4 + 496) + v24;
                goto LABEL_1035;
            case 0x256:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 552);
                v24 = (v11 ^ (-FuckEnc::CacheRead<_DWORD>(v10 + 1808) - 103358514)) - 317048964;
                v12 = FuckEnc::CacheRead<_DWORD>(v4 + 608) ^ v24 ^ 0xF7C88566;
                goto LABEL_1035;
            case 0x257:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 912);
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 136) + 1264i64) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1856) + 8i64 * ((unsigned __int8)v5 & 0xC0)) + 80i64));
                goto LABEL_1036;
            case 0x258:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1872);
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1288) + 4i64 * ((unsigned __int8)v5 & 0x83)) * (v5 + (FuckEnc::CacheRead<_DWORD>(v4 + 1696) & 0xFFFFFFE0));
                goto LABEL_1036;
            case 0x259:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 1104) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 232) + 1584i64) + 8i64 * ((unsigned __int8)v5 & 0xA1)) + 1216i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1616) + 4i64 * ((unsigned __int8)v5 & 0xC4));
                goto LABEL_1036;
            case 0x25A:
                v24 = __ROL4__(v11, v5);
                v12 = v24 + FuckEnc::CacheRead<_DWORD>(v4 + 1720) * (FuckEnc::CacheRead<_DWORD>(v4 + 168) ^ FuckEnc::CacheRead<_DWORD>(v4 + 280) ^ 0xFD6F0EAE);
                goto LABEL_1035;
            case 0x25B:
                v24 = ~(FuckEnc::CacheRead<_DWORD>(v4 + 80) ^ v11);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 432) + 952i64) + 456i64);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 1920);
                goto LABEL_1036;
            case 0x25C:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 912);
                v24 = FuckEnc::CacheRead<_DWORD>(v10 + 408) ^ v11;
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 712) | 0x13;
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1240) + 1920i64) ^ v24;
                goto LABEL_1035;
            case 0x25D:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 1104) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1544);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 1744) + 976i64, &v24, v5, v4);
                goto LABEL_1036;
            case 0x25E:
                Calls::FastCall(v4 + 688, &v24, v5, v4);
                goto LABEL_1036;
            case 0x25F:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 1152) ^ v11;
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 736);
                v24 = v24 - (FuckEnc::CacheRead<_DWORD>(v4 + 1064) ^ v5) - FuckEnc::CacheRead<_DWORD>(v4 + 608);
                goto LABEL_1036;
            case 0x260:
                v11 = __ROL4__(v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 608i64), v5);
                v24 = v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 1448i64);
                v19 = FuckEnc::CacheRead<_DWORD>(v10 + 1696) + 2101936747;
                goto LABEL_1034;
            case 0x261:
                v24 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 1592) & 0xE6);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1568) + 880i64);
                v24 = __ROL4__(v24, ~FuckEnc::CacheRead<_BYTE>(v10 + 1592));
                goto LABEL_1036;
            case 0x262:
                v13 = ((unsigned __int8)v5 ^ 0xE7) & 0xD9;
                v14 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1744) + 880i64) + 1016i64);
                goto LABEL_13;
            case 0x263:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1288) + 4i64 * (unsigned __int8)(-30 * FuckEnc::CacheRead<_BYTE>(v4 + 1104)));
                v24 = __ROL4__(v24, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 1936i64) + 584i64) + 824i64));
                goto LABEL_1036;
            case 0x264:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 544) + 8i64 * ((unsigned __int8)v5 & 0x98)) + 1208i64);
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1064);
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 168) + 1;
                goto LABEL_1036;
            case 0x265:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 1264) ^ v11;
                v24 ^= ~FuckEnc::CacheRead<_DWORD>(v4 + 1152);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1856) + 8i64 * (unsigned __int8)(37 * FuckEnc::CacheRead<_BYTE>(v4 + 1064))) + 736i64);
                goto LABEL_1036;
            case 0x266:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 1152) ^ v11;
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 1912i64) + 8i64 * (v5 & 0x75)) + 1416i64) + 496i64);
                goto LABEL_1036;
            case 0x267:
                v24 = v5 + v11 + 1023309500;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1120);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v10 + 128);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 56i64) ^ v24;
                goto LABEL_1035;
            case 0x268:
                v24 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 104i64) + 824i64) ^ v11);
                v24 -= 594864232 * FuckEnc::CacheRead<_DWORD>(v4 + 784);
                goto LABEL_1036;
            case 0x269:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1280);
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 552) + 472i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 27)) + 216i64) + 8i64 * (v5 & 0x28)) + 1808i64);
                goto LABEL_1036;
            case 0x26A:
                v24 = __ROR4__(v11, ~(FuckEnc::CacheRead<_DWORD>(v4 + 1104) ^ 0x5F));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 296i64);
                v24 -= FuckEnc::CacheRead<_DWORD>(v10 + 824);
                goto LABEL_1036;
            case 0x26B:
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1112));
                Calls::FastCall(v4 + 1304, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 8i64 * (__ROL4__(v5, 14) & 0x89)));
                goto LABEL_1036;
            case 0x26C:
                v24 = v11 - 1022283398;
                v24 = v11 - 1022283398 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 944i64) + 80i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1208);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v10 + 784);
                goto LABEL_1036;
            case 0x26D:
                v19 = -1322751379 * FuckEnc::CacheRead<_DWORD>(v4 + 496) * (FuckEnc::CacheRead<_DWORD>(v4 + 1768) >> 26);
                goto LABEL_1034;
            case 0x26E:
                v24 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 1720) ^ 0xC3018944);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1216);
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1944) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v10 + 1720), 10)) ^ 0x73);
                goto LABEL_1036;
            case 0x26F:
                Calls::FastCall(v4 + 1184, &v24, v5, v4);
                v24 ^= ~(FuckEnc::CacheRead<_DWORD>(v4 + 1480) ^ v5);
                goto LABEL_1036;
            case 0x270:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 792);
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v10 + 312) + 4i64 * (v5 & 0x77)) * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1944) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1152) & 0x40)));
                goto LABEL_1036;
            case 0x271:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 1416i64) + 136i64) + 1936i64);
                Calls::FastCall(v4 + 1176, &v24, v5, v10);
                goto LABEL_1036;
            case 0x272:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 256);
                v24 = v11 ^ ((FuckEnc::CacheRead<_DWORD>(v10 + 1040) ^ FuckEnc::CacheRead<_DWORD>(v4 + 1440)) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 544) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1040) & 0x64)) + 1264i64));
                goto LABEL_1036;
            case 0x273:
                Calls::FastCall(v4 + 248, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 8i64 * ((unsigned __int8)(-39 * v5) & 0x8A)) + 1600i64) + 464i64));
                goto LABEL_1036;
            case 0x274:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 256) + 1448i64) + 952i64) + 456i64) ^ v11;
                v24 = __ROL4__(v24, ~FuckEnc::CacheRead<_BYTE>(v4 + 448));
                goto LABEL_1036;
            case 0x275:
                v24 = __ROL4__(v11, ~FuckEnc::CacheRead<_BYTE>(v4 + 1760) & 0xEE);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 760);
                v24 = ~(FuckEnc::CacheRead<_DWORD>(v10 + 1112) ^ v24);
                goto LABEL_1036;
            case 0x276:
                v24 = v5 + v11 + FuckEnc::CacheRead<_DWORD>(v4 + 128);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1120) + 1608i64) + 288i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 632) + 4i64 * ((unsigned __int8)v5 ^ 0xF0u));
                goto LABEL_1036;
            case 0x277:
                v24 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 408));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 440);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 584) + 1528i64) + 8i64 * ((32 * (unsigned __int8)FuckEnc::CacheRead<_DWORD>(v10 + 280)) & 0x7D)) + 712i64);
                goto LABEL_1036;
            case 0x278:
                v24 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 8i64 * (unsigned __int8)(-83 * v5)) + 1776i64) + 1864i64) + 792i64) + 304i64) + 4i64 * ((unsigned __int8)v5 & 0xD8)) >> 21);
                goto LABEL_1036;
            case 0x279:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1776) + 1256i64) + 8i64 * ((unsigned __int8)v5 ^ 0x49u)) + 616i64) + 136i64);
                v12 = v11 + (FuckEnc::CacheRead<_DWORD>(v10 + 1264) ^ 0x85D1FF41) + 1;
                goto LABEL_1035;
            case 0x27A:
                v12 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 584i64) + 1256i64) + 8i64 * ((unsigned __int8)v5 ^ 0xBEu)) + 792i64) + 1952i64) + 4i64 * ((unsigned __int8)v5 & 0xE0));
                goto LABEL_1035;
            case 0x27B:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 80);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 256);
                v11 = FuckEnc::CacheRead<_DWORD>(v10 + 456) ^ v24;
                v24 = v11;
                v19 = 1513456603 - FuckEnc::CacheRead<_DWORD>(v4 + 1920);
                goto LABEL_1034;
            case 0x27C:
                v24 = v11 ^ 0x7CDD43F1;
                v24 = (v11 ^ 0x7CDD43F1) - FuckEnc::CacheRead<_DWORD>(v4 + 120);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 768);
                v24 += FuckEnc::CacheRead<_DWORD>(v10 + 1064);
                v24 = __ROL4__(v24, FuckEnc::CacheRead<_DWORD>(v4 + 1440));
                goto LABEL_1036;
            case 0x27D:
                v24 = (v11 ^ 0x961DD372) + 684924352;
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 960) + 4i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 256) + 1208i64) + 168i64), 11));
                goto LABEL_1036;
            case 0x27E:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1872) + 1760i64);
                v24 ^= v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 1392) ^ 0xDDC1441F;
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1808);
                goto LABEL_1036;
            case 0x27F:
                v24 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 1040) | 0x1B);
                v12 = v24 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 544) + 8i64 * ((-12 * (_BYTE)v5) & 0x17)) + 1568i64) + 1616i64) + 4i64 * (unsigned __int8)(96 * v5));
                goto LABEL_1035;
            case 0x280:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 1624i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 28));
                Calls::FastCall(v4 + 184, &v24, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1416));
                goto LABEL_1036;
            case 0x281:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1568) + 1872i64);
                v24 = FuckEnc::CacheRead<_DWORD>(v10 + 1392) ^ v11;
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 872) + 8i64 * ((unsigned __int8)(10 * v5) & 0xB4)) + 736i64);
                goto LABEL_1036;
            case 0x282:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1808);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 928) + 8i64 * ((unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 936), 31) & 0x85)) + 224i64);
                v24 -= FuckEnc::CacheRead<_DWORD>(v10 + 1440);
                goto LABEL_1036;
            case 0x283:
                v24 = v11 ^ ((FuckEnc::CacheRead<_DWORD>(v4 + 408) ^ 0xE0B0310C) + -FuckEnc::CacheRead<_DWORD>(v4 + 784) - 1248428121);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1152);
                goto LABEL_1036;
            case 0x284:
                v24 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 496));
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 8i64 * (unsigned __int8)(10 * v5)) + 712i64);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 1064);
                goto LABEL_1036;
            case 0x285:
                v24 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 776i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1544) + 1216i64) + 1208i64) + 1720i64);
                goto LABEL_1036;
            case 0x286:
                Calls::FastCall(v4 + 1832, &v24, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1424));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1744);
                v24 -= FuckEnc::CacheRead<_DWORD>(v10 + 1440);
                goto LABEL_1036;
            case 0x287:
                v24 = __ROL4__(v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1480) + 1726977209), 11);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 456) ^ 0xF61C7801;
                v12 = FuckEnc::CacheRead<_DWORD>(v4 + 936) ^ v24;
                goto LABEL_1035;
            case 0x288:
                Calls::FastCall(v4 + 1848, &v24, v5, v4);
                v24 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 1568i64) + 128i64);
                goto LABEL_1036;
            case 0x289:
                v19 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 224) + 256i64) + 1808i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 800i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 20)) + 1152i64);
                goto LABEL_1034;
            case 0x28A:
                Calls::FastCall(v4 + 1848, &v24, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 256) + 952i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1112);
                goto LABEL_1036;
            case 0x28B:
                Calls::FastCall(v4 + 1176, &v24, v5, v4);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 8i64 * (((unsigned __int8)v5 ^ 1) & 0xC5)) + 1432i64);
                goto LABEL_1036;
            case 0x28C:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1216);
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 608i64) - (FuckEnc::CacheRead<_DWORD>(v4 + 1592) | 0x1A) - FuckEnc::CacheRead<_DWORD>(v10 + 1104);
                goto LABEL_1036;
            case 0x28D:
                v24 = (v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1432)) ^ 0x9C58EB9;
                Calls::FastCall(v4 + 208, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 1448i64));
                goto LABEL_1036;
            case 0x28E:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1040);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 736);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 1088i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1720);
                goto LABEL_1036;
            case 0x28F:
                v13 = (unsigned __int8)(-36 * v5);
                v14 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 272) + 8i64 * (unsigned __int8)(-37 * v5)) + 1608i64) + 984i64);
                goto LABEL_13;
            case 0x290:
                v24 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 256) + 144i64) + 8i64 * (unsigned __int8)(-45 * v5)) + 1936i64) + 944i64) + 1064i64) & 0xFFFFFFFD;
                goto LABEL_1036;
            case 0x291:
                v24 = v11 - 1012136616;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1864);
                v24 = __ROR4__(v11 - 1012136616, FuckEnc::CacheRead<_BYTE>(v10 + 1152) * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 216) + 8i64 * (unsigned __int8)(116 * v5)) + 496i64));
                goto LABEL_1036;
            case 0x292:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 80) + FuckEnc::CacheRead<_DWORD>(v4 + 384) * v5 + 1194205027;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1088);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v10 + 736);
                goto LABEL_1036;
            case 0x293:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1104);
                v24 ^= (unsigned int)~FuckEnc::CacheRead<_DWORD>(v4 + 80) >> 2;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 584);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v10 + 936);
                goto LABEL_1036;
            case 0x294:
                v13 = (unsigned __int8)v5 & 0x8E;
                v14 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1584) + 8i64 * (v5 & 0x3B)) + 72i64);
                goto LABEL_13;
            case 0x295:
                v12 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 1104) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1584) + 8i64 * (unsigned __int8)__ROR4__(v5, 17)) + 776i64) & 0xFFFFFFE6);
                goto LABEL_1035;
            case 0x296:
                v24 = (v5 ^ (v11 - 1653294926)) - 1216680085;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 760);
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_BYTE>(v10 + 1440) ^ FuckEnc::CacheRead<_BYTE>(v4 + 1760));
                goto LABEL_1036;
            case 0x297:
                v24 = v11 ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 736));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 136);
                v12 = v24 - FuckEnc::CacheRead<_DWORD>(v4 + 408) * FuckEnc::CacheRead<_DWORD>(v10 + 1720);
                goto LABEL_1035;
            case 0x298:
                v24 = v5 ^ v11 ^ (2092575999 * FuckEnc::CacheRead<_DWORD>(v4 + 1432) + 625988166);
                v12 = v24 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 1432i64);
                goto LABEL_1035;
            case 0x299:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 1696) ^ v11 ^ 0x66D1FF41;
                v24 += ~FuckEnc::CacheRead<_DWORD>(v4 + 1104);
                v24 = __ROL4__(v24, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1448) + 1440i64));
                goto LABEL_1036;
            case 0x29A:
                v13 = (unsigned __int8)v5 & 0xC8;
                v14 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 256) + 1088i64) + 400i64);
                goto LABEL_13;
            case 0x29B:
                v24 = (v11 ^ 0xC311311C) - 1302087670;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1120) + 624i64);
                v12 = v24 ^ (-420837331 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1944) + 4i64 * (__ROL4__(v5, 21) & 0x70)));
                goto LABEL_1035;
            case 0x29C:
                v24 = v11 + 1692868639;
                v24 = v11 + 1692868639 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 304i64) + 4i64 * (unsigned __int8)(32 * v5)) - FuckEnc::CacheRead<_DWORD>(v4 + 408) - v5;
                goto LABEL_1036;
            case 0x29D:
                v13 = ((unsigned __int8)v5 ^ 0xF7) & 0xBC;
                v14 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 272) + 8i64 * (unsigned __int8)(116 * FuckEnc::CacheRead<_BYTE>(v4 + 824))) + 72i64);
                goto LABEL_13;
            case 0x29E:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 432) + 1528i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 5)) + 1944i64) + 4i64 * ((51 * FuckEnc::CacheRead<_BYTE>(v4 + 1808)) & 0x54));
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1264);
                goto LABEL_1036;
            case 0x29F:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1896) + 120i64) ^ v11;
                Calls::FastCall(v4 + 1512, &v24, v5, v4);
                v24 ^= 0xB53043FB;
                goto LABEL_1036;
            case 0x2A0:
                v13 = (unsigned __int8)v5 ^ 0x1Cu;
                v14 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1256) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 1768), 25)) + 1640i64);
                goto LABEL_13;
            case 0x2A1:
                v19 = FuckEnc::CacheRead<_DWORD>(v4 + 608) + (FuckEnc::CacheRead<_DWORD>(v4 + 824) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 1280i64) + 80i64));
                goto LABEL_1034;
            case 0x2A2:
                Calls::FastCall(v4 + 1888, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 600) + 8i64 * (v5 & 0x31)));
                v24 = (v24 ^ 0xF4D0FF73) - 104405439;
                goto LABEL_1036;
            case 0x2A3:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 552) + 776i64);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 1392);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 880i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1152);
                goto LABEL_1036;
            case 0x2A4:
                v11 = (v11 - FuckEnc::CacheRead<_DWORD>(v4 + 280)) ^ 0xE47CD875;
                v24 = v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1240) + 1208i64);
                v18 = FuckEnc::CacheRead<_DWORD>(v10 + 128) ^ 0x385D1752;
                goto LABEL_1033;
            case 0x2A5:
                v12 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1768) * (FuckEnc::CacheRead<_DWORD>(v4 + 1152) + (FuckEnc::CacheRead<_DWORD>(v4 + 1040) ^ 0x96E7F51D));
                goto LABEL_1035;
            case 0x2A6:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 784);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 760);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 872i64) + 8i64 * (__ROL4__(FuckEnc::CacheRead<_DWORD>(v10 + 1152), 28) & 0x30)) + 384i64);
                goto LABEL_1036;
            case 0x2A7:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1240);
                Calls::FastCall(v10 + 520, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1544) + 1448i64));
                goto LABEL_1036;
            case 0x2A8:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 1112) ^ v11;
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 1768);
                v12 = v24 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 544i64) + 8i64 * ((unsigned __int8)(46 * v5) & 0xE3)) + 1480i64);
                goto LABEL_1035;
            case 0x2A9:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 608);
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 128);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 216) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1480) & 0x69)) + 824i64);
                goto LABEL_1036;
            case 0x2AA:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1920);
                v24 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 224) + 128i64);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1776) + 168i64) ^ v24;
                goto LABEL_1035;
            case 0x2AB:
                Calls::FastCall(v4 + 1504, &v24, v5, v4);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 784i64);
                goto LABEL_1036;
            case 0x2AC:
                v13 = (unsigned __int8)v5 & 0x91;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 232) + 464i64);
            LABEL_12:
                v14 = FuckEnc::CacheRead<_QWORD>(v10 + 72);
                goto LABEL_13;
            case 0x2AD:
                v24 = v11 + ~FuckEnc::CacheRead<_DWORD>(v4 + 1104);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 712);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1216) + 768i64);
                v12 = v24 + FuckEnc::CacheRead<_DWORD>(v10 + 1480);
                goto LABEL_1035;
            case 0x2AE:
                v24 = __ROR4__(v11 - 653094468 + FuckEnc::CacheRead<_DWORD>(v4 + 1760), v5);
                v24 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 408i64) ^ v24) - 921394660;
                goto LABEL_1036;
            case 0x2AF:
                v11 = ~v11;
                v24 = v11;
                v19 = v5 + ~(-1022283316 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 544) + 8i64 * ((-62 * (_BYTE)v5) & 0x56)) + 1432i64));
                goto LABEL_1034;
            case 0x2B0:
                v24 = v11 + v5 * FuckEnc::CacheRead<_DWORD>(v4 + 1920) * (FuckEnc::CacheRead<_DWORD>(v4 + 1480) ^ 0xCA7C115E);
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 496) * v5;
                goto LABEL_1036;
            case 0x2B1:
                v24 = v11 ^ 0x2CE18FEB;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1208) + 1504i64, &v24, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1240));
                goto LABEL_1036;
            case 0x2B2:
                Calls::FastCall(v4 + 1576, &v24, v5, v4);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 384) >> 23;
                goto LABEL_1036;
            case 0x2B3:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1920);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1416);
                Calls::FastCall(v4 + 512, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1584) + 8i64 * (unsigned __int8)__ROR4__(v5, 12)));
                goto LABEL_1036;
            case 0x2B4:
                v24 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 408));
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1776) + 1200i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 28)) + 1600i64) + 296i64) + 1592i64);
                goto LABEL_1036;
            case 0x2B5:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 888) + 760i64) + 1912i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 15)) + 768i64) + 1288i64) + 4i64 * (unsigned __int8)(115 * v5)) ^ v11;
                goto LABEL_1036;
            case 0x2B6:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 1592) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 136) + 1312i64) + 8i64 * ((unsigned __int8)v5 & 0xD2), &v24, v5, v4);
                goto LABEL_1036;
            case 0x2B7:
                v13 = (unsigned __int8)(65 * v5);
                v14 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1040) & 0x11)) + 1056i64);
                goto LABEL_13;
            case 0x2B8:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 712) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 224i64);
                v24 += FuckEnc::CacheRead<_DWORD>(v10 + 1808);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 824i64);
                goto LABEL_1036;
            case 0x2B9:
                v24 = v11 ^ 0x9D1A6A91;
                v24 = (v11 ^ 0x9D1A6A91) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 136) + 304i64) + 4i64 * ((unsigned __int8)v5 ^ 0x7Fu)) * (FuckEnc::CacheRead<_DWORD>(v4 + 1040) >> 20);
                goto LABEL_1036;
            case 0x2BA:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1528) + 8i64 * (v5 & 0x2D)) + 736i64);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 1392);
                goto LABEL_1036;
            case 0x2BB:
                v24 = __ROL4__(v11, 232);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 232) + 1608i64) + 1608i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v10 + 168);
                goto LABEL_1036;
            case 0x2BC:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 1600i64) + 1936i64) + 136i64) + 912i64);
                Calls::FastCall(v4 + 264, &v24, v5, v10);
                goto LABEL_1036;
            case 0x2BD:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 880);
                v24 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 1480) + 1657929537);
                Calls::FastCall(v4 + 1520, &v24, v5, v4);
                v24 = ~v24;
                goto LABEL_1036;
            case 0x2BE:
                Calls::FastCall(v4 + 568, &v24, v5, v4);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 760) + 1920i64);
                goto LABEL_1036;
            case 0x2BF:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 736);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 560);
                Calls::FastCall(v10 + 576, &v24, v5, v4);
                goto LABEL_1036;
            case 0x2C0:
                v24 = v11 + 1607007954;
                v12 = v11 + 1607007954 - FuckEnc::CacheRead<_DWORD>(v4 + 1152) * (FuckEnc::CacheRead<_DWORD>(v4 + 712) + ~FuckEnc::CacheRead<_DWORD>(v4 + 456));
                goto LABEL_1035;
            case 0x2C1:
                v24 = v5 + v11 + FuckEnc::CacheRead<_DWORD>(v4 + 168);
                v12 = v24 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1776) + 1104i64) * ~FuckEnc::CacheRead<_DWORD>(v4 + 280));
                goto LABEL_1035;
            case 0x2C2:
                v15 = FuckEnc::CacheRead<_QWORD>(v4 + 288);
                v14 = FuckEnc::CacheRead<_QWORD>(v4 + 1312);
                v13 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 120i64) & 0xB1;
                goto LABEL_14;
            case 0x2C3:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 1432) ^ v11 ^ 0x573811E2;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1536) + 1560i64, &v24, v5, v4);
                goto LABEL_1036;
            case 0x2C4:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 256) + 600i64) + 8i64 * (unsigned __int8)(-97 * v5)) + 1456i64) + 8i64 * ((unsigned __int8)v5 & 0xA4)) + 136i64);
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 128);
                goto LABEL_1036;
            case 0x2C5:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1448) + 1368i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 944i64) + 288i64) + 1240i64) + 608i64);
                goto LABEL_1036;
            case 0x2C6:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1592);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1536) + 1536i64);
                Calls::FastCall(v4 + 1512, &v24, v5, v10);
                goto LABEL_1036;
            case 0x2C7:
                v24 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1288) + 4i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1416) + 56i64), 24)) ^ ((unsigned int)(FuckEnc::CacheRead<_DWORD>(v4 + 776) - 1898840255) >> 21));
                goto LABEL_1036;
            case 0x2C8:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 1768) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 296i64);
                v24 += FuckEnc::CacheRead<_DWORD>(v10 + 1264);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 120);
                goto LABEL_1036;
            case 0x2C9:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1624) + 4i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 1592i64) ^ 0x20) & 0xA5)) + v5;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1536) + 1776i64);
                v12 = FuckEnc::CacheRead<_DWORD>(v10 + 1920) ^ v24;
                goto LABEL_1035;
            case 0x2CA:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 792);
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 736);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1368);
                v24 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1296) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 712) & 0x4B));
                goto LABEL_1036;
            case 0x2CB:
                v24 = v11 + 1 + (FuckEnc::CacheRead<_DWORD>(v4 + 1040) << 6);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 792) + 1280i64) + 1696i64);
                goto LABEL_1036;
            case 0x2CC:
                v24 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 1416i64) + 1592i64));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1528) + 8i64 * ((unsigned __int8)v5 ^ 0xFBu)) + 760i64);
                v24 -= FuckEnc::CacheRead<_DWORD>(v10 + 1592);
                goto LABEL_1036;
            case 0x2CD:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 384);
                v24 = v24 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 624i64) + 1112i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1208) + 1432i64);
                goto LABEL_1036;
            case 0x2CE:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 280) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1280);
                Calls::FastCall(v4 + 528, &v24, v5, FuckEnc::CacheRead<_QWORD>(v10 + 440));
                goto LABEL_1036;
            case 0x2CF:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1720);
                v24 -= v5 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1696) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1776) + 1480i64));
                goto LABEL_1036;
            case 0x2D0:
                v24 = v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1912) + 8i64 * (unsigned __int8)(74 * v5)) + 448i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1208) + 792i64);
                v24 -= FuckEnc::CacheRead<_DWORD>(v10 + 1392);
                goto LABEL_1036;
            case 0x2D1:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1568) + 712i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 760) + 1600i64);
                v12 = v24 - (FuckEnc::CacheRead<_DWORD>(v10 + 56) & 0xFFFFFFFE);
                goto LABEL_1035;
            case 0x2D2:
                Calls::FastCall(v4 + 528, &v24, v5, v4);
                v24 += 1377348647;
                v12 = FuckEnc::CacheRead<_DWORD>(v4 + 1392) + v24 - 1023309500;
                goto LABEL_1035;
            case 0x2D3:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 792);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 560) + 1560i64, &v24, v5, FuckEnc::CacheRead<_QWORD>(v10 + 1744));
                goto LABEL_1036;
            case 0x2D4:
                v24 = v11 ^ ((FuckEnc::CacheRead<_DWORD>(v4 + 1104) + 1875734829) * ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 8i64 * (unsigned __int8)(21 * v5)) + 1288i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 27)));
                goto LABEL_1036;
            case 0x2D5:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 296);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 896i64, &v24, v5, FuckEnc::CacheRead<_QWORD>(v10 + 552));
                goto LABEL_1036;
            case 0x2D6:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1432);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 296);
                v24 = __ROR4__(v24, ~(24 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v10 + 1864) + 1064i64)) | 0xD);
                goto LABEL_1036;
            case 0x2D7:
                Calls::FastCall(v4 + 1848, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1912) + 8i64 * ((unsigned __int8)v5 & 0xB2)));
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_DWORD>(v4 + 168));
                goto LABEL_1036;
            case 0x2D8:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1152);
                v24 ^= (FuckEnc::CacheRead<_DWORD>(v4 + 1720) ^ 0x4205996D) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1416) + 1208i64) + 1040i64);
                goto LABEL_1036;
            case 0x2D9:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 384) ^ v11 ^ 0x2B7537D6;
                v12 = v24 + ((FuckEnc::CacheRead<_DWORD>(v4 + 80) ^ (unsigned int)(FuckEnc::CacheRead<_DWORD>(v4 + 936) - 168480931)) >> 26);
                goto LABEL_1035;
            case 0x2DA:
                v24 = ~(v5 ^ v11);
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 872) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 136) + 1480i64) ^ 0xC5) & 0x7B)) + 1592i64));
                goto LABEL_1036;
            case 0x2DB:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 136) + 1544i64) + 760i64) + 216i64) + 8i64 * (unsigned __int8)(116 * v5)) + 1616i64) + 4i64 * ((unsigned __int8)v5 & 0xD1)) ^ v11;
                goto LABEL_1036;
            case 0x2DC:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 232) + 1088i64) + 432i64) + 1536i64);
                v11 ^= FuckEnc::CacheRead<_DWORD>(v10 + 736);
                v24 = v11;
                v19 = FuckEnc::CacheRead<_DWORD>(v4 + 448) * v5;
                goto LABEL_1034;
            case 0x2DD:
                v24 = __ROR4__(v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 1440) & 0xFFFFFFE7), v5);
                v12 = v24 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 1696i64);
                goto LABEL_1035;
            case 0x2DE:
                v24 = __ROL4__(v11, v5 * (FuckEnc::CacheRead<_DWORD>(v4 + 1432) + 97));
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 928) + 8i64 * (unsigned __int8)(54 * FuckEnc::CacheRead<_BYTE>(v4 + 1808))) + 1368i64);
                goto LABEL_1036;
            case 0x2DF:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1448);
                v19 = FuckEnc::CacheRead<_DWORD>(v4 + 80) ^ FuckEnc::CacheRead<_DWORD>(v10 + 776) ^ ((FuckEnc::CacheRead<_DWORD>(v4 + 1440) & 0xFFFFFC00) << 19);
                goto LABEL_1034;
            case 0x2E0:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1856) + 8i64 * (((unsigned __int8)v5 ^ 0xFC) & 0x5F)) + 288i64);
                v24 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 1768) * (FuckEnc::CacheRead<_BYTE>(v10 + 1392) | 0x10));
                goto LABEL_1036;
            case 0x2E1:
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 1696) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1088) + 80i64));
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 1064) | 9;
                goto LABEL_1036;
            case 0x2E2:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 760) + 224i64) + 1504i64, &v24, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1240));
                goto LABEL_1036;
            case 0x2E3:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 496) ^ v11;
                Calls::FastCall(v4 + 576, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 928) + 8i64 * ((unsigned __int8)(-122 * v5) & 0xAF)) + 1568i64));
                goto LABEL_1036;
            case 0x2E4:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1776);
                v24 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v10 + 440) + 1368i64) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1536) + 1944i64) + 4i64 * (v5 & 0x25)));
                goto LABEL_1036;
            case 0x2E5:
                Calls::FastCall(v4 + 200, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1912) + 8i64 * ((unsigned __int8)v5 & 0x92)) + 1600i64));
                goto LABEL_1036;
            case 0x2E6:
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1808));
                Calls::FastCall(v4 + 1904, &v24, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1448));
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 784);
                goto LABEL_1036;
            case 0x2E7:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 136);
                Calls::FastCall(v4 + 864, &v24, v5, v10);
                v12 = v24 + 1 + FuckEnc::CacheRead<_DWORD>(v4 + 1696);
                goto LABEL_1035;
            case 0x2E8:
                v24 = v11 + 1 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 880) + 1592i64);
                v24 ^= v5 + ~FuckEnc::CacheRead<_DWORD>(v4 + 496);
                goto LABEL_1036;
            case 0x2E9:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 224);
                v12 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1896) + 1760i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 136) + 1296i64) + 4i64 * (v5 & 0x15)) + 1;
                goto LABEL_1035;
            case 0x2EA:
                v11 ^= FuckEnc::CacheRead<_DWORD>(v4 + 936);
                v24 = v11;
                v19 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1200) + 8i64 * (unsigned __int8)(-100 * v5)) + 776i64) ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 1040);
                goto LABEL_1034;
            case 0x2EB:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 760) + 1808i64);
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 784) + 1;
                v12 = v24 + FuckEnc::CacheRead<_DWORD>(v4 + 1368);
                goto LABEL_1035;
            case 0x2EC:
                v24 = (v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 1440i64)) ^ 0x46F5E293;
                v24 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 888) + 1720i64) + 366083905;
                goto LABEL_1036;
            case 0x2ED:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 888);
                v15 = FuckEnc::CacheRead<_QWORD>(v4 + 1608);
                v13 = (unsigned __int8)(34 * v5);
                v14 = FuckEnc::CacheRead<_QWORD>(v10);
                goto LABEL_14;
            case 0x2EE:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1208);
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 1104);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1216) + 1936i64) + 112i64) + 1536i64) + 1264i64);
                goto LABEL_1036;
            case 0x2EF:
                v24 = v11 + v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1752);
                v24 = (v11 + v5) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1064) + (FuckEnc::CacheRead<_DWORD>(v4 + 736) ^ FuckEnc::CacheRead<_DWORD>(v10 + 1392)));
                goto LABEL_1036;
            case 0x2F0:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 600) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 496) & 0x3E)) + 1128i64) + 8i64 * ((unsigned __int8)v5 ^ 0xE3u)) + 1504i64, &v24, v5, v4);
                goto LABEL_1036;
            case 0x2F1:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1856) + 8i64 * (unsigned __int8)(-103 * v5)) + 1640i64) + 8i64 * ((unsigned __int8)v5 & 0xB1), &v24, v5, v4);
                v24 = ~v24;
                goto LABEL_1036;
            case 0x2F2:
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1264));
                v24 = __ROL4__(v24, -14 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 544i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 15)) + 960i64) + 4i64 * ((unsigned __int8)v5 & 0x80)));
                goto LABEL_1036;
            case 0x2F3:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 912);
                v24 = FuckEnc::CacheRead<_DWORD>(v10 + 1112) ^ v11;
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 432) + 216i64) + 8i64 * ((unsigned __int8)v5 ^ 0x13u)) + 1152i64));
                goto LABEL_1036;
            case 0x2F4:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1896) + 536i64, &v24, v5, v4);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 80);
                goto LABEL_1036;
            case 0x2F5:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1392) ^ 0xA6u)) + 1216i64) + 864i64, &v24, v5, v4);
                goto LABEL_1036;
            case 0x2F6:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 8i64 * (unsigned __int8)(-95 * v5)) + 496i64);
                v24 ^= v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 280i64);
                goto LABEL_1036;
            case 0x2F7:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 224);
                v24 = FuckEnc::CacheRead<_DWORD>(v10 + 120) ^ v11;
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1584) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 80i64) & 0xCB)) + 56i64);
                goto LABEL_1036;
            case 0x2F8:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1568);
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 408));
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1416) + 144i64) + 8i64 * (v5 & 0x70)) + 760i64) + 608i64);
                goto LABEL_1036;
            case 0x2F9:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1112) - v5;
                v24 += ~(FuckEnc::CacheRead<_DWORD>(v4 + 456) + ~FuckEnc::CacheRead<_DWORD>(v4 + 1264));
                goto LABEL_1036;
            case 0x2FA:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 944);
                v24 = v11 + ~FuckEnc::CacheRead<_DWORD>(v10 + 1368);
                v24 = v5 ^ __ROL4__(v24, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 1392i64) >> 11);
                goto LABEL_1036;
            case 0x2FB:
                v24 = v11 + 1 + FuckEnc::CacheRead<_DWORD>(v4 + 1432);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 1760) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 544) + 8i64 * (unsigned __int8)(36 * v5)) + 824i64);
                goto LABEL_1036;
            case 0x2FC:
                v24 = v11 ^ (1020808914 * FuckEnc::CacheRead<_DWORD>(v4 + 1720));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1568);
                v24 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1784) + 8i64 * ((unsigned __int8)v5 & 0xDF)) + 560i64) + 1040i64);
                goto LABEL_1036;
            case 0x2FD:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 224);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 912) + 1192i64, &v24, v5, v10);
                v24 ^= 0x94B6D227;
                goto LABEL_1036;
            case 0x2FE:
                v24 = __ROL4__(v11, 105);
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 280);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 1720);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 232) + 496i64);
                goto LABEL_1036;
            case 0x2FF:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 216) + 8i64 * ((unsigned __int8)v5 & 0xDA)) + 1432i64);
                v24 += (1617670461 * FuckEnc::CacheRead<_DWORD>(v4 + 712)) | 0xF;
                goto LABEL_1036;
            case 0x300:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 936);
                v24 = (_DWORD)0xDC6918C + 1 + (FuckEnc::CacheRead<_DWORD>(v4 + 448) ^ v24);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1216);
                v24 -= FuckEnc::CacheRead<_DWORD>(v10 + 1696);
                goto LABEL_1036;
            case 0x301:
                v24 = (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 120)) ^ 0xC3018944;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1896) + 232i64);
                v12 = FuckEnc::CacheRead<_DWORD>(v10 + 1480) + v24;
                goto LABEL_1035;
            case 0x302:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1104);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 1392);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 1808);
                v24 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 712i64);
                goto LABEL_1036;
            case 0x303:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 584) + 1440i64) ^ v11;
                v24 = __ROL4__(v24, ~FuckEnc::CacheRead<_BYTE>(v4 + 1112) + FuckEnc::CacheRead<_BYTE>(v4 + 128) + 49);
                goto LABEL_1036;
            case 0x304:
                v24 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 1152) & 0xFFFFFFF3);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 1392) | 0x14;
                v24 += ~FuckEnc::CacheRead<_DWORD>(v4 + 1112);
                goto LABEL_1036;
            case 0x305:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 1120i64) + 408i64);
                v24 += ~(-678190872 * FuckEnc::CacheRead<_DWORD>(v4 + 936));
                goto LABEL_1036;
            case 0x306:
                v24 = v11 ^ 0x26662A7D;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 464) + 1512i64, &v24, v5, v4);
                v24 -= 206440127;
                goto LABEL_1036;
            case 0x307:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 792);
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1448) + 712i64) ^ ~FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v10 + 1616) + 4i64 * ((unsigned __int8)v5 & 0xF1)));
                goto LABEL_1036;
            case 0x308:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1216) + 384i64);
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_DWORD>(v4 + 80));
                v12 = v24 + FuckEnc::CacheRead<_DWORD>(v4 + 1264) * v5 + 2112530889;
                goto LABEL_1035;
            case 0x309:
                v23 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 544) + 8i64 * ((unsigned __int8)v5 ^ 0xDCu)) + 216i64) + 8i64 * ((unsigned __int8)__ROR4__(v5, 22) & 0xC7));
            LABEL_435:
                Calls::FastCall(v23 + 1248, &v24, v5, v4);
                goto LABEL_1036;
            case 0x30A:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 8i64 * (unsigned __int8)(-124 * v5)) + 952i64);
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 224) + 1528i64) + 8i64 * (unsigned __int8)(42 * v5)) + 640i64) + 4i64 * ((unsigned __int8)v5 & 0xCD));
                goto LABEL_1036;
            case 0x30B:
                v24 = -v11 - 398655794;
                v12 = v24 + (FuckEnc::CacheRead<_DWORD>(v4 + 608) - 1019533116) * (FuckEnc::CacheRead<_DWORD>(v4 + 56) - 995869106);
                goto LABEL_1035;
            case 0x30C:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1216) + 1240i64) + 1368i64);
                v24 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 928i64) + 8i64 * ((unsigned __int8)__ROL4__(v5, 9) & 0xC8)) + 1040i64);
                goto LABEL_1036;
            case 0x30D:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1216) + 760i64) + 472i64) + 8i64 * (unsigned __int8)(-59 * v5)) + 544i64) + 8i64 * (unsigned __int8)(100 * v5)) + 776i64) ^ v11;
                goto LABEL_1036;
            case 0x30E:
                v24 = v11 + v5;
                v12 = v11 + v5 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1200) + 8i64 * (unsigned __int8)(19 * v5)) + 760i64) + 1288i64) + 4i64 * (((unsigned __int8)v5 ^ 2) & 0xA3)) ^ v5);
                goto LABEL_1035;
            case 0x30F:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 1760i64) ^ 0xEu)) + 912i64);
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1696);
                goto LABEL_1036;
            case 0x310:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1856) + 8i64 * (unsigned __int8)__ROL4__(v5, 19)) + 256i64);
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1216) + 1152i64) ^ v11;
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 712);
                goto LABEL_1036;
            case 0x311:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 280);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1856) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 1064), 18)) + 912i64);
                v12 = v24 + (FuckEnc::CacheRead<_DWORD>(v10 + 1040) & 0xFFFFFFE8) - 1288740252;
                goto LABEL_1035;
            case 0x312:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 792) + 560i64);
                v12 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 712) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 928) + 8i64 * (__ROR4__(v5, 25) & 0x42)) + 824i64));
                goto LABEL_1035;
            case 0x313:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 1368) ^ v11;
                Calls::FastCall(v4 + 240, &v24, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1272));
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 1440);
                goto LABEL_1036;
            case 0x314:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 824);
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 1264) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1896) + 80i64), 7)) + 168i64);
                goto LABEL_1036;
            case 0x315:
                v11 ^= 0xC1D1FF41;
                v24 = v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1544) + 616i64) + 1872i64);
                v19 = ~FuckEnc::CacheRead<_DWORD>(v10 + 1112) - ((_DWORD)0xDD67FB1 + 1);
                goto LABEL_1034;
            case 0x316:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 8i64 * (unsigned __int8)(-55 * v5)) + 1936i64) + 1768i64);
                v24 += ~FuckEnc::CacheRead<_DWORD>(v4 + 1112);
                goto LABEL_1036;
            case 0x317:
                v24 = v11 + v5;
                v24 = __ROR4__(v11 + v5, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 544) + 8i64 * (unsigned __int8)(13 * v5)) + 1256i64) + 8i64 * ((12 * (_BYTE)v5) & 0x79)) + 968i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 12)));
                goto LABEL_1036;
            case 0x318:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1064);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 936);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 552) + 224i64);
                v12 = v24 + FuckEnc::CacheRead<_DWORD>(v10 + 936);
                goto LABEL_1035;
            case 0x319:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(v4 + 1584) + 1200i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 21)) + 1760i64);
                goto LABEL_1036;
            case 0x31A:
                v11 ^= 0x51E630DAu;
                v24 = v11;
                v19 = FuckEnc::CacheRead<_DWORD>(v4 + 1760) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 600) + 8i64 * (unsigned __int8)__ROL4__(v5, 2)) + 1920i64);
                goto LABEL_1034;
            case 0x31B:
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1720));
                v24 = (v24 - FuckEnc::CacheRead<_DWORD>(v4 + 280)) ^ 0xC797E758;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1448);
                v12 = v24 + ~FuckEnc::CacheRead<_DWORD>(v10 + 1040);
                goto LABEL_1035;
            case 0x31C:
                v24 = v11 + 1 + (FuckEnc::CacheRead<_DWORD>(v4 + 1696) & 0xFFFFFFE2);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 1768) | 0x1D;
                goto LABEL_1036;
            case 0x31D:
                v11 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1528) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 1264) * v5, 4)) + 712i64));
                v24 = v11;
                v19 = FuckEnc::CacheRead<_DWORD>(v4 + 1112) * v5;
                goto LABEL_1034;
            case 0x31E:
                v24 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 1392);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 136);
                v24 += FuckEnc::CacheRead<_DWORD>(v10 + 1440);
                v12 = FuckEnc::CacheRead<_DWORD>(v4 + 1696) + v24;
                goto LABEL_1035;
            case 0x31F:
                v24 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 1768) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 1600i64) + 912i64) + 600i64) + 8i64 * ((unsigned __int8)v5 ^ 0x43u)) + 1368i64));
                goto LABEL_1036;
            case 0x320:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 120);
                Calls::FastCall(v4 + 208, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 216) + 8i64 * (__ROL4__(v5, 9) & 0x4E)) + 944i64));
                goto LABEL_1036;
            case 0x321:
                v24 = __ROR4__(v11, (-59 * FuckEnc::CacheRead<_BYTE>(v4 + 784)) ^ (FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 880) + 776i64) + (FuckEnc::CacheRead<_DWORD>(v4 + 1104) >> 13)));
                goto LABEL_1036;
            case 0x322:
                v24 = v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1448) + 1872i64) + 1104i64);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 1768) << 29;
                goto LABEL_1036;
            case 0x323:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 1424i64);
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 608);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 256) + 56i64) + 1711062116;
                goto LABEL_1036;
            case 0x324:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 8i64 * ((unsigned __int8)v5 & 0x88)) + 112i64) + 1288i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 13)) - (FuckEnc::CacheRead<_DWORD>(v4 + 1768) ^ 0x1C0FD686);
                goto LABEL_1036;
            case 0x325:
                v24 = v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 448i64);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 256) + 1624i64) + 4i64 * ((unsigned __int8)v5 ^ 0x26u)) | 0x1F;
                goto LABEL_1036;
            case 0x326:
                v19 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1528) + 8i64 * (unsigned __int8)(105 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1568) + 776i64))) + 1152i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 1152) << 8);
                goto LABEL_1034;
            case 0x327:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 448) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 592i64, &v24, v5, v4);
                v24 = ~v24;
                goto LABEL_1036;
            case 0x328:
                v24 = v11 - 1027407567;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 888);
                v24 = (v11 - 1027407567) ^ FuckEnc::CacheRead<_DWORD>(v10 + 1440) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 552i64) + 128i64);
                goto LABEL_1036;
            case 0x329:
                v24 = v11 + 1 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 8i64 * (unsigned __int8)(23 * FuckEnc::CacheRead<_BYTE>(v4 + 1592))) + 1264i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 464);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1120) + 128i64);
                goto LABEL_1036;
            case 0x32A:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1752);
                v14 = FuckEnc::CacheRead<_QWORD>(v4 + 328);
                v13 = (unsigned __int8)(92 * FuckEnc::CacheRead<_BYTE>(v10 + 784) - 108) & 0xD7;
                goto LABEL_13;
            case 0x32B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 288);
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 952) + 312i64) + 4i64 * ((unsigned __int8)v5 ^ 0xE1u)));
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 1040) ^ v5;
                goto LABEL_1036;
            case 0x32C:
                v24 = v11 ^ (~FuckEnc::CacheRead<_DWORD>(v4 + 608) * (FuckEnc::CacheRead<_DWORD>(v4 + 56) ^ FuckEnc::CacheRead<_DWORD>(v4 + 1064) ^ 0x32D0FFE0));
                goto LABEL_1036;
            case 0x32D:
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 272) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 1112i64) ^ 0x44) & 0xF4)) + 280i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 296);
                v12 = v24 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1088) + 1768i64);
                goto LABEL_1035;
            case 0x32E:
                Calls::FastCall(v4 + 192, &v24, v5, v4);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1528) + 8i64 * ((-7 * FuckEnc::CacheRead<_BYTE>(v4 + 824)) & 0x15)) + 936i64);
                goto LABEL_1036;
            case 0x32F:
                v24 = (v5 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1440) - 473755343 * FuckEnc::CacheRead<_DWORD>(v4 + 1592) + v11)) + 928518220;
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 936);
                goto LABEL_1036;
            case 0x330:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 216) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 496), 3)) + 1776i64);
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 1152);
                v24 += ~(FuckEnc::CacheRead<_DWORD>(v4 + 168) >> 3);
                goto LABEL_1036;
            case 0x331:
                v24 = v11 + 1892810561 * FuckEnc::CacheRead<_DWORD>(v4 + 1760) - FuckEnc::CacheRead<_DWORD>(v4 + 1264) + 1;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1416);
                v12 = v24 + FuckEnc::CacheRead<_DWORD>(v10 + 1392);
                goto LABEL_1035;
            case 0x332:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 1208i64);
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 800) + 8i64 * (unsigned __int8)(-86 * v5)) + 560i64) + 1912i64) + 8i64 * ((unsigned __int8)v5 & 0xA8)) + 1768i64);
                goto LABEL_1036;
            case 0x333:
                v24 = v11 - 1761474817 + FuckEnc::CacheRead<_DWORD>(v4 + 608);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 272) + 8i64 * ((unsigned __int8)v5 & 0xE6)) + 216i64) + 8i64 * ((-12 * (_BYTE)v5) & 0x1A)) + 120i64);
                goto LABEL_1036;
            case 0x334:
                v24 = v11 ^ 0x3DE80975;
                v24 = __ROL4__(v11 ^ 0x3DE80975, v5 + FuckEnc::CacheRead<_DWORD>(v4 + 1368));
                v24 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1912) + 8i64 * (unsigned __int8)(49 * v5)) + 1264i64);
                goto LABEL_1036;
            case 0x335:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1872) + 1248i64, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1088) + 232i64));
                goto LABEL_1036;
            case 0x336:
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1152));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 296i64);
                v24 -= (unsigned int)(FuckEnc::CacheRead<_DWORD>(v4 + 712) + FuckEnc::CacheRead<_DWORD>(v10 + 1392)) >> 15;
                goto LABEL_1036;
            case 0x337:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1776) + 1768i64) ^ v11;
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 776);
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 1392i64) + v24 - 1023331977;
                goto LABEL_1036;
            case 0x338:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 560) + 112i64);
                v24 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 888) + 1264i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 632) + 4i64 * (unsigned __int8)(9 * v5)));
                goto LABEL_1036;
            case 0x339:
                Calls::FastCall(v4 + 856, &v24, v5, v4);
                v24 ^= 0x4734B908u;
                v24 = __ROL4__(v24, FuckEnc::CacheRead<_BYTE>(v4 + 784) ^ 0x33);
                goto LABEL_1036;
            case 0x33A:
                v24 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 784));
                v24 = __ROL4__(v24, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 600) + 8i64 * ((unsigned __int8)v5 ^ 0x67u)) + 1152i64) >> 3) - 60667150;
                goto LABEL_1036;
            case 0x33B:
                v24 = __ROL4__(v11, 65);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 432);
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_DWORD>(v10 + 56));
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_BYTE>(v4 + 1760) & 0xF2) + 912886507;
                goto LABEL_1036;
            case 0x33C:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 760) + 144i64) + 8i64 * ((8 * (unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1592)) & 0x1D)) + 136i64) + 584i64);
                v24 = ~(FuckEnc::CacheRead<_DWORD>(v10 + 1152) ^ v11);
                goto LABEL_1036;
            case 0x33D:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 1112i64);
                v24 = __ROR4__(v24, 37 - FuckEnc::CacheRead<_BYTE>(v4 + 168)) + 1023332014;
                goto LABEL_1036;
            case 0x33E:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 936) ^ v11;
                v24 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 912) + 1896i64) + 1784i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 20)) + 80i64);
                goto LABEL_1036;
            case 0x33F:
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 1768) * v5);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 256);
                v24 -= FuckEnc::CacheRead<_DWORD>(v10 + 1808);
                v12 = v24 + ~FuckEnc::CacheRead<_DWORD>(v4 + 408);
                goto LABEL_1035;
            case 0x340:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 1016i64) + 8i64 * ((unsigned __int8)v5 & 0xD7), &v24, v5, FuckEnc::CacheRead<_QWORD>(v4 + 440));
                goto LABEL_1036;
            case 0x341:
                Calls::FastCall(v4 + 248, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 1152), 25)));
                goto LABEL_1036;
            case 0x342:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 608);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 1016i64) + 8i64 * (v5 & 0x42), &v24, v5, v4);
                goto LABEL_1036;
            case 0x343:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 448);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1544) + 136i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1768) * (FuckEnc::CacheRead<_DWORD>(v4 + 120) - 852742621);
                goto LABEL_1036;
            case 0x344:
                v24 = v11 + 751959873;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 952);
                v24 = v11 + 751959873 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1912) + 8i64 * ((unsigned __int8)v5 ^ 0x46u)) + 1120i64) + 1288i64) + 4i64 * ((unsigned __int8)(-41 * v5) & 0xF2));
                goto LABEL_1036;
            case 0x345:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 736);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 296);
                v24 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 216) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v10 + 1920) & 0x9B)) + 1528i64) + 8i64 * (((unsigned __int8)v5 ^ 0x40) & 0xC0)) + 1720i64);
                goto LABEL_1036;
            case 0x346:
                v24 = ~(FuckEnc::CacheRead<_DWORD>(v4 + 448) ^ v11);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 1152) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1568) + 80i64);
                goto LABEL_1036;
            case 0x347:
                v24 = v5 ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1448);
                v24 = (v5 ^ v11) - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 432) + 936i64) ^ (FuckEnc::CacheRead<_DWORD>(v10 + 496) | 0x10));
                goto LABEL_1036;
            case 0x348:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1592);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 1960i64, &v24, v5, v4);
                goto LABEL_1036;
            case 0x349:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 712);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1240);
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 1760) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 968) + 4i64 * (((unsigned __int8)v5 ^ 2) & 0xDA)) ^ 0x309EB3BC;
                goto LABEL_1036;
            case 0x34A:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 464);
                v24 = (v11 + FuckEnc::CacheRead<_DWORD>(v10 + 1768)) ^ 0x4F848884;
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1872) + 448i64) ^ v24 ^ 0xB6E48CA7;
                goto LABEL_1035;
            case 0x34B:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1912) + 8i64 * (unsigned __int8)(23 * (FuckEnc::CacheRead<_DWORD>(v4 + 1152) ^ 0x47))) + 1776i64) + 448i64) ^ v11;
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 1064);
                goto LABEL_1036;
            case 0x34C:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1088);
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 560) + 1296i64) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1760) & 0x5C)) - FuckEnc::CacheRead<_DWORD>(v10 + 784);
                goto LABEL_1036;
            case 0x34D:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 8i64 * ((unsigned __int8)v5 ^ 8u)) + 512i64, &v24, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1872));
                goto LABEL_1036;
            case 0x34E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1416);
                Calls::FastCall(v10 + 864, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1544) + 792i64));
                goto LABEL_1036;
            case 0x34F:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1120) + 928i64) + 8i64 * (unsigned __int8)-(char)v5) + 80i64) ^ v11;
                Calls::FastCall(v4 + 1496, &v24, v5, v4);
                goto LABEL_1036;
            case 0x350:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1928);
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1616) + 4i64 * ((unsigned __int8)(120 * v5) & 0xE3));
                v24 = v24 - (FuckEnc::CacheRead<_DWORD>(v4 + 1368) << 23) + 1525903713;
                goto LABEL_1036;
            case 0x351:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 824i64) ^ v11;
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 168i64) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1368) << 13);
                goto LABEL_1036;
            case 0x352:
                v24 = v11 - v5 + 1089649217;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 232);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1280) + 584i64) + 1768i64) & 0xFFFFFFEC;
                goto LABEL_1036;
            case 0x353:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1368) - v5;
                v24 += (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 600) + 8i64 * ((unsigned __int8)v5 & 0x9B)) + 408i64) >> 3) - 1022283336;
                goto LABEL_1036;
            case 0x354:
                v24 = ~(v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 1392) & 0xFFFFFFF7 ^ 0x1A85685C));
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 1808) | 0x13;
                goto LABEL_1036;
            case 0x355:
                v24 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 1064) ^ 0x69EB7054);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 792) + 248i64, &v24, v5, v4);
                goto LABEL_1036;
            case 0x356:
                v24 = v11 + ~FuckEnc::CacheRead<_DWORD>(v4 + 1768);
                v24 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 144i64) + 8i64 * (unsigned __int8)(-66 * v5)) + 936i64);
                goto LABEL_1036;
            case 0x357:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 608) ^ v11 ^ 0xF8793CEF;
                v12 = v24 + (FuckEnc::CacheRead<_DWORD>(v4 + 824) ^ v5) + 106318979;
                goto LABEL_1035;
            case 0x358:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1096);
                v24 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 8i64 * (((unsigned __int8)v5 ^ 0xEF) & 0x90)) + 464i64) + 736i64) * (v5 + FuckEnc::CacheRead<_DWORD>(v10 + 1440)));
                goto LABEL_1036;
            case 0x359:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1216) + 824i64) ^ v11;
                Calls::FastCall(v4 + 920, &v24, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1776));
                goto LABEL_1036;
            case 0x35A:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 128) ^ v11;
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 784) + 999339477;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 768);
                v12 = FuckEnc::CacheRead<_DWORD>(v10 + 1696) + v24 + 1;
                goto LABEL_1035;
            case 0x35B:
                v24 = __ROL4__(v11, 159);
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_DWORD>(v4 + 80));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 616);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1432);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1392);
                goto LABEL_1036;
            case 0x35C:
                Calls::FastCall(v4 + 1904, &v24, v5, v4);
                v24 += (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 712)) >> 1;
                goto LABEL_1036;
            case 0x35D:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1448) + 1216i64);
                v24 = FuckEnc::CacheRead<_DWORD>(v10 + 1040) ^ v11;
                v24 = v24 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 1864i64) + 1480i64) - 831604825;
                goto LABEL_1036;
            case 0x35E:
                Calls::FastCall(v4 + 208, &v24, v5, FuckEnc::CacheRead<_QWORD>(v4 + 888));
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 1432);
                v12 = FuckEnc::CacheRead<_DWORD>(v4 + 1920) + v24;
                goto LABEL_1035;
            case 0x35F:
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 712));
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 1480) >> 2;
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 272) + 8i64 * ((unsigned __int8)v5 ^ 0xECu)) + 1920i64);
                goto LABEL_1036;
            case 0x360:
                Calls::FastCall(v4 + 1224, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 928) + 8i64 * ((unsigned __int8)v5 ^ 0xC5u)) + 440i64) + 1240i64) + 624i64));
                goto LABEL_1036;
            case 0x361:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 272) + 8i64 * (unsigned __int8)(50 * v5)) + 464i64);
                v24 = v5 + v11 + FuckEnc::CacheRead<_DWORD>(v10 + 1768);
                v24 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 464) + 1040i64);
                goto LABEL_1036;
            case 0x362:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 224) + 1744i64);
                Calls::FastCall(v4 + 1224, &v24, v5, FuckEnc::CacheRead<_QWORD>(v10 + 224));
                goto LABEL_1036;
            case 0x363:
                v24 = v11 - v5 * (FuckEnc::CacheRead<_DWORD>(v4 + 496) + 1);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 1896i64) + 120i64);
                goto LABEL_1036;
            case 0x364:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 1720) ^ v11;
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 1440) + 1;
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_BYTE>(v4 + 776) + 39);
                goto LABEL_1036;
            case 0x365:
                v24 = __ROR4__(v11, 77);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1568) + 1424i64);
                Calls::FastCall(v4 + 1168, &v24, v5, v10);
                goto LABEL_1036;
            case 0x366:
                v24 = v11 ^ 0x8F5B1A90;
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 784) ^ v11 ^ 0x8F5B1A90 ^ 0x33D8579D;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 560);
                v24 += FuckEnc::CacheRead<_DWORD>(v10 + 1920) + 1;
                goto LABEL_1036;
            case 0x367:
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1064)) ^ 0x73B16059;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 1752i64) + 1600i64) + 232i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1760);
                goto LABEL_1036;
            case 0x368:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 216) + 8i64 * (unsigned __int8)(-35 * FuckEnc::CacheRead<_BYTE>(v4 + 608))) + 1936i64) + 1608i64) + 1568i64);
                v19 = FuckEnc::CacheRead<_DWORD>(v4 + 1264) ^ FuckEnc::CacheRead<_DWORD>(v10 + 1392);
                goto LABEL_1034;
            case 0x369:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1448);
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1200) + 8i64 * (v5 & 0x17)) + 640i64) + 4i64 * ((unsigned __int8)(-53 * (FuckEnc::CacheRead<_DWORD>(v4 + 1720) + 62)) & 0xC5));
                goto LABEL_1036;
            case 0x36A:
                v24 = __ROR4__(v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 1088i64) + 1128i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 18)) + 136i64) + 1264i64), 205);
                goto LABEL_1036;
            case 0x36B:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 560i64);
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 288) + 408i64);
                v24 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 8i64 * (unsigned __int8)((_BYTE)v5 << 7)) + 1720i64);
                goto LABEL_1036;
            case 0x36C:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1368);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 1456i64) + 8i64 * ((unsigned __int8)v5 & 0xA6)) + 1744i64) + 464i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v10 + 128);
                goto LABEL_1036;
            case 0x36D:
                v24 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 1112) | 7);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 8i64 * ((unsigned __int8)v5 & 0xC3)) + 408i64);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 1720);
                goto LABEL_1036;
            case 0x36E:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1448) + 1528i64) + 8i64 * ((unsigned __int8)(-26 * v5) & 0x8B)) + 1840i64, &v24, v5, v4);
                goto LABEL_1036;
            case 0x36F:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 792) + 848i64, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 600) + 8i64 * ((-13 * (_BYTE)v5) & 0x15)));
                goto LABEL_1036;
            case 0x370:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1480);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(v4 + 1456) + 408i64);
                goto LABEL_1036;
            case 0x371:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 80);
                v24 = v24 - FuckEnc::CacheRead<_DWORD>(v4 + 448) - (_DWORD)0x3D0FF0A;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 104);
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 304) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v10 + 128) & 0x9F)));
                goto LABEL_1036;
            case 0x372:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1536) + 952i64) + 1608i64);
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 608) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1944) + 4i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v10 + 776), 5));
                goto LABEL_1036;
            case 0x373:
                Calls::FastCall(v4 + 248, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 760) + 1208i64));
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1768);
                goto LABEL_1036;
            case 0x374:
                v24 = v11 - 1965997101 * FuckEnc::CacheRead<_DWORD>(v4 + 736);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 1480);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 560) + 280i64) << 26;
                goto LABEL_1036;
            case 0x375:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 120);
                v24 ^= 844517184 * FuckEnc::CacheRead<_DWORD>(v4 + 1760);
                v24 ^= 1496803382 * FuckEnc::CacheRead<_DWORD>(v4 + 1064);
                goto LABEL_1036;
            case 0x376:
                v24 = v11 ^ 0x5B963E4B;
                v24 = (v11 ^ 0x5B963E4B) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 8i64 * (unsigned __int8)(-117 * v5)) + 1856i64) + 8i64 * ((unsigned __int8)v5 ^ 0x1Bu)) + 1616i64) + 4i64 * (v5 & 0x55));
                goto LABEL_1036;
            case 0x377:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 128);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 1640i64) + 8i64 * ((unsigned __int8)v5 & 0xE5), &v24, v5, v4);
                goto LABEL_1036;
            case 0x378:
                v24 = v11 + 1641152322 + FuckEnc::CacheRead<_DWORD>(v4 + 1040);
                v24 = __ROL4__(v24, 49 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1872) + 1424i64) + 496i64));
                goto LABEL_1036;
            case 0x379:
                v24 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1064) | 0xC);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 736) | 0xE;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1416);
                v12 = v24 - FuckEnc::CacheRead<_DWORD>(v10 + 128);
                goto LABEL_1035;
            case 0x37A:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 272i64) + 8i64 * (unsigned __int8)(-75 * v5)) + 1104i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1240);
                v24 += FuckEnc::CacheRead<_DWORD>(v10 + 1440);
                goto LABEL_1036;
            case 0x37B:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 224) + 464i64);
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 1392);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 1616i64) + 4i64 * (((unsigned __int8)v5 ^ 1) & 0x85)) + v24 - 1845768669;
                goto LABEL_1035;
            case 0x37C:
                v12 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1864) + 256i64) + 1920i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1528) + 8i64 * ((unsigned __int8)v5 & 0x80)) + 1808i64) + 1;
                goto LABEL_1035;
            case 0x37D:
                v24 = v11 ^ 0x4693D40E;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1544) + 1864i64);
                Calls::FastCall(v4 + 1232, &v24, v5, FuckEnc::CacheRead<_QWORD>(v10 + 432));
                goto LABEL_1036;
            case 0x37E:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1872) + 912i64) + 1240i64) + 1016i64) + 8i64 * (v5 & 0x2C), &v24, v5, v4);
                goto LABEL_1036;
            case 0x37F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 224);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 872) + 8i64 * (unsigned __int8)__ROR4__(v5, 11)) + 1888i64, &v24, v5, v4);
                goto LABEL_1036;
            case 0x380:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 1720i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 880i64) + 880i64) + 1424i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1392);
                goto LABEL_1036;
            case 0x381:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 56);
                v24 += ~FuckEnc::CacheRead<_DWORD>(v4 + 280) ^ (608782859 * FuckEnc::CacheRead<_DWORD>(v4 + 384));
                goto LABEL_1036;
            case 0x382:
                v24 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 1040) ^ 0x9E3CC199);
                v12 = v24 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 8i64 * ((unsigned __int8)v5 ^ 0x9Du)) + 1544i64) + 1280i64) + 936i64);
                goto LABEL_1035;
            case 0x383:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 776) ^ v11;
                v24 = v24 - FuckEnc::CacheRead<_DWORD>(v4 + 280) + 1023309500;
                v24 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 1768i64) ^ v24) - 1400014291;
                goto LABEL_1036;
            case 0x384:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 760) + 888i64) + 1448i64) + 1864i64) + 616i64) + 1536i64) + 1216i64) + 496i64);
                goto LABEL_1036;
            case 0x385:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1592);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 560) + 192i64, &v24, v5, v4);
                goto LABEL_1036;
            case 0x386:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 496);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1584) + 8i64 * ((unsigned __int8)__ROL4__(v5, 17) & 0xE6)) + 1776i64);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1280) + 712i64);
                goto LABEL_1036;
            case 0x387:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1264);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 576i64, &v24, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1208));
                goto LABEL_1036;
            case 0x388:
                // changed
                v24 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 496) >= 0 ? 0 : 1);
                // v24 = v11;
                // Utils::Log(1, XorStr("temp: 0x%0X, offset: 0x%0x"), FuckEnc::CacheRead<_DWORD>(v4 + 496), v4 + 496);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1240);
                v24 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 968) + 4i64 * (unsigned __int8)(-39 * v5));
                goto LABEL_1036;
            case 0x389:
                v24 = (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 824)) ^ 0x5A90ECF5;
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1216) + 1440i64);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 1112i64) ^ v24;
                goto LABEL_1035;
            case 0x38A:
                v12 = ((v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 8i64 * (unsigned __int8)(45 * v5)) + 232i64) + 1296i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 24))) ^ 0x278F6D54) - v5;
                goto LABEL_1035;
            case 0x38B:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 456) ^ v11;
                v24 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1088) + 824i64) ^ v24) + 2073092460;
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1440);
                goto LABEL_1036;
            case 0x38C:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 168i64);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 448);
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 1808) | 0x18;
                goto LABEL_1036;
            case 0x38D:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 960i64) + 4i64 * (v5 & 0xF)) ^ v11;
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 1104);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 80) ^ 0x1695EFAE;
                goto LABEL_1036;
            case 0x38E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 944);
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 304) + 4i64 * ((unsigned __int8)v5 ^ 0x20u));
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 880) + 1128i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 3)) + 56i64);
                goto LABEL_1036;
            case 0x38F:
                v24 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1112));
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1152);
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_DWORD>(v4 + 1440));
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 256) + 1112i64);
                goto LABEL_1036;
            case 0x390:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 168) - v5;
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 736);
                v24 = __ROR4__(v24, -110 - 10 * FuckEnc::CacheRead<_BYTE>(v4 + 1808));
                goto LABEL_1036;
            case 0x391:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1568) + 1240i64) + 1544i64) + 360i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 11), &v24, v5, v4);
                goto LABEL_1036;
            case 0x392:
                v24 = v5 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 792) + 272i64) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 1064i64) & 7)) + 464i64) + 1112i64) ^ v11);
                goto LABEL_1036;
            case 0x393:
                Calls::FastCall(v4 + 184, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1528) + 8i64 * (unsigned __int8)(-63 * FuckEnc::CacheRead<_BYTE>(v4 + 1432))));
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1720);
                goto LABEL_1036;
            case 0x394:
                v11 ^= 0xBAF96826;
                v24 = v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1776);
                v19 = FuckEnc::CacheRead<_DWORD>(v10 + 1768) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 1568i64) + 1064i64);
                goto LABEL_1034;
            case 0x395:
                Calls::FastCall(v4 + 1632, &v24, v5, FuckEnc::CacheRead<_QWORD>(v4 + 464));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 624);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v10 + 456) ^ 0x1BFC3E28;
                goto LABEL_1036;
            case 0x396:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1416) + 776i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 560) + 1176i64, &v24, v5, v4);
                goto LABEL_1036;
            case 0x397:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 632) + 4i64 * ((unsigned __int8)~(v5 * (FuckEnc::CacheRead<_BYTE>(v4 + 936) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 1480i64))) & 0xBA));
                goto LABEL_1036;
            case 0x398:
                v24 = v11 ^ 0x17CD8059;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 8i64 * (unsigned __int8)(-22 * v5)) + 1600i64);
                v24 = (v11 ^ 0x17CD8059) + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 632) + 4i64 * (unsigned __int8)(-106 * FuckEnc::CacheRead<_BYTE>(v10 + 448))) << 7);
                goto LABEL_1036;
            case 0x399:
                v24 = v11 + v5;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 8i64 * (((unsigned __int8)v5 ^ 0xFB) & 0x25)) + 1424i64);
                Calls::FastCall(v4 + 1232, &v24, v5, v10);
                goto LABEL_1036;
            case 0x39A:
                v24 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 712) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1584) + 8i64 * (unsigned __int8)__ROR4__(v5, 26)) + 1432i64));
                v12 = v24 + FuckEnc::CacheRead<_DWORD>(v4 + 1480);
                goto LABEL_1035;
            case 0x39B:
                v24 = v11 + 1023309500;
                v24 = v11 + 1023309500 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 1296i64) + 4i64 * ((-3 * (_BYTE)v5) & 0x66)) - (FuckEnc::CacheRead<_DWORD>(v4 + 128) << 9);
                goto LABEL_1036;
            case 0x39C:
                v24 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 432) + 608i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 1104) - 1023309500 * FuckEnc::CacheRead<_DWORD>(v4 + 1040)));
                goto LABEL_1036;
            case 0x39D:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1544);
                v24 = __ROL4__(v11 - FuckEnc::CacheRead<_DWORD>(v10 + 712), 255);
                v24 = __ROR4__(v24, -84 * ((unsigned int)0x5C30131 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1872) + 120i64)));
                goto LABEL_1036;
            case 0x39E:
                v24 = v11 ^ 0x34870113;
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 1104i64) ^ v11 ^ 0x34870113;
                v24 = v5 ^ (v24 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 256) + 1696i64));
                goto LABEL_1036;
            case 0x39F:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 600i64) + 8i64 * ((unsigned __int8)v5 & 0xC7)) + 1568i64) + 880i64);
                v24 = (FuckEnc::CacheRead<_DWORD>(v10 + 776) ^ v11) - 932003251;
                goto LABEL_1036;
            case 0x3A0:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1696);
                Calls::FastCall(v4 + 1520, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 928) + 8i64 * ((unsigned __int8)v5 & 0xBB)));
                goto LABEL_1036;
            case 0x3A1:
                v24 = ~(v11 + v5);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 232) + 952i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1768);
                v12 = FuckEnc::CacheRead<_DWORD>(v4 + 824) ^ v24;
                goto LABEL_1035;
            case 0x3A2:
                Calls::FastCall(v4 + 184, &v24, v5, v4);
                v24 = __ROL4__(v24, 80);
                v12 = FuckEnc::CacheRead<_DWORD>(v4 + 1368) + v24 + 1;
                goto LABEL_1035;
            case 0x3A3:
                v24 = v11 ^ (840381205 * FuckEnc::CacheRead<_DWORD>(v4 + 384));
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_DWORD>(v4 + 1368));
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_BYTE>(v4 + 936) + 125);
                goto LABEL_1036;
            case 0x3A4:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1240);
                v24 = FuckEnc::CacheRead<_DWORD>(v10 + 936) ^ v11;
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 600) + 8i64 * (v5 & 0x2B)) + 784i64);
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_DWORD>(v4 + 784));
                goto LABEL_1036;
            case 0x3A5:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 544) + 8i64 * (unsigned __int8)__ROL4__(v5, 22)) + 592i64, &v24, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1600));
                goto LABEL_1036;
            case 0x3A6:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1776);
                Calls::FastCall(v4 + 1304, &v24, v5, v10);
                v24 = __ROL4__(v24, 104 * FuckEnc::CacheRead<_BYTE>(v4 + 1480) + 99);
                goto LABEL_1036;
            case 0x3A7:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 552i64) + 1584i64) + 8i64 * ((unsigned __int8)v5 & 0xA6)) + 624i64) + 1240i64);
                v24 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1288) + 4i64 * (unsigned __int8)(-10 * v5)));
                goto LABEL_1036;
            case 0x3A8:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1216) + 584i64) + 1536i64);
                Calls::FastCall(v4 + 1632, &v24, v5, v10);
                goto LABEL_1036;
            case 0x3A9:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 896i64, &v24, v5, FuckEnc::CacheRead<_QWORD>(v4 + 288));
                v24 ^= 0x48847110u;
                goto LABEL_1036;
            case 0x3AA:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 880) + 736i64);
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 1368);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 584) + 1272i64) + 1480i64);
                goto LABEL_1036;
            case 0x3AB:
                Calls::FastCall(v4 + 520, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 560) + 112i64) + 216i64) + 8i64 * ((unsigned __int8)(-104 * v5) & 0xB2)));
                goto LABEL_1036;
            case 0x3AC:
                v24 = v11 - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1536) + 1912i64) + 8i64 * (unsigned __int8)(-13 * v5)) + 1088i64);
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 312) + 4i64 * (__ROL4__(v5, 2) & 0x1A)) ^ (v11 - v5);
                goto LABEL_1036;
            case 0x3AD:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 384);
                v13 = (unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 712) ^ 8u;
                v14 = FuckEnc::CacheRead<_QWORD>(v4 + 1384);
                goto LABEL_13;
            case 0x3AE:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 872) + 8i64 * ((41 * FuckEnc::CacheRead<_BYTE>(v4 + 384)) & 0x4C)) + 496i64) ^ v11;
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 8i64 * ((unsigned __int8)(66 * FuckEnc::CacheRead<_BYTE>(v4 + 1808)) & 0xAD)) + 384i64);
                goto LABEL_1036;
            case 0x3AF:
                v24 = v5 + FuckEnc::CacheRead<_DWORD>(v4 + 1592) + v11 - 247252503;
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 408);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1536);
                v24 -= FuckEnc::CacheRead<_DWORD>(v10 + 1064);
                goto LABEL_1036;
            case 0x3B0:
                v18 = (FuckEnc::CacheRead<_DWORD>(v4 + 1440) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1864) + 312i64) + 4i64 * ((unsigned __int8)__ROR4__(v5, 2) & 0xC0))) | 0x19;
                goto LABEL_1033;
            case 0x3B1:
                Calls::FastCall(v4 + 1496, &v24, v5, v4);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1744) + 1440i64) ^ v24 ^ 0xEA8FA68C;
                goto LABEL_1035;
            case 0x3B2:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 320i64, &v24, v5, v4);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 280);
                goto LABEL_1036;
            case 0x3B3:
                v24 = v11 + v5;
                v12 = (v11 + v5) ^ FuckEnc::CacheRead<_DWORD>(v4 + 1064) ^ FuckEnc::CacheRead<_DWORD>(v4 + 776) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1064) - 1278148803);
                goto LABEL_1035;
            case 0x3B4:
                v13 = (unsigned __int8)v5 & 0xB7;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 1600i64);
                v14 = FuckEnc::CacheRead<_QWORD>(v10 + 1312);
                goto LABEL_13;
            case 0x3B5:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 712) - 1563361472;
                v24 = __ROL4__(v24, FuckEnc::CacheRead<_DWORD>(v4 + 1920));
                v24 ^= ~(-121433807 * FuckEnc::CacheRead<_DWORD>(v4 + 280));
                goto LABEL_1036;
            case 0x3B6:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 880);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 8i64 * (__ROR4__(v5, 5) & 0x1F)) + 1232i64, &v24, v5, v10);
                goto LABEL_1036;
            case 0x3B7:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1608);
                v24 = v5 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 312) + 4i64 * (unsigned __int8)(-64 * v5)) ^ v11;
                v12 = ~(v24 ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 1112)));
                goto LABEL_1035;
            case 0x3B8:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 216i64) + 8i64 * (unsigned __int8)(109 * v5)) + 1184i64, &v24, v5, v4);
                goto LABEL_1036;
            case 0x3B9:
                v24 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 280) + 718405441);
                Calls::FastCall(v4 + 1304, &v24, v5, v4);
                goto LABEL_1036;
            case 0x3BA:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 552);
                Calls::FastCall(v4 + 1192, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1128) + 8i64 * ((unsigned __int8)~(_BYTE)v5 & 0xA4)));
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 1808);
                goto LABEL_1036;
            case 0x3BB:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1264);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 1216i64) + 1872i64) + 1216i64);
                v24 = __ROL4__(v24, FuckEnc::CacheRead<_DWORD>(v10 + 128));
                goto LABEL_1036;
            case 0x3BC:
                v24 = (FuckEnc::CacheRead<_DWORD>(v4 + 1696) ^ v11) - 788656758;
                v24 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 552) + 1296i64) + 4i64 * (v5 & 0x5E));
                goto LABEL_1036;
            case 0x3BD:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1608);
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 1920);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1040) + (FuckEnc::CacheRead<_DWORD>(v4 + 120) << 10);
                goto LABEL_1036;
            case 0x3BE:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 384);
                Calls::FastCall(v4 + 904, &v24, v5, v4);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1568) + 80i64);
                goto LABEL_1036;
            case 0x3BF:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1208) + 1208i64);
                Calls::FastCall(v4 + 1904, &v24, v5, v10);
                v24 ^= ~FuckEnc::CacheRead<_DWORD>(v4 + 736);
                goto LABEL_1036;
            case 0x3C0:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 928) + 8i64 * (v5 & 0x25)) + 120i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 712);
                goto LABEL_1036;
            case 0x3C1:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 952i64);
                v13 = (unsigned __int8)v5 ^ 0xBFu;
                v14 = FuckEnc::CacheRead<_QWORD>(v10 + 688);
                goto LABEL_13;
            case 0x3C2:
                v24 = (v11 + 368431903) ^ 0x3AEF26A1;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 256);
                v12 = v24 - (FuckEnc::CacheRead<_DWORD>(v4 + 712) ^ FuckEnc::CacheRead<_DWORD>(v10 + 1368)) - 2024253141;
                goto LABEL_1035;
            case 0x3C3:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 1392) ^ v11 ^ 0xBB442A05;
                Calls::FastCall(v4 + 1192, &v24, v5, FuckEnc::CacheRead<_QWORD>(v4 + 616));
                goto LABEL_1036;
            case 0x3C4:
                v24 = v11 + 2116944063;
                v24 = v11 + 2116944063 + FuckEnc::CacheRead<_DWORD>(v4 + 1808);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1216) + 136i64);
                v24 += 208815685 * FuckEnc::CacheRead<_DWORD>(v10 + 1040);
                goto LABEL_1036;
            case 0x3C5:
                v24 = v11 + ~FuckEnc::CacheRead<_DWORD>(v4 + 736);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 128) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1920) * v5) | 0x1F;
                goto LABEL_1036;
            case 0x3C6:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1040);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1568) + 472i64) + 8i64 * (unsigned __int8)(-58 * v5)) + 1912i64) + 8i64 * (unsigned __int8)(-20 * v5)) + 1480i64);
                goto LABEL_1036;
            case 0x3C7:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 104);
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 544) + 8i64 * (((unsigned __int8)v5 ^ 0x78) & 0xFC)) + 960i64) + 4i64 * (v5 & 0x24));
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_BYTE>(v4 + 448) ^ 0xBB);
                goto LABEL_1036;
            case 0x3C8:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 792) + 928i64) + 8i64 * ((unsigned __int8)__ROL4__(v5, 1) & 0xBF)) + 112i64) + 912i64);
                v12 = v11 + (FuckEnc::CacheRead<_DWORD>(v10 + 1768) ^ v5);
                goto LABEL_1035;
            case 0x3C9:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 768);
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 1768);
                v12 = v24 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1240) + 1784i64) + 8i64 * ((unsigned __int8)v5 & 0x91)) + 448i64);
                goto LABEL_1035;
            case 0x3CA:
                v24 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 408) - 1613834848);
                v12 = v24 - (FuckEnc::CacheRead<_DWORD>(v4 + 1264) & 0xFFFFFFFD) - (FuckEnc::CacheRead<_DWORD>(v4 + 408) & 0xFFFFFFF8);
                goto LABEL_1035;
            case 0x3CB:
                Calls::FastCall(v4 + 248, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 1424i64));
                v12 = v24 + 1927937726 + FuckEnc::CacheRead<_DWORD>(v4 + 1432);
                goto LABEL_1035;
            case 0x3CC:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1088);
                Calls::FastCall(v10 + 208, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 224) + 616i64));
                goto LABEL_1036;
            case 0x3CD:
                v24 = (v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 1592) ^ v11) + 362366259;
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 1112);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 256);
                v24 -= FuckEnc::CacheRead<_DWORD>(v10 + 280);
                goto LABEL_1036;
            case 0x3CE:
                v24 = v11 - v5 - 1566026661;
                Calls::FastCall(v4 + 200, &v24, v5, FuckEnc::CacheRead<_QWORD>(v4 + 792));
                goto LABEL_1036;
            case 0x3CF:
                v19 = FuckEnc::CacheRead<_DWORD>(v4 + 408) + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 272) + 8i64 * (unsigned __int8)(87 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1568) + 1864i64) + 1760i64))) + 1152i64);
                goto LABEL_1034;
            case 0x3D0:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 944);
                Calls::FastCall(v10 + 568, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 464) + 1240i64));
                goto LABEL_1036;
            case 0x3D1:
                v24 = v5 ^ v11 ^ (1194992840 * FuckEnc::CacheRead<_DWORD>(v4 + 280));
                v12 = v24 - (FuckEnc::CacheRead<_DWORD>(v4 + 1432) ^ v5);
                goto LABEL_1035;
            case 0x3D2:
                v24 = v11 ^ ~(FuckEnc::CacheRead<_DWORD>(v4 + 1112) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1872) + 168i64));
                v24 = ~(v24 - FuckEnc::CacheRead<_DWORD>(v4 + 1432));
                goto LABEL_1036;
            case 0x3D3:
                v24 = v11 + 1667592468 * FuckEnc::CacheRead<_DWORD>(v4 + 784);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 80) ^ (-1023309500 * FuckEnc::CacheRead<_DWORD>(v4 + 56));
                goto LABEL_1036;
            case 0x3D4:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 584) + 296i64);
                Calls::FastCall(v4 + 840, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 472) + 8i64 * ((-21 * FuckEnc::CacheRead<_BYTE>(v4 + 1768)) & 0x3A)));
                goto LABEL_1036;
            case 0x3D5:
                v24 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 1696) | 7);
                v24 = ~(v24 + FuckEnc::CacheRead<_DWORD>(v4 + 1112) * (FuckEnc::CacheRead<_DWORD>(v4 + 1264) << 12));
                goto LABEL_1036;
            case 0x3D6:
                v24 = ~__ROL4__((unsigned int)0x12496695 ^ v5 ^ v11, 47);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1424);
                v12 = v24 + ~FuckEnc::CacheRead<_DWORD>(v10 + 1760);
                goto LABEL_1035;
            case 0x3D7:
                v24 = ~(v11 ^ (v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 600) + 8i64 * ((unsigned __int8)v5 & 0xBD)) + 312i64) + 4i64 * ((unsigned __int8)v5 & 0xC2))));
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 1104);
                goto LABEL_1036;
            case 0x3D8:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1936);
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 384);
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 1592);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1744) + 1696i64);
                goto LABEL_1036;
            case 0x3D9:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1256) + 8i64 * (v5 & 0xB)) + 1720i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 136);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v10 + 776);
                goto LABEL_1036;
            case 0x3DA:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1896) + 216i64) + 8i64 * (__ROR4__(v5, 15) & 0xBC)) + 1896i64) + 1224i64, &v24, v5, v4);
                goto LABEL_1036;
            case 0x3DB:
                v24 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1808) & 0xE7 ^ 0xAD);
                v12 = ~(v24 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 120) - 1338132148));
                goto LABEL_1035;
            case 0x3DC:
                v24 = __ROR4__(v11, 76 * FuckEnc::CacheRead<_BYTE>(v4 + 384));
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 848i64, &v24, v5, v4);
                goto LABEL_1036;
            case 0x3DD:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 1600i64);
                v12 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 496) * FuckEnc::CacheRead<_DWORD>(v10 + 1592) * ~FuckEnc::CacheRead<_DWORD>(v4 + 608);
                goto LABEL_1035;
            case 0x3DE:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 456);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 232) + 256i64) + 1128i64) + 8i64 * (unsigned __int8)(-17 * v5)) + 1568i64) + 712i64);
                goto LABEL_1036;
            case 0x3DF:
                v11 ^= FuckEnc::CacheRead<_DWORD>(v4 + 824);
                v24 = v11;
                v19 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1896) + 584i64) + 472i64) + 8i64 * ((unsigned __int8)v5 & 0xDD)) + 408i64) - 1401234424;
                goto LABEL_1034;
            case 0x3E0:
                v24 = (FuckEnc::CacheRead<_DWORD>(v4 + 120) ^ v11) + 1023309500;
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1744) + 1528i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 26)) + 1368i64));
                goto LABEL_1036;
            case 0x3E1:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 1200i64) + 8i64 * (unsigned __int8)(-97 * v5)) + 112i64) + 464i64) + 168i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1720);
                goto LABEL_1036;
            case 0x3E2:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 136) + 1808i64);
                Calls::FastCall(v4 + 1192, &v24, v5, FuckEnc::CacheRead<_QWORD>(v4 + 792));
                goto LABEL_1036;
            case 0x3E3:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 784i64);
                v24 = v24 - (FuckEnc::CacheRead<_DWORD>(v4 + 1064) & 0xFFFFFFE9) - v5;
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 280);
                goto LABEL_1036;
            case 0x3E4:
                v13 = (unsigned __int8)(-38 * v5);
                v14 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1528) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1416) + 456i64), 3)) + 328i64);
            LABEL_13:
                v15 = v4;
            LABEL_14:
                Calls::FastCall(v14 + 8 * v13, &v24, v5, v15);
                goto LABEL_1036;
            case 0x3E5:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1568) + 1208i64) + 112i64);
                Calls::FastCall(v10 + 920, &v24, v5, v4);
                goto LABEL_1036;
            case 0x3E6:
                v24 = v11 ^ 0x76C812EA;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 432);
                v24 = (v11 ^ 0x76C812EA) + (FuckEnc::CacheRead<_DWORD>(v10 + 1368) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1216) + 1064i64) ^ 0xC3013172);
                goto LABEL_1036;
            case 0x3E7:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1928);
                Calls::FastCall(v10 + 576, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 8i64 * ((unsigned __int8)v5 ^ 0xAFu)));
                goto LABEL_1036;
            case 0x3E8:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 1064i64);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 736);
                v24 += (FuckEnc::CacheRead<_DWORD>(v4 + 408) * v5) & 0xFFFFFFE4;
                goto LABEL_1036;
            case 0x3E9:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 120);
                v24 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 56i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 224i64) + 1696i64);
                goto LABEL_1036;
            case 0x3EA:
                v24 = v11 + v5;
                v24 = __ROL4__(__ROR4__(v11 + v5, FuckEnc::CacheRead<_DWORD>(v4 + 1392)), 183);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 136);
                v24 ^= ~FuckEnc::CacheRead<_DWORD>(v10 + 1440);
                goto LABEL_1036;
            case 0x3EB:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 792i64);
                v24 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 1768) ^ 0x9B1069CA) + ~FuckEnc::CacheRead<_DWORD>(v10 + 1432);
                goto LABEL_1036;
            case 0x3EC:
                v24 = __ROR4__(v11 - FuckEnc::CacheRead<_DWORD>(v4 + 608), 142);
                v12 = v24 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1584) + 8i64 * ((unsigned __int8)__ROL4__(v5, 7) & 0xF2)) + 1288i64) + 4i64 * ((unsigned __int8)(97 * FuckEnc::CacheRead<_BYTE>(v4 + 1720)) & 0xBE));
                goto LABEL_1035;
            case 0x3ED:
                v24 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 448);
                v24 += FuckEnc::CacheRead<_DWORD>(v4 + 56) ^ 0xB320083D;
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 1440);
                goto LABEL_1036;
            case 0x3EE:
                v19 = v5 * FuckEnc::CacheRead<_DWORD>(v4 + 384) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 8i64 * (unsigned __int8)(-16 * FuckEnc::CacheRead<_BYTE>(v4 + 120))) + 1544i64) + 880i64) + 448i64);
                goto LABEL_1034;
            case 0x3EF:
                v24 = v11 - ((FuckEnc::CacheRead<_DWORD>(v4 + 712) - 920163791) ^ 0x38F4CB32);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 544) + 8i64 * (unsigned __int8)(-68 * v5)) + 1600i64);
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_DWORD>(v10 + 824));
                goto LABEL_1036;
            case 0x3F0:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 1368) ^ v11;
                v24 = v24 - 1714891622 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 560) + 1424i64) + 1624i64) + 4i64 * ((unsigned __int8)(-96 * v5) & 0xDA)) - 1652727526;
                goto LABEL_1036;
            case 0x3F1:
                v24 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 776);
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 80) ^ ~(FuckEnc::CacheRead<_DWORD>(v4 + 1152) * v5);
                goto LABEL_1036;
            case 0x3F2:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 8i64 * (unsigned __int8)__ROR4__(v5, 20)) + 1280i64);
                v24 = FuckEnc::CacheRead<_DWORD>(v10 + 784) ^ v11;
                v24 -= FuckEnc::CacheRead<_DWORD>(v4 + 1480) ^ 0x433F7CFA;
                goto LABEL_1036;
            case 0x3F3:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 296);
                v24 = FuckEnc::CacheRead<_DWORD>(v10 + 712) ^ v11;
                v24 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 8i64 * (unsigned __int8)(-28 * v5)) + 216i64) + 8i64 * (v5 & 0x43)) + 80i64);
                goto LABEL_1036;
            case 0x3F4:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 872) + 8i64 * (__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 824), 2) & 0x2C)) + 800i64) + 8i64 * ((unsigned __int8)v5 & 0x9F)) + 560i64);
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 472) + 8i64 * (-v5 & 7)) + 784i64);
                goto LABEL_1036;
            case 0x3F5:
                v24 = (v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 792) + 1040i64)) ^ 0xA61255CA;
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 8i64 * (((unsigned __int8)v5 ^ 0xB3) & 0xDD)) + 1616i64) + 4i64 * (unsigned __int8)(-95 * v5));
                goto LABEL_1036;
            case 0x3F6:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 1592) ^ v11;
                v24 ^= FuckEnc::CacheRead<_DWORD>(v4 + 776);
                v24 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1256) + 8i64 * ((unsigned __int8)(-125 * v5) & 0xA1)) + 1608i64) + 824i64);
                goto LABEL_1036;
            case 0x3F7:
                v24 = ~(v5 + v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1392));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1240);
                v24 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 968) + 4i64 * ((unsigned __int8)v5 & 0x99));
                goto LABEL_1036;
            case 0x3F8:
                v24 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1584) + 8i64 * (unsigned __int8)__ROL4__(v5, 31)) + 1368i64) ^ v11;
                v24 = __ROR4__(v24, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 1944i64) + 4i64 * ((unsigned __int8)__ROL4__(v5, 30) & 0xEE)) & 0xE7);
                goto LABEL_1036;
            case 0x3F9:
                v24 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 8i64 * ((unsigned __int8)v5 & 0x95)) + 304i64) + 4i64 * ((unsigned __int8)__ROL4__(v5, 20) & 0xD5)) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 128) + 1103302961);
                goto LABEL_1036;
            case 0x3FA:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1536);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 224i64) + 1512i64, &v24, v5, v10);
                goto LABEL_1036;
            case 0x3FB:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 936);
                v24 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1528) + 8i64 * (v5 & 0x25)) + 584i64) + 1600i64) + 304i64) + 4i64 * ((unsigned __int8)v5 & 0xFC));
                goto LABEL_1036;
            case 0x3FC:
                v11 ^= FuckEnc::CacheRead<_DWORD>(v4 + 496);
                v24 = v11;
                v19 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1856) + 8i64 * ((unsigned __int8)v5 & 0xF0)) + 1584i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 9)) + 824i64) * v5;
                goto LABEL_1034;
            case 0x3FD:
                v24 = FuckEnc::CacheRead<_DWORD>(v4 + 496) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 224);
                v24 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 600) + 8i64 * (v5 & 0x7A)) + 640i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 6));
                goto LABEL_1036;
            case 0x3FE:
                v24 = v11 + 771800818;
                Calls::FastCall(v4 + 1248, &v24, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1856) + 8i64 * ((unsigned __int8)v5 ^ 0x13u)));
                goto LABEL_1036;
            case 0x3FF:
                v24 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 712);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1776);
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 136) + 712i64) ^ v24;
                v24 = v11;
                v18 = FuckEnc::CacheRead<_DWORD>(v4 + 80);
            LABEL_1033:
                v19 = ~v18;
            LABEL_1034:
                v12 = v11 ^ v19;
            LABEL_1035:
                v24 = v12;
            LABEL_1036:
                v6 += 4;
                *a2 = v24;
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
