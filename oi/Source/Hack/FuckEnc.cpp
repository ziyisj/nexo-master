#pragma warning(disable : 4146)

#include "FuckEnc.h"
#include <IDA/ida_defs.h>

void FuckEnc::FastCall(uint64_t func, int* a1, uint8_t base)
{
    func = func - GameData.Process.Base;
    func = (uint32_t)(func & 0x0FFFFFFF);
    //Utils::Log(1, XorStr("Unk Call: 0x%llX"), func);

    const uint64_t EncBase = base == 1 ? GameData.UPTRDecrypt.EncBase1 : GameData.UPTRDecrypt.EncBase0;

    switch (func)
    {
    case 0x27F42E0:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(EncBase + 0x2E8);
        *a1 ^= result;
    }
    break;
    case 0x27F48A0:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824) + 240i64) + 48i64);
        *a1 ^= result;
    }
    break;
    case 0x27F4860:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 648) + 40i64) + 872i64);
        *a1 ^= result;
    }
    break;
    case 0x27F4650:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 240) + 240i64) + 616i64);
        *a1 ^= result;
    }
    break;
    case 0x27F4510:
    {
        __int64 result; // rax

        result = (unsigned int)(-1487969476 * FuckEnc::CacheRead<_DWORD>(EncBase + 312));
        *a1 ^= result;
    }
    break;
    case 0x27F4690:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<_QWORD>(EncBase + 600);
        *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 480) ^ 0x22BF4651;
    }
    break;
    case 0x27F46F0:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 240) + 896i64) + 744i64);
        *a1 ^= result;
    }
    break;
    case 0x27F4570:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 432) + 832i64) + 576i64);
        *a1 ^= result;
    }
    break;
    case 0x27F4610:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 880) + 592i64) + 744i64);
        *a1 ^= result;
    }
    break;
    case 0x27F46B0:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<_QWORD>(EncBase + 40);
        *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 248) + 373575852;
    }
    break;
    case 0x27F4470:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 360) + 736i64) + 384i64);
        *a1 ^= result;
    }
    break;
    case 0x27F44F0:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 240) + 832i64) + 152i64);
        *a1 ^= result;
    }
    break;
    case 0x27F4900:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<_DWORD>(EncBase + 152) >> 28;
        *a1 ^= result;
    }
    break;
    case 0x27F4880:
    {
        __int64 result; // rax

        result = 0x1F6B6311 * (FuckEnc::CacheRead<_DWORD>(EncBase + 0x140) ^ 2442965628u);
        *a1 ^= result;
    }
    break;
    case 0x27F44D0:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 128) + 472i64) + 320i64);
        *a1 ^= result;
    }
    break;
    case 0x27F4840:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 272) + 600i64) + 848i64);
        *a1 ^= result;
    }
    break;
    case 0x27F4490:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 600) + 136i64) + 480i64);
        *a1 ^= result;
    }
    break;
    case 0x27F4780:
    {
        __int64 result; // rax

        result = (unsigned int)(1240573155 * FuckEnc::CacheRead<_DWORD>(EncBase + 312));
        *a1 ^= -1836173323 - result;
    }
    break;
    case 0x27F4390:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 840) + 664i64) + 848i64);
        *a1 ^= result;
    }
    break;
    case 0x27F4330:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 144) + 144i64) + 408i64);
        *a1 ^= result;
    }
    break;
    case 0x27F4770:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<_DWORD>(EncBase + 744) >> 26;
        *a1 ^= result;
    }
    break;
    case 0x27F43F0:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<_QWORD>(EncBase + 432);
        *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 312) - 1031935447;
    }
    break;
    case 0x27F45B0:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824) + 432i64) + 552i64);
        *a1 ^= result;
    }
    break;
    case 0x27F41F0:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 704) + 272i64) + 320i64);
        *a1 ^= result;
    }
    break;
    case 0x27F4310:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<_QWORD>(EncBase + 128);
        *a1 ^= 1410686829 * FuckEnc::CacheRead<_DWORD>(result + 616);
    }
    break;
    case 0x27F48C0:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 144) + 360i64) + 384i64);
        *a1 ^= result;
    }
    break;
    case 0x27F43D0:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664) + 608i64) + 512i64);
        *a1 ^= result;
    }
    break;
    case 0x27F41D0:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 896) + 128i64) + 872i64);
        *a1 ^= result;
    }
    break;
    case 0x27F43B0:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 648) + 368i64) + 176i64);
        *a1 ^= result;
    }
    break;
    case 0x27F4210:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824) + 880i64) + 312i64);
        *a1 ^= result;
    }
    break;
    case 0x27F4710:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 432) + 832i64) + 640i64);
        *a1 ^= result;
    }
    break;
    case 0x27F47C0:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<_QWORD>(EncBase + 240);
        *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 176) << 26;
    }
    break;
    case 0x27F42C0:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<_QWORD>(EncBase + 40);
        *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 544) ^ 0x3DBBD539;
    }
    break;
    case 0x27F4170:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 840) + 432i64) + 576i64);
        *a1 ^= result;
    }
    break;
    case 0x27F4520:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<_QWORD>(EncBase + 704);
        *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 784) - 759160017;
    }
    break;
    case 0x27F4540:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376) + 272i64) + 616i64);
        *a1 ^= result;
    }
    break;
    case 0x27F45F0:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 128) + 608i64) + 408i64);
        *a1 ^= result;
    }
    break;
    case 0x27F4350:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<_QWORD>(EncBase + 664);
        *a1 ^= -1758292448 * FuckEnc::CacheRead<_DWORD>(result + 712);
    }
    break;
    case 0x27F4290:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 368) + 832i64) + 248i64);
        *a1 ^= result;
    }
    break;
    case 0x27F4190:
    {
        __int64 result; // rax

        result = (unsigned int)(FuckEnc::CacheRead<_DWORD>(EncBase + 384) - 1545366194) >> 16;
        *a1 ^= result;
    }
    break;
    case 0x27F4630:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 472) + 272i64) + 512i64);
        *a1 ^= result;
    }
    break;
    case 0x27F41B0:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 592) + 840i64) + 176i64);
        *a1 ^= result;
    }
    break;
    case 0x27F4820:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<_QWORD>(EncBase + 416);
        *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 744);
    }
    break;
    case 0x27F4370:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 144) + 704i64) + 744i64);
        *a1 ^= result;
    }
    break;
    case 0x27F4590:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<_QWORD>(EncBase + 432);
        *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 280) + 1115317462;
    }
    break;
    case 0x27F47A0:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 200) + 608i64) + 552i64);
        *a1 ^= result;
    }
    break;
    case 0x27F46D0:
    {
        __int64 result; // rax

        result = (unsigned int)(0x62745DF6 * FuckEnc::CacheRead<_DWORD>(EncBase + 0x268));
        *a1 ^= 0xA0CEF29E - result;
    }
    break;
    case 0x27F4250:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 896) + 8i64) + 312i64);
        *a1 ^= result;
    }
    break;
    case 0x27F4270:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 736) + 840i64) + 776i64);
        *a1 ^= result;
    }
    break;
    case 0x27F47E0:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<_QWORD>(EncBase + 664);
        *a1 ^= 1025280362 * FuckEnc::CacheRead<_DWORD>(result + 88);
    }
    break;
    case 0x27F45D0:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<_QWORD>(EncBase + 736);
        *a1 ^= -684970392 * FuckEnc::CacheRead<_DWORD>(result + 480);
    }
    break;
    case 0x27F4750:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<_QWORD>(EncBase + 608);
        *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 48) ^ 0x7EE7D657;
    }
    break;
    case 0x27F48E0:
    {
        __int64 result; // rax

        result = *a1 ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 152) - 1244570511) ^ 0x1601736Au;
        *a1 = result;
    }
    break;
    case 0x27F4230:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<_QWORD>(EncBase + 600);
        *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 744) ^ 0x58032C80;
    }
    break;
    case 0x27F42F0:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<_QWORD>(EncBase + 240);
        *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 312);
    }
    break;
    case 0x27F4450:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 184) + 608i64) + 784i64);
        *a1 ^= result;
    }
    break;
    case 0x27F4560:
    {
        __int64 result; // rax

        result = (unsigned int)(537995190 - FuckEnc::CacheRead<_DWORD>(EncBase + 152));
        *a1 ^= result;
    }
    break;
    case 0x27F4800:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 184) + 832i64) + 552i64);
        *a1 ^= result;
    }
    break;
    case 0x27F44B0:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 896) + 832i64) + 640i64);
        *a1 ^= result;
    }
    break;
    case 0x27F4410:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 416) + 376i64) + 512i64);
        *a1 ^= result;
    }
    break;
    case 0x27F42B0:
    {
        __int64 result; // rax

        result = (368154926 * FuckEnc::CacheRead<_DWORD>(EncBase + 848)) | 0x10u;
        *a1 ^= result;
    }
    break;
    case 0x27F4430:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 240) + 200i64) + 312i64);
        *a1 ^= result;
    }
    break;
    case 0x27F4730:
    {
        __int64 result; // rax

        result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 416) + 8i64) + 544i64);
        *a1 ^= result;
    }
    break;
    case 0x27F4670:
    {
        __int64 result; // rax

        result = (unsigned int)(1953993160 * FuckEnc::CacheRead<_DWORD>(EncBase + 48));
        *a1 ^= 884775418 - result;
    }
    break;
    default:
        Utils::Log(2, XorStr("Unk Call: 0x%llX"), func);
        break;
    }
}

void FuckEnc::Decrypt(unsigned int *a2, unsigned int a3, __int16 a4, uint8_t base)
{
    const uint64_t EncBase = base == 1 ? GameData.UPTRDecrypt.EncBase1 : GameData.UPTRDecrypt.EncBase0;

    if (Utils::ValidPtr(EncBase) || GameData.Config.Window.Server != 0) {
        return;
    }
    
    int v8;                                 // r14d
    __int64 v9;                             // r10
    __int64 v10;                            // rax
    int v11;                                // r10d
    __int64 v12;                            // rax
    __int64 v13;                            // rdx
    __int64 v14;                            // rax
    __int64 v15;                            // r8
    __int64 v16;                            // rdx
    __int64 v17;                            // rax
    __int64 v18;                            // rax
    __int64 v19;                            // rdx
    __int64 v20;                            // rdx
    __int64 v21;                            // rcx
    __int64 v22;                            // rax
    __int64 v23;                            // rcx
    __int64 v24;                            // rdx
    __int64 v25;                            // r8
    void(__fastcall * *v26)(int*, _QWORD);  // rdx
    __int64 v27;                            // rdx
    __int64 v28;                            // r8
    __int64 v29;                            // rdx
    __int64 v30;                            // rdx
    __int64 v31;                            // r8
    __int64 v32;                            // rdx
    __int64 v33;                            // rax
    __int64 v34;                            // rax
    __int64 v35;                            // rdx
    __int64 v36;                            // r8
    __int64 v37;                            // r8
    __int64 v38;                            // rcx
    __int64 v39;                            // rdx
    __int64 v40;                            // rcx
    __int64 v41;                            // rax
    __int64 v42;                            // rdx
    __int64 v43;                            // rdx
    __int64 v44;                            // rdx
    __int64 v45;                            // rdx
    __int64 v46;                            // rdx
    __int64 v47;                            // rax
    __int64 v48;                            // r8
    __int64 v49;                            // rcx
    __int64 v50;                            // rdx
    __int64 v51;                            // rcx
    __int64 v52;                            // rcx
    __int64 v53;                            // rax
    __int64 v54;                            // rcx
    __int64 v55;                            // r8
    __int64 v56;                            // rax
    __int64 v57;                            // rax
    __int64 v58;                            // r8
    __int64 v59;                            // rdx
    __int64 v60;                            // rcx
    __int64 v61;                            // rdx
    __int64 v62;                            // rcx
    __int64 v63;                            // rcx
    __int64 v64;                            // rdx
    __int64 v65;                            // rdx
    __int64 v66;                            // rdx
    __int64 v67;                            // rdx
    __int64 v68;                            // r8
    __int64 v69;                            // rax
    __int64 v70;                            // rdx
    __int64 v71;                            // rax
    __int64 v72;                            // rdx
    __int64 v73;                            // rcx
    __int64 v74;                            // rdx
    __int64 v75;                            // rcx
    __int64 v76;                            // rdx
    __int64 v77;                            // rax
    __int64 v78;                            // rcx
    __int64 v79;                            // rdx
    __int64 v80;                            // rax
    __int64 v81;                            // rax
    __int64 v82;                            // rcx
    __int64 v83;                            // rcx
    __int64 v84;                            // rdx
    __int64 v85;                            // rdx
    __int64 v86;                            // rdx
    __int64 v87;                            // rax
    __int64 v88;                            // r8
    __int64 v89;                            // r8
    __int64 v90;                            // rax
    __int64 v91;                            // rax
    __int64 v92;                            // rdx
    __int64 v93;                            // rcx
    __int64 v94;                            // rcx
    __int64 v95;                            // rcx
    __int64 v96;                            // r8
    __int64 v97;                            // rdx
    __int64 v98;                            // rdx
    __int64 v99;                            // rcx
    __int64 v100;                           // rdx
    __int64 v101;                           // rcx
    __int64 v102;                           // rdx
    __int64 v103;                           // rax
    __int64 v104;                           // r8
    __int64 v105;                           // rdx
    __int64 v106;                           // rdx
    __int64 v107;                           // rdx
    __int64 v108;                           // rcx
    __int64 v109;                           // rdx
    __int64 v110;                           // r8
    __int64 v111;                           // rax
    __int64 v112;                           // rcx
    __int64 v113;                           // rcx
    __int64 v114;                           // rcx
    __int64 v115;                           // rdx
    __int64 v116;                           // rcx
    __int64 v117;                           // rax
    __int64 v118;                           // r8
    __int64 v119;                           // rdx
    __int64 v120;                           // rdx
    __int64 v121;                           // rdx
    __int64 v122;                           // rdx
    __int64 v123;                           // rcx
    _DWORD* v124;                           // rdx
    __int64 v125;                           // rcx
    __int64 v126;                           // rax
    __int64 v127;                           // rax
    __int64 v128;                           // rax
    __int64 v129;                           // rdx
    __int64 v130;                           // rax
    __int64 v131;                           // rax
    __int64 v132;                           // rdx
    __int64 v133;                           // r8
    __int64 v134;                           // rdx
    __int64 v135;                           // rax
    __int64 v136;                           // rax
    __int64 v137;                           // rdx
    __int64 v138;                           // r8
    int v139;                               // ecx
    __int64 v140;                           // rcx
    __int64 v141;                           // rax
    __int64 v142;                           // rdx
    __int64 v143;                           // rax
    __int64 v144;                           // rdx
    __int64 v145;                           // rax
    __int64 v146;                           // rcx
    __int64 v147;                           // r8
    __int64 v148;                           // rcx
    __int64 v149;                           // rax
    __int64 v150;                           // r8
    __int64 v151;                           // rdx
    __int64 v152;                           // r8
    __int64 v153;                           // rdx
    __int64 v154;                           // rax
    __int64 v155;                           // rdx
    __int64 v156;                           // rdx
    __int64 v157;                           // rax
    __int64 v158;                           // rdx
    __int64 v159;                           // rdx
    __int64 v160;                           // rdx
    __int64 v161;                           // rax
    __int64 v162;                           // rcx
    _DWORD* v163;                           // r8
    __int64 v164;                           // rdx
    __int64 v165;                           // rdx
    __int64 v166;                           // rdx
    __int64 v167;                           // rcx
    __int64 v168;                           // rax
    __int64 v169;                           // rcx
    __int64 v170;                           // rax
    __int64 v171;                           // rdx
    __int64 v172;                           // rcx
    _DWORD* v173;                           // rdx
    __int64 v174;                           // rdx
    __int64 v175;                           // rax
    __int64 v176;                           // rcx
    __int64 v177;                           // rdx
    __int64 v178;                           // rcx
    __int64 v179;                           // rcx
    __int64 v180;                           // rdx
    __int64 v181;                           // rcx
    __int64 v182;                           // rdx
    __int64 v183;                           // rcx
    __int64 v184;                           // rcx
    __int64 v185;                           // rax
    __int64 v186;                           // rdx
    __int64 v187;                           // rax
    __int64 v188;                           // rdx
    __int64 v189;                           // rdx
    __int64 v190;                           // rdx
    __int64 v191;                           // r8
    __int64 v192;                           // rax
    __int64 v193;                           // rax
    __int64 v194;                           // rax
    __int64 v195;                           // rdx
    __int64 v196;                           // rcx
    __int64 v197;                           // rcx
    __int64 v198;                           // rdx
    __int64 v199;                           // rcx
    __int64 v200;                           // r8
    __int64 v201;                           // rax
    __int64 v202;                           // rdx
    __int64 v203;                           // rdx
    __int64 v204;                           // rdx
    __int64 v205;                           // rdx
    __int64 v206;                           // rcx
    __int64 v207;                           // rax
    __int64 v208;                           // rax
    __int64 v209;                           // r8
    int v210;                               // eax
    __int64 v211;                           // rdx
    __int64 v212;                           // rdx
    __int64 v213;                           // rdx
    __int64 v214;                           // rdx
    __int64 v215;                           // rcx
    __int64 v216;                           // r8
    __int64 v217;                           // rcx
    __int64 v218;                           // rdx
    int v219;                               // r10d
    __int64 v220;                           // rcx
    __int64 v221;                           // rdx
    __int64 v222;                           // rax
    __int64 v223;                           // rax
    __int64 v224;                           // rcx
    __int64 v225;                           // rdx
    __int64 v226;                           // rdx
    __int64 v227;                           // rax
    __int64 v228;                           // rdx
    __int64 v229;                           // rdx
    __int64 v230;                           // rax
    __int64 v231;                           // rdx
    _DWORD* v232;                           // rdx
    __int64 v233;                           // rcx
    __int64 v234;                           // rdx
    __int64 v235;                           // rdx
    __int64 v236;                           // rax
    __int64 v237;                           // rcx
    __int64 v238;                           // rdx
    __int64 v239;                           // rcx
    __int64 v240;                           // rcx
    __int64 v241;                           // rdx
    __int64 v242;                           // rcx
    __int64 v243;                           // rdx
    __int64 v244;                           // rdx
    __int64 v245;                           // rdx
    __int64 v246;                           // r8
    __int64 v247;                           // r8
    __int64 v248;                           // rcx
    __int64 v249;                           // rdx
    __int64 v250;                           // rdx
    __int64 v251;                           // rdx
    __int64 v252;                           // rcx
    __int64 v253;                           // rdx
    __int64 v254;                           // rdx
    __int64 v255;                           // rdx
    __int64 v256;                           // rdx
    __int64 v257;                           // rcx
    __int64 v258;                           // rax
    __int64 v259;                           // rax
    __int64 v260;                           // rdx
    __int64 v261;                           // rdx
    __int64 v262;                           // rax
    __int64 v263;                           // rdx
    __int64 v264;                           // rdx
    __int64 v265;                           // r8
    __int64 v266;                           // rdx
    __int64 v267;                           // rcx
    __int64 v268;                           // rdx
    __int64 v269;                           // rdx
    __int64 v270;                           // rdx
    __int64 v271;                           // rcx
    __int64 v272;                           // rax
    __int64 v273;                           // rcx
    __int64 v274;                           // rdx
    __int64 v275;                           // rcx
    __int64 v276;                           // rax
    __int64 v277;                           // rax
    __int64 v278;                           // rdx
    __int64 v279;                           // rdx
    __int64 v280;                           // rdx
    __int64 v281;                           // rax
    __int64 v282;                           // rax
    __int64 v283;                           // rcx
    __int64 v284;                           // rax
    __int64 v285;                           // rcx
    __int64 v286;                           // rcx
    __int64 v287;                           // rdx
    __int64 v288;                           // rcx
    __int64 v289;                           // rcx
    __int64 v290;                           // rcx
    __int64 v291;                           // rdx
    __int64 v292;                           // rax
    __int64 v293;                           // rax
    __int64 v294;                           // r8
    __int64 v295;                           // rcx
    __int64 v296;                           // rdx
    __int64 v297;                           // rax
    __int64 v298;                           // rcx
    __int64 v299;                           // rcx
    __int64 v300;                           // r8
    __int64 v301;                           // rdx
    __int64 v302;                           // rcx
    __int64 v303;                           // rdx
    __int64 v304;                           // rdx
    __int64 v305;                           // rax
    __int64 v306;                           // rdx
    __int64 v307;                           // r8
    __int64 v308;                           // rcx
    __int64 v309;                           // rax
    __int64 v310;                           // rdx
    __int64 v311;                           // rdx
    __int64 v312;                           // rax
    __int64 v313;                           // rcx
    __int64 v314;                           // rax
    __int64 v315;                           // rcx
    __int64 v316;                           // rdx
    __int64 v317;                           // rcx
    __int64 v318;                           // rax
    __int64 v319;                           // rdx
    __int64 v320;                           // rdx
    __int64 v321;                           // rcx
    __int64 v322;                           // rdx
    __int64 v323;                           // rcx
    __int64 v324;                           // rdx
    __int64 v325;                           // rax
    __int64 v326;                           // rdx
    __int64 v327;                           // rcx
    __int64 v328;                           // rdx
    _DWORD* v329;                           // rcx
    __int64 v330;                           // rax
    __int64 v331;                           // rcx
    __int64 v332;                           // rdx
    __int64 v333;                           // rcx
    __int64 v334;                           // rcx
    __int64 v335;                           // rcx
    __int64 v336;                           // rdx
    __int64 v337;                           // rdx
    __int64 v338;                           // rax
    __int64 v339;                           // rdx
    __int64 v340;                           // rcx
    __int64 v341;                           // rdx
    __int64 v342;                           // rcx
    __int64 v343;                           // rdx
    __int64 v344;                           // rax
    __int64 v345;                           // rax
    __int64 v346;                           // rdx
    __int64 v347;                           // rax
    __int64 v348;                           // rdx
    __int64 v349;                           // rdx
    __int64 v350;                           // rax
    __int64 v351;                           // rcx
    __int64 v352;                           // rax
    __int64 v353;                           // rax
    __int64 v354;                           // rax
    __int64 v355;                           // rdx
    __int64 v356;                           // rdx
    __int64 v357;                           // rax
    __int64 v358;                           // r8
    __int64 v359;                           // rcx
    __int64 v360;                           // rax
    __int64 v361;                           // rdx
    __int64 v362;                           // rdx
    __int64 v363;                           // rdx
    __int64 v364;                           // rdx
    __int64 v365;                           // rdx
    __int64 v366;                           // rax
    __int64 v367;                           // rax
    __int64 v368;                           // rdx
    __int64 v369;                           // rax
    __int64 v370;                           // rcx
    __int64 v371;                           // rcx
    __int64 v372;                           // rdx
    __int64 v373;                           // rdx
    __int64 v374;                           // rdx
    __int64 v375;                           // rcx
    __int64 v376;                           // rax
    __int64 v377;                           // rax
    __int64 v378;                           // r8
    __int64 v379;                           // rax
    __int64 v380;                           // rcx
    __int64 v381;                           // rax
    __int64 v382;                           // rdx
    __int64 v383;                           // rcx
    __int64 v384;                           // rdx
    __int64 v385;                           // rcx
    __int64 v386;                           // rdx
    __int64 v387;                           // rcx
    __int64 v388;                           // rdx
    __int64 v389;                           // rcx
    _DWORD* v390;                           // rdx
    _DWORD* v391;                           // rdx
    __int64 v392;                           // rcx
    __int64 v393;                           // rdx
    __int64 v394;                           // rax
    __int64 v395;                           // rdx
    __int64 v396;                           // rax
    __int64 v397;                           // rax
    __int64 v398;                           // rdx
    __int64 v399;                           // rax
    __int64 v400;                           // rdx
    __int64 v401;                           // rcx
    __int64 v402;                           // rdx
    __int64 v403;                           // r8
    __int64 v404;                           // rdx
    __int64 v405;                           // rdx
    __int64 v406;                           // rdx
    __int64 v407;                           // rax
    __int64 v408;                           // rdx
    __int64 v409;                           // rcx
    __int64 v410;                           // rdx
    __int64 v411;                           // rdx
    __int64 v412;                           // rdx
    __int64 v413;                           // rax
    __int64 v414;                           // rcx
    __int64 v415;                           // rdx
    __int64 v416;                           // rdx
    __int64 v417;                           // rax
    __int64 v418;                           // rcx
    __int64 v419;                           // rcx
    __int64 v420;                           // rcx
    __int64 v421;                           // rdx
    __int64 v422;                           // rdx
    __int64 v423;                           // rdx
    __int64 v424;                           // rax
    __int64 v425;                           // rdx
    __int64 v426;                           // rdx
    __int64 v427;                           // rcx
    __int64 v428;                           // rdx
    __int64 v429;                           // rdx
    __int64 v430;                           // rdx
    __int64 v431;                           // rdx
    __int64 v432;                           // rdx
    __int64 v433;                           // rcx
    __int64 v434;                           // rax
    __int64 v435;                           // rcx
    __int64 v436;                           // rax
    __int64 v437;                           // r8
    __int64 v438;                           // rax
    __int64 v439;                           // rcx
    __int64 v440;                           // rcx
    __int64 v441;                           // rdx
    __int64 v442;                           // rax
    __int64 v443;                           // rax
    __int64 v444;                           // rax
    __int64 v445;                           // rdx
    __int64 v446;                           // rdx
    __int64 v447;                           // rdx
    __int64 v448;                           // rax
    __int64 v449;                           // rax
    __int64 v450;                           // rdx
    __int64 v451;                           // rdx
    __int64 v452;                           // rcx
    __int64 v453;                           // rdx
    __int64 v454;                           // rcx
    __int64 v455;                           // rdx
    __int64 v456;                           // rdx
    __int64 v457;                           // rdx
    __int64 v458;                           // rdx
    __int64 v459;                           // rcx
    __int64 v460;                           // rdx
    _DWORD* v461;                           // rdx
    __int64 v462;                           // rdx
    __int64 v463;                           // rax
    __int64 v464;                           // rcx
    __int64 v465;                           // rdx
    __int64 v466;                           // rdx
    __int64 v467;                           // rdx
    __int64 v468;                           // rdx
    __int64 v469;                           // rdx
    void(__fastcall * *v470)(int*, _QWORD); // rdx
    __int64 v471;                           // rdx
    __int64 v472;                           // rax
    __int64 v473;                           // rcx
    __int64 v474;                           // rdx
    __int64 v475;                           // rdx
    __int64 v476;                           // rdx
    __int64 v477;                           // rcx
    __int64 v478;                           // rdx
    __int64 v479;                           // rcx
    __int64 v480;                           // rdx
    __int64 v481;                           // rdx
    __int64 v482;                           // rdx
    __int64 v483;                           // rdx
    __int64 v484;                           // rdx
    __int64 v485;                           // rcx
    __int64 v486;                           // rdx
    __int64 v487;                           // rcx
    __int64 v488;                           // rcx
    __int64 v489;                           // rdx
    __int64 v490;                           // rax
    __int64 v491;                           // r8
    __int64 v492;                           // rdx
    __int64 v493;                           // rax
    __int64 v494;                           // rcx
    __int64 v495;                           // rax
    __int64 v496;                           // rdx
    __int64 v497;                           // r8
    __int64 v498;                           // rax
    __int64 v499;                           // rdx
    __int64 v500;                           // rdx
    __int64 v501;                           // rax
    __int64 v502;                           // rdx
    __int64 v503;                           // rdx
    __int64 v504;                           // rax
    __int64 v505;                           // rdx
    __int64 v506;                           // rdx
    __int64 v507;                           // r8
    __int64 v508;                           // rcx
    __int64 v509;                           // rcx
    __int64 v510;                           // r8
    __int64 v511;                           // rax
    __int64 v512;                           // rcx
    __int64 v513;                           // rdx
    __int64 v514;                           // rax
    __int64 v515;                           // rax
    __int64 v516;                           // rax
    _DWORD* v517;                           // rax
    __int64 v518;                           // rcx
    __int64 v519;                           // rax
    __int64 v520;                           // rdx
    __int64 v521;                           // rdx
    __int64 v522;                           // r8
    __int64 v523;                           // r8
    __int64 v524;                           // rcx
    __int64 v525;                           // rax
    __int64 v526;                           // rdx
    __int64 v527;                           // rdx
    __int64 v528;                           // rdx
    __int64 v529;                           // r8
    __int64 v530;                           // rdx
    __int64 v531;                           // r9
    __int64 v532;                           // rdx
    __int64 v533;                           // rdx
    __int64 v534;                           // r8
    __int64 v535;                           // rdx
    __int64 v536;                           // rcx
    __int64 v537;                           // rcx
    __int64 v538;                           // rcx
    __int64 v539;                           // rdx
    __int64 v540;                           // rax
    __int64 v541;                           // rcx
    __int64 v542;                           // rdx
    __int64 v543;                           // rdx
    __int64 v544;                           // rdx
    __int64 v545;                           // rax
    __int64 v546;                           // rcx
    __int64 v547;                           // rdx
    __int64 v548;                           // rax
    __int64 v549;                           // rdx
    __int64 v550;                           // rax
    __int64 v551;                           // rax
    __int64 v552;                           // rdx
    __int64 v553;                           // rdx
    _DWORD* v554;                           // rax
    __int64 v555;                           // rdx
    __int64 v556;                           // rdx
    __int64 v557;                           // rax
    __int64 v558;                           // rcx
    __int64 v559;                           // rcx
    __int64 v560;                           // rdx
    __int64 v561;                           // rcx
    __int64 v562;                           // rdx
    __int64 v563;                           // rdx
    __int64 v564;                           // rcx
    __int64 v565;                           // rdx
    __int64 v566;                           // rcx
    __int64 v567;                           // rcx
    __int64 v568;                           // rdx
    __int64 v569;                           // rdx
    __int64 v570;                           // rcx
    __int64 v571;                           // rdx
    __int64 v572;                           // rdx
    __int64 v573;                           // rax
    __int64 v574;                           // rcx
    __int64 v575;                           // rcx
    __int64 v576;                           // rax
    __int64 v577;                           // rdx
    __int64 v578;                           // rdx
    __int64 v579;                           // r8
    __int64 v580;                           // r8
    __int64 v581;                           // rdx
    __int64 v582;                           // rcx
    __int64 v583;                           // rax
    __int64 v584;                           // rcx
    __int64 v585;                           // rax
    __int64 v586;                           // rcx
    __int64 v587;                           // rcx
    __int64 v588;                           // rcx
    __int64 v589;                           // rax
    __int64 v590;                           // rdx
    __int64 v591;                           // rcx
    __int64 v592;                           // rdx
    __int64 v593;                           // rcx
    __int64 v594;                           // rcx
    __int64 v595;                           // rax
    __int64 v596;                           // rdx
    __int64 v597;                           // r8
    __int64 v598;                           // rdx
    __int64 v599;                           // rdx
    __int64 v600;                           // rax
    __int64 v601;                           // rdx
    __int64 v602;                           // rax
    __int64 v603;                           // rcx
    __int64 v604;                           // rax
    __int64 v605;                           // rcx
    __int64 v606;                           // rdx
    __int64 v607;                           // rcx
    __int64 v608;                           // rax
    __int64 v609;                           // rcx
    __int64 v610;                           // rcx
    __int64 v611;                           // rdx
    __int64 v612;                           // rdx
    __int64 v613;                           // rax
    __int64 v614;                           // rax
    __int64 v615;                           // rax
    __int64 v616;                           // rcx
    __int64 v617;                           // rcx
    __int64 v618;                           // rax
    __int64 v619;                           // rdx
    __int64 v620;                           // rcx
    __int64 v621;                           // rax
    __int64 v622;                           // rax
    __int64 v623;                           // rdx
    __int64 v624;                           // rcx
    __int64 v625;                           // rdx
    __int64 v626;                           // rcx
    __int64 v627;                           // rax
    __int64 v628;                           // rax
    __int64 v629;                           // rdx
    __int64 v630;                           // rdx
    __int64 v631;                           // rcx
    __int64 v632;                           // rdx
    __int64 v633;                           // rdx
    __int64 v634;                           // rcx
    __int64 v635;                           // rax
    int v636;                               // [rsp+18h] [rbp+18h] BYREF

    uint64_t func;
    //Location: 34134-0x156-1 | 846562265388091130378853147526299648.000000 -6433.858887 -258.000000
    if (a3 > 3)
    {
        v8 = 0;
        while (2)
        {
            //Location: 53690-0x1ba | -58619150720111398566387253248.000000 -36224.695312 -1002.010010
            /*if (a4 == 34134)
            {
                Utils::Log(4, " 0x%llx", ((_WORD)v8 + a4) & 0x3FF);
            }*/
            v9 = *a2;
            v636 = *a2;
            switch (((_WORD)v8 + a4) & 0x3FF)
            {
            case 0:
                //v636 = FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0x10D30B09) ^ v9;
                v636 = 0x10D30B09 ^ v9;
                v636 = (0x10D30B09 ^ v9) + FuckEnc::CacheRead<_DWORD>(EncBase + 0x220i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 0x370i64) + 0x338i64) + 0x58i64) + 1;
                goto LABEL_1033;
            case 1:
                v10 = EncBase;
                v636 = (v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 312i64)) ^ 0x73BE1445;
                v636 ^= ~FuckEnc::CacheRead<_DWORD>(v10 + 480) ^ (-1407346432 * FuckEnc::CacheRead<_DWORD>(v10 + 784));
                goto LABEL_1033;
            case 2:
                v636 = ~(_DWORD)v9;
                v11 = ~(_DWORD)v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 0x380i64) + 0x170i64) + 0x2C0i64) + 0x178i64) + 0xF0i64) + 0x98i64);
                goto LABEL_1032;
            case 3:
                v636 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 840i64) + 320i64) * (FuckEnc::CacheRead<_DWORD>(EncBase + 312i64) ^ FuckEnc::CacheRead<_DWORD>(EncBase + 776i64)));
                goto LABEL_1033;
            case 4:
                v12 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 480i64);
                v636 = (FuckEnc::CacheRead<_DWORD>(v12 + 776) ^ v636) - 1571619757;
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v12 + 880) + 112i64) | 1;
                goto LABEL_1033;
            case 5:
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 144i64) + 136i64) + 736i64) + 664i64) + 664i64) + 712i64) ^ v9;
                goto LABEL_1032;
            case 6:
                {
                    v13 = EncBase;
                    v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 0x2C8i64) - 0x1CE4612D;
                    //(*(void(__fastcall**)(int*, __int64))(v13 + 0x318))(&v636, v13); // 27F46D0
                    func = FuckEnc::CacheRead<uint64_t>(v13 + 0x318);
                    FuckEnc::FastCall(func, &v636, base);
                    v636 = ~v636;
                    goto LABEL_1033;
                }
            case 7:
                v14 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 776i64) ^ v9;
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v14 + 184) + 40i64) + 664i64) + 432i64) + 136i64) + 408i64);
                goto LABEL_1032;
            case 8:
                v636 = v9 + ~(~FuckEnc::CacheRead<_DWORD>(EncBase + 248i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 360i64) + 320i64));
                goto LABEL_1033;
            case 9:
                v15 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 712i64) + 701417634;
                v636 += FuckEnc::CacheRead<_DWORD>(v15 + 480);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v15 + 48);
                goto LABEL_1033;
            case 0xA:
                {
                    v636 = v9 ^ 0xA0A01329;
                    //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(EncBase + 416i64) + 456i64))(&v636);
                    func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(EncBase + 416i64) + 456i64);
                    FuckEnc::FastCall(func, &v636, base);
                    goto LABEL_1033;
                }
            case 0xB:
                v16 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 736i64) + 112i64);
                v636 = (v636 ^ FuckEnc::CacheRead<unsigned __int16>(v16 + 778)) + 2031849187;
                v636 += FuckEnc::CacheRead<_DWORD>(v16 + 744);
                goto LABEL_1033;
            case 0xC:
                v636 = v9 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 184i64) + 368i64) + 640i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 600i64) + 592i64) + 576i64);
                goto LABEL_1033;
            case 0xD:
                v17 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 112i64);
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v17 + 432) + 736i64) + 240i64) + 736i64) + 368i64) + 808i64) ^ v636;
                goto LABEL_1032;
            case 0xE:
                v636 = v9 ^ 0x8EF02CDA;
                v18 = EncBase;
                v636 = (v9 ^ 0x8EF02CDA) - FuckEnc::CacheRead<_DWORD>(EncBase + 776i64);
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v18 + 664) + 880i64) + 648i64) + 280i64) ^ v636;
                goto LABEL_1032;
            case 0xF:
                {
                    //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 272i64) + 704i64) + 416i64) + 592i64) + 912i64))(&v636);
                    func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 272i64) + 704i64) + 416i64) + 592i64) + 912i64);
                    FuckEnc::FastCall(func, &v636, base);
                    goto LABEL_1033;
                }
            case 0x10:
                v636 = v9 + ~(FuckEnc::CacheRead<_DWORD>(EncBase + 512i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 128i64) + 832i64) + 824i64) + 480i64));
                goto LABEL_1033;
            case 0x11:
                v636 = v9 ^ 0x7B5D0483;
                v636 = v9 ^ 0x7B5D0483 ^ ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 128i64) + 88i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 240i64) + 480i64));
                goto LABEL_1033;
            case 0x12:
                v636 = v9 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 360i64) + 408i64) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 736i64) + 80i64) ^ 0x2C68D6C0) & 0xFFFFFFF8;
                goto LABEL_1033;
            case 0x13:
                v19 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 736i64) + 504i64) + 248i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v19 + 416) + 184i64) + 600i64) + 784i64);
                goto LABEL_1033;
            case 0x14:
                v20 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 712i64) + 813402070;
                v636 -= 1315852873 * FuckEnc::CacheRead<_DWORD>(v20 + 784);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v20 + 176);
                goto LABEL_1033;
            case 0x15:
                v636 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 472i64) + 272i64) + 144i64) + 472i64) + 48i64) ^ 0x5B775E38) + 1;
                goto LABEL_1033;
            case 0x16:
                v21 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 80i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v21 + 736) + 40i64) + 664i64) + 432i64) + 504i64) + 48i64);
                goto LABEL_1033;
            case 0x17:
                v22 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 152i64);
                //v11 = v636 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v22 + 608) + 472i64) + 776i64) ^ 0x948BB9FE) - (FuckEnc::CacheRead<_DWORD>(GameData.Process.Base + 0x29B863B) + 4);
                v11 = v636 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v22 + 608) + 472i64) + 776i64) ^ 0x948BB9FE) - (0x29B863B + 4);
                goto LABEL_1032;
            case 0x18:
                v23 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 176i64) ^ v9;
                v636 += FuckEnc::CacheRead<_DWORD>(v23 + 640);
                v636 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v23 + 592) + 504i64) + 280i64);
                goto LABEL_1033;
            case 0x19:
                v636 = ~(v9 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 360i64) + 272i64) + 880i64) + 272i64) + 112i64));
                goto LABEL_1033;
            case 0x1A:
                {
                    //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(EncBase + 432i64) + 696i64))(&v636);
                    func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(EncBase + 432i64) + 696i64);
                    FuckEnc::FastCall(func, &v636, base);
                    v636 -= FuckEnc::CacheRead<_DWORD>(EncBase + 112i64) << 19;
                    goto LABEL_1033;
                }
            case 0x1B:
                v636 = v9 ^ (516257866 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 432i64) + 320i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 200i64) + 824i64) + 152i64)) ^ 0x3C86CB42;
                goto LABEL_1033;
            case 0x1C:
                v636 = v9 ^ 0x37763457;
                v636 = ~(v9 ^ 0x37763457 ^ (453949873 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 840i64) + 200i64) + 200i64) + 480i64)));
                goto LABEL_1033;
            case 0x1D:
                v24 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 736i64) + 648i64) + 640i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(v24 + 48) * (FuckEnc::CacheRead<_DWORD>(v24 + 784) ^ 0xC073215B);
                goto LABEL_1033;
            case 0x1E:
                v25 = EncBase;
                v636 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 128i64) + 608i64) + 896i64) + 320i64) | 7);
                v636 += FuckEnc::CacheRead<_DWORD>(v25 + 152);
                goto LABEL_1033;
            case 0x1F:
                v11 = v9 - ((FuckEnc::CacheRead<_DWORD>(EncBase + 112i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 360i64) + 576i64)) ^ 0xBE4C3B0A) - (FuckEnc::CacheRead<_DWORD>(EncBase + 16i64) ^ 0xA41C6028);
                goto LABEL_1032;
            case 0x20:
            {
                //Utils::Log(4, "0x20");
                // v26 = (void(__fastcall**)(int*, _QWORD)) * a1;
                v636 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 736i64) + 48i64) ^ v9);
                func = FuckEnc::CacheRead<uint64_t>(EncBase);
                FuckEnc::FastCall(func, &v636, base);
                //(*v26)(&v636, v26);
                goto LABEL_1033;
            }
            case 0x21:
                v27 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 136i64) + 840i64) + 640i64) ^ v9;
                v636 += 1578868492 * FuckEnc::CacheRead<_DWORD>(v27 + 544) + 1613925928;
                goto LABEL_1033;
            case 0x22:
                v28 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 552i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v28 + 280);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v28 + 600) + 616i64);
                v636 += FuckEnc::CacheRead<_DWORD>(v28 + 552);
                goto LABEL_1033;
            case 0x23:
                v29 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 344i64) + 1225782965;
                v636 += FuckEnc::CacheRead<_DWORD>(v29 + 552) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v29 + 472) + 824i64) + 808i64);
                goto LABEL_1033;
            case 0x24:
                v30 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 144i64) + 40i64) + 480i64) ^ v9;
                v636 += FuckEnc::CacheRead<_DWORD>(v30 + 320);
                v636 += FuckEnc::CacheRead<_DWORD>(v30 + 248);
                goto LABEL_1033;
            case 0x25:
                {
                    //(*(void(__fastcall**)(int*, _QWORD))(EncBase + 536i64))(&v636, EncBase);
                    func = FuckEnc::CacheRead<uint64_t>(EncBase + 536i64);
                    FuckEnc::FastCall(func, &v636, base);
                    v636 = ~v636;
                    v636 -= FuckEnc::CacheRead<_DWORD>(EncBase + 408i64) ^ 0x9F29FEA7;
                    goto LABEL_1033;
                }
            case 0x26:
                v636 = v9 ^ FuckEnc::CacheRead<_DWORD>(EncBase + 544i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 416i64) + 272i64) + 704i64) + 320i64);
                goto LABEL_1033;
            case 0x27:
                v31 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 872i64) ^ v9;
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v31 + 8) + 136i64) + 408i64) + FuckEnc::CacheRead<_DWORD>(v31 + 408) - 1044127276;
                goto LABEL_1033;
            case 0x28:
                v32 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 8i64) + 88i64);
                v11 = v636 - (FuckEnc::CacheRead<_DWORD>(v32 + 776) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v32 + 880) + 128i64) + 280i64));
                goto LABEL_1032;
            case 0x29:
                v636 = v9 - 1523249823;
                v636 = v9 - 1523249823 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 840i64) + 40i64) + 704i64) + 360i64) + 8i64) + 280i64);
                goto LABEL_1033;
            case 0x2A:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 704i64) + 8i64) + 368i64) + 472i64) + 272i64) + 136i64) + 664i64) + 88i64);
                goto LABEL_1033;
            case 0x2B:
                v33 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 384i64) ^ v9;
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v33 + 880) + 8i64) + 664i64) + 504i64) + 648i64) + 776i64) ^ v636;
                goto LABEL_1032;
            case 0x2C:
                v636 = v9 ^ 0x3C872EA8;
                v34 = EncBase;
                v636 = (v9 ^ 0x3C872EA8) - FuckEnc::CacheRead<_DWORD>(EncBase + 744i64);
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v34 + 368) + 144i64) + 272i64) + 312i64) ^ v636;
                goto LABEL_1032;
            case 0x2D:
            {
                v636 = v9 ^ 0x53D40210;
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 144i64) + 736i64) + 336i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 144i64) + 736i64) + 336i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            }
            case 0x2E:
                v35 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 360i64) + 832i64) + 48i64);
                v636 += FuckEnc::CacheRead<_DWORD>(v35 + 48) >> 25;
                goto LABEL_1033;
            case 0x2F:
            {
                //(*(void(__fastcall**)(int*, _QWORD))(EncBase + 72i64))(&v636, EncBase);
                func = FuckEnc::CacheRead<uint64_t>(EncBase + 72i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 -= 551804971;
                v636 += FuckEnc::CacheRead<_DWORD>(EncBase + 112i64);
                goto LABEL_1033;
            }
            case 0x30:
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 504i64) + 360i64) + 664i64) + 136i64) + 704i64) + 784i64) ^ v9;
                goto LABEL_1032;
            case 0x31:
                v36 = EncBase;
                //v636 = FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0x10FDAFA9) + (FuckEnc::CacheRead<_DWORD>(EncBase + 616i64) ^ v9);
                v636 = 0x10FDAFA9 + (FuckEnc::CacheRead<_DWORD>(EncBase + 616i64) ^ v9);
                v636 += FuckEnc::CacheRead<_DWORD>(v36 + 872);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v36 + 376) + 360i64) + 776i64);
                goto LABEL_1033;
            case 0x32:
                v11 = ((FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 432i64) + 272i64) + 840i64) + 736i64) + 416i64) + 640i64) ^ v9) + 1357129285) ^ 0xEB9520CB;
                goto LABEL_1032;
            case 0x33:
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 736i64) + 600i64) + 736i64) + 136i64) + 144i64) + 360i64) + 544i64) ^ v9;
                goto LABEL_1032;
            case 0x34:
                //v636 = FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0x9542136) + v9 + 2;
                v636 = 0x9542136 + v9 + 2;
                v37 = EncBase;
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 840i64) + 784i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v37 + 240) + 616i64) ^ 0x2E7DE140;
                goto LABEL_1033;
            case 0x35:
                v636 = v9 ^ 0x94D4264B;
                v38 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 8i64) + 48i64) ^ v9 ^ 0x94D4264B;
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v38 + 136) + 152i64) + 1;
                goto LABEL_1033;
            case 0x36:
                v39 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 48i64) ^ v9;
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(v39 + 16) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v39 + 608) + 608i64) + 344i64);
                goto LABEL_1032;
            case 0x37:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 896i64) + 848i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 240i64) + 376i64) + 480i64) + 1;
                goto LABEL_1033;
            case 0x38:
                v40 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 552i64) ^ v9;
                v636 ^= FuckEnc::CacheRead<_DWORD>(v40 + 344) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v40 + 608) + 344i64) ^ 0xDDEE8E3B;
                goto LABEL_1033;
            case 0x39:
                v636 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 736i64) + 872i64) ^ 0x7983CFF4) * ~FuckEnc::CacheRead<_DWORD>(EncBase + 176i64) + 1;
                goto LABEL_1033;
            case 0x3A:
                v41 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 320i64) ^ v9;
                v636 -= FuckEnc::CacheRead<_DWORD>(v41 + 80);
                v11 = FuckEnc::CacheRead<_DWORD>(v41 + 312) ^ v636;
                goto LABEL_1032;
            case 0x3B:
                v42 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 416i64) + 648i64) + 832i64) + 592i64) + 144i64) + 88i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v42 + 408);
                goto LABEL_1033;
            case 0x3C:
                v636 = ~(_DWORD)v9;
                v11 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 272i64) + 704i64) + 608i64) + 736i64) + 784i64) ^ ~(_DWORD)v9);
                goto LABEL_1032;
            case 0x3D:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 824i64) + 144i64) + 8i64) + 40i64) + 504i64) + 152i64);
                goto LABEL_1032;
            case 0x3E:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 240i64) + 272i64) + 272i64) + 600i64) + 608i64) + 184i64) + 576i64);
                goto LABEL_1032;
            case 0x3F:
                v636 = v9 + (FuckEnc::CacheRead<_DWORD>(EncBase + 784i64) ^ 0xA03ECE6A) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 736i64) + 416i64) + 384i64) + 1;
                goto LABEL_1033;
            case 0x40:
            {
                v43 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 80i64) ^ v9;
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v43 + 8) + 824i64) + 560i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v43 + 8) + 824i64) + 560i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            }
            case 0x41:
                v44 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 184i64) + 880i64) + 648i64) + 248i64) ^ v9;
                v636 ^= FuckEnc::CacheRead<_DWORD>(v44 + 784) + 658009631;
                goto LABEL_1033;
            case 0x42:
                v45 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 712i64);
                v636 += FuckEnc::CacheRead<_DWORD>(v45 + 712) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v45 + 200) + 136i64) + 776i64);
                goto LABEL_1033;
            case 0x43:
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 896i64) + 896i64) + 8i64) + 832i64) + 504i64) + 608i64) + 376i64) + 480i64) ^ v9;
                goto LABEL_1032;
            case 0x44:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 432i64) + 880i64) + 880i64) + 136i64) + 368i64) + 144i64) + 312i64);
                goto LABEL_1032;
            case 0x45:
            {
                //(*(void(__fastcall**)(int*, _QWORD))(EncBase + 728i64))(&v636, EncBase);
                func = FuckEnc::CacheRead<uint64_t>(EncBase + 728i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 736i64) + 112i64);
                goto LABEL_1033;
            }
            case 0x46:
                v636 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 576i64) + (FuckEnc::CacheRead<_DWORD>(EncBase + 552i64) ^ FuckEnc::CacheRead<_DWORD>(EncBase + 784i64) ^ 0xCD127167));
                goto LABEL_1033;
            case 0x47:
            {
                v46 = EncBase;
                //v636 = FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0x13DD076) ^ (v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 384i64));
                v636 = 0x13DD076 ^ (v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 384i64));
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(v46 + 472) + 464i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(v46 + 472) + 464i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            }
            case 0x48:
                v636 = v9 - 1746818422;
                v636 = v9 - 1746818422 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 648i64) + 144i64) + 504i64) + 608i64) + 368i64) + 544i64);
                goto LABEL_1033;
            case 0x49:
                v47 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 744i64);
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v47 + 832) + 608i64) + 664i64) + 824i64) + 240i64) + 48i64);
                goto LABEL_1032;
            case 0x4A:
                v48 = EncBase;
                v636 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 128i64) + 48i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 608i64) + 312i64));
                v636 ^= FuckEnc::CacheRead<_DWORD>(v48 + 872) - 1005893179;
                goto LABEL_1033;
            case 0x4B:
                v636 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 896i64) + 704i64) + 344i64) - 1621789024 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 8i64) + 512i64));
                goto LABEL_1033;
            case 0x4C:
            {
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 824i64) + 416i64) + 336i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 824i64) + 416i64) + 336i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            }
            case 0x4D:
                v49 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 480i64);
                v11 = v636 - ((FuckEnc::CacheRead<_DWORD>(v49 + 512) ^ 0xFFFFFE7D) << 22) - FuckEnc::CacheRead<_DWORD>(v49 + 112);
                goto LABEL_1032;
            case 0x4E:
                v636 = v9 + (8 * FuckEnc::CacheRead<_DWORD>(EncBase + 480i64) - 1956970384) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 360i64) + 112i64) & 0xFFFFFFEA) + 8;
                goto LABEL_1033;
            case 0x4F:
                v11 = v9 - ((unsigned int)~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 840i64) + 600i64) + 600i64) + 480i64) >> 29);
                goto LABEL_1032;
            case 0x50:
                v50 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 592i64) + 240i64) + 832i64) + 48i64);
                v636 = ~(FuckEnc::CacheRead<_DWORD>(v50 + 112) ^ v636);
                goto LABEL_1033;
            case 0x51:
                v636 = ~(((v9 + 1374341805) ^ 0xD78B4557) - 1479557769);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 472i64) + 664i64) + 784i64);
                goto LABEL_1033;
            case 0x52:
                v51 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 840i64) + 848i64);
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v51 + 824) + 600i64) + 376i64) + 472i64) + 616i64);
                goto LABEL_1032;
            case 0x53:
                v636 = (v9 - 860281408) ^ 0x2C78AFC8;
                v636 = (v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 648i64) + 608i64) + 840i64) + 384i64)) ^ 0x2BF577C9;
                goto LABEL_1033;
            case 0x54:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 736i64) + 16i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 200i64) + 736i64) + 136i64) + 552i64);
                goto LABEL_1033;
            case 0x55:
                v11 = ~(v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 200i64) + 592i64) + 360i64) + 368i64) + 824i64) + 784i64));
                goto LABEL_1032;
            case 0x56:
                v52 = EncBase;
                v636 = v9 + ~FuckEnc::CacheRead<_DWORD>(EncBase + 112i64);
                v636 = ~(v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v52 + 592) + 664i64) + 416i64) + 408i64));
                goto LABEL_1033;
            case 0x57:
                v53 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 552i64) ^ v9;
                v636 ^= FuckEnc::CacheRead<_DWORD>(v53 + 344);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v53 + 736) + 472i64) + 344i64);
                goto LABEL_1033;
            case 0x58:
                v636 = (v9 ^ 0x2110C217) + 600321198;
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 184i64) + 648i64) + 832i64) + 480i64);
                goto LABEL_1033;
            case 0x59:
                v54 = EncBase;
                v636 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 200i64) + 312i64) ^ v9) + 1842110862;
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v54 + 432) + 480i64) & 0xFFFFFFED;
                goto LABEL_1033;
            case 0x5A:
            {
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 608i64) + 144i64) + 896i64) + 32i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 608i64) + 144i64) + 896i64) + 32i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            }
            case 0x5B:
                v55 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 240i64) + 176i64);
                v636 ^= -319352093 * FuckEnc::CacheRead<_DWORD>(v55 + 176) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v55 + 376) + 848i64);
                goto LABEL_1033;
            case 0x5C:
                v56 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 784i64) ^ v9;
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v56 + 840) + 504i64) + 360i64) + 40i64) + 472i64) + 16i64);
                goto LABEL_1032;
            case 0x5D:
                v57 = EncBase;
                //v636 = 976073482 - (unsigned int)(&stru_1278B0EC.CntUnwindCodes + v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 848i64));
                //v636 = 976073482 - (FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0x1278B0EE) + v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 848i64));
                v636 = 976073482 - (0x1278B0EE + v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 848i64));
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v57 + 360) + 608i64) + 640i64);
                goto LABEL_1033;
            case 0x5E:
                v58 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 248i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v58 + 896) + 784i64) | 0x17;
                v636 += FuckEnc::CacheRead<_DWORD>(v58 + 112);
                goto LABEL_1033;
            case 0x5F:
                v11 = (v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 608i64) + 272i64) + 360i64) + 544i64) - FuckEnc::CacheRead<_DWORD>(EncBase + 88i64)) ^ 0x168D4EC2;
                goto LABEL_1032;
            case 0x60:
            {
                v636 = v9 - 1752844054;
                v59 = EncBase;
                v636 = v9 - 1752844054 - FuckEnc::CacheRead<_DWORD>(EncBase + 176i64);
                //(*(void(__fastcall**)(int*, __int64))(v59 + 96))(&v636, v59);
                func = FuckEnc::CacheRead<uint64_t>(v59 + 96);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            }
            case 0x61:
                v60 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 776i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v60 + 880) + 592i64) + 896i64) + 360i64) + 832i64) + 248i64);
                goto LABEL_1033;
            case 0x62:
                v61 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 16i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v61 + 360) + 184i64) + 312i64);
                v636 += FuckEnc::CacheRead<_DWORD>(v61 + 552);
                goto LABEL_1033;
            case 0x63:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 832i64) + 240i64) + 416i64) + 184i64) + 512i64) - FuckEnc::CacheRead<_DWORD>(EncBase + 48i64);
                goto LABEL_1032;
            case 0x64:
                v62 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 312i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v62 + 472) + 240i64) + 608i64) + 736i64) + 40i64) + 80i64);
                goto LABEL_1033;
            case 0x65:
                v63 = EncBase;
                v636 = v9 + ~(FuckEnc::CacheRead<_DWORD>(EncBase + 384i64) ^ 0x4178553E);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v63 + 472) + 184i64) + 80i64);
                goto LABEL_1033;
            case 0x66:
            {
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(EncBase + 896i64) + 448i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(EncBase + 896i64) + 448i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 += -1750415357 - FuckEnc::CacheRead<_DWORD>(EncBase + 48i64);
                goto LABEL_1033;
            }
            case 0x67:
                v636 = v9 ^ ((FuckEnc::CacheRead<_DWORD>(EncBase + 784i64) ^ 0xE607C97B) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 832i64) + 200i64) + 480i64) - 1973449608));
                goto LABEL_1033;
            case 0x68:
                v636 = (v9 ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 576i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 184i64) + 736i64) + 576i64))) - 1821103514;
                goto LABEL_1033;
            case 0x69:
                v11 = v9 - 1647243140 * FuckEnc::CacheRead<_DWORD>(EncBase + 784i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 664i64) + 8i64) + 640i64);
                goto LABEL_1032;
            case 0x6A:
                v636 = v9 + (FuckEnc::CacheRead<_DWORD>(EncBase + 88i64) | 0x19) * (FuckEnc::CacheRead<_DWORD>(EncBase + 344i64) + (FuckEnc::CacheRead<_DWORD>(EncBase + 248i64) ^ 0x9AE336EA));
                goto LABEL_1033;
            case 0x6B:
            {
                v64 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 608i64) + 504i64) + 480i64);
                //(*(void(__fastcall**)(int*, __int64))(v64 + 560))(&v636, v64);
                func = FuckEnc::CacheRead<uint64_t>(v64 + 560);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            }
            case 0x6C:
                v65 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 368i64) + 896i64) + 432i64) + 280i64) + 2010988062;
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v65 + 832) + 384i64);
                goto LABEL_1033;
            case 0x6D:
            {
                v66 = EncBase;
                v636 = v9 + (FuckEnc::CacheRead<_DWORD>(EncBase + 16i64) | 0x11) + 1;
                //(*(void(__fastcall**)(int*, __int64))(v66 + 728))(&v636, v66);
                func = FuckEnc::CacheRead<uint64_t>(v66 + 728);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            }
            case 0x6E:
                v636 = v9 + ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 840i64) + 504i64) + 736i64) + 744i64) ^ 0xDA11FC8C);
                goto LABEL_1033;
            case 0x6F:
                v67 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 384i64) ^ v9;
                v636 += (unsigned int)(FuckEnc::CacheRead<_DWORD>(v67 + 872) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v67 + 360) + 376i64) + 48i64)) >> 24;
                goto LABEL_1033;
            case 0x70:
                v68 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 480i64);
                v636 += FuckEnc::CacheRead<_DWORD>(v68 + 616) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v68 + 184) + 616i64) + 1;
                goto LABEL_1033;
            case 0x71:
                v69 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 88i64) ^ v9 ^ 0x93CFC348;
                v636 ^= FuckEnc::CacheRead<_DWORD>(v69 + 248);
                v11 = (FuckEnc::CacheRead<_DWORD>(v69 + 872) ^ v636) + 491713381;
                goto LABEL_1032;
            case 0x72:
                v70 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 80i64);
                v636 = (v636 ^ (FuckEnc::CacheRead<_DWORD>(v70 + 616) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v70 + 472) + 480i64))) + 1123861557;
                goto LABEL_1033;
            case 0x73:
                v71 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 48i64) - 261392181;
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v71 + 608) + 200i64) + 320i64) ^ 0xA1DC9BAA;
                goto LABEL_1033;
            case 0x74:
                v11 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 472i64) + 744i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 648i64) + 240i64) + 200i64) + 184i64) + 384i64));
                goto LABEL_1032;
            case 0x75:
                v72 = EncBase;
                v636 = v9 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 272i64) + 712i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(v72 + 280);
                goto LABEL_1033;
            case 0x76:
                v73 = EncBase;
                v636 = v9 + -FuckEnc::CacheRead<_DWORD>(EncBase + 152i64) - 1090264504;
                v636 ^= FuckEnc::CacheRead<_DWORD>(v73 + 616) + 1481967731;
                goto LABEL_1033;
            case 0x77:
                v11 = v9 - (627615323 * FuckEnc::CacheRead<_DWORD>(EncBase + 552i64) + 1704124240) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 144i64) + 432i64) + 248i64) ^ 0x934231CF);
                goto LABEL_1032;
            case 0x78:
                v636 = v9 + ~(FuckEnc::CacheRead<_DWORD>(EncBase + 848i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 736i64) + 48i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 704i64) + 872i64));
                goto LABEL_1033;
            case 0x79:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 840i64) + 360i64) + 344i64) * (FuckEnc::CacheRead<_DWORD>(EncBase + 872i64) & 0xFFFFFFE0) - 1400265561;
                goto LABEL_1033;
            case 0x7A:
                v636 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 896i64) + 880i64) + 664i64) + 848i64) + FuckEnc::CacheRead<_DWORD>(EncBase + 512i64) - 1209080923);
                goto LABEL_1033;
            case 0x7B:
                v636 = v9 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 8i64) + 144i64) + 776i64) ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 616i64) >> 29) ^ 0xEE2592C8;
                goto LABEL_1033;
            case 0x7C:
                v74 = EncBase;
                //v636 = v9 + FuckEnc::CacheRead<_DWORD>(GameData.Process.Base + 0x42815C0) + 2 + (FuckEnc::CacheRead<_DWORD>(EncBase + 744i64) << 16);
                v636 = v9 + 0x42815C0 + 2 + (FuckEnc::CacheRead<_DWORD>(EncBase + 744i64) << 16);
                v636 -= FuckEnc::CacheRead<_DWORD>(v74 + 112);
                goto LABEL_1033;
            case 0x7D:
                v636 = v9 + 599206118;
                v75 = EncBase;
                v636 = v9 + 599206118 - FuckEnc::CacheRead<_DWORD>(EncBase + 312i64) + 355762696;
                v636 -= FuckEnc::CacheRead<_DWORD>(v75 + 784);
                goto LABEL_1033;
            case 0x7E:
                v76 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 616i64) ^ v9;
                v636 ^= FuckEnc::CacheRead<_DWORD>(v76 + 312) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v76 + 200) + 616i64);
                goto LABEL_1033;
            case 0x7F:
                v636 = (v9 + (FuckEnc::CacheRead<_DWORD>(EncBase + 784i64) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 144i64) + 576i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 608i64) + 848i64)))) ^ 0xA049D103;
                goto LABEL_1033;
            case 0x80:
                v77 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 512i64) ^ v9;
                v636 += (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v77 + 40) + 704i64) + 736i64) + 312i64) ^ 0x50D6C589) + 1;
                goto LABEL_1033;
            case 0x81:
                v78 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 248i64) ^ v9 ^ 0x79A5B0EF;
                v636 = v636 - 602524912 * FuckEnc::CacheRead<_DWORD>(v78 + 544) - 2144081689;
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(v78 + 848);
                goto LABEL_1032;
            case 0x82:
            {
                //nop
                //(*(void(__fastcall**)(int*, _QWORD)) * a1)(&v636, EncBase);
                //Utils::Log(4, "0x82");
                func = FuckEnc::CacheRead<uint64_t>(EncBase);
                FuckEnc::FastCall(func, &v636, base);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 608i64) + 896i64) + 312i64);
                goto LABEL_1033;
            }
            case 0x83:
                v11 = v9 - ((FuckEnc::CacheRead<_DWORD>(EncBase + 544i64) << 15) ^ 0x92E87B6A) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 272i64) + 16i64);
                goto LABEL_1032;
            case 0x84:
                v79 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 408i64) ^ v9;
                v636 ^= FuckEnc::CacheRead<_DWORD>(v79 + 384) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v79 + 128) + 240i64) + 848i64);
                goto LABEL_1033;
            case 0x85:
                v80 = EncBase;
                v636 = ~(v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 384i64));
                v636 ^= FuckEnc::CacheRead<_DWORD>(v80 + 808) & 0xFFFFFFEB ^ 0x6A3D5C72;
                goto LABEL_1033;
            case 0x86:
                v81 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 808i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(v81 + 80);
                v636 += 533748103 * (FuckEnc::CacheRead<_DWORD>(v81 + 408) ^ 0xC21D6921) - 20048472;
                goto LABEL_1033;
            case 0x87:
                v82 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 712i64);
                v636 = (v636 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v82 + 272) + 360i64) + 312i64) ^ 0xF89F9312)) ^ 0xB45BDAF2;
                goto LABEL_1033;
            case 0x88:
                v11 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 736i64) + 312i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 136i64) + 896i64) + 640i64)) - 2111171980;
                goto LABEL_1032;
            case 0x89:
                v83 = EncBase;
                v636 = v9 - (FuckEnc::CacheRead<_DWORD>(EncBase + 312i64) | 8);
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v83 + 880) + 144i64) + 880i64) + 552i64);
                goto LABEL_1032;
            case 0x8A:
                v636 = v9 - 37430384;
                v84 = EncBase;
                v636 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 832i64) + 776i64) ^ (v9 - 37430384)) - 1256607728;
                v636 -= 633608218 * FuckEnc::CacheRead<_DWORD>(v84 + 16);
                goto LABEL_1033;
            case 0x8B:
                v85 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 592i64) + 552i64);
                v636 += FuckEnc::CacheRead<_DWORD>(v85 + 248);
                v636 += FuckEnc::CacheRead<_DWORD>(v85 + 16) << 8;
                goto LABEL_1033;
            case 0x8C:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 128i64) + 248i64) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 144i64) + 608i64) + 736i64) + 344i64) | 0xB);
                goto LABEL_1033;
            case 0x8D:
                v86 = EncBase;
                //v636 = (FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0xC9B7F4F) + 2) ^ (v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 592i64) + 360i64) + 80i64));
                v636 = (0xC9B7F4F + 2) ^ (v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 592i64) + 360i64) + 80i64));
                v636 ^= ~(1053234938 * FuckEnc::CacheRead<_DWORD>(v86 + 848));
                goto LABEL_1033;
            case 0x8E:
                v87 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 152i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v87 + 312) ^ 0xA1006300;
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v87 + 608) + 784i64);
                goto LABEL_1032;
            case 0x8F:
                v88 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 320i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 200i64) + 432i64) + 848i64);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v88 + 840) + 640i64);
                goto LABEL_1033;
            case 0x90:
                v636 = v9 ^ 0x7D68306C;
                v636 = ((v9 ^ 0x7D68306C) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 368i64) + 8i64) + 184i64) + 128i64) + 744i64)) ^ 0x8D888C72;
                goto LABEL_1033;
            case 0x91:
                v89 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 704i64) + 416i64) + 744i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(v89 + 712) ^ 0x2534C6C2;
                goto LABEL_1033;
            case 0x92:
                v90 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 384i64);
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v90 + 472) + 704i64) + 600i64) + 184i64) + 552i64) ^ v636;
                goto LABEL_1032;
            case 0x93:
                v91 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 408i64) ^ v9;
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v91 + 608) + 8i64) + 376i64) + 40i64) + 88i64);
                goto LABEL_1033;
            case 0x94:
                v92 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 280i64);
                v636 += FuckEnc::CacheRead<_DWORD>(v92 + 280) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v92 + 184) + 416i64) + 648i64) + 152i64);
                goto LABEL_1033;
            case 0x95:
                v93 = EncBase;
                v636 = v9 ^ (81744983 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 704i64) + 88i64));
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v93 + 8) + 600i64) + 712i64);
                goto LABEL_1033;
            case 0x96:
                v636 = v9 + 1011736003;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 128i64) + 608i64) + 184i64) + 840i64) + 416i64) + 48i64) ^ (v9 + 1011736003);
                goto LABEL_1033;
            case 0x97:
                v94 = EncBase;
                v636 = v9 - 179476259 * FuckEnc::CacheRead<_DWORD>(EncBase + 712i64);
                v636 += FuckEnc::CacheRead<_DWORD>(v94 + 480) + (FuckEnc::CacheRead<_DWORD>(v94 + 872) ^ 0x7C2F43B6);
                goto LABEL_1033;
            case 0x98:
                v95 = EncBase;
                v636 = v9 + (FuckEnc::CacheRead<_DWORD>(EncBase + 808i64) | 0x19) + 1;
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v95 + 824) + 824i64) + 832i64) + 784i64);
                goto LABEL_1033;
            case 0x99:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 240i64) + 824i64) + 128i64) + 432i64) + 240i64) + 840i64) + 832i64) + 344i64);
                goto LABEL_1033;
            case 0x9A:
                v96 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 784i64);
                v636 ^= ~FuckEnc::CacheRead<_DWORD>(v96 + 480);
                v636 += 145005373 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v96 + 8) + 784i64);
                goto LABEL_1033;
            case 0x9B:
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 504i64) + 608i64) + 416i64) + 840i64) + 608i64) + 592i64) + 880i64) + 784i64) ^ v9;
                goto LABEL_1032;
            case 0x9C:
            {
                v97 = EncBase;
                v636 = v9 ^ ~FuckEnc::CacheRead<_DWORD>(EncBase + 80i64);
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(v97 + 824) + 568i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(v97 + 824) + 568i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            }
            case 0x9D:
            {
                //(*(void(__fastcall**)(int*, _QWORD))(EncBase + 920i64))(&v636, EncBase);
                func = FuckEnc::CacheRead<uint64_t>(EncBase + 920i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 840i64) + 8i64) + 280i64);
                goto LABEL_1033;
            }
            case 0x9E:
                v98 = EncBase;
                v636 = v9 - (FuckEnc::CacheRead<_DWORD>(EncBase + 808i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 368i64) + 136i64) + 640i64));
                v11 = FuckEnc::CacheRead<_DWORD>(v98 + 744) ^ v636;
                goto LABEL_1032;
            case 0x9F:
                v636 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 472i64) + 608i64) + 704i64) + 344i64) << 7);
                goto LABEL_1033;
            case 0xA0:
                v636 = ((v9 - 15741706) ^ 0x692DF572) - 2131935728;
                v636 += 208169366 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 592i64) + 368i64) + 576i64);
                goto LABEL_1033;
            case 0xA1:
                v99 = EncBase;
                v636 = v9 - (FuckEnc::CacheRead<_DWORD>(EncBase + 480i64) | 8);
                v636 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v99 + 128) + 272i64) + 344i64);
                goto LABEL_1033;
            case 0xA2:
                v636 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 272i64) + 408i64) - 1907159629 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 432i64) + 592i64) + 744i64));
                goto LABEL_1033;
            case 0xA3:
            {
                //(*(void(__fastcall**)(int*, _QWORD))(EncBase + 328i64))(&v636, EncBase);
                func = FuckEnc::CacheRead<uint64_t>(EncBase + 328i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 = ~v636;
                v636 += FuckEnc::CacheRead<_DWORD>(EncBase + 80i64) & 0xFFFFFFE8;
                goto LABEL_1033;
            }
            case 0xA4:
                v636 = v9 ^ 0xC9604685;
                v100 = EncBase;
                v636 = (v9 ^ 0xC9604685) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 896i64) + 592i64) + 744i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v100 + 808);
                goto LABEL_1033;
            case 0xA5:
                v636 = v9 ^ ~(FuckEnc::CacheRead<_DWORD>(EncBase + 48i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 416i64) + 152i64) * (FuckEnc::CacheRead<_DWORD>(EncBase + 248i64) >> 22));
                goto LABEL_1033;
            case 0xA6:
            {
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 432i64) + 360i64) + 664i64) + 304i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 432i64) + 360i64) + 664i64) + 304i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            }
            case 0xA7:
                v101 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 368i64) + 544i64) ^ v9;
                v636 -= FuckEnc::CacheRead<_DWORD>(v101 + 552);
                v636 ^= 965273529 * FuckEnc::CacheRead<_DWORD>(v101 + 776);
                goto LABEL_1033;
            case 0xA8:
                v102 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 184i64) + 376i64) + 512i64) ^ v9;
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v102 + 736) + 416i64) + 80i64);
                goto LABEL_1032;
            case 0xA9:
                v103 = EncBase;
                v636 = (FuckEnc::CacheRead<_DWORD>(EncBase + 16i64) ^ v9) + 1361450962;
                v636 = ~(v636 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v103 + 432) + 360i64) + 320i64) + 1049059197);
                goto LABEL_1033;
            case 0xAA:
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 592i64) + 136i64) + 360i64) + 896i64) + 184i64) + 272i64) + 600i64) + 616i64) ^ v9;
                goto LABEL_1032;
            case 0xAB:
                v104 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 896i64) + 896i64) + 848i64);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v104 + 736) + 240i64) + 152i64) - 1850611291;
                goto LABEL_1033;
            case 0xAC:
            {
                v636 = v9 - 350394233;
                //(*(void(__fastcall**)(int*, _QWORD))(EncBase + 696i64))(&v636, EncBase);
                func = FuckEnc::CacheRead<uint64_t>(EncBase + 696i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 += -1033903692 * FuckEnc::CacheRead<_DWORD>(EncBase + 480i64);
                goto LABEL_1033;
            }
            case 0xAD:
            {
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 136i64) + 144i64) + 768i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 136i64) + 144i64) + 768i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 -= FuckEnc::CacheRead<_DWORD>(EncBase + 384i64);
                goto LABEL_1033;
            }
            case 0xAE:
                v105 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 416i64) + 128i64) + 280i64);
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v105 + 840) + 200i64) + 8i64) + 384i64) ^ v636;
                goto LABEL_1032;
            case 0xAF:
                v106 = EncBase;
                //v636 = FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0x46CBBA8) + v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 368i64) + 200i64) + 784i64);
                v636 = 0x46CBBA8 + v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 368i64) + 200i64) + 784i64);
                v636 = (v636 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v106 + 240) + 320i64)) ^ 0x8C6444E2;
                goto LABEL_1033;
            case 0xB0:
            {
                v107 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 712i64);
                //(*(void(__fastcall**)(int*, __int64))(v107 + 568))(&v636, v107);
                func = FuckEnc::CacheRead<uint64_t>(v107 + 568);
                FuckEnc::FastCall(func, &v636, base);
                v636 = (v636 - 1810221743) ^ 0x2B140E4A;
                goto LABEL_1033;
            }
            case 0xB1:
                v108 = EncBase;
                //v636 = v9 + ((FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0x84EAC54) + 4) ^ FuckEnc::CacheRead<_DWORD>(EncBase + 88i64));
                v636 = v9 + ((0x84EAC54 + 4) ^ FuckEnc::CacheRead<_DWORD>(EncBase + 88i64));
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v108 + 664) + 200i64) + 608i64) + 776i64);
                goto LABEL_1033;
            case 0xB2:
                v109 = EncBase;
                v636 = ~(v9 ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 744i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 832i64) + 504i64) + 280i64)));
                v636 ^= FuckEnc::CacheRead<_DWORD>(v109 + 248);
                goto LABEL_1033;
            case 0xB3:
                v110 = EncBase;
                v636 = v9 ^ (1840537808 * (FuckEnc::CacheRead<_DWORD>(EncBase + 408i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 608i64) + 552i64)));
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v110 + 504) + 248i64);
                goto LABEL_1033;
            case 0xB4:
                v111 = EncBase;
                v636 = (v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 408i64)) ^ 0xF27FD332;
                v11 = v636 - (~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v111 + 880) + 736i64) + 640i64) | 0x1C);
                goto LABEL_1032;
            case 0xB5:
                v112 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 88i64) ^ v9;
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v112 + 832) + 112i64);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v112 + 664) + 136i64) + 280i64);
                goto LABEL_1033;
            case 0xB6:
                v636 = v9 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 592i64) + 184i64) + 592i64) + 16i64) ^ (-1595148808 * (FuckEnc::CacheRead<_DWORD>(EncBase + 784i64) ^ 0x972C6A1B));
                goto LABEL_1033;
            case 0xB7:
                v113 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 576i64);
                v11 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v113 + 200) + 40i64) + 272i64) + 80i64) ^ v636);
                goto LABEL_1032;
            case 0xB8:
                v114 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 512i64) ^ v9 ^ 0x7F59E200;
                v636 -= FuckEnc::CacheRead<_DWORD>(v114 + 576) >> 5;
                v636 ^= FuckEnc::CacheRead<_DWORD>(v114 + 744) >> 18;
                goto LABEL_1033;
            case 0xB9:
                v636 = v9 ^ 0x91B2D648;
                v115 = EncBase;
                v636 = (v9 ^ 0x91B2D648) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 608i64) + 712i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v115 + 704) + 280i64) ^ 0x5B1A8423;
                goto LABEL_1033;
            case 0xBA:
                v116 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 112i64);
                v636 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v116 + 40) + 504i64) + 136i64) + 616i64) + 1262098308;
                goto LABEL_1033;
            case 0xBB:
                v636 = v9 ^ (~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 608i64) + 776i64) * (FuckEnc::CacheRead<_DWORD>(EncBase + 280i64) ^ 0xFFFFA7F3)) << 15);
                goto LABEL_1033;
            case 0xBC:
                v117 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 312i64) - 1186546333;
                v636 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v117 + 832) + 880i64) + 360i64) + 176i64) ^ v636) + 612364705;
                goto LABEL_1033;
            case 0xBD:
                //v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 8i64) + 664i64) + 80i64) * (FuckEnc::CacheRead<_DWORD>(GameData.Process.Base + 0xD689C62) + (FuckEnc::CacheRead<_DWORD>(EncBase + 408i64) ^ 0xB63DC248)) - 720624066;
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 8i64) + 664i64) + 80i64) * (0xD689C62 + (FuckEnc::CacheRead<_DWORD>(EncBase + 408i64) ^ 0xB63DC248)) - 720624066;
                goto LABEL_1032;
            case 0xBE:
                v118 = EncBase;
                v636 = (FuckEnc::CacheRead<_DWORD>(EncBase + 80i64) ^ v9) - 589145335;
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v118 + 432) + 600i64) + 712i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v118 + 640);
                goto LABEL_1033;
            case 0xBF:
                v636 = v9 - 1108793478;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 648i64) + 880i64) + 40i64) + 432i64) + 824i64) + 176i64) ^ (v9 - 1108793478);
                goto LABEL_1033;
            case 0xC0:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 592i64) + 600i64) + 40i64) + 824i64) + 896i64) + 608i64) + 648i64) + 552i64);
                goto LABEL_1033;
            case 0xC1:
            {
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 272i64) + 648i64) + 416i64) + 448i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 272i64) + 648i64) + 416i64) + 448i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            }
            case 0xC2:
                v119 = EncBase;
                v636 = (FuckEnc::CacheRead<_DWORD>(EncBase + 248i64) ^ v9) - 1933310366;
                v636 ^= ~FuckEnc::CacheRead<_DWORD>(v119 + 384);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v119 + 776) & 0xFFFFFFE2;
                goto LABEL_1033;
            case 0xC3:
            {
                v120 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 704i64) + 280i64) ^ v9;
                //(**(void(__fastcall***)(int*))(v120 + 360))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<uint64_t>(v120 + 360));
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            }
            case 0xC4:
                v121 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 592i64) + 48i64) + 1605920840;
                v636 = v636 - 317717029 * (FuckEnc::CacheRead<_DWORD>(v121 + 320) ^ 0x8E3B96FF) + 1;
                goto LABEL_1033;
            case 0xC5:
                v122 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 808i64) ^ v9;
                v636 ^= FuckEnc::CacheRead<_DWORD>(v122 + 48) + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v122 + 736) + 416i64) + 408i64);
                goto LABEL_1033;
            case 0xC6:
                v123 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 896i64) + 616i64);
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v123 + 832) + 416i64) + 200i64) + 144i64) + 88i64) ^ v636;
                goto LABEL_1032;
            case 0xC7:
                //v124 = (_DWORD*)EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 736i64) + 552i64) ^ v9;
                v636 ^= FuckEnc::CacheRead<_DWORD>(EncBase + (160 * 4));//v124[160];
                v636 += FuckEnc::CacheRead<_DWORD>(EncBase + (120 * 4));//v124[120];
                v636 -= FuckEnc::CacheRead<_DWORD>(EncBase + (194 * 4));//v124[194];
                goto LABEL_1033;
            case 0xC8:
                v125 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 640i64) ^ v9;
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v125 + 272) + 16i64);
                v636 ^= -921307328 - 1959585374 * FuckEnc::CacheRead<_DWORD>(v125 + 48);
                goto LABEL_1033;
            case 0xC9:
                v126 = EncBase;
                v636 = (FuckEnc::CacheRead<_DWORD>(EncBase + 512i64) ^ v9 ^ 0x1FBCE74A) - 136701820;
                //v636 += (FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0x1FFFFF4) + 1) & (FuckEnc::CacheRead<_DWORD>(v126 + 552) >> 7);
                v636 += (0x1FFFFF4 + 1) & (FuckEnc::CacheRead<_DWORD>(v126 + 552) >> 7);
                goto LABEL_1033;
            case 0xCA:
                v127 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 808i64);
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v127 + 880) + 600i64) + 368i64) + 144i64) + 616i64) ^ v636;
                goto LABEL_1032;
            case 0xCB:
                v128 = EncBase;
                v636 = (v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 616i64) + 1530399074) ^ 0xDC4C928C;
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(v128 + 616) + 1738373266;
                goto LABEL_1032;
            case 0xCC:
                v129 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 384i64);
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(v129 + 408) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v129 + 592) + 504i64) + 416i64) + 408i64);
                goto LABEL_1032;
            case 0xCD:
                v130 = EncBase;
                v636 = (((v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 80i64)) ^ 0xF5EC08C4) + 640794735) ^ 0x99A9EA47;
                v636 += FuckEnc::CacheRead<_DWORD>(v130 + 552) ^ 0xAA96ED91;
                goto LABEL_1033;
            case 0xCE:
                v636 = v9 + 1901463071;
                v131 = EncBase;
                v636 = v9 + 1901463071 - FuckEnc::CacheRead<_DWORD>(EncBase + 848i64);
                v636 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v131 + 368) + 592i64) + 848i64);
                goto LABEL_1033;
            case 0xCF:
            {
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 608i64) + 608i64) + 600i64) + 376i64) + 464i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 608i64) + 608i64) + 600i64) + 376i64) + 464i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            }
            case 0xD0:
                v132 = EncBase;
                v636 = (v9 + ~FuckEnc::CacheRead<_DWORD>(EncBase + 48i64)) ^ 0x680D485A;
                v636 += FuckEnc::CacheRead<_DWORD>(v132 + 408) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v132 + 840) + 88i64);
                goto LABEL_1033;
            case 0xD1:
                v133 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 512i64);
                v636 += FuckEnc::CacheRead<_DWORD>(v133 + 88);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v133 + 592) + 600i64) + 848i64);
                goto LABEL_1033;
            case 0xD2:
                v134 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 544i64) ^ v9;
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v134 + 416) + 592i64) + 784i64);
                v636 += ~FuckEnc::CacheRead<_DWORD>(v134 + 16);
                goto LABEL_1033;
            case 0xD3:
                v636 = v9 + 461150147 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 736i64) + 280i64) - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 128i64) + 272i64) + 88i64) >> 14);
                goto LABEL_1033;
            case 0xD4:
                v636 = ~(v9 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 8i64) + 504i64) + 736i64) + 664i64) + 144i64) + 576i64));
                goto LABEL_1033;
            case 0xD5:
                v135 = EncBase;
                v636 = ~((v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 808i64) - 1532852675) ^ 0x5C7C7D32);
                v636 += FuckEnc::CacheRead<_DWORD>(v135 + 176) + 1;
                goto LABEL_1033;
            case 0xD6:
                v136 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 48i64) ^ v9 ^ 0x1174B200;
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v136 + 504) + 416i64) + 704i64) + 744i64);
                goto LABEL_1032;
            case 0xD7:
                v137 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 88i64) ^ v9;
                v636 -= 2023150383 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v137 + 608) + 384i64);
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(v137 + 280);
                goto LABEL_1032;
            case 0xD8:
                v138 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 512i64) ^ v9;
                v139 = v636 + FuckEnc::CacheRead<_DWORD>(v138 + 248);
                goto LABEL_221;
            case 0xD9:
            {
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 880i64) + 368i64) + 40i64) + 504i64) + 688i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 880i64) + 368i64) + 40i64) + 504i64) + 688i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            }
            case 0xDA:
                v636 = v9 ^ 0xAE57F625;
                v11 = (v9 ^ 0xAE57F625) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 360i64) + 376i64) + 200i64) + 832i64) + 824i64) + 480i64);
                goto LABEL_1032;
            case 0xDB:
                v140 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 608i64) + 616i64);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v140 + 824) + 896i64) + 416i64) + 704i64) + 48i64);
                goto LABEL_1033;
            case 0xDC:
                v141 = EncBase;
                v636 = v9 ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 408i64) >> 18);
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v141 + 592) + 840i64) + 880i64) + 736i64) + 344i64);
                goto LABEL_1033;
            case 0xDD:
            {
                v142 = EncBase;
                v636 = (v9 + (FuckEnc::CacheRead<_DWORD>(EncBase + 872i64) | 2)) ^ 0x8223C9C5;
                //(*(void(__fastcall**)(int*, __int64))(v142 + 568))(&v636, v142);
                func = FuckEnc::CacheRead<uint64_t>(v142 + 568);
                FuckEnc::FastCall(func, &v636, base);
                v636 -= 858709094;
                goto LABEL_1033;
            }
            case 0xDE:
                v636 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 8i64) + 512i64) + ((unsigned int)(FuckEnc::CacheRead<_DWORD>(EncBase + 80i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 648i64) + 152i64)) >> 8));
                goto LABEL_1033;
            case 0xDF:
                //v636 = (FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0xA7678D7) + v9 + 2) ^ 0x9876809E;
                v636 = (0xA7678D7 + v9 + 2) ^ 0x9876809E;
                v143 = EncBase;
                v636 -= FuckEnc::CacheRead<_DWORD>(EncBase + 640i64);
                v636 = (v636 - FuckEnc::CacheRead<_DWORD>(v143 + 512)) ^ 0xE0834670;
                goto LABEL_1033;
            case 0xE0:
                v144 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 840i64) + 200i64) + 112i64);
                v11 = (v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v144 + 144) + 128i64) + 784i64)) ^ 0xE43A6F92;
                goto LABEL_1032;
            case 0xE1:
                v636 = v9 + 1081454268;
                v145 = EncBase;
                v636 = v9 + 1081454268 - FuckEnc::CacheRead<_DWORD>(EncBase + 576i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v145 + 144) + 840i64) + 640i64) ^ 0xA5E10C8B;
                goto LABEL_1033;
            case 0xE2:
                v146 = EncBase;
                v636 = v9 + ~FuckEnc::CacheRead<_DWORD>(EncBase + 640i64);
                v636 = v636 - FuckEnc::CacheRead<_DWORD>(v146 + 312) + 877033939;
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v146 + 272) + 616i64);
                goto LABEL_1033;
            case 0xE3:
                v636 = FuckEnc::CacheRead<_DWORD>(GameData.Process.Base + 0x423C05B) + 1 + 1747331766 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 736i64) + 8i64) + 776i64) - v9;
                v636 = 0x423C05B + 1 + 1747331766 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 736i64) + 8i64) + 776i64) - v9;
                goto LABEL_1033;
            case 0xE4:
                v636 = v9 ^ 0xC62BF246;
                v636 = (v9 ^ 0xC62BF246) + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 704i64) + 664i64) + 736i64) + 744i64);
                goto LABEL_1033;
            case 0xE5:
            {
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 648i64) + 416i64) + 136i64) + 880i64) + 104i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 648i64) + 416i64) + 136i64) + 880i64) + 104i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            }
            case 0xE6:
                v147 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 744i64) + 1500615334;
                v636 = (v636 ^ (FuckEnc::CacheRead<_DWORD>(v147 + 808) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v147 + 648) + 712i64))) - 944513059;
                goto LABEL_1033;
            case 0xE7:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 144i64) + 832i64) + 368i64) + 896i64) + 592i64) + 600i64) + 152i64);
                goto LABEL_1032;
            case 0xE8:
                v636 = v9 - 1315567130;
                v636 = v9 - 1315567130 + FuckEnc::CacheRead<_DWORD>(EncBase + 784i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 368i64) + 272i64) + 808i64);
                goto LABEL_1033;
            case 0xE9:
            {
                //(*(void(__fastcall**)(int*, _QWORD))(EncBase + 920i64))(&v636, EncBase);
                func = FuckEnc::CacheRead<uint64_t>(EncBase + 920i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 416i64) + 368i64) + 88i64);
                goto LABEL_1033;
            }
            case 0xEA:
                v148 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 384i64) ^ v9;
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v148 + 360) + 744i64);
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v148 + 376) + 144i64) + 776i64);
                goto LABEL_1032;
            case 0xEB:
                v636 = v9 + 551018945;
                v636 = (v9 + 551018945) ^ ((unsigned int)(FuckEnc::CacheRead<_DWORD>(EncBase + 344i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 240i64) + 200i64) + 776i64)) >> 1);
                goto LABEL_1033;
            case 0xEC:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 880i64) + 184i64) + 600i64) + 360i64) + 360i64) + 416i64) + 368i64) + 552i64);
                goto LABEL_1032;
            case 0xED:
                v149 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 176i64) ^ v9 ^ 0x1B4EA3DE;
                v11 = ~(v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v149 + 880) + 432i64) + 784i64));
                goto LABEL_1032;
            case 0xEE:
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 592i64) + 592i64) + 40i64) + 368i64) + 240i64) + 8i64) + 240i64) + 112i64) ^ v9;
                goto LABEL_1032;
            case 0xEF:
                v150 = EncBase;
                v636 = v9 ^ (1724176233 * FuckEnc::CacheRead<_DWORD>(EncBase + 384i64));
                v636 += FuckEnc::CacheRead<_DWORD>(v150 + 512);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v150 + 368) + 600i64) + 248i64);
                goto LABEL_1033;
            case 0xF0:
                v636 = (v9 + 932129842) ^ 0xB078E9AA;
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 880i64) + 16i64) + 1;
                goto LABEL_1033;
            case 0xF1:
                v151 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 248i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v151 + 808) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v151 + 144) + 40i64) + 128i64) + 552i64);
                goto LABEL_1033;
            case 0xF2:
                v152 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 880i64) + 744i64) + 1;
                v636 += FuckEnc::CacheRead<_DWORD>(v152 + 384);
                v636 ^= 1639947591 * FuckEnc::CacheRead<_DWORD>(v152 + 640);
                goto LABEL_1033;
            case 0xF3:
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 240i64) + 272i64) + 608i64) + 432i64) + 648i64) + 648i64) + 872i64) ^ v9;
                goto LABEL_1032;
            case 0xF4:
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 608i64) + 184i64) + 376i64) + 272i64) + 664i64) + 840i64) + 896i64) + 848i64) ^ v9;
                goto LABEL_1032;
            case 0xF5:
            {
                //(*(void(__fastcall**)(int*, _QWORD))(EncBase + 680i64))(&v636, EncBase);
                func = FuckEnc::CacheRead<uint64_t>(EncBase + 680i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 += -1237989011 - FuckEnc::CacheRead<_DWORD>(EncBase + 312i64);
                goto LABEL_1033;
            }
            case 0xF6:
                v636 = v9 ^ 0xE0660413;
                v11 = (v9 ^ 0xE0660413) - FuckEnc::CacheRead<_DWORD>(EncBase + 544i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 432i64) + 376i64) + 640i64);
                goto LABEL_1032;
            case 0xF7:
                v153 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 736i64) + 8i64) + 736i64) + 8i64) + 280i64);
                v636 += FuckEnc::CacheRead<_DWORD>(v153 + 384);
                goto LABEL_1033;
            case 0xF8:
                v154 = EncBase;
                v636 = v9 ^ (889972494 * FuckEnc::CacheRead<_DWORD>(EncBase + 640i64));
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v154 + 200) + 648i64) + 472i64) + 408i64);
                goto LABEL_1033;
            case 0xF9:
                v636 = (v9 ^ 0x92DEA55C) + 361516287;
                v636 ^= FuckEnc::CacheRead<_DWORD>(EncBase + 872i64) ^ (-1344278390 * FuckEnc::CacheRead<_DWORD>(EncBase + 344i64)) ^ 0xD3134232;
                goto LABEL_1033;
            case 0xFA:
                v155 = EncBase;
                v636 = v9 ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 112i64) + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 472i64) + 640i64)) ^ 0x75DB4238;
                v636 ^= FuckEnc::CacheRead<_DWORD>(v155 + 176);
                goto LABEL_1033;
            case 0xFB:
                v156 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 840i64) + 200i64) + 344i64);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v156 + 128) + 432i64) + 240i64) + 88i64);
                goto LABEL_1033;
            case 0xFC:
                v157 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 808i64) ^ v9;
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v157 + 40) + 144i64) + 136i64) + 664i64) + 16i64);
                goto LABEL_1032;
            case 0xFD:
                v636 = -(int)v9 - 166816830;
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 504i64) + 736i64) + 592i64) + 408i64);
                goto LABEL_1033;
            case 0xFE:
                v158 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 320i64) ^ v9;
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v158 + 664) + 368i64) + 848i64);
                v11 = FuckEnc::CacheRead<_DWORD>(v158 + 248) ^ v636 ^ 0xE553BF5D;
                goto LABEL_1032;
            case 0xFF:
                v159 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 576i64);
                v636 = (FuckEnc::CacheRead<_DWORD>(v159 + 480) ^ v636 ^ 0xDDAEE1E1) - 414131267;
                v636 -= FuckEnc::CacheRead<_DWORD>(v159 + 808);
                goto LABEL_1033;
            case 0x100:
            {
                v160 = EncBase;
                v636 = v9 - (FuckEnc::CacheRead<_DWORD>(EncBase + 872i64) ^ 0x91D4C87F);
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(v160 + 144) + 768i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(v160 + 144) + 768i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            }
            case 0x101:
                v161 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 616i64) ^ v9;
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v161 + 240) + 648i64) + 592i64) + 88i64) + 1354724056;
                goto LABEL_1032;
            case 0x102:
            {
                v636 = (v9 - 1060021896) ^ 0xFD0DE876;
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(EncBase + 600i64) + 224i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(EncBase + 600i64) + 224i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            }
            case 0x103:
                v162 = EncBase;
                v636 = v9 - (FuckEnc::CacheRead<_DWORD>(EncBase + 152i64) ^ 0x59F1291A);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v162 + 272) + 368i64) + 608i64) + 408i64);
                goto LABEL_1033;
            case 0x104:
                v636 = v9 + 455335987;
                v636 = v9 + 455335987 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 472i64) + 144i64) + 600i64) + 472i64) + 416i64) + 640i64);
                goto LABEL_1033;
            case 0x105:
                //v163 = (_DWORD*)EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 312i64);
                v636 += FuckEnc::CacheRead<_DWORD>(EncBase + (78 * 4));//v163[78];
                v636 += FuckEnc::CacheRead<_DWORD>(EncBase + (186 * 4));//v163[186];
                v636 ^= FuckEnc::CacheRead<_DWORD>(EncBase + (178 * 4)) ^ 0x7521360D;//v163[178] ^ 0x7521360D;
                goto LABEL_1033;
            case 0x106:
            {
                v164 = EncBase;
                v636 = v9 + (FuckEnc::CacheRead<_DWORD>(EncBase + 784i64) | 0x10) - 633678100;
                //(*(void(__fastcall**)(int*, __int64))(v164 + 536))(&v636, v164);
                func = FuckEnc::CacheRead<uint64_t>(v164 + 536);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            }
            case 0x107:
                v636 = v9 + (FuckEnc::CacheRead<_DWORD>(EncBase + 16i64) ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 512i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 544i64))) + 1;
                goto LABEL_1033;
            case 0x108:
                v165 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 360i64) + 592i64) + 88i64) ^ v9;
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v165 + 240) + 472i64) + 432i64) + 776i64);
                goto LABEL_1032;
            case 0x109:
            {
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 8i64) + 416i64) + 368i64) + 448i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 8i64) + 416i64) + 368i64) + 448i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            }
            case 0x10A:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 592i64) + 472i64) + 896i64) + 240i64) + 360i64) + 80i64);
                goto LABEL_1033;
            case 0x10B:
                v166 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 848i64) ^ v9;
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v166 + 40) + 504i64) + 152i64) >> 14;
                v636 ^= FuckEnc::CacheRead<_DWORD>(v166 + 176);
                goto LABEL_1033;
            case 0x10C:
                v636 = (v9 + 1744786868) ^ 0x4096B350;
                v636 ^= FuckEnc::CacheRead<_DWORD>(EncBase + 80i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 832i64) + 640i64);
                goto LABEL_1033;
            case 0x10D:
                v167 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 640i64) ^ v9;
                v636 ^= FuckEnc::CacheRead<_DWORD>(v167 + 616) ^ (2 * (FuckEnc::CacheRead<_DWORD>(v167 + 408) & 0xFFFFFFFE));
                goto LABEL_1033;
            case 0x10E:
                v636 = v9 - 370510251;
                v168 = EncBase;
                v636 = v9 - 370510251 - FuckEnc::CacheRead<_DWORD>(EncBase + 712i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v168 + 408);
                v636 = ~(FuckEnc::CacheRead<_DWORD>(v168 + 848) ^ v636);
                goto LABEL_1033;
            case 0x10F:
                //v636 = (FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0xA477E48) + 3) ^ v9;
                v636 = (0xA477E48 + 3) ^ v9;
                v636 = ((0xA477E48 + 3) ^ v9) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 200i64) + 704i64) + 592i64) + 704i64) + 608i64) + 480i64);
                goto LABEL_1033;
            case 0x110:
            {
                //(*(void(__fastcall**)(int*, _QWORD))(EncBase + 800i64))(&v636, EncBase);
                func = FuckEnc::CacheRead<uint64_t>(EncBase + 800i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 200i64) + 152i64);
                goto LABEL_1033;
            }
            case 0x111:
                v169 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 200i64) + 576i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v169 + 872) + ~(FuckEnc::CacheRead<_DWORD>(v169 + 16) | 0xF);
                goto LABEL_1033;
            case 0x112:
                v636 = v9 - 796464988;
                v636 = (v9 - 796464988) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 776i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 360i64) + 872i64));
                goto LABEL_1033;
            case 0x113:
                v170 = EncBase;
                v636 = v9 ^ (1307940796 * FuckEnc::CacheRead<_DWORD>(EncBase + 408i64));
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v170 + 376) + 416i64) + 360i64) + 320i64);
                goto LABEL_1033;
            case 0x114:
                v171 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 344i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v171 + 832) + 744i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v171 + 840) + 704i64) + 512i64);
                goto LABEL_1033;
            case 0x115:
                v172 = EncBase;
                v636 = (v9 ^ ~FuckEnc::CacheRead<_DWORD>(EncBase + 320i64)) + 719738015;
                v636 += (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v172 + 600) + 848i64) ^ 0xD6DBD156) + 1;
                goto LABEL_1033;
            case 0x116:
                //v173 = (_DWORD*)EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 616i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(EncBase + (38 * 4));//v173[38];
                v636 += FuckEnc::CacheRead<_DWORD>(EncBase + (160 * 4));//v173[160];
                v636 ^= FuckEnc::CacheRead<_DWORD>(EncBase + (186 * 4)) >> 20; // v173[186] >> 20;
                goto LABEL_1033;
            case 0x117:
                v174 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 608i64) + 368i64) + 776i64) ^ v9;
                v11 = (v636 - FuckEnc::CacheRead<_DWORD>(v174 + 552)) ^ 0xA7BDD22C;
                goto LABEL_1032;
            case 0x118:
                v175 = EncBase;
                //v636 = FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0xD2B8C3A) + v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 712i64) + 2;
                v636 = 0xD2B8C3A + v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 712i64) + 2;
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v175 + 432) + 608i64) + 600i64) + 40i64) + 344i64);
                goto LABEL_1033;
            case 0x119:
                v176 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 808i64) ^ v9;
                v636 += ~(FuckEnc::CacheRead<_DWORD>(v176 + 712) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v176 + 880) + 312i64));
                goto LABEL_1033;
            case 0x11A:
                v177 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 48i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v177 + 896) + 504i64) + 744i64) ^ FuckEnc::CacheRead<_DWORD>(v177 + 744) & 0xFFFFFFE5;
                goto LABEL_1033;
            case 0x11B:
                v178 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 576i64);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v178 + 128) + 432i64) + 840i64) + 592i64) + 592i64) + 280i64);
                goto LABEL_1033;
            case 0x11C:
            {
                //27F45F0
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 600i64) + 432i64) + 832i64) + 800i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 600i64) + 432i64) + 832i64) + 800i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            }
            case 0x11D:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 840i64) + 704i64) + 416i64) + 376i64) + 472i64) + 136i64) + 736i64) + 48i64);
                goto LABEL_1032;
            case 0x11E:
                v636 = v9 - 566887993;
                v636 = v9 - 566887993 - (FuckEnc::CacheRead<_DWORD>(EncBase + 16i64) ^ 0x548232E9) - FuckEnc::CacheRead<_DWORD>(EncBase + 320i64) - 415103114;
                goto LABEL_1033;
            case 0x11F:
                v636 = v9 - 800723740;
                v179 = EncBase;
                v636 = v9 - 800723740 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 640i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v179 + 200) + 832i64) + 544i64);
                goto LABEL_1033;
            case 0x120:
            {
                v180 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 480i64);
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v180 + 600) + 128i64) + 560i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v180 + 600) + 128i64) + 560i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            }
            case 0x121:
                v636 = v9 + 1862464518;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 608i64) + 472i64) + 128i64) + 880i64) + 896i64) + 80i64) ^ (v9 + 1862464518);
                goto LABEL_1033;
            case 0x122:
                v636 = v9 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 504i64) + 608i64) + 608i64) + 704i64) + 200i64) + 512i64);
                goto LABEL_1033;
            case 0x123:
                v181 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 184i64) + 320i64) - 1601656678;
                v636 += 1857110001 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v181 + 824) + 776i64);
                goto LABEL_1033;
            case 0x124:
            {
                v182 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 616i64) ^ v9;
                //(*(void(__fastcall**)(int*, __int64))(v182 + 216))(&v636, v182);
                func = FuckEnc::CacheRead<uint64_t>(v182 + 216);
                FuckEnc::FastCall(func, &v636, base);
                v636 ^= ~FuckEnc::CacheRead<_DWORD>(EncBase + 112i64);
                goto LABEL_1033;
            }
            case 0x125:
                v183 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 544i64);
                v636 = v636 - FuckEnc::CacheRead<_DWORD>(v183 + 248) - 1590744606;
                v636 ^= -333699864 - 1414370198 * FuckEnc::CacheRead<_DWORD>(v183 + 384);
                goto LABEL_1033;
            case 0x126:
                v636 = v9 - 936189343;
                v636 = v9 - 936189343 - ((1081116731 * (FuckEnc::CacheRead<_DWORD>(EncBase + 576i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 128i64) + 88i64))) & 0xFFFFFFE6);
                goto LABEL_1033;
            case 0x127:
                v184 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 896i64) + 640i64) ^ v9;
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v184 + 368) + 896i64) + 144i64) + 144i64) + 16i64) ^ v636;
                goto LABEL_1032;
            case 0x128:
                v185 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 712i64) ^ v9;
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v185 + 472) + 704i64) + 504i64) + 184i64) + 608i64) + 16i64);
                goto LABEL_1032;
            case 0x129:
                v186 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 840i64) + 848i64);
                v636 += FuckEnc::CacheRead<_DWORD>(v186 + 312) & 0xFFFFFFED;
                v636 ^= FuckEnc::CacheRead<_DWORD>(v186 + 384);
                goto LABEL_1033;
            case 0x12A:
                v636 = v9 - 1219417506;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 704i64) + 360i64) + 472i64) + 664i64) + 416i64) + 88i64) ^ (v9 - 1219417506);
                goto LABEL_1033;
            case 0x12B:
            {
                //v636 = FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0xB6ACD5B) + v9;
                v636 = 0xB6ACD5B + v9;
                //(*(void(__fastcall**)(int*, _QWORD))(EncBase + 912i64))(&v636, EncBase);
                func = FuckEnc::CacheRead<uint64_t>(EncBase + 912i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 -= FuckEnc::CacheRead<_DWORD>(EncBase + 512i64);
                goto LABEL_1033;
            }
            case 0x12C:
                v187 = EncBase;
                //v636 = FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0xBC6E20D) + (FuckEnc::CacheRead<_DWORD>(EncBase + 616i64) ^ v9);
                v636 = 0xBC6E20D + (FuckEnc::CacheRead<_DWORD>(EncBase + 616i64) ^ v9);
                v636 ^= (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v187 + 880) + 88i64) >> 30) & 1;
                goto LABEL_1033;
            case 0x12D:
                v188 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 576i64) * (FuckEnc::CacheRead<_DWORD>(EncBase + 776i64) ^ 0xE9FBFB54) + 1;
                v636 -= FuckEnc::CacheRead<_DWORD>(v188 + 808);
                goto LABEL_1033;
            case 0x12E:
            {
                v189 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 248i64) - 1837253071;
                //(*(void(__fastcall**)(int*, __int64))(v189 + 448))(&v636, v189);
                func = FuckEnc::CacheRead<uint64_t>(v189 + 448);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            }
            case 0x12F:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 736i64) + 176i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 832i64) + 248i64) - 1344317255;
                goto LABEL_1032;
            case 0x130:
                v636 = v9 + 1964640830;
                v190 = EncBase;
                v636 = v9 + 1964640830 + FuckEnc::CacheRead<_DWORD>(EncBase + 512i64);
                v636 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v190 + 832) + 40i64) + 544i64) + 940060008;
                goto LABEL_1033;
            case 0x131:
                v191 = EncBase;
                v636 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 472i64) + 152i64) << 14) + 665192445;
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v191 + 200) + 472i64) + 776i64);
                goto LABEL_1033;
            case 0x132:
                v192 = EncBase;
                v636 = (FuckEnc::CacheRead<_DWORD>(EncBase + 16i64) ^ v9) - 1817840356;
                v636 ^= FuckEnc::CacheRead<_DWORD>(v192 + 48);
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v192 + 272) + 824i64) + 16i64);
                goto LABEL_1033;
            case 0x133:
                v193 = EncBase;
                v636 = (v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 872i64)) ^ 0x8ADFFE0D;
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v193 + 880) + 144i64) + 880i64) + 144i64) + 848i64);
                goto LABEL_1033;
            case 0x134:
            {
                v636 = v9 ^ 0xB094C34C;
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 600i64) + 304i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 600i64) + 304i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            }
            case 0x135:
                v636 = v9 + 1665210499;
                v194 = EncBase;
                v636 = (FuckEnc::CacheRead<_DWORD>(EncBase + 712i64) ^ (v9 + 1665210499)) - 1908737097;
                v636 = ~(v636 - (FuckEnc::CacheRead<_DWORD>(v194 + 384) ^ 0xD98FE2B1));
                goto LABEL_1033;
            case 0x136:
                v195 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 280i64);
                v11 = v636 - (FuckEnc::CacheRead<_DWORD>(v195 + 776) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v195 + 664) + 808i64) ^ 0x6331AFE1);
                goto LABEL_1032;
            case 0x137:
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 832i64) + 368i64) + 40i64) + 184i64) + 896i64) + 416i64) + 664i64) + 640i64) ^ v9;
                goto LABEL_1032;
            case 0x138:
                v196 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 152i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(v196 + 872);
                v636 += 1050041511 * FuckEnc::CacheRead<unsigned __int8>(FuckEnc::CacheRead<_QWORD>(v196 + 664) + 811i64);
                goto LABEL_1033;
            case 0x139:
            {
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 368i64) + 184i64) + 840i64) + 680i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 368i64) + 184i64) + 840i64) + 680i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            }
            case 0x13A:
                v197 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 280i64) + 457706126;
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v197 + 136) + 272i64) + 176i64);
                goto LABEL_1033;
            case 0x13B:
                v198 = EncBase;
                v636 = v9 ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 776i64) + 867174635);
                v636 -= FuckEnc::CacheRead<_DWORD>(v198 + 280) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v198 + 136) + 152i64);
                goto LABEL_1033;
            case 0x13C:
                v636 = v9 ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 88i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 896i64) + 16i64)) ^ 0x1FAFAE05;
                goto LABEL_1033;
            case 0x13D:
                v199 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 88i64);
                v636 += (FuckEnc::CacheRead<_DWORD>(v199 + 320) ^ 0xC0A4B3AB) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v199 + 832) + 48i64);
                goto LABEL_1033;
            case 0x13E:
                v636 = v9 + 656321178;
                v200 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 832i64) + 384i64) + v9 + 656321178;
                v636 += (FuckEnc::CacheRead<_DWORD>(v200 + 552) ^ 0x90D6E84B) + 1;
                goto LABEL_1033;
            case 0x13F:
            {
                //(*(void(__fastcall**)(int*, _QWORD))(EncBase + 456i64))(&v636, EncBase);
                func = FuckEnc::CacheRead<uint64_t>(EncBase + 456i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 += 1152884888 + FuckEnc::CacheRead<_DWORD>(EncBase + 248i64);
                goto LABEL_1033;
            }
            case 0x140:
                v201 = EncBase;
                v636 = v9 ^ (1530958595 * FuckEnc::CacheRead<_DWORD>(EncBase + 48i64));
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v201 + 472) + 184i64) + 664i64) + 88i64);
                goto LABEL_1033;
            case 0x141:
                v202 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 136i64) + 16i64) ^ v9;
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v202 + 664) + 808i64) + (FuckEnc::CacheRead<_DWORD>(v202 + 248) << 27);
                goto LABEL_1033;
            case 0x142:
                v203 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 616i64) ^ v9;
                v636 += FuckEnc::CacheRead<_DWORD>(v203 + 552);
                v636 ^= 286070791 * FuckEnc::CacheRead<_DWORD>(v203 + 848) + 1933460944;
                goto LABEL_1033;
            case 0x143:
                v204 = EncBase;
                //v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 280i64) * ((FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0x744299B) + 6) ^ FuckEnc::CacheRead<_DWORD>(EncBase + 16i64));
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 280i64) * ((0x744299B + 6) ^ FuckEnc::CacheRead<_DWORD>(EncBase + 16i64));
                v636 -= FuckEnc::CacheRead<_DWORD>(v204 + 712) >> 1;
                goto LABEL_1033;
            case 0x144:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 416i64) + 376i64) + 136i64) + 640i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 360i64) + 384i64);
                goto LABEL_1032;
            case 0x145:
                v205 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 312i64) - 1198803641;
                v636 -= FuckEnc::CacheRead<_DWORD>(v205 + 744) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v205 + 360) + 184i64) + 544i64);
                goto LABEL_1033;
            case 0x146:
                v206 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 480i64);
                v636 = ~(v636 ^ (FuckEnc::CacheRead<_DWORD>(v206 + 88) + ~FuckEnc::CacheRead<_DWORD>(v206 + 408)));
                goto LABEL_1033;
            case 0x147:
                v636 = v9 ^ (~FuckEnc::CacheRead<_DWORD>(EncBase + 512i64) + ~FuckEnc::CacheRead<_DWORD>(EncBase + 872i64) + (FuckEnc::CacheRead<_DWORD>(EncBase + 784i64) ^ 0xD4F93107));
                goto LABEL_1033;
            case 0x148:
                v636 = v9 + 1219748030 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 608i64) + 416i64) + 840i64) + 704i64) + 40i64) + 144i64) + 248i64);
                goto LABEL_1033;
            case 0x149:
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 832i64) + 880i64) + 608i64) + 40i64) + 664i64) + 664i64) + 40i64) + 480i64) ^ v9;
                goto LABEL_1032;
            case 0x14A:
                v207 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 544i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v207 + 744) ^ 0x4364D666;
                v11 = v636 - 1158894538 * FuckEnc::CacheRead<_DWORD>(v207 + 744);
                goto LABEL_1032;
            case 0x14B:
                v636 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 8i64) + 128i64) + 600i64) + 576i64) ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 280i64) << 20));
                goto LABEL_1033;
            case 0x14C:
                v208 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 848i64) + 1142181439;
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v208 + 128) + 200i64) + 592i64) + 552i64);
                goto LABEL_1033;
            case 0x14D:
                v636 = v9 + 1886325532;
                v209 = EncBase;
                v210 = FuckEnc::CacheRead<_DWORD>(EncBase + 80i64) ^ (v9 + 1886325532);
                goto LABEL_339;
            case 0x14E:
                v211 = EncBase;
                v636 = v9 - 1632380027 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 144i64) + 360i64) + 480i64) + 846481043;
                v636 += FuckEnc::CacheRead<_DWORD>(v211 + 408) ^ 0xEA11E518;
                goto LABEL_1033;
            case 0x14F:
                v212 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 896i64) + 376i64) + 48i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v212 + 736) + 360i64) + 824i64) + 872i64);
                goto LABEL_1033;
            case 0x150:
                v213 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 616i64);
                v636 += FuckEnc::CacheRead<_DWORD>(v213 + 616) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v213 + 368) + 40i64) + 784i64) + 1;
                goto LABEL_1033;
            case 0x151:
                v636 = (v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 136i64) + 136i64) + 88i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 608i64) + 312i64))) ^ 0xCA6CC757;
                goto LABEL_1033;
            case 0x152:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 128i64) + 504i64) + 648i64) + 880i64) + 432i64) + 136i64) + 848i64);
                goto LABEL_1033;
            case 0x153:
                v214 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 368i64) + 432i64) + 512i64) ^ v9;
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v214 + 416) + 136i64) + 712i64);
                goto LABEL_1032;
            case 0x154:
                v215 = EncBase;
                v636 = v9 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 200i64) + 512i64);
                v636 += (FuckEnc::CacheRead<_DWORD>(v215 + 776) >> 18) - 979205835;
                goto LABEL_1033;
            case 0x155:
                v216 = EncBase;
                v636 = (FuckEnc::CacheRead<_DWORD>(EncBase + 88i64) ^ v9) - 1202050415;
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v216 + 144) + 608i64) + 80i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(v216 + 16);
                goto LABEL_1033;
            case 0x156:
            {
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 504i64) + 824i64) + 880i64) + 920i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 504i64) + 824i64) + 880i64) + 920i64);
                FuckEnc::FastCall(func, &v636, base);
                //v636 += (int)"ArmSelectedPackageItemView::ShowIcon_ES";
                v636 += 0x1137BB49;
                goto LABEL_1033;
            }
            case 0x157:
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 472i64) + 144i64) + 368i64) + 8i64) + 472i64) + 416i64) + 808i64) ^ v9;
                goto LABEL_1032;
            case 0x158:
                v11 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 608i64) + 88i64) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 432i64) + 776i64) * (FuckEnc::CacheRead<_DWORD>(EncBase + 640i64) << 8)));
                goto LABEL_1032;
            case 0x159:
                v217 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 368i64) + 808i64) - 1820813977;
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v217 + 608) + 736i64) + 368i64) + 176i64);
                goto LABEL_1033;
            case 0x15A:
                v218 = EncBase;
                v219 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 240i64) + 592i64) + 504i64) + 272i64) + 824i64) + 384i64);
                goto LABEL_353;
            case 0x15B:
                v220 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 552i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v220 + 880) + 848i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v220 + 248) - 1772270262;
                goto LABEL_1033;
            case 0x15C:
                v221 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 368i64) + 408i64) ^ v9;
                v636 += FuckEnc::CacheRead<_DWORD>(v221 + 712) ^ 0xD3B1F178;
                v636 += FuckEnc::CacheRead<_DWORD>(v221 + 248);
                goto LABEL_1033;
            case 0x15D:
                v222 = EncBase;
                v636 = v9 ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 544i64) - 414219601);
                v636 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v222 + 376) + 648i64) + 112i64);
                goto LABEL_1033;
            case 0x15E:
                v223 = EncBase;
                v636 = v9 ^ ~FuckEnc::CacheRead<_DWORD>(EncBase + 248i64);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v223 + 704) + 824i64) + 136i64) + 16i64);
                goto LABEL_1033;
            case 0x15F:
                v224 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 872i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v224 + 872);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v224 + 240) + 704i64) + 544i64) >> 13;
                goto LABEL_1033;
            case 0x160:
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 128i64) + 704i64) + 840i64) + 472i64) + 432i64) + 600i64) + 376i64) + 16i64) ^ v9;
                goto LABEL_1032;
            case 0x161:
                v225 = EncBase;
                v636 = ~(v9 + ((-300774948 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 280i64)) ^ 0x8F2CFA7C));
                v636 += 107484494 * FuckEnc::CacheRead<_DWORD>(v225 + 80);
                goto LABEL_1033;
            case 0x162:
            {
                v226 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 16i64) ^ v9 ^ 0xB1465F2D;
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(v226 + 840) + 768i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(v226 + 840) + 768i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            }
            case 0x163:
                v11 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 592i64) + 576i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 648i64) + 240i64) + 808i64));
                goto LABEL_1032;
            case 0x164:
                v227 = EncBase;
                v636 = v9 ^ ~(FuckEnc::CacheRead<_DWORD>(EncBase + 248i64) ^ 0xC6A55F2D);
                v636 ^= -361606371 * ((FuckEnc::CacheRead<_DWORD>(v227 + 640) + 1919782395) ^ 0x682137D1);
                goto LABEL_1033;
            case 0x165:
                v636 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 128i64) + 360i64) + 152i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 896i64) + 184i64) + 808i64));
                goto LABEL_1033;
            case 0x166:
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(EncBase + 416i64) + 688i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(EncBase + 416i64) + 688i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 = v636 - 1587212076 + FuckEnc::CacheRead<_DWORD>(EncBase + 744i64);
                goto LABEL_1033;
            case 0x167:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 704i64) + 880i64) + 736i64) + 840i64) + 704i64) + 832i64) + 808i64);
                goto LABEL_1032;
            case 0x168:
            {
                //(*(void(__fastcall**)(int*, _QWORD))(EncBase + 800i64))(&v636, EncBase);
                func = FuckEnc::CacheRead<uint64_t>(EncBase + 800i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 += 1941089803;
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 784i64);
                goto LABEL_1033;
            }
            case 0x169:
                v636 = v9 + (FuckEnc::CacheRead<_DWORD>(EncBase + 576i64) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 824i64) + 600i64) + 848i64));
                goto LABEL_1033;
            case 0x16A:
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 368i64) + 648i64) + 8i64) + 608i64) + 144i64) + 384i64) ^ v9;
                goto LABEL_1032;
            case 0x16B:
                v636 = v9 ^ 0x983706F5;
                v228 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 416i64) + 128i64) + 552i64) ^ v9 ^ 0x983706F5;
                v11 = v636 - (FuckEnc::CacheRead<_DWORD>(v228 + 48) ^ 0xBD2C688B);
                goto LABEL_1032;
            case 0x16C:
                v636 = v9 ^ 0x34802433;
                v229 = EncBase;
                v636 = (v9 ^ 0x34802433) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 144i64) + 648i64) + 776i64);
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(v229 + 320);
                goto LABEL_1032;
            case 0x16D:
                v230 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 512i64) ^ v9;
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v230 + 432) + 376i64) + 648i64) + 832i64) + 40i64) + 344i64);
                goto LABEL_1032;
            case 0x16E:
                v231 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 784i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 832i64) + 320i64);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v231 + 664) + 320i64);
                goto LABEL_1033;
            case 0x16F:
                //v232 = (_DWORD*)EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 504i64) + 640i64) ^ v9;
                v636 ^= FuckEnc::CacheRead<_DWORD>(EncBase + (202 * 4));//v232[202];
                v636 += FuckEnc::CacheRead<_DWORD>(EncBase + (194 * 4));//v232[194];
                v636 -= FuckEnc::CacheRead<_DWORD>(EncBase + (154 * 4));//v232[154];
                goto LABEL_1033;
            case 0x170:
                v233 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 16i64) + 1301056705;
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v233 + 136) + 648i64) + 184i64) + 176i64) >> 14;
                goto LABEL_1033;
            case 0x171:
            {
                v636 = v9 ^ 0x33B20A25;
                v234 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 704i64) + 576i64) ^ v9 ^ 0x33B20A25;
                //(*(void(__fastcall**)(int*, __int64))(v234 + 96))(&v636, v234);
                func = FuckEnc::CacheRead<uint64_t>(v234 + 96);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            }
            case 0x172:
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 608i64) + 184i64) + 416i64) + 416i64) + 840i64) + 8i64) + 408i64) ^ v9;
                goto LABEL_1032;
            case 0x173:
                v11 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 128i64) + 40i64) + 824i64) + 608i64) + 144i64) + 48i64) ^ v9) + 1081038658;
                goto LABEL_1032;
            case 0x174:
                v636 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 368i64) + 416i64) + 80i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 416i64) + 608i64) + 648i64) + 16i64));
                goto LABEL_1033;
            case 0x175:
                //v636 = FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0x40678FA) + v9 + 7;
                v636 = 0x40678FA + v9 + 7;
                v235 = EncBase;
                v636 += FuckEnc::CacheRead<_DWORD>(EncBase + 384i64) + 1;
                v636 += FuckEnc::CacheRead<_DWORD>(v235 + 784) - 1733091489;
                goto LABEL_1033;
            case 0x176:
                v636 = v9 ^ 0xF9E0653E;
                v236 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 408i64) ^ v9 ^ 0xF9E0653E;
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v236 + 240) + 200i64) + 472i64) + 848i64) ^ v636;
                goto LABEL_1032;
            case 0x177:
                v237 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 136i64) + 744i64) ^ v9;
                v636 ^= FuckEnc::CacheRead<_DWORD>(v237 + 320);
                v636 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v237 + 880) + 512i64);
                goto LABEL_1033;
            case 0x178:
                v636 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 704i64) + 472i64) + 416i64) + 872i64) ^ (-FuckEnc::CacheRead<_DWORD>(EncBase + 576i64) - 1325866944));
                goto LABEL_1033;
            case 0x179:
                v636 = v9 ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 312i64) + (FuckEnc::CacheRead<_DWORD>(EncBase + 280i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 896i64) + 8i64) + 320i64)));
                goto LABEL_1033;
            case 0x17A:
                v238 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 832i64) + 184i64) + 704i64) + 848i64);
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v238 + 360) + 240i64) + 384i64);
                goto LABEL_1032;
            case 0x17B:
                v636 = v9 - 1844070334;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 840i64) + 608i64) + 368i64) + 472i64) + 896i64) + 112i64) ^ (v9 - 1844070334);
                goto LABEL_1033;
            case 0x17C:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 648i64) + 408i64) * (FuckEnc::CacheRead<_DWORD>(EncBase + 576i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 16i64));
                goto LABEL_1032;
            case 0x17D:
                v636 = v9 - 153560165;
                v239 = EncBase;
                v636 = v9 - 153560165 - ((216001791 * FuckEnc::CacheRead<_DWORD>(EncBase + 640i64)) | 0xE);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v239 + 736) + 408i64);
                goto LABEL_1033;
            case 0x17E:
                v240 = EncBase;
                v636 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 896i64) + 712i64) | 0xA);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v240 + 128) + 176i64) ^ 0x2C1726EC;
                goto LABEL_1033;
            case 0x17F:
                v241 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 144i64) + 368i64) + 248i64);
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v241 + 704) + 472i64) + 504i64) + 344i64) ^ v636;
                goto LABEL_1032;
            case 0x180:
            {
                //(*(void(__fastcall**)(int*, _QWORD))(EncBase + 464i64))(&v636, EncBase);
                func = FuckEnc::CacheRead<uint64_t>(EncBase + 464i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 592i64) + 648i64) + 552i64);
                goto LABEL_1033;
            }
            case 0x181:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 136i64) + 416i64) + 240i64) + 664i64) + 8i64) + 152i64) - 1666788973;
                goto LABEL_1032;
            case 0x182:
                v636 = v9 - 301403998;
                v636 = v9 - 301403998 + FuckEnc::CacheRead<_DWORD>(EncBase + 48i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 432i64) + 808i64);
                goto LABEL_1033;
            case 0x183:
                v242 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 880i64) + 112i64) ^ v9 ^ 0x2F376D7B;
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v242 + 896) + 416i64) + 384i64) ^ v636;
                goto LABEL_1032;
            case 0x184:
                v243 = EncBase;
                v636 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 368i64) + 88i64) << 31);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v243 + 504) + 48i64);
                goto LABEL_1033;
            case 0x185:
                v636 = v9 ^ 0xCB2BEAB3;
                v244 = EncBase;
                v636 = (v9 ^ 0xCB2BEAB3) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 360i64) + 552i64);
                v636 += FuckEnc::CacheRead<_DWORD>(v244 + 784);
                v636 -= FuckEnc::CacheRead<_DWORD>(v244 + 384);
                goto LABEL_1033;
            case 0x186:
                v245 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 176i64);
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(v245 + 280) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v245 + 648) + 8i64) + 648i64) + 248i64);
                goto LABEL_1032;
            case 0x187:
                v246 = EncBase;
                v636 = ((v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 408i64) + 764399524) ^ 0x2F1BD0FE) - 122905295;
                v636 ^= 1779285770 * ~FuckEnc::CacheRead<_DWORD>(v246 + 744);
                goto LABEL_1033;
            case 0x188:
                v11 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 592i64) + 8i64) + 600i64) + 664i64) + 8i64) + 552i64) ^ 0x688769CF);
                goto LABEL_1032;
            case 0x189:
                v247 = EncBase;
                v636 = v9 ^ ((FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 608i64) + 576i64) >> 9) + FuckEnc::CacheRead<_DWORD>(EncBase + 152i64) + 675042186);
                v636 -= FuckEnc::CacheRead<_DWORD>(v247 + 808);
                goto LABEL_1033;
            case 0x18A:
                v248 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 592i64) + 88i64) - FuckEnc::CacheRead<_DWORD>(EncBase + 176i64);
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v248 + 648) + 592i64) + 112i64);
                goto LABEL_1032;
            case 0x18B:
                v249 = EncBase;
                //v636 = v9 + FuckEnc::CacheRead<_DWORD>(GameData.Process.Base + 0x453286) + 6 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 432i64) + 552i64);
                v636 = v9 + 0x453286 + 6 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 432i64) + 552i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v249 + 432) + 592i64) + 840i64) + 480i64);
                goto LABEL_1033;
            case 0x18C:
                v636 = v9 ^ 0x51860F8E;
                v636 = v9 ^ 0x51860F8E ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 704i64) + 640i64) ^ ~FuckEnc::CacheRead<_DWORD>(EncBase + 80i64);
                goto LABEL_1033;
            case 0x18D:
                v250 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 128i64) + 896i64) + 360i64) + 280i64) ^ v9;
                v636 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v250 + 880) + 16i64);
                goto LABEL_1033;
            case 0x18E:
                v636 = 900604481 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 880i64) + 136i64) + 480i64) - FuckEnc::CacheRead<_DWORD>(EncBase + 112i64) - v9;
                goto LABEL_1033;
            case 0x18F:
                v251 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 184i64) + 504i64) + 504i64) + 504i64) + 592i64) + 872i64);
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(v251 + 112);
                goto LABEL_1032;
            case 0x190:
                v252 = EncBase;
                v636 = v9 ^ (-971035928 - 613617515 * FuckEnc::CacheRead<_DWORD>(EncBase + 776i64));
                v636 ^= ~(FuckEnc::CacheRead<_DWORD>(v252 + 576) + 466253363);
                goto LABEL_1033;
            case 0x191:
                v253 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 408i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 872i64);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v253 + 368) + 832i64) + 808i64);
                goto LABEL_1033;
            case 0x192:
            {
                v254 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 808i64);
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(v254 + 896) + 728i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(v254 + 896) + 728i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            }
            case 0x193:
                v255 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 136i64) + 8i64) + 128i64) + 80i64) ^ v9;
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v255 + 8) + 88i64);
                goto LABEL_1032;
            case 0x194:
                v256 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 472i64) + 48i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v256 + 344) & 0xFFFFFFF1;
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v256 + 128) + 384i64);
                goto LABEL_1033;
            case 0x195:
                v636 = (v9 - 954564663) ^ 0xCF516909;
                v257 = EncBase;
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 512i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v257 + 200) + 48i64);
                goto LABEL_1033;
            case 0x196:
                v636 = v9 + ~(FuckEnc::CacheRead<_DWORD>(EncBase + 744i64) ^ ((unsigned int)(504689519 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 368i64) + 664i64) + 320i64)) >> 10));
                goto LABEL_1033;
            case 0x197:
                v258 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 248i64) ^ v9;
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v258 + 432) + 40i64) + 504i64) + 736i64) + 712i64);
                goto LABEL_1032;
            case 0x198:
            {
                //(*(void(__fastcall**)(int*, _QWORD))(EncBase + 216i64))(&v636, EncBase);
                func = FuckEnc::CacheRead<uint64_t>(EncBase + 216i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 736i64) + 312i64) ^ 0x7C7F9A26;
                goto LABEL_1033;
            }
            case 0x199:
                v636 = v9 - 1251281833;
                v259 = EncBase;
                v636 = v9 - 1251281833 - FuckEnc::CacheRead<_DWORD>(EncBase + 384i64);
                v636 = v636 - 1057197183 * (FuckEnc::CacheRead<_DWORD>(v259 + 872) >> 4) + 1328243037;
                goto LABEL_1033;
            case 0x19A:
                v260 = EncBase;
                v636 = (v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 416i64) + 704i64) + 320i64)) ^ 0x9E11431B;
                v636 = v636 - 112092267 * FuckEnc::CacheRead<_DWORD>(v260 + 312) + 462799786;
                goto LABEL_1033;
            case 0x19B:
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 664i64) + 144i64) + 880i64) + 272i64) + 376i64) + 824i64) + 848i64) ^ v9;
                goto LABEL_1032;
            case 0x19C:
            {
                v261 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 848i64) ^ v9;
                //(*(void(__fastcall**)(int*, __int64))(v261 + 224))(&v636, v261);
                func = FuckEnc::CacheRead<uint64_t>(v261 + 224);
                FuckEnc::FastCall(func, &v636, base);
                v636 -= 1219059629;
                goto LABEL_1033;
            }
            case 0x19D:
                v636 = ~(v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 504i64) + 608i64) + 704i64) + 504i64) + 416i64) + 840i64) + 80i64));
                goto LABEL_1033;
            case 0x19E:
                v262 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 712i64);
                v636 ^= -1064323040 * FuckEnc::CacheRead<_DWORD>(v262 + 88);
                v636 = v636 - (FuckEnc::CacheRead<_DWORD>(v262 + 320) >> 9) + 411661426;
                goto LABEL_1033;
            case 0x19F:
                //v636 = (FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0x828DFA9) + 3) ^ v9;
                v636 = (0x828DFA9 + 3) ^ v9;
                v11 = ((0x828DFA9 + 3) ^ v9) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 704i64) + 416i64) + 832i64) + 240i64) + 416i64) + 320i64);
                goto LABEL_1032;
            case 0x1A0:
                v263 = EncBase;
                v636 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 8i64) + 240i64) + 416i64) + 16i64) - 1382598751);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v263 + 88);
                goto LABEL_1033;
            case 0x1A1:
                v636 = v9 ^ 0x7A10C815;
                v264 = EncBase;
                v636 = (v9 ^ 0x7A10C815) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 200i64) + 872i64) + 1;
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v264 + 136) + 48i64);
                goto LABEL_1033;
            case 0x1A2:
            {
                v636 = v9 - 1867905070;
                //(*(void(__fastcall**)(int*, _QWORD))(EncBase + 232i64))(&v636, EncBase);
                func = FuckEnc::CacheRead<uint64_t>(EncBase + 232i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 ^= FuckEnc::CacheRead<_DWORD>(EncBase + 16i64);
                goto LABEL_1033;
            }
            case 0x1A3:
            {
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 648i64) + 104i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 648i64) + 104i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 -= FuckEnc::CacheRead<_DWORD>(EncBase + 616i64);
                goto LABEL_1033;
            }
            case 0x1A4:
                v265 = EncBase;
                v636 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 416i64) + 16i64) | 0xA);
                v636 -= FuckEnc::CacheRead<_DWORD>(v265 + 872) * (FuckEnc::CacheRead<_DWORD>(v265 + 776) ^ 0xE1B304E9);
                goto LABEL_1033;
            case 0x1A5:
            {
                v266 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 784i64);
                //(**(void(__fastcall***)(int*))(v266 + 648))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<uint64_t>(v266 + 648));
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            }
            case 0x1A6:
                v267 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 640i64) + 1686974697;
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v267 + 648) + 600i64) + 360i64) + 616i64);
                goto LABEL_1033;
            case 0x1A7:
            {
                v268 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 744i64);
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(v268 + 272) + 568i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(v268 + 272) + 568i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 -= 759696657;
                goto LABEL_1033;
            }
            case 0x1A8:
                v636 = v9 + 428883423;
                v269 = EncBase;
                v636 = (FuckEnc::CacheRead<_DWORD>(EncBase + 88i64) ^ (v9 + 428883423)) - 2081661537;
                v636 -= FuckEnc::CacheRead<_DWORD>(v269 + 544);
                v636 += FuckEnc::CacheRead<_DWORD>(v269 + 152);
                goto LABEL_1033;
            case 0x1A9:
                v636 = (v9 + 76156013 * FuckEnc::CacheRead<_DWORD>(EncBase + 152i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 360i64) + 128i64) + 616i64)) ^ 0x90615119;
                goto LABEL_1033;
            case 0x1AA:
                v636 = v9 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 472i64) + 272i64) + 136i64) + 664i64) + 592i64) + 808i64);
                goto LABEL_1033;
            case 0x1AB:
            {
                v636 = v9 - 143709692;
                v270 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 312i64) ^ (v9 - 143709692);
                //(*(void(__fastcall**)(int*, __int64))(v270 + 920))(&v636, v270);
                func = FuckEnc::CacheRead<uint64_t>(v270 + 920);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            }
            case 0x1AC:
                v636 = (v9 ^ 0x57B5C041) + 837523322;
                v271 = EncBase;
                v636 = ~(v636 + FuckEnc::CacheRead<_DWORD>(EncBase + 808i64));
                v636 ^= FuckEnc::CacheRead<_DWORD>(v271 + 152);
                goto LABEL_1033;
            case 0x1AD:
                v11 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 272i64) + 848i64) ^ 0x2C270F1E) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 128i64) + 432i64) + 552i64);
                goto LABEL_1032;
            case 0x1AE:
                v272 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 152i64) ^ v9 ^ 0xD283B175;
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v272 + 472) + 272i64) + 360i64) + 552i64);
                goto LABEL_1032;
            case 0x1AF:
            {
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 832i64) + 832i64) + 728i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 832i64) + 832i64) + 728i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 -= FuckEnc::CacheRead<_DWORD>(EncBase + 512i64);
                goto LABEL_1033;
            }
            case 0x1B0:
            {
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 136i64) + 376i64) + 568i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 136i64) + 376i64) + 568i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            }
            case 0x1B1:
                v273 = EncBase;
                v636 = v9 + (FuckEnc::CacheRead<_DWORD>(EncBase + 408i64) ^ 0xF64BF5C4);
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v273 + 832) + 824i64) + 432i64) + 128i64) + 384i64);
                goto LABEL_1033;
            case 0x1B2:
                v274 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 576i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v274 + 112);
                v636 -= FuckEnc::CacheRead<_DWORD>(v274 + 80) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v274 + 824) + 312i64);
                goto LABEL_1033;
            case 0x1B3:
                v275 = EncBase;
                v636 = v9 - (FuckEnc::CacheRead<_DWORD>(EncBase + 408i64) ^ FuckEnc::CacheRead<_DWORD>(EncBase + 552i64) ^ 0x34620D9E);
                v636 += FuckEnc::CacheRead<_DWORD>(v275 + 640);
                goto LABEL_1033;
            case 0x1B4:
                v276 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 544i64);
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v276 + 824) + 8i64) + 8i64) + 600i64) + 704i64) + 616i64) ^ v636;
                goto LABEL_1032;
            case 0x1B5:
                v636 = v9 ^ 0xC2E9F566;
                v277 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 152i64) ^ v9 ^ 0xC2E9F566;
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v277 + 896) + 832i64) + 616i64) ^ 0xDB7FCE68;
                goto LABEL_1033;
            case 0x1B6:
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 184i64) + 880i64) + 896i64) + 368i64) + 824i64) + 512i64) ^ v9 ^ 0x28484C78;
                goto LABEL_1032;
            case 0x1B7:
                v278 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 128i64) + 472i64) + 16i64);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v278 + 736) + 592i64) + 320i64);
                goto LABEL_1033;
            case 0x1B8:
                v636 = v9 ^ 0xB4B7FD7A;
                v11 = (v9 ^ 0xB4B7FD7A) - 1176257658 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 136i64) + 272i64) + 416i64) + 360i64) + 640i64);
                goto LABEL_1032;
            case 0x1B9:
                v636 = (v9 ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 776i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 736i64) + 376i64) + 664i64) + 848i64))) - 2031774269;
                goto LABEL_1033;
            case 0x1BA:
                //v636 = FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0xB976524) + v9 + 4;
                v636 = 0xB976524 + v9 + 4;
                v279 = EncBase;
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 832i64) + 136i64) + 648i64) + 544i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v279 + 16);
                goto LABEL_1033;
            case 0x1BB:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 840i64) + 704i64) + 432i64) + 664i64) + 432i64) + 128i64) + 896i64) + 320i64);
                goto LABEL_1032;
            case 0x1BC:
                v636 = v9 ^ 0xD4F10458;
                v280 = EncBase;
                v636 = (v9 ^ 0xD4F10458) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 368i64) + 472i64) + 600i64) + 544i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v280 + 544);
                goto LABEL_1033;
            case 0x1BD:
                v636 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 144i64) + 136i64) + 112i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 432i64) + 664i64) + 432i64) + 576i64));
                goto LABEL_1033;
            case 0x1BE:
            {
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 896i64) + 464i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 896i64) + 464i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 += FuckEnc::CacheRead<_DWORD>(EncBase + 312i64);
                goto LABEL_1033;
            }
            case 0x1BF:
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 504i64) + 648i64) + 184i64) + 736i64) + 648i64) + 704i64) + 592i64) + 640i64) ^ v9;
                goto LABEL_1032;
            case 0x1C0:
                v281 = EncBase;
                v636 = v9 ^ ~FuckEnc::CacheRead<_DWORD>(EncBase + 576i64);
                v636 = v636 - FuckEnc::CacheRead<_DWORD>(v281 + 248) + 623299701;
                v636 += ~FuckEnc::CacheRead<_DWORD>(v281 + 784);
                goto LABEL_1033;
            case 0x1C1:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 128i64) + 200i64) + 896i64) + 432i64) + 184i64) + 136i64) + 432i64) + 408i64);
                goto LABEL_1033;
            case 0x1C2:
                v282 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 384i64) ^ v9;
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v282 + 504) + 184i64) + 200i64) + 360i64) + 312i64);
                goto LABEL_1032;
            case 0x1C3:
                v636 = v9 ^ 0x734CAD1A;
                v283 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 368i64) + 848i64) ^ v9 ^ 0x734CAD1A;
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v283 + 648) + 272i64) + 808i64) ^ v636;
                goto LABEL_1032;
            case 0x1C4:
                v284 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 344i64) ^ v9;
                v636 += -FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v284 + 824) + 144i64) + 848i64) - 1973830385;
                goto LABEL_1033;
            case 0x1C5:
                v636 = v9 - 2054633999;
                v636 = v9 - 2054633999 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 368i64) + 176i64) * (FuckEnc::CacheRead<_DWORD>(EncBase + 872i64) ^ 0xC1187667);
                goto LABEL_1033;
            case 0x1C6:
                v285 = EncBase;
                v636 = v9 + 2017275250 - FuckEnc::CacheRead<_DWORD>(EncBase + 616i64);
                v636 += ~FuckEnc::CacheRead<unsigned __int16>(v285 + 82);
                goto LABEL_1033;
            case 0x1C7:
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 416i64) + 240i64) + 736i64) + 896i64) + 40i64) + 704i64) + 416i64) + 808i64) ^ v9;
                goto LABEL_1032;
            case 0x1C8:
                v636 = v9 - 409708968;
                v636 = v9 - 409708968 + FuckEnc::CacheRead<_DWORD>(EncBase + 616i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 704i64) + 880i64) + 736i64) + 384i64);
                goto LABEL_1033;
            case 0x1C9:
            {
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 8i64) + 840i64) + 648i64) + 896i64) + 448i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 8i64) + 840i64) + 648i64) + 896i64) + 448i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            }
            case 0x1CA:
                v286 = EncBase;
                v636 = v9 + ~FuckEnc::CacheRead<_DWORD>(EncBase + 552i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v286 + 704) + 704i64) + 40i64) + 416i64) + 872i64);
                goto LABEL_1033;
            case 0x1CB:
                v287 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 544i64);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v287 + 504) + 16i64) + 812520015;
                v636 ^= FuckEnc::CacheRead<_DWORD>(v287 + 784);
                goto LABEL_1033;
            case 0x1CC:
                v288 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 248i64);
                v636 += ~FuckEnc::CacheRead<_DWORD>(v288 + 80) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v288 + 144) + 248i64);
                goto LABEL_1033;
            case 0x1CD:
                v289 = EncBase;
                v636 = v9 + 1299134413 * FuckEnc::CacheRead<_DWORD>(EncBase + 88i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v289 + 376) + 144i64) + 432i64) + 312i64) ^ 0xF5F8D30A;
                goto LABEL_1033;
            case 0x1CE:
                v636 = v9 ^ 0xAF7872B4;
                v11 = (v9 ^ 0xAF7872B4) - 1925821627 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 240i64) + 384i64) - FuckEnc::CacheRead<_DWORD>(EncBase + 544i64) + 1657176185;
                goto LABEL_1032;
            case 0x1CF:
                v636 = (v9 + 55539603) ^ 0xE10A7999;
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 592i64) + 184i64) + 840i64) + 776i64);
                goto LABEL_1033;
            case 0x1D0:
                v290 = EncBase;
                v636 = ~(v9 ^ (-511853532 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 344i64)));
                v636 ^= -1692969973 - 1053040634 * FuckEnc::CacheRead<_DWORD>(v290 + 152);
                goto LABEL_1033;
            case 0x1D1:
                v291 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 648i64) + 376i64) + 8i64) + 80i64);
                v636 += FuckEnc::CacheRead<_DWORD>(v291 + 552) + 1;
                goto LABEL_1033;
            case 0x1D2:
                v292 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 576i64) ^ v9;
                v636 = (v636 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v292 + 896) + 432i64) + 744i64)) - 1208862890;
                goto LABEL_1033;
            case 0x1D3:
                v293 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 544i64) ^ v9;
                v636 -= FuckEnc::CacheRead<_DWORD>(v293 + 312);
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v293 + 416) + 736i64) + 80i64) + 1324482272;
                goto LABEL_1032;
            case 0x1D4:
                //v636 = FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0x6762B30) + v9;
                v636 = 0x6762B30 + v9;
                v636 ^= FuckEnc::CacheRead<_DWORD>(EncBase + 744i64) ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 344i64) - 37127563 * FuckEnc::CacheRead<_DWORD>(EncBase + 576i64));
                goto LABEL_1033;
            case 0x1D5:
                v294 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 272i64) + 360i64) + 744i64);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v294 + 376) + 240i64) + 152i64) + 1487739071;
                goto LABEL_1033;
            case 0x1D6:
                v636 = (v9 ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 384i64) * (FuckEnc::CacheRead<_DWORD>(EncBase + 112i64) + (FuckEnc::CacheRead<_DWORD>(EncBase + 408i64) ^ 0xE3E24732)))) + 881555699;
                goto LABEL_1033;
            case 0x1D7:
                v636 = v9 + ~(-1454588964 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 432i64) + 832i64) + 880i64) + 504i64) + 648i64) + 48i64));
                goto LABEL_1033;
            case 0x1D8:
                v636 = v9 + 705399285;
                v295 = EncBase;
                v636 = (v9 + 705399285) ^ ~(FuckEnc::CacheRead<_DWORD>(EncBase + 384i64) | 8);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v295 + 184) + 544i64);
                goto LABEL_1033;
            case 0x1D9:
                v296 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 640i64) ^ v9;
                v636 ^= FuckEnc::CacheRead<_DWORD>(v296 + 320) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v296 + 360) + 592i64) + 320i64);
                goto LABEL_1033;
            case 0x1DA:
                v11 = ~(v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 416i64) + 880i64) + 648i64) + 144i64) + 416i64) + 408i64));
                goto LABEL_1032;
            case 0x1DB:
                v297 = EncBase;
                v636 = v9 ^ ~FuckEnc::CacheRead<_DWORD>(EncBase + 640i64);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v297 + 144) + 832i64) + 880i64) + 112i64) + 1;
                goto LABEL_1033;
            case 0x1DC:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 896i64) + 40i64) + 712i64) - (FuckEnc::CacheRead<_DWORD>(EncBase + 872i64) ^ 0xB914B715) + 1;
                goto LABEL_1033;
            case 0x1DD:
                v298 = EncBase;
                //v636 = (v9 - ((FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0x1417A818)) ^ FuckEnc::CacheRead<_DWORD>(EncBase + 872i64))) ^ 0x1A0E1602;
                v636 = (v9 - ((0x1417A818) ^ FuckEnc::CacheRead<_DWORD>(EncBase + 872i64))) ^ 0x1A0E1602;
                v636 = ~(v636 + (FuckEnc::CacheRead<_DWORD>(v298 + 152) ^ 0xB17FC581));
                goto LABEL_1033;
            case 0x1DE:
                v299 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 384i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v299 + 368) + 704i64) + 600i64) + 824i64) + 592i64) + 384i64);
                goto LABEL_1033;
            case 0x1DF:
                v636 = v9 + 2000499035;
                v300 = EncBase;
                v636 = v9 + 2000499035 + FuckEnc::CacheRead<_DWORD>(EncBase + 480i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v300 + 408);
                v636 += FuckEnc::CacheRead<_DWORD>(v300 + 48) + 1;
                goto LABEL_1033;
            case 0x1E0:
                v11 = (v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 848i64)) ^ 0xA90EE87C;
                goto LABEL_1032;
            case 0x1E1:
            {
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 368i64) + 368i64) + 592i64) + 728i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 368i64) + 368i64) + 592i64) + 728i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            }
            case 0x1E2:
                v301 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 432i64) + 416i64) + 744i64) + 912541064;
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v301 + 40) + 640i64);
                goto LABEL_1033;
            case 0x1E3:
            {
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 592i64) + 224i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 592i64) + 224i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 ^= FuckEnc::CacheRead<_DWORD>(EncBase + 784i64);
                goto LABEL_1033;
            }
            case 0x1E4:
                v302 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 776i64) - 2023442895;
                v636 -= FuckEnc::CacheRead<_DWORD>(v302 + 80) ^ (-1237917792 * FuckEnc::CacheRead<_DWORD>(v302 + 320));
                goto LABEL_1033;
            case 0x1E5:
                v636 = v9 ^ 0x1AE1DAE9;
                v636 = (v9 ^ 0x1AE1DAE9) + (FuckEnc::CacheRead<_DWORD>(EncBase + 344i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 600i64) + 592i64) + 616i64) ^ 0x7FEC68F0);
                goto LABEL_1033;
            case 0x1E6:
                v303 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 736i64) + 840i64) + 144i64) + 360i64) + 784i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(v303 + 808) ^ 0xE91742D3;
                goto LABEL_1033;
            case 0x1E7:
            {
                v304 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 80i64) ^ v9;
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(v304 + 144) + 456i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(v304 + 144) + 456i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            }
            case 0x1E8:
                v636 = v9 ^ ~(FuckEnc::CacheRead<_DWORD>(EncBase + 248i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 880i64) + 272i64) + 704i64) + 144i64) + 248i64));
                goto LABEL_1033;
            case 0x1E9:
                v636 = (v9 ^ 0xEE1A00D1) + 1590526682;
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 600i64) + 136i64) + 240i64) + 576i64) + 1;
                goto LABEL_1033;
            case 0x1EA:
                v636 = v9 ^ 0xBC7EA6F0;
                v636 = v9 ^ 0xBC7EA6F0 ^ FuckEnc::CacheRead<_DWORD>(EncBase + 280i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 144i64) + 504i64) + 136i64) + 848i64);
                goto LABEL_1033;
            case 0x1EB:
                v636 = v9 ^ 0xE61B41DA;
                v305 = EncBase;
                v636 = v9 ^ 0xE61B41DA ^ FuckEnc::CacheRead<_DWORD>(EncBase + 576i64) & 0xFFFFFFF9 ^ 0xA88EBF35;
                v636 = v636 - FuckEnc::CacheRead<_DWORD>(v305 + 408) - 1855420002;
                goto LABEL_1033;
            case 0x1EC:
                v636 = v9 ^ 0x31D09D14;
                v306 = EncBase;
                v636 = (v9 ^ 0x31D09D14) + FuckEnc::CacheRead<_DWORD>(EncBase + 808i64) * (FuckEnc::CacheRead<_DWORD>(EncBase + 872i64) & 0xFFFFFFE2);
                v636 -= FuckEnc::CacheRead<_DWORD>(v306 + 744);
                goto LABEL_1033;
            case 0x1ED:
                v307 = EncBase;
                v636 = v9 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 704i64) + 376i64) + 880i64) + 480i64);
                v636 -= 1982940042 * FuckEnc::CacheRead<_DWORD>(v307 + 408);
                goto LABEL_1033;
            case 0x1EE:
                v308 = EncBase;
                v636 = (v9 - (FuckEnc::CacheRead<_DWORD>(EncBase + 744i64) | 0xC)) ^ 0xF53BFC25;
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v308 + 128) + 896i64) + 552i64) ^ v636;
                goto LABEL_1032;
            case 0x1EF:
                v309 = EncBase;
                v636 = v9 ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 80i64) << 16) ^ 0xDF6ED6AA;
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v309 + 504) + 416i64) + 88i64);
                goto LABEL_1033;
            case 0x1F0:
                v310 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 776i64);
                v11 = v636 - 974267962 * (FuckEnc::CacheRead<_DWORD>(v310 + 16) & 0xFFFFFFFA) - (FuckEnc::CacheRead<_DWORD>(v310 + 280) << 12);
                goto LABEL_1032;
            case 0x1F1:
                v311 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 136i64) + 368i64) + 360i64) + 344i64);
                //v11 = FuckEnc::CacheRead<_DWORD>(GameData.Process.Base + 0x6A326E6) + 2 + (FuckEnc::CacheRead<_DWORD>(v311 + 480) ^ v636);
                v11 = 0x6A326E6 + 2 + (FuckEnc::CacheRead<_DWORD>(v311 + 480) ^ v636);
                goto LABEL_1032;
            case 0x1F2:
                v636 = v9 ^ FuckEnc::CacheRead<_DWORD>(EncBase + 616i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 432i64) + 824i64) + 144i64) + 704i64) + 600i64) + 88i64);
                goto LABEL_1033;
            case 0x1F3:
                v636 = v9 + 1138400156 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 832i64) + 608i64) + 184i64) + 664i64) + 432i64) + 664i64) + 312i64);
                goto LABEL_1033;
            case 0x1F4:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 736i64) + 896i64) + 648i64) + 824i64) + 144i64) + 144i64) + 848i64);
                goto LABEL_1032;
            case 0x1F5:
                v312 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 544i64) ^ v9 ^ 0xEB4C8BAD;
                v11 = ~(v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v312 + 840) + 360i64) + 272i64) + 552i64));
                goto LABEL_1032;
            case 0x1F6:
                v313 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 200i64) + 280i64);
                v636 += 936268470 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v313 + 240) + 544i64) ^ 0x8F1866ED);
                goto LABEL_1033;
            case 0x1F7:
                v636 = v9 ^ FuckEnc::CacheRead<_DWORD>(EncBase + 512i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 144i64) + 344i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 240i64) + 88i64);
                goto LABEL_1033;
            case 0x1F8:
                v636 = v9 + 675524519;
                v314 = EncBase;
                v636 = v9 + 675524519 - FuckEnc::CacheRead<_DWORD>(EncBase + 248i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v314 + 880) + 880i64) + 592i64) + 808i64);
                goto LABEL_1033;
            case 0x1F9:
            {
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(EncBase + 240i64) + 912i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(EncBase + 240i64) + 912i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 896i64) + 872i64);
                goto LABEL_1033;
            }
            case 0x1FA:
            {
                //(*(void(__fastcall**)(int*, _QWORD))(EncBase + 448i64))(&v636, EncBase);
                func = FuckEnc::CacheRead<uint64_t>(EncBase + 448i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 272i64) + 8i64) + 280i64);
                goto LABEL_1033;
            }
            case 0x1FB:
                v315 = EncBase;
                v636 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 272i64) + 248i64) ^ v9) + 679260403;
                v636 -= FuckEnc::CacheRead<unsigned __int16>(FuckEnc::CacheRead<_QWORD>(v315 + 600) + 618i64);
                goto LABEL_1033;
            case 0x1FC:
                v316 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 416i64) + 704i64) + 504i64) + 480i64);
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v316 + 376) + 784i64) + 955611338;
                goto LABEL_1032;
            case 0x1FD:
                v317 = EncBase;
                v636 = (v9 - (FuckEnc::CacheRead<_DWORD>(EncBase + 544i64) >> 8)) ^ 0x18C41F37;
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v317 + 504) + 136i64) + 40i64) + 512i64);
                goto LABEL_1032;
            case 0x1FE:
                v318 = EncBase;
                v636 = ~((FuckEnc::CacheRead<_DWORD>(EncBase + 152i64) ^ v9) + 19728842);
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v318 + 736) + 272i64) + 368i64) + 544i64) ^ v636;
                goto LABEL_1032;
            case 0x1FF:
                v319 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 144i64) + 600i64) + 152i64) ^ v9;
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v319 + 272) + 664i64) + 240i64) + 344i64);
                goto LABEL_1032;
            case 0x200:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 432i64) + 416i64) + 880i64) + 368i64) + 896i64) + 8i64) + 152i64) - 544651534;
                goto LABEL_1033;
            case 0x201:
                v320 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 16i64) ^ v9;
                v11 = v636 - (FuckEnc::CacheRead<_DWORD>(v320 + 784) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v320 + 432) + 200i64) + 880i64) + 712i64));
                goto LABEL_1032;
            case 0x202:
                v321 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 384i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v321 + 576);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v321 + 824) + 416i64) + 784i64);
                goto LABEL_1033;
            case 0x203:
                v636 = (((v9 - 235105296) ^ 0x48709ACD) + 1665609986) ^ 0xEB5966AF;
                v636 ^= FuckEnc::CacheRead<_DWORD>(EncBase + 744i64);
                goto LABEL_1033;
            case 0x204:
                v138 = EncBase;
                v139 = ~(v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 16i64) + 1661189122);
            LABEL_221:
                v636 = v139;
                //(*(void(__fastcall**)(int*, __int64))(v138 + 800))(&v636, v138);
                func = FuckEnc::CacheRead<uint64_t>(v138 + 800);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x205:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 824i64) + 608i64) + 704i64) + 576i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 136i64) + 112i64);
                goto LABEL_1032;
            case 0x206:
                v322 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 576i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v322 + 16) * ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v322 + 704) + 16i64);
                goto LABEL_1033;
            case 0x207:
                v323 = EncBase;
                v636 = v9 + 1945341408 * FuckEnc::CacheRead<_DWORD>(EncBase + 552i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v323 + 664) + 128i64) + 608i64) + 40i64) + 112i64);
                goto LABEL_1033;
            case 0x208:
                v324 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 240i64) + 360i64) + 272i64) + 480i64);
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v324 + 896) + 512i64) ^ v636 ^ 0xA6286FBB;
                goto LABEL_1032;
            case 0x209:
                v636 = v9 - 1724311580;
                v325 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 640i64) ^ (v9 - 1724311580);
                v636 ^= ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v325 + 8) + 872i64) | 0xD);
                goto LABEL_1033;
            case 0x20A:
                v326 = EncBase;
                v636 = v9 ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 176i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 648i64) + 416i64) + 808i64));
                v636 ^= FuckEnc::CacheRead<_DWORD>(v326 + 576) ^ 0x71BFEF8C;
                goto LABEL_1033;
            case 0x20B:
                v636 = v9 + 711448456;
                v636 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 736i64) + 880i64) + 128i64) + 272i64) + 616i64) ^ (v9 + 711448456)) + 760388534;
                goto LABEL_1033;
            case 0x20C:
                v636 = v9 ^ FuckEnc::CacheRead<_DWORD>(EncBase + 848i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 8i64) + 824i64) + 360i64) + 712i64);
                goto LABEL_1033;
            case 0x20D:
                v327 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 648i64) + 776i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(v327 + 848);
                v11 = v636 - ((FuckEnc::CacheRead<_DWORD>(v327 + 480) << 11) | 0xE);
                goto LABEL_1032;
            case 0x20E:
                v328 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 184i64) + 368i64) + 848i64);
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(v328 + 616) - 1089200953;
                goto LABEL_1032;
            case 0x20F:
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 368i64) + 128i64) + 128i64) + 416i64) + 136i64) + 648i64) + 368i64) + 544i64) ^ v9;
                goto LABEL_1032;
            case 0x210:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 736i64) + 184i64) + 896i64) + 824i64) + 200i64) + 432i64) + 712i64) - 1782091155;
                goto LABEL_1032;
            case 0x211:
                //v329 = (_DWORD*)EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 280i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(EncBase + (62 * 4));//v329[62];
                v636 += FuckEnc::CacheRead<_DWORD>(EncBase + (44 * 4)) + 44867589 * FuckEnc::CacheRead<_DWORD>(EncBase + (128 * 4));//v329[44] + 44867589 * v329[128];
                goto LABEL_1033;
            case 0x212:
                v330 = EncBase;
                v636 = (v9 + (FuckEnc::CacheRead<_DWORD>(EncBase + 408i64) << 8)) ^ 0xF73046DB;
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v330 + 608) + 840i64) + 896i64) + 544i64);
                goto LABEL_1033;
            case 0x213:
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 608i64) + 240i64) + 240i64) + 200i64) + 664i64) + 616i64) ^ v9 ^ 0xDAC3DC8C;
                goto LABEL_1032;
            case 0x214:
                v331 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 176i64);
                v636 = ~(v636 ^ ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v331 + 376) + 832i64) + 784i64) ^ 0x37868700));
                goto LABEL_1033;
            case 0x215:
                v332 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 152i64) ^ v9;
                v636 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v332 + 664) + 16i64);
                v636 = v636 - FuckEnc::CacheRead<_DWORD>(v332 + 248) + 1585569824;
                goto LABEL_1033;
            case 0x216:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 16i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 840i64) + 80i64) * (FuckEnc::CacheRead<_DWORD>(EncBase + 80i64) - 785277770) + 1;
                goto LABEL_1033;
            case 0x217:
                v333 = EncBase;
                v636 = v9 + (FuckEnc::CacheRead<_DWORD>(EncBase + 88i64) ^ 0x78AD2F24);
                //v636 ^= FuckEnc::CacheRead<_DWORD>(GameData.Process.Base + 0x11D4C4CE) + FuckEnc::CacheRead<_DWORD>(v333 + 544);
                v636 ^= 0x11D4C4CE + FuckEnc::CacheRead<_DWORD>(v333 + 544);
                goto LABEL_1033;
            case 0x218:
                v636 = v9 ^ ~(FuckEnc::CacheRead<_DWORD>(EncBase + 576i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 312i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 832i64) + 248i64));
                goto LABEL_1033;
            case 0x219:
                v334 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 320i64) - 1700133858;
                v636 -= FuckEnc::CacheRead<_DWORD>(v334 + 384);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v334 + 480) << 30;
                goto LABEL_1033;
            case 0x21A:
                v335 = EncBase;
                v636 = v9 - (FuckEnc::CacheRead<_DWORD>(EncBase + 872i64) ^ 0x6FBF6ADD);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v335 + 240) + 144i64) + 736i64) + 8i64) + 544i64);
                goto LABEL_1033;
            case 0x21B:
                //v636 = ~(FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0x10272CED) ^ (v9 - 1658661283));
                v636 = ~(0x10272CED ^ (v9 - 1658661283));
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 136i64) + 832i64) + 592i64) + 848i64);
                goto LABEL_1033;
            case 0x21C:
                v336 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 416i64) + 184i64) + 408i64);
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v336 + 608) + 272i64) + 896i64) + 408i64) ^ v636;
                goto LABEL_1032;
            case 0x21D:
                v337 = EncBase;
                v636 = v9 ^ ~(FuckEnc::CacheRead<_DWORD>(EncBase + 408i64) ^ 0xC06110B8);
                v636 += FuckEnc::CacheRead<_DWORD>(v337 + 576);
                v636 = v636 - FuckEnc::CacheRead<_DWORD>(v337 + 88) + 524011070;
                goto LABEL_1033;
            case 0x21E:
                //(*(void(__fastcall**)(int*, _QWORD))(EncBase + 32i64))(&v636, EncBase);
                func = FuckEnc::CacheRead<uint64_t>(EncBase + 32i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 648i64) + 128i64) + 80i64);
                goto LABEL_1033;
            case 0x21F:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 872i64) * (FuckEnc::CacheRead<_DWORD>(EncBase + 640i64) | 0x13) * (FuckEnc::CacheRead<_DWORD>(EncBase + 512i64) ^ 0x311BEB56);
                goto LABEL_1033;
            case 0x220:
                v338 = EncBase;
                v636 = v9 ^ ~FuckEnc::CacheRead<_DWORD>(EncBase + 248i64);
                v636 += (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v338 + 184) + 376i64) + 312i64) << 9) + 1;
                goto LABEL_1033;
            case 0x221:
                v339 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 176i64) ^ v9;
                v636 ^= FuckEnc::CacheRead<_DWORD>(v339 + 576) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v339 + 824) + 144i64) + 408i64) - 1924473186);
                goto LABEL_1033;
            case 0x222:
                v340 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 88i64);
                v636 ^= ~(FuckEnc::CacheRead<_DWORD>(v340 + 808) ^ (FuckEnc::CacheRead<_DWORD>(v340 + 344) - 1817551367));
                goto LABEL_1033;
            case 0x223:
                v341 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 144i64) + 368i64) + 608i64) + 808i64);
                //v11 = (FuckEnc::CacheRead<_DWORD>(GameData.Process.Base + 0xA423276) + 2 + v636 - FuckEnc::CacheRead<_DWORD>(v341 + 512)) ^ 0xE9161E04;
                v11 = (0xA423276 + 2 + v636 - FuckEnc::CacheRead<_DWORD>(v341 + 512)) ^ 0xE9161E04;
                goto LABEL_1032;
            case 0x224:
                v636 = ~(_DWORD)v9;
                v636 = ~(_DWORD)v9 ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 176i64) + FuckEnc::CacheRead<_DWORD>(EncBase + 280i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 248i64));
                goto LABEL_1033;
            case 0x225:
                v636 = v9 ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 784i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 872i64) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 200i64) + 280i64) | 0x1B));
                goto LABEL_1033;
            case 0x226:
                v636 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 648i64) + 376i64) + 48i64) ^ ((FuckEnc::CacheRead<_DWORD>(EncBase + 544i64) | 1) + 408658793));
                goto LABEL_1033;
            case 0x227:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 344i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 136i64) + 648i64) + 376i64) + 8i64) + 416i64) + 320i64);
                goto LABEL_1032;
            case 0x228:
                v342 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 512i64);
                v636 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v342 + 184) + 600i64) + 136i64) + 240i64) + 320i64);
                goto LABEL_1033;
            case 0x229:
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 880i64) + 840i64) + 272i64) + 536i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 880i64) + 840i64) + 272i64) + 536i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x22A:
                v343 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 272i64) + 480i64);
                v636 ^= 1025022109 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v343 + 8) + 240i64) + 616i64);
                goto LABEL_1033;
            case 0x22B:
                v636 = v9 - 309417592;
                v636 = v9 - 309417592 - FuckEnc::CacheRead<_DWORD>(EncBase + 312i64) * (FuckEnc::CacheRead<_DWORD>(EncBase + 640i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 504i64) + 344i64));
                goto LABEL_1033;
            case 0x22C:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 200i64) + 376i64) + 432i64) + 608i64) + 16i64) - FuckEnc::CacheRead<_DWORD>(EncBase + 48i64);
                goto LABEL_1032;
            case 0x22D:
                v636 = v9 ^ 0x2482AD8D;
                v344 = EncBase;
                v636 = (v9 ^ 0x2482AD8D) - FuckEnc::CacheRead<_DWORD>(EncBase + 776i64);
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v344 + 416) + 472i64) + 832i64) + 616i64);
                goto LABEL_1032;
            case 0x22E:
                //v636 = v9 ^ (FuckEnc::CacheRead<_DWORD>(GameData.Process.Base + 0xAF957B2) + 2 + FuckEnc::CacheRead<_DWORD>(EncBase + 640i64)) ^ ((FuckEnc::CacheRead<_DWORD>(EncBase + 248i64) & 0xFFFFFFF7) * (FuckEnc::CacheRead<_DWORD>(EncBase + 48i64) - 1401935139));
                v636 = v9 ^ (0xAF957B2 + 2 + FuckEnc::CacheRead<_DWORD>(EncBase + 640i64)) ^ ((FuckEnc::CacheRead<_DWORD>(EncBase + 248i64) & 0xFFFFFFF7) * (FuckEnc::CacheRead<_DWORD>(EncBase + 48i64) - 1401935139));
                goto LABEL_1033;
            case 0x22F:
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 368i64) + 272i64) + 736i64) + 664i64) + 664i64) + 896i64) + 616i64) ^ v9;
                goto LABEL_1032;
            case 0x230:
                v345 = EncBase;
                v636 = (v9 + (FuckEnc::CacheRead<_DWORD>(EncBase + 48i64) >> 15)) ^ 0xE4FF3D59;
                v636 += 1465866533 * FuckEnc::CacheRead<_DWORD>(v345 + 552);
                goto LABEL_1033;
            case 0x231:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 272i64) + 320i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 144i64) + 736i64) + 848i64) + 1365137597;
                goto LABEL_1032;
            case 0x232:
                v346 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 144i64) + 832i64) + 832i64) + 184i64) + 280i64);
                v636 = (FuckEnc::CacheRead<_DWORD>(v346 + 552) ^ v636) - 1471411426;
                goto LABEL_1033;
            case 0x233:
                v347 = EncBase;
                v636 = v9 ^ ((FuckEnc::CacheRead<_DWORD>(EncBase + 848i64) + 843240243) | 0x15);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v347 + 240) + 896i64) + 776i64) ^ 0xB1205245;
                goto LABEL_1033;
            case 0x234:
                v348 = EncBase;
                v636 = v9 - 1864284165 * FuckEnc::CacheRead<_DWORD>(EncBase + 784i64);
                //(*(void(__fastcall**)(int*, __int64))(v348 + 496))(&v636, v348);
                func = FuckEnc::CacheRead<uint64_t>(v348 + 496);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x235:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 648i64) + 736i64) + 368i64) + 8i64) + 272i64) + 176i64);
                goto LABEL_1033;
            case 0x236:
                v636 = v9 - 1957387433;
                v349 = EncBase;
                v636 = v9 - 1957387433 + FuckEnc::CacheRead<_DWORD>(EncBase + 384i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v349 + 376) + 840i64) + 248i64);
                goto LABEL_1033;
            case 0x237:
                v350 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 808i64) ^ v9;
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v350 + 664) + 608i64) + 592i64) + 824i64) + 504i64) + 576i64);
                goto LABEL_1032;
            case 0x238:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 576i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 592i64) + 784i64) * (FuckEnc::CacheRead<_DWORD>(EncBase + 408i64) + 1);
                goto LABEL_1033;
            case 0x239:
                v351 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 16i64);
                v636 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v351 + 664) + 112i64) + 1843225510;
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v351 + 240) + 16i64);
                goto LABEL_1033;
            case 0x23A:
                v352 = EncBase;
                v636 = ((v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 512i64)) ^ 0xB71EE187) - 903772874;
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v352 + 736) + 272i64) + 664i64) + 152i64);
                goto LABEL_1033;
            case 0x23B:
                v353 = EncBase;
                v636 = (v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 808i64)) ^ 0xAD560431;
                v636 ^= FuckEnc::CacheRead<_DWORD>(v353 + 544);
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v353 + 736) + 360i64) + 784i64);
                goto LABEL_1032;
            case 0x23C:
                v354 = EncBase;
                v636 = v9 ^ ~FuckEnc::CacheRead<_DWORD>(EncBase + 408i64);
                v636 = v636 - FuckEnc::CacheRead<_DWORD>(v354 + 152) - 1275385111;
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v354 + 880) + 552i64);
                goto LABEL_1033;
            case 0x23D:
                v355 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 840i64) + 776i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v355 + 608) + 320i64) + FuckEnc::CacheRead<_DWORD>(v355 + 16) - 2005213437;
                goto LABEL_1033;
            case 0x23E:
                v356 = EncBase;
                v636 = v9 - (FuckEnc::CacheRead<_DWORD>(EncBase + 88i64) & 0xFFFFFFF0 | 1);
                v636 += FuckEnc::CacheRead<_DWORD>(v356 + 872);
                v636 -= 1161372631 * FuckEnc::CacheRead<_DWORD>(v356 + 384);
                goto LABEL_1033;
            case 0x23F:
                v357 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 744i64) ^ v9;
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v357 + 648) + 592i64) + 272i64) + 376i64) + 8i64) + 712i64) ^ v636;
                goto LABEL_1032;
            case 0x240:
                v11 = ~(v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 808i64) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 896i64) + 144i64) + 248i64) - 1454744429));
                goto LABEL_1032;
            case 0x241:
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 8i64) + 824i64) + 8i64) + 880i64) + 504i64) + 184i64) + 776i64) ^ v9;
                goto LABEL_1032;
            case 0x242:
                v358 = EncBase;
                v636 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 272i64) + 384i64) >> 27) + 1553143963;
                v636 += FuckEnc::CacheRead<_DWORD>(v358 + 576);
                v636 -= FuckEnc::CacheRead<_DWORD>(v358 + 784);
                goto LABEL_1033;
            case 0x243:
                v359 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 176i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v359 + 592) + 824i64) + 8i64) + 608i64) + 240i64) + 576i64);
                goto LABEL_1033;
            case 0x244:
                v360 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 480i64) ^ v9;
                v11 = v636 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v360 + 704) + 712i64) ^ (-836458941 * FuckEnc::CacheRead<_DWORD>(v360 + 344)) ^ 0xC150132F);
                goto LABEL_1032;
            case 0x245:
                v361 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 880i64) + 360i64) + 544i64);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v361 + 736) + 376i64) + 872i64);
                goto LABEL_1033;
            case 0x246:
                v362 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 248i64) - 270035151;
                //(*(void(__fastcall**)(int*, __int64))(v362 + 448))(&v636, v362);
                func = FuckEnc::CacheRead<uint64_t>(v362 + 448);
                FuckEnc::FastCall(func, &v636, base);
                v636 -= 276591281;
                goto LABEL_1033;
            case 0x247:
                v363 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 704i64) + 824i64) + 600i64) + 712i64) ^ v9;
                v636 ^= FuckEnc::CacheRead<_DWORD>(v363 + 320) | 3;
                goto LABEL_1033;
            case 0x248:
                v364 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 608i64) + 368i64) + 592i64) + 128i64) + 504i64) + 312i64) ^ v9;
                v11 = FuckEnc::CacheRead<_DWORD>(v364 + 552) ^ v636;
                goto LABEL_1032;
            case 0x249:
                //(*(void(__fastcall**)(int*, _QWORD))(EncBase + 688i64))(&v636, EncBase);
                func = FuckEnc::CacheRead<uint64_t>(EncBase + 688i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 = v636 - 145647046 + (FuckEnc::CacheRead<_DWORD>(EncBase + 176i64) | 4);
                goto LABEL_1033;
            case 0x24A:
                v636 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 432i64) + 824i64) + 416i64) + 128i64) + 552i64) * (FuckEnc::CacheRead<_DWORD>(EncBase + 384i64) - 1244991811));
                goto LABEL_1033;
            case 0x24B:
                v365 = EncBase;
                v636 = v9 + 63871250 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 504i64) + 808i64) + 1);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v365 + 896) + 320i64);
                goto LABEL_1033;
            case 0x24C:
                v366 = EncBase;
                v636 = -(FuckEnc::CacheRead<_DWORD>(EncBase + 16i64) ^ v9 ^ 0x2656B20F) - 1080642082;
                v636 += FuckEnc::CacheRead<_DWORD>(v366 + 152) ^ 0xFC19482C;
                goto LABEL_1033;
            case 0x24D:
                v367 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 280i64) + 1392912708;
                v636 ^= 1383131858 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v367 + 592) + 312i64) + 1860329520;
                goto LABEL_1033;
            case 0x24E:
                v636 = v9 ^ ~(FuckEnc::CacheRead<_DWORD>(EncBase + 744i64) + ((334774103 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 472i64) + 384i64)) | 0x19));
                goto LABEL_1033;
            case 0x24F:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 832i64) + 472i64) + 368i64) + 40i64) + 824i64) + 144i64) + 320i64);
                goto LABEL_1032;
            case 0x250:
                v368 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 8i64) + 608i64) + 136i64) + 8i64) + 608i64) + 48i64) ^ v9;
                v11 = FuckEnc::CacheRead<_DWORD>(v368 + 544) ^ v636;
                goto LABEL_1032;
            case 0x251:
                v636 = v9 ^ FuckEnc::CacheRead<_DWORD>(EncBase + 312i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 240i64) + 384i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 384i64);
                goto LABEL_1033;
            case 0x252:
                v369 = EncBase;
                v636 = v9 ^ (1862315340 * FuckEnc::CacheRead<_DWORD>(EncBase + 808i64));
                v636 += 407347650 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v369 + 368) + 880i64) + 640i64);
                goto LABEL_1033;
            case 0x253:
                v370 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 592i64) + 776i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(v370 + 552);
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v370 + 896) + 824i64) + 808i64);
                goto LABEL_1032;
            case 0x254:
                v636 = v9 ^ 0x7AE43202;
                v371 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 808i64) ^ v9 ^ 0x7AE43202;
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v371 + 240) + 280i64) - 836674010;
                goto LABEL_1033;
            case 0x255:
                v372 = EncBase;
                v636 = ~(FuckEnc::CacheRead<_DWORD>(EncBase + 480i64) ^ v9);
                v11 = v636 - (FuckEnc::CacheRead<_DWORD>(v372 + 80) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v372 + 376) + 280i64));
                goto LABEL_1032;
            case 0x256:
                v373 = EncBase;
                v636 = (FuckEnc::CacheRead<_DWORD>(EncBase + 280i64) ^ v9) - 1072063560;
                //(*(void(__fastcall**)(int*, __int64))(v373 + 216))(&v636, v373);
                func = FuckEnc::CacheRead<uint64_t>(v373 + 216);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x257:
                v374 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 248i64);
                v636 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v374 + 136) + 872i64);
                v636 += FuckEnc::CacheRead<_DWORD>(v374 + 712) - 1450532453;
                goto LABEL_1033;
            case 0x258:
                v375 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 552i64) ^ v9 ^ 0x7C914A2E;
                v636 += FuckEnc::CacheRead<_DWORD>(v375 + 112);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v375 + 376) + 368i64) + 16i64);
                goto LABEL_1033;
            case 0x259:
                v376 = EncBase;
                v636 = v9 ^ (-1604200146 * FuckEnc::CacheRead<_DWORD>(EncBase + 808i64));
                v636 -= FuckEnc::CacheRead<_DWORD>(v376 + 384);
                v636 = v636 - FuckEnc::CacheRead<_DWORD>(v376 + 576) + 1603625388;
                goto LABEL_1033;
            case 0x25A:
                v636 = v9 ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 640i64) + (FuckEnc::CacheRead<_DWORD>(EncBase + 312i64) << 7));
                goto LABEL_1033;
            case 0x25B:
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 600i64) + 608i64) + 824i64) + 664i64) + 536i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 600i64) + 608i64) + 824i64) + 664i64) + 536i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x25C:
                v377 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 248i64) ^ v9;
                //v636 = (((v636 ^ (-2045960160 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v377 + 136) + 848i64))) - (FuckEnc::CacheRead<_DWORD>(GameData.Process.Base + 0x9F54518) + 3)) ^ 0xCC66D58F) + 1812179064;
                v636 = (((v636 ^ (-2045960160 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v377 + 136) + 848i64))) - (0x9F54518 + 3)) ^ 0xCC66D58F) + 1812179064;
                goto LABEL_1033;
            case 0x25D:
                v378 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 344i64);
                v636 += FuckEnc::CacheRead<_DWORD>(v378 + 408);
                v636 += FuckEnc::CacheRead<_DWORD>(v378 + 320) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v378 + 896) + 848i64);
                goto LABEL_1033;
            case 0x25E:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 832i64) + 648i64) + 184i64) + 552i64) - (FuckEnc::CacheRead<_DWORD>(EncBase + 48i64) ^ 0x1D5E4FF1);
                goto LABEL_1032;
            case 0x25F:
                v636 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 592i64) + 360i64) + 872i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 368i64) + 368i64) + 832i64) + 544i64));
                goto LABEL_1033;
            case 0x260:
                v636 = v9 ^ 0x742A2A13;
                v379 = EncBase;
                v636 = (v9 ^ 0x742A2A13) - FuckEnc::CacheRead<_DWORD>(EncBase + 312i64) + 1680321788;
                v636 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v379 + 416) + 312i64);
                goto LABEL_1033;
            case 0x261:
                v380 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 480i64);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v380 + 432) + 200i64) + 504i64) + 832i64) + 40i64) + 16i64);
                goto LABEL_1033;
            case 0x262:
                v381 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 280i64);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v381 + 144) + 416i64) + 376i64) + 152i64) + 1417574113;
                goto LABEL_1033;
            case 0x263:
                v636 = v9 ^ 0x15693D10;
                //(*(void(__fastcall**)(int*, _QWORD))(EncBase + 448i64))(&v636, EncBase);
                func = FuckEnc::CacheRead<uint64_t>(EncBase + 448i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 ^= FuckEnc::CacheRead<_DWORD>(EncBase + 16i64);
                goto LABEL_1033;
            case 0x264:
                v382 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 776i64);
                v636 += FuckEnc::CacheRead<_DWORD>(v382 + 408) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v382 + 704) + 600i64) + 360i64) + 408i64);
                goto LABEL_1033;
            case 0x265:
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 840i64) + 368i64) + 648i64) + 200i64) + 312i64) ^ v9 ^ 0x453A0B7A;
                goto LABEL_1032;
            case 0x266:
                v383 = EncBase;
                v636 = v9 ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 776i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 416i64) + 88i64));
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v383 + 880) + 544i64);
                goto LABEL_1033;
            case 0x267:
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 128i64) + 840i64) + 368i64) + 416i64) + 40i64) + 592i64) + 176i64) ^ v9 ^ 0x653BDAE9;
                goto LABEL_1032;
            case 0x268:
                v384 = EncBase;
                v636 = v9 + ~FuckEnc::CacheRead<_DWORD>(EncBase + 176i64);
                v636 += (FuckEnc::CacheRead<_DWORD>(v384 + 280) ^ 0x59CBDDFE) - 1174410955;
                goto LABEL_1033;
            case 0x269:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 664i64) + 648i64) + 704i64) + 200i64) + 832i64) + 776i64) + 2142012594;
                goto LABEL_1032;
            case 0x26A:
                v385 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 784i64);
                v636 += FuckEnc::CacheRead<_DWORD>(v385 + 384);
                //v636 -= FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0x11F934EB) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v385 + 40) + 736i64) + 576i64);
                v636 -= 0x11F934EB ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v385 + 40) + 736i64) + 576i64);
                goto LABEL_1033;
            case 0x26B:
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 136i64) + 128i64) + 600i64) + 832i64) + 8i64) + 8i64) + 200i64) + 344i64) ^ v9;
                goto LABEL_1032;
            case 0x26C:
                v386 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 80i64) ^ v9;
                v636 ^= FuckEnc::CacheRead<_DWORD>(v386 + 152) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v386 + 360) + 184i64) + 240i64) + 552i64);
                goto LABEL_1033;
            case 0x26D:
                v387 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 512i64);
                v636 += (FuckEnc::CacheRead<_DWORD>(v387 + 80) << 15) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v387 + 736) + 848i64) + 1921743503);
                goto LABEL_1033;
            case 0x26E:
                v388 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 600i64) + 176i64) ^ v9;
                v636 += FuckEnc::CacheRead<_DWORD>(v388 + 744) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v388 + 360) + 784i64);
                goto LABEL_1033;
            case 0x26F:
                v636 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 8i64) + 128i64) + 712i64) ^ 0x1D95F5F8) + ~FuckEnc::CacheRead<_DWORD>(EncBase + 384i64);
                goto LABEL_1033;
            case 0x270:
                v389 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 872i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v389 + 272) + 776i64);
                v636 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v389 + 608) + 112i64);
                goto LABEL_1033;
            case 0x271:
                //v390 = (_DWORD*)EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 88i64);
                v636 += FuckEnc::CacheRead<_DWORD>(EncBase + (70 * 4));//v390[70];
                //v636 = v636 - v390[160] + 1590185938;
                v636 = v636 - FuckEnc::CacheRead<_DWORD>(EncBase + (160 * 4)) + 1590185938;
                v636 += FuckEnc::CacheRead<_DWORD>(EncBase + (38 * 4));//v390[38];
                goto LABEL_1033;
            case 0x272:
                //v391 = (_DWORD*)EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 384i64);
                // v636 = (v391[202] ^ v636) + 359114565;
                v636 = (FuckEnc::CacheRead<_DWORD>(EncBase + (202 * 4)) ^ v636) + 359114565;
                // v636 += v391[160];
                v636 += FuckEnc::CacheRead<_DWORD>(EncBase + (160 * 4));
                // v636 -= v391[154];
                v636 -= FuckEnc::CacheRead<_DWORD>(EncBase + (154 * 4));
                goto LABEL_1033;
            case 0x273:
                v392 = EncBase;
                v636 = v9 ^ ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 600i64) + 544i64) << 20);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v392 + 840) + 736i64) + 480i64);
                goto LABEL_1033;
            case 0x274:
                v393 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 144i64) + 200i64) + 504i64) + 144i64) + 176i64) ^ v9;
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(v393 + 480);
                goto LABEL_1032;
            case 0x275:
                v394 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 88i64);
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v394 + 664) + 184i64) + 472i64) + 40i64) + 152i64) ^ v636;
                goto LABEL_1032;
            case 0x276:
                v11 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 736i64) + 144i64) + 48i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 504i64) + 376i64) + 320i64));
                goto LABEL_1032;
            case 0x277:
                v395 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 832i64) + 184i64) + 776i64);
                v11 = v636 - (FuckEnc::CacheRead<_DWORD>(v395 + 552) & 0xFFFFFFE4) + 1361933786;
                goto LABEL_1032;
            case 0x278:
                v636 = v9 - 899437349;
                v636 = v9 - 899437349 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 368i64) + 824i64) + 416i64) + 648i64) + 240i64) + 808i64);
                goto LABEL_1033;
            case 0x279:
                v396 = EncBase;
                v636 = ((v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 784i64)) ^ 0x9ED30686) - 360212721;
                v636 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v396 + 200) + 808i64) - 623265490;
                goto LABEL_1033;
            case 0x27A:
                v397 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 80i64);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v397 + 360) + 240i64) + 648i64) + 736i64) + 344i64);
                goto LABEL_1033;
            case 0x27B:
                v398 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 712i64) ^ v9;
                v636 += FuckEnc::CacheRead<_DWORD>(v398 + 480) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v398 + 600) + 368i64) + 16i64);
                goto LABEL_1033;
            case 0x27C:
                v399 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 576i64);
                v636 = (v636 ^ (FuckEnc::CacheRead<_DWORD>(v399 + 112) * FuckEnc::CacheRead<_DWORD>(v399 + 576))) + 1056847984;
                goto LABEL_1033;
            case 0x27D:
                v636 = v9 - 1693339349;
                v400 = EncBase;
                v636 = v9 - 1693339349 + FuckEnc::CacheRead<_DWORD>(EncBase + 80i64) + 1;
                v636 ^= ~(FuckEnc::CacheRead<_DWORD>(v400 + 808) << 27);
                goto LABEL_1033;
            case 0x27E:
                v401 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 8i64) + 784i64);
                v636 += 1798393257 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v401 + 144) + 40i64) + 176i64);
                goto LABEL_1033;
            case 0x27F:
                v402 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 144i64) + 704i64) + 704i64) + 360i64) + 384i64) ^ v9;
                v636 += ~FuckEnc::CacheRead<_DWORD>(v402 + 48);
                goto LABEL_1033;
            case 0x280:
                v636 = v9 - 1437667670;
                v636 = (v9 - 1437667670) ^ ~(FuckEnc::CacheRead<_DWORD>(EncBase + 544i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 592i64) + 600i64) + 808i64));
                goto LABEL_1033;
            case 0x281:
                v403 = EncBase;
                v636 = (FuckEnc::CacheRead<_DWORD>(EncBase + 16i64) ^ v9) - 372996364;
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v403 + 504) + 200i64) + 576i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v403 + 872);
                goto LABEL_1033;
            case 0x282:
                v404 = EncBase;
                v636 = v9 - ((FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 704i64) + 480i64) - 380499883) | 0x13);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v404 + 360) + 8i64) + 552i64);
                goto LABEL_1033;
            case 0x283:
                v405 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 184i64) + 576i64) ^ v9;
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v405 + 608) + 360i64) + 704i64) + 320i64) ^ v636;
                goto LABEL_1032;
            case 0x284:
                v636 = v9 ^ 0xA8602EED;
                //(*(void(__fastcall**)(int*, _QWORD))(EncBase + 464i64))(&v636, EncBase);
                func = FuckEnc::CacheRead<uint64_t>(EncBase + 464i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 ^= FuckEnc::CacheRead<_DWORD>(EncBase + 176i64);
                goto LABEL_1033;
            case 0x285:
                v406 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 200i64) + 384i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v406 + 40) + 344i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v406 + 736) + 344i64);
                goto LABEL_1033;
            case 0x286:
                v636 = v9 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 432i64) + 880i64) + 8i64) + 128i64) + 184i64) + 416i64) + 616i64);
                goto LABEL_1033;
            case 0x287:
                //v636 = v9 ^ ((FuckEnc::CacheRead<_DWORD>(EncBase + 112i64) ^ 0x5ACFD53F) * (FuckEnc::CacheRead<_DWORD>(GameData.Process.Base + 0xA691872) + 7 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 736i64) + 880i64) + 144i64) + 80i64)));
                v636 = v9 ^ ((FuckEnc::CacheRead<_DWORD>(EncBase + 112i64) ^ 0x5ACFD53F) * (0xA691872 + 7 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 736i64) + 880i64) + 144i64) + 80i64)));
                goto LABEL_1033;
            case 0x288:
                v407 = EncBase;
                v636 = (FuckEnc::CacheRead<_DWORD>(EncBase + 872i64) ^ v9) - 24656381;
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v407 + 832) + 880i64) + 112i64) & 0xFFFFFFF8;
                goto LABEL_1033;
            case 0x289:
                v408 = EncBase;
                v636 = v9 ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 384i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 432i64) + 200i64) + 312i64));
                v636 = ~(FuckEnc::CacheRead<_DWORD>(v408 + 152) ^ v636);
                goto LABEL_1033;
            case 0x28A:
                v409 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 280i64) ^ v9;
                v636 += FuckEnc::CacheRead<_DWORD>(v409 + 848);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v409 + 200) + 360i64) + 664i64) + 544i64);
                goto LABEL_1033;
            case 0x28B:
                v410 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 784i64) ^ v9;
                v636 ^= (FuckEnc::CacheRead<_DWORD>(v410 + 808) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v410 + 648) + 80i64)) | 3;
                goto LABEL_1033;
            case 0x28C:
                v636 = v9 ^ (~FuckEnc::CacheRead<_DWORD>(EncBase + 152i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 368i64) + 272i64) + 432i64) + 840i64) + 280i64));
                goto LABEL_1033;
            case 0x28D:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 152i64) * (FuckEnc::CacheRead<_DWORD>(EncBase + 712i64) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 704i64) + 312i64));
                goto LABEL_1032;
            case 0x28E:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 472i64) + 144i64) + 880i64) + 512i64) - (FuckEnc::CacheRead<_DWORD>(EncBase + 872i64) >> 1);
                goto LABEL_1032;
            case 0x28F:
                v411 = EncBase;
                v636 = v9 - 1447706369 * FuckEnc::CacheRead<_DWORD>(EncBase + 16i64) * FuckEnc::CacheRead<_DWORD>(EncBase + 320i64);
                v11 = ~(v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v411 + 8) + 344i64));
                goto LABEL_1032;
            case 0x290:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 776i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 600i64) + 320i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 608i64) + 592i64) + 384i64);
                goto LABEL_1033;
            case 0x291:
                v11 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 240i64) + 200i64) + 240i64) + 648i64) + 880i64) + 744i64) ^ v9) + 625539464;
                goto LABEL_1032;
            case 0x292:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 280i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 736i64) + 880i64) + 368i64) + 832i64) + 80i64);
                goto LABEL_1032;
            case 0x293:
                v636 = v9 - 1496684904;
                v412 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 872i64) ^ (v9 - 1496684904);
                v636 += FuckEnc::CacheRead<_DWORD>(v412 + 408) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v412 + 272) + 744i64);
                goto LABEL_1033;
            case 0x294:
                v413 = EncBase;
                v636 = v9 ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 88i64) - 1436618579);
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v413 + 648) + 840i64) + 240i64) + 744i64);
                goto LABEL_1033;
            case 0x295:
                v414 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 896i64) + 48i64) ^ v9;
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v414 + 504) + 824i64) + 416i64) + 840i64) + 16i64) ^ v636;
                goto LABEL_1032;
            case 0x296:
                v636 = (v9 - 1566424257) ^ 0x1F67A9D7;
                v636 = ~(v636 ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 712i64) + ~FuckEnc::CacheRead<_DWORD>(EncBase + 576i64)));
                goto LABEL_1033;
            case 0x297:
                v415 = EncBase;
                v636 = v9 + ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 840i64) + 592i64) + 712i64) ^ 0x61397D65);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v415 + 592) + 80i64);
                goto LABEL_1033;
            case 0x298:
                v416 = EncBase;
                v636 = v9 - 1697451935 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 200i64) + 712i64);
                v636 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v416 + 600) + 416i64) + 776i64);
                goto LABEL_1033;
            case 0x299:
                v417 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 16i64) ^ v9;
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v417 + 832) + 136i64) + 184i64) + 512i64) ^ v636;
                goto LABEL_1032;
            case 0x29A:
                v418 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 848i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v418 + 40) + 848i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v418 + 704) + 248i64);
                goto LABEL_1033;
            case 0x29B:
                v636 = v9 + -FuckEnc::CacheRead<_DWORD>(EncBase + 88i64) - 900236144 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 8i64) + 8i64) + 184i64) + 616i64);
                goto LABEL_1033;
            case 0x29C:
                v636 = v9 + 279487894 * FuckEnc::CacheRead<_DWORD>(EncBase + 112i64) * ((FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 648i64) + 384i64) + 1230563102) ^ 0x16845BF8) - 1132382223;
                goto LABEL_1033;
            case 0x29D:
                v419 = EncBase;
                v636 = v9 ^ (-308026899 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 432i64) + 80i64));
                //v636 = FuckEnc::CacheRead<_DWORD>(GameData.Process.Base + 0xDCFBCAB) + 5 + v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v419 + 832) + 240i64) + 512i64);
                v636 = 0xDCFBCAB + 5 + v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v419 + 832) + 240i64) + 512i64);
                goto LABEL_1033;
            case 0x29E:
                v636 = v9 ^ 0x938B572C;
                v636 = v9 ^ 0x938B572C ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 744i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 368i64) + 184i64) + 872i64));
                goto LABEL_1033;
            case 0x29F:
                v420 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 80i64) - 21125831;
                v636 ^= FuckEnc::CacheRead<_DWORD>(v420 + 480);
                v636 = ~(FuckEnc::CacheRead<_DWORD>(v420 + 848) ^ v636);
                goto LABEL_1033;
            case 0x2A0:
                v421 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 136i64) + 896i64) + 240i64) + 848i64) ^ v9;
                v636 += FuckEnc::CacheRead<_DWORD>(v421 + 784);
                v636 += FuckEnc::CacheRead<_DWORD>(v421 + 152);
                goto LABEL_1033;
            case 0x2A1:
                v422 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 416i64) + 576i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v422 + 472) + 376i64) + 432i64) + 136i64) + 80i64);
                goto LABEL_1033;
            case 0x2A2:
                v636 = 354615006 - v9;
                v636 = 354615006 - v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 384i64) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 600i64) + 808i64) + 1);
                goto LABEL_1033;
            case 0x2A3:
                v636 = v9 + 2055752824;
                v636 = v9 + 2055752824 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 360i64) + 776i64) ^ 0x36978B0F) - (FuckEnc::CacheRead<_DWORD>(EncBase + 616i64) ^ 0xAC03CFA0);
                goto LABEL_1033;
            case 0x2A4:
                v423 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 840i64) + 144i64) + 744i64) ^ v9;
                v636 ^= FuckEnc::CacheRead<_DWORD>(v423 + 112) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v423 + 8) + 776i64);
                goto LABEL_1033;
            case 0x2A5:
                v424 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 616i64);
                v636 = v636 - FuckEnc::CacheRead<_DWORD>(v424 + 48) + 1481218515;
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v424 + 736) + 360i64) + 16i64);
                goto LABEL_1033;
            case 0x2A6:
                v425 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 600i64) + 176i64) ^ v9;
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(v425 + 376) + 920i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(v425 + 376) + 920i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x2A7:
                v426 = EncBase;
                v636 = v9 ^ (1291249133 * FuckEnc::CacheRead<_DWORD>(EncBase + 88i64));
                v636 = (v636 + FuckEnc::CacheRead<_DWORD>(v426 + 576)) ^ 0xB8D5F30D;
                v636 += FuckEnc::CacheRead<_DWORD>(v426 + 344) + 1;
                goto LABEL_1033;
            case 0x2A8:
                v427 = EncBase;
                v636 = v9 + (FuckEnc::CacheRead<_DWORD>(EncBase + 152i64) | 0xB);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v427 + 128) + 576i64);
                goto LABEL_1033;
            case 0x2A9:
                v636 = v9 - 88072210;
                v636 = ~(v9 - 88072210 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 128i64) + 512i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 592i64) + 616i64));
                goto LABEL_1033;
            case 0x2AA:
                v428 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 736i64) + 480i64);
                v636 += FuckEnc::CacheRead<_DWORD>(v428 + 616) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v428 + 136) + 608i64) + 552i64);
                goto LABEL_1033;
            case 0x2AB:
                //Utils::Log(4, "0x2AB");
                //(*(void(__fastcall**)(int*, _QWORD)) * a1)(&v636, EncBase);
                func = FuckEnc::CacheRead<uint64_t>(EncBase);
                FuckEnc::FastCall(func, &v636, base);
                v636 ^= 0x4378330Au;
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 184i64) + 552i64);
                goto LABEL_1033;
            case 0x2AC:
                v429 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 360i64) + 176i64);
                v636 += FuckEnc::CacheRead<_DWORD>(v429 + 576) >> 27;
                v636 ^= FuckEnc::CacheRead<_DWORD>(v429 + 744);
                goto LABEL_1033;
            case 0x2AD:
                v430 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 880i64) + 272i64) + 848i64);
                v11 = v636 - (FuckEnc::CacheRead<_DWORD>(v430 + 776) ^ 0x933B8B78);
                goto LABEL_1032;
            case 0x2AE:
                v636 = v9 ^ 0x82194F6E;
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 840i64) + 128i64) + 128i64) + 128i64) + 840i64) + 384i64) ^ v9 ^ 0x82194F6E;
                goto LABEL_1032;
            case 0x2AF:
                v431 = EncBase;
                v636 = ~(v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 144i64) + 408i64));
                v636 += FuckEnc::CacheRead<_DWORD>(v431 + 848) + 1958264771;
                v636 -= FuckEnc::CacheRead<_DWORD>(v431 + 576);
                goto LABEL_1033;
            case 0x2B0:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 848i64) - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 176i64) >> 4) + 579232623;
                goto LABEL_1033;
            case 0x2B1:
                v432 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 176i64) ^ v9;
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(v432 + 648) + 768i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(v432 + 648) + 768i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x2B2:
                v433 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 176i64);
                v11 = v636 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v433 + 880) + 80i64) ^ ~FuckEnc::CacheRead<_DWORD>(v433 + 112));
                goto LABEL_1032;
            case 0x2B3:
                v636 = v9 + 1366634706;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 736i64) + 608i64) + 664i64) + 472i64) + 784i64) ^ (v9 + 1366634706);
                goto LABEL_1033;
            case 0x2B4:
                v434 = EncBase;
                //v636 = FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0x44F7CA3) + v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 384i64);
                v636 = 0x44F7CA3 + v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 384i64);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v434 + 648) + 704i64) + 272i64) + 144i64) + 312i64);
                goto LABEL_1033;
            case 0x2B5:
                v435 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 320i64);
                v636 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v435 + 136) + 136i64) + 736i64) + 616i64);
                goto LABEL_1033;
            case 0x2B6:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 184i64) + 824i64) + 128i64) + 704i64) + 40i64) + 368i64) + 408i64);
                goto LABEL_1032;
            case 0x2B7:
                v436 = EncBase;
                v636 = (FuckEnc::CacheRead<_DWORD>(EncBase + 552i64) ^ v9) + 1221545928;
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v436 + 432) + 312i64) + (FuckEnc::CacheRead<_DWORD>(v436 + 712) ^ 0x7C47D3AF);
                goto LABEL_1033;
            case 0x2B8:
                v437 = EncBase;
                v636 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 200i64) + 552i64) ^ 0x4CBDF588) - 1050648873;
                v636 += 1406390200 * FuckEnc::CacheRead<_DWORD>(v437 + 776);
                goto LABEL_1033;
            case 0x2B9:
                v11 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 360i64) + 128i64) + 80i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 240i64) + 664i64) + 344i64));
                goto LABEL_1032;
            case 0x2BA:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 416i64) + 592i64) + 184i64) + 368i64) + 8i64) + 880i64) + 704i64) + 872i64);
                goto LABEL_1033;
            case 0x2BB:
                v438 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 480i64) - 1213379404;
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v438 + 504) + 648i64) + 432i64) + 272i64) + 872i64);
                goto LABEL_1033;
            case 0x2BC:
                v439 = EncBase;
                v636 = (v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 848i64)) ^ 0x7F6921D0;
                //v636 ^= (FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0x3580BC3) + 1) ^ (908559515 - 271597447 * FuckEnc::CacheRead<_DWORD>(v439 + 552));
                v636 ^= (0x3580BC3 + 1) ^ (908559515 - 271597447 * FuckEnc::CacheRead<_DWORD>(v439 + 552));
                goto LABEL_1033;
            case 0x2BD:
                v440 = EncBase;
                v636 = (v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 872i64) - 494902308) ^ 0x69CBE399;
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v440 + 704) + 368i64) + 152i64);
                goto LABEL_1032;
            case 0x2BE:
                //v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 240i64) + 712i64) + ((unsigned int)"AgitatingLorry::OnOptProcessBegin_BSAS" ^ FuckEnc::CacheRead<_DWORD>(EncBase + 784i64) ^ (-1140805781 * FuckEnc::CacheRead<_DWORD>(EncBase + 112i64)));
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 240i64) + 712i64) + (0x10677474 ^ FuckEnc::CacheRead<_DWORD>(EncBase + 784i64) ^ (-1140805781 * FuckEnc::CacheRead<_DWORD>(EncBase + 112i64)));
                goto LABEL_1033;
            case 0x2BF:
                v441 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 648i64) + 432i64) + 544i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(v441 + 480) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v441 + 416) + 408i64);
                goto LABEL_1033;
            case 0x2C0:
                v636 = v9 ^ 0x3387A777;
                v636 = (((v9 ^ 0x3387A777) + (FuckEnc::CacheRead<_DWORD>(EncBase + 784i64) ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 712i64) << 11))) ^ 0x779C5EE5) - 1329420679;
                goto LABEL_1033;
            case 0x2C1:
                v442 = EncBase;
                v636 = (FuckEnc::CacheRead<_DWORD>(EncBase + 512i64) ^ v9) - 2143320313;
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v442 + 200) + 240i64) + 40i64) + 376i64) + 248i64);
                goto LABEL_1033;
            case 0x2C2:
                v11 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 704i64) + 40i64) + 824i64) + 128i64) + 704i64) + 432i64) + 576i64) ^ v9);
                goto LABEL_1032;
            case 0x2C3:
                v443 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 512i64) ^ v9;
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v443 + 472) + 240i64) + 272i64) + 368i64) + 184i64) + 16i64);
                goto LABEL_1033;
            case 0x2C4:
                v444 = EncBase;
                v636 = ~(FuckEnc::CacheRead<_DWORD>(EncBase + 616i64) ^ v9);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v444 + 608) + 600i64) + 368i64) + 664i64) + 576i64);
                goto LABEL_1033;
            case 0x2C5:
                //Utils::Log(4, "0x2C5");
                v636 = v9 + 360793074;
                //(*(void(__fastcall**)(int*, _QWORD)) * a1)(&v636, EncBase);
                func = FuckEnc::CacheRead<uint64_t>(EncBase);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x2C6:
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 592i64) + 840i64) + 240i64) + 504i64) + 336i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 592i64) + 840i64) + 240i64) + 504i64) + 336i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x2C7:
                v445 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 472i64) + 200i64) + 616i64) ^ v9;
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v445 + 200) + 664i64) + 408i64);
                goto LABEL_1032;
            case 0x2C8:
                v446 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 320i64) + 1;
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(v446 + 0x1F8) + 72i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(v446 + 0x1F8) + 72i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x2C9:
                v11 = v9 - ((unsigned int)(-FuckEnc::CacheRead<_DWORD>(EncBase + 88i64) - 480709495) >> 4) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 848i64);
                goto LABEL_1032;
            case 0x2CA:
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 240i64) + 432i64) + 768i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 240i64) + 432i64) + 768i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x2CB:
                v636 = v9 ^ 0x2589ED71;
                v11 = (v9 ^ 0x2589ED71) - FuckEnc::CacheRead<_DWORD>(EncBase + 848i64) - FuckEnc::CacheRead<_DWORD>(EncBase + 152i64) + 905613881;
                goto LABEL_1032;
            case 0x2CC:
                v447 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 784i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v447 + 384) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v447 + 144) + 832i64) + 544i64);
                goto LABEL_1033;
            case 0x2CD:
                v448 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 480i64);
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v448 + 8) + 648i64) + 648i64) + 184i64) + 376i64) + 616i64);
                goto LABEL_1032;
            case 0x2CE:
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 240i64) + 824i64) + 272i64) + 880i64) + 472i64) + 880i64) + 128i64) + 784i64) ^ v9;
                goto LABEL_1032;
            case 0x2CF:
                v449 = EncBase;
                v636 = v9 ^ ~(FuckEnc::CacheRead<_DWORD>(EncBase + 480i64) & 0xFFFFFFE7);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v449 + 176);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v449 + 608) + 512i64);
                goto LABEL_1033;
            case 0x2D0:
                v450 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 272i64) + 416i64) + 144i64) + 128i64) + 480i64) - 303497423;
                v636 ^= FuckEnc::CacheRead<_DWORD>(v450 + 344);
                goto LABEL_1033;
            case 0x2D1:
                v451 = EncBase;
                v636 = v9 ^ (551800830 * FuckEnc::CacheRead<_DWORD>(EncBase + 176i64));
                v636 ^= FuckEnc::CacheRead<_DWORD>(v451 + 872) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v451 + 432) + 832i64) + 712i64);
                goto LABEL_1033;
            case 0x2D2:
                v452 = EncBase;
                //v636 = v9 - ((FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0x2B4087A) + 6) ^ FuckEnc::CacheRead<_DWORD>(EncBase + 312i64));
                v636 = v9 - ((0x2B4087A + 6) ^ FuckEnc::CacheRead<_DWORD>(EncBase + 312i64));
                v636 -= 865047493 * FuckEnc::CacheRead<_DWORD>(v452 + 480);
                v11 = FuckEnc::CacheRead<_DWORD>(v452 + 848) ^ v636 ^ 0xACB3B81B;
                goto LABEL_1032;
            case 0x2D3:
                v453 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 712i64);
                v636 += FuckEnc::CacheRead<_DWORD>(v453 + 112) * ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v453 + 8) + 880i64) + 344i64);
                goto LABEL_1033;
            case 0x2D4:
                v454 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 80i64) + 789817981;
                v636 -= FuckEnc::CacheRead<_DWORD>(v454 + 80) * (FuckEnc::CacheRead<_DWORD>(v454 + 112) - 460168659);
                goto LABEL_1033;
            case 0x2D5:
                v636 = v9 + 1704803830;
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 136i64) + 448i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 136i64) + 448i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x2D6:
                v636 = v9 - 1559529338;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 272i64) + 704i64) + 600i64) + 840i64) + 848i64) ^ (v9 - 1559529338);
                goto LABEL_1033;
            case 0x2D7:
                v455 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 48i64) ^ v9;
                v11 = v636 - (FuckEnc::CacheRead<_DWORD>(v455 + 784) & 0xFFFFFFEB) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v455 + 272) + 408i64) + 925031233);
                goto LABEL_1032;
            case 0x2D8:
                v456 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 144i64) + 40i64) + 8i64) + 824i64) + 552i64);
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v456 + 664) + 808i64);
                goto LABEL_1032;
            case 0x2D9:
                v457 = EncBase;
                v636 = v9 - 193247485 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 608i64) + 504i64) + 808i64);
                v636 += FuckEnc::CacheRead<_DWORD>(v457 + 248);
                goto LABEL_1033;
            case 0x2DA:
                v636 = ~(_DWORD)v9;
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 896i64) + 504i64) + 896i64) + 360i64) + 592i64) + 552i64) ^ ~(_DWORD)v9;
                goto LABEL_1032;
            case 0x2DB:
                v636 = v9 + ((-685871609 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 608i64) + 376i64) + 472i64) + 512i64)) ^ 0x1B795052);
                goto LABEL_1033;
            case 0x2DC:
                v458 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 272i64) + 704i64) + 280i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v458 + 664) + 368i64) + 88i64);
                goto LABEL_1033;
            case 0x2DD:
                //v636 = FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0xC39273E) + v9 + 3;
                v636 = 0xC39273E + v9 + 3;
                //(*(void(__fastcall**)(int*, _QWORD))(EncBase + 680i64))(&v636, EncBase);
                func = FuckEnc::CacheRead<uint64_t>(EncBase + 680i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 += FuckEnc::CacheRead<_DWORD>(EncBase + 408i64);
                goto LABEL_1033;
            case 0x2DE:
                v459 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 144i64) + 176i64) ^ v9;
                v636 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v459 + 648) + 40i64) + 808i64);
                goto LABEL_1033;
            case 0x2DF:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 128i64) + 704i64) + 128i64) + 840i64) + 432i64) + 184i64) + 736i64) + 112i64);
                goto LABEL_1032;
            case 0x2E0:
                v636 = v9 ^ (-1759859054 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 184i64) + 880i64) + 144i64) + 200i64) + 896i64) + 880i64) + 744i64));
                goto LABEL_1033;
            case 0x2E1:
                v460 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 848i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v460 + 664) + 472i64) + 880i64) + 480i64);
                goto LABEL_1033;
            case 0x2E2:
                //v636 = FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0x10FDAD3B) ^ v9;
                v636 = 0x10FDAD3B ^ v9;
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 472i64) + 304i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 472i64) + 304i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x2E3:
                v461 = (_DWORD*)EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 808i64) ^ v9;
                v636 -= FuckEnc::CacheRead<_DWORD>(EncBase + (22 * 4));//v461[22];
                v636 += FuckEnc::CacheRead<_DWORD>(EncBase + (86 * 4));//v461[86];
                v636 ^= ~FuckEnc::CacheRead<_DWORD>(EncBase + (154 * 4));//~v461[154];
                goto LABEL_1033;
            case 0x2E4:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 416i64) + 592i64) + 360i64) + 736i64) + 416i64) + 544i64);
                goto LABEL_1033;
            case 0x2E5:
                v462 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 704i64) + 368i64) + 808i64);
                //(*(void(__fastcall**)(int*, __int64))(v462 + 696))(&v636, v462);
                func = FuckEnc::CacheRead<uint64_t>(v462 + 696);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x2E6:
                v636 = (v9 ^ 0xC120E071) + 1979396594;
                v463 = EncBase;
                v636 ^= FuckEnc::CacheRead<_DWORD>(EncBase + 408i64);
                v636 += FuckEnc::CacheRead<_DWORD>(v463 + 552) + 553877636;
                goto LABEL_1033;
            case 0x2E7:
                v464 = EncBase;
                v636 = (v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 552i64)) ^ 0x495F628A;
                v636 += FuckEnc::CacheRead<_DWORD>(v464 + 848) + 780764479 * FuckEnc::CacheRead<_DWORD>(v464 + 16);
                goto LABEL_1033;
            case 0x2E8:
                v465 = EncBase;
                v636 = ((v9 + -FuckEnc::CacheRead<_DWORD>(EncBase + 512i64) - 1747259640) ^ 0xDC445A99) + 551134621;
                v636 ^= FuckEnc::CacheRead<_DWORD>(v465 + 152) | 0xF;
                goto LABEL_1033;
            case 0x2E9:
                v466 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 872i64) + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 8i64) + 808i64) & 0xFFFFFFED);
                v636 += FuckEnc::CacheRead<_DWORD>(v466 + 16) + 1;
                goto LABEL_1033;
            case 0x2EA:
                v467 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 552i64);
                v636 = v636 - (FuckEnc::CacheRead<_DWORD>(v467 + 88) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v467 + 608) + 608i64) + 784i64)) - 420302230;
                goto LABEL_1033;
            case 0x2EB:
                v636 = v9 ^ FuckEnc::CacheRead<_DWORD>(EncBase + 384i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 432i64) + 272i64) + 368i64) + 240i64) + 272i64) + 480i64);
                goto LABEL_1033;
            case 0x2EC:
                v468 = EncBase;
                v636 = ~(v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 616i64));
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v468 + 240) + 504i64) + 176i64);
                v636 += FuckEnc::CacheRead<_DWORD>(v468 + 248);
                goto LABEL_1033;
            case 0x2ED:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 176i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 240i64) + 832i64) + 240i64) + 320i64);
                goto LABEL_1033;
            case 0x2EE:
                v469 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 128i64) + 480i64);
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(v469 + 368) + 304i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(v469 + 368) + 304i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x2EF:
                //Utils::Log(4, "0x2EF");
                v636 = v9 + 886980532;
                //v470 = (void(__fastcall**)(int*, _QWORD))*a1;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 48i64) + v9 + 886980532;
                //(*v470)(&v636, v470);
                func = FuckEnc::CacheRead<uint64_t>(EncBase);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x2F0:
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 832i64) + 840i64) + 608i64) + 200i64) + 600i64) + 736i64) + 648i64) + 640i64) ^ v9;
                goto LABEL_1032;
            case 0x2F1:
                v471 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 408i64);
                v472 = FuckEnc::CacheRead<_QWORD>(v471 + 880);
                goto LABEL_761;
            case 0x2F2:
                v473 = EncBase;
                v636 = v9 - (FuckEnc::CacheRead<_DWORD>(EncBase + 616i64) ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 872i64) - 1086329544));
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v473 + 824) + 16i64) ^ v636;
                goto LABEL_1032;
            case 0x2F3:
                v474 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 832i64) + 480i64) ^ v9;
                //(*(void(__fastcall**)(int*, __int64))(v474 + 72))(&v636, v474);
                func = FuckEnc::CacheRead<uint64_t>(v474 + 72);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x2F4:
                v475 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 136i64) + 704i64) + 552i64);
                //(*(void(__fastcall**)(int*, __int64))(v475 + 464))(&v636, v475);
                func = FuckEnc::CacheRead<uint64_t>(v475 + 464);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x2F5:
                v476 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 736i64) + 200i64) + 280i64) ^ v9 ^ 0xAF5128C9;
                v636 ^= -2072846897 * FuckEnc::CacheRead<_DWORD>(v476 + 784);
                goto LABEL_1033;
            case 0x2F6:
                v477 = EncBase;
                v636 = (v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 592i64) + 152i64)) ^ 0xD0DC2F5F;
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v477 + 360) + 272i64) + 712i64);
                goto LABEL_1032;
            case 0x2F7:
                v478 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 248i64);
                v636 -= (FuckEnc::CacheRead<_DWORD>(v478 + 408) - 1693449345) ^ (2073849873 * (FuckEnc::CacheRead<_DWORD>(v478 + 640) >> 7));
                goto LABEL_1033;
            case 0x2F8:
                v636 = v9 - 128907278;
                v636 = v9 - 128907278 + 791080391 * FuckEnc::CacheRead<_DWORD>(EncBase + 784i64) + 848298652;
                goto LABEL_1033;
            case 0x2F9:
                v479 = EncBase;
                v636 = -(v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 512i64)) - 120863810;
                v636 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v479 + 608) + 16i64) ^ v636) + 924341384;
                goto LABEL_1033;
            case 0x2FA:
                v480 = EncBase;
                v636 = v9 - ((unsigned int)(83759671 * FuckEnc::CacheRead<_DWORD>(EncBase + 80i64) * FuckEnc::CacheRead<_DWORD>(EncBase + 776i64)) >> 26);
                v636 += FuckEnc::CacheRead<_DWORD>(v480 + 408) + 1;
                goto LABEL_1033;
            case 0x2FB:
                v481 = EncBase;
                v636 = v9 ^ (~FuckEnc::CacheRead<_DWORD>(EncBase + 16i64) << 29);
                v636 += ~FuckEnc::CacheRead<_DWORD>(v481 + 744);
                v636 -= FuckEnc::CacheRead<_DWORD>(v481 + 176);
                goto LABEL_1033;
            case 0x2FC:
                v482 = EncBase;
                //v636 = v9 ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 280i64) - (FuckEnc::CacheRead<_DWORD>(GameData.Process.Base + 0x4896319) + 5));
                v636 = v9 ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 280i64) - (0x4896319 + 5));
                v636 -= FuckEnc::CacheRead<_DWORD>(v482 + 248) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v482 + 608) + 152i64);
                goto LABEL_1033;
            case 0x2FD:
                v483 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 552i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v483 + 176) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v483 + 704) + 144i64) + 744i64);
                goto LABEL_1033;
            case 0x2FE:
                v484 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 368i64) + 136i64) + 880i64) + 152i64) ^ v9;
                v636 += FuckEnc::CacheRead<_DWORD>(v484 + 776);
                goto LABEL_1033;
            case 0x2FF:
                v485 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 808i64) + 1538327586;
                v636 += FuckEnc::CacheRead<_DWORD>(v485 + 616) + ~(FuckEnc::CacheRead<_DWORD>(v485 + 80) + 1153205778);
                goto LABEL_1033;
            case 0x300:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 480i64) + (FuckEnc::CacheRead<_DWORD>(EncBase + 544i64) | 0x15) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 880i64) + 552i64);
                goto LABEL_1033;
            case 0x301:
                v486 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 416i64) + 128i64) + 40i64) + 384i64);
                v636 += FuckEnc::CacheRead<_DWORD>(v486 + 408) + 1;
                goto LABEL_1033;
            case 0x302:
                v487 = EncBase;
                v636 = (v9 ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 872i64) >> 19)) - 2137584861;
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v487 + 184) + 472i64) + 608i64) + 616i64);
                goto LABEL_1033;
            case 0x303:
                v488 = EncBase;
                v636 = v9 + 596674474 * (FuckEnc::CacheRead<_DWORD>(EncBase + 176i64) + 1);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v488 + 128) + 368i64) + 504i64) + 48i64);
                goto LABEL_1033;
            case 0x304:
                v489 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 472i64) + 8i64) + 832i64) + 240i64) + 592i64) + 808i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(v489 + 80);
                goto LABEL_1033;
            case 0x305:
                v636 = v9 - 80059595;
                //(*(void(__fastcall**)(int*, _QWORD))(EncBase + 264i64))(&v636, EncBase);
                func = FuckEnc::CacheRead<uint64_t>(EncBase + 264i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 -= FuckEnc::CacheRead<_DWORD>(EncBase + 480i64);
                goto LABEL_1033;
            case 0x306:
                v490 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 776i64);
                v636 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v490 + 824) + 704i64) + 376i64) + 648i64) + 112i64);
                goto LABEL_1033;
            case 0x307:
                v491 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 360i64) + 248i64) - 1410702096;
                v636 += 1382017603 * FuckEnc::CacheRead<_DWORD>(v491 + 712) - 1339325564;
                goto LABEL_1033;
            case 0x308:
                v492 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 832i64) + 152i64);
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v492 + 896) + 736i64) + 744i64) + 1019379758;
                goto LABEL_1032;
            case 0x309:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 896i64) + 144i64) + 592i64) + 112i64) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 832i64) + 112i64) << 11);
                goto LABEL_1032;
            case 0x30A:
                v493 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 408i64) ^ v9;
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v493 + 40) + 896i64) + 432i64) + 736i64) + 808i64) - 482770932;
                goto LABEL_1033;
            case 0x30B:
                v494 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 16i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v494 + 248) ^ 0x250CF483;
                //v636 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v494 + 648) + 248i64) - FuckEnc::CacheRead<_DWORD>(GameData.Process.Base + 0xEDA173D);
                v636 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v494 + 648) + 248i64) - 0xEDA173D;
                goto LABEL_1033;
            case 0x30C:
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 184i64) + 360i64) + 824i64) + 896i64) + 896i64) + 600i64) + 112i64) ^ v9;
                goto LABEL_1032;
            case 0x30D:
                v636 = v9 + (((FuckEnc::CacheRead<_DWORD>(EncBase + 408i64) + 1) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 504i64) + 616i64) + 14850)) << 17);
                goto LABEL_1033;
            case 0x30E:
                v495 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 280i64);
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v495 + 648) + 144i64) + 648i64) + 376i64) + 16i64);
                goto LABEL_1032;
            case 0x30F:
                v636 = v9 - 1239157939;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 360i64) + 600i64) + 360i64) + 608i64) + 128i64) + 848i64) ^ (v9 - 1239157939);
                goto LABEL_1033;
            case 0x310:
                v496 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 128i64) + 80i64) ^ v9;
                v636 -= FuckEnc::CacheRead<_DWORD>(v496 + 152);
                //(*(void(__fastcall**)(int*, __int64))(v496 + 768))(&v636, v496);
                func = FuckEnc::CacheRead<uint64_t>(v496 + 768);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x311:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 432i64) + 824i64) + 896i64) + 144i64) + 704i64) + 176i64);
                goto LABEL_1033;
            case 0x312:
                v497 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 840i64) + 896i64) + 320i64);
                v636 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v497 + 704) + 88i64);
                goto LABEL_1033;
            case 0x313:
                v636 = v9 ^ 0x2125776A;
                v11 = (v9 ^ 0x2125776A) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 184i64) + 200i64) + 376i64) + 784i64) - 1318190192;
                goto LABEL_1032;
            case 0x314:
                v636 = v9 + 1326800698;
                v636 = v9 + 1326800698 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 608i64) + 776i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 144i64) + 200i64) + 152i64));
                goto LABEL_1033;
            case 0x315:
                v498 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 712i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(v498 + 576);
                v11 = (v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v498 + 704) + 504i64) + 248i64)) ^ 0x3CFC2549;
                goto LABEL_1032;
            case 0x316:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 368i64) + 184i64) + 880i64) + 384i64) * (FuckEnc::CacheRead<_DWORD>(EncBase + 80i64) + 1) - 548831356;
                goto LABEL_1033;
            case 0x317:
                v11 = v9 - 944281444 * ((FuckEnc::CacheRead<_DWORD>(EncBase + 112i64) ^ 0xD0959F3D) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 608i64) + 704i64) + 744i64));
                goto LABEL_1032;
            case 0x318:
                v636 = v9 - 1129794058;
                v636 = ((v9 - 1129794058) ^ ((FuckEnc::CacheRead<_DWORD>(EncBase + 248i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 472i64) + 48i64)) + 1552465968)) + 685408057;
                goto LABEL_1033;
            case 0x319:
                v499 = EncBase;
                v636 = (v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 248i64)) ^ 0xCC17EBBF;
                v636 -= FuckEnc::CacheRead<_DWORD>(v499 + 544);
                //(*(void(__fastcall**)(int*, __int64))(v499 + 688))(&v636, v499);
                func = FuckEnc::CacheRead<uint64_t>(v499 + 688);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x31A:
                v636 = (v9 ^ FuckEnc::CacheRead<_DWORD>(EncBase + 552i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 600i64) + 432i64) + 8i64) + 648i64) + 776i64)) - 1269163729;
                goto LABEL_1033;
            case 0x31B:
                v11 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 272i64) + 136i64) + 736i64) + 896i64) + 144i64) + 704i64) + 312i64) >> 31);
                goto LABEL_1032;
            case 0x31C:
                v500 = EncBase;
                v636 = v9 + ~FuckEnc::CacheRead<_DWORD>(EncBase + 176i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v500 + 312) * (FuckEnc::CacheRead<_DWORD>(v500 + 848) - 1803131232);
                goto LABEL_1033;
            case 0x31D:
                v636 = (v9 - 714872823) ^ 0xCD4FEC8A;
                v501 = EncBase;
                v636 = (FuckEnc::CacheRead<_DWORD>(EncBase + 712i64) ^ v636) + 1005523089;
                v636 = v636 - FuckEnc::CacheRead<_DWORD>(v501 + 48) + 1649637380;
                goto LABEL_1033;
            case 0x31E:
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 432i64) + 896i64) + 376i64) + 448i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 432i64) + 896i64) + 376i64) + 448i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x31F:
                v502 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 880i64) + 712i64) + 2103543324;
                //(*(void(__fastcall**)(int*, __int64))(v502 + 696))(&v636, v502);
                func = FuckEnc::CacheRead<uint64_t>(v502 + 696);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x320:
                v636 = v9 ^ 0x6AB29AE3;
                v636 = v9 ^ 0x6AB29AE3 ^ ((FuckEnc::CacheRead<_DWORD>(EncBase + 848i64) >> 19) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 896i64) + 416i64) + 480i64));
                goto LABEL_1033;
            case 0x321:
                v503 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 48i64);
                v636 += 1378864101 * FuckEnc::CacheRead<_DWORD>(v503 + 872) - 1315448121 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v503 + 704) + 320i64);
                goto LABEL_1033;
            case 0x322:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 832i64) + 840i64) + 432i64) + 824i64) + 432i64) + 200i64) + 320i64) - 1612632806;
                goto LABEL_1032;
            case 0x323:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 200i64) + 408i64) + 370013038 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 128i64) + 896i64) + 808i64) ^ 0x6D6A0139);
                goto LABEL_1033;
            case 0x324:
                v504 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 384i64) ^ v9;
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v504 + 432) + 240i64) + 472i64) + 848i64) << 29;
                goto LABEL_1033;
            case 0x325:
                v11 = (v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 648i64) + 608i64) + 896i64) + 432i64) + 240i64) + 8i64) + 512i64)) ^ 0xF21C931F;
                goto LABEL_1032;
            case 0x326:
                v505 = EncBase;
                v636 = (v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 136i64) + 840i64) + 600i64) + 112i64) + 443609683) ^ 0x2C6E82DC;
                v636 += FuckEnc::CacheRead<_DWORD>(v505 + 112);
                goto LABEL_1033;
            case 0x327:
                v506 = EncBase;
                v636 = v9 ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 776i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 704i64) + 280i64));
                v636 ^= FuckEnc::CacheRead<_DWORD>(v506 + 552);
                v636 += FuckEnc::CacheRead<_DWORD>(v506 + 616);
                goto LABEL_1033;
            case 0x328:
                v11 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 880i64) + 16i64) ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 872i64) >> 23) ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 248i64) - 1164907076));
                goto LABEL_1032;
            case 0x329:
                //v636 = FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0x769C26) + v9 + 5;
                v636 = 0x769C26 + v9 + 5;
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 704i64) + 664i64) + 200i64) + 600i64) + 616i64);
                goto LABEL_1033;
            case 0x32A:
                v636 = (v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 184i64) + 280i64) ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 608i64) + 664i64) + 280i64) | 0xE))) ^ 0x4C36472F;
                goto LABEL_1033;
            case 0x32B:
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 792i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 792i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 ^= 0x6A471F5Bu;
                v636 -= FuckEnc::CacheRead<_DWORD>(EncBase + 48i64);
                goto LABEL_1033;
            case 0x32C:
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 504i64) + 144i64) + 144i64) + 832i64) + 880i64) + 704i64) + 384i64) ^ v9;
                goto LABEL_1032;
            case 0x32D:
                v636 = v9 ^ 0x8CA3BCBC;
                v11 = ((v9 ^ 0x8CA3BCBC) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 128i64) + 600i64) + 8i64) + 840i64) + 872i64)) ^ 0x78FB1E71;
                goto LABEL_1032;
            case 0x32E:
                v636 = v9 + 376260805;
                v636 = (v9 + 376260805 + ~(-2076550859 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 840i64) + 176i64))) ^ 0xEA04D274;
                goto LABEL_1033;
            case 0x32F:
                v507 = EncBase;
                //v636 = FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0x84252F1) + v9 - 587311528 * FuckEnc::CacheRead<_DWORD>(EncBase + 80i64) + 2;
                v636 = 0x84252F1 + v9 - 587311528 * FuckEnc::CacheRead<_DWORD>(EncBase + 80i64) + 2;
                v636 += FuckEnc::CacheRead<_DWORD>(v507 + 808) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v507 + 504) + 480i64);
                goto LABEL_1033;
            case 0x330:
                v636 = (v9 ^ 0x8E4D7C0E) + 752998359;
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 592i64) + 432i64) + 512i64);
                goto LABEL_1033;
            case 0x331:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 368i64) + 432i64) + 664i64) + 136i64) + 896i64) + 408i64) + 1178734277;
                goto LABEL_1033;
            case 0x332:
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 736i64) + 304i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 736i64) + 304i64);
                FuckEnc::FastCall(func, &v636, base);
                //v636 ^= FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0x203EB10);
                v636 ^= 0x203EB10;
                goto LABEL_1033;
            case 0x333:
                v508 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 368i64) + 248i64) ^ v9;
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v508 + 368) + 848i64) ^ 0x84681978;
                v636 += FuckEnc::CacheRead<_DWORD>(v508 + 48);
                goto LABEL_1033;
            case 0x334:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 8i64) + 736i64) + 600i64) + 40i64) + 240i64) + 608i64) + 504i64) + 80i64);
                goto LABEL_1032;
            case 0x335:
                v509 = EncBase;
                v636 = v9 - ((FuckEnc::CacheRead<_DWORD>(EncBase + 576i64) & 0xFFFFFFE4) << 14);
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v509 + 472) + 840i64) + 776i64);
                goto LABEL_1032;
            case 0x336:
                v510 = EncBase;
                v636 = v9 ^ (1167456372 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 648i64) + 504i64) + 480i64));
                v636 ^= 791869126 * FuckEnc::CacheRead<_DWORD>(v510 + 320);
                goto LABEL_1033;
            case 0x337:
                v511 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 112i64) ^ v9;
                v636 -= FuckEnc::CacheRead<_DWORD>(v511 + 576);
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v511 + 368) + 472i64) + 480i64);
                goto LABEL_1032;
            case 0x338:
                v512 = EncBase;
                v636 = v9 - (FuckEnc::CacheRead<_DWORD>(EncBase + 88i64) | 0xD) - 1188759367;
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v512 + 832) + 736i64) + 600i64) + 744i64);
                goto LABEL_1033;
            case 0x339:
                v513 = EncBase;
                //v636 = FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0x8982BAA) + v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 576i64);
                v636 = 0x8982BAA + v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 576i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v513 + 664) + 552i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v513 + 776);
                goto LABEL_1033;
            case 0x33A:
                v636 = v9 - 4653799;
                v514 = EncBase;
                v636 = ~(v9 - 4653799 - FuckEnc::CacheRead<_DWORD>(EncBase + 640i64));
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v514 + 704) + 600i64) + 312i64);
                goto LABEL_1033;
            case 0x33B:
                v636 = v9 ^ 0xFB6F1DA3;
                v515 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 872i64) ^ v9 ^ 0xFB6F1DA3;
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v515 + 376) + 144i64) + 432i64) + 776i64) ^ v636;
                goto LABEL_1032;
            case 0x33C:
                v636 = v9 ^ 0xB9CF08AD;
                v516 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 640i64) ^ v9 ^ 0xB9CF08AD;
                //v11 = FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0x55D6FD2) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v516 + 416) + 600i64) + 872i64) ^ v636;
                v11 = 0x55D6FD2 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v516 + 416) + 600i64) + 872i64) ^ v636;
                goto LABEL_1032;
            case 0x33D:
                //v517 = (_DWORD*)EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 616i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(EncBase + (144 * 4));//v517[144];
                //v636 = FuckEnc::CacheRead<_DWORD>(GameData.Process.Base + 0xAC3293B) + 2 + (v517[102] ^ v636);
                //v636 = FuckEnc::CacheRead<_DWORD>(GameData.Process.Base + 0xAC3293B) + 2 + (FuckEnc::CacheRead<_DWORD>(EncBase + (102 * 4)) ^ v636);
                v636 = 0xAC3293B + 2 + (FuckEnc::CacheRead<_DWORD>(EncBase + (102 * 4)) ^ v636);
                //v11 = v636 - v517[44];
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(EncBase + (44 * 4));
                goto LABEL_1032;
            case 0x33E:
                v11 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 608i64) + 472i64) + 144i64) + 432i64) + 200i64) + 640i64) ^ 0x531C5E3D);
                goto LABEL_1032;
            case 0x33F:
                v518 = EncBase;
                //v636 = FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0x109DB6F1) ^ (v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 416i64) + 784i64));
                v636 = 0x109DB6F1 ^ (v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 416i64) + 784i64));
                v636 ^= ~(-1450113029 * FuckEnc::CacheRead<_DWORD>(v518 + 784));
                goto LABEL_1033;
            case 0x340:
                v636 = v9 ^ 0xA5758D9F;
                v636 = (v9 ^ 0xA5758D9F) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 592i64) + 432i64) + 128i64) + 128i64) + 472i64) + 784i64);
                goto LABEL_1033;
            case 0x341:
                v519 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 48i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v519 + 40) + 360i64) + 272i64) + 712i64) & 0xFFFFFFE2;
                goto LABEL_1033;
            case 0x342:
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 376i64) + 200i64) + 768i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 376i64) + 200i64) + 768i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x343:
                v520 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 832i64) + 16i64);
                v636 += FuckEnc::CacheRead<_DWORD>(v520 + 384) ^ FuckEnc::CacheRead<_DWORD>(v520 + 872) ^ 0x67B6C538;
                goto LABEL_1033;
            case 0x344:
                v636 = (v9 + 785915730) ^ 0xD07A4B54;
                v636 ^= FuckEnc::CacheRead<_DWORD>(EncBase + 480i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 704i64) + 592i64) + 776i64);
                goto LABEL_1033;
            case 0x345:
                v636 = v9 + ~(FuckEnc::CacheRead<_DWORD>(EncBase + 872i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 200i64) + 472i64) + 608i64) + 152i64));
                goto LABEL_1033;
            case 0x346:
                v521 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 320i64) ^ v9;
                v636 ^= FuckEnc::CacheRead<_DWORD>(v521 + 344) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v521 + 664) + 808i64);
                goto LABEL_1033;
            case 0x347:
                v522 = EncBase;
                v636 = v9 + 2 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 736i64) + 744i64) - 1375235041;
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v522 + 184) + 848i64);
                goto LABEL_1033;
            case 0x348:
                v523 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 736i64) + 600i64) + 592i64) + 640i64);
                v636 ^= -795954145 * FuckEnc::CacheRead<_DWORD>(v523 + 712);
                goto LABEL_1033;
            case 0x349:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 704i64) + 416i64) + 200i64) + 608i64) + 144i64) + 136i64) + 48i64);
                goto LABEL_1032;
            case 0x34A:
                v524 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 880i64) + 176i64) ^ v9 ^ 0x903EE2D2;
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v524 + 128) + 896i64) + 872i64) ^ v636;
                goto LABEL_1032;
            case 0x34B:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 600i64) + 704i64) + 240i64) + 8i64) + 896i64) + 184i64) + 40i64) + 512i64);
                goto LABEL_1032;
            case 0x34C:
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 832i64) + 840i64) + 504i64) + 880i64) + 184i64) + 184i64) + 832i64) + 552i64) ^ v9;
                goto LABEL_1032;
            case 0x34D:
                v525 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 576i64) ^ v9;
                v11 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v525 + 416) + 368i64) + 360i64) + 704i64) + 712i64) ^ v636);
                goto LABEL_1032;
            case 0x34E:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 152i64) + ((FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 608i64) + 344i64) << 21) | 0x18);
                goto LABEL_1033;
            case 0x34F:
                v526 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 736i64) + 664i64) + 48i64);
                //(*(void(__fastcall**)(int*, __int64))(v526 + 536))(&v636, v526);
                func = FuckEnc::CacheRead<uint64_t>(v526 + 536);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x350:
                v527 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 112i64) ^ v9;
                //(*(void(__fastcall**)(int*, __int64))(v527 + 792))(&v636, v527);
                func = FuckEnc::CacheRead<uint64_t>(v527 + 792);
                FuckEnc::FastCall(func, &v636, base);
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 272i64) + 88i64);
                goto LABEL_1033;
            case 0x351:
                v636 = v9 ^ 0xD2F01B7E;
                v528 = EncBase;
                v636 = (v9 ^ 0xD2F01B7E) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 504i64) + 896i64) + 152i64);
                v11 = FuckEnc::CacheRead<_DWORD>(v528 + 88) ^ v636;
                goto LABEL_1032;
            case 0x352:
                v636 = v9 - 128388761;
                v529 = EncBase;
                v636 = v9 - 128388761 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 128i64) + 472i64) + 376i64) + 784i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(v529 + 576);
                goto LABEL_1033;
            case 0x353:
                v530 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 184i64) + 824i64) + 368i64) + 784i64);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v530 + 360) + 824i64) + 712i64);
                goto LABEL_1033;
            case 0x354:
                v531 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 776i64) + 1952138753;
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v531 + 840) + 776i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v531 + 272) + 88i64);
                goto LABEL_1033;
            case 0x355:
                v532 = EncBase;
                v636 = ~(v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 512i64));
                v636 ^= FuckEnc::CacheRead<_DWORD>(v532 + 248) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v532 + 736) + 576i64);
                goto LABEL_1033;
            case 0x356:
                v533 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 552i64);
                v636 += (FuckEnc::CacheRead<_DWORD>(v533 + 408) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v533 + 704) + 736i64) + 640i64)) + 477789226;
                goto LABEL_1033;
            case 0x357:
                v636 = v9 ^ ((unsigned int)(347990962 * FuckEnc::CacheRead<_DWORD>(EncBase + 280i64)) >> 20) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 272i64) + 240i64) + 312i64);
                goto LABEL_1033;
            case 0x358:
                v636 = v9 + 1761770962;
                v534 = EncBase;
                v636 = v9 + 1761770962 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 368i64) + 872i64);
                v636 = v636 - 507745300 * FuckEnc::CacheRead<_DWORD>(v534 + 848) - 2072700314;
                goto LABEL_1033;
            case 0x359:
                v11 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 200i64) + 592i64) + 16i64) ^ (-835616411 - 1916281647 * FuckEnc::CacheRead<_DWORD>(EncBase + 152i64)));
                goto LABEL_1032;
            case 0x35A:
                v535 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 144i64) + 784i64) - 1521509339;
                //(*(void(__fastcall**)(int*, __int64))(v535 + 560))(&v636, v535);
                func = FuckEnc::CacheRead<uint64_t>(v535 + 560);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x35B:
                v536 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 248i64) + 2126851006;
                v636 -= FuckEnc::CacheRead<_DWORD>(v536 + 408) ^ (FuckEnc::CacheRead<_DWORD>(v536 + 384) + 1531929979);
                goto LABEL_1033;
            case 0x35C:
                v537 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 16i64) + 1;
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v537 + 376) + 504i64) + 200i64) + 200i64) + 544i64);
                goto LABEL_1033;
            case 0x35D:
                v538 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 512i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v538 + 472) + 544i64) + (FuckEnc::CacheRead<_DWORD>(v538 + 320) ^ 0x896EA99A);
                goto LABEL_1033;
            case 0x35E:
                v539 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 896i64) + 272i64) + 128i64) + 200i64) + 48i64);
                v11 = FuckEnc::CacheRead<_DWORD>(v539 + 320) ^ v636;
                goto LABEL_1032;
            case 0x35F:
                v540 = EncBase;
                v636 = (FuckEnc::CacheRead<_DWORD>(EncBase + 80i64) ^ v9 ^ 0xD13EED96) - 1387945857;
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v540 + 504) + 472i64) + 824i64) + 16i64);
                goto LABEL_1033;
            case 0x360:
                v541 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 408i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v541 + 240) + 504i64) + 184i64) + 648i64) + 744i64);
                goto LABEL_1033;
            case 0x361:
                v636 = v9 + 1742018710;
                v542 = EncBase;
                v636 = v9 + 1742018710 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 240i64) + 512i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v542 + 504) + 176i64);
                goto LABEL_1033;
            case 0x362:
                v543 = EncBase;
                v636 = v9 + (FuckEnc::CacheRead<_DWORD>(EncBase + 80i64) ^ FuckEnc::CacheRead<_DWORD>(EncBase + 88i64) ^ 0x71F76092);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v543 + 144) + 544i64);
                goto LABEL_1033;
            case 0x363:
                v636 = v9 + ((-1342177280 * FuckEnc::CacheRead<_DWORD>(EncBase + 112i64)) ^ 0xF0000000);
                goto LABEL_1033;
            case 0x364:
                v636 = v9 - 223730424;
                v544 = EncBase;
                v636 = v9 - 223730424 + (FuckEnc::CacheRead<_DWORD>(EncBase + 712i64) | 9);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v544 + 272) + 592i64) + 848i64);
                goto LABEL_1033;
            case 0x365:
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 840i64) + 368i64) + 736i64) + 648i64) + 136i64) + 432i64) + 704i64) + 744i64) ^ v9;
                goto LABEL_1032;
            case 0x366:
                v545 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 512i64) ^ v9;
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v545 + 240) + 592i64) + 704i64) + 896i64) + 360i64) + 320i64);
                goto LABEL_1032;
            case 0x367:
                v636 = v9 ^ 0x719F15;
                v546 = EncBase;
                v636 = (v9 ^ 0x719F15) + FuckEnc::CacheRead<_DWORD>(EncBase + 776i64);
                //v636 ^= ~(FuckEnc::CacheRead<_DWORD>(GameData.Process.Base + 0x7252B99) + 3 + ~FuckEnc::CacheRead<_DWORD>(v546 + 808));
                v636 ^= ~(0x7252B99 + 3 + ~FuckEnc::CacheRead<_DWORD>(v546 + 808));
                goto LABEL_1033;
            case 0x368:
                v547 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 128i64) + 840i64) + 872i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v547 + 832) + 504i64) + 248i64);
                goto LABEL_1033;
            case 0x369:
                v636 = ~(_DWORD)v9;
                v11 = ~(_DWORD)v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 144i64) + 648i64) + 200i64) + 40i64) + 128i64) + 640i64);
                goto LABEL_1032;
            case 0x36A:
                v548 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 776i64) ^ v9;
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v548 + 736) + 40i64) + 8i64) + 616i64) ^ v636;
                goto LABEL_1032;
            case 0x36B:
                v549 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 544i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 184i64) + 784i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(v549 + 88) & 0xFFFFFFE4;
                goto LABEL_1033;
            case 0x36C:
                v636 = v9 ^ 0xB87FD488;
                v636 = (v9 ^ 0xB87FD488) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 360i64) + 608i64) + 40i64) + 664i64) + 384i64);
                goto LABEL_1033;
            case 0x36D:
                v550 = EncBase;
                v636 = ((v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 640i64)) ^ 0x81C174BD) + 1926257973;
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v550 + 432) + 200i64) + 616i64) + 594068704;
                goto LABEL_1033;
            case 0x36E:
                v551 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 712i64) ^ v9 ^ 0x3186BF3D;
                v636 ^= -1180633892 * ~(FuckEnc::CacheRead<_DWORD>(v551 + 344) ^ 0x9A176721);
                goto LABEL_1033;
            case 0x36F:
                v636 = v9 ^ 0x39CEFC17;
                v552 = EncBase;
                v636 = (v9 ^ 0x39CEFC17) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 504i64) + 840i64) + 112i64);
                v636 += FuckEnc::CacheRead<_DWORD>(v552 + 552) | 0x11;
                goto LABEL_1033;
            case 0x370:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 184i64) + 592i64) + 272i64) + 200i64) + 648i64) + 736i64) + 248i64);
                goto LABEL_1032;
            case 0x371:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 736i64) + 512i64) * (FuckEnc::CacheRead<_DWORD>(EncBase + 112i64) - 2099928704) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 8i64) + 280i64);
                goto LABEL_1032;
            case 0x372:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 136i64) + 824i64) + 640i64) * (FuckEnc::CacheRead<_DWORD>(EncBase + 712i64) ^ 0xD9E644C4) + 2104201715;
                goto LABEL_1033;
            case 0x373:
                v553 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 408i64) ^ v9;
                v636 += ~(FuckEnc::CacheRead<_DWORD>(v553 + 176) ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v553 + 136) + 784i64));
                goto LABEL_1033;
            case 0x374:
                //v554 = (_DWORD*)EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 616i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(EncBase + (138 * 4));//v554[138];
                v636 -= FuckEnc::CacheRead<_DWORD>(EncBase + (38 * 4));//v554[38];
                //v11 = ~(v554[78] ^ v636);
                v11 = ~(FuckEnc::CacheRead<_DWORD>(EncBase + (78 * 4)) ^ v636);
                goto LABEL_1032;
            case 0x375:
                v555 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 840i64) + 616i64) + 1;
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v555 + 824) + 512i64) >> 18;
                goto LABEL_1033;
            case 0x376:
                v556 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 88i64) - 1163174391;
                v636 ^= FuckEnc::CacheRead<_DWORD>(v556 + 408) - 968245080;
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v556 + 144) + 784i64);
                goto LABEL_1033;
            case 0x377:
                v557 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 552i64);
                v636 = v636 - FuckEnc::CacheRead<_DWORD>(v557 + 48) + 1573625336;
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v557 + 416) + 824i64) + 744i64) ^ v636;
                goto LABEL_1032;
            case 0x378:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 184i64) + 248i64) - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 344i64) + 1;
                goto LABEL_1033;
            case 0x379:
                v558 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 416i64) + 80i64) ^ v9;
                v636 += FuckEnc::CacheRead<_DWORD>(v558 + 576) * ~FuckEnc::CacheRead<_DWORD>(v558 + 576);
                goto LABEL_1033;
            case 0x37A:
                v559 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 736i64) + 88i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v559 + 16) | 0xC;
                v636 ^= FuckEnc::CacheRead<_DWORD>(v559 + 312);
                goto LABEL_1033;
            case 0x37B:
                v560 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 432i64) + 360i64) + 848i64) - 955859254;
                v636 = ~(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v560 + 648) + 80i64) ^ v636);
                goto LABEL_1033;
            case 0x37C:
                v561 = EncBase;
                v636 = v9 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 808i64) & 0xFFFFFFF7;
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v561 + 368) + 200i64) + 416i64) + 808i64);
                goto LABEL_1033;
            case 0x37D:
                v562 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 360i64) + 136i64) + 616i64) ^ v9;
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v562 + 824) + 280i64) + 1427538484;
                goto LABEL_1032;
            case 0x37E:
                v563 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 480i64) ^ v9;
                //(*(void(__fastcall**)(int*, __int64))(v563 + 696))(&v636, v563);
                func = FuckEnc::CacheRead<uint64_t>(v563 + 696);
                FuckEnc::FastCall(func, &v636, base);
                v636 -= FuckEnc::CacheRead<_DWORD>(EncBase + 312i64);
                goto LABEL_1033;
            case 0x37F:
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 880i64) + 832i64) + 232i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 880i64) + 832i64) + 232i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 ^= FuckEnc::CacheRead<_DWORD>(EncBase + 80i64);
                goto LABEL_1033;
            case 0x380:
                v636 = v9 ^ (1995930171 - 1625690417 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 704i64) + 200i64) + 504i64) + 344i64));
                goto LABEL_1033;
            case 0x381:
                //(*(void(__fastcall**)(int*, _QWORD))(EncBase + 912i64))(&v636, EncBase);
                func = FuckEnc::CacheRead<uint64_t>(EncBase + 912i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 832i64) + 240i64) + 152i64);
                goto LABEL_1033;
            case 0x382:
                v564 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 8i64) + 616i64) ^ v9;
                //v11 = (FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0xB1D58C1) + 3) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v564 + 368) + 8i64) + 848i64) ^ v636;
                v11 = (0xB1D58C1 + 3) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v564 + 368) + 8i64) + 848i64) ^ v636;
                goto LABEL_1032;
            case 0x383:
                v209 = EncBase;
                v210 = v9 ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 808i64) + 1363174301 * FuckEnc::CacheRead<_DWORD>(EncBase + 112i64));
            LABEL_339:
                v636 = v210;
                //(*(void(__fastcall**)(int*, __int64))(v209 + 768))(&v636, v209);
                func = FuckEnc::CacheRead<uint64_t>(v209 + 768);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x384:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 8i64) + 472i64) + 472i64) + 840i64) + 592i64) + 8i64) + 344i64);
                goto LABEL_1032;
            case 0x385:
                v636 = v9 - 205319840;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 504i64) + 200i64) + 472i64) + 704i64) + 144i64) + 552i64) ^ (v9 - 205319840);
                goto LABEL_1033;
            case 0x386:
                v11 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 840i64) + 840i64) + 472i64) + 8i64) + 432i64) + 544i64) ^ 0x30F13C21);
                goto LABEL_1032;
            case 0x387:
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 360i64) + 504i64) + 376i64) + 416i64) + 272i64) + 8i64) + 320i64) ^ v9;
                goto LABEL_1032;
            case 0x388:
                v565 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 432i64) + 552i64) ^ v9;
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v565 + 736) + 592i64) + 272i64) + 320i64);
                goto LABEL_1033;
            case 0x389:
                v11 = (v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 704i64) + 88i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 704i64) + 608i64) + 16i64)) ^ 0x60BBE208;
                goto LABEL_1032;
            case 0x38A:
                v636 = v9 ^ (2098805236 * FuckEnc::CacheRead<_DWORD>(EncBase + 48i64) * FuckEnc::CacheRead<_DWORD>(EncBase + 776i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 360i64) + 744i64));
                goto LABEL_1033;
            case 0x38B:
                v636 = v9 ^ 0x4C61D8A6;
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 648i64) + 664i64) + 128i64) + 240i64) + 808i64) ^ v9 ^ 0x4C61D8A6 ^ 0x3160332A;
                goto LABEL_1032;
            case 0x38C:
                v566 = EncBase;
                //v636 = (FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0x7D74D77) + 1) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 472i64) + 848i64) ^ v9;
                v636 = (0x7D74D77 + 1) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 472i64) + 848i64) ^ v9;
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v566 + 600) + 592i64) + 832i64) + 576i64);
                goto LABEL_1032;
            case 0x38D:
                v567 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 80i64);
                v636 += (FuckEnc::CacheRead<_DWORD>(v567 + 552) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v567 + 736) + 512i64)) & 0xFFFFFFFC;
                goto LABEL_1033;
            case 0x38E:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 608i64) + 40i64) + 136i64) + 376i64) + 504i64) + 112i64);
                goto LABEL_1033;
            case 0x38F:
                v568 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 512i64);
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v568 + 504) + 144i64) + 216i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v568 + 504) + 144i64) + 216i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x390:
                // 27F46B0
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 272i64) + 240i64) + 368i64) + 368i64) + 560i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 272i64) + 240i64) + 368i64) + 368i64) + 560i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x391:
                v472 = FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 136i64) + 648i64) + 272i64);
            LABEL_761:
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(v472 + 832) + 696i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(v472 + 832) + 696i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x392:
                v569 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 848i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v569 + 776) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v569 + 880) + 368i64) + 312i64);
                goto LABEL_1033;
            case 0x393:
                v570 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 576i64) ^ v9;
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v570 + 200) + 640i64);
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v570 + 648) + 248i64) ^ v636 ^ 0xC4E0E85F;
                goto LABEL_1032;
            case 0x394:
                v571 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 240i64) + 136i64) + 776i64);
                v636 += ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v571 + 880) + 48i64);
                goto LABEL_1033;
            case 0x395:
                v636 = ~(_DWORD)v9;
                v11 = ~(_DWORD)v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 416i64) + 200i64) + 200i64) + 664i64) + 184i64) + 48i64);
                goto LABEL_1032;
            case 0x396:
                v572 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 504i64) + 480i64);
                //(*(void(__fastcall**)(int*, __int64))(v572 + 912))(&v636, v572);
                func = FuckEnc::CacheRead<uint64_t>(v572 + 912);
                FuckEnc::FastCall(func, &v636, base);
                v636 -= FuckEnc::CacheRead<_DWORD>(EncBase + 616i64);
                goto LABEL_1033;
            case 0x397:
                v573 = EncBase;
                v636 = ~(v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 872i64));
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v573 + 504) + 736i64) + 376i64) + 848i64);
                goto LABEL_1033;
            case 0x398:
                v574 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 896i64) + 408i64);
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v574 + 416) + 664i64) + 416i64) + 48i64) ^ v636;
                goto LABEL_1032;
            case 0x399:
                //v636 = v9 + (FuckEnc::CacheRead<_DWORD>(EncBase + 512i64) - (FuckEnc::CacheRead<_DWORD>(GameData.Process.Base + 0x744EB6F) + 2)) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 416i64) + 184i64) + 408i64) & 0xFFFFFFE2);
                v636 = v9 + (FuckEnc::CacheRead<_DWORD>(EncBase + 512i64) - (0x744EB6F + 2)) * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 416i64) + 184i64) + 408i64) & 0xFFFFFFE2);
                goto LABEL_1033;
            case 0x39A:
                v575 = EncBase;
                v636 = v9 - (FuckEnc::CacheRead<_DWORD>(EncBase + 88i64) ^ 0xFF921E08);
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v575 + 136) + 240i64) + 608i64) + 184i64) + 848i64) ^ v636;
                goto LABEL_1032;
            case 0x39B:
                v636 = v9 ^ 0x2094F9C4;
                v576 = EncBase;
                v636 = (v9 ^ 0x2094F9C4) - FuckEnc::CacheRead<_DWORD>(EncBase + 80i64);
                v636 += 1147569905 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v576 + 376) + 80i64);
                goto LABEL_1033;
            case 0x39C:
                v577 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 360i64) + 376i64) + 384i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v577 + 136) + 136i64) + 664i64) + 744i64);
                goto LABEL_1033;
            case 0x39D:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 8i64) + 648i64) + 360i64) + 592i64) + 824i64) + 320i64);
                goto LABEL_1033;
            case 0x39E:
                v636 = v9 ^ ~(1206516675 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 472i64) + 280i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 320i64));
                goto LABEL_1033;
            case 0x39F:
                v578 = EncBase;
                v636 = (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 600i64) + 344i64) ^ v9 ^ 0x763E425A) - 1612627516;
                v636 -= FuckEnc::CacheRead<_DWORD>(v578 + 744) ^ 0x3CB115B4;
                goto LABEL_1033;
            case 0x3A0:
                v579 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 88i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v579 + 48) * (FuckEnc::CacheRead<_DWORD>(v579 + 512) ^ 0xBC7DFA9E);
                goto LABEL_1033;
            case 0x3A1:
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 144i64) + 648i64) + 264i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 144i64) + 648i64) + 264i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x3A2:
                v580 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 736i64) + 744i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v580 + 544) * (FuckEnc::CacheRead<_DWORD>(v580 + 384) ^ 0xFC1EC60B);
                goto LABEL_1033;
            case 0x3A3:
                v636 = ((v9 + 1263403428) ^ 0x27E85E7D) - 796928723;
                v581 = EncBase;
                v636 += FuckEnc::CacheRead<_DWORD>(EncBase + 152i64);
                v636 = v636 - FuckEnc::CacheRead<_DWORD>(v581 + 80) + 2123886010;
                goto LABEL_1033;
            case 0x3A4:
                v582 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 320i64) ^ v9;
                //v636 ^= FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0x434E162) ^ (FuckEnc::CacheRead<_DWORD>(v582 + 320) - 1004126596);
                v636 ^= 0x434E162 ^ (FuckEnc::CacheRead<_DWORD>(v582 + 320) - 1004126596);
                v636 -= FuckEnc::CacheRead<_DWORD>(v582 + 320);
                goto LABEL_1033;
            case 0x3A5:
                v583 = EncBase;
                //v636 = FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0xAE3EB53) ^ (v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 640i64));
                v636 = 0xAE3EB53 ^ (v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 640i64));
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v583 + 472) + 184i64) + 784i64);
                goto LABEL_1032;
            case 0x3A6:
                //(*(void(__fastcall**)(int*, _QWORD))(EncBase + 96i64))(&v636, EncBase);
                func = FuckEnc::CacheRead<uint64_t>(EncBase + 96i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 648i64) + 600i64) + 480i64);
                goto LABEL_1033;
            case 0x3A7:
                v636 = v9 + 683808107;
                v584 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 344i64) ^ (v9 + 683808107);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v584 + 152) + ~FuckEnc::CacheRead<_DWORD>(v584 + 480);
                goto LABEL_1033;
            case 0x3A8:
                v585 = EncBase;
                v636 = v9 ^ (1109000048 * FuckEnc::CacheRead<_DWORD>(EncBase + 312i64)) ^ 0x7DBEA352;
                v636 ^= ~(FuckEnc::CacheRead<_DWORD>(v585 + 848) ^ 0x53F27A1B);
                goto LABEL_1033;
            case 0x3A9:
                v586 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 712i64);
                v636 = v636 - FuckEnc::CacheRead<_DWORD>(v586 + 16) + 355336193;
                v636 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v586 + 432) + 640i64) + 1108920437;
                goto LABEL_1033;
            case 0x3AA:
                v587 = EncBase;
                v636 = ~(v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 432i64) + 744i64));
                v636 -= FuckEnc::CacheRead<_DWORD>(v587 + 320);
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v587 + 832) + 16i64) ^ v636;
                goto LABEL_1032;
            case 0x3AB:
                v218 = EncBase;
                v219 = v9 - (FuckEnc::CacheRead<_DWORD>(EncBase + 80i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 832i64) + 312i64) ^ 0xE0AB82D1);
            LABEL_353:
                v636 = v219;
                v636 = v219 + FuckEnc::CacheRead<_DWORD>(v218 + 616);
                goto LABEL_1033;
            case 0x3AC:
                v588 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 320i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v588 + 40) + 480i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v588 + 240) + 184i64) + 712i64);
                goto LABEL_1033;
            case 0x3AD:
                v589 = EncBase;
                v636 = v9 ^ ~FuckEnc::CacheRead<_DWORD>(EncBase + 784i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v589 + 40) + 360i64) + 136i64) + 144i64) + 552i64);
                goto LABEL_1033;
            case 0x3AE:
                v590 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 832i64) + 872i64);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v590 + 200) + 176i64) ^ 0xAC28272B;
                goto LABEL_1033;
            case 0x3AF:
                v591 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 616i64) + 2053053266;
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v591 + 8) + 784i64) * (FuckEnc::CacheRead<_DWORD>(v591 + 312) - 1163592059);
                goto LABEL_1033;
            case 0x3B0:
                //v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 880i64) + 704i64) + 416i64) + 712i64) - (_DWORD)L"ot found!";
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 880i64) + 704i64) + 416i64) + 712i64) - 0x10DF6D36;
                goto LABEL_1032;
            case 0x3B1:
                v592 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 16i64) ^ v9;
                //(*(void(__fastcall**)(int*, __int64))(v592 + 696))(&v636, v592);
                func = FuckEnc::CacheRead<uint64_t>(v592 + 696);
                FuckEnc::FastCall(func, &v636, base);
                v636 ^= FuckEnc::CacheRead<_DWORD>(EncBase + 848i64);
                goto LABEL_1033;
            case 0x3B2:
                v636 = v9 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 608i64) + 808i64) ^ (745600399 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 136i64) + 808i64));
                goto LABEL_1033;
            case 0x3B3:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 432i64) + 712i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 136i64) + 8i64) + 704i64) + 512i64) + 1447700770;
                goto LABEL_1033;
            case 0x3B4:
                v636 = v9 + 1759214884;
                v636 = v9 + 1759214884 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 704i64) + 200i64) + 8i64) + 240i64) + 272i64) + 712i64);
                goto LABEL_1033;
            case 0x3B5:
                v636 = v9 - 803778902;
                v636 = v9 - 803778902 - FuckEnc::CacheRead<_DWORD>(EncBase + 552i64) * FuckEnc::CacheRead<_DWORD>(EncBase + 808i64) * (FuckEnc::CacheRead<_DWORD>(EncBase + 176i64) - 703111385);
                goto LABEL_1033;
            case 0x3B6:
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 144i64) + 600i64) + 376i64) + 216i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 144i64) + 600i64) + 376i64) + 216i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x3B7:
                v593 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 576i64) ^ v9;
                v11 = v636 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v593 + 664) + 504i64) + 408i64) & 0xFFFFFFE4);
                goto LABEL_1032;
            case 0x3B8:
                v594 = EncBase;
                v636 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 184i64) + 552i64) | 3);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v594 + 824) + 272i64) + 712i64);
                goto LABEL_1033;
            case 0x3B9:
                v595 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 480i64) ^ v9;
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v595 + 896) + 736i64) + 376i64) + 40i64) + 8i64) + 776i64) ^ v636;
                goto LABEL_1032;
            case 0x3BA:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 832i64) + 736i64) + 136i64) + 368i64) + 472i64) + 184i64) + 712i64);
                goto LABEL_1032;
            case 0x3BB:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 312i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 200i64) + 312i64) * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 704i64) + 712i64);
                goto LABEL_1033;
            case 0x3BC:
                //v636 = ~(FuckEnc::CacheRead<_DWORD>(GameData.Process.Base + 0x67D963C) + (v9 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 880i64) + 872i64) ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 112i64) >> 2)));
                v636 = ~(0x67D963C + (v9 ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 880i64) + 872i64) ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 112i64) >> 2)));
                goto LABEL_1033;
            case 0x3BD:
                //(*(void(__fastcall**)(int*, _QWORD))(EncBase + 216i64))(&v636, EncBase);
                func = FuckEnc::CacheRead<uint64_t>(EncBase + 216i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 ^= ~FuckEnc::CacheRead<_DWORD>(EncBase + 712i64) & 0xFFFFFFF7;
                goto LABEL_1033;
            case 0x3BE:
                v636 = v9 ^ (-232855164 * ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 136i64) + 240i64) + 472i64) + 608i64) + 272i64) + 112i64));
                goto LABEL_1033;
            case 0x3BF:
                v636 = ~(v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 8i64) + 512i64) + 1838696089 * FuckEnc::CacheRead<_DWORD>(EncBase + 408i64));
                goto LABEL_1033;
            case 0x3C0:
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(EncBase + 608i64) + 264i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(EncBase + 608i64) + 264i64);
                FuckEnc::FastCall(func, &v636, base);
                v636 ^= FuckEnc::CacheRead<_DWORD>(EncBase + 616i64);
                goto LABEL_1033;
            case 0x3C1:
                v596 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 600i64) + 272i64) + 112i64);
                v636 = v636 - FuckEnc::CacheRead<_DWORD>(v596 + 784) + 1859113384;
                v11 = FuckEnc::CacheRead<_DWORD>(v596 + 480) ^ v636;
                goto LABEL_1032;
            case 0x3C2:
                v597 = EncBase;
                v636 = (FuckEnc::CacheRead<_DWORD>(EncBase + 48i64) ^ v9) + 465162719;
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v597 + 472) + 272i64) + 848i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(v597 + 776);
                goto LABEL_1033;
            case 0x3C3:
                v598 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 280i64) + 680190532;
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(v598 + 8) + 448i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(v598 + 8) + 448i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x3C4:
                v599 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 432i64) + 840i64) + 408i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v599 + 184) + 712i64) >> 25;
                goto LABEL_1033;
            case 0x3C5:
                v600 = EncBase;
                v636 = v9 ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 248i64) + 1721266979);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v600 + 640);
                v636 -= 1191500065 * FuckEnc::CacheRead<_DWORD>(v600 + 176);
                goto LABEL_1033;
            case 0x3C6:
                v601 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 616i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v601 + 552);
                //(*(void(__fastcall**)(int*, __int64))(v601 + 264))(&v636, v601);
                func = FuckEnc::CacheRead<uint64_t>(v601 + 264);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x3C7:
                //v636 = FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0xC3616A2) + v9 + 2;
                v636 = 0xC3616A2 + v9 + 2;
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 608i64) + 552i64) * ((FuckEnc::CacheRead<_DWORD>(EncBase + 152i64) | 0x15) + 630370818);
                goto LABEL_1033;
            case 0x3C8:
                v602 = EncBase;
                v636 = (v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 344i64)) ^ 0xB5F9E186;
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v602 + 376) + 592i64) + 824i64) + 840i64) + 544i64) ^ v636;
                goto LABEL_1032;
            case 0x3C9:
                v603 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 344i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v603 + 840) + 512i64);
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v603 + 144) + 112i64) ^ v636;
                goto LABEL_1032;
            case 0x3CA:
                v604 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 552i64) ^ v9 ^ 0xA0D2E4E2;
                v11 = (v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v604 + 416) + 8i64) + 592i64) + 16i64)) ^ 0x17E6B37B;
                goto LABEL_1032;
            case 0x3CB:
                v636 = v9 ^ FuckEnc::CacheRead<_DWORD>(EncBase + 248i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 360i64) + 280i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 272i64) + 736i64) + 176i64);
                goto LABEL_1033;
            case 0x3CC:
                v636 = v9 ^ 0xDA7751B4;
                v636 = (v9 ^ 0xDA7751B4) + FuckEnc::CacheRead<_DWORD>(EncBase + 80i64) - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 136i64) + 152i64) | 0xE) + 1;
                goto LABEL_1033;
            case 0x3CD:
                v636 = v9 ^ 0xD3A20762;
                v636 = (v9 ^ 0xD3A20762) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 736i64) + 376i64) + 608i64) + 504i64) + 80i64);
                goto LABEL_1033;
            case 0x3CE:
                v605 = EncBase;
                v636 = v9 ^ ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 368i64) + 872i64);
                v636 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v605 + 200) + 600i64) + 872i64);
                goto LABEL_1033;
            case 0x3CF:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 200i64) + 40i64) + 896i64) + 240i64) + 112i64) - FuckEnc::CacheRead<_DWORD>(EncBase + 480i64);
                goto LABEL_1032;
            case 0x3D0:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 312i64) * (FuckEnc::CacheRead<_DWORD>(EncBase + 248i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 416i64) + 16i64)) + 1;
                goto LABEL_1033;
            case 0x3D1:
                v606 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 896i64) + 312i64);
                v636 += 704227640 * FuckEnc::CacheRead<_DWORD>(v606 + 320) - 580867654 * FuckEnc::CacheRead<_DWORD>(v606 + 784);
                goto LABEL_1033;
            case 0x3D2:
                v607 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 576i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v607 + 240) + 704i64) + 704i64) + 880i64) + 144i64) + 280i64);
                goto LABEL_1033;
            case 0x3D3:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 704i64) + 832i64) + 40i64) + 40i64) + 200i64) + 432i64) + 872i64);
                goto LABEL_1033;
            case 0x3D4:
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 512i64) * (FuckEnc::CacheRead<_DWORD>(EncBase + 48i64) + 1) - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 360i64) + 176i64) >> 11);
                goto LABEL_1033;
            case 0x3D5:
                v636 = v9 ^ 0x8491131B;
                v608 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 712i64) ^ v9 ^ 0x8491131B;
                v11 = v636 - ((FuckEnc::CacheRead<_DWORD>(v608 + 152) >> 2) & 0x3FFFFFE8);
                goto LABEL_1032;
            case 0x3D6:
                v636 = v9 + (FuckEnc::CacheRead<_DWORD>(EncBase + 312i64) ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 248i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 592i64) + 608i64) + 640i64)));
                goto LABEL_1033;
            case 0x3D7:
                v609 = EncBase;
                v636 = v9 - 901790244 * FuckEnc::CacheRead<_DWORD>(EncBase + 552i64);
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v609 + 608) + 880i64) + 184i64) + 712i64) - 1680586346;
                goto LABEL_1032;
            case 0x3D8:
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 840i64) + 664i64) + 880i64) + 688i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 840i64) + 664i64) + 880i64) + 688i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x3D9:
                v636 = v9 ^ 0x49A8B130;
                v636 = v9 ^ 0x49A8B130 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 640i64) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 648i64) + 184i64) + 384i64));
                goto LABEL_1033;
            case 0x3DA:
                v636 = v9 ^ (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 880i64) + 600i64) + 576i64) * (FuckEnc::CacheRead<_DWORD>(EncBase + 152i64) + 1541750676));
                goto LABEL_1033;
            case 0x3DB:
                v11 = v9 - (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 824i64) + 240i64) + 824i64) + 152i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 704i64) + 344i64) & 0xFFFFFFE6);
                goto LABEL_1032;
            case 0x3DC:
                v636 = v9 ^ 0xE182E6A3;
                v11 = (v9 ^ 0xE182E6A3) - 751379906 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 592i64) + 184i64) + 184i64) + 48i64) ^ 0x2CFB2B72);
                goto LABEL_1032;
            case 0x3DD:
                v610 = EncBase;
                v636 = v9 - (FuckEnc::CacheRead<_DWORD>(EncBase + 152i64) >> 20);
                v636 += (FuckEnc::CacheRead<_DWORD>(v610 + 712) ^ 0x277CDB89) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v610 + 376) + 808i64);
                goto LABEL_1033;
            case 0x3DE:
                v611 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 664i64) + 176i64);
                v636 = v636 - FuckEnc::CacheRead<_DWORD>(v611 + 176) - 907397331;
                v636 = v636 - FuckEnc::CacheRead<_DWORD>(v611 + 712) - 874958374;
                goto LABEL_1033;
            case 0x3DF:
                //(*(void(__fastcall**)(int*, _QWORD))(EncBase + 336i64))(&v636, EncBase);
                func = FuckEnc::CacheRead<uint64_t>(EncBase + 336i64);
                FuckEnc::FastCall(func, &v636, base);
                //v636 ^= FuckEnc::CacheRead<unsigned int>(GameData.Process.Base + 0xE7B93FF);
                v636 ^= 0xE7B93FF;
                v636 -= FuckEnc::CacheRead<_DWORD>(EncBase + 248i64) | 0x19;
                goto LABEL_1033;
            case 0x3E0:
                v612 = EncBase;
                v636 = v9 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 200i64) + 824i64) + 744i64) ^ 0x74A66C08);
                v636 = v636 - FuckEnc::CacheRead<_DWORD>(v612 + 744) - 1399659825;
                goto LABEL_1033;
            case 0x3E1:
                v613 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 640i64);
                v636 += FuckEnc::CacheRead<_DWORD>(v613 + 776) | 0xA;
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v613 + 136) + 8i64) + 616i64);
                goto LABEL_1033;
            case 0x3E2:
                v614 = EncBase;
                //v636 = (v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 408i64) - (FuckEnc::CacheRead<_DWORD>(GameData.Process.Base + 0xB51DD94) + 4)) ^ 0xA774E69E;
                v636 = (v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 408i64) - (0xB51DD94 + 4)) ^ 0xA774E69E;
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v614 + 896) + 608i64) + 784i64) ^ v636;
                goto LABEL_1032;
            case 0x3E3:
                v615 = EncBase;
                v636 = (v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 576i64)) ^ 0x81F6A171;
                v636 ^= (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v615 + 896) + 896i64) + 280i64) & 0xFFFFFFEE) - 594682060;
                goto LABEL_1033;
            case 0x3E4:
                v616 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 152i64);
                v636 += (FuckEnc::CacheRead<_DWORD>(v616 + 320) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v616 + 832) + 80i64)) << 7;
                goto LABEL_1033;
            case 0x3E5:
                v617 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 504i64) + 80i64);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v617 + 184) + 240i64) + 360i64) + 128i64) + 512i64);
                goto LABEL_1033;
            case 0x3E6:
                v618 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 320i64) ^ v9;
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v618 + 128) + 592i64) + 272i64) + 200i64) + 152i64);
                goto LABEL_1033;
            case 0x3E7:
                v619 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 704i64) + 320i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v619 + 320);
                //(*(void(__fastcall**)(int*, __int64))(v619 + 792))(&v636, v619);
                func = FuckEnc::CacheRead<uint64_t>(v619 + 792);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x3E8:
                v620 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 152i64) ^ v9;
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v620 + 664) + 408i64);
                v636 ^= -581591040 * FuckEnc::CacheRead<_DWORD>(v620 + 480);
                goto LABEL_1033;
            case 0x3E9:
                v636 = v9 - 924064139;
                //v636 = v9 - 924064139 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 640i64) ^ (FuckEnc::CacheRead<_DWORD>(GameData.Process.Base + 0xF03A36A) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 832i64) + 784i64)));
                v636 = v9 - 924064139 + (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 40i64) + 640i64) ^ (0xF03A36A + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 832i64) + 784i64)));
                goto LABEL_1033;
            case 0x3EA:
                v621 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 744i64) ^ v9;
                v636 -= FuckEnc::CacheRead<_DWORD>(v621 + 112);
                v11 = FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v621 + 40) + 360i64) + 848i64) ^ v636;
                goto LABEL_1032;
            case 0x3EB:
                v636 = v9 ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 248i64) + ~((-565019418 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 200i64) + 312i64)) | 0x10));
                goto LABEL_1033;
            case 0x3EC:
                v622 = EncBase;
                v636 = v9 ^ (FuckEnc::CacheRead<_DWORD>(EncBase + 744i64) | 0x1B);
                v636 -= FuckEnc::CacheRead<_DWORD>(v622 + 616);
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v622 + 832) + 368i64) + 408i64);
                goto LABEL_1033;
            case 0x3ED:
                v636 = v9 ^ (2008191437 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 432i64) + 880i64) + 272i64) + 744i64));
                goto LABEL_1033;
            case 0x3EE:
                v623 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 176i64);
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v623 + 240) + 144i64) + 728i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v623 + 240) + 144i64) + 728i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x3EF:
                v624 = EncBase;
                v636 = (v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 880i64) + 248i64)) ^ 0xF1941171;
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v624 + 504) + 608i64) + 776i64);
                goto LABEL_1033;
            case 0x3F0:
                v636 = v9 - 771768533;
                //(*(void(__fastcall**)(int*, _QWORD))(EncBase + 336i64))(&v636, EncBase);
                func = FuckEnc::CacheRead<uint64_t>(EncBase + 336i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x3F1:
                v636 = v9 - 665769800;
                v636 = (v9 - 665769800) ^ (608424723 * (FuckEnc::CacheRead<_DWORD>(EncBase + 712i64) ^ FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 8i64) + 704i64) + 312i64)));
                goto LABEL_1033;
            case 0x3F2:
                v625 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 432i64) + 8i64) + 512i64);
                v636 += 2052321330 * FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v625 + 240) + 504i64) + 848i64);
                goto LABEL_1033;
            case 0x3F3:
                v626 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 776i64) + 1132619255;
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v626 + 600) + 408i64);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v626 + 608) + 712i64);
                goto LABEL_1033;
            case 0x3F4:
                v627 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 776i64) ^ v9;
                v636 -= FuckEnc::CacheRead<_DWORD>(v627 + 248);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v627 + 832) + 432i64) + 824i64) + 344i64);
                goto LABEL_1033;
            case 0x3F5:
                v628 = EncBase;
                v636 = FuckEnc::CacheRead<_DWORD>(EncBase + 512i64) ^ v9;
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v628 + 8) + 832i64) + 832i64) + 240i64) + 384i64);
                goto LABEL_1032;
            case 0x3F6:
                v636 = v9 ^ 0x2B3A76ED;
                v636 = (v9 ^ 0x2B3A76ED) + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 136i64) + 136i64) + 248i64) * (FuckEnc::CacheRead<_DWORD>(EncBase + 112i64) ^ 0x2BD6C9DA);
                goto LABEL_1033;
            case 0x3F7:
                v636 = v9 + 1071069516;
                v629 = EncBase;
                v636 = v9 + 1071069516 - FuckEnc::CacheRead<_DWORD>(EncBase + 712i64);
                v636 += ~FuckEnc::CacheRead<_DWORD>(v629 + 640);
                v636 ^= FuckEnc::CacheRead<_DWORD>(v629 + 344);
                goto LABEL_1033;
            case 0x3F8:
                v630 = EncBase;
                v636 = ~(v9 + FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 704i64) + 848i64) - 645514909);
                v636 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(v630 + 648) + 712i64);
                goto LABEL_1033;
            case 0x3F9:
                v631 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 544i64);
                v636 -= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v631 + 200) + 136i64) + 736i64) + 648i64) + 808i64);
                goto LABEL_1033;
            case 0x3FA:
                //Utils::Log(4, "0x3FA");
                v632 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 176i64);
                v636 += FuckEnc::CacheRead<_DWORD>(v632 + 784);
                //(*(void(__fastcall**)(int*, __int64))v632)(&v636, v632);
                func = FuckEnc::CacheRead<uint64_t>(EncBase);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x3FB:
                v636 = v9 - 744444436;
                //(*(void(__fastcall**)(int*))(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 472i64) + 432i64) + 680i64))(&v636);
                func = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 472i64) + 432i64) + 680i64);
                FuckEnc::FastCall(func, &v636, base);
                goto LABEL_1033;
            case 0x3FC:
                v11 = v9 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 832i64) + 504i64) + 880i64) + 128i64) + 880i64) + 504i64) + 320i64);
                goto LABEL_1032;
            case 0x3FD:
                v633 = EncBase;
                v636 = v9 + ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(EncBase + 376i64) + 144i64) + 576i64);
                //v636 ^= (_DWORD) "MachineInActive" + 0x72E7FAEC * FuckEnc::CacheRead<_DWORD>(v633 + 744);
                v636 ^= 0x10DD3EDC + 0x72E7FAEC * FuckEnc::CacheRead<_DWORD>(v633 + 744);
                goto LABEL_1033;
            case 0x3FE:
                v634 = EncBase;
                v636 = v9 + FuckEnc::CacheRead<_DWORD>(EncBase + 784i64);
                v636 += FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v634 + 472) + 40i64) + 8i64) + 240i64) + 272i64) + 80i64);
                goto LABEL_1033;
            case 0x3FF:
                v635 = EncBase;
                v636 = v9 - FuckEnc::CacheRead<_DWORD>(EncBase + 408i64);
                v11 = v636 - FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(v635 + 504) + 648i64) + 272i64) + 200i64) + 576i64);
            LABEL_1032:
                v636 = v11;
            LABEL_1033:
                v8 += 4;
                *a2++ = v636;
                if (v8 + 3 >= a3)
                    return;
                continue;
            }
        }
    }
}