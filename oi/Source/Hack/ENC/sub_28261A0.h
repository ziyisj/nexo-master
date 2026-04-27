#pragma once

#include <Hack/FuckEnc.h>
#include <Hack/ENC/Calls.h>
#include <IDA/ida_defs.h>

void __fastcall sub_28261A0(_QWORD a1, unsigned int* a2, unsigned int a3, int a4)
{
    __int64 v4;      // rbx
    unsigned int v5; // edi
    int v6;          // r13d
    __int64 v10;     // rsi
    int v11;         // eax
    int v12;         // eax
    __int64 v13;     // r10
    __int64 v14;     // rax
    __int64 v15;     // r9
    __int64 v16;     // r8
    __int64 v17;     // r8
    __int64 v18;     // r8
    __int64 v19;     // rax
    __int64 v20;     // r9
    __int64 v21;     // r8
    __int64 v22;     // r8
    int v23;         // eax
    __int64 v24;     // r8
    __int64 v25;     // rcx
    __int64 v26;     // r8
    int v27;         // eax
    __int64 v28;     // rdx
    __int64 v29;     // r8
    __int64 v30;     // rdx
    __int64 v31;     // rax
    int v32;         // [rsp+60h] [rbp+40h] BYREF

    v4 = a1;
    v5 = a4 ^ 0x48B6DB08;
    v6 = 0;
    v10 = a1;
    if (a3 > 3)
    {
        while (2)
        {
            v11 = *a2;
            v32 = *a2;
            switch (((unsigned __int16)(a4 + v6) ^ 0xFFBF) & 0x3FF)
            {
            case 0:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1832);
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 712);
                v32 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 328) + 1456i64) + 1416i64) + 1320i64);
                goto LABEL_1039;
            case 1:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 248);
                Calls::FastCall(v10 + 360, &v32, v5, v4);
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 1912);
                goto LABEL_1039;
            case 2:
                v32 = v11 + 975258955 * v5 * FuckEnc::CacheRead<_DWORD>(v4 + 600) * FuckEnc::CacheRead<_DWORD>(v4 + 1696) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 320i64);
                goto LABEL_1039;
            case 3:
                Calls::FastCall(v4 + 1184, &v32, v5, v4);
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 576i64) + 664i64);
                goto LABEL_1039;
            case 4:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 928) - 424213101;
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(v4 + 904) + 800i64) + 1320i64);
                goto LABEL_1039;
            case 5:
                v32 = v11 ^ 0x973DAA7F;
                v32 = (v11 ^ 0x973DAA7F) + FuckEnc::CacheRead<_DWORD>(v4 + 1248);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1560);
                v32 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 896) + 4i64 * (unsigned __int8)(42 * v5));
                goto LABEL_1039;
            case 6:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 8i64 * ((unsigned __int8)v5 & 0x95)) + 1544i64) + 1600i64) + 1216i64) + 992i64);
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 1576);
                goto LABEL_1039;
            case 7:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 320) ^ v11;
                v12 = __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 520) + 1224i64) + 4i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 520) + 928i64), 24) & 0x3E)));
                goto LABEL_1038;
            case 8:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1832) + 1560i64) + 432i64);
                v12 = __ROL4__(v11, -31 * FuckEnc::CacheRead<_BYTE>(v10 + 712) * FuckEnc::CacheRead<_BYTE>(v4 + 928));
                goto LABEL_1038;
            case 9:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1320) ^ v11;
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 976);
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 1368);
                v12 = v32 + (FuckEnc::CacheRead<_DWORD>(v4 + 1584) | 0x14);
                goto LABEL_1038;
            case 0xA:
                v32 = v11 + 1930226953 * ~(FuckEnc::CacheRead<_DWORD>(v4 + 1912) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1832) + 656i64) + 648i64));
                goto LABEL_1039;
            case 0xB:
                v12 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 656) + 392i64) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1040) - 2100580026)) - FuckEnc::CacheRead<_DWORD>(v4 + 920);
                goto LABEL_1038;
            case 0xC:
                v32 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 1584) ^ 0x49A8B20B);
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 712);
                v12 = v32 ^ (1604041868 * FuckEnc::CacheRead<_DWORD>(v4 + 592));
                goto LABEL_1038;
            case 0xD:
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1560) + 1912i64) ^ v11;
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 8i64 * (v5 & 0x73)) + 1368i64) & 0xFE)) + 1696i64);
                goto LABEL_1038;
            case 0xE:
                v32 = __ROL4__(v11, v5);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 848);
                v12 = v32 - (FuckEnc::CacheRead<_DWORD>(v4 + 600) ^ FuckEnc::CacheRead<_DWORD>(v10 + 1912) ^ 0x1CCEF491);
                goto LABEL_1038;
            case 0xF:
                Calls::FastCall(v4 + 1184, &v32, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1456);
                v12 = ~(FuckEnc::CacheRead<_DWORD>(v10 + 992) ^ v32);
                goto LABEL_1038;
            case 0x10:
                v32 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 736) + 1176i64) + 1048i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1640);
                v32 -= FuckEnc::CacheRead<_DWORD>(v10 + 264) ^ 0xC30131CE;
                goto LABEL_1039;
            case 0x11:
                v12 = v11 - 1577058304 * (v5 + (FuckEnc::CacheRead<_DWORD>(v4 + 1048) >> 9) + (FuckEnc::CacheRead<_DWORD>(v4 + 920) | 0x11));
                goto LABEL_1038;
            case 0x12:
                v32 = v11 + 1773583207;
                v13 = v5 & 0x32;
                v14 = FuckEnc::CacheRead<_QWORD>(v4 + 736);
                goto LABEL_22;
            case 0x13:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 576);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 472) + 368i64, &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 848));
                goto LABEL_1039;
            case 0x14:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1704);
                Calls::FastCall(v4 + 480, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 8i64 * (unsigned __int8)__ROR4__(v5, 14)));
                goto LABEL_1039;
            case 0x15:
                v32 = v11 ^ (-1101970642 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 64i64) * ~(FuckEnc::CacheRead<_DWORD>(v4 + 992) + 1757614385));
                goto LABEL_1039;
            case 0x16:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 560) + 1760i64) + 8i64 * (v5 & 0x30)) + 1128i64);
                v32 = v11 ^ (-1310512687 * ~FuckEnc::CacheRead<_DWORD>(v10 + 712)) ^ 0xEC0B34D3;
                goto LABEL_1039;
            case 0x17:
                v32 = v11 + 78919811 * ~(v5 * FuckEnc::CacheRead<_DWORD>(v4 + 320) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 984) + 1632i64));
                goto LABEL_1039;
            case 0x18:
                v32 = v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 928) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 288);
                v32 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 240) + 4i64 * ((unsigned __int8)(-84 * FuckEnc::CacheRead<_BYTE>(v10 + 1320)) & 0x88));
                goto LABEL_1039;
            case 0x19:
                v17 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * ((-50 * FuckEnc::CacheRead<_BYTE>(v4 + 1632)) & 0x78));
                goto LABEL_32;
            case 0x1A:
                v32 = v11 + ((FuckEnc::CacheRead<_DWORD>(v4 + 1256) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 232i64) + 1856i64) + 4i64 * ((unsigned __int8)v5 & 0xBF))) << 31) - 2100481509;
                goto LABEL_1039;
            case 0x1B:
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1064) + 720i64), 12)) + 392i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1216);
                v32 += FuckEnc::CacheRead<_DWORD>(v10 + 1704);
                goto LABEL_1039;
            case 0x1C:
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * (v5 & 0x5E)) + 288i64) + 112i64) + 8i64 * ((unsigned __int8)__ROL4__(v5, 16) & 0xB9)) + 1576i64) + 1055239448;
                goto LABEL_1038;
            case 0x1D:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 272) ^ v11;
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 1904);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 984);
                v12 = __ROL4__(v32, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1928) + 1552i64) + 4i64 * (unsigned __int8)v5));
                goto LABEL_1038;
            case 0x1E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 888);
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 896) + 4i64 * (unsigned __int8)(-14 * v5));
                v32 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 560) + 1312i64) + 592i64);
                goto LABEL_1039;
            case 0x1F:
                v32 = ~v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 616);
                v32 = ~v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1320);
                v12 = v32 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1744) + 712i64) | 6);
                goto LABEL_1038;
            case 0x20:
                v32 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 736) + 1904i64) + ((FuckEnc::CacheRead<_DWORD>(v4 + 928) + ~FuckEnc::CacheRead<_DWORD>(v4 + 336)) ^ 0xC3113163));
                goto LABEL_1039;
            case 0x21:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 8);
                v12 = v32 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1760) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1744) + 920i64), 20)) + 1888i64) + 592i64);
                goto LABEL_1038;
            case 0x22:
                v32 = v11 + 1548319403;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1176) + 1544i64) + 1416i64);
                v32 = __ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 568) + 4i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v10 + 928) ^ 0xF4) & 0xBB)) ^ (v11 + 1548319403), 112);
                goto LABEL_1039;
            case 0x23:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 320i64);
                v12 = v32 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 264) + ((FuckEnc::CacheRead<_DWORD>(v4 + 600) & 0xFFFFFFEE) << 11));
                goto LABEL_1038;
            case 0x24:
                v32 = v11 ^ 0x322AD687;
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1312) + 720i64) ^ v11 ^ 0x322AD687;
                v12 = v32 - (FuckEnc::CacheRead<_DWORD>(v4 + 920) & 0xFFFFFFE5) + 506331327;
                goto LABEL_1038;
            case 0x25:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1416) + 616i64) + 1368i64) - (FuckEnc::CacheRead<_DWORD>(v4 + 928) ^ 0xCA67EE91);
                v12 = FuckEnc::CacheRead<_DWORD>(v4 + 272) ^ v32;
                goto LABEL_1038;
            case 0x26:
                v32 = v11 ^ (-136076996 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 8i64 * ((FuckEnc::CacheRead<_DWORD>(v4 + 1696) >> 8) & 0x5B)) + 1608i64) + 8i64 * (((unsigned __int8)v5 ^ 0xEF) & 0xF3)) + 216i64) + 4i64 * (unsigned __int8)(8 * v5)));
                goto LABEL_1039;
            case 0x27:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 736) + 1128i64);
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1368) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1432) + 8i64 * (unsigned __int8)(65 * v5)) + 1272i64) + 1256i64);
                goto LABEL_1038;
            case 0x28:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 8i64 * ((unsigned __int8)(102 * v5) & 0xE1)) + 1760i64) + 8i64 * ((unsigned __int8)v5 & 0xEA)) + 1768i64, &v32, v5, v4);
                goto LABEL_1039;
            case 0x29:
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 8i64 * ((2 * (_BYTE)v5) & 0x33)) + 1216i64) + 1936i64) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 336) & 0xCB)) + 1376i64) ^ v11;
                goto LABEL_1038;
            case 0x2A:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 760);
                v32 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 384) ^ FuckEnc::CacheRead<_DWORD>(v10 + 1048));
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 8i64 * (v5 & 0x25)) + 600i64);
                goto LABEL_1039;
            case 0x2B:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1912) ^ v11 ^ 0xA9713333;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 1176i64) + 736i64);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 216) + 4i64 * (unsigned __int8)(-52 * v5)) ^ v32;
                goto LABEL_1038;
            case 0x2C:
                Calls::FastCall(v4 + 368, &v32, v5, v4);
                v32 += 1 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 656) + 976i64);
                goto LABEL_1039;
            case 0x2D:
                v32 = v11 - 1225058132;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 328) + 952i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 1)) + 1720i64);
                v32 = v11 - 1225058132 + FuckEnc::CacheRead<_DWORD>(v10 + 64);
                goto LABEL_1039;
            case 0x2E:
                v32 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 384) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 328i64) + 1584i64) * (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 1912)));
                goto LABEL_1039;
            case 0x2F:
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 328) + 440i64) + 8i64 * ((unsigned __int8)v5 & 0xA1)) + 104i64) + 520i64) + 1928i64) + 760i64) + 1632i64) ^ v11;
                goto LABEL_1038;
            case 0x30:
                v18 = v4;
                v32 = v5 ^ v11;
                v19 = FuckEnc::CacheRead<_QWORD>(v4 + 1448);
                v20 = (-16 * FuckEnc::CacheRead<_BYTE>(v4 + 976)) & 0x10;
                goto LABEL_56;
            case 0x31:
                v32 = v11 ^ (1146451119 * FuckEnc::CacheRead<_DWORD>(v4 + 712));
                v21 = FuckEnc::CacheRead<_QWORD>(v4 + 408);
                goto LABEL_58;
            case 0x32:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 248) + 1928i64) + 1904i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 904);
                v12 = (unsigned int)0x10B97D35 ^ (v32 - FuckEnc::CacheRead<_DWORD>(v10 + 976));
                goto LABEL_1038;
            case 0x33:
                v32 = v11 ^ (-1555328917 - 1132177128 * FuckEnc::CacheRead<_DWORD>(v4 + 720));
                v32 = (FuckEnc::CacheRead<_DWORD>(v4 + 1704) ^ v32 ^ 0x49D0FF7B) + 1023331998;
                goto LABEL_1039;
            case 0x34:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1432) + 8i64 * (v5 & 0x27)) + 232i64);
                Calls::FastCall(v10 + 1680, &v32, v5, v4);
                v32 -= 815542017;
                goto LABEL_1039;
            case 0x35:
                v32 = v11 ^ 0xF171CA9B;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 192) + 1712i64, &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1544));
                goto LABEL_1039;
            case 0x36:
                v32 = __ROR4__(v11, 255);
                v22 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 320) & 0x33));
                goto LABEL_64;
            case 0x37:
                v12 = (v5 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 768i64) + 8i64 * (v5 & 0x51)) + 1128i64) + 1312i64) + 56i64) ^ v11) - v5;
                goto LABEL_1038;
            case 0x38:
                v32 = -(FuckEnc::CacheRead<_DWORD>(v4 + 592) ^ v11) - 286521433;
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 8i64 * ((unsigned __int8)v5 & 0xC9)) + 976i64);
                goto LABEL_1039;
            case 0x39:
                v32 = __ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 1904i64) ^ v11, 49) ^ 0xC40F9C45;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 736i64);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v10 + 392);
                goto LABEL_1038;
            case 0x3A:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 56);
                v32 = __ROL4__(v32, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1640) + 1416i64) + 1704i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1088);
                v12 = FuckEnc::CacheRead<_DWORD>(v10 + 392) ^ v32;
                goto LABEL_1038;
            case 0x3B:
                v32 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 776) + 8i64 * (unsigned __int8)__ROL4__(v5, 23)) + 1880i64) + 4i64 * (unsigned __int8)(-94 * v5)) ^ ~(v5 + FuckEnc::CacheRead<_DWORD>(v4 + 648));
                goto LABEL_1039;
            case 0x3C:
                v32 = __ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 448) + 8i64 * (unsigned __int8)__ROL4__(v5, 11)) + 1584i64) ^ v11, 68);
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 336);
                goto LABEL_1039;
            case 0x3D:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 920);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1928);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1392) + 88i64, &v32, v5, v10);
                goto LABEL_1039;
            case 0x3E:
                v32 = v11 ^ 0x405A3B0D;
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 64) ^ v11 ^ 0x405A3B0D;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 560i64) + 408i64);
                v12 = __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(v10 + 320));
                goto LABEL_1038;
            case 0x3F:
                v32 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 8i64 * (unsigned __int8)(-93 * v5)) + 1248i64));
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 1224i64) + 4i64 * (v5 & 0x1C));
                goto LABEL_1038;
            case 0x40:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 8) ^ v11 ^ 0x888FB8F5;
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 776) + 8i64 * (unsigned __int8)__ROR4__(v5, 17)) + 192i64) + 944i64) + 712i64);
                goto LABEL_1039;
            case 0x41:
                v32 = v11 + 1113580456;
                v32 = v11 + 1113580456 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1504) + 1584i64);
                v32 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1176) + 1416i64) + 664i64);
                goto LABEL_1039;
            case 0x42:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1232) + 1184i64, &v32, v5, v4);
                v32 += 1782382287;
                v12 = FuckEnc::CacheRead<_DWORD>(v4 + 1696) ^ v32;
                goto LABEL_1038;
            case 0x43:
                v32 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 720) & 0xE1);
                v32 ^= ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 8i64 * (v5 & 0x7B)) + 1704i64) << 6);
                goto LABEL_1039;
            case 0x44:
                Calls::FastCall(v4 + 1184, &v32, v5, v4);
                v32 -= v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1640) + 264i64);
                goto LABEL_1039;
            case 0x45:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 8i64 * (v5 & 0x50)) + 992i64);
                v32 = __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 568) + 4i64 * (((unsigned __int8)(57 * FuckEnc::CacheRead<_BYTE>(v4 + 1696)) ^ 8) & 0x8C)));
                goto LABEL_1039;
            case 0x46:
                v32 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 992)) - 2146092848;
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 1576);
                v32 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1088) + 1224i64) + 4i64 * (unsigned __int8)(-103 * v5));
                goto LABEL_1039;
            case 0x47:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 520) + 1784i64) + 864i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 16), &v32, v5, v4);
                goto LABEL_1039;
            case 0x48:
                v32 = v11 - v5;
                Calls::FastCall(v4 + 32, &v32, v5, v4);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 64);
                goto LABEL_1039;
            case 0x49:
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 872i64) + 4i64 * ((unsigned __int8)v5 ^ 0x20u)) ^ v11;
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 232) + 736i64) + 1904i64);
                goto LABEL_1038;
            case 0x4A:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 8);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1600);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v10 + 56) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1832) + 664i64);
                goto LABEL_1039;
            case 0x4B:
                v32 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1632));
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1104) + 8i64 * ((61 * (_BYTE)v5) & 0x6C)) + 1552i64) + 4i64 * ((unsigned __int8)v5 ^ 0xFBu)) - FuckEnc::CacheRead<_DWORD>(v4 + 1248);
                goto LABEL_1038;
            case 0x4C:
                Calls::FastCall(v4 + 88, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1104) + 8i64 * (unsigned __int8)(16 * v5)) + 1928i64));
                goto LABEL_1039;
            case 0x4D:
                v32 = v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 984) + 560i64) + 1096i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 19)) + 1552i64) + 4i64 * (((unsigned __int8)v5 ^ 0x11) & 0x39));
                goto LABEL_1039;
            case 0x4E:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 192) + 624i64) + 8i64 * ((unsigned __int8)v5 ^ 0x63u)) + 1720i64);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1432) + 8i64 * (unsigned __int8)(-82 * v5)) + 1696i64) ^ v11;
                goto LABEL_1038;
            case 0x4F:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1304) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 888) + 848i64);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1424) + 8i64 * (unsigned __int8)(-124 * v5)) + 1544i64) + 1632i64);
                goto LABEL_1038;
            case 0x50:
                v32 = v11 - 1472305100;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1504);
                v32 = v11 - 1472305100 - (v5 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 664) << 26));
                goto LABEL_1039;
            case 0x51:
                v32 = v11 + (v5 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 648) | 0x16) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1040) * (FuckEnc::CacheRead<_DWORD>(v4 + 928) ^ v5)));
                goto LABEL_1039;
            case 0x52:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 392) ^ v11;
                v12 = __ROL4__(v32, FuckEnc::CacheRead<_BYTE>(v4 + 1912) + FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 888) + 112i64) + 8i64 * ((unsigned __int8)v5 & 0x8F)) + 272i64));
                goto LABEL_1038;
            case 0x53:
                v32 = __ROL4__(v11, ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 272));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 104i64) + 1216i64) + 1456i64);
                v12 = __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(v10 + 384));
                goto LABEL_1038;
            case 0x54:
                v32 = v11 + 998641225;
                v32 = v11 + 998641225 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 600i64);
                v32 = ~(v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 432) + 720i64));
                goto LABEL_1039;
            case 0x55:
                v32 = v5 ^ v11 ^ 0x2B5090CC;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 328);
                Calls::FastCall(v10 + 40, &v32, v5, v4);
                goto LABEL_1039;
            case 0x56:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 984i64) + 1312i64);
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1784) + 1368i64);
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 56) * v5;
                goto LABEL_1039;
            case 0x57:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 8i64 * (unsigned __int8)(69 * v5)) + 1088i64);
                v32 = (v11 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1216) + 392i64)) - (_DWORD)0x12340DB6;
                goto LABEL_1039;
            case 0x58:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1576);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 888);
                v32 += FuckEnc::CacheRead<_DWORD>(v10 + 592);
                v12 = v32 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 656) + 56i64);
                goto LABEL_1038;
            case 0x59:
                v32 = v5 + v11 + FuckEnc::CacheRead<_DWORD>(v4 + 592) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1888) + 384i64) - 846079849 * FuckEnc::CacheRead<_DWORD>(v4 + 1648);
                goto LABEL_1039;
            case 0x5A:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1632) ^ v11;
                v23 = FuckEnc::CacheRead<_DWORD>(v4 + 1040) ^ v32 ^ 0x2991E2A7;
                v24 = (unsigned __int8)__ROR4__(v5, 28);
                v32 = v23;
                v25 = FuckEnc::CacheRead<_QWORD>(v4 + 1176);
                goto LABEL_101;
            case 0x5B:
                v32 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 64) ^ 0xC21B9E40);
                v32 -= v5 * FuckEnc::CacheRead<_DWORD>(v4 + 664) * v5;
                v32 = __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(v4 + 1696));
                goto LABEL_1039;
            case 0x5C:
                v12 = v11 - ((-788550052 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1088) + 1928i64) + 1064i64) + 1832i64) + 1312i64) + 56i64)) ^ 0x62704585);
                goto LABEL_1038;
            case 0x5D:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 736);
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 1304);
                v32 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 8i64 * (unsigned __int8)(105 * v5)) + 1320i64);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 264);
                goto LABEL_1039;
            case 0x5E:
                v32 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 272));
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 448) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 928) & 0x70)) + 952i64) + 8i64 * ((unsigned __int8)(-99 * v5) & 0xA9)) + 1880i64) + 4i64 * (unsigned __int8)(-82 * v5));
                goto LABEL_1038;
            case 0x5F:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 888) + 1352i64, &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1232));
                v32 ^= 0xC301314C;
                goto LABEL_1039;
            case 0x60:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 656);
                v32 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 144) + 1704i64) ^ v5);
                v32 -= 1023309500 * (FuckEnc::CacheRead<_DWORD>(v4 + 1960) >> 23);
                goto LABEL_1039;
            case 0x61:
                v32 = v11 + 909962959 * FuckEnc::CacheRead<_DWORD>(v4 + 1248);
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 264);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1960);
                goto LABEL_1039;
            case 0x62:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 56);
                Calls::FastCall(v4 + 1016, &v32, v5, v4);
                v32 = ~v32;
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 992);
                goto LABEL_1039;
            case 0x63:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 1272i64) + 800i64);
                v26 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1936) + 8i64 * (unsigned __int8)__ROR4__(v5, 18));
                goto LABEL_111;
            case 0x64:
                v32 = v11 ^ (1036194097 * FuckEnc::CacheRead<_DWORD>(v4 + 720));
                v32 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1880) + 4i64 * (unsigned __int8)(-2 * FuckEnc::CacheRead<_BYTE>(v4 + 1304)));
                goto LABEL_1039;
            case 0x65:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 384) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1088);
                Calls::FastCall(v10 + 808, &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1416));
                goto LABEL_1039;
            case 0x66:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1048);
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 1376);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 888) + 288i64) + 1392i64);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v10 + 8);
                goto LABEL_1038;
            case 0x67:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 232);
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 408) + 384i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 656) + 568i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 23)) - 1785429597;
                goto LABEL_1038;
            case 0x68:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1640) + 1320i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 104i64);
                v32 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 768) + 8i64 * (unsigned __int8)(113 * v5)) + 1256i64);
                goto LABEL_1039;
            case 0x69:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 992) ^ v11;
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 888) + 120i64) + 8i64 * (((unsigned __int8)v5 ^ 0xF5) & 0x5B)) + 1432i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 16)) + 320i64);
                goto LABEL_1038;
            case 0x6A:
                v32 = v11 ^ ~(-1482369028 * FuckEnc::CacheRead<_DWORD>(v4 + 976) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 264) ^ 0xE4u)) + 1704i64));
                goto LABEL_1039;
            case 0x6B:
                v32 = v11 + 322760399 * FuckEnc::CacheRead<_DWORD>(v4 + 600);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1272);
                Calls::FastCall(v4 + 1816, &v32, v5, v10);
                goto LABEL_1039;
            case 0x6C:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 888);
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 448) + 8i64 * ((unsigned __int8)v5 & 0xE6)) + 1576i64);
                v12 = __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 656i64) + 1960i64));
                goto LABEL_1038;
            case 0x6D:
                Calls::FastCall(v4 + 1792, &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 432));
                v32 ^= 0x6A89AE54u;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1064);
                v32 += FuckEnc::CacheRead<_DWORD>(v10 + 648);
                goto LABEL_1039;
            case 0x6E:
                v32 = v11 + 1023309500 * FuckEnc::CacheRead<_DWORD>(v4 + 1696);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 144);
                v32 = __ROR4__(v32, FuckEnc::CacheRead<_BYTE>(v10 + 664) ^ (FuckEnc::CacheRead<_BYTE>(v4 + 928) * v5));
                goto LABEL_1039;
            case 0x6F:
                v32 = v5 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1760) + 8i64 * (unsigned __int8)(-79 * FuckEnc::CacheRead<_BYTE>(v4 + 320))) + 384i64) ^ v11;
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 600);
                goto LABEL_1039;
            case 0x70:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 544) + 4i64 * ((unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 1304) + ((FuckEnc::CacheRead<_DWORD>(v4 + 1256) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 192) + 920i64)) << 24), 23) & 0x97));
                goto LABEL_1039;
            case 0x71:
                v32 = v11 + 499323185;
                v32 = (v11 + 499323185 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1544) + 560i64) + 440i64) + 8i64 * ((unsigned __int8)v5 ^ 0x45u)) + 392i64)) ^ 0x150C340D;
                goto LABEL_1039;
            case 0x72:
                Calls::FastCall(v4 + 1728, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 1248i64) & 0x6F)) + 1216i64));
                goto LABEL_1039;
            case 0x73:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 8i64 * (unsigned __int8)(53 * (FuckEnc::CacheRead<_BYTE>(v4 + 1048) ^ 0x17))) + 456i64, &v32, v5, v4);
                goto LABEL_1039;
            case 0x74:
                v32 = v11 ^ 0xD1FF4171;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 328) + 792i64) + 8i64 * (v5 & 0x73), &v32, v5, v4);
                goto LABEL_1039;
            case 0x75:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1888);
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 64);
                v12 = (FuckEnc::CacheRead<_DWORD>(v4 + 1584) ^ v32 ^ 0xED2F00B2) - v5;
                goto LABEL_1038;
            case 0x76:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 712);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 8i64 * (unsigned __int8)(37 * v5)) + 192i64) + 624i64) + 8i64 * (unsigned __int8)(-98 * v5)) + 1648i64);
                goto LABEL_1038;
            case 0x77:
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 216) + 4i64 * ((20 * (unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1416) + 1504i64) + 1544i64) + 296i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 1)) + 600i64)) & 0x31));
                goto LABEL_1038;
            case 0x78:
                v32 = (v11 - 2094992517) ^ 0x8E845216;
                Calls::FastCall(v4 + 1712, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 984) + 1720i64));
                goto LABEL_1039;
            case 0x79:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 320);
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1432) + 8i64 * ((unsigned __int8)(-11 * ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1648)) & 0xFD)) + 1304i64) + 1;
                goto LABEL_1039;
            case 0x7A:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 1560i64);
                v32 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 904) + 976i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * (((unsigned __int8)v5 ^ 0x28) & 0x7F)) + 1304i64));
                goto LABEL_1039;
            case 0x7B:
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1560) + 104i64) + 1392i64) + 1088i64) + 248i64) + 1280i64) + 8i64 * (unsigned __int8)(29 * v5)) + 1048i64) ^ v11;
                goto LABEL_1038;
            case 0x7C:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 384) * v5;
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 8i64 * (unsigned __int8)(23 * FuckEnc::CacheRead<_BYTE>(v4 + 592))) + 616i64) + 1248i64) + v32 + 1;
                goto LABEL_1038;
            case 0x7D:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1832) + 944i64) + 520i64) + 472i64);
                v32 = v11 + (FuckEnc::CacheRead<_DWORD>(v10 + 1912) ^ (-1756013402 * FuckEnc::CacheRead<_DWORD>(v4 + 264)));
                goto LABEL_1039;
            case 0x7E:
                Calls::FastCall(v4 + 1024, &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 80));
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 1632);
                goto LABEL_1039;
            case 0x7F:
                v32 = v11 - 1594413311;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 472);
                v32 = v11 - 1594413311 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1600) + 1696i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 384) + 1);
                goto LABEL_1039;
            case 0x80:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 720);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 320i64);
                v12 = __ROL4__(v32, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 760) + 1912i64));
                goto LABEL_1038;
            case 0x81:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1320) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 192);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v4 + 712) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 848) + 1576i64);
                goto LABEL_1038;
            case 0x82:
                v32 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 1304) & 0xF5) - 656817299;
                v32 = __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1760) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 1320), 12)) + 1960i64));
                goto LABEL_1039;
            case 0x83:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1872);
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 768) + 8i64 * ((unsigned __int8)v5 ^ 0x18u)) + 976i64);
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 544i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 27));
                goto LABEL_1039;
            case 0x84:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 384);
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1232) + 600i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 8i64 * ((unsigned __int8)v5 ^ 0xD9u)) + 1632i64);
                goto LABEL_1039;
            case 0x85:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 616);
                v32 = ~((v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1040) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 888) + 1576i64)) ^ 0x7BA3E223);
                goto LABEL_1039;
            case 0x86:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 1888i64);
                v32 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 1040));
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1760) + 8i64 * (unsigned __int8)(-33 * v5)) + 592i64);
                goto LABEL_1038;
            case 0x87:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 8i64 * ((50 * (_BYTE)v5) & 0x7B)) + 808i64, &v32, v5, v4);
                v32 = ~v32;
                goto LABEL_1039;
            case 0x88:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1128);
                v32 = (FuckEnc::CacheRead<_DWORD>(v10 + 272) ^ v11) + v5;
                v12 = v32 + ((FuckEnc::CacheRead<_DWORD>(v4 + 600) - 1166417144) & 0xFFFFFFF0);
                goto LABEL_1038;
            case 0x89:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 408) + 760i64) + 432i64);
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 568) + 4i64 * (v5 & 0x5D)) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 656) + 664i64);
                goto LABEL_1038;
            case 0x8A:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 248);
                v32 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 648) ^ (FuckEnc::CacheRead<_DWORD>(v10 + 1960) + ~(FuckEnc::CacheRead<_DWORD>(v4 + 600) + 1591259453));
                goto LABEL_1039;
            case 0x8B:
                v32 = v11 + 2035676199;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 192);
                v32 = v11 + 2035676199 - FuckEnc::CacheRead<_DWORD>(v10 + 320);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v4 + 720);
                goto LABEL_1038;
            case 0x8C:
                v32 = v11 - 1592316349;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 656);
                v32 = __ROL4__(v11 - 1592316349, FuckEnc::CacheRead<_DWORD>(v10 + 648));
                v32 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 760) + 1912i64);
                goto LABEL_1039;
            case 0x8D:
                v12 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1640) + 216i64) + 4i64 * ((unsigned __int8)v5 & 0x84)) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 920) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 560) + 8i64)));
                goto LABEL_1038;
            case 0x8E:
                v32 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 8i64 * (unsigned __int8)(42 * v5)) + 600i64));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 904) + 408i64);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v10 + 712);
                goto LABEL_1038;
            case 0x8F:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 264);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 760) + 736i64);
                v12 = -(FuckEnc::CacheRead<_DWORD>(v10 + 712) ^ v32) - 1915013054;
                goto LABEL_1038;
            case 0x90:
                v32 = v11 ^ 0x29C30131;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 408);
                v32 = ((v11 ^ 0x29C30131) - FuckEnc::CacheRead<_DWORD>(v10 + 600)) ^ 0xA5602DFA;
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 320) + 1;
                goto LABEL_1039;
            case 0x91:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1744) + 1176i64);
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 1368) + FuckEnc::CacheRead<_DWORD>(v4 + 1576) - 52847371;
                goto LABEL_1039;
            case 0x92:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 8i64 * (unsigned __int8)(17 * v5)) + 1608i64) + 8i64 * (((unsigned __int8)v5 ^ 0xEF) & 0x96)) + 1752i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 17)) + 1904i64);
                goto LABEL_1039;
            case 0x93:
                v32 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 992);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4) + 1160i64, &v32, v5, v4);
                goto LABEL_1039;
            case 0x94:
                v32 = v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 448) + 8i64 * (((unsigned __int8)v5 ^ 0xDF) & 0xE0)) + 1456i64) + 1744i64) + 328i64) + 56i64);
                goto LABEL_1039;
            case 0x95:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 320);
                v32 = __ROR4__(v32 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 8i64 * ((unsigned __int8)(FuckEnc::CacheRead<_DWORD>(v4 + 320) + 17) & 0xB4)) + 600i64), 51);
                goto LABEL_1039;
            case 0x96:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1504);
                v32 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 768) + 8i64 * (unsigned __int8)__ROL4__(v5, 27)) + 1320i64) - 2100935043 + FuckEnc::CacheRead<_DWORD>(v4 + 56));
                goto LABEL_1039;
            case 0x97:
                Calls::FastCall(v4 + 1400, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 8i64 * (unsigned __int8)(-10 * v5)) + 120i64) + 8i64 * ((unsigned __int8)(-9 * v5) & 0x86)));
                goto LABEL_1039;
            case 0x98:
                v32 = v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 576) + 232i64) + 1048i64) + ~FuckEnc::CacheRead<_DWORD>(v4 + 1696);
                goto LABEL_1039;
            case 0x99:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1368);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1832) + 456i64, &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 192));
                goto LABEL_1039;
            case 0x9A:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1256);
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 1704);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 888);
                v12 = v32 + FuckEnc::CacheRead<_DWORD>(v10 + 992) * FuckEnc::CacheRead<_DWORD>(v4 + 1040);
                goto LABEL_1038;
            case 0x9B:
                v32 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 64));
                v32 ^= v5 + FuckEnc::CacheRead<_DWORD>(v4 + 336);
                v32 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 664i64);
                goto LABEL_1039;
            case 0x9C:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 576) + 904i64);
                v12 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 8i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1880) + 4i64 * ((unsigned __int8)v5 ^ 0x7Eu)), 3) & 0x2B)) + 1696i64) | 0x1B);
                goto LABEL_1038;
            case 0x9D:
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 544) + 4i64 * ((unsigned __int8)~(unsigned __int8)(FuckEnc::CacheRead<_DWORD>(v4 + 8) >> 7) & 0xCC)) ^ v11;
                v12 = FuckEnc::CacheRead<_DWORD>(v4 + 8) ^ v32;
                goto LABEL_1038;
            case 0x9E:
                Calls::FastCall(v4 + 1112, &v32, v5, v4);
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 1576);
                v12 = __ROL4__(v32, FuckEnc::CacheRead<_DWORD>(v4 + 1904));
                goto LABEL_1038;
            case 0x9F:
                v32 = ~(FuckEnc::CacheRead<_DWORD>(v4 + 56) ^ v11 ^ 0xA7A72F33);
                v32 ^= v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 336) ^ FuckEnc::CacheRead<_DWORD>(v4 + 1368);
                goto LABEL_1039;
            case 0xA0:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 120) + 8i64 * ((unsigned __int8)v5 & 0xE3)) + 144i64);
                v32 = v11 + v5 * (FuckEnc::CacheRead<_DWORD>(v4 + 320) + FuckEnc::CacheRead<_DWORD>(v10 + 1248));
                goto LABEL_1039;
            case 0xA1:
                v32 = __ROR4__(v11 + v5, 146);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 104);
                v32 -= FuckEnc::CacheRead<_DWORD>(v10 + 56) * ((_DWORD)0x117B32A5 + FuckEnc::CacheRead<_DWORD>(v4 + 592));
                goto LABEL_1039;
            case 0xA2:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * ((unsigned __int8)v5 & 0x9E)) + 408i64);
                v32 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 1048));
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 1744i64) + 928i64) ^ v32;
                goto LABEL_1038;
            case 0xA3:
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 1928i64) + 472i64) + 1936i64) + 8i64 * ((unsigned __int8)v5 & 0xF2)) + 848i64) + 1248i64) ^ v11;
                goto LABEL_1038;
            case 0xA4:
                v32 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 848) + 408i64) + 384i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 8i64 * (v5 & 0x5D)) + 1904i64));
                goto LABEL_1039;
            case 0xA5:
                v32 = v11 + 376870867;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 104);
                v32 = v11 + 376870867 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1832) + 1904i64) * ~FuckEnc::CacheRead<_DWORD>(v10 + 1696);
                goto LABEL_1039;
            case 0xA6:
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 776) + 8i64 * (unsigned __int8)(9 * FuckEnc::CacheRead<_DWORD>(v4 + 1704))) + 992i64) - FuckEnc::CacheRead<_DWORD>(v4 + 1584) - FuckEnc::CacheRead<_DWORD>(v4 + 920);
                goto LABEL_1038;
            case 0xA7:
                v32 = v11 ^ 0xB5F64099;
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 616i64) + 272i64) ^ v11 ^ 0xB5F64099;
                v12 = __ROR4__(v32 - FuckEnc::CacheRead<_DWORD>(v4 + 664), 9);
                goto LABEL_1038;
            case 0xA8:
                v32 = ~__ROR4__(v11, ~(FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 432) + 928i64) * v5));
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v4 + 712);
                goto LABEL_1038;
            case 0xA9:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 664);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 8) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 1552i64) + 4i64 * ((unsigned __int8)v5 & 0xE8));
                goto LABEL_1039;
            case 0xAA:
                v32 = v11 - v5;
                v32 = v11 - v5 - FuckEnc::CacheRead<_DWORD>(v4 + 592);
                v12 = __ROL4__(v32, ~(8 * FuckEnc::CacheRead<_BYTE>(v4 + 64))) - 2004121390;
                goto LABEL_1038;
            case 0xAB:
                v32 = v11 ^ 0xFAF5BF6B;
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(v4 + 192) + 1648i64) ^ v11 ^ 0xFAF5BF6B;
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 408) + 600i64);
                goto LABEL_1038;
            case 0xAC:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1048);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1088) + 1120i64) + 8i64 * (v5 & 0xF), &v32, v5, v4);
                goto LABEL_1039;
            case 0xAD:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1600);
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 8);
                v32 += ~(FuckEnc::CacheRead<_DWORD>(v4 + 592) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 600) >> 27));
                goto LABEL_1039;
            case 0xAE:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 288i64) + 1216i64);
                v26 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1424) + 8i64 * (v5 & 0xE));
            LABEL_111:
                Calls::FastCall(v4 + 1840, &v32, v5, v26);
                goto LABEL_1039;
            case 0xAF:
                v32 = v11 + 1733422484 + FuckEnc::CacheRead<_DWORD>(v4 + 664);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 248) + 1456i64) + 216i64) + 4i64 * ((-8 * (_BYTE)v5) & 0x21));
                goto LABEL_1039;
            case 0xB0:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1584) ^ v11;
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 1632) ^ 0xD9E5858F;
                v32 += (FuckEnc::CacheRead<_DWORD>(v4 + 264) ^ 0x22955DA0) + 1;
                goto LABEL_1039;
            case 0xB1:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 648) ^ v11;
                v12 = __ROR4__(v32, ~FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 904) + 984i64) + 1784i64) + 1416i64) + 720i64));
                goto LABEL_1038;
            case 0xB2:
                v32 = ~v11;
                Calls::FastCall(v4 + 480, &v32, v5, v4);
                v32 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1392) + 1648i64);
                goto LABEL_1039;
            case 0xB3:
                v32 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1912));
                v32 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1504) + 712i64);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v4 + 1040) + 1077388555;
                goto LABEL_1038;
            case 0xB4:
                v32 = v11 + (v5 ^ ~(1159273435 * FuckEnc::CacheRead<_DWORD>(v4 + 592))) + (FuckEnc::CacheRead<_DWORD>(v4 + 720) ^ 0xB27ADC62);
                goto LABEL_1039;
            case 0xB5:
                v32 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 1704) ^ (1150509451 * FuckEnc::CacheRead<_DWORD>(v4 + 592)));
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1416) + 1576i64) + v32 + 1599269332;
                goto LABEL_1038;
            case 0xB6:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1064) + 1432i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 25)) + 720i64);
                v27 = v32 + FuckEnc::CacheRead<_DWORD>(v4 + 664);
                goto LABEL_1037;
            case 0xB7:
                v32 = v11 - 338636671 * FuckEnc::CacheRead<_DWORD>(v4 + 992);
                v32 = __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(v4 + 320));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 432);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1528) + 4i64 * (unsigned __int8)__ROR4__(v5, 24)) ^ v32;
                goto LABEL_1038;
            case 0xB8:
                v32 = v5 ^ (v11 - FuckEnc::CacheRead<_DWORD>(v4 + 56) - v5);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 264);
                v32 ^= ~FuckEnc::CacheRead<_DWORD>(v4 + 1584);
                goto LABEL_1039;
            case 0xB9:
                v32 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 920) + 1246225972);
                v32 = __ROL4__(v32, 68 * FuckEnc::CacheRead<_BYTE>(v4 + 1320) * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 408) + 928i64));
                goto LABEL_1039;
            case 0xBA:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 1672i64, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 8i64 * (v5 & 0x11)));
                goto LABEL_1039;
            case 0xBB:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1040) ^ v11;
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 8i64 * (unsigned __int8)(-33 * FuckEnc::CacheRead<_BYTE>(v4 + 1584))) + 952i64) + 8i64 * (v5 & 0x5D)) + 928i64);
                goto LABEL_1038;
            case 0xBC:
                v32 = v11 + 1513942735;
                v32 = __ROR4__(v11 + 1513942735, 17 * FuckEnc::CacheRead<_BYTE>(v4 + 264));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1232) + 560i64);
                v32 += FuckEnc::CacheRead<_DWORD>(v10 + 992);
                goto LABEL_1039;
            case 0xBD:
                v32 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 712));
                v12 = __ROL4__(v32, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 1432i64) + 8i64 * ((unsigned __int8)v5 ^ 0x2Bu)) + 1104i64) + 8i64 * ((-2 * (_BYTE)v5) & 0x21)) + 1048i64));
                goto LABEL_1038;
            case 0xBE:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1648) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 800);
                v32 += FuckEnc::CacheRead<_DWORD>(v10 + 8);
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 1704) + 1;
                goto LABEL_1039;
            case 0xBF:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1872);
                Calls::FastCall(v4 + 1072, &v32, v5, v10);
                v32 ^= 0xA6FD0FFu;
                v12 = v32 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 928);
                goto LABEL_1038;
            case 0xC0:
                v32 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 976) + 65);
                v32 ^= (FuckEnc::CacheRead<_DWORD>(v4 + 600) - 1584138817) * (FuckEnc::CacheRead<_DWORD>(v4 + 64) - 1837506475);
                goto LABEL_1039;
            case 0xC1:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1720);
                v32 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 928));
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 560) + 296i64) + 8i64 * ((-9 * (_BYTE)v5) & 0x5B)) + 1232i64) + 1632i64);
                goto LABEL_1039;
            case 0xC2:
                v22 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 8i64 * (unsigned __int8)(91 * FuckEnc::CacheRead<_DWORD>(v4 + 56))) + 576i64) + 888i64);
                goto LABEL_64;
            case 0xC3:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1560);
                v22 = v4;
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1040) * v5;
            LABEL_64:
                Calls::FastCall(v4 + 1056, &v32, v5, v22);
                goto LABEL_1039;
            case 0xC4:
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 1904i64) ^ v11;
                v12 = __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 1928i64) + 1096i64) + 8i64 * (unsigned __int8)(-78 * v5)) + 1576i64));
                goto LABEL_1038;
            case 0xC5:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 360i64, &v32, v5, v4);
                v32 = __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(v4 + 1048));
                goto LABEL_1039;
            case 0xC6:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 600) ^ v11;
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 264) + 1110717457;
                v27 = v32 + FuckEnc::CacheRead<_DWORD>(v4 + 1320);
                goto LABEL_1037;
            case 0xC7:
                v32 = v11 + 1023309500 + FuckEnc::CacheRead<_DWORD>(v4 + 264);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 848);
                Calls::FastCall(v10 + 368, &v32, v5, v4);
                goto LABEL_1039;
            case 0xC8:
                v32 = ~v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 80);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 904) + 728i64, &v32, v5, v10);
                goto LABEL_1039;
            case 0xC9:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 8i64 * ((3 * (_BYTE)v5) & 0x1C)) + 264i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 888);
                v12 = v5 ^ (v32 + FuckEnc::CacheRead<_DWORD>(v10 + 64));
                goto LABEL_1038;
            case 0xCA:
                v32 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 520) + 920i64) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 1376i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 1040) & 0xFFFFFFF2)));
                goto LABEL_1039;
            case 0xCB:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 336);
                Calls::FastCall(v4 + 528, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1104) + 8i64 * (unsigned __int8)(65 * FuckEnc::CacheRead<_BYTE>(v4 + 320))));
                v32 = ~v32;
                goto LABEL_1039;
            case 0xCC:
                v32 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 320));
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 1504i64) + 1928i64) + 904i64) + 520i64) + 64i64);
                goto LABEL_1039;
            case 0xCD:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1648) ^ v11;
                v12 = __ROL4__(v32, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 944i64) + 1248i64));
                goto LABEL_1038;
            case 0xCE:
                v28 = __ROR4__(v5, 6) & 0x6C;
                v29 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 8i64 * (((unsigned __int8)v5 ^ 0x34) & 0xB5)) + 1104i64);
                goto LABEL_623;
            case 0xCF:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 384);
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 408) + 560i64) + 648i64);
                v32 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 576) + 392i64);
                goto LABEL_1039;
            case 0xD0:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1320);
                v32 = __ROL4__(v32, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(v4 + 848) + 296i64) + 8i64 * (unsigned __int8)~(_BYTE)v5) + 1880i64) + 4i64 * (unsigned __int8)(-19 * v5)));
                goto LABEL_1039;
            case 0xD1:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 928) & 0xF9)) + 232i64);
                v32 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 1960) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 848) + 1224i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 5)));
                goto LABEL_1039;
            case 0xD2:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1632) ^ v11;
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1256) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1432) + 8i64 * (unsigned __int8)(-109 * v5)) + 800i64) + 1368i64);
                goto LABEL_1039;
            case 0xD3:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 104);
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 920);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 1464i64, &v32, v5, v4);
                goto LABEL_1039;
            case 0xD4:
                v32 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1104) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 264) & 0x18)) + 392i64));
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 720);
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 760) + 1696i64);
                goto LABEL_1039;
            case 0xD5:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1632) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 776) + 8i64 * ((unsigned __int8)v5 ^ 0xBu)) + 784i64, &v32, v5, v4);
                goto LABEL_1039;
            case 0xD6:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1320) ^ v11;
                Calls::FastCall(v4 + 696, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 8i64 * (~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 648) & 0x77)));
                goto LABEL_1039;
            case 0xD7:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 432);
                Calls::FastCall(v4 + 1672, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 952) + 8i64 * (__ROL4__(v5, 7) & 0x53)));
                goto LABEL_1039;
            case 0xD8:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 264);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4) + 40i64, &v32, v5, v4);
                v32 = __ROL4__(v32, v5);
                goto LABEL_1039;
            case 0xD9:
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1088) + 720i64) ^ v11;
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 1320);
                v12 = __ROL4__(v32, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1760) + 8i64 * (v5 & 0x2B)) + 1632i64));
                goto LABEL_1038;
            case 0xDA:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 432) + 1560i64) + 520i64) + 80i64);
                Calls::FastCall(v4 + 1728, &v32, v5, v10);
                goto LABEL_1039;
            case 0xDB:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * ((unsigned __int8)__ROR4__(v5, 14) & 0xAF)) + 1064i64) + 1416i64);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1936) + 8i64 * ((unsigned __int8)(-67 * v5) & 0xEF)) + 320i64) ^ v11;
                goto LABEL_1038;
            case 0xDC:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 576) + 1376i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 888) + 272i64) ^ 0x21u)) + 1176i64);
                v12 = __ROL4__(v32, FuckEnc::CacheRead<_DWORD>(v10 + 928));
                goto LABEL_1038;
            case 0xDD:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 320);
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 1224i64) + 4i64 * (unsigned __int8)(92 * v5));
                v12 = v32 + ~FuckEnc::CacheRead<_DWORD>(v4 + 392);
                goto LABEL_1038;
            case 0xDE:
                v32 = v11 - 1942680437;
                v32 = v11 - 1942680437 - (FuckEnc::CacheRead<_DWORD>(v4 + 56) >> 2);
                v32 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 8i64 * (unsigned __int8)(-29 * v5)) + 64i64);
                goto LABEL_1039;
            case 0xDF:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1064) + 384i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1504);
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 544) + 4i64 * (((unsigned __int8)v5 ^ 0xC) & 0x6F));
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 976);
                goto LABEL_1039;
            case 0xE0:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 56);
                v32 = (v32 - FuckEnc::CacheRead<_DWORD>(v4 + 64)) ^ 0xDA78E9E9;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 328) + 944i64);
                v32 += FuckEnc::CacheRead<_DWORD>(v10 + 64);
                goto LABEL_1039;
            case 0xE1:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 232);
                v32 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 1584) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1176) + 112i64) + 8i64 * (unsigned __int8)(-64 * v5)) + 920i64);
                goto LABEL_1039;
            case 0xE2:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 920) + 546224474;
                v32 += ~FuckEnc::CacheRead<_DWORD>(v4 + 1696);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 976);
                goto LABEL_1039;
            case 0xE3:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1176) + 1872i64) + 720i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 576) + 1216i64);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v10 + 1696);
                goto LABEL_1038;
            case 0xE4:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 80) + 920i64);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 408) + 1608i64) + 8i64 * (unsigned __int8)(-26 * v5)) + 648i64);
                goto LABEL_1039;
            case 0xE5:
                v32 = v11 + 1 + FuckEnc::CacheRead<_DWORD>(v4 + 1584);
                v32 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 520) + 984i64) + 448i64) + 8i64 * (((unsigned __int8)v5 ^ 0x30) & 0xB0)) + 920i64);
                goto LABEL_1039;
            case 0xE6:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1272);
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1704) * FuckEnc::CacheRead<unsigned __int8>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 8i64 * (unsigned __int8)(-119 * FuckEnc::CacheRead<_BYTE>(v4 + 1320))) + 67i64);
                goto LABEL_1038;
            case 0xE7:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1584);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 472i64) + 384i64);
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 1696);
                goto LABEL_1039;
            case 0xE8:
                v32 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1256));
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 8) ^ 0x98D1FF41;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 104);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1272) + 1912i64);
                goto LABEL_1038;
            case 0xE9:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 648);
                v12 = __ROL4__(v32, FuckEnc::CacheRead<_BYTE>(v4 + 928) ^ ~FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1088) + 1528i64) + 4i64 * ((unsigned __int8)v5 & 0x83)));
                goto LABEL_1038;
            case 0xEA:
                v32 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1632));
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 664) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 872) + 4i64 * ((unsigned __int8)(FuckEnc::CacheRead<_DWORD>(v4 + 992) - 85) ^ 8u));
                goto LABEL_1039;
            case 0xEB:
                v32 = v11 ^ 0xC05E176F;
                v32 = v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 1904) ^ v11 ^ 0xC05E176F;
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * ((unsigned __int8)v5 & 0xC7)) + 320i64);
                goto LABEL_1038;
            case 0xEC:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 656i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 1336) + 8i64 * (unsigned __int8)(24 * v5), &v32, v5, v4);
                goto LABEL_1039;
            case 0xED:
                Calls::FastCall(v4 + 32, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 120) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1048) & 0xDA)) + 624i64) + 8i64 * (v5 & 0x7F)));
                goto LABEL_1039;
            case 0xEE:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1760) + 8i64 * (v5 & 0x6B)) + 408i64);
                v32 = v11 ^ (1566330946 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1856) + 4i64 * (unsigned __int8)(58 * v5)));
                goto LABEL_1039;
            case 0xEF:
                v32 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1432) + 8i64 * (unsigned __int8)__ROR4__(v5, 27)) + 64i64) ^ 0xCDD622F1);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 656);
                v32 -= FuckEnc::CacheRead<_DWORD>(v10 + 648) >> 4;
                goto LABEL_1039;
            case 0xF0:
                v32 = (v11 + v5) ^ 0x8B497B5F;
                v32 += v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 1064i64) + 1528i64) + 4i64 * (((unsigned __int8)v5 ^ 0x10) & 0x90));
                goto LABEL_1039;
            case 0xF1:
                v32 = v11 - v5;
                v32 = v11 - v5 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 8i64 * (~(_BYTE)v5 & 0x40)) + 600i64);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 976i64);
                goto LABEL_1038;
            case 0xF2:
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 1832i64) + 272i64) ^ v11;
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1248);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 520) + 8i64);
                goto LABEL_1038;
            case 0xF3:
                v32 = (v11 ^ 0xC301319A) + 30539585;
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 432) + 1248i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 928) ^ 0xC3018944);
                goto LABEL_1039;
            case 0xF4:
                v32 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 56));
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 1304);
                Calls::FastCall(v4 + 728, &v32, v5, v4);
                goto LABEL_1039;
            case 0xF5:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1640) + 1936i64) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 1632), 15)) + 984i64);
                v21 = v10;
            LABEL_58:
                Calls::FastCall(v4 + 152, &v32, v5, v21);
                goto LABEL_1039;
            case 0xF6:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 328) + 624i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 23)) + 1912i64);
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1544) + 664i64) | 0x11;
                goto LABEL_1039;
            case 0xF7:
                Calls::FastCall(v4 + 416, &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1392));
                v32 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 8i64 * ((unsigned __int8)v5 & 0xC2)) + 1248i64);
                goto LABEL_1039;
            case 0xF8:
                v32 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(v4 + 328) + 264i64));
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 600);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 104);
                v12 = FuckEnc::CacheRead<_DWORD>(v10 + 1576) ^ v32;
                goto LABEL_1038;
            case 0xF9:
                v32 = v11 - 633536817;
                v32 = (v11 - 633536817) ^ ~(~FuckEnc::CacheRead<_DWORD>(v4 + 712) * (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 1912)));
                goto LABEL_1039;
            case 0xFA:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1416);
                v13 = (unsigned __int8)(82 * FuckEnc::CacheRead<_BYTE>(v4 + 56)) & 0xC4;
                v15 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 232) + 1520i64);
                goto LABEL_23;
            case 0xFB:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 520) + 904i64);
                v32 = v11 + ~FuckEnc::CacheRead<_DWORD>(v10 + 648);
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 1704);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1576);
                goto LABEL_1039;
            case 0xFC:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 1544i64);
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 664);
                v32 = v32 - ((FuckEnc::CacheRead<_DWORD>(v4 + 1648) << 19) ^ 0x63FA8F97) + 1676160769;
                goto LABEL_1039;
            case 0xFD:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1232);
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1104) + 8i64 * ((unsigned __int8)v5 & 0xFE)) + 768i64) + 8i64 * ((unsigned __int8)__ROL4__(v5, 2) & 0xD8)) + 336i64) ^ v11;
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v4 + 8);
                goto LABEL_1038;
            case 0xFE:
                v12 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 1960) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * (unsigned __int8)(-17 * v5)) + 1704i64)) - v5;
                goto LABEL_1038;
            case 0xFF:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1256) ^ v11;
                Calls::FastCall(v4 + 40, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 776) + 8i64 * (unsigned __int8)(-29 * v5)));
                goto LABEL_1039;
            case 0x100:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 592);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 144);
                v32 ^= -771800800 * FuckEnc::CacheRead<_DWORD>(v4 + 648) * FuckEnc::CacheRead<_DWORD>(v10 + 1304);
                goto LABEL_1039;
            case 0x101:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * (v5 & 0x18)) + 656i64);
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1544) + 1752i64) + 8i64 * (((unsigned __int8)v5 ^ 3) & 0x1B)) + 1648i64);
                goto LABEL_1039;
            case 0x102:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 712);
                v32 = v32 - FuckEnc::CacheRead<_DWORD>(v4 + 1904) + 2034040527;
                v32 = __ROR4__(v32, ~FuckEnc::CacheRead<_BYTE>(v4 + 1040)) - 788564873;
                goto LABEL_1039;
            case 0x103:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 904) + 944i64) + 480i64, &v32, v5, v4);
                v32 += 818950190;
                goto LABEL_1039;
            case 0x104:
                v32 = v11 + 1 + FuckEnc::CacheRead<_DWORD>(v4 + 1320);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1504) + 1096i64) + 8i64 * (((unsigned __int8)v5 ^ 3) & 0x13)) + 720i64);
                goto LABEL_1039;
            case 0x105:
                v32 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 8i64 * ((unsigned __int8)v5 & 0xC0)) + 1960i64));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 408) + 408i64);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 616) + 392i64);
                goto LABEL_1038;
            case 0x106:
                v32 = ~__ROL4__(v11, 53);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 800);
                v32 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v10 + 664), 28)) + 600i64);
                goto LABEL_1039;
            case 0x107:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1912);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1648);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 984);
                Calls::FastCall(v4 + 1016, &v32, v5, v10);
                goto LABEL_1039;
            case 0x108:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1632);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 576);
                v12 = __ROR4__(v32, v5 + FuckEnc::CacheRead<_BYTE>(v10 + 1584) + FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1088) + 720i64));
                goto LABEL_1038;
            case 0x109:
                v32 = v11 ^ 0xC3018944;
                v13 = (unsigned __int8)(36 * v5);
                v14 = FuckEnc::CacheRead<_QWORD>(v4 + 80);
                goto LABEL_22;
            case 0x10A:
                v32 = v11 ^ 0xC01CC425;
                v32 = (v11 ^ 0xC01CC425) + FuckEnc::CacheRead<_DWORD>(v4 + 1904) * (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 648));
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 712);
                goto LABEL_1039;
            case 0x10B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 408);
                v13 = ((unsigned __int8)v5 ^ 0x65) & 0xFD;
                v15 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 760) + 1120i64);
                goto LABEL_23;
            case 0x10C:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1584);
                v12 = __ROL4__(v32, 56 * FuckEnc::CacheRead<_BYTE>(v4 + 56) * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1104) + 8i64 * (unsigned __int8)(115 * v5)) + 600i64));
                goto LABEL_1038;
            case 0x10D:
                v32 = v5 ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1600);
                v32 = v5 ^ v11 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 600) | 0xF);
                v32 -= 1830718270 * FuckEnc::CacheRead<_DWORD>(v4 + 712);
                goto LABEL_1039;
            case 0x10E:
                v32 = ~(v11 - FuckEnc::CacheRead<_DWORD>(v4 + 64)) + v5;
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 80) + 1376i64) ^ v5;
                goto LABEL_1039;
            case 0x10F:
                v32 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 592) ^ v5);
                v32 = __ROL4__(v32, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 904) + 600i64) * (FuckEnc::CacheRead<_BYTE>(v4 + 336) - 63));
                goto LABEL_1039;
            case 0x110:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 408);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1776) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v10 + 1960) & 0xFFFFFFF8, 8), &v32, v5, v4);
                goto LABEL_1039;
            case 0x111:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 920);
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1312) + 1088i64) + 112i64) + 8i64 * (unsigned __int8)(113 * v5)) + 1256i64);
                goto LABEL_1039;
            case 0x112:
                Calls::FastCall(v4 + 360, &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 80));
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 920i64);
                goto LABEL_1039;
            case 0x113:
                v32 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1392) + 648i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * (v5 & 0x70)) + 336i64) ^ 0xC311319A;
                goto LABEL_1039;
            case 0x114:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1720) + 1936i64) + 8i64 * (unsigned __int8)v5) + 800i64) + 1272i64) + 1784i64) + 1528i64) + 4i64 * ((unsigned __int8)(-109 * v5) & 0xE0));
                goto LABEL_1039;
            case 0x115:
                Calls::FastCall(v4 + 32, &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 144));
                v32 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 848) + 264i64);
                goto LABEL_1039;
            case 0x116:
                v32 = v11 + v5;
                v32 = v11 + v5 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1232) + 1432i64) + 8i64 * (unsigned __int8)(46 * v5)) + 1432i64) + 8i64 * (v5 & 0x34)) + 1584i64);
                goto LABEL_1039;
            case 0x117:
                v30 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 904) + 776i64) + 8i64 * ((unsigned __int8)v5 & 0xD3)) + 1784i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v30);
                v12 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 1584) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v30) + 1648i64));
                goto LABEL_1038;
            case 0x118:
                Calls::FastCall(v4 + 1728, &v32, v5, FuckEnc::CacheRead<_QWORD>(v4));
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 1368) >> 27;
                goto LABEL_1039;
            case 0x119:
                v32 = ~v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * (unsigned __int8)(-66 * FuckEnc::CacheRead<_BYTE>(v4 + 1632))) + 1640i64) + 1560i64) + 800i64);
                v12 = ~v11 - FuckEnc::CacheRead<_DWORD>(v10 + 264);
                goto LABEL_1038;
            case 0x11A:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 56);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 448) + 8i64 * (unsigned __int8)(-8 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 8i64 * (__ROR4__(v5, 8) & 0x5E)) + 1304i64))) + 920i64) ^ v32;
                goto LABEL_1038;
            case 0x11B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1216);
                v32 = v11 + -(FuckEnc::CacheRead<_DWORD>(v10 + 264) * (FuckEnc::CacheRead<_DWORD>(v4 + 664) - 101405264)) - 788557110;
                goto LABEL_1039;
            case 0x11C:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 920);
                Calls::FastCall(v4 + 528, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1760) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1048) & 0x31)));
                goto LABEL_1039;
            case 0x11D:
                v32 = (v11 ^ (1435112992 * FuckEnc::CacheRead<_DWORD>(v4 + 928))) - 1086521649;
                v32 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 896) + 4i64 * (unsigned __int8)(3 * ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 320)));
                goto LABEL_1039;
            case 0x11E:
                v32 = v11 - v5;
                v13 = (unsigned __int8)v5 ^ 0xB5u;
                v15 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 656) + 1848i64);
                goto LABEL_23;
            case 0x11F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1272);
                v18 = FuckEnc::CacheRead<_QWORD>(v4 + 1560);
                v20 = (unsigned __int8)__ROL4__(v5, 25);
                v19 = FuckEnc::CacheRead<_QWORD>(v10 + 208);
                goto LABEL_56;
            case 0x120:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 336) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 192);
                v12 = __ROL4__(v32, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 776) + 8i64 * (((unsigned __int8)v5 ^ 0xDB) & 0x75)) + 1632i64) >> 17);
                goto LABEL_1038;
            case 0x121:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 432) + 56i64) + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1416) + 1560i64) + 1912i64) << 12);
                goto LABEL_1039;
            case 0x122:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1392);
                v32 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 1048) ^ (FuckEnc::CacheRead<_DWORD>(v10 + 1904) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1888) + 1088i64) + 920i64));
                goto LABEL_1039;
            case 0x123:
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 216) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 1040) & 0xFFFFFFE6, 18)) ^ v11;
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 720) & 0x80)) + 320i64) ^ v32;
                goto LABEL_1038;
            case 0x124:
                v12 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 448) + 8i64 * (__ROL4__(v5, 17) & 0x52)) + 1064i64) + 1104i64) + 8i64 * (__ROR4__(v5, 31) & 0x6B)) + 1088i64) + 384i64));
                goto LABEL_1038;
            case 0x125:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1632);
                v32 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 408) + 920i64) - 420967873;
                v12 = FuckEnc::CacheRead<_DWORD>(v4 + 1048) ^ v32;
                goto LABEL_1038;
            case 0x126:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 472);
                Calls::FastCall(v4 + 1792, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 576) + 736i64));
                goto LABEL_1039;
            case 0x127:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1040) ^ v11;
                v32 += 1023309500 * FuckEnc::CacheRead<_DWORD>(v4 + 272) * (FuckEnc::CacheRead<_DWORD>(v4 + 664) & 0xFFFFFFFC);
                goto LABEL_1039;
            case 0x128:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 600) ^ v11;
                v12 = __ROR4__(v32, ~(FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 8i64 * (unsigned __int8)__ROR4__(16 * FuckEnc::CacheRead<_DWORD>(v4 + 1248), 21)) + 1696i64) ^ v5));
                goto LABEL_1038;
            case 0x129:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1064);
                v32 = v11 ^ (665608889 * ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1528) + 4i64 * (v5 & 0x19)));
                v12 = v32 + (FuckEnc::CacheRead<_DWORD>(v4 + 392) << 22);
                goto LABEL_1038;
            case 0x12A:
                v32 = v11 ^ 0x7A88653E;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1600);
                v12 = __ROL4__(v11 ^ 0x7A88653E, (FuckEnc::CacheRead<_DWORD>(v10 + 928) * (FuckEnc::CacheRead<_DWORD>(v4 + 1248) ^ v5)) >> 9);
                goto LABEL_1038;
            case 0x12B:
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 624i64) + 8i64 * (v5 & 0xE)) + 104i64) + 1224i64) + 4i64 * ((unsigned __int8)v5 & 0xC6)) * v5;
                goto LABEL_1038;
            case 0x12C:
                v32 = __ROR4__(v11, 88);
                v32 = __ROR4__(v32, v5 + FuckEnc::CacheRead<_DWORD>(v4 + 720)) - 2126001466;
                v32 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1232) + 928i64);
                goto LABEL_1039;
            case 0x12D:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 248);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 1064) + 176i64, &v32, v5, v4);
                goto LABEL_1039;
            case 0x12E:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1040);
                v12 = __ROR4__(v32, v5 + FuckEnc::CacheRead<_BYTE>(v4 + 272) + FuckEnc::CacheRead<_BYTE>(v4 + 320) - 33);
                goto LABEL_1038;
            case 0x12F:
                v32 = v11 + 1 + FuckEnc::CacheRead<_DWORD>(v4 + 1256);
                Calls::FastCall(v4 + 1352, &v32, v5, v4);
                goto LABEL_1039;
            case 0x130:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1632) + v5;
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 248) + 928i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1640);
                v32 = __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(v10 + 1304));
                goto LABEL_1039;
            case 0x131:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1456);
                v12 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 8i64 * ((unsigned __int8)v5 & 0xBC)) + 1960i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 440) + 8i64 * ((unsigned __int8)v5 & 0x97)) + 272i64));
                goto LABEL_1038;
            case 0x132:
                v32 = v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 64) ^ v11;
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 392) * v5 - 1656144305;
                goto LABEL_1039;
            case 0x133:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1784);
                v18 = FuckEnc::CacheRead<_QWORD>(v4 + 944);
                v20 = (unsigned __int8)v5 ^ 0x53u;
                v19 = FuckEnc::CacheRead<_QWORD>(v10 + 1520);
            LABEL_56:
                Calls::FastCall(v19 + 8 * v20, &v32, v5, v18);
                goto LABEL_1039;
            case 0x134:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1784);
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 1576);
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 848) + 920i64);
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 64) ^ 0xF0181EE9;
                goto LABEL_1039;
            case 0x135:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 8i64 * (unsigned __int8)(-46 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1416) + 920i64) & 0xEA))) + 232i64) + 760i64);
                v12 = FuckEnc::CacheRead<_DWORD>(v10 + 1912) ^ v11;
                goto LABEL_1038;
            case 0x136:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1888);
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 888) + 664i64) ^ v11;
                v12 = __ROL4__(v32, ~(v5 ^ ~FuckEnc::CacheRead<_BYTE>(v4 + 1576)));
                goto LABEL_1038;
            case 0x137:
                v32 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 384) * (FuckEnc::CacheRead<_DWORD>(v4 + 992) * v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 568) + 4i64 * ((unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 1960), 28) & 0x8F))));
                goto LABEL_1039;
            case 0x138:
                v32 = v11 ^ 0x30D8C959;
                Calls::FastCall(v4 + 1768, &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 472));
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 1048);
                goto LABEL_1039;
            case 0x139:
                Calls::FastCall(v4 + 1072, &v32, v5, v4);
                v17 = v4;
            LABEL_32:
                Calls::FastCall(v4 + 744, &v32, v5, v17);
                goto LABEL_1039;
            case 0x13A:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 664);
                v12 = __ROR4__(v32, FuckEnc::CacheRead<_BYTE>(v4 + 1368) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1760) + 8i64 * (unsigned __int8)(95 * v5)) + 336i64));
                goto LABEL_1038;
            case 0x13B:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1912);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 904);
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1880) + 4i64 * ((-48 * (FuckEnc::CacheRead<_BYTE>(v4 + 320) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v10 + 104) + 712i64))) & 0x5F));
                goto LABEL_1039;
            case 0x13C:
                v32 = v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 848) + 64i64) + v11;
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 712);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 616);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v10 + 1696);
                goto LABEL_1038;
            case 0x13D:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 120) + 8i64 * (unsigned __int8)(-62 * v5)) + 480i64, &v32, v5, v4);
                v32 ^= v5;
                goto LABEL_1039;
            case 0x13E:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 720) - 952382219;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1560);
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1128) + 1232i64) + 384i64) + 1;
                goto LABEL_1039;
            case 0x13F:
                Calls::FastCall(v4 + 360, &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 560));
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 1376);
                goto LABEL_1039;
            case 0x140:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1216) + 288i64);
                Calls::FastCall(v4 + 1400, &v32, v5, v10);
                v32 = ~v32;
                goto LABEL_1039;
            case 0x141:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 760) + 1744i64) + 1392i64);
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1376) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 80) + 1048i64);
                goto LABEL_1038;
            case 0x142:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1304) ^ v11;
                Calls::FastCall(v4 + 72, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1504) + 1888i64) + 104i64));
                goto LABEL_1039;
            case 0x143:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 800);
                v14 = FuckEnc::CacheRead<_QWORD>(v4 + 248);
                v13 = __ROL4__(FuckEnc::CacheRead<_DWORD>(v10 + 712), 23) & 0x3E;
            LABEL_22:
                v15 = FuckEnc::CacheRead<_QWORD>(v14 + 1192);
                goto LABEL_23;
            case 0x144:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 232) + 1256i64);
                v10 = FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 1640i64);
                v32 = __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1528) + 4i64 * (v5 & 0x15)));
                goto LABEL_1039;
            case 0x145:
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 80) + 336i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 8i64 * ((unsigned __int8)__ROR4__(v5, 2) & 0xE8)) + 472i64);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v10 + 592);
                goto LABEL_1038;
            case 0x146:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 720) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 1016i64, &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1784));
                goto LABEL_1039;
            case 0x147:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1560);
                Calls::FastCall(v4 + 1384, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 120) + 8i64 * ((24 * (unsigned __int8)FuckEnc::CacheRead<_DWORD>(v10 + 600)) & 0x7F)) + 408i64));
                goto LABEL_1039;
            case 0x148:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 520);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1096) + 8i64 * (unsigned __int8)(25 * v5)) + 1672i64, &v32, v5, v4);
                goto LABEL_1039;
            case 0x149:
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(v4 + 1888) + 1048i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1888);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 776) + 8i64 * (unsigned __int8)(116 * v5)) + 1648i64) ^ v32;
                goto LABEL_1038;
            case 0x14A:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 264) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 760);
                v32 += FuckEnc::CacheRead<_DWORD>(v10 + 320) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 1224i64) + 4i64 * ((unsigned __int8)(-57 * v5) & 0xBE));
                goto LABEL_1039;
            case 0x14B:
                v32 = v11 ^ ((FuckEnc::CacheRead<_DWORD>(v4 + 976) << 10) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 576) + 1704i64) ^ 0xFB) & 0x24)) + 1648i64));
                goto LABEL_1039;
            case 0x14C:
                v32 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 432) + 264i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 448) + 8i64 * ((unsigned __int8)(41 * v5) & 0xA9)) + 1256i64) ^ 0x52BCAF1E;
                goto LABEL_1039;
            case 0x14D:
                v32 = __ROL4__(v5 ^ (v11 + 227451261), 222);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1832);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 768) + 8i64 * (unsigned __int8)(-81 * v5)) + 1584i64);
                goto LABEL_1039;
            case 0x14E:
                v32 = v11 ^ (-1476500369 * FuckEnc::CacheRead<_DWORD>(v4 + 1632));
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1872) + 800i64) + 1720i64) + 1880i64) + 4i64 * (~(_BYTE)v5 & 0x5C));
                goto LABEL_1039;
            case 0x14F:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 560) + 1784i64) + 328i64);
                v32 = v11 ^ (-1023309500 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 296) + 8i64 * ((unsigned __int8)v5 ^ 3u)) + 600i64));
                goto LABEL_1039;
            case 0x150:
                Calls::FastCall(v4 + 728, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 760i64) + 984i64) + 1456i64) + 144i64));
                goto LABEL_1039;
            case 0x151:
                v32 = v11 ^ ~(FuckEnc::CacheRead<_DWORD>(v4 + 1040) >> 3) ^ ~(FuckEnc::CacheRead<_DWORD>(v4 + 1632) + 1905518260) & 0xFFFFFFE7;
                goto LABEL_1039;
            case 0x152:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1888);
                v32 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * (v5 & 0x43)) + 64i64) * v5);
                goto LABEL_1039;
            case 0x153:
                v32 = v11 + v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1560);
                v32 = v11 + v5 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1880) + 4i64 * (((unsigned __int8)v5 ^ 0x22) & 0xB3));
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 248) + 1696i64);
                goto LABEL_1039;
            case 0x154:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 520) + 1096i64) + 8i64 * ((unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1888) + 1856i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 2)), 6) & 0xAC)) + 1904i64);
                goto LABEL_1039;
            case 0x155:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 1784i64) + 1640i64) + 1232i64);
                v12 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 1632) ^ 0x759179F8) - FuckEnc::CacheRead<_DWORD>(v10 + 1648);
                goto LABEL_1038;
            case 0x156:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 736);
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 1584) * ((FuckEnc::CacheRead<_DWORD>(v4 + 648) + (FuckEnc::CacheRead<_DWORD>(v4 + 1248) >> 26)) & 0xFFFFFFE3);
                goto LABEL_1039;
            case 0x157:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1176) + 1072i64, &v32, v5, v4);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 976);
                goto LABEL_1039;
            case 0x158:
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 192) + 104i64) + 1912i64) ^ v11;
                v12 = __ROR4__(v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 8i64 * ((unsigned __int8)v5 & 0xD4)) + 392i64), 40);
                goto LABEL_1038;
            case 0x159:
                v32 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1904)) - 595863463;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1216);
                v32 = __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(v10 + 920));
                v12 = v32 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1312) + 64i64);
                goto LABEL_1038;
            case 0x15A:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1696);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 8i64 * (unsigned __int8)__ROR4__(v5, 16)) + 456i64, &v32, v5, v4);
                goto LABEL_1039;
            case 0x15B:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1320) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 248) + 1176i64) + 1384i64, &v32, v5, v4);
                goto LABEL_1039;
            case 0x15C:
                v32 = v11 + v5 * FuckEnc::CacheRead<_DWORD>(v4 + 1256) * (v5 ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 1048) + 1287913229));
                goto LABEL_1039;
            case 0x15D:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4) + 360i64, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 448) + 8i64 * ((unsigned __int8)v5 & 0xE8)));
                goto LABEL_1039;
            case 0x15E:
                Calls::FastCall(v4 + 1792, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 8i64 * ((unsigned __int8)v5 ^ 0x8Eu)) + 1048i64) & 0x84)));
                goto LABEL_1039;
            case 0x15F:
                v32 = __ROR4__(__ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 600)), 255);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1392);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v10 + 920) + FuckEnc::CacheRead<_DWORD>(v4 + 1576);
                goto LABEL_1039;
            case 0x160:
                v32 = __ROL4__(v11, ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 592i64) | 0x12);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1888) + 472i64) + 1368i64);
                goto LABEL_1038;
            case 0x161:
                v32 = v11 - 1015430516 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 8i64 * (v5 & 8)) + 920i64);
                v12 = v32 + ~(FuckEnc::CacheRead<_DWORD>(v4 + 648) | 0x17);
                goto LABEL_1038;
            case 0x162:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1232);
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1432) + 8i64 * ((unsigned __int8)v5 & 0xA6)) + 712i64);
                v32 = __ROL4__(v32, FuckEnc::CacheRead<_BYTE>(v4 + 1704) + 89);
                goto LABEL_1039;
            case 0x163:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 336);
                v32 = __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(v4 + 720));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1216) + 1832i64);
                v12 = v32 ^ ~FuckEnc::CacheRead<_DWORD>(v10 + 1912);
                goto LABEL_1038;
            case 0x164:
                v32 = ~v11;
                v12 = ~v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1432) + 8i64 * (unsigned __int8)(102 * v5)) + 1216i64) + 736i64) + 568i64) + 4i64 * ((unsigned __int8)__ROL4__(v5, 21) & 0xA1));
                goto LABEL_1038;
            case 0x165:
                v32 = v11 + v5;
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1632) ^ (v11 + v5);
                v32 = __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 8i64 * ((unsigned __int8)v5 ^ 0x58u)) + 1888i64) + 1368i64));
                goto LABEL_1039;
            case 0x166:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1584) ^ v11 ^ 0xC9945827;
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1584);
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 8i64 * (unsigned __int8)(-75 * v5)) + 992i64);
                goto LABEL_1039;
            case 0x167:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1176) + 1648i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1128);
                v32 += FuckEnc::CacheRead<_DWORD>(v10 + 1248);
                v12 = v32 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1904) + 1981074379);
                goto LABEL_1038;
            case 0x168:
                v32 = v11 ^ ~(FuckEnc::CacheRead<_DWORD>(v4 + 272) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 1456i64) + 448i64) + 8i64 * (v5 & 0x56)) + 1704i64));
                goto LABEL_1039;
            case 0x169:
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 8i64 * ((unsigned __int8)v5 & 0x93)) + 328i64) + 320i64) ^ v11;
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 800i64) + 1320i64);
                goto LABEL_1038;
            case 0x16A:
                v16 = FuckEnc::CacheRead<_QWORD>(v4 + 104);
                v13 = v5 & 0x7B;
                v15 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 576) + 208i64);
                goto LABEL_24;
            case 0x16B:
                v32 = ((FuckEnc::CacheRead<_DWORD>(v4 + 1040) ^ v11 ^ 0xC3018944) + 1640433456) ^ 0xF97D6FA4;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 1272i64);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v10 + 384);
                goto LABEL_1038;
            case 0x16C:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 648);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1200) + 4i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 1248i64) & 0x60));
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 64) << 30;
                goto LABEL_1039;
            case 0x16D:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1584);
                v27 = v32 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 8i64 * (v5 & 9)) + 1096i64) + 8i64 * ((unsigned __int8)v5 ^ 0xBFu)) + 648i64);
                goto LABEL_1037;
            case 0x16E:
                v32 = v11 - 799303965;
                v32 = v5 ^ (v11 - 799303965 + FuckEnc::CacheRead<_DWORD>(v4 + 920));
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 240i64) + 4i64 * (v5 & 0x3D));
                goto LABEL_1039;
            case 0x16F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1088);
                v12 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 576) + 1392i64) + 1552i64) + 4i64 * ((unsigned __int8)(45 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 112) + 8i64 * ((unsigned __int8)v5 & 0xF6)) + 1040i64)) & 0xEB)));
                goto LABEL_1038;
            case 0x170:
                v32 = v5 ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1504);
                v32 = (v5 ^ v11) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1232) + 392i64);
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 656) + 336i64);
                goto LABEL_1039;
            case 0x171:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1128);
                v32 = v11 + ~(((FuckEnc::CacheRead<_DWORD>(v4 + 336) - 2123903418) & 0xFFFFFFF0) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1552) + 4i64 * ((unsigned __int8)v5 & 0xF4)));
                goto LABEL_1039;
            case 0x172:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1960);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1888) + 1176i64);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1608) + 8i64 * ((unsigned __int8)(10 * v5) & 0xDB)) + 264i64);
                goto LABEL_1038;
            case 0x173:
                v32 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 976) ^ v5);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v4 + 1576) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 888) + 800i64) + 336i64);
                goto LABEL_1038;
            case 0x174:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 8i64 * (unsigned __int8)__ROL4__(v5, 22)) + 1312i64);
                v32 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 320) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 560) + 920i64));
                goto LABEL_1039;
            case 0x175:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 56);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1744) + 1440i64, &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1312));
                goto LABEL_1039;
            case 0x176:
                v32 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1904) - 677626365);
                v32 += v5 + FuckEnc::CacheRead<_DWORD>(v4 + 1304);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 664i64);
                goto LABEL_1039;
            case 0x177:
                v32 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 760) + 264i64) ^ v11) - 1023331965;
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 264) ^ 0x83D7E333;
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 384);
                goto LABEL_1039;
            case 0x178:
                v12 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 56) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 216) + 4i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1088) + 1200i64) + 4i64 * (unsigned __int8)(-103 * v5)) & 0xC8)) & 0xEF);
                goto LABEL_1038;
            case 0x179:
                v13 = (unsigned __int8)v5 & 0xFC;
                v15 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 408) + 1432i64) + 8i64 * ((unsigned __int8)v5 ^ 0xE4u)) + 1848i64);
                goto LABEL_23;
            case 0x17A:
                v32 = v5 ^ v11;
                v32 = (v5 ^ v11 ^ (177013107 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1104) + 8i64 * (unsigned __int8)(46 * v5)) + 800i64) + 1576i64))) + 526149685;
                goto LABEL_1039;
            case 0x17B:
                Calls::FastCall(v4 + 40, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 1432i64) + 8i64 * (((unsigned __int8)v5 ^ 0x40) & 0xC4)) + 1872i64) + 848i64));
                goto LABEL_1039;
            case 0x17C:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 928) ^ 0x2Fu)) + 576i64);
                Calls::FastCall(v4 + 696, &v32, v5, v10);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1304);
                goto LABEL_1039;
            case 0x17D:
                v32 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 1376) + 8);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1648);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v4 + 1368) + 1134190245;
                goto LABEL_1038;
            case 0x17E:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1744) + 760i64);
                Calls::FastCall(v10 + 728, &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1312));
                goto LABEL_1039;
            case 0x17F:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 1760i64) + 8i64 * (v5 & 2)) + 952i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 17)) + 760i64);
                v12 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 1248));
                goto LABEL_1038;
            case 0x180:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 800i64);
                v32 = FuckEnc::CacheRead<_DWORD>(v10 + 1368) ^ v11;
                v32 = ~(v32 + (FuckEnc::CacheRead<_DWORD>(v4 + 8) ^ v5));
                goto LABEL_1039;
            case 0x181:
                v32 = v11 ^ FuckEnc::CacheRead<unsigned __int16>(v4 + 338);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 560);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1272) + 1064i64) + 1584i64) ^ 0x7F57B506;
                goto LABEL_1039;
            case 0x182:
                v23 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1872) + 664i64) * v5);
                v32 = v23;
                v24 = (unsigned __int8)(-104 * v5);
                v25 = FuckEnc::CacheRead<_QWORD>(v4 + 1784);
            LABEL_101:
                v12 = v23 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v25 + 896) + 4 * v24);
                goto LABEL_1038;
            case 0x183:
                v32 = ~(v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 992i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1872) + 896i64) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1584) & 0x5B)));
                goto LABEL_1039;
            case 0x184:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1320);
                v32 ^= (FuckEnc::CacheRead<_DWORD>(v4 + 320) >> 22) ^ 0xC3018944;
                v32 -= 1449677469 * FuckEnc::CacheRead<_DWORD>(v4 + 1576);
                goto LABEL_1039;
            case 0x185:
                v32 = v5 ^ v11;
                v32 = (v5 ^ v11) - FuckEnc::CacheRead<_DWORD>(v4 + 712);
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 1040);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 800);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v10 + 384);
                goto LABEL_1038;
            case 0x186:
                Calls::FastCall(v4 + 456, &v32, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 1832i64);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1904);
                goto LABEL_1039;
            case 0x187:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1312) + 1784i64) + 768i64) + 8i64 * (unsigned __int8)(-74 * v5)) + 288i64);
                Calls::FastCall(v4 + 1160, &v32, v5, v10);
                goto LABEL_1039;
            case 0x188:
                v32 = v5 ^ (v11 + ~(-878685703 * (FuckEnc::CacheRead<_DWORD>(v4 + 1368) + ((unsigned int)0x11CEE9FA ^ FuckEnc::CacheRead<_DWORD>(v4 + 320)))));
                goto LABEL_1039;
            case 0x189:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1640) + 1680i64, &v32, v5, v4);
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 1256);
                goto LABEL_1039;
            case 0x18A:
                v32 = v11 ^ 0x96CAB658;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 432i64);
                Calls::FastCall(v10 + 1672, &v32, v5, v4);
                goto LABEL_1039;
            case 0x18B:
                v12 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1416) + 1696i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 120) + 8i64 * (unsigned __int8)(-78 * v5)) + 240i64) + 4i64 * ((unsigned __int8)v5 ^ 0x1Cu)));
                goto LABEL_1038;
            case 0x18C:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 520);
                v12 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v10 + 1320) * ~FuckEnc::CacheRead<_BYTE>(v4 + 928));
                goto LABEL_1038;
            case 0x18D:
                v12 = v11 - 1740821405 * FuckEnc::CacheRead<_DWORD>(v4 + 1320) * (FuckEnc::CacheRead<_DWORD>(v4 + 928) + ~(1435797695 * FuckEnc::CacheRead<_DWORD>(v4 + 392)));
                goto LABEL_1038;
            case 0x18E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 520);
                v32 = FuckEnc::CacheRead<_DWORD>(v10 + 1912) ^ v11;
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 928) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 1320i64) + 1;
                goto LABEL_1039;
            case 0x18F:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1904) ^ v11;
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 776) + 8i64 * ((unsigned __int8)(89 * v5) & 0x89)) + 472i64) + 624i64) + 8i64 * ((unsigned __int8)v5 ^ 0x95u)) + 1960i64);
                goto LABEL_1039;
            case 0x190:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 408) + 1176i64);
                v32 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1304) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1784) + 1912i64));
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 920);
                goto LABEL_1039;
            case 0x191:
                Calls::FastCall(v4 + 1016, &v32, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 888) + 1128i64);
                v32 = __ROL4__(v32, FuckEnc::CacheRead<_DWORD>(v10 + 712));
                goto LABEL_1039;
            case 0x192:
                v32 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 1320i64) ^ v11) - 771800708;
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 976) * (FuckEnc::CacheRead<_DWORD>(v4 + 1256) - 886766324);
                goto LABEL_1039;
            case 0x193:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 616i64);
                Calls::FastCall(v4 + 480, &v32, v5, v10);
                goto LABEL_1039;
            case 0x194:
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1544) + 336i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1216) + 616i64);
                v32 += FuckEnc::CacheRead<_DWORD>(v10 + 320);
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 928);
                goto LABEL_1039;
            case 0x195:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 1064i64) + 888i64);
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 432) + 1096i64) + 8i64 * (unsigned __int8)(-20 * FuckEnc::CacheRead<_BYTE>(v4 + 56))) + 1696i64);
                goto LABEL_1039;
            case 0x196:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1256) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 520);
                v32 -= FuckEnc::CacheRead<_DWORD>(v10 + 600);
                Calls::FastCall(v4 + 1816, &v32, v5, v4);
                goto LABEL_1039;
            case 0x197:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 384) ^ v11;
                v32 = (v32 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 560) + 216i64) + 4i64 * ((-2 * (_BYTE)v5) & 3))) ^ 0xA3287568;
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 336);
                goto LABEL_1039;
            case 0x198:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * ((-45 * (_BYTE)v5) & 0x46)) + 384i64);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1872) + 904i64) + 1200i64) + 4i64 * (~(_BYTE)v5 & 0x50));
                goto LABEL_1039;
            case 0x199:
                v32 = v11 ^ 0x7AD2FD95;
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1376) + (v11 ^ 0x7AD2FD95) + 1;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 1544i64);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v10 + 264);
                goto LABEL_1039;
            case 0x19A:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 432) + 336i64);
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 656) + 896i64) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 1376), 13));
                goto LABEL_1039;
            case 0x19B:
                v32 = ~v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 200i64, &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 520));
                goto LABEL_1039;
            case 0x19C:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 56);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1256) ^ 0x62) & 0xE2)) + 1392i64) + 888i64);
                v32 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1856) + 4i64 * (v5 & 0x2C));
                goto LABEL_1039;
            case 0x19D:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 472);
                v12 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(v10 + 720) * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 1696), 11)) + 1280i64) + 8i64 * ((unsigned __int8)(26 * v5) & 0xD8)) + 976i64));
                goto LABEL_1038;
            case 0x19E:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1256) ^ v11;
                v12 = v32 - ((FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 112i64) + 8i64 * (v5 & 0x30)) + 1632i64) - (_DWORD)0x12AB39) << 10);
                goto LABEL_1038;
            case 0x19F:
                Calls::FastCall(v4 + 416, &v32, v5, v4);
                v32 += -775749327 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 920i64);
                goto LABEL_1039;
            case 0x1A0:
                Calls::FastCall(v4 + 856, &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1088));
                v32 = ~v32;
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 648) >> 6;
                goto LABEL_1039;
            case 0x1A1:
                v32 = ~v11;
                v32 = ~v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 8i64 * (__ROR4__(v5, 18) & 0x4D)) + 1744i64) + 1584i64);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 320);
                goto LABEL_1039;
            case 0x1A2:
                v32 = v11 + 1814380223;
                v32 = v11 + 1814380223 - (FuckEnc::CacheRead<_DWORD>(v4 + 1912) & 0xFFFFFFE0 | 7);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 904);
                v32 += FuckEnc::CacheRead<_DWORD>(v10 + 8);
                goto LABEL_1039;
            case 0x1A3:
                v32 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 8i64 * (unsigned __int8)(79 * v5)) + 976i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 272) ^ 0x3Du)) + 320i64));
                goto LABEL_1039;
            case 0x1A4:
                v32 = v5 + FuckEnc::CacheRead<_DWORD>(v4 + 664) + (FuckEnc::CacheRead<_DWORD>(v4 + 264) ^ 0xA00F240) + v11;
                v12 = FuckEnc::CacheRead<_DWORD>(v4 + 592) ^ v32;
                goto LABEL_1038;
            case 0x1A5:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1544) + 1064i64);
                v32 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 592));
                Calls::FastCall(v4 + 1816, &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 232));
                goto LABEL_1039;
            case 0x1A6:
                v32 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1960) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 1576i64));
                v32 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 1960i64);
                goto LABEL_1039;
            case 0x1A7:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1176);
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 320);
                v32 += ~(FuckEnc::CacheRead<_DWORD>(v4 + 336) ^ (-771800821 * FuckEnc::CacheRead<_DWORD>(v4 + 1696)));
                goto LABEL_1039;
            case 0x1A8:
                v32 = v11 + 1131792294 + FuckEnc::CacheRead<_DWORD>(v4 + 664);
                v32 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1176) + 1544i64) + 1560i64) + 384i64) ^ v32) + 1803111004;
                goto LABEL_1039;
            case 0x1A9:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 664) ^ v11;
                v12 = __ROR4__(v32, FuckEnc::CacheRead<_BYTE>(v4 + 1040) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * ((-3 * (FuckEnc::CacheRead<_BYTE>(v4 + 1256) ^ (unsigned __int8)v5)) & 0x19)) + 1696i64));
                goto LABEL_1038;
            case 0x1AA:
                v32 = ~(v11 + FuckEnc::CacheRead<_DWORD>(v4 + 976));
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 264);
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 1904) * v5;
                goto LABEL_1039;
            case 0x1AB:
                Calls::FastCall(v4 + 32, &v32, v5, v4);
                Calls::FastCall(v4 + 1184, &v32, v5, v4);
                goto LABEL_1039;
            case 0x1AC:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 976) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 8i64 * (v5 & 0x5D)) + 1216i64);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1608) + 8i64 * ((unsigned __int8)__ROR4__(v5, 24) & 0xAF)) + 1912i64);
                goto LABEL_1038;
            case 0x1AD:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1704);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1176) + 760i64);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v10 + 992) + FuckEnc::CacheRead<_DWORD>(v4 + 1304);
                goto LABEL_1039;
            case 0x1AE:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 408);
                v32 = FuckEnc::CacheRead<_DWORD>(v10 + 720) ^ v11;
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1088) + 1416i64) + 768i64) + 8i64 * ((unsigned __int8)v5 ^ 0xE3u)) + 1648i64);
                goto LABEL_1038;
            case 0x1AF:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 944);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 208) + 8i64 * (unsigned __int8)(74 * v5), &v32, v5, v4);
                v32 = ~v32;
                goto LABEL_1039;
            case 0x1B0:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 264);
                v32 = __ROL4__(v32, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1232) + 544i64) + 4i64 * ((unsigned __int8)v5 & 0x90)));
                v12 = v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 1304) ^ v32;
                goto LABEL_1038;
            case 0x1B1:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 8i64 * (unsigned __int8)(32 * FuckEnc::CacheRead<_DWORD>(v4 + 8))) + 248i64);
                Calls::FastCall(v4 + 1184, &v32, v5, v10);
                v32 = ~v32;
                goto LABEL_1039;
            case 0x1B2:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 1392i64) + 520i64);
                v32 = v11 ^ FuckEnc::CacheRead<_DWORD>(v10 + 600) ^ (520346638 * FuckEnc::CacheRead<_DWORD>(v4 + 336));
                goto LABEL_1039;
            case 0x1B3:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 776) + 8i64 * (v5 & 0x22)) + 576i64) + 944i64) + 1600i64) + 1872i64);
                v12 = FuckEnc::CacheRead<_DWORD>(v10 + 64) ^ v11;
                goto LABEL_1038;
            case 0x1B4:
                v32 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 1088i64) + 1584i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 432);
                v32 = __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(v10 + 64));
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v4 + 712);
                goto LABEL_1038;
            case 0x1B5:
                v32 = v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 600) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1832) + 984i64);
                v12 = (_DWORD)0xD37FF0F + __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(v10 + 712));
                goto LABEL_1038;
            case 0x1B6:
                v32 = __ROL4__(v11, 61);
                v32 = (v32 + FuckEnc::CacheRead<_DWORD>(v4 + 648)) ^ 0xFE5419ED;
                Calls::FastCall(v4 + 176, &v32, v5, v4);
                goto LABEL_1039;
            case 0x1B7:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 384) + 1) & 0x16)) + 1136i64, &v32, v5, v4);
                goto LABEL_1039;
            case 0x1B8:
                v32 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 192) + 1256i64);
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 1904);
                v32 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1392) + 720i64);
                goto LABEL_1039;
            case 0x1B9:
                v32 = __ROL4__(v11, ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 1912i64));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1232) + 848i64);
                v12 = __ROL4__(v32, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1200) + 4i64 * (__ROR4__(v5, 20) & 0xE6)));
                goto LABEL_1038;
            case 0x1BA:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 320) + ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1504) + 592i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 1304) << 26));
                goto LABEL_1039;
            case 0x1BB:
                Calls::FastCall(v4 + 360, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * (unsigned __int8)(29 * v5)) + 288i64) + 432i64));
                goto LABEL_1039;
            case 0x1BC:
                Calls::FastCall(v4 + 696, &v32, v5, v4);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 568) + 4i64 * (__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 1376) << 23, 31) & 0x75));
                goto LABEL_1039;
            case 0x1BD:
                v32 = (v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1640) + 656i64) + 1368i64)) ^ 0x99F1CB9E;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1832);
                v32 += FuckEnc::CacheRead<_DWORD>(v10 + 920) + 1;
                goto LABEL_1039;
            case 0x1BE:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1064) + 432i64);
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 296) + 8i64 * (((unsigned __int8)v5 ^ 0x14) & 0x36)) + 112i64) + 8i64 * (v5 & 0x12)) + 544i64) + 4i64 * (~(_BYTE)v5 & 0x45));
                goto LABEL_1039;
            case 0x1BF:
                v32 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1304));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 576) + 80i64);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1248) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1416) + 8i64);
                goto LABEL_1039;
            case 0x1C0:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 336);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 192);
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1880) + 4i64 * (unsigned __int8)(72 * v5));
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 888) + 1048i64);
                goto LABEL_1039;
            case 0x1C1:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 928);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 8i64 * (v5 & 0x5A)) + 448i64) + 8i64 * (v5 & 0x30)) + 1784i64) + 1912i64);
                goto LABEL_1039;
            case 0x1C2:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 80) + 1832i64) + 648i64) & 0x77)) + 616i64);
                Calls::FastCall(v4 + 1072, &v32, v5, v10);
                goto LABEL_1039;
            case 0x1C3:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1696) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 232) + 1432i64) + 8i64 * (((unsigned __int8)v5 ^ 0xE7) & 0x79)) + 248i64);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v10 + 1648);
                goto LABEL_1038;
            case 0x1C4:
                v32 = (v11 ^ ((FuckEnc::CacheRead<_DWORD>(v4 + 992) ^ 0x3C79E2D) + FuckEnc::CacheRead<_DWORD>(v4 + 720) + 1726318555)) - v5 - 1104281409;
                goto LABEL_1039;
            case 0x1C5:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 8i64 * ((-18 * (_BYTE)v5) & 0x53)) + 1560i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 1520) + 8i64 * ((unsigned __int8)v5 ^ 0x68u), &v32, v5, v4);
                goto LABEL_1039;
            case 0x1C6:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 664);
                v12 = v32 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1760) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1960) & 0x5C)) + 1432i64) + 8i64 * ((unsigned __int8)v5 & 0xD9)) + 976i64);
                goto LABEL_1038;
            case 0x1C7:
                v32 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 80) + 1888i64) + 648i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1744) + 1600i64);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1960);
                goto LABEL_1039;
            case 0x1C8:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1088);
                Calls::FastCall(v10 + 528, &v32, v5, v4);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 592i64);
                goto LABEL_1039;
            case 0x1C9:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 320);
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 1376);
                v32 = (v32 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1560) + 1256i64)) + 771800637;
                goto LABEL_1039;
            case 0x1CA:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 760) + 600i64) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 8i64 * ((unsigned __int8)(-17 * v5) & 0xCF)) + 264i64) + 1);
                goto LABEL_1039;
            case 0x1CB:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 8i64 * (v5 & 0x50)) + 1232i64);
                v32 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 320) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 144) + 1880i64) + 4i64 * ((unsigned __int8)v5 & 0xB3)));
                goto LABEL_1039;
            case 0x1CC:
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 1912i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 848);
                v32 = ~__ROR4__(v32, FuckEnc::CacheRead<_DWORD>(v10 + 992));
                v12 = FuckEnc::CacheRead<_DWORD>(v4 + 1696) ^ v32;
                goto LABEL_1038;
            case 0x1CD:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 944);
                v32 = FuckEnc::CacheRead<_DWORD>(v10 + 336) ^ v11;
                v12 = v32 - 788555165 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 600i64) - 1482936438;
                goto LABEL_1038;
            case 0x1CE:
                v32 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1696));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1720);
                Calls::FastCall(v4 + 416, &v32, v5, v10);
                v32 -= v5;
                goto LABEL_1039;
            case 0x1CF:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 120) + 8i64 * ((unsigned __int8)v5 & 0xAA)) + 1664i64) + 8i64 * ((unsigned __int8)v5 ^ 0x38u), &v32, v5, v4);
                goto LABEL_1039;
            case 0x1D0:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1256);
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 992);
                v12 = v32 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 8i64 * (unsigned __int8)__ROR4__(v5, 9)) + 560i64) + 320i64);
                goto LABEL_1038;
            case 0x1D1:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1416);
                Calls::FastCall(v4 + 1672, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 888) + 800i64) + 440i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 30)));
                goto LABEL_1039;
            case 0x1D2:
                v32 = v11 - 409617762;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1888);
                v32 = v11 - 409617762 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 904) + 1960i64) ^ 0xC43CE288);
                goto LABEL_1039;
            case 0x1D3:
                v32 = v11 ^ 0xD331055C;
                v32 = (v11 ^ 0xD331055C) + ((FuckEnc::CacheRead<_DWORD>(v4 + 664) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1176) + 1880i64) + 4i64 * ((unsigned __int8)v5 & 0x86))) ^ 0x9717EE14);
                goto LABEL_1039;
            case 0x1D4:
                v32 = (FuckEnc::CacheRead<_DWORD>(v4 + 8) ^ v11 ^ 0xA77D063F) + v5;
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 664) + 1;
                goto LABEL_1039;
            case 0x1D5:
                v32 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 1704) + 1) * (FuckEnc::CacheRead<_DWORD>(v4 + 1704) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 264) * v5));
                goto LABEL_1039;
            case 0x1D6:
                v32 = v11 - 346148554;
                v13 = __ROL4__(v5, 6) & 0x66;
                v15 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1416) + 464i64);
                goto LABEL_23;
            case 0x1D7:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 80);
                v32 = v11 - 667764974 * FuckEnc::CacheRead<_DWORD>(v10 + 1304);
                v32 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1560) + 336i64);
                goto LABEL_1039;
            case 0x1D8:
                v32 = v11 ^ 0x1C9FC02E;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 248) + 1392i64);
                v32 = FuckEnc::CacheRead<_DWORD>(v10 + 592) ^ v11 ^ 0x1C9FC02E;
                v12 = v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 720) ^ v32;
                goto LABEL_1038;
            case 0x1D9:
                Calls::FastCall(v4 + 808, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 144i64) + 1392i64) + 1888i64));
                goto LABEL_1039;
            case 0x1DA:
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 736) + 1256i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 8i64 * ((unsigned __int8)v5 ^ 0x41u)) + 1088i64);
                v32 = (v32 + FuckEnc::CacheRead<_DWORD>(v10 + 56)) ^ 0x9219D495;
                goto LABEL_1039;
            case 0x1DB:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 8) + 1995750868;
                v32 ^= (FuckEnc::CacheRead<_DWORD>(v4 + 1696) + 2014609521) * (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 1376));
                goto LABEL_1039;
            case 0x1DC:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 1104i64) + 8i64 * (((unsigned __int8)v5 ^ 2) & 0xC2)) + 1232i64) + 1440i64, &v32, v5, v4);
                goto LABEL_1039;
            case 0x1DD:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1312) + 72i64, &v32, v5, v4);
                v32 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 232) + 928i64);
                goto LABEL_1039;
            case 0x1DE:
                v32 = v11 ^ 0xB2C30131;
                v32 = v11 ^ 0xB2C30131 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 888) + 1048i64);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 712) ^ 0x4FD0FF73;
                goto LABEL_1039;
            case 0x1DF:
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 408) + 8i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 472);
                v32 += FuckEnc::CacheRead<_DWORD>(v10 + 928) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1888) + 600i64);
                goto LABEL_1039;
            case 0x1E0:
                v32 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1176) + 1904i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 192) + 1888i64) + 616i64) + 1880i64) + 4i64 * (unsigned __int8)(10 * v5));
                goto LABEL_1039;
            case 0x1E1:
                v32 = v11 + ~((FuckEnc::CacheRead<_DWORD>(v4 + 1912) & 0xFFFFFFE4) + 1318027591);
                v32 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1560) + 1704i64);
                goto LABEL_1039;
            case 0x1E2:
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1416) + 1632i64), 8)) + 112i64) + 8i64 * (v5 & 0x64)) + 272i64);
                goto LABEL_1038;
            case 0x1E3:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 384);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 288i64) + 1256i64);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 432) + 1320i64);
                goto LABEL_1039;
            case 0x1E4:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 144);
                v12 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 520) + 1176i64) + 1304i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 64) & 0xBA)) + 1632i64));
                goto LABEL_1038;
            case 0x1E5:
                v32 = v11 ^ 0xA13BB912;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1232);
                Calls::FastCall(v4 + 1016, &v32, v5, v10);
                goto LABEL_1039;
            case 0x1E6:
                Calls::FastCall(v4 + 1136, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1392) + 768i64) + 8i64 * (((unsigned __int8)v5 ^ 6) & 0x97)) + 1128i64));
                goto LABEL_1039;
            case 0x1E7:
                Calls::FastCall(v4 + 528, &v32, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 1640i64);
                v32 -= FuckEnc::CacheRead<_DWORD>(v10 + 64);
                goto LABEL_1039;
            case 0x1E8:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 8i64 * ((unsigned __int8)v5 & 0x89)) + 520i64);
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1416) + 1416i64) + 1528i64) + 4i64 * ((unsigned __int8)v5 ^ 0x3Bu));
                goto LABEL_1039;
            case 0x1E9:
                v32 = v11 - 1189709561;
                v32 = v11 - 1189709561 + FuckEnc::CacheRead<_DWORD>(v4 + 976);
                v12 = v32 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 8i64 * ((unsigned __int8)v5 & 0x9B)) + 1176i64) + 1904i64);
                goto LABEL_1038;
            case 0x1EA:
                v32 = v11 ^ (v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 928i64));
                v32 ^= -1819764082 * FuckEnc::CacheRead<_DWORD>(v4 + 1912);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v4 + 1256);
                goto LABEL_1038;
            case 0x1EB:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 904);
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1640) + 1552i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 18)) - FuckEnc::CacheRead<_DWORD>(v10 + 1704) + 1;
                goto LABEL_1039;
            case 0x1EC:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 888);
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1960);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 600);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 320i64) ^ v32;
                goto LABEL_1038;
            case 0x1ED:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 888) + 976i64);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 1256i64);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 888) + 648i64) ^ v32;
                goto LABEL_1038;
            case 0x1EE:
                v32 = v11 ^ ((FuckEnc::CacheRead<_DWORD>(v4 + 920) ^ v5) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * ((unsigned __int8)v5 & 0xDC)) + 1784i64) + 1704i64));
                goto LABEL_1039;
            case 0x1EF:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 600) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 1720i64);
                Calls::FastCall(v10 + 88, &v32, v5, v4);
                goto LABEL_1039;
            case 0x1F0:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 384), 1)) + 1776i64) + 8i64 * ((unsigned __int8)v5 & 0xCD), &v32, v5, v4);
                goto LABEL_1039;
            case 0x1F1:
                Calls::FastCall(v4 + 1840, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 520) + 104i64) + 408i64) + 1608i64) + 8i64 * (__ROR4__(v5, 7) & 0xEF)));
                goto LABEL_1039;
            case 0x1F2:
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1504) + 1216i64) + 1936i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 22)) + 1128i64) + 1648i64) * v5;
                goto LABEL_1038;
            case 0x1F3:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 712);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 984);
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 216) + 4i64 * (v5 & 0x11));
                v12 = __ROL4__(v32, FuckEnc::CacheRead<_DWORD>(v4 + 1704)) - 1384178461;
                goto LABEL_1038;
            case 0x1F4:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 1872i64) + 1040i64);
                Calls::FastCall(v4 + 1160, &v32, v5, v4);
                goto LABEL_1039;
            case 0x1F5:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 320) * v5;
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 976) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1856) + 4i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1248) ^ 0x42) & 0xD2));
                goto LABEL_1039;
            case 0x1F6:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1248);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 560) + 248i64);
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1104) + 8i64 * ((unsigned __int8)v5 ^ 0x8Du)) + 64i64);
                goto LABEL_1039;
            case 0x1F7:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1960);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 1488i64, &v32, v5, v4);
                goto LABEL_1039;
            case 0x1F8:
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 272i64) ^ v11;
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 904i64) + 192i64) + 56i64);
                goto LABEL_1038;
            case 0x1F9:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 736) + 1928i64);
                v32 = v11 ^ FuckEnc::CacheRead<_DWORD>(v10 + 600) ^ FuckEnc::CacheRead<_DWORD>(v4 + 1648);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1376);
                goto LABEL_1039;
            case 0x1FA:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 328);
                v32 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1176) + 1320i64) * (v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 1048) ^ FuckEnc::CacheRead<_DWORD>(v10 + 1632)));
                goto LABEL_1039;
            case 0x1FB:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1456);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v10 + 64) & 0x6E)) + 1768i64, &v32, v5, v4);
                goto LABEL_1039;
            case 0x1FC:
                v32 = (unsigned int)0x14CD1E4 ^ v11;
                v32 = __ROL4__((unsigned int)0x14CD1E4 ^ v11, FuckEnc::CacheRead<_DWORD>(v4 + 600));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 192);
                v32 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 848) + 1376i64);
                goto LABEL_1039;
            case 0x1FD:
                v32 = (FuckEnc::CacheRead<_DWORD>(v4 + 8) ^ v11) - 2066380389;
                v32 ^= ~(301262327 * FuckEnc::CacheRead<_DWORD>(v4 + 992));
                v32 = __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(v4 + 1304));
                goto LABEL_1039;
            case 0x1FE:
                v32 = __ROL4__(v11, 112);
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 1632);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1872);
                Calls::FastCall(v4 + 368, &v32, v5, v10);
                goto LABEL_1039;
            case 0x1FF:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1912) - 1825109201;
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 1648) << 28;
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 384);
                goto LABEL_1039;
            case 0x200:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 720);
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 720) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1368) - 764719983);
                v12 = __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(v4 + 1648));
                goto LABEL_1038;
            case 0x201:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 1384i64, &v32, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 848);
                v32 += FuckEnc::CacheRead<_DWORD>(v10 + 1912);
                goto LABEL_1039;
            case 0x202:
                v32 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 1584) | 0x15);
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 1040) << 22;
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 1960);
                goto LABEL_1039;
            case 0x203:
                Calls::FastCall(v4 + 1792, &v32, v5, FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * ((unsigned __int8)v5 & 0x80)) + 1432i64));
                goto LABEL_1039;
            case 0x204:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1088);
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1424) + 8i64 * (unsigned __int8)(-72 * v5)) + 1248i64);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 656) + 848i64) + 976i64);
                goto LABEL_1038;
            case 0x205:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 920) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1128);
                Calls::FastCall(v10 + 1488, &v32, v5, v4);
                goto LABEL_1039;
            case 0x206:
                v32 = v11 ^ 0x38B9DC17;
                v32 = (v11 ^ 0x38B9DC17) - FuckEnc::CacheRead<_DWORD>(v4 + 664);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1432) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1872) + 392i64), 17)) + 8i64) ^ v32;
                goto LABEL_1038;
            case 0x207:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 760);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 448) + 8i64 * ((unsigned __int8)v5 ^ 0x7Au)) + 1072i64, &v32, v5, v10);
                goto LABEL_1039;
            case 0x208:
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * (((unsigned __int8)v5 ^ 0x68) & 0xEE)) + 664i64) ^ v11;
                v12 = __ROL4__(v32 - (FuckEnc::CacheRead<_DWORD>(v4 + 320) & 0xFFFFFFEA) - v5, 65);
                goto LABEL_1038;
            case 0x209:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1632) + ~(FuckEnc::CacheRead<_DWORD>(v4 + 648) ^ 0x1B265117);
                v32 = __ROR4__(v32, FuckEnc::CacheRead<_BYTE>(v4 + 1912) ^ v5);
                goto LABEL_1039;
            case 0x20A:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 448) + 8i64 * ((unsigned __int8)(29 * FuckEnc::CacheRead<_BYTE>(v4 + 1584)) & 0xB1)) + 888i64);
                v12 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 768) + 8i64 * (unsigned __int8)__ROL4__(v5, 19)) + 976i64) ^ v11) + 1094512335;
                goto LABEL_1038;
            case 0x20B:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 320);
                Calls::FastCall(v4 + 200, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 448) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 992) & 0x45)));
                goto LABEL_1039;
            case 0x20C:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 432) + 1816i64, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1416) + 1456i64));
                goto LABEL_1039;
            case 0x20D:
                v32 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 8));
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1048);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1392) + 848i64);
                v32 += FuckEnc::CacheRead<_DWORD>(v10 + 1912);
                goto LABEL_1039;
            case 0x20E:
                v32 = v11 ^ 0xBA7234E7;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 248) + 72i64, &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1416));
                goto LABEL_1039;
            case 0x20F:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 336) ^ v11;
                v32 += 1361728647 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 544) + 4i64 * ((unsigned __int8)(-124 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 848) + 1960i64) - 115)) ^ 0x62u));
                goto LABEL_1039;
            case 0x210:
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 248) + 896i64) + 4i64 * ((unsigned __int8)v5 ^ 0x2Cu)) ^ v11;
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1432) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1376) & 0x1F)) + 320i64) ^ v32;
                goto LABEL_1038;
            case 0x211:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 8i64 * ((unsigned __int8)__ROR4__(v5, 26) & 0x93)) + 1544i64) + 336i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 664) ^ 0xA721FC5D);
                goto LABEL_1039;
            case 0x212:
                v32 = (FuckEnc::CacheRead<_DWORD>(v4 + 272) ^ v11) - 1297732658;
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 776) + 8i64 * (unsigned __int8)__ROL4__(v5, 5)) + 736i64) + 1696i64);
                goto LABEL_1039;
            case 0x213:
                v32 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 8i64 * (unsigned __int8)(2 * v5)) + 648i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 8i64 * (unsigned __int8)__ROL4__(v5, 15)) + 1256i64));
                goto LABEL_1039;
            case 0x214:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1704) ^ v11 ^ 0xBFE4F3E1;
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 1912) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1104) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1040) & 0x17)) + 1040i64);
                goto LABEL_1039;
            case 0x215:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1504);
                v32 = (FuckEnc::CacheRead<_DWORD>(v10 + 64) ^ v11) - 1841500465;
                v32 = v32 - FuckEnc::CacheRead<_DWORD>(v4 + 264) * v5 - 1149898034;
                goto LABEL_1039;
            case 0x216:
                Calls::FastCall(v4 + 744, &v32, v5, v4);
                v32 = __ROL4__(v32, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1256) & 0x98)) + 600i64));
                goto LABEL_1039;
            case 0x217:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 336);
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 320);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1104) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1704) & 0xA6)) + 1576i64);
                goto LABEL_1039;
            case 0x218:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 64);
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 264) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1176) + 1376i64) + 1177761263);
                goto LABEL_1039;
            case 0x219:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1832) + 712i64);
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 432) + 216i64) + 4i64 * ((unsigned __int8)v5 & 0xB0)) + v32 - 732937702;
                goto LABEL_1039;
            case 0x21A:
                v32 = ~(v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1368) + 460285963));
                v12 = v32 + (FuckEnc::CacheRead<_DWORD>(v4 + 1704) ^ 0xA31AEB24) - 19108904;
                goto LABEL_1038;
            case 0x21B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 144);
                v32 = v11 ^ FuckEnc::CacheRead<_DWORD>(v10 + 720) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 192) + 248i64) + 1784i64) + 1960i64);
                goto LABEL_1039;
            case 0x21C:
                v32 = v11 + 1447803672;
                v32 = v11 + 1447803672 + 511613378 * FuckEnc::CacheRead<_DWORD>(v4 + 1320) + 1;
                v32 -= (unsigned int)0xB3815B5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 1256);
                goto LABEL_1039;
            case 0x21D:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 976);
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 1960);
                v32 -= (FuckEnc::CacheRead<_DWORD>(v4 + 1256) + 1656951089) ^ 0xA057321 | 0x12;
                goto LABEL_1039;
            case 0x21E:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 760);
                v32 = v11 - (FuckEnc::CacheReadPlural<_DWORD>(v4 + 896) & 0xFFFFFFF4);
                v32 += ~FuckEnc::CacheRead<_DWORD>(v4 + 8);
                goto LABEL_1039;
            case 0x21F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 576);
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1936) + 8i64 * (unsigned __int8)__ROL4__(v5, 17)) + 920i64) ^ v11;
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * ((unsigned __int8)__ROR4__(v5, 8) & 0xD3)) + 320i64);
                goto LABEL_1039;
            case 0x220:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1368) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 8i64 * ((unsigned __int8)(-65 * v5) & 0xA3)) + 1792i64, &v32, v5, v4);
                goto LABEL_1039;
            case 0x221:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1904);
                v13 = __ROL4__(v5, 11) & 0xF7;
                v15 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1416) + 1776i64);
                goto LABEL_23;
            case 0x222:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 592) - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1128);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1528) + 4i64 * ((unsigned __int8)v5 ^ 0x1Cu)) - FuckEnc::CacheRead<_DWORD>(v4 + 1576);
                goto LABEL_1038;
            case 0x223:
                v32 = v11 + 734882457;
                v32 = v11 + 734882457 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * ((unsigned __int8)v5 & 0xD2)) + 392i64);
                v32 = v32 - FuckEnc::CacheRead<_DWORD>(v4 + 1320) + 788538907;
                goto LABEL_1039;
            case 0x224:
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1720) + 600i64) - (FuckEnc::CacheRead<_DWORD>(v4 + 8) << 17) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 384i64);
                goto LABEL_1038;
            case 0x225:
                v32 = (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 720)) ^ 0x697C7A01;
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 992);
                v12 = v5 ^ v32 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1304) >> 17);
                goto LABEL_1038;
            case 0x226:
                v32 = v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 264) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1744) + 800i64);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 56) ^ FuckEnc::CacheRead<_DWORD>(v10 + 1912);
                goto LABEL_1039;
            case 0x227:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1744);
                Calls::FastCall(v4 + 88, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 448) + 8i64 * (unsigned __int8)(-55 * v5)) + 192i64));
                goto LABEL_1039;
            case 0x228:
                Calls::FastCall(v4 + 456, &v32, v5, v4);
                v32 = __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 240) + 4i64 * (unsigned __int8)(-102 * FuckEnc::CacheRead<_BYTE>(v4 + 56))));
                goto LABEL_1039;
            case 0x229:
                Calls::FastCall(v4 + 1344, &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 192));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 656);
                v32 = __ROR4__(FuckEnc::CacheRead<_DWORD>(v10 + 992) + v32, 147);
                goto LABEL_1039;
            case 0x22A:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1416) + 1576i64);
                v32 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 80) + 1632i64) ^ v32);
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 392);
                goto LABEL_1039;
            case 0x22B:
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1232) + 392i64) ^ v11;
                v32 += (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 320)) & 0xFFFFFFF9;
                goto LABEL_1039;
            case 0x22C:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 8i64 * ((unsigned __int8)(20 * FuckEnc::CacheRead<_BYTE>(v4 + 1320) * v5) & 0xF5)) + 448i64) + 8i64 * (((unsigned __int8)v5 ^ 0xFB) & 0x1C)) + 240i64) + 4i64 * (unsigned __int8)(59 * v5));
                goto LABEL_1039;
            case 0x22D:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1704);
                v32 += 689416217 * FuckEnc::CacheRead<_DWORD>(v4 + 1696);
                v12 = __ROR4__(v32, 113 * FuckEnc::CacheRead<_BYTE>(v4 + 1248) - 16);
                goto LABEL_1038;
            case 0x22E:
                v16 = FuckEnc::CacheRead<_QWORD>(v4 + 888);
                v13 = (unsigned __int8)__ROL4__(v5, 15);
                v15 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 352i64);
                goto LABEL_24;
            case 0x22F:
                Calls::FastCall(v4 + 744, &v32, v5, v4);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 592);
                v12 = __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(v4 + 1040));
                goto LABEL_1038;
            case 0x230:
                v32 = __ROR4__(v11, (FuckEnc::CacheRead<_DWORD>(v4 + 1696) | 0x1C) + 64);
                v12 = __ROR4__(v32, 52 * ~FuckEnc::CacheRead<_BYTE>(v4 + 1040));
                goto LABEL_1038;
            case 0x231:
                v32 = ~(v11 ^ 0xB2D40F42);
                Calls::FastCall(v4 + 1184, &v32, v5, v4);
                v32 += 1861151653;
                goto LABEL_1039;
            case 0x232:
                v32 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1960) >> 27);
                v12 = ~__ROL4__(v32, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 448) + 8i64 * (unsigned __int8)__ROR4__(v5, 29)) + 1304i64));
                goto LABEL_1038;
            case 0x233:
                v32 = v11 ^ 0xF732D0FF;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 1720i64) + 440i64) + 8i64 * (((unsigned __int8)v5 ^ 0xFE) & 5)) + 1176i64);
                v12 = __ROR4__(v11 ^ 0xF732D0FF, FuckEnc::CacheRead<_DWORD>(v10 + 1704));
                goto LABEL_1038;
            case 0x234:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 656) + 216i64) + 4i64 * ((unsigned __int8)v5 & 0xAD));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1560);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1880) + 4i64 * (unsigned __int8)(-5 * v5)) ^ v32;
                goto LABEL_1038;
            case 0x235:
                v32 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1720) + 272i64) ^ 0x9A259765);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 984i64) + 1928i64);
                v32 += FuckEnc::CacheRead<_DWORD>(v10 + 1912);
                goto LABEL_1039;
            case 0x236:
                v32 = v11 - 1880985542;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 984);
                v32 = v11 - 1880985542 - ((-771800786 * (FuckEnc::CacheRead<_DWORD>(v10 + 1648) ^ 0x9CD0FFFE)) ^ 0x7AD1FF41);
                goto LABEL_1039;
            case 0x237:
                v32 = v11 - 1809429787 + FuckEnc::CacheRead<_DWORD>(v4 + 1376);
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 8i64 * ((-22 * (_BYTE)v5) & 0x37)) + 624i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 4)) + 1368i64);
                goto LABEL_1039;
            case 0x238:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1648) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 760) + 1016i64, &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 80));
                goto LABEL_1039;
            case 0x239:
                Calls::FastCall(v4 + 1728, &v32, v5, v4);
                v32 = (FuckEnc::CacheRead<_DWORD>(v4 + 384) + v32 + 1) ^ 0xCCBF1451;
                goto LABEL_1039;
            case 0x23A:
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 984) + 928i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 432);
                v32 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1856) + 4i64 * ((unsigned __int8)v5 ^ 0xCDu));
                goto LABEL_1039;
            case 0x23B:
                v32 = v5 ^ (v11 - FuckEnc::CacheRead<_DWORD>(v4 + 392));
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 1648) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 328) + 240i64) + 4i64 * (unsigned __int8)(-119 * v5));
                goto LABEL_1039;
            case 0x23C:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 240) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1048) & 0xFD));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 760);
                v12 = v5 ^ __ROR4__(v32, ~FuckEnc::CacheRead<_BYTE>(v10 + 1320));
                goto LABEL_1038;
            case 0x23D:
                v32 = v11 + 932368424;
                v32 = (v11 + 932368424) ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 720);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1504);
                v12 = v32 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 432) + 592i64);
                goto LABEL_1038;
            case 0x23E:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 560) + 664i64);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 656) + 1744i64) + 976i64) ^ 0x6689FA47;
                goto LABEL_1039;
            case 0x23F:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 1304i64);
                v32 += (FuckEnc::CacheRead<_DWORD>(v4 + 592) ^ 0xFFD1FF41) + 971981956;
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1912);
                goto LABEL_1039;
            case 0x240:
                Calls::FastCall(v4 + 1352, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 8i64 * ((13 * (_BYTE)v5) & 0x23)) + 616i64));
                v32 -= v5;
                goto LABEL_1039;
            case 0x241:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 664i64);
                v12 = __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 8i64 * (unsigned __int8)__ROL4__(v5, 27)) + 232i64) + 1128i64) + 1576i64));
                goto LABEL_1038;
            case 0x242:
                v32 = v11 - 1824079477;
                v32 = v11 - 1824079477 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 8i64 * (v5 & 0x5D)) + 1608i64) + 8i64 * (v5 & 0x34)) + 1912i64) ^ 0x6AC30131);
                goto LABEL_1039;
            case 0x243:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1120) + 8i64 * ((unsigned __int8)((FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1872) + 1696i64) ^ 0xC7) + 98) ^ 0x6Eu), &v32, v5, v4);
                goto LABEL_1039;
            case 0x244:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 656) + 520i64);
                v12 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1424) + 8i64 * (((unsigned __int8)v5 ^ 0xF5) & 0xAA)) + 240i64) + 4i64 * ((unsigned __int8)(FuckEnc::CacheRead<_DWORD>(v4 + 648) - 31) & 0xA5)));
                goto LABEL_1038;
            case 0x245:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 800);
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 56) + FuckEnc::CacheRead<_DWORD>(v10 + 320);
                v32 = __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 192) + 64i64));
                goto LABEL_1039;
            case 0x246:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1632) ^ v11 ^ 0xDDD0FF77;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 144);
                v32 = ~(v32 - FuckEnc::CacheRead<_DWORD>(v10 + 8));
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v4 + 648);
                goto LABEL_1038;
            case 0x247:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 720) ^ v11;
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 664) ^ 0x35) & 0xBF)) + 1832i64) + 1376i64);
                goto LABEL_1039;
            case 0x248:
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1760) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 392) & 0xE6)) + 1216i64) + 1424i64) + 8i64 * (unsigned __int8)(50 * v5)) + 768i64) + 8i64 * (unsigned __int8)(114 * v5)) + 664i64);
                goto LABEL_1038;
            case 0x249:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 288);
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 720);
                Calls::FastCall(v4 + 1440, &v32, v5, v4);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 720);
                goto LABEL_1039;
            case 0x24A:
                v12 = v11 - v5 * FuckEnc::CacheRead<_DWORD>(v4 + 1696) * (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 1960));
                goto LABEL_1038;
            case 0x24B:
                v32 = __ROL4__(v11, 66);
                v32 -= 213331263 * FuckEnc::CacheRead<_DWORD>(v4 + 1960);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 944);
                v12 = v32 - (FuckEnc::CacheRead<_DWORD>(v10 + 600) >> 7);
                goto LABEL_1038;
            case 0x24C:
                v32 = ~(v11 + FuckEnc::CacheRead<_DWORD>(v4 + 320) * v5);
                goto LABEL_1039;
            case 0x24D:
                v32 = v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 320) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1832);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v10 + 712) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 1320i64);
                goto LABEL_1039;
            case 0x24E:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1504) + 1256i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1232);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v10 + 1040) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1720) + 992i64);
                goto LABEL_1039;
            case 0x24F:
                v32 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 976) | 0x15);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 408) + 1312i64) + 1104i64) + 8i64 * ((unsigned __int8)v5 & 0x96)) + 1304i64);
                goto LABEL_1039;
            case 0x250:
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 904) + 1272i64) + 384i64) ^ v11;
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 760) + 1200i64) + 4i64 * (__ROR4__(v5, 1) & 0x53)) ^ v32;
                goto LABEL_1038;
            case 0x251:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 520) + 1448i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 18), &v32, v5, v4);
                v32 = __ROL4__(v32, v5);
                goto LABEL_1039;
            case 0x252:
                v32 = v11 + 771800803;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1392) + 32i64, &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1312));
                goto LABEL_1039;
            case 0x253:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 800);
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 8);
                v32 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1104) + 8i64 * ((22 * FuckEnc::CacheRead<_BYTE>(v4 + 1904)) & 0x3C)) + 1320i64);
                goto LABEL_1039;
            case 0x254:
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 264i64) ^ v11;
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 760) + 408i64) + 1224i64) + 4i64 * (unsigned __int8)(127 * v5)) + 1137835841;
                goto LABEL_1038;
            case 0x255:
                v32 = v5 ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 408);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 864) + 8i64 * (unsigned __int8)__ROL4__(v5, 24), &v32, v5, v4);
                goto LABEL_1039;
            case 0x256:
                Calls::FastCall(v4 + 1136, &v32, v5, v4);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 928);
                goto LABEL_1039;
            case 0x257:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1376) ^ v11;
                Calls::FastCall(v4 + 688, &v32, v5, v4);
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 1368) << 25;
                goto LABEL_1039;
            case 0x258:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1696);
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 1320) * FuckEnc::CacheRead<_DWORD>(v4 + 920) * (FuckEnc::CacheRead<_DWORD>(v4 + 1320) - 1023332040);
                goto LABEL_1039;
            case 0x259:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1912);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1720) + 1136i64, &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 408));
                goto LABEL_1039;
            case 0x25A:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1248) & 0x4E)) + 760i64) + 1600i64);
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 64) * FuckEnc::CacheRead<_DWORD>(v10 + 1960);
                goto LABEL_1039;
            case 0x25B:
                Calls::FastCall(v4 + 1464, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 232) + 768i64) + 8i64 * (unsigned __int8)v5));
                goto LABEL_1039;
            case 0x25C:
                v12 = ~FuckEnc::CacheRead<_DWORD>(v4 + 664) + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1432) + 8i64 * (v5 & 0x50)) + 592i64) + v11 + 1188014505;
                goto LABEL_1038;
            case 0x25D:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1128) + 656i64);
                v32 = ~(v11 - FuckEnc::CacheRead<_DWORD>(v10 + 336));
                v12 = (unsigned int)0x14008FC7 ^ (v32 - (FuckEnc::CacheRead<_DWORD>(v4 + 1040) >> 13));
                goto LABEL_1038;
            case 0x25E:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1640) + 1416i64) + 760i64) + 1960i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1232);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v10 + 272);
                goto LABEL_1039;
            case 0x25F:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1576);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 8i64 * (v5 & 0x4C)) + 760i64) + 888i64) + 992i64) - 1023309500;
                goto LABEL_1039;
            case 0x260:
                v32 = v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 848) + 1648i64);
                v32 = __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheReadPlural<_QWORD>(v4 + 616) + 320i64));
                goto LABEL_1039;
            case 0x261:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1048);
                v12 = __ROL4__(v32, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 776i64) + 8i64 * (v5 & 0x67)) + 240i64) + 4i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 648), 18) & 0x28)));
                goto LABEL_1038;
            case 0x262:
                v28 = (unsigned __int8)__ROL4__(v5, 1);
                v29 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 8i64 * (unsigned __int8)(-21 * FuckEnc::CacheRead<_DWORD>(v4 + 720))) + 1432i64);
            LABEL_623:
                Calls::FastCall(v4 + 1160, &v32, v5, FuckEnc::CacheRead<_QWORD>(v29 + 8 * v28));
                goto LABEL_1039;
            case 0x263:
                v32 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 600) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 8i64 * (unsigned __int8)__ROR4__(~FuckEnc::CacheRead<_DWORD>(v4 + 1320), 12)) + 8i64);
                goto LABEL_1039;
            case 0x264:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 352) + 8i64 * ((2 * (unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 600)) & 0x16), &v32, v5, v4);
                goto LABEL_1039;
            case 0x265:
                v32 = v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 104);
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1832) + 216i64) + 4i64 * ((unsigned __int8)v5 ^ 0x64u));
                goto LABEL_1038;
            case 0x266:
                v32 = v11 ^ 0xA4B9006B;
                v32 = (v11 ^ 0xA4B9006B) - FuckEnc::CacheRead<_DWORD>(v4 + 1904);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 984);
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1424) + 8i64 * (v5 & 4)) + 720i64);
                goto LABEL_1039;
            case 0x267:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 232);
                v32 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 1048) + 1514817652 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1064) + 984i64) + 1704i64));
                goto LABEL_1039;
            case 0x268:
                v32 = v11 ^ 0xFB6D2D08;
                v32 = (v11 ^ 0xFB6D2D08) + FuckEnc::CacheRead<_DWORD>(v4 + 648);
                v32 = __ROL4__(v32, FuckEnc::CacheRead<_BYTE>(v4 + 320) + FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 520) + 664i64));
                goto LABEL_1039;
            case 0x269:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1960);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 8i64 * (unsigned __int8)(50 * FuckEnc::CacheRead<_BYTE>(v4 + 1576))) + 80i64) + 120i64) + 8i64 * ((unsigned __int8)__ROL4__(v5, 15) & 0xC9)) + 392i64);
                goto LABEL_1039;
            case 0x26A:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 248) + 1424i64) + 8i64 * ((unsigned __int8)v5 ^ 0x20u)) + 88i64, &v32, v5, v4);
                goto LABEL_1039;
            case 0x26B:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 984);
                v32 = FuckEnc::CacheRead<_DWORD>(v10 + 1376) ^ v11;
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v4 + 664) * v5 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1744) + 600i64);
                goto LABEL_1038;
            case 0x26C:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 320) ^ v11;
                v32 = ~(v32 + ((FuckEnc::CacheRead<_DWORD>(v4 + 928) | 0x1C) ^ 0x7DBCB70B)) - v5;
                goto LABEL_1039;
            case 0x26D:
                v32 = v11 - 334024203;
                v13 = (unsigned __int8)v5 & 0x85;
                v15 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 656) + 1664i64);
                goto LABEL_23;
            case 0x26E:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 592) + (FuckEnc::CacheRead<_DWORD>(v4 + 1704) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 232i64) + 1576i64) ^ 0xF1478A87);
                goto LABEL_1039;
            case 0x26F:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 720);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 976) + 2066602236;
                v32 = v5 ^ (v32 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 656) + 1648i64));
                goto LABEL_1039;
            case 0x270:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 232) + 576i64);
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 600);
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 8i64 * (unsigned __int8)(81 * v5)) + 1912i64);
                goto LABEL_1039;
            case 0x271:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 736i64);
                v32 = FuckEnc::CacheRead<_DWORD>(v10 + 1048) ^ v11;
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 776) + 8i64 * ((unsigned __int8)v5 & 0xE5)) + 1832i64) + 392i64);
                goto LABEL_1038;
            case 0x272:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 1456i64);
                v32 = (v11 - FuckEnc::CacheRead<_DWORD>(v10 + 664)) ^ 0x28C31131;
                v12 = ~__ROR4__(v32, ~FuckEnc::CacheRead<_BYTE>(v4 + 720));
                goto LABEL_1038;
            case 0x273:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 120) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1696) & 4)) + 1064i64);
                Calls::FastCall(v4 + 128, &v32, v5, v10);
                goto LABEL_1039;
            case 0x274:
                v32 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 928) + 1638757596 * v5 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 760) + 240i64) + 4i64 * ((unsigned __int8)v5 & 0xEC)) & 0xFFFFFFF3));
                goto LABEL_1039;
            case 0x275:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1256) ^ 0xF7) & 0xAA)) + 1008i64) + 8i64 * ((unsigned __int8)v5 ^ 0x92u), &v32, v5, v4);
                goto LABEL_1039;
            case 0x276:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 904) + 1648i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 8i64 * (unsigned __int8)__ROL4__(v5, 6)) + 624i64) + 8i64 * (unsigned __int8)(12 * v5)) + 920i64);
                goto LABEL_1039;
            case 0x277:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * (unsigned __int8)(31 * FuckEnc::CacheRead<_BYTE>(v4 + 1576))) + 288i64) + 1544i64);
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 920);
                v32 += 16 * FuckEnc::CacheRead<_DWORD>(v4 + 1256);
                goto LABEL_1039;
            case 0x278:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 656i64);
                v32 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1528) + 4i64 * (__ROL4__(~FuckEnc::CacheRead<_DWORD>(v4 + 1248), 21) & 0x7C)) + FuckEnc::CacheRead<_DWORD>(v10 + 976) - 1306512270);
                goto LABEL_1039;
            case 0x279:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1600) + 944i64) + 432i64);
                Calls::FastCall(v4 + 40, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 952) + 8i64 * ((unsigned __int8)v5 & 0xA0)));
                goto LABEL_1039;
            case 0x27A:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 904) + 1648i64);
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * FuckEnc::CacheRead<unsigned __int8>(v4 + 264)) + 1880i64) + 4i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 928) ^ 0xD2u));
                goto LABEL_1039;
            case 0x27B:
                v32 = (unsigned int)0x144843D7 ^ FuckEnc::CacheRead<_DWORD>(v4 + 1584) ^ v11;
                v32 += ~((unsigned int)(-848309790 * FuckEnc::CacheRead<_DWORD>(v4 + 336)) >> 25);
                goto LABEL_1039;
            case 0x27C:
                Calls::FastCall(v4 + 1768, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1640) + 448i64) + 8i64 * (v5 & 8)));
                v32 = ~v32;
                goto LABEL_1039;
            case 0x27D:
                v32 = v11 - v5 - 89911198;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 904i64) + 520i64) + 192i64);
                v32 -= FuckEnc::CacheRead<_DWORD>(v10 + 1376);
                goto LABEL_1039;
            case 0x27E:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 520) + 656i64);
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1088) + 1704i64) * FuckEnc::CacheRead<unsigned __int8>(v10 + 1907);
                goto LABEL_1039;
            case 0x27F:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1872);
                Calls::FastCall(v4 + 200, &v32, v5, v10);
                v32 += -945781326 * FuckEnc::CacheRead<_DWORD>(v4 + 1648) * v5;
                goto LABEL_1039;
            case 0x280:
                v32 = (v5 + v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1584)) ^ 0xC3013137;
                v12 = __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 8i64 * ((unsigned __int8)__ROL4__(v5, 13) & 0xFA)) + 664i64) - 106);
                goto LABEL_1038;
            case 0x281:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 80i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 1848) + 8i64 * (unsigned __int8)__ROL4__(v5, 16), &v32, v5, v4);
                goto LABEL_1039;
            case 0x282:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1504) + 576i64) + 728i64, &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1544));
                goto LABEL_1039;
            case 0x283:
                v32 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 336) * FuckEnc::CacheRead<_DWORD>(v4 + 592) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 80) + 568i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 13)));
                goto LABEL_1039;
            case 0x284:
                v32 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 664));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 736) + 1064i64) + 1928i64);
                v32 += FuckEnc::CacheRead<_DWORD>(v10 + 1704) + 1;
                goto LABEL_1039;
            case 0x285:
                v32 = v11 - 1023309500;
                v32 = v11 - 1023309500 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 848) + 1104i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 9)) + 776i64) + 8i64 * (((unsigned __int8)v5 ^ 0xEF) & 0xD2)) + 8i64);
                goto LABEL_1039;
            case 0x286:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 656) + 920i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 1584i64);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v4 + 336);
                goto LABEL_1038;
            case 0x287:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1928);
                v32 = v11 ^ (94609175 * (FuckEnc::CacheRead<_DWORD>(v10 + 1048) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 888) + 336i64) | 8));
                goto LABEL_1039;
            case 0x288:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 992) ^ v11;
                Calls::FastCall(v4 + 808, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 8i64 * (v5 & 0x4C)));
                goto LABEL_1039;
            case 0x289:
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 904) + 440i64) + 8i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 520) + 736i64) + 1904i64) & 0x97)) + 1224i64) + 4i64 * ((unsigned __int8)(94 * v5) & 0x93)) ^ v11;
                goto LABEL_1038;
            case 0x28A:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 928);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * ((unsigned __int8)v5 & 0xD7)) + 856i64, &v32, v5, v4);
                goto LABEL_1039;
            case 0x28B:
                v32 = v11 - 435371912;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 520);
                v32 = v11 - 435371912 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1784) + 992i64);
                v12 = v32 ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 64));
                goto LABEL_1038;
            case 0x28C:
                v32 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1904));
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v4 + 600) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 448) + 8i64 * (((unsigned __int8)v5 ^ 0xA6) & 0xD9)) + 896i64) + 4i64 * (unsigned __int8)(-68 * v5));
                goto LABEL_1038;
            case 0x28D:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1872);
                v12 = __ROR4__(v11, (FuckEnc::CacheRead<_BYTE>(v10 + 264) ^ FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 976i64)) + 127) + 1023309500;
                goto LABEL_1038;
            case 0x28E:
                v32 = v11 ^ ((unsigned int)((FuckEnc::CacheRead<_DWORD>(v4 + 712) << 10) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1544) + 1552i64) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 320), 10))) >> 30);
                goto LABEL_1039;
            case 0x28F:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1648) ^ v11;
                v32 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1504) + 1584i64);
                v12 = FuckEnc::CacheRead<_DWORD>(v4 + 648) ^ v32 ^ 0x65AFF3D2;
                goto LABEL_1038;
            case 0x290:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * ((6 * (_BYTE)v5) & 0x44)) + 112i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 6)) + 288i64) + 1272i64) + 1528i64) + 4i64 * ((unsigned __int8)(-101 * v5) & 0xA2));
                goto LABEL_1039;
            case 0x291:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1064) + 1648i64);
                v32 = ~(v32 - (FuckEnc::CacheRead<_DWORD>(v4 + 1368) & 0xFFFFFFE9));
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 1048);
                goto LABEL_1039;
            case 0x292:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1744) + 760i64) + 1784i64) + 1640i64) + 1640i64) + 1416i64);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 616) + 1912i64) ^ v11;
                goto LABEL_1038;
            case 0x293:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 104);
                Calls::FastCall(v4 + 1768, &v32, v5, v10);
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 848) + 1632i64);
                goto LABEL_1039;
            case 0x294:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1248) ^ v11;
                v32 += (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 8i64 * ((unsigned __int8)v5 ^ 0xB4u)) + 600i64) << 22) + 1;
                goto LABEL_1039;
            case 0x295:
                Calls::FastCall(v4 + 1344, &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 144));
                v32 ^= 356198687 * FuckEnc::CacheRead<_DWORD>(v4 + 56);
                goto LABEL_1039;
            case 0x296:
                v32 = ~(v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1376) - 1023309500);
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 384);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1368) ^ 0x4AC31131;
                goto LABEL_1039;
            case 0x297:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 576) + 384i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 1632) >> 5);
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 8);
                goto LABEL_1039;
            case 0x298:
                v32 = ~v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 520);
                v32 = ~v11 + (FuckEnc::CacheRead<_DWORD>(v10 + 1960) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 872i64) + 4i64 * ((unsigned __int8)(-48 * v5) & 0xCA)));
                goto LABEL_1039;
            case 0x299:
                v32 = v5 ^ v11 ^ 0x2D78F04F;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 656);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1760) + 8i64 * (v5 & 0x6D)) + 1128i64) + 976i64);
                goto LABEL_1038;
            case 0x29A:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1048);
                v32 = __ROR4__(v32, ~(FuckEnc::CacheRead<_BYTE>(v4 + 720) ^ (FuckEnc::CacheRead<_BYTE>(v4 + 648) + 63) ^ 0x84));
                goto LABEL_1039;
            case 0x29B:
                v32 = v11 ^ 0xC30131D2;
                v32 = (v11 ^ 0xC30131D2) + FuckEnc::CacheRead<_DWORD>(v4 + 1576);
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 1912) ^ v5;
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 928);
                goto LABEL_1039;
            case 0x29C:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1560);
                v32 = (FuckEnc::CacheRead<_DWORD>(v10 + 320) ^ v11) - 1615646975;
                v12 = v32 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 776) + 8i64 * ((unsigned __int8)v5 & 0xEF)) + 472i64) + 1040i64);
                goto LABEL_1038;
            case 0x29D:
                v32 = v11 + ~(16 * (FuckEnc::CacheRead<_DWORD>(v4 + 600) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 8i64 * (unsigned __int8)(65 * v5)) + 592i64)));
                goto LABEL_1039;
            case 0x29E:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1832) + 408i64) + 408i64) + 800i64) + 888i64);
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 296) + 8i64 * (v5 & 0x13)) + 1576i64);
                goto LABEL_1039;
            case 0x29F:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 24) + 8 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1640) + 648i64) & 0x62 | 4i64), &v32, v5, v4);
                goto LABEL_1039;
            case 0x2A0:
                v32 = v11 + 811493282;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 104);
                v32 = v11 + 811493282 + FuckEnc::CacheRead<_DWORD>(v10 + 1904);
                v32 = (FuckEnc::CacheRead<_DWORD>(v4 + 648) ^ v32) + 1954830290;
                goto LABEL_1039;
            case 0x2A1:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1784);
                v32 = v11 + (FuckEnc::CacheRead<_DWORD>(v10 + 1584) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1312) + 1760i64) + 8i64 * (v5 & 0x19)) + 712i64)) + 1;
                goto LABEL_1039;
            case 0x2A2:
                v10 = FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1832) + 1544i64);
                v32 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1224) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 920), 23)) >> 10);
                goto LABEL_1039;
            case 0x2A3:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1784);
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1088) + 1048i64);
                v12 = __ROL4__(v32, v5 ^ (-94 * FuckEnc::CacheRead<_BYTE>(v4 + 336)));
                goto LABEL_1038;
            case 0x2A4:
                v32 = v11 - 1833342293 + FuckEnc::CacheRead<_DWORD>(v4 + 720);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 232) + 1280i64) + 8i64 * ((unsigned __int8)v5 & 0xE3)) + 560i64) + 1696i64);
                goto LABEL_1039;
            case 0x2A5:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1560);
                v32 = v11 ^ (~FuckEnc::CacheRead<_DWORD>(v4 + 1376) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1104) + 8i64 * (unsigned __int8)__ROL4__(v5, 15)) + 976i64) + 1489924134));
                goto LABEL_1039;
            case 0x2A6:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 616);
                Calls::FastCall(v10 + 696, &v32, v5, v4);
                v32 ^= -771800731 * FuckEnc::CacheRead<_DWORD>(v4 + 1376);
                goto LABEL_1039;
            case 0x2A7:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 576);
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1648);
                Calls::FastCall(v4 + 1160, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 776) + 8i64 * ((unsigned __int8)v5 ^ 0xF3u)));
                goto LABEL_1039;
            case 0x2A8:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1320);
                Calls::FastCall(v4 + 368, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1640) + 1416i64));
                goto LABEL_1039;
            case 0x2A9:
                v32 = v11 ^ 0xCBC30131;
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1632) ^ v11 ^ 0xCBC30131;
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 272) + (FuckEnc::CacheRead<_DWORD>(v4 + 1960) << 14);
                goto LABEL_1039;
            case 0x2AA:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1248);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1832) + 104i64);
                Calls::FastCall(v10 + 1344, &v32, v5, v4);
                goto LABEL_1039;
            case 0x2AB:
                v32 = v11 ^ 0xBF3D8899;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 104);
                v32 = (v11 ^ 0xBF3D8899) + v5 * FuckEnc::CacheRead<_DWORD>(v4 + 1696) * (FuckEnc::CacheRead<_DWORD>(v10 + 1048) + 1);
                goto LABEL_1039;
            case 0x2AC:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1432) + 8i64 * (unsigned __int8)(93 * FuckEnc::CacheRead<_BYTE>(v4 + 648))) + 1848i64) + 8i64 * (unsigned __int8)(93 * v5), &v32, v5, v4);
                goto LABEL_1039;
            case 0x2AD:
                Calls::FastCall(v4 + 400, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1064) + 1096i64) + 8i64 * ((unsigned __int8)v5 & 0xAB)) + 1504i64));
                goto LABEL_1039;
            case 0x2AE:
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 8i64 * (((unsigned __int8)v5 ^ 0x9B) & 0xEC)) + 560i64) + 1200i64) + 4i64 * (((unsigned __int8)(v5 * ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 56)) ^ 0xF5) & 0x5E));
                goto LABEL_1038;
            case 0x2AF:
                v32 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 928) * v5);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 392);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 432) + 720i64);
                goto LABEL_1039;
            case 0x2B0:
                v32 = v11 - 271098243;
                v32 = v11 - 271098243 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1720) + 992i64);
                v32 -= 594976309 * FuckEnc::CacheRead<_DWORD>(v4 + 1648);
                goto LABEL_1039;
            case 0x2B1:
                v32 = ~v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1272);
                v32 = ~v11 - FuckEnc::CacheRead<_DWORD>(v10 + 648);
                v32 ^= v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 320i64);
                goto LABEL_1039;
            case 0x2B2:
                Calls::FastCall(v4 + 176, &v32, v5, v4);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 192) + 1088i64) + 1576i64);
                goto LABEL_1039;
            case 0x2B3:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 1424i64) + 8i64 * ((34 * (_BYTE)v5) & 0x7F)) + 792i64) + 8i64 * (((unsigned __int8)v5 ^ 0xE9) & 0x96), &v32, v5, v4);
                goto LABEL_1039;
            case 0x2B4:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 432);
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 600) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1936) + 8i64 * ((unsigned __int8)(24 * v5) & 0xAD)) + 1608i64) + 8i64 * ((unsigned __int8)v5 & 0xE6)) + 1048i64);
                goto LABEL_1038;
            case 0x2B5:
                v12 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(v4 + 1760) + 1216i64) + 920i64));
                goto LABEL_1038;
            case 0x2B6:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 720) - 858487593;
                v32 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 736) + 1392i64) + 1392i64) + 656i64) + 1648i64);
                goto LABEL_1039;
            case 0x2B7:
                v32 = v11 - 1998759597 + ((FuckEnc::CacheRead<_DWORD>(v4 + 720) >> 23) ^ 0x66A1A483);
                v12 = v32 + (FuckEnc::CacheRead<_DWORD>(v4 + 1576) ^ 0xC3018944);
                goto LABEL_1038;
            case 0x2B8:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 720) ^ v11;
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 1256);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 8i64 * (unsigned __int8)(69 * v5)) + 760i64);
                v32 += FuckEnc::CacheRead<_DWORD>(v10 + 1912);
                goto LABEL_1039;
            case 0x2B9:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 648) ^ v11 ^ 0xEDBE1AB8;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 8i64 * ((unsigned __int8)__ROL4__(v5, 21) & 0xD5)) + 1560i64);
                v12 = FuckEnc::CacheRead<_DWORD>(v10 + 1576) ^ v32;
                goto LABEL_1038;
            case 0x2BA:
                v32 = v11 + 1023332021 * FuckEnc::CacheRead<_DWORD>(v4 + 1584);
                v32 = __ROL4__(v32, ~(FuckEnc::CacheRead<_BYTE>(v4 + 1376) * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1232) + 336i64)));
                goto LABEL_1039;
            case 0x2BB:
                v32 = ~(v11 + FuckEnc::CacheRead<_DWORD>(v4 + 928));
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1216) + 944i64) + 1608i64) + 8i64 * ((unsigned __int8)v5 & 0xA8)) + 1256i64);
                goto LABEL_1039;
            case 0x2BC:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 432) + 1248i64);
                v32 += v5 * FuckEnc::CacheRead<_DWORD>(v4 + 1048) * (FuckEnc::CacheRead<_DWORD>(v4 + 1368) >> 31);
                goto LABEL_1039;
            case 0x2BD:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1640) + 1064i64) + 328i64) + 248i64);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 904) + 216i64) + 4i64 * (v5 & 0x12)) ^ v11;
                goto LABEL_1038;
            case 0x2BE:
                v32 = v11 + 1446285641;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1176);
                v32 = v11 + 1446285641 - 231151103 * FuckEnc::CacheRead<_DWORD>(v10 + 1632);
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 1696) + 1;
                goto LABEL_1039;
            case 0x2BF:
                Calls::FastCall(v4 + 728, &v32, v5, v4);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1232) + 544i64) + 4i64 * (unsigned __int8)(-11 * v5));
                goto LABEL_1039;
            case 0x2C0:
                v32 = ~v11;
                Calls::FastCall(v4 + 1160, &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 288));
                v32 -= 1785064297;
                goto LABEL_1039;
            case 0x2C1:
                v32 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 8i64 * (unsigned __int8)(-25 * v5)) + 8i64) ^ v11);
                v32 ^= ~(FuckEnc::CacheRead<_DWORD>(v4 + 648) & 0xFFFFFFF3);
                goto LABEL_1039;
            case 0x2C2:
                v32 = v11 + 1734746630 * (FuckEnc::CacheRead<_DWORD>(v4 + 1320) + 1);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1176);
                v32 = v32 - FuckEnc::CacheRead<_DWORD>(v10 + 920) - v5;
                goto LABEL_1039;
            case 0x2C3:
                v32 = v5 ^ __ROR4__(v11, v5);
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 1632);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 328);
                v12 = FuckEnc::CacheRead<_DWORD>(v10 + 1704) ^ v32 ^ 0xD7BABBEC;
                goto LABEL_1038;
            case 0x2C4:
                v32 = v11 ^ (~((_DWORD)0xFB4A74 + FuckEnc::CacheRead<_DWORD>(v4 + 720)) * ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1720) + 144i64) + 1248i64));
                goto LABEL_1039;
            case 0x2C5:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1584);
                v32 -= 1232175282 * FuckEnc::CacheRead<_DWORD>(v4 + 384);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1760) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 1648), 17)) + 384i64);
                goto LABEL_1038;
            case 0x2C6:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1088);
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 1576);
                v32 = __ROR4__(__ROR4__(v32, v5 ^ FuckEnc::CacheRead<_BYTE>(v4 + 1248) & 0xE0 ^ 0xA6), 129);
                goto LABEL_1039;
            case 0x2C7:
                v32 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 56) ^ v5);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1560) + 1064i64) + 1744i64);
                v32 -= FuckEnc::CacheRead<_DWORD>(v10 + 264);
                goto LABEL_1039;
            case 0x2C8:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 472);
                v12 = v11 - ((FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1720) + 1696i64) * ((FuckEnc::CacheRead<_DWORD>(v10 + 928) << 21) ^ 0x73963E4C)) ^ 0x4DDEC3AA);
                goto LABEL_1038;
            case 0x2C9:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 592) - 1768118869;
                v32 = (v32 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 320) + (FuckEnc::CacheRead<_DWORD>(v4 + 976) ^ v5))) - 1023309500;
                goto LABEL_1039;
            case 0x2CA:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 776) + 8i64 * ((unsigned __int8)__ROL4__(v5, 19) & 0xE6)) + 1128i64) + 1176i64) + 1600i64);
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 712);
                goto LABEL_1039;
            case 0x2CB:
                v32 = v11 - 129312362 * FuckEnc::CacheRead<_DWORD>(v4 + 392);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1232) + 472i64);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v4 + 928) * FuckEnc::CacheRead<_DWORD>(v10 + 1368);
                goto LABEL_1038;
            case 0x2CC:
                v32 = v11 + 1083912713;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1216);
                v32 = (v11 + 1083912713) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 408) + 664i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1552) + 4i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v10 + 1960) ^ 0xAFu));
                goto LABEL_1039;
            case 0x2CD:
                v32 = v11 ^ ~(v5 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 576) + 272i64) ^ (-1291348914 * FuckEnc::CacheRead<_DWORD>(v4 + 600))));
                goto LABEL_1039;
            case 0x2CE:
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 1424i64) + 8i64 * ((unsigned __int8)v5 ^ 0xA5u)) + 1104i64) + 8i64 * (__ROR4__(v5, 25) & 0xB)) + 1888i64) + 1576i64);
                goto LABEL_1038;
            case 0x2CF:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 888) + 1648i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1832);
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1752) + 8i64 * (unsigned __int8)__ROR4__(v5, 4)) + 1320i64);
                goto LABEL_1039;
            case 0x2D0:
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 520) + 616i64) + 1368i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1216) + 592i64) - FuckEnc::CacheRead<_DWORD>(v4 + 648);
                goto LABEL_1038;
            case 0x2D1:
                v32 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 64));
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 904) + 1112i64, &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1064));
                goto LABEL_1039;
            case 0x2D2:
                v32 = v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1560) + 1432i64) + 8i64 * ((unsigned __int8)v5 & 0x9C)) + 144i64) + 216i64) + 4i64 * ((unsigned __int8)v5 ^ 0xDAu));
                goto LABEL_1039;
            case 0x2D3:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 336);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1744) + 1728i64, &v32, v5, v4);
                goto LABEL_1039;
            case 0x2D4:
                v32 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1048) << 6);
                v32 = v32 - v5 * (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 1368) - 687999741) - 128828487;
                goto LABEL_1039;
            case 0x2D5:
                v32 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 64) & 0xFFFFFFF2);
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1232) + 192i64) + 336i64) + 1;
                goto LABEL_1039;
            case 0x2D6:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1584);
                Calls::FastCall(v4 + 1672, &v32, v5, v4);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1576);
                goto LABEL_1039;
            case 0x2D7:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 8i64 * ((unsigned __int8)v5 ^ 0x54u)) + 736i64) + 1384i64, &v32, v5, v4);
                goto LABEL_1039;
            case 0x2D8:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 432);
                v32 += FuckEnc::CacheRead<_DWORD>(v10 + 1304) ^ FuckEnc::CacheRead<_DWORD>(v4 + 976) & 0xFFFFFFF6;
                goto LABEL_1039;
            case 0x2D9:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 928) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1456);
                v32 += FuckEnc::CacheRead<_DWORD>(v10 + 648) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1176) + 1880i64) + 4i64 * ((unsigned __int8)(95 * v5) & 0x9E));
                goto LABEL_1039;
            case 0x2DA:
                v32 = v11 + 1472118376;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 760);
                v32 = v11 + 1472118376 - FuckEnc::CacheRead<_DWORD>(v10 + 56) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 576i64) + 648i64);
                goto LABEL_1039;
            case 0x2DB:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * (unsigned __int8)(-43 * v5)) + 1744i64);
                Calls::FastCall(v4 + 784, &v32, v5, v10);
                goto LABEL_1039;
            case 0x2DC:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 432) + 1608i64) + 8i64 * (unsigned __int8)(-66 * v5)) + 1784i64) + 440i64) + 8i64 * ((unsigned __int8)v5 ^ 0xF2u)) + 1640i64) + 1304i64);
                goto LABEL_1039;
            case 0x2DD:
                v32 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 1904) << 31);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * (unsigned __int8)__ROR4__(v5, 15)) + 976i64) + 1656946993;
                goto LABEL_1039;
            case 0x2DE:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1376);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 656);
                v32 = ~(v32 + FuckEnc::CacheRead<_DWORD>(v4 + 264) + FuckEnc::CacheRead<_DWORD>(v10 + 1248));
                goto LABEL_1039;
            case 0x2DF:
                v32 = __ROL4__(v11 - 1023332089, v5);
                v32 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 8i64 * (unsigned __int8)__ROR4__(v5, 10)) + 736i64) + 1584i64);
                goto LABEL_1039;
            case 0x2E0:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 520);
                v32 = __ROL4__(FuckEnc::CacheRead<_DWORD>(v10 + 1320) ^ v11, v5);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * ((unsigned __int8)v5 & 0xFA)) + 1544i64) + 1904i64) ^ v32;
                goto LABEL_1038;
            case 0x2E1:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1504) + 1744i64) + 928i64) - 674446766;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1784);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v10 + 320) - 1624375105;
                goto LABEL_1038;
            case 0x2E2:
                Calls::FastCall(v4 + 1728, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 120) + 8i64 * (__ROR4__(v5, 29) & 0x34)) + 800i64));
                goto LABEL_1039;
            case 0x2E3:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1584) & 0x4D)) + 848i64);
                Calls::FastCall(v10 + 528, &v32, v5, v4);
                goto LABEL_1039;
            case 0x2E4:
                Calls::FastCall(v4 + 1352, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 80) + 1104i64) + 8i64 * (__ROR4__(v5, 11) & 0xCE)) + 232i64) + 888i64));
                goto LABEL_1039;
            case 0x2E5:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1272);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 864) + 8i64 * ((unsigned __int8)v5 & 0x9A), &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 984));
                goto LABEL_1039;
            case 0x2E6:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 848);
                v32 = FuckEnc::CacheRead<_DWORD>(v10 + 1904) ^ v11;
                v12 = ~v32;
                goto LABEL_1038;
            case 0x2E7:
                v32 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 448) + 8i64 * ((-45 * (_BYTE)v5) & 0x47)) + 1256i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 896) + 4i64 * (unsigned __int8)(-111 * FuckEnc::CacheRead<_BYTE>(v4 + 992)));
                goto LABEL_1039;
            case 0x2E8:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 576);
                v32 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 1856i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 22)) * ((FuckEnc::CacheRead<_DWORD>(v10 + 1248) * v5) & 0xFFFFFFF4));
                goto LABEL_1039;
            case 0x2E9:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1720);
                v12 = v11 - (v5 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1392) + 1040i64) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1304) | 7));
                goto LABEL_1038;
            case 0x2EA:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 264);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1416);
                v12 = v32 + FuckEnc::CacheRead<_DWORD>(v4 + 272) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1424) + 8i64 * (v5 & 1)) + 392i64);
                goto LABEL_1038;
            case 0x2EB:
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 248) + 920i64) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 576) + 328i64);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 624) + 8i64 * ((20 * (_BYTE)v5) & 0x55)) + 1632i64);
                goto LABEL_1038;
            case 0x2EC:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 288);
                v12 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 336) & 0xFFFFFFE1) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1200) + 4i64 * (v5 & 0x32)) ^ 0x3F51969E);
                goto LABEL_1038;
            case 0x2ED:
                v32 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1392) + 240i64) + 4i64 * (((unsigned __int8)v5 ^ 4) & 0x87)) ^ v5 ^ 0xE556D1E8) + v11;
                v32 = __ROL4__(v32, FuckEnc::CacheRead<_DWORD>(v4 + 712));
                goto LABEL_1039;
            case 0x2EE:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1640) + 1720i64);
                v32 = v11 ^ (~FuckEnc::CacheRead<_DWORD>(v10 + 920) * ~FuckEnc::CacheRead<_DWORD>(v4 + 1256));
                goto LABEL_1039;
            case 0x2EF:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 392);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 1888i64) + 1544i64) + 1544i64) + 1888i64);
                v32 -= FuckEnc::CacheRead<_DWORD>(v10 + 992);
                goto LABEL_1039;
            case 0x2F0:
                v32 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 592));
                v13 = (unsigned __int8)v5 & 0x83;
                v15 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 888) + 352i64);
            LABEL_23:
                v16 = v4;
            LABEL_24:
                Calls::FastCall(v15 + 8 * v13, &v32, v5, v16);
                goto LABEL_1039;
            case 0x2F1:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 296) + 8i64 * (v5 & 0x2B)) + 800i64) + 1904i64) - 1949145976;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 248);
                v12 = FuckEnc::CacheRead<_DWORD>(v10 + 1584) ^ v32;
                goto LABEL_1038;
            case 0x2F2:
                v32 = v11 ^ 0xC3018944;
                v32 = (v11 ^ 0xC3018944) - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 848) + 1912i64) ^ 0x8D109901);
                v12 = __ROR4__(__ROL4__(v32, FuckEnc::CacheRead<_DWORD>(v4 + 1632)), 53);
                goto LABEL_1038;
            case 0x2F3:
                v32 = v11 ^ (1820803960 * FuckEnc::CacheRead<_DWORD>(v4 + 1648));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1872);
                v32 += FuckEnc::CacheRead<_DWORD>(v10 + 272);
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 64);
                goto LABEL_1039;
            case 0x2F4:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 760);
                v32 = v11 + 1 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1200) + 4i64 * (unsigned __int8)(-36 * v5));
                v32 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 120) + 8i64 * ((unsigned __int8)(3 * v5) & 0xA4)) + 992i64);
                goto LABEL_1039;
            case 0x2F5:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 1752i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 18)) + 1696i64);
                v12 = v32 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 1376) & 0xFFFFFFF2;
                goto LABEL_1038;
            case 0x2F6:
                v32 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1576));
                v32 ^= ~FuckEnc::CacheRead<_DWORD>(v4 + 1304) + (FuckEnc::CacheRead<_DWORD>(v4 + 1256) ^ v5) - 1420049517;
                goto LABEL_1039;
            case 0x2F7:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 56);
                v32 = __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1888) + 1504i64) + 384i64) + FuckEnc::CacheRead<_BYTE>(v4 + 720) - 21);
                goto LABEL_1039;
            case 0x2F8:
                v32 = v11 + 1020286834;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1888);
                v32 = v11 + 1020286834 - (FuckEnc::CacheRead<_DWORD>(v10 + 1696) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 320) >> 19));
                goto LABEL_1039;
            case 0x2F9:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 920) ^ v11;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 832i64, &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1744));
                goto LABEL_1039;
            case 0x2FA:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1504) + 8i64) * ((FuckEnc::CacheRead<_DWORD>(v4 + 56) ^ 0x52D1D0FF) + 2140624709) + 1;
                goto LABEL_1039;
            case 0x2FB:
                v32 = (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1632)) ^ 0xC3018944;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 576) + 1424i64) + 8i64 * (v5 & 0x55)) + 144i64);
                v32 -= FuckEnc::CacheRead<_DWORD>(v10 + 992);
                goto LABEL_1039;
            case 0x2FC:
                v32 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 592));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 232) + 952i64) + 8i64 * ((unsigned __int8)v5 & 0xB3)) + 80i64);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 544) + 4i64 * (-v5 & 0xB));
                goto LABEL_1038;
            case 0x2FD:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1248) ^ v11;
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1720) + 288i64) + 1504i64) + 928i64);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v4 + 664);
                goto LABEL_1038;
            case 0x2FE:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 776) + 8i64 * (v5 & 0x58)) + 944i64);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 1192) + 8i64 * (unsigned __int8)(-120 * v5), &v32, v5, v4);
                goto LABEL_1039;
            case 0x2FF:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1928);
                v12 = v11 - (FuckEnc::CacheRead<_DWORD>(v10 + 920) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 560) + 624i64) + 8i64 * (unsigned __int8)(-58 * v5)) + 1232i64) + 592i64));
                goto LABEL_1038;
            case 0x300:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 8);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 760);
                v32 += (v5 + (FuckEnc::CacheRead<_DWORD>(v10 + 600) & 0xFFFFFFF5)) ^ 0x8DE2D0FF;
                goto LABEL_1039;
            case 0x301:
                v32 = v11 + v5;
                v12 = (v11 + v5) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1248) + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1104) + 8i64 * ((unsigned __int8)v5 & 0xC2)) + 992i64));
                goto LABEL_1038;
            case 0x302:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 720);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1064) + 1232i64);
                v12 = __ROL4__(v32, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1760) + 8i64 * (unsigned __int8)(48 * v5)) + 1392i64) + 384i64));
                goto LABEL_1038;
            case 0x303:
                v32 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 320));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1416);
                v32 += FuckEnc::CacheRead<_DWORD>(v10 + 1256) - FuckEnc::CacheRead<_DWORD>(v4 + 1320) - 1009279661;
                goto LABEL_1039;
            case 0x304:
                v32 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 8i64 * (__ROL4__(v5, 27) & 3)) + 848i64) + 1784i64) + 328i64) + 592i64) + 1537218896);
                goto LABEL_1039;
            case 0x305:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1904);
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1216) + 56i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1432) + 8i64 * ((unsigned __int8)__ROL4__(v5, 29) & 0xFB)) + 1632i64);
                goto LABEL_1039;
            case 0x306:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1504) + 1936i64) + 8i64 * (unsigned __int8)(44 * v5)) + 760i64) + 1368i64);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1248);
                goto LABEL_1039;
            case 0x307:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1960) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1544);
                Calls::FastCall(v4 + 1672, &v32, v5, v10);
                goto LABEL_1039;
            case 0x308:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 888) + 904i64) + 320i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 904);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v10 + 600);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v4 + 264);
                goto LABEL_1038;
            case 0x309:
                v32 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1760) + 8i64 * (unsigned __int8)__ROR4__(v5, 6)) + 1040i64);
                v32 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 1224i64) + 4i64 * ((17 * (_BYTE)v5) & 0x6B));
                goto LABEL_1039;
            case 0x30A:
                v12 = __ROL4__(v11, ~(94 * FuckEnc::CacheRead<_BYTE>(v4 + 664) * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 1224i64) + 4i64 * (v5 & 0x62))));
                goto LABEL_1038;
            case 0x30B:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 712) + 1023309500;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 736);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1504) + 1280i64) + 8i64 * ((unsigned __int8)v5 ^ 0xEAu)) + 720i64);
                goto LABEL_1039;
            case 0x30C:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1576) * (FuckEnc::CacheRead<_DWORD>(v4 + 8) + 1371734321) + (FuckEnc::CacheRead<_DWORD>(v4 + 928) >> 29);
                goto LABEL_1039;
            case 0x30D:
                v10 = FuckEnc::CacheReadPlural<_QWORD>(v4 + 1872);
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1608) + 8i64 * (unsigned __int8)(-5 * v5)) + 952i64) + 8i64 * ((unsigned __int8)v5 & 0xEA)) + 1880i64) + 4i64 * (unsigned __int8)(12 * v5));
                goto LABEL_1038;
            case 0x30E:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1744) + 80i64);
                v32 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 520) + 1704i64) ^ v11) - 1304733805;
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v4 + 1704);
                goto LABEL_1038;
            case 0x30F:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1640);
                Calls::FastCall(v4 + 1384, &v32, v5, v10);
                goto LABEL_1039;
            case 0x310:
                v32 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 848) + 768i64) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1376) & 0x91)) + 1040i64) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1048) >> 7));
                goto LABEL_1039;
            case 0x311:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 448) + 8i64 * (unsigned __int8)(-9 * FuckEnc::CacheRead<_DWORD>(v4 + 1584))) + 1832i64) + 1504i64);
                Calls::FastCall(v4 + 72, &v32, v5, v10);
                v32 += 1245927632;
                goto LABEL_1039;
            case 0x312:
                v12 = v11 - (v5 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1088) + 1368i64) ^ ~((-771800818 * FuckEnc::CacheRead<_DWORD>(v4 + 1960)) & 0xFFFFFFF6));
                goto LABEL_1038;
            case 0x313:
                v32 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 720) ^ v5);
                v32 += 826080975 * FuckEnc::CacheRead<_DWORD>(v4 + 1704);
                goto LABEL_1039;
            case 0x314:
                v12 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1200) + 4i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 8i64 * (unsigned __int8)__ROL4__(v5, 31)) + 1392i64) + 1928i64) + 272i64) ^ 0xDB) & 0x64)));
                goto LABEL_1038;
            case 0x315:
                v32 = v11 + 1252689998;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 8i64 * ((unsigned __int8)v5 & 0xBC)) + 1560i64) + 1544i64);
                v32 = v11 + 1252689998 + FuckEnc::CacheRead<_DWORD>(v10 + 384);
                goto LABEL_1039;
            case 0x316:
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 8i64 * (unsigned __int8)__ROL4__(v5, 7)) + 1608i64) + 8i64 * ((unsigned __int8)__ROL4__(v5, 21) & 0xCE)) + 1424i64) + 8i64 * ((unsigned __int8)v5 & 0xD3)) + 984i64) + 1368i64) ^ v11;
                goto LABEL_1038;
            case 0x317:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1304) ^ v11;
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 736) + 616i64) + 1632i64) - FuckEnc::CacheRead<_DWORD>(v4 + 928) - 1059822199;
                goto LABEL_1038;
            case 0x318:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1040);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v4 + 920) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 8i64 * (unsigned __int8)__ROR4__(v5, 24)) + 920i64) ^ 0xD0FF4C08);
                goto LABEL_1038;
            case 0x319:
                v32 = ~(v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1248));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1088);
                v12 = v32 ^ FuckEnc::CacheRead<_DWORD>(v10 + 1696) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 992) | 0x1C);
                goto LABEL_1038;
            case 0x31A:
                v32 = v11 + 1959387848;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 232) + 288i64);
                Calls::FastCall(v4 + 1016, &v32, v5, v10);
                goto LABEL_1039;
            case 0x31B:
                v32 = v5 ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * ((-2 * (_BYTE)v5) & 0xF)) + 984i64);
                v32 = (v5 ^ v11) - FuckEnc::CacheRead<_DWORD>(v10 + 720);
                v12 = FuckEnc::CacheRead<_DWORD>(v4 + 592) ^ v32;
                goto LABEL_1038;
            case 0x31C:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 472);
                v32 = FuckEnc::CacheRead<_DWORD>(v10 + 664) ^ v11;
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1504) + 1504i64) + 216i64) + 4i64 * ((unsigned __int8)v5 & 0xD6));
                goto LABEL_1039;
            case 0x31D:
                v32 = v5 ^ ((v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 64) * v5)) - 1490157377);
                v31 = FuckEnc::CacheRead<_QWORD>(v4 + 1176);
                v10 = FuckEnc::CacheRead<_QWORD>(v31);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v31) + 1632i64);
                goto LABEL_1039;
            case 0x31E:
                v32 = __ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 992) ^ v11, v5);
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 776) + 8i64 * ((unsigned __int8)v5 ^ 0xF6u)) + 800i64) + 1632i64) + 1;
                goto LABEL_1039;
            case 0x31F:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1064) + 872i64) + 4i64 * ((unsigned __int8)v5 ^ 0x82u));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1272) + 1088i64);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v10 + 664);
                goto LABEL_1039;
            case 0x320:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1696);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 328) + 904i64) + 1320i64) - FuckEnc::CacheRead<_DWORD>(v4 + 1648) + 1121929587;
                goto LABEL_1038;
            case 0x321:
                Calls::FastCall(v4 + 1768, &v32, v5, v4);
                v32 = __ROL4__(v32, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 8i64 * (unsigned __int8)__ROL4__(v5, 6)) + 648i64));
                goto LABEL_1039;
            case 0x322:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1416);
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 568) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 992), 30)) * (FuckEnc::CacheRead<_DWORD>(v4 + 272) ^ FuckEnc::CacheRead<_DWORD>(v10 + 712));
                goto LABEL_1038;
            case 0x323:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1368) ^ v11;
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 648) + v32 - 1830005669;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 736i64);
                v32 -= FuckEnc::CacheRead<_DWORD>(v10 + 384);
                goto LABEL_1039;
            case 0x324:
                v32 = (v11 ^ 0xCE70B519) + 453191967;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 616i64);
                v12 = v32 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 872) + 4i64 * (((unsigned __int8)v5 ^ 0x10) & 0x57));
                goto LABEL_1038;
            case 0x325:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 648i64);
                v32 += ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 560) + 328i64) + 1248i64) ^ v5);
                goto LABEL_1039;
            case 0x326:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1104) + 8i64 * ((unsigned __int8)v5 & 0xC2)) + 1088i64) + 712i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 560) + 1416i64);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v10 + 384);
                goto LABEL_1039;
            case 0x327:
                v12 = v11 - 2045074313 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 800i64) + 1760i64) + 8i64 * (v5 & 0x6B)) + 720i64) ^ 0x59655D3F);
                goto LABEL_1038;
            case 0x328:
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1432) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1368) & 0x34)) + 216i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 29)) ^ v11;
                v12 = __ROR4__(v32, FuckEnc::CacheRead<_BYTE>(v4 + 1960) ^ 0x31);
                goto LABEL_1038;
            case 0x329:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 592);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1720);
                v32 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1096) + 8i64 * (v5 & 0x73)) + 1304i64);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v4 + 720);
                goto LABEL_1038;
            case 0x32A:
                v12 = v11 - 1209424998 * FuckEnc::CacheRead<_DWORD>(v4 + 928) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1872) + 1760i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 31)) + 920i64);
                goto LABEL_1038;
            case 0x32B:
                v32 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1744) + 112i64) + 8i64 * (unsigned __int8)(-119 * v5)) + 712i64));
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 272) ^ 0xC311317E;
                goto LABEL_1039;
            case 0x32C:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1320) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 8i64 * (((unsigned __int8)v5 ^ 0x9B) & 0xF5)) + 1504i64);
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 904) + 872i64) + 4i64 * ((unsigned __int8)v5 & 0xCC));
                goto LABEL_1039;
            case 0x32D:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 1376i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1640);
                v32 -= FuckEnc::CacheRead<_DWORD>(v10 + 64);
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 1704);
                goto LABEL_1039;
            case 0x32E:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1504) + 1424i64) + 8i64 * (((unsigned __int8)v5 ^ 0xDD) & 0xFA)) + 1416i64);
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1224) + 4i64 * (unsigned __int8)(-101 * v5)) ^ v11;
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v4 + 1696);
                goto LABEL_1038;
            case 0x32F:
                v32 = v11 - 1509103411;
                v32 = v5 + __ROR4__(v11 - 1509103411, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 1312i64) + 848i64) + 144i64) + 592i64));
                goto LABEL_1039;
            case 0x330:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 8i64 * ((unsigned __int8)v5 ^ 0xD9u)) + 520i64) + 240i64) + 4i64 * ((unsigned __int8)v5 ^ 0xF5u)) * v5;
                goto LABEL_1039;
            case 0x331:
                Calls::FastCall(v4 + 128, &v32, v5, v4);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 432) + 272i64) + 107574340;
                goto LABEL_1039;
            case 0x332:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 736);
                v12 = v11 - (FuckEnc::CacheRead<_DWORD>(v10 + 1248) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 1744i64) + 1632i64));
                goto LABEL_1038;
            case 0x333:
                v32 = v11 ^ 0x184A1ABA;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 944);
                v32 = (v11 ^ 0x184A1ABA) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 616) + 848i64) + 1424i64) + 8i64 * ((57 * (_BYTE)v5) & 0x42)) + 1248i64);
                goto LABEL_1039;
            case 0x334:
                v32 = v11 ^ ~(FuckEnc::CacheRead<_DWORD>(v4 + 384) ^ 0x55242298);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 1832i64);
                v32 = __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(v10 + 384));
                goto LABEL_1039;
            case 0x335:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 736);
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1320);
                v12 = v32 - (FuckEnc::CacheRead<_DWORD>(v4 + 1648) | 0x1C);
                goto LABEL_1038;
            case 0x336:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 600);
                v32 = v5 ^ (v32 - FuckEnc::CacheRead<_DWORD>(v4 + 600));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 1272i64);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v10 + 56);
                goto LABEL_1038;
            case 0x337:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 1424i64) + 8i64 * (__ROR4__(v5, 18) & 0xD0)) + 560i64);
                Calls::FastCall(v4 + 1160, &v32, v5, v10);
                goto LABEL_1039;
            case 0x338:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 104);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 1192) + 8i64 * ((unsigned __int8)v5 & 0xDD), &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 560));
                goto LABEL_1039;
            case 0x339:
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 328) + 896i64) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 976) - 1023309500 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 928i64), 21)) ^ v11;
                goto LABEL_1038;
            case 0x33A:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1904);
                v32 ^= ~FuckEnc::CacheRead<_DWORD>(v4 + 8);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1392);
                v32 = __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(v10 + 600));
                goto LABEL_1039;
            case 0x33B:
                v32 = v11 + 561929306 * (FuckEnc::CacheRead<_DWORD>(v4 + 264) * v5 + FuckEnc::CacheRead<_DWORD>(v4 + 1912) * (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 392)));
                goto LABEL_1039;
            case 0x33C:
                v32 = v11 ^ 0xC3018944;
                v32 = __ROR4__(v11 ^ 0xC3018944, FuckEnc::CacheRead<_DWORD>(v4 + 592));
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 384);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1872);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v10 + 976);
                goto LABEL_1039;
            case 0x33D:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 648);
                v12 = v32 - 1764470768 * FuckEnc::CacheRead<_DWORD>(v4 + 976) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 984) + 384i64) ^ 0x30F442E7);
                goto LABEL_1038;
            case 0x33E:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1248);
                v32 = __ROL4__(v32 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 576) + 664i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 1960) - 771800651)), v5);
                goto LABEL_1039;
            case 0x33F:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1704);
                Calls::FastCall(v4 + 832, &v32, v5, v4);
                v32 += 1280400829 + FuckEnc::CacheRead<_DWORD>(v4 + 1960);
                goto LABEL_1039;
            case 0x340:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 1216i64);
                v32 = v11 + 1 + FuckEnc::CacheRead<_DWORD>(v10 + 928);
                v12 = v32 ^ (-944950300 * FuckEnc::CacheRead<_DWORD>(v4 + 1904));
                goto LABEL_1038;
            case 0x341:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 576) + 1872i64) + 872i64) + 4i64 * (unsigned __int8)(-107 * v5));
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 336) + 2055307655;
                goto LABEL_1039;
            case 0x342:
                v32 = ~(v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 992i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 624i64) + 8i64 * ((7 * (_BYTE)v5) & 0x56)) + 1368i64)));
                goto LABEL_1039;
            case 0x343:
                v32 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 1576) | 0x1D);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 1456i64) + 768i64) + 8i64 * ((unsigned __int8)v5 & 0xDA)) + 64i64);
                goto LABEL_1038;
            case 0x344:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 976) * v5;
                v12 = ~(v32 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 872i64) + 4i64 * (v5 & 0x73)));
                goto LABEL_1038;
            case 0x345:
                v32 = __ROL4__(v11 + FuckEnc::CacheRead<_DWORD>(v4 + 976), v5);
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 8i64 * (-FuckEnc::CacheRead<_DWORD>(v4 + 1040) & 0x3A)) + 392i64);
                goto LABEL_1039;
            case 0x346:
                v32 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 120) + 8i64 * ((unsigned __int8)v5 & 0x84)) + 104i64) + 1096i64) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 600), 12)) + 1320i64);
                goto LABEL_1039;
            case 0x347:
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 1312i64) + 1760i64) + 8i64 * (unsigned __int8)(-86 * v5)) + 1640i64) + 1872i64) + 1928i64) + 712i64);
                goto LABEL_1038;
            case 0x348:
                v32 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1104) + 8i64 * ((unsigned __int8)v5 & 0xD1)) + 1912i64) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 712) + 1840685283)) + 1;
                goto LABEL_1039;
            case 0x349:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 288) + 416i64, &v32, v5, v4);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 648);
                goto LABEL_1039;
            case 0x34A:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1584);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 848) + 656i64);
                v12 = v32 ^ FuckEnc::CacheRead<_DWORD>(v10 + 8) ^ (v5 + FuckEnc::CacheRead<_DWORD>(v4 + 1304));
                goto LABEL_1038;
            case 0x34B:
                v32 = v11 ^ (v5 * FuckEnc::CacheRead<_DWORD>(v4 + 1304) * (FuckEnc::CacheRead<_DWORD>(v4 + 592) << 24));
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 1584);
                goto LABEL_1039;
            case 0x34C:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 600);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 432i64);
                Calls::FastCall(v4 + 360, &v32, v5, v10);
                goto LABEL_1039;
            case 0x34D:
                v32 = v11 + 1606440967 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 656) + 1304i64) + 1);
                v32 = __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 448) + 8i64 * (v5 & 0x13)) + 920i64));
                goto LABEL_1039;
            case 0x34E:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 8i64 * ((unsigned __int8)v5 ^ 0xAFu)) + 1888i64) + 1872i64);
                Calls::FastCall(v10 + 1488, &v32, v5, v4);
                goto LABEL_1039;
            case 0x34F:
                v32 = v11 + 1023309500;
                v32 = v11 + 1023309500 - (FuckEnc::CacheRead<_DWORD>(v4 + 1904) & 0xFFFFFFE7);
                v32 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * (unsigned __int8)__ROR4__(v5, 23)) + 664i64);
                goto LABEL_1039;
            case 0x350:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 232) + 1392i64);
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1176) + 1584i64);
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 776) + 8i64 * ((unsigned __int8)v5 & 0xC4)) + 1376i64);
                goto LABEL_1039;
            case 0x351:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 192) + 1504i64) + 1600i64);
                Calls::FastCall(v4 + 368, &v32, v5, FuckEnc::CacheRead<_QWORD>(v10 + 1832));
                goto LABEL_1039;
            case 0x352:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 248);
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v10 + 1040);
                Calls::FastCall(v4 + 40, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1832) + 328i64));
                goto LABEL_1039;
            case 0x353:
                Calls::FastCall(v4 + 1488, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 8i64 * ((unsigned __int8)v5 & 0xC9)) + 1104i64) + 8i64 * (__ROL4__(v5, 21) & 0x24)));
                goto LABEL_1039;
            case 0x354:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1368);
                v32 ^= v5 ^ FuckEnc::CacheRead<_DWORD>(v4 + 264) ^ (-1793903607 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 560) + 1320i64));
                goto LABEL_1039;
            case 0x355:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 656) + 1784i64) + 544i64) + 4i64 * ((unsigned __int8)v5 ^ 0xD8u));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1832);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v10 + 1904);
                goto LABEL_1038;
            case 0x356:
                v32 = __ROR4__(v11 + 1284338635 * FuckEnc::CacheRead<_DWORD>(v4 + 1048), 159);
                v12 = v32 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 976) * ~FuckEnc::CacheRead<_DWORD>(v4 + 600));
                goto LABEL_1038;
            case 0x357:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1416) + 416i64, &v32, v5, FuckEnc::CacheReadPlural<_QWORD>(v4 + 120));
                goto LABEL_1039;
            case 0x358:
                v32 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 904) + 1392i64) + 272i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1456);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 440) + 8i64 * (unsigned __int8)__ROR4__(v5, 1)) + 928i64);
                goto LABEL_1038;
            case 0x359:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1832);
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 472) + 928i64);
                v12 = v32 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 216i64) + 4i64 * ((unsigned __int8)v5 & 0xFD)) - v5;
                goto LABEL_1038;
            case 0x35A:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1632);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1760) + 8i64 * ((unsigned __int8)v5 ^ 0xD5u)) + 1752i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 28)) + 1856i64) + 4i64 * (unsigned __int8)(-64 * v5)) ^ v32;
                goto LABEL_1038;
            case 0x35B:
                v32 = __ROR4__(v11, v5);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 80) + 328i64) + 944i64);
                v32 += FuckEnc::CacheRead<_DWORD>(v10 + 976);
                goto LABEL_1039;
            case 0x35C:
                Calls::FastCall(v4 + 696, &v32, v5, v4);
                v32 = v32 - 922136832 + ~FuckEnc::CacheRead<_DWORD>(v4 + 1256);
                goto LABEL_1039;
            case 0x35D:
                v32 = __ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 592) ^ v11 ^ 0xCA5B10B6, 65);
                v32 += ~FuckEnc::CacheRead<_DWORD>(v4 + 928);
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 1256);
                goto LABEL_1039;
            case 0x35E:
                v32 = v11 - 1076783959;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1744);
                v12 = v11 - 1076783959 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 1424i64) + 8i64 * (unsigned __int8)(11 * FuckEnc::CacheRead<_BYTE>(v10 + 1576))) + 1912i64);
                goto LABEL_1038;
            case 0x35F:
                v32 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1904) * v5);
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1432) + 8i64 * (unsigned __int8)(-55 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 328) + 64i64))) + 1304i64);
                goto LABEL_1039;
            case 0x360:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 920) ^ v11;
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 264);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1104) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 384) & 0xE6)) + 984i64);
                v12 = FuckEnc::CacheRead<_DWORD>(v10 + 1648) ^ v32;
                goto LABEL_1038;
            case 0x361:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 264) ^ v11 ^ 0x70D0FF7D;
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 592) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1640) + 8i64);
                goto LABEL_1039;
            case 0x362:
                v32 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 1648);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 432) + 1600i64) + 1272i64) + 1064i64);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v10 + 712);
                goto LABEL_1039;
            case 0x363:
                v32 = (FuckEnc::CacheRead<_DWORD>(v4 + 1304) ^ v11) + 821946010;
                v32 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 8i64 * ((14 * FuckEnc::CacheRead<_BYTE>(v4 + 600)) & 0x11)) + 928i64);
                goto LABEL_1039;
            case 0x364:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 1128i64) + 992i64);
                v32 ^= v5 * (FuckEnc::CacheRead<_DWORD>(v4 + 392) & 0xFFFFFFF5) + 1266938310;
                goto LABEL_1039;
            case 0x365:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 472);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 296) + 8i64 * (unsigned __int8)(-94 * v5)) + 352i64) + 8i64 * ((unsigned __int8)v5 & 0xCE), &v32, v5, v4);
                goto LABEL_1039;
            case 0x366:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 264);
                v32 = __ROL4__(v32, FuckEnc::CacheRead<_DWORD>(v4 + 1696));
                v32 ^= ~(FuckEnc::CacheRead<_DWORD>(v4 + 384) ^ 0x30D1FF41);
                goto LABEL_1039;
            case 0x367:
                v12 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 568) + 4i64 * (unsigned __int8)__ROR4__(v5 + (FuckEnc::CacheRead<_DWORD>(v4 + 1576) & 0xFFFFFFE6) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1232) + 712i64), 11)) ^ v11);
                goto LABEL_1038;
            case 0x368:
                v32 = v11 + 1 + FuckEnc::CacheRead<_DWORD>(v4 + 992);
                v32 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 984) + 440i64) + 8i64 * (v5 & 0x56)) + 1200i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 4));
                goto LABEL_1039;
            case 0x369:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 976) - v5;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1744);
                v32 ^= ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1272) + 1304i64) ^ 0x7E3B044C);
                goto LABEL_1039;
            case 0x36A:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 80);
                Calls::FastCall(v4 + 696, &v32, v5, v10);
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 1904);
                goto LABEL_1039;
            case 0x36B:
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1224) + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 8) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1064) + 1216i64) + 1224i64) + 4i64 * (unsigned __int8)(3 * v5)), 12));
                goto LABEL_1038;
            case 0x36C:
                v32 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 984) + 56i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 8) + (FuckEnc::CacheRead<_DWORD>(v4 + 1576) >> 13)));
                goto LABEL_1039;
            case 0x36D:
                v32 = v11 ^ 0xE01AEFAF;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1456) + 368i64, &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 984));
                goto LABEL_1039;
            case 0x36E:
                v32 = v11 ^ ~(FuckEnc::CacheRead<_DWORD>(v4 + 1040) >> 9);
                v32 = __ROR4__(v32, FuckEnc::CacheRead<_BYTE>(v4 + 56) + 19) + 1460657298;
                goto LABEL_1039;
            case 0x36F:
                v32 = v11 + 1321188774 + FuckEnc::CacheRead<_DWORD>(v4 + 712);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 192) + 656i64) + 232i64) + 328i64) + 992i64);
                goto LABEL_1039;
            case 0x370:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1648);
                v32 = (v32 + (FuckEnc::CacheRead<_DWORD>(v4 + 272) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 1696i64))) ^ 0x7C421A2C;
                goto LABEL_1039;
            case 0x371:
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 8i64 * ((unsigned __int8)v5 & 0xED)) + 248i64) + 1760i64) + 8i64 * (__ROR4__(v5, 11) & 0x3A)) + 216i64) + 4i64 * (((unsigned __int8)v5 ^ 0x24) & 0xAF)) ^ v11 ^ 0xC3018944;
                goto LABEL_1038;
            case 0x372:
                v32 = v11 + 934740264;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1744);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 464) + 8i64 * (unsigned __int8)__ROR4__(v5, 21), &v32, v5, v4);
                goto LABEL_1039;
            case 0x373:
                v32 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 760) + 1632i64)) ^ 0xA3D1FF41;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 848);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1552) + 4i64 * (unsigned __int8)__ROR4__(v5, 3)) ^ v32 ^ 0xC3018944;
                goto LABEL_1038;
            case 0x374:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1904);
                v32 ^= (FuckEnc::CacheRead<_DWORD>(v4 + 1704) ^ 0xBB84DBB) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * (unsigned __int8)(90 * v5)) + 64i64);
                goto LABEL_1039;
            case 0x375:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 760) + 1272i64);
                v12 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1432) + 8i64 * ((unsigned __int8)v5 ^ 0x1Bu)) + 624i64) + 8i64 * (unsigned __int8)(58 * v5)) + 1088i64) + 56i64));
                goto LABEL_1038;
            case 0x376:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1720) + 776i64) + 8i64 * ((unsigned __int8)v5 & 0xB1)) + 1928i64) + 1096i64) + 8i64 * ((unsigned __int8)v5 ^ 0xC2u)) + 288i64);
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 976);
                goto LABEL_1038;
            case 0x377:
                v32 = (FuckEnc::CacheRead<_DWORD>(v4 + 1584) ^ v11) + 1023331949;
                v12 = v32 + FuckEnc::CacheRead<_DWORD>(v4 + 976) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1432) + 8i64 * (v5 & 0x55)) + 1912i64);
                goto LABEL_1038;
            case 0x378:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 888) + 1784i64) + 800i64) + 920i64);
                Calls::FastCall(v4 + 1016, &v32, v5, v4);
                goto LABEL_1039;
            case 0x379:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 8i64 * (((unsigned __int8)v5 ^ 0x41) & 0xC7)) + 944i64);
                v12 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 576) + 1608i64) + 8i64 * ((unsigned __int8)v5 & 0xC0)) + 392i64) ^ v11);
                goto LABEL_1038;
            case 0x37A:
                v32 = v11 + v5;
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 288i64) + 200i64, &v32, v5, v4);
                goto LABEL_1039;
            case 0x37B:
                v12 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 80) + 1216i64) + 240i64) + 4i64 * ((-26 * (_BYTE)v5) & 0x2E)) ^ (FuckEnc::CacheRead<_DWORD>(v4 + 384) >> 2));
                goto LABEL_1038;
            case 0x37C:
                v32 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 1040) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 8i64 * (((unsigned __int8)v5 ^ 0x54) & 0xD4)) + 1224i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 1)) ^ 0xC15DC2AE) + 1;
                goto LABEL_1039;
            case 0x37D:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 392);
                v32 = __ROL4__(v32, FuckEnc::CacheRead<_DWORD>(v4 + 712));
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 384) + 1;
                goto LABEL_1039;
            case 0x37E:
                v32 = __ROR4__(v11, ((FuckEnc::CacheRead<_DWORD>(v4 + 1584) >> 1) ^ 0xAA) & 0xF7);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * (v5 & 0x67)) + 264i64);
                goto LABEL_1038;
            case 0x37F:
                v32 = __ROR4__(v11 ^ 0x7E383BA3, 173);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 120) + 8i64 * (__ROR4__(v5, 4) & 0x54)) + 144i64);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 872) + 4i64 * (unsigned __int8)__ROL4__(v5, 8)) ^ v32;
                goto LABEL_1038;
            case 0x380:
                v32 = (v11 ^ 0xC301315D) - 1380324495;
                v12 = FuckEnc::CacheRead<_DWORD>(v4 + 1320) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 560) + 1576i64) + v32 + 1;
                goto LABEL_1038;
            case 0x381:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1040) ^ v11;
                v12 = __ROL4__(v32, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 952) + 8i64 * (((unsigned __int8)v5 ^ 8) & 0x4B)) + 472i64) + 1784i64) + 1320i64));
                goto LABEL_1038;
            case 0x382:
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 8i64 * (v5 & 0x74)) + 1760i64) + 8i64 * (unsigned __int8)(7 * v5)) + 408i64) + 1280i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 8)) + 1704i64) ^ v11;
                goto LABEL_1038;
            case 0x383:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 576);
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v10 + 1192) + 8i64 * (unsigned __int8)(-120 * v5), &v32, v5, v4);
                v32 -= 667553328;
                goto LABEL_1039;
            case 0x384:
                v32 = v11 + 633971387 * FuckEnc::CacheRead<_DWORD>(v4 + 1376);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1104) + 8i64 * (unsigned __int8)__ROL4__(v5, 14)) + 232i64) + 1928i64) + 384i64);
                goto LABEL_1039;
            case 0x385:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 64);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1696);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 248) + 1832i64);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v10 + 264);
                goto LABEL_1038;
            case 0x386:
                v32 = v11 + 1711897658;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1888);
                v32 = __ROR4__(v11 + 1711897658, FuckEnc::CacheRead<_BYTE>(v4 + 272) + 100 * ~FuckEnc::CacheRead<_BYTE>(v10 + 392));
                goto LABEL_1039;
            case 0x387:
                v32 = v11 ^ 0xDC7E364E;
                v32 = (v11 ^ 0xDC7E364E) + FuckEnc::CacheRead<_DWORD>(v4 + 1960) + ~FuckEnc::CacheRead<_DWORD>(v4 + 1704);
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 1632);
                goto LABEL_1039;
            case 0x388:
                Calls::FastCall(v4 + 40, &v32, v5, v4);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 888) + 1552i64) + 4i64 * (unsigned __int8)__ROL4__(v5, 3));
                goto LABEL_1039;
            case 0x389:
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1232) + 712i64) ^ v11;
                v12 = v32 - 199753728 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1640) + 1224i64) + 4i64 * (v5 & 0x7C));
                goto LABEL_1038;
            case 0x38A:
                v12 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 120) + 8i64 * ((unsigned __int8)v5 & 0xFD)) + 1912i64) + ~FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 408) + 1368i64));
                goto LABEL_1038;
            case 0x38B:
                v32 = v11 ^ 0xF226CB56;
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 712) ^ v11 ^ 0xF226CB56;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1744) + 432i64) + 984i64);
                v32 += FuckEnc::CacheRead<_DWORD>(v10 + 1960);
                goto LABEL_1039;
            case 0x38C:
                v32 = v11 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1424) + 8i64 * (unsigned __int8)(-65 * FuckEnc::CacheRead<_BYTE>(v4 + 1632))) + 1320i64) ^ (v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 336i64)) ^ 0x725B54D1;
                goto LABEL_1039;
            case 0x38D:
                v32 = v11 + 1468618989 * FuckEnc::CacheRead<_DWORD>(v4 + 320);
                v32 = ~(v32 - FuckEnc::CacheRead<_DWORD>(v4 + 1256) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 576) + 712i64));
                goto LABEL_1039;
            case 0x38E:
                v32 = (FuckEnc::CacheRead<_DWORD>(v4 + 56) ^ v11) + 482229131;
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 472) + 1752i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 19)) + 192i64) + 1704i64);
                goto LABEL_1039;
            case 0x38F:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 112) + 8i64 * ((unsigned __int8)v5 & 0xCC)) + 1096i64) + 8i64 * ((unsigned __int8)v5 & 0x85)) + 1160i64, &v32, v5, v4);
                goto LABEL_1039;
            case 0x390:
                v32 = __ROR4__(v11 - FuckEnc::CacheRead<_DWORD>(v4 + 648), 68);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1312) + 104i64) + 656i64) + 1040i64);
                goto LABEL_1038;
            case 0x391:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 8);
                v32 = __ROL4__(v32, FuckEnc::CacheRead<_DWORD>(v4 + 920));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1416);
                v12 = __ROL4__(v32, FuckEnc::CacheRead<_BYTE>(v10 + 592) + FuckEnc::CacheRead<_BYTE>(v4 + 1368));
                goto LABEL_1038;
            case 0x392:
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheReadPlural<_QWORD>(v4 + 408) + 1104i64) + 8i64 * ((unsigned __int8)v5 ^ 0x76u)) + 1128i64) + 1784i64) + 1880i64) + 4i64 * ((unsigned __int8)(-49 * v5) & 0x84));
                goto LABEL_1038;
            case 0x393:
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 568) + 4i64 * (unsigned __int8)(51 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 328) + 432i64) + 1088i64) + 1696i64))) ^ v11;
                goto LABEL_1038;
            case 0x394:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1432) + 8i64 * (v5 & 0x5F)) + 448i64) + 8i64 * (unsigned __int8)(123 * v5)) + 248i64) + 928i64);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v4 + 384);
                goto LABEL_1038;
            case 0x395:
                v32 = (FuckEnc::CacheRead<_DWORD>(v4 + 392) ^ v11) - 1066302121;
                v12 = __ROL4__(__ROR4__(v32, ~(FuckEnc::CacheRead<_DWORD>(v4 + 1960) - 4)), 49);
                goto LABEL_1038;
            case 0x396:
                Calls::FastCall(v4 + 856, &v32, v5, v4);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 760);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v10 + 264) + 356401319;
                goto LABEL_1039;
            case 0x397:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1216) + 1832i64) + 1648i64);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 408) + 248i64);
                v32 = (v32 + FuckEnc::CacheRead<_DWORD>(v10 + 1376)) ^ 0x4A05812C;
                goto LABEL_1039;
            case 0x398:
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1912) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 448) + 8i64 * (__ROR4__(v5, 11) & 0x5D)) + 736i64) + 1880i64) + 4i64 * ((unsigned __int8)v5 ^ 0x81u));
                goto LABEL_1038;
            case 0x399:
                v32 = v11 - (FuckEnc::CacheRead<_DWORD>(v4 + 600) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 104) + 56i64) ^ 0x20D0367A);
                v12 = __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(v4 + 1696) >> 3);
                goto LABEL_1038;
            case 0x39A:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 600);
                v32 = __ROL4__(v32, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * (unsigned __int8)(-27 * FuckEnc::CacheRead<_BYTE>(v4 + 1960))) + 1312i64) + 1912i64));
                goto LABEL_1039;
            case 0x39B:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1576) ^ v11 ^ 0x82C31131;
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1544) + 1888i64) + 1760i64) + 8i64 * (__ROR4__(v5, 4) & 0x51)) + 1368i64);
                goto LABEL_1038;
            case 0x39C:
                Calls::FastCall(v4 + 456, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 8i64 * ((unsigned __int8)(91 * FuckEnc::CacheRead<_BYTE>(v4 + 264)) & 0x8E)));
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 1696);
                goto LABEL_1039;
            case 0x39D:
                v32 = v11 + 1100663170;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1176);
                v32 = v11 + 1100663170 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1928) + 1432i64) + 8i64 * (unsigned __int8)(-40 * v5)) + 1744i64) + 1368i64);
                goto LABEL_1039;
            case 0x39E:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 64);
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 384i64) + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 392i64);
                goto LABEL_1039;
            case 0x39F:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 520) + 384i64);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v4 + 712) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1552) + 4i64 * (unsigned __int8)(-34 * (FuckEnc::CacheRead<_DWORD>(v4 + 272) ^ 0x38)));
                goto LABEL_1038;
            case 0x3A0:
                v32 = __ROR4__(v11, 97 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1504) + 1544i64) + 800i64) + 264i64));
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1368) >> 22;
                goto LABEL_1039;
            case 0x3A1:
                v32 = v11 + ~(FuckEnc::CacheRead<_DWORD>(v4 + 976) ^ 0x4CA9474D);
                v32 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 872i64) + 4i64 * (unsigned __int8)__ROR4__(v5, 10)) + 1023309500;
                goto LABEL_1039;
            case 0x3A2:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 216i64) + 4i64 * (((unsigned __int8)v5 ^ 0xFE) & 3));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 192);
                v12 = (v32 + FuckEnc::CacheRead<_DWORD>(v10 + 1376)) ^ 0xC3013104;
                goto LABEL_1038;
            case 0x3A3:
                v32 = v11 + ~FuckEnc::CacheRead<_DWORD>(v4 + 1904);
                v32 = __ROL4__(v32, FuckEnc::CacheRead<_BYTE>(v4 + 1048) * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1504) + 1880i64) + 4i64 * ((unsigned __int8)v5 & 0x9B)));
                goto LABEL_1039;
            case 0x3A4:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1544) + 104i64) + 832i64, &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 888));
                goto LABEL_1039;
            case 0x3A5:
                v32 = __ROR4__(v11, 218);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1584);
                v12 = __ROL4__(v32, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 120) + 8i64 * ((unsigned __int8)v5 & 0x9C)) + 1552i64) + 4i64 * (((unsigned __int8)v5 ^ 0xBD) & 0xC6)));
                goto LABEL_1038;
            case 0x3A6:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1560);
                v12 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 296) + 8i64 * (unsigned __int8)(-17 * v5)) + 1872i64) + 872i64) + 4i64 * ((unsigned __int8)(46 * v5) & 0xAA)) & 0xFFFFFFE0);
                goto LABEL_1038;
            case 0x3A7:
                v12 = v11 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 240) + 4i64 * ((unsigned __int8)(2 * ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1304)) & 0xDC)) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 8i64 * ((unsigned __int8)(-67 * FuckEnc::CacheRead<_BYTE>(v4 + 928)) & 0xFC)) + 392i64));
                goto LABEL_1038;
            case 0x3A8:
                v32 = v11 + ~(FuckEnc::CacheRead<_DWORD>(v4 + 1040) >> 4);
                v12 = v32 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1544) + 1560i64) + 216i64) + 4i64 * (unsigned __int8)(-76 * v5));
                goto LABEL_1038;
            case 0x3A9:
                v32 = v11 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1648) - 1782271079);
                v12 = v32 ^ (FuckEnc::CacheRead<_DWORD>(v4 + 1320) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1104) + 8i64 * ((unsigned __int8)v5 & 0xD9)) + 1368i64));
                goto LABEL_1038;
            case 0x3AA:
                v32 = __ROL4__(v11, -101 * FuckEnc::CacheRead<_BYTE>(v4 + 976));
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1432) + 8i64 * (unsigned __int8)(-12 * v5)) + 1224i64) + 4i64 * (unsigned __int8)(46 * v5));
                goto LABEL_1038;
            case 0x3AB:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 720);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 328) + 8i64) + FuckEnc::CacheRead<_DWORD>(v4 + 1048) + 584122333;
                goto LABEL_1039;
            case 0x3AC:
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 760) + 1424i64) + 8i64 * ((unsigned __int8)(24 * v5) & 0xF4)) + 1560i64) + 216i64) + 4i64 * ((unsigned __int8)v5 & 0x96)) ^ v11;
                v12 = FuckEnc::CacheRead<_DWORD>(v4 + 1584) ^ v32;
                goto LABEL_1038;
            case 0x3AD:
                v32 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1304));
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 904) + 720i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 576);
                v32 -= FuckEnc::CacheRead<_DWORD>(v10 + 272);
                goto LABEL_1039;
            case 0x3AE:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1600);
                v12 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 888) + 896i64) + 4i64 * ((unsigned __int8)v5 & 0x83)) * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1880) + 4i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1248) & 0x19)));
                goto LABEL_1038;
            case 0x3AF:
                v32 = v11 + ~(FuckEnc::CacheRead<_DWORD>(v4 + 600) ^ FuckEnc::CacheRead<_DWORD>(v4 + 1304) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1640) + 592i64));
                goto LABEL_1039;
            case 0x3B0:
                v32 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 392) >> 5);
                v12 = v32 + (FuckEnc::CacheRead<_DWORD>(v4 + 976) ^ (-1718780327 * FuckEnc::CacheRead<_DWORD>(v4 + 1376)) ^ 0xF3C30131);
                goto LABEL_1038;
            case 0x3B1:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1696) ^ v11;
                v32 ^= ~(-1160642751 * ((unsigned int)~FuckEnc::CacheRead<_DWORD>(v4 + 1584) >> 21));
                goto LABEL_1039;
            case 0x3B2:
                v32 = v11 - v5;
                v32 = v11 - v5 + FuckEnc::CacheRead<_DWORD>(v4 + 992) * ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 8i64 * (unsigned __int8)(-124 * FuckEnc::CacheRead<_BYTE>(v4 + 1960))) + 648i64);
                goto LABEL_1039;
            case 0x3B3:
                Calls::FastCall(v4 + 1072, &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1744));
                v32 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1784) + 64i64);
                goto LABEL_1039;
            case 0x3B4:
                v32 = v11 ^ (1464781108 * FuckEnc::CacheRead<_DWORD>(v4 + 1048));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 408i64);
                v12 = v32 + (FuckEnc::CacheRead<_DWORD>(v4 + 592) ^ FuckEnc::CacheRead<_DWORD>(v10 + 1368));
                goto LABEL_1038;
            case 0x3B5:
                v32 = __ROL4__(v11, FuckEnc::CacheRead<_BYTE>(v4 + 1912) * (FuckEnc::CacheRead<_BYTE>(v4 + 1960) ^ v5));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 656);
                v12 = __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 240) + 4i64 * (unsigned __int8)(-35 * v5)));
                goto LABEL_1038;
            case 0x3B6:
                v32 = v5 + v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1632);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 888) + 472i64);
                v12 = v32 ^ (FuckEnc::CacheRead<_DWORD>(v10 + 1040) - 145388514);
                goto LABEL_1038;
            case 0x3B7:
                v32 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 992));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 616);
                Calls::FastCall(v10 + 856, &v32, v5, v4);
                goto LABEL_1039;
            case 0x3B8:
                v32 = (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 928)) ^ 0xA9D1FF41;
                Calls::FastCall(v4 + 176, &v32, v5, v4);
                v32 = ~v32;
                goto LABEL_1039;
            case 0x3B9:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 336) - 732913334;
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 720);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v4 + 1576) - v5;
                goto LABEL_1038;
            case 0x3BA:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 392);
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 64) ^ 0xA0316364;
                v32 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 760) + 1632i64) ^ 0x9A400C2F;
                goto LABEL_1039;
            case 0x3BB:
                v32 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1312) + 1648i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 1040) + ((-605836470 * FuckEnc::CacheRead<_DWORD>(v4 + 384)) | 5)));
                goto LABEL_1039;
            case 0x3BC:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1928) + 1784i64);
                v32 = v11 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1872) + 1320i64) * (FuckEnc::CacheRead<_DWORD>(v4 + 320) << 20));
                goto LABEL_1039;
            case 0x3BD:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 8i64 * (unsigned __int8)__ROL4__(v5, 26)) + 1912i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 288);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1760) + 8i64 * (unsigned __int8)(-65 * v5)) + 920i64) ^ v32;
                goto LABEL_1038;
            case 0x3BE:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 904);
                Calls::FastCall(v4 + 728, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1432) + 8i64 * (~(_BYTE)v5 & 0x11)) + 952i64) + 8i64 * (unsigned __int8)(-84 * v5)));
                goto LABEL_1039;
            case 0x3BF:
                v32 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 1704) ^ ((FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1872) + 1280i64) + 8i64 * (((unsigned __int8)v5 ^ 0x16) & 0xBE)) + 1648i64) ^ 0xFF8E) << 15);
                goto LABEL_1039;
            case 0x3C0:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 560);
                v32 = (v11 - FuckEnc::CacheRead<_DWORD>(v10 + 336)) ^ 0xD3A1A679;
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1504) + 1216i64) + 1304i64) & 0xFFFFFFEA;
                goto LABEL_1039;
            case 0x3C1:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1048) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 1872i64);
                v12 = __ROL4__(v32, ~(FuckEnc::CacheRead<_BYTE>(v10 + 56) ^ FuckEnc::CacheRead<_BYTE>(v4 + 1632)));
                goto LABEL_1038;
            case 0x3C2:
                v32 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1232) + 240i64) + 4i64 * ((unsigned __int8)v5 ^ 0xB9u)) ^ 0xD5EE73F9);
                v12 = v32 + (FuckEnc::CacheRead<_DWORD>(v4 + 600) ^ 0x9ECEB327);
                goto LABEL_1038;
            case 0x3C3:
                v32 = (FuckEnc::CacheRead<_DWORD>(v4 + 264) ^ v11) - 1946377527;
                v32 = v32 - FuckEnc::CacheRead<_DWORD>(v4 + 1912) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 976i64) - 818258680;
                goto LABEL_1039;
            case 0x3C4:
                v32 = v5 ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1872);
                v32 = FuckEnc::CacheRead<_DWORD>(v10 + 384) ^ v5 ^ v11;
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 624) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 392) & 0x84)) + 1648i64);
                goto LABEL_1039;
            case 0x3C5:
                v32 = v5 ^ v11;
                v32 = v5 ^ v11 ^ (v5 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 8i64 * (unsigned __int8)__ROR4__(v5, 10)) + 56i64));
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 664);
                goto LABEL_1039;
            case 0x3C6:
                v32 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 80) + 1320i64) ^ v11;
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 712);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1088);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 984) + 1576i64) ^ v32;
                goto LABEL_1038;
            case 0x3C7:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1904);
                v32 += ((v5 + (FuckEnc::CacheRead<_DWORD>(v4 + 1648) ^ v5 | 0x1B)) | 3) + 1;
                goto LABEL_1039;
            case 0x3C8:
                v32 = v11 ^ (-1839083460 * (FuckEnc::CacheRead<_DWORD>(v4 + 992) ^ 0xC3018944));
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 1248) + 1;
                v32 -= FuckEnc::CacheRead<_DWORD>(v4 + 648);
                goto LABEL_1039;
            case 0x3C9:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1872) + 472i64);
                v32 = FuckEnc::CacheRead<_DWORD>(v10 + 1584) ^ v11;
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 8i64 * (unsigned __int8)__ROL4__(v5, 16)) + 976i64);
                goto LABEL_1039;
            case 0x3CA:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 624i64) + 8i64 * (FuckEnc::CacheRead<_DWORD>(v4 + 1040) & 0x58)) + 1344i64, &v32, v5, v4);
                goto LABEL_1039;
            case 0x3CB:
                v32 = v11 + 920391566;
                v32 = (v11 + 920391566) ^ (-1023332056 * FuckEnc::CacheRead<_DWORD>(v4 + 1368) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 656) + 1880i64) + 4i64 * (unsigned __int8)(23 * v5)));
                goto LABEL_1039;
            case 0x3CC:
                v32 = v11 ^ 0xCFAE0040;
                v32 = v11 ^ 0xCFAE0040 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 1912i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 144i64) + 928i64));
                goto LABEL_1039;
            case 0x3CD:
                v32 = v11 ^ FuckEnc::CacheRead<_DWORD>(v4 + 928) ^ FuckEnc::CacheRead<_DWORD>(v4 + 1704) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1096) + 8i64 * (unsigned __int8)__ROL4__(v5, 13)) + 1368i64);
                goto LABEL_1039;
            case 0x3CE:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 8i64 * ((unsigned __int8)v5 & 0x81)) + 1776i64) + 8i64 * (v5 & 0x6B), &v32, v5, v4);
                goto LABEL_1039;
            case 0x3CF:
                Calls::FastCall(v4 + 360, &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 616));
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1280) + 8i64 * ((unsigned __int8)__ROL4__(v5, 26) & 0xD1)) + 384i64);
                goto LABEL_1039;
            case 0x3D0:
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 888) + 1504i64) + 1544i64) + 576i64) + 288i64) + 1096i64) + 8i64 * (unsigned __int8)__ROL4__(v5, 21)) + 320i64);
                goto LABEL_1038;
            case 0x3D1:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 384);
                v12 = __ROL4__(v32, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1720) + 600i64) ^ ~FuckEnc::CacheRead<_BYTE>(v4 + 384));
                goto LABEL_1038;
            case 0x3D2:
                v12 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 888) + 1608i64) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1912) ^ 0x1Au)) + 264i64) - FuckEnc::CacheRead<_DWORD>(v4 + 1256);
                goto LABEL_1038;
            case 0x3D3:
                v32 = v11 - 8 * FuckEnc::CacheRead<_DWORD>(v4 + 1040) - 868417840;
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 408) + 648i64) | 0xD;
                goto LABEL_1039;
            case 0x3D4:
                v32 = ~v11;
                v32 = ~v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 336i64);
                Calls::FastCall(v4 + 784, &v32, v5, v4);
                goto LABEL_1039;
            case 0x3D5:
                v32 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 56));
                v12 = __ROL4__(v32, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 120) + 8i64 * (v5 & 0x52)) + 664i64));
                goto LABEL_1038;
            case 0x3D6:
                v32 = v11 + (FuckEnc::CacheRead<_DWORD>(v4 + 320) ^ 0xDE3364A3);
                v32 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 736) + 760i64) + 896i64) + 4i64 * (v5 & 0x3C));
                goto LABEL_1039;
            case 0x3D7:
                v32 = ~(v11 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 8i64 * (v5 & 0x44)) + 1640i64) + 1096i64) + 8i64 * (v5 & 0x40)) + 1224i64) + 4i64 * ((unsigned __int8)(-41 * v5) & 0xF6)));
                goto LABEL_1039;
            case 0x3D8:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 904) + 1560i64);
                v32 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v10 + 1320)) - 993785857;
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4) + 248i64) + 1960i64);
                goto LABEL_1039;
            case 0x3D9:
                v32 = v11 + 227835844 * FuckEnc::CacheRead<_DWORD>(v4 + 392) * FuckEnc::CacheRead<_DWORD>(v4 + 1632);
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 592);
                goto LABEL_1039;
            case 0x3DA:
                v32 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1720) + 1272i64) + 56i64));
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 472);
                v12 = __ROR4__(v32, ~FuckEnc::CacheRead<_BYTE>(v10 + 1912));
                goto LABEL_1038;
            case 0x3DB:
                v32 = v11 + 1022283314;
                v32 = v11 + 1022283314 + FuckEnc::CacheRead<_DWORD>(v4 + 392) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 240) + 4i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 8i64 * ((unsigned __int8)(-15 * v5) & 0x83)) + 1912i64) & 0xEA));
                goto LABEL_1039;
            case 0x3DC:
                v32 = ~v11;
                v32 = __ROR4__(~v11, FuckEnc::CacheRead<_DWORD>(v4 + 1320) | 0x19);
                v32 = (v32 + (FuckEnc::CacheRead<_DWORD>(v4 + 1248) >> 12)) ^ 0x99965E50;
                goto LABEL_1039;
            case 0x3DD:
                v12 = __ROR4__(v11, FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 80) + 1048i64) + ~FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 800) + 944i64) + 928i64));
                goto LABEL_1038;
            case 0x3DE:
                v32 = v11 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1744) + 56i64);
                v12 = v32 + FuckEnc::CacheRead<_DWORD>(v4 + 664) + 215023582 * FuckEnc::CacheRead<_DWORD>(v4 + 384);
                goto LABEL_1038;
            case 0x3DF:
                v32 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 592));
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1520) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v4 + 1584) ^ 0x83u), &v32, v5, v4);
                goto LABEL_1039;
            case 0x3E0:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1176);
                v32 = FuckEnc::CacheRead<_DWORD>(v10 + 64) ^ v11;
                Calls::FastCall(v4 + 1056, &v32, v5, v4);
                v32 = ~v32;
                goto LABEL_1039;
            case 0x3E1:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1832) + 1016i64, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1936) + 8i64 * ((unsigned __int8)v5 & 0xA7)));
                goto LABEL_1039;
            case 0x3E2:
                v32 = v5 + v11 + 742021453;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 80);
                Calls::FastCall(v4 + 1464, &v32, v5, v10);
                goto LABEL_1039;
            case 0x3E3:
                Calls::FastCall(FuckEnc::CacheRead<_QWORD>(v4 + 1776) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(v4 + 600) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 984) + 712i64), 12), &v32, v5, v4);
                goto LABEL_1039;
            case 0x3E4:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 8);
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1504) + 656i64) + 1752i64) + 8i64 * (__ROL4__(v5, 3) & 0xB)) + 56i64);
                goto LABEL_1038;
            case 0x3E5:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 920) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1720);
                v12 = v32 - (FuckEnc::CacheRead<_DWORD>(v4 + 1960) ^ 0x16D0FF28) - FuckEnc::CacheRead<_DWORD>(v10 + 1912);
                goto LABEL_1038;
            case 0x3E6:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 920);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 736);
                v32 += 912419598 * FuckEnc::CacheRead<_DWORD>(v4 + 384) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1088) + 56i64);
                goto LABEL_1039;
            case 0x3E7:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1576);
                v12 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 8i64 * (unsigned __int8)__ROR4__(v5, 20)) + 1200i64) + 4i64 * ((unsigned __int8)v5 ^ 0x4Cu)) + v32 + 1;
                goto LABEL_1038;
            case 0x3E8:
                v32 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 616) + 1304i64));
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 944) + 80i64);
                v12 = __ROR4__(v32, (FuckEnc::CacheRead<_BYTE>(v10 + 1576) & 0xF8) + 42);
                goto LABEL_1038;
            case 0x3E9:
                v32 = v11 + FuckEnc::CacheRead<_DWORD>(v4 + 1048);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 576);
                v32 += FuckEnc::CacheRead<_DWORD>(v10 + 928) + 1;
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1704) ^ 0xFCD41985;
                goto LABEL_1039;
            case 0x3EA:
                v32 = (v11 + FuckEnc::CacheRead<_DWORD>(v4 + 64)) ^ 0x72D93D60;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 944);
                Calls::FastCall(v10 + 480, &v32, v5, v4);
                goto LABEL_1039;
            case 0x3EB:
                Calls::FastCall(v4 + 40, &v32, v5, v4);
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 192) + 1872i64) + 336i64);
                goto LABEL_1039;
            case 0x3EC:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1176) + 1304i64);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 232);
                Calls::FastCall(v4 + 1768, &v32, v5, v10);
                goto LABEL_1039;
            case 0x3ED:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 1648) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 656);
                Calls::FastCall(v10 + 1184, &v32, v5, v4);
                goto LABEL_1039;
            case 0x3EE:
                v32 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1608) + 8i64 * (unsigned __int8)__ROR4__(v5, 19)) + 1320i64));
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1432) + 8i64 * (unsigned __int8)(-81 * v5)) + 520i64) + 1576i64);
                goto LABEL_1039;
            case 0x3EF:
                v32 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1368));
                v32 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1104) + 8i64 * (unsigned __int8)(-75 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(v4 + 1560) + 1376i64))) + 56i64);
                v32 = __ROL4__(v32, FuckEnc::CacheRead<_DWORD>(v4 + 1248));
                goto LABEL_1039;
            case 0x3F0:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 1704);
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 768) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(v4 + 600), 17)) + 232i64) + 576i64);
                v12 = __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(v10 + 664));
                goto LABEL_1038;
            case 0x3F1:
                v32 = __ROL4__(v11, FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1312) + 1912i64));
                v32 = __ROL4__(v32, FuckEnc::CacheRead<_DWORD>(v4 + 392));
                v12 = __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(v4 + 1584) + 86);
                goto LABEL_1038;
            case 0x3F2:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v4 + 720);
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 576);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v10 + 1416) + 272i64) ^ ~FuckEnc::CacheRead<_DWORD>(v4 + 592);
                goto LABEL_1039;
            case 0x3F3:
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 1216);
                v32 = v5 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1200) + 4i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(v10 + 264) ^ 0xDE) & 0x6F)) ^ v11;
                v12 = ~__ROR4__(v32, FuckEnc::CacheRead<_DWORD>(v4 + 1960));
                goto LABEL_1038;
            case 0x3F4:
                v32 = FuckEnc::CacheRead<_DWORD>(v4 + 720) ^ v11;
                v10 = FuckEnc::CacheRead<_QWORD>(v4 + 408);
                Calls::FastCall(v10 + 856, &v32, v5, FuckEnc::CacheRead<_QWORD>(v4 + 1872));
                goto LABEL_1039;
            case 0x3F5:
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 888) + 944i64) + 432i64) + 712i64);
                v32 = __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(v4 + 600));
                v12 = v32 - FuckEnc::CacheRead<_DWORD>(v4 + 600);
                goto LABEL_1038;
            case 0x3F6:
                v32 = ~(v11 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 448) + 8i64 * (unsigned __int8)__ROR4__(v5, 29)) + 1088i64) + 1576i64));
                v32 += FuckEnc::CacheRead<_DWORD>(v4 + 392) + 1;
                goto LABEL_1039;
            case 0x3F7:
                Calls::FastCall(v4 + 1184, &v32, v5, v4);
                v32 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 8i64 * ((unsigned __int8)v5 & 0x8A)) + 1368i64);
                goto LABEL_1039;
            case 0x3F8:
                v32 = __ROR4__(v11, FuckEnc::CacheRead<_DWORD>(v4 + 1648)) - 2098004929;
                v12 = v32 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1744) + 1608i64) + 8i64 * (unsigned __int8)(-97 * v5)) + 568i64) + 4i64 * (v5 & 6));
                goto LABEL_1038;
            case 0x3F9:
                v32 = v5 + v11 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 560) + 592i64);
                v12 = v32 ^ FuckEnc::CacheRead<_DWORD>(v4 + 592) & 0xFFFFFFED;
                goto LABEL_1038;
            case 0x3FA:
                v32 = v11 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 440) + 8i64 * (unsigned __int8)__ROL4__(v5, 23)) + 56i64) ^ FuckEnc::CacheRead<unsigned __int8>(v4 + 1307));
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 1576);
                goto LABEL_1039;
            case 0x3FB:
                v32 = v11 + v5;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 520) + 1560i64);
                v32 = v11 + v5 - ((FuckEnc::CacheRead<_DWORD>(v10 + 384) * FuckEnc::CacheRead<_DWORD>(v4 + 1912)) & 0xFFFFFFF9);
                goto LABEL_1039;
            case 0x3FC:
                v32 = __ROL4__(v11, 16) + 915176399;
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 144) + 112i64) + 8i64 * (unsigned __int8)__ROR4__(v5, 18)) + 1544i64);
                v32 = __ROR4__(v32, FuckEnc::CacheRead<_DWORD>(v10 + 272));
                goto LABEL_1039;
            case 0x3FD:
                v32 = v5 ^ v11;
                v32 = (v5 ^ v11) - FuckEnc::CacheRead<_DWORD>(v4 + 1320);
                v32 ^= (unsigned int)(840618787 - FuckEnc::CacheRead<_DWORD>(v4 + 992)) >> 22;
                goto LABEL_1039;
            case 0x3FE:
                Calls::FastCall(v4 + 744, &v32, v5, FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1752) + 8i64 * (unsigned __int8)(-87 * v5)));
                v32 ^= FuckEnc::CacheRead<_DWORD>(v4 + 8);
                goto LABEL_1039;
            case 0x3FF:
                v10 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v4 + 1640) + 1888i64);
                v32 = v11 - FuckEnc::CacheRead<_DWORD>(v10 + 1048);
                v27 = FuckEnc::CacheRead<_DWORD>(v4 + 1368) + v32 + 1178932080;
            LABEL_1037:
                v12 = v5 + v27;
            LABEL_1038:
                v32 = v12;
            LABEL_1039:
                v6 += 4;
                *a2 = v32;
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
