#pragma once

#include <Hack/FuckEnc.h>
#include <IDA/ida_defs.h>

namespace Calls
{
    static _QWORD FastCall(uint64_t Func, void* v1, _QWORD a2, _QWORD a3 = 0)
    {
        Func = FuckEnc::CacheRead<uint64_t>(Func);

        if (Func != 0 && (Func <= GameData.Process.Base || Func >= GameData.Process.Base + GameData.Process.Size))
        {
            Func = FuckEnc::CacheRead<uint64_t>(Func);
            // Utils::Log(1, "111 %p", Func);
        }

        Func = Func - GameData.Process.Base;
        Func = (uint32_t)(Func & 0x0FFFFFFF);

        // Utils::Log(4, "FastCall 0x%llX", Func);

        int* a1 = static_cast<int*>(v1);

        switch (Func)
        {
            // Main Function 0x28A9370 Start
        case 0x27DCAB0: // 0x28A9370 - 0
        {
            // __int64 __fastcall sub_27DCAB0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x38) + 0x260i64) + 0xB0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4860: // 0x28A9370 - 1
        {
            // __int64 __fastcall sub_27D4860(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x88) + 0x340i64) + 0x2C0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBD50: // 0x28A9370 - 2
        {
            // __int64 __fastcall sub_27DBD50(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x340) + 0x2B8i64) + 0x128i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DAFC0: // 0x28A9370 - 3
        {
            // __int64 __fastcall sub_27DAFC0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x330) + 0x258i64) + 0x1D8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCE80: // 0x28A9370 - 4
        {
            // __int64 __fastcall sub_27DCE80(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x120) + 0x2F0i64) + 0x58i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB6D0: // 0x28A9370 - 5
        {
            // __int64 __fastcall sub_27DB6D0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x218);
            *a1 ^= 0xE4BCB94F * FuckEnc::CacheRead<_DWORD>(result + 0x228);
            return result;

            break;
        }
        case 0x27DC5D0: // 0x28A9370 - 6
        {
            // __int64 __fastcall sub_27DC5D0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x340) + 0x260i64) + 0x310i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D81E0: // 0x28A9370 - 7
        {
            // __int64 __fastcall sub_27D81E0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x30) + 0x330i64) + 0x210i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB090: // 0x28A9370 - 8
        {
            // __int64 __fastcall sub_27DB090(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = (unsigned int)(4 * FuckEnc::CacheRead<_DWORD>(a2 + 0x280) + 0x1B0BD576);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBAA0: // 0x28A9370 - 9
        {
            // __int64 __fastcall sub_27DBAA0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x2E8) + 0x200i64) + 0x1A8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DAE00: // 0x28A9370 - 10
        {
            // __int64 __fastcall sub_27DAE00(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x208) + 0x30i64) + 0x250i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB7E0: // 0x28A9370 - 11
        {
            // __int64 __fastcall sub_27DB7E0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x30) + 0x160i64) + 0x378i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC300: // 0x28A9370 - 12
        {
            // __int64 __fastcall sub_27DC300(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = (unsigned int)(0x4C000000 * FuckEnc::CacheRead<_DWORD>(a2 + 0x228));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB150: // 0x28A9370 - 13
        {
            // __int64 __fastcall sub_27DB150(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a2 + 0x58);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC210: // 0x28A9370 - 14
        {
            // __int64 __fastcall sub_27DC210(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x38) + 0x160i64) + 0xF0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5090: // 0x28A9370 - 15
        {
            // __int64 __fastcall sub_27D5090(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x170) + 0x300i64) + 0x140i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB220: // 0x28A9370 - 16
        {
            // __int64 __fastcall sub_27DB220(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = (unsigned int)(0x3241B4A5 - FuckEnc::CacheRead<_DWORD>(a2 + 0x10));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC050: // 0x28A9370 - 17
        {
            // __int64 __fastcall sub_27DC050(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = *a1 ^ (FuckEnc::CacheRead<_DWORD>(a2 + 0x10) - (_DWORD)0x108BB56D) ^ 0xD8A59A13;
            *a1 = result;
            return result;

            break;
        }
        case 0x27DB400: // 0x28A9370 - 18
        {
            // __int64 __fastcall sub_27DB400(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 72) + 840i64) + 784i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9A00: // 0x28A9370 - 19
        {
            // __int64 __fastcall sub_27D9A00(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x30);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x128) + 0x29535B5F;
            return result;

            break;
        }
        case 0x27D7A00: // 0x28A9370 - 20
        {
            // __int64 __fastcall sub_27D7A00(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x30) + 0x2E8i64) + 0x58i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB5F0: // 0x28A9370 - 21
        {
            // __int64 __fastcall sub_27DB5F0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x258);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x250) ^ 0x283BF384;
            return result;

            break;
        }
        case 0x27D9220: // 0x28A9370 - 22
        {
            // __int64 __fastcall sub_27D9220(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0xE8) + 0x218i64) + 0x128i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCB90: // 0x28A9370 - 23
        {
            // __int64 __fastcall sub_27DCB90(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x2B8) + 0x208i64) + 0x1D8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA770: // 0x28A9370 - 24
        {
            // __int64 __fastcall sub_27DA770(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x200) + 0x2F0i64) + 0x168i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE390: // 0x28A9370 - 25
        {
            // __int64 __fastcall sub_27DE390(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0xE8) + 0x38i64) + 0xC0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC4E0: // 0x28A9370 - 26
        {
            // __int64 __fastcall sub_27DC4E0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x130);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x228);
            return result;

            break;
        }
        case 0x27DB8C0: // 0x28A9370 - 27
        {
            // __int64 __fastcall sub_27DB8C0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = (unsigned int)(0x7CC02297 - FuckEnc::CacheRead<_DWORD>(a2 + 0x250));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBE50: // 0x28A9370 - 28
        {
            // __int64 __fastcall sub_27DBE50(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x260) + 0x118i64) + 0x338i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCD80: // 0x28A9370 - 29
        {
            // __int64 __fastcall sub_27DCD80(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x30) + 0x2E8i64) + 0x2C0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DAA30: // 0x28A9370 - 30
        {
            // __int64 __fastcall sub_27DAA30(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x1D0);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x228);
            return result;

            break;
        }
        case 0x27D7900: // 0x28A9370 - 31
        {
            // __int64 __fastcall sub_27D7900(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x330) + 0x178i64) + 0x1D8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC6C0: // 0x28A9370 - 32
        {
            // __int64 __fastcall sub_27DC6C0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x300);
            *a1 ^= 0x9E3F22D * FuckEnc::CacheRead<_DWORD>(result + 0x168);
            return result;

            break;
        }
        case 0x27DAB20: // 0x28A9370 - 33
        {
            // __int64 __fastcall sub_27DAB20(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a2 + 0x128);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DAC10: // 0x28A9370 - 34
        {
            // __int64 __fastcall sub_27DAC10(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x48) + 0x88i64) + 0x80i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBF60: // 0x28A9370 - 35
        {
            // __int64 __fastcall sub_27DBF60(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x130) + 0x1D0i64) + 0x80i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC140: // 0x28A9370 - 36
        {
            // __int64 __fastcall sub_27DC140(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x218);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x168) ^ 0x3155E5EA;
            return result;

            break;
        }
        case 0x27D6990: // 0x28A9370 - 37
        {
            // __int64 __fastcall sub_27D6990(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheReadPlural<_QWORD>(a2 + 0x300) + 0x198i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC7C0: // 0x28A9370 - 38
        {
            // __int64 __fastcall sub_27DC7C0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x200) + 0x88i64) + 0x250i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DDB70: // 0x28A9370 - 39
        {
            // __int64 __fastcall sub_27DDB70(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = (unsigned int)(FuckEnc::CacheRead<_DWORD>(a2 + 0x368) << 6);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3090: // 0x28A9370 - 40
        {
            // __int64 __fastcall sub_27D3090(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x218) + 0x78i64) + 0x140i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC8C0: // 0x28A9370 - 41
        {
            // __int64 __fastcall sub_27DC8C0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = (unsigned int)((FuckEnc::CacheRead<_DWORD>(a2 + 0xF0) >> 0xE) - 0x796BB908);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA250: // 0x28A9370 - 42
        {
            // __int64 __fastcall sub_27DA250(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x48);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0xF0) >> 0xD;
            return result;

            break;
        }
        case 0x27DBBB0: // 0x28A9370 - 43
        {
            // __int64 __fastcall sub_27DBBB0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = ~(FuckEnc::CacheRead<_DWORD>(a2 + 0x140) | 0xFu);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6170: // 0x28A9370 - 44
        {
            // __int64 __fastcall sub_27D6170(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x88) + 0x120i64) + 0x2C0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBC70: // 0x28A9370 - 45
        {
            // __int64 __fastcall sub_27DBC70(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x88);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x310) << 0x17;
            return result;

            break;
        }
        case 0x27DB320: // 0x28A9370 - 46
        {
            // __int64 __fastcall sub_27DB320(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x90);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x128) >> 0xD;
            return result;

            break;
        }
        case 0x27D89F0: // 0x28A9370 - 47
        {
            // __int64 __fastcall sub_27D89F0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x48) + 0x200i64) + 0x210i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC9C0: // 0x28A9370 - 48
        {
            // __int64 __fastcall sub_27DC9C0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = (unsigned int)(0x7D40BF14 * FuckEnc::CacheRead<_DWORD>(a2 + 0x58));
            *a1 ^= 0xCB3C8980 - result;
            return result;

            break;
        }
        case 0x27D4060: // 0x28A9370 - 49
        {
            // __int64 __fastcall sub_27D4060(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x248) + 0x160i64) + 0x168i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DAD10: // 0x28A9370 - 50
        {
            // __int64 __fastcall sub_27DAD10(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x90);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x128) + 0x7ECD4BCD;
            return result;

            break;
        }
        case 0x27DEBA0: // 0x28A9370 - 51
        {
            // __int64 __fastcall sub_27DEBA0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x300) + 0x260i64) + 0xB0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DAEE0: // 0x28A9370 - 52
        {
            // __int64 __fastcall sub_27DAEE0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = *a1 ^ FuckEnc::CacheRead<_DWORD>(a2 + 0x40) ^ 0x15B07FC2u;
            *a1 = result;
            return result;

            break;
        }
        case 0x27D58F0: // 0x28A9370 - 53
        {
            // __int64 __fastcall sub_27D58F0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x1D0) + 0x78i64) + 0x80i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB500: // 0x28A9370 - 54
        {
            // __int64 __fastcall sub_27DB500(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = (unsigned int)(0x7D0B003D * FuckEnc::CacheRead<_DWORD>(a2 + 0xF8) - 0x9CF9D00);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC3F0: // 0x28A9370 - 55
        {
            // __int64 __fastcall sub_27DC3F0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = *a1 ^ FuckEnc::CacheRead<_DWORD>(a2 + 0x128) ^ 0x83A568C6;
            *a1 = result;
            return result;

            break;
        }
        case 0x27DA950: // 0x28A9370 - 56
        {
            // __int64 __fastcall sub_27DA950(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x130) + 0x2B8i64) + 0x228i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB9A0: // 0x28A9370 - 57
        {
            // __int64 __fastcall sub_27DB9A0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x130) + 0x348i64) + 0x378i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3880: // 0x28A9370 - 58
        {
            // __int64 __fastcall sub_27D3880(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = ~(FuckEnc::CacheRead<_DWORD>(a2 + 0x2F8) & 0xFFFFFFF9);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7140: // 0x28A9370 - 59
        {
            // __int64 __fastcall sub_27D7140(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x160) + 0x38i64) + 0x80i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCC80: // 0x28A9370 - 60
        {
            // __int64 __fastcall sub_27DCC80(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x170);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x1A8) & 0xFFFFFFE8;
            return result;

            break;
        }
        case 0x27DD370: // 0x28A9370 - 61
        {
            // __int64 __fastcall sub_27DD370(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x340) + 0x1D0i64) + 0x2F8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA850: // 0x28A9370 - 62
        {
            // __int64 __fastcall sub_27DA850(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x30) + 0x178i64) + 0x168i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2860: // 0x28A9370 - 63
        {
            // __int64 __fastcall sub_27D2860(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x300) + 0x90i64) + 0x378i64);
            *a1 ^= result;
            return result;

            break;
        }
        // Main Function 0x28A9370 End

        // Main Function 0x28A9B40 Start
        case 0x27DBC90: // 0x28A9B40 - 0
        {
            // __int64 __fastcall sub_27DBC90(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x690) + 8i64 * (a2 & 0x61)) + 0x1C0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DDE90: // 0x28A9B40 - 1
        {
            // __int64 __fastcall sub_27DDE90(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5C8) + 0x480i64) + 0x4F8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE220: // 0x28A9B40 - 2
        {
            // __int64 __fastcall sub_27DE220(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3E8) + 0xC8i64) + 4i64 * (a2 & 0x80));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4570: // 0x28A9B40 - 3
        {
            // __int64 __fastcall sub_27D4570(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2F8) + 8i64 * (unsigned __int8)__ROL4__(a2, 0x1B)) + 0x6C0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D95E0: // 0x28A9B40 - 4
        {
            // __int64 __fastcall sub_27D95E0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 ^ *a1 ^ (unsigned int)((_DWORD)0x5C30131 + FuckEnc::CacheRead<_DWORD>(a3 + 0x2C0));
            *a1 = result;
            return result;

            break;
        }
        case 0x27D9BA0: // 0x28A9B40 - 5
        {
            // __int64 __fastcall sub_27D9BA0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x158);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x640) + 0x69164B5A;
            return result;

            break;
        }
        case 0x27DD510: // 0x28A9B40 - 6
        {
            // __int64 __fastcall sub_27DD510(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x718) + 0x5D0i64) + 0x4F8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D57A0: // 0x28A9B40 - 7
        {
            // __int64 __fastcall sub_27D57A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x638) + 8i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x540) & 0x31)) + 0x268i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2FC0: // 0x28A9B40 - 8
        {
            // __int64 __fastcall sub_27D2FC0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x718) + 0x358i64) + 4i64 * (unsigned __int8)__ROR4__(a2, 4));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD050: // 0x28A9B40 - 9
        {
            // __int64 __fastcall sub_27DD050(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x678) + 0x630i64) + 0x2E8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCDA0: // 0x28A9B40 - 10
        {
            // __int64 __fastcall sub_27DCDA0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3A8) + 8i64 * (unsigned __int8)__ROL4__(a2, 3)) + 0x78i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC6E0: // 0x28A9B40 - 11
        {
            // __int64 __fastcall sub_27DC6E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xA8) + 0x360i64) + 0x408i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD7F0: // 0x28A9B40 - 12
        {
            // __int64 __fastcall sub_27DD7F0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x400) + 8i64 * ((a2 ^ 0xEF) & 0x90)) + 0x58i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8650: // 0x28A9B40 - 13
        {
            // __int64 __fastcall sub_27D8650(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x760);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x190) & 0x51));
            return result;

            break;
        }
        case 0x27D8F40: // 0x28A9B40 - 14
        {
            // __int64 __fastcall sub_27D8F40(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x298);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x550) * a2;
            return result;

            break;
        }
        case 0x27D7E60: // 0x28A9B40 - 15
        {
            // __int64 __fastcall sub_27D7E60(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x170) + 8i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x2B0) & 0x7B)) + 0x408i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7710: // 0x28A9B40 - 16
        {
            // __int64 __fastcall sub_27D7710(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x678) + 0x90i64) + 0x2E8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB160: // 0x28A9B40 - 17
        {
            // __int64 __fastcall sub_27DB160(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 ^ *a1 ^ (unsigned int)~FuckEnc::CacheRead<_DWORD>(a3 + 0x30);
            *a1 = result;
            return result;

            break;
        }
        case 0x27D4C30: // 0x28A9B40 - 18
        {
            // __int64 __fastcall sub_27D4C30(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x218);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x1A0) & 0xFFFFFFE0;
            return result;

            break;
        }
        case 0x27D72D0: // 0x28A9B40 - 19
        {
            // __int64 __fastcall sub_27D72D0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xA8) + 0x760i64) + 4i64 * (a2 & 0xA4));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6BC0: // 0x28A9B40 - 20
        {
            // __int64 __fastcall sub_27D6BC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xB0) + 0x150i64) + 0x178i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4940: // 0x28A9B40 - 21
        {
            // __int64 __fastcall sub_27D4940(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (FuckEnc::CacheRead<_DWORD>(a3 + 0x6B0) & 0xFFFFFFF6) + 0x6C76B42C;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC7E0: // 0x28A9B40 - 22
        {
            // __int64 __fastcall sub_27DC7E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x218) + 0x480i64) + 0x30i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DAEF0: // 0x28A9B40 - 23
        {
            // __int64 __fastcall sub_27DAEF0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(FuckEnc::CacheRead<_DWORD>(a3 + 0x3F8) + 0x7DE8369F);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3450: // 0x28A9B40 - 24
        {
            // __int64 __fastcall sub_27D3450(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x44750469 * FuckEnc::CacheRead<_DWORD>(a3 + 0x698));
            *a1 ^= 0xA6B4EE71 - result;
            return result;

            break;
        }
        case 0x27DB8D0: // 0x28A9B40 - 25
        {
            // __int64 __fastcall sub_27DB8D0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3A8) + 8i64 * ((unsigned __int8)__ROL4__(a2, 0x1A) & 0x84)) + 0x788i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD950: // 0x28A9B40 - 26
        {
            // __int64 __fastcall sub_27DD950(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x260) + 8i64 * (a2 & 0x96)) + 0x598i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE8C0: // 0x28A9B40 - 27
        {
            // __int64 __fastcall sub_27DE8C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0x578);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8890: // 0x28A9B40 - 28
        {
            // __int64 __fastcall sub_27D8890(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4E8) + 0x760i64) + 4i64 * ((0xFA * a2) & 0x2B));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA970: // 0x28A9B40 - 29
        {
            // __int64 __fastcall sub_27DA970(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x320);
            *a1 ^= 2 * FuckEnc::CacheRead<_DWORD>(result + 0x578);
            return result;

            break;
        }
        case 0x27D6540: // 0x28A9B40 - 30
        {
            // __int64 __fastcall sub_27D6540(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(FuckEnc::CacheRead<_DWORD>(a3 + 0x568) - 0x1B430C54);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB420: // 0x28A9B40 - 31
        {
            // __int64 __fastcall sub_27DB420(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x170) + 8i64 * ((unsigned __int8)__ROR4__(a2, 0xB) & 0xCE)) + 0x698i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9D20: // 0x28A9B40 - 32
        {
            // __int64 __fastcall sub_27D9D20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(FuckEnc::CacheRead<_DWORD>(a3 + 0x268) + 0x3ED3476B) >> 5;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3F10: // 0x28A9B40 - 33
        {
            // __int64 __fastcall sub_27D3F10(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x480) + 0x760i64) + 4i64 * (unsigned __int8)(0xF1 * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D59F0: // 0x28A9B40 - 34
        {
            // __int64 __fastcall sub_27D59F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)0xDA79C1 + (FuckEnc::CacheRead<_DWORD>(a3 + 0x6C0) | 0x10);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC9E0: // 0x28A9B40 - 35
        {
            // __int64 __fastcall sub_27DC9E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0xD8);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x168);
            return result;

            break;
        }
        case 0x27D6C60: // 0x28A9B40 - 36
        {
            // __int64 __fastcall sub_27D6C60(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x90);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x420);
            return result;

            break;
        }
        case 0x27D2DC0: // 0x28A9B40 - 37
        {
            // __int64 __fastcall sub_27D2DC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x110);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x788);
            return result;

            break;
        }
        case 0x27D9240: // 0x28A9B40 - 38
        {
            // __int64 __fastcall sub_27D9240(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x170) + 8i64 * (unsigned __int8)(0xC8 * a2)) + 0x688i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DEAF0: // 0x28A9B40 - 39
        {
            // __int64 __fastcall sub_27DEAF0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x5FE18F6C * FuckEnc::CacheRead<_DWORD>(a3 + 0x1A0) * a2);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7080: // 0x28A9B40 - 40
        {
            // __int64 __fastcall sub_27D7080(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x150) + 0x618i64) + 4i64 * (unsigned __int8)__ROR4__(a2, 0xE));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3B70: // 0x28A9B40 - 41
        {
            // __int64 __fastcall sub_27D3B70(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x740) + 0x3E8i64) + 0x6B0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2AC0: // 0x28A9B40 - 42
        {
            // __int64 __fastcall sub_27D2AC0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x4A8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x430) * a2;
            return result;

            break;
        }
        case 0x27D4CD0: // 0x28A9B40 - 43
        {
            // __int64 __fastcall sub_27D4CD0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x260) + 8i64 * ((a2 ^ 0xA) & 0x3A)) + 0x308i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2CF0: // 0x28A9B40 - 44
        {
            // __int64 __fastcall sub_27D2CF0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x5E8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x6C0) & 0xF0));
            return result;

            break;
        }
        case 0x27D8C50: // 0x28A9B40 - 45
        {
            // __int64 __fastcall sub_27D8C50(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x630);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x2E8) >> 0x1D;
            return result;

            break;
        }
        case 0x27DA6B0: // 0x28A9B40 - 46
        {
            // __int64 __fastcall sub_27DA6B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = 0xE1889880 * FuckEnc::CacheRead<_DWORD>(a3 + 0x540);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9AF0: // 0x28A9B40 - 47
        {
            // __int64 __fastcall sub_27D9AF0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x588) + 8i64 * (a2 & 0xB2)) + 0x30i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4410: // 0x28A9B40 - 48
        {
            // __int64 __fastcall sub_27D4410(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0xD0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x2E8) + 0x691C5C81;
            return result;

            break;
        }
        case 0x27D6DD0: // 0x28A9B40 - 49
        {
            // __int64 __fastcall sub_27D6DD0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0x1C0);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE0C0: // 0x28A9B40 - 50
        {
            // __int64 __fastcall sub_27DE0C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x148FB30B * ~FuckEnc::CacheRead<_DWORD>(a3 + 0x6B0));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5860: // 0x28A9B40 - 51
        {
            // __int64 __fastcall sub_27D5860(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xB0) + 0x468i64) + 0x20i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2880: // 0x28A9B40 - 52
        {
            // void __fastcall sub_27D2880(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x2B0) * a2);

            break;
        }
        case 0x27DE5F0: // 0x28A9B40 - 53
        {
            // __int64 __fastcall sub_27DE5F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x530);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x2D8);
            return result;

            break;
        }
        case 0x27D82C0: // 0x28A9B40 - 54
        {
            // __int64 __fastcall sub_27D82C0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x630) + 0xF8i64) + 4i64 * (a2 ^ 0x5Au));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D84E0: // 0x28A9B40 - 55
        {
            // __int64 __fastcall sub_27D84E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (FuckEnc::CacheRead<_DWORD>(a3 + 0x1C0) - 0x6BBC6464) & 0xFFFFFFFB;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE3B0: // 0x28A9B40 - 56
        {
            // __int64 __fastcall sub_27DE3B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x90);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x568);
            return result;

            break;
        }
        case 0x27DA470: // 0x28A9B40 - 57
        {
            // __int64 __fastcall sub_27DA470(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x400) + 8i64 * (a2 & 0xD5)) + 0x408i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD240: // 0x28A9B40 - 58
        {
            // __int64 __fastcall sub_27DD240(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0x408);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBE70: // 0x28A9B40 - 59
        {
            // __int64 __fastcall sub_27DBE70(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x630);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x3F8) | 0x13;
            return result;

            break;
        }
        case 0x27D4B60: // 0x28A9B40 - 60
        {
            // __int64 __fastcall sub_27D4B60(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x368) + 0x340i64) + 0x430i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7DA0: // 0x28A9B40 - 61
        {
            // __int64 __fastcall sub_27D7DA0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1D8) + 0x5E8i64) + 4i64 * (a2 ^ 0x51u));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5DA0: // 0x28A9B40 - 62
        {
            // __int64 __fastcall sub_27D5DA0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x548) + 8i64 * (unsigned __int8)__ROR4__(a2, 2)) + 0x688i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6D20: // 0x28A9B40 - 63
        {
            // __int64 __fastcall sub_27D6D20(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x548) + 8i64 * (unsigned __int8)(0x3F * a2)) + 0x578i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DEA40: // 0x28A9B40 - 64
        {
            // __int64 __fastcall sub_27DEA40(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = 0xA9D5DE2E * (a2 + FuckEnc::CacheRead<_DWORD>(a3 + 0x4F8));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D60B0: // 0x28A9B40 - 65
        {
            // __int64 __fastcall sub_27D60B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4E8) + 0x150i64) + 0x788i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD2D0: // 0x28A9B40 - 66
        {
            // __int64 __fastcall sub_27DD2D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x480) + 0xB0i64) + 0x78i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB520: // 0x28A9B40 - 67
        {
            // __int64 __fastcall sub_27DB520(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0x20);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2A00: // 0x28A9B40 - 68
        {
            // void __fastcall sub_27D2A00(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= FuckEnc::CacheRead<_DWORD>(a3 + 0x578) * a2 - 0x3F70A4C5;

            break;
        }
        case 0x27DE750: // 0x28A9B40 - 69
        {
            // __int64 __fastcall sub_27DE750(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x68) + 8i64 * (a2 ^ 0xDAu)) + 0x168i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6760: // 0x28A9B40 - 70
        {
            // __int64 __fastcall sub_27D6760(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x150) + 0x360i64) + 0x6E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2C30: // 0x28A9B40 - 71
        {
            // __int64 __fastcall sub_27D2C30(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x258) + 0x528i64) + 0x578i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8D20: // 0x28A9B40 - 72
        {
            // __int64 __fastcall sub_27D8D20(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6D0) + 8i64 * (__ROL4__(a2, 0x1A) & 0x1C)) + 0x420i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7F10: // 0x28A9B40 - 73
        {
            // __int64 __fastcall sub_27D7F10(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x110);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x168) >> 0x1F;
            return result;

            break;
        }
        case 0x27D4AB0: // 0x28A9B40 - 74
        {
            // __int64 __fastcall sub_27D4AB0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x4B0);
            *a1 ^= a2 + FuckEnc::CacheRead<_DWORD>(result + 0x120);
            return result;

            break;
        }
        case 0x27D3E50: // 0x28A9B40 - 75
        {
            // __int64 __fastcall sub_27D3E50(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x690) + 8i64 * ((a2 ^ 0xF7) & 0x8A)) + 0x3F8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3180: // 0x28A9B40 - 76
        {
            // __int64 __fastcall sub_27D3180(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x60FC4F48 * FuckEnc::CacheRead<_DWORD>(a3 + 0x178));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9520: // 0x28A9B40 - 77
        {
            // __int64 __fastcall sub_27D9520(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2F8) + 8i64 * (a2 & 0x70)) + 0x430i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2B90: // 0x28A9B40 - 78
        {
            // __int64 __fastcall sub_27D2B90(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xD8) + 0x5C8i64) + 0x30i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8A10: // 0x28A9B40 - 79
        {
            // __int64 __fastcall sub_27D8A10(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xB0) + 0x760i64) + 4i64 * (unsigned __int8)(0x8E * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4080: // 0x28A9B40 - 80
        {
            // __int64 __fastcall sub_27D4080(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x430) | 0x14u);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3390: // 0x28A9B40 - 81
        {
            // __int64 __fastcall sub_27D3390(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x4A8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x688) ^ 0xA4116CCB;
            return result;

            break;
        }
        case 0x27D3A10: // 0x28A9B40 - 82
        {
            // __int64 __fastcall sub_27D3A10(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x281003E4 * FuckEnc::CacheRead<_DWORD>(a3 + 0x788));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D35A0: // 0x28A9B40 - 83
        {
            // __int64 __fastcall sub_27D35A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(FuckEnc::CacheRead<_DWORD>(a3 + 0x48) << 7);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DAD30: // 0x28A9B40 - 84
        {
            // __int64 __fastcall sub_27DAD30(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x488);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x58) * a2;
            return result;

            break;
        }
        case 0x27D4620: // 0x28A9B40 - 85
        {
            // __int64 __fastcall sub_27D4620(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5C8) + 0x4A8i64) + 0x120i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5E70: // 0x28A9B40 - 86
        {
            // __int64 __fastcall sub_27D5E70(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x320);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x688) - 0x6BFE4514;
            return result;

            break;
        }
        case 0x27D37D0: // 0x28A9B40 - 87
        {
            // __int64 __fastcall sub_27D37D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x218) + 0x90i64) + 0x2C0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7C40: // 0x28A9B40 - 88
        {
            // __int64 __fastcall sub_27D7C40(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = *a1 ^ (a2 + FuckEnc::CacheRead<_DWORD>(a3 + 0x450)) ^ 0x639AD0FFu;
            *a1 = result;
            return result;

            break;
        }
        case 0x27D42A0: // 0x28A9B40 - 89
        {
            // __int64 __fastcall sub_27D42A0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x638) + 8i64 * (unsigned __int8)__ROL4__(a2, 0x13)) + 0x58i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCCA0: // 0x28A9B40 - 90
        {
            // __int64 __fastcall sub_27DCCA0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x260) + 8i64 * a2) + 0x540i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB230: // 0x28A9B40 - 91
        {
            // __int64 __fastcall sub_27DB230(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5D0) + 0x480i64) + 0x3B0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA3E0: // 0x28A9B40 - 92
        {
            // __int64 __fastcall sub_27DA3E0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(a2 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x6C0) << 0x1A));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8130: // 0x28A9B40 - 93
        {
            // __int64 __fastcall sub_27D8130(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1F0) + 0x678i64) + 0x688i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3FC0: // 0x28A9B40 - 94
        {
            // __int64 __fastcall sub_27D3FC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5C8) + 0x710i64) + 0x788i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3CF0: // 0x28A9B40 - 95
        {
            // __int64 __fastcall sub_27D3CF0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x260) + 8i64 * ((0xF9 * a2) & 0x13)) + 0x6E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D44B0: // 0x28A9B40 - 96
        {
            // __int64 __fastcall sub_27D44B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x10) + 0x718i64) + 0x1A0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DAB30: // 0x28A9B40 - 97
        {
            // __int64 __fastcall sub_27DAB30(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2A0) + 0xF8i64) + 4i64 * (unsigned __int8)__ROR4__(a2, 0x13));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA5F0: // 0x28A9B40 - 98
        {
            // __int64 __fastcall sub_27DA5F0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x400) + 8i64 * (a2 & 0x3A)) + 0x420i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCF80: // 0x28A9B40 - 99
        {
            // __int64 __fastcall sub_27DCF80(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x760);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(a3 + 0x178), 0x1A));
            return result;

            break;
        }
        case 0x27DAFE0: // 0x28A9B40 - 100
        {
            // __int64 __fastcall sub_27DAFE0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2B8) + 8i64 * (a2 & 0xCC)) + 0x598i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2930: // 0x28A9B40 - 101
        {
            // __int64 __fastcall sub_27D2930(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1F8) + 0x5C8i64) + 0x20i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5B60: // 0x28A9B40 - 102
        {
            // __int64 __fastcall sub_27D5B60(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x440) + 8i64 * (__ROR4__(a2, 0x16) & 0x65)) + 0x540i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3210: // 0x28A9B40 - 103
        {
            // __int64 __fastcall sub_27D3210(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (FuckEnc::CacheRead<_DWORD>(a3 + 0x3F8) ^ 0xBDE46783) >> 1;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D77B0: // 0x28A9B40 - 104
        {
            // __int64 __fastcall sub_27D77B0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6D0) + 8i64 * (a2 & 0x3D)) + 0x450i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA1A0: // 0x28A9B40 - 105
        {
            // __int64 __fastcall sub_27DA1A0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x670) + 0x730i64) + 4i64 * (unsigned __int8)__ROR4__(a2, 0x19));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D63D0: // 0x28A9B40 - 106
        {
            // __int64 __fastcall sub_27D63D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~(0xE6C31131 * FuckEnc::CacheRead<_DWORD>(a3 + 0x3F8));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D69B0: // 0x28A9B40 - 107
        {
            // __int64 __fastcall sub_27D69B0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x540) | 0x1Bu);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DDC60: // 0x28A9B40 - 108
        {
            // __int64 __fastcall sub_27DDC60(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(-FuckEnc::CacheRead<_DWORD>(a3 + 0x6B0) - 0x414961B4);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D65F0: // 0x28A9B40 - 109
        {
            // __int64 __fastcall sub_27D65F0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3A8) + 8i64 * (unsigned __int8)__ROR4__(a2, 3)) + 0x698i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA870: // 0x28A9B40 - 110
        {
            // __int64 __fastcall sub_27DA870(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 8) + 0x6F8i64) + 0x308i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DDF50: // 0x28A9B40 - 111
        {
            // __int64 __fastcall sub_27DDF50(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x630);
            *a1 ^= a2 ^ FuckEnc::CacheRead<_DWORD>(result + 0x578);
            return result;

            break;
        }
        case 0x27D3650: // 0x28A9B40 - 112
        {
            // __int64 __fastcall sub_27D3650(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0xC8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (unsigned __int8)((unsigned __int8)FuckEnc::CacheRead<_DWORD>(a3 + 0x6E0) << 6));
            return result;

            break;
        }
        case 0x27DDD20: // 0x28A9B40 - 113
        {
            // __int64 __fastcall sub_27DDD20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x530) + 0x258i64) + 0x3B0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DAC30: // 0x28A9B40 - 114
        {
            // __int64 __fastcall sub_27DAC30(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4A8) + 0x388i64) + 4i64 * (a2 ^ 0x86u));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5C30: // 0x28A9B40 - 115
        {
            // __int64 __fastcall sub_27D5C30(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x4A8);
            *a1 ^= a2 + FuckEnc::CacheRead<_DWORD>(result + 0x540);
            return result;

            break;
        }
        case 0x27D5CE0: // 0x28A9B40 - 116
        {
            // __int64 __fastcall sub_27D5CE0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3A8) + 8i64 * (__ROR4__(a2, 0xA) & 0x7D)) + 0x6E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB9C0: // 0x28A9B40 - 117
        {
            // __int64 __fastcall sub_27DB9C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x338) + 0x468i64) + 0x30i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBD70: // 0x28A9B40 - 118
        {
            // __int64 __fastcall sub_27DBD70(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x4B0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x6C0) & 0xFFFFFFE9;
            return result;

            break;
        }
        case 0x27D9A20: // 0x28A9B40 - 119
        {
            // __int64 __fastcall sub_27D9A20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x360);
            *a1 ^= 0x1F513FF9 * FuckEnc::CacheRead<_DWORD>(result + 0x788);
            return result;

            break;
        }
        case 0x27D8700: // 0x28A9B40 - 120
        {
            // __int64 __fastcall sub_27D8700(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5C8) + 0x718i64) + 0x168i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA0F0: // 0x28A9B40 - 121
        {
            // __int64 __fastcall sub_27DA0F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x298);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x58) - 0x3CFECE64;
            return result;

            break;
        }
        case 0x27D4A00: // 0x28A9B40 - 122
        {
            // __int64 __fastcall sub_27D4A00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x118) + 8i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x2D8) & 0x3F)) + 0x20i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4350: // 0x28A9B40 - 123
        {
            // __int64 __fastcall sub_27D4350(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0xB0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x568) << 0x16;
            return result;

            break;
        }
        case 0x27DBF80: // 0x28A9B40 - 124
        {
            // __int64 __fastcall sub_27DBF80(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4B0) + 0x320i64) + 0x1C0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA330: // 0x28A9B40 - 125
        {
            // __int64 __fastcall sub_27DA330(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x548) + 8i64 * (unsigned __int8)(0xF9 * a2)) + 0x6B0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB610: // 0x28A9B40 - 126
        {
            // __int64 __fastcall sub_27DB610(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(a2 * ~FuckEnc::CacheRead<_DWORD>(a3 + 0x688));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D41F0: // 0x28A9B40 - 127
        {
            // __int64 __fastcall sub_27D41F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~(0xD1FF41AE * FuckEnc::CacheRead<_DWORD>(a3 + 0x48));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4FD0: // 0x28A9B40 - 128
        {
            // __int64 __fastcall sub_27D4FD0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x150) + 0x5F0i64) + 0x120i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD740: // 0x28A9B40 - 129
        {
            // __int64 __fastcall sub_27DD740(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x618);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(a3 + 0x698) & 0xA));
            return result;

            break;
        }
        case 0x27D6260: // 0x28A9B40 - 130
        {
            // __int64 __fastcall sub_27D6260(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x170) + 8i64 * (a2 & 4)) + 0x2E8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5F30: // 0x28A9B40 - 131
        {
            // void __fastcall sub_27D5F30(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x540) ^ a2);

            break;
        }
        case 0x27D90A0: // 0x28A9B40 - 132
        {
            // __int64 __fastcall sub_27D90A0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 ^ *a1 ^ (FuckEnc::CacheRead<_DWORD>(a3 + 0x268) | 0x18u);
            *a1 = result;
            return result;

            break;
        }
        case 0x27D7FC0: // 0x28A9B40 - 133
        {
            // __int64 __fastcall sub_27D7FC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = 0x90F86B5C * FuckEnc::CacheRead<_DWORD>(a3 + 0x1C0);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D56D0: // 0x28A9B40 - 134
        {
            // __int64 __fastcall sub_27D56D0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x5D0);
            *a1 ^= a2 + FuckEnc::CacheRead<_DWORD>(result + 0x698);
            return result;

            break;
        }
        case 0x27D5910: // 0x28A9B40 - 135
        {
            // __int64 __fastcall sub_27D5910(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0xC8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(a3 + 0x308) | 0x13, 0x1E));
            return result;

            break;
        }
        case 0x27D6E70: // 0x28A9B40 - 136
        {
            // __int64 __fastcall sub_27D6E70(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x5B0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x6E0) - 0x547532A;
            return result;

            break;
        }
        case 0x27D9740: // 0x28A9B40 - 137
        {
            // __int64 __fastcall sub_27D9740(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x70E2FE6A * FuckEnc::CacheRead<_DWORD>(a3 + 0x6B0) - 0x52E05847);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DEBC0: // 0x28A9B40 - 138
        {
            // __int64 __fastcall sub_27DEBC0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x690) + 8i64 * ((a2 ^ 0xE) & 0x2E)) + 0x120i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9000: // 0x28A9B40 - 139
        {
            // __int64 __fastcall sub_27D9000(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x6F8);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x688);
            return result;

            break;
        }
        case 0x27D6F20: // 0x28A9B40 - 140
        {
            // __int64 __fastcall sub_27D6F20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x528) + 0x4A8i64) + 0x6E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DAE20: // 0x28A9B40 - 141
        {
            // __int64 __fastcall sub_27DAE20(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x90) + 0x5E8i64) + 4i64 * ((unsigned __int8)(0x7C * a2) & 0xB8));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBBC0: // 0x28A9B40 - 142
        {
            // __int64 __fastcall sub_27DBBC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x528);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x120);
            return result;

            break;
        }
        case 0x27DE6A0: // 0x28A9B40 - 143
        {
            // __int64 __fastcall sub_27DE6A0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6D0) + 8i64 * (a2 & 0xDD)) + 0x48i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE180: // 0x28A9B40 - 144
        {
            // __int64 __fastcall sub_27DE180(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 8) + 0x730i64) + 4i64 * (unsigned __int8)__ROR4__(a2, 0x1C));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD8A0: // 0x28A9B40 - 145
        {
            // __int64 __fastcall sub_27DD8A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x220);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x168) & 0xFFFFFFE0;
            return result;

            break;
        }
        case 0x27D7A20: // 0x28A9B40 - 146
        {
            // __int64 __fastcall sub_27D7A20(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x340);
            *a1 ^= a2 + FuckEnc::CacheRead<_DWORD>(result + 0x58);
            return result;

            break;
        }
        case 0x27DDAC0: // 0x28A9B40 - 147
        {
            // __int64 __fastcall sub_27DDAC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = *a1 ^ (FuckEnc::CacheRead<_DWORD>(a3 + 0x598) >> 0xE) ^ 0xD1FF41A5;
            *a1 = result;
            return result;

            break;
        }
        case 0x27D9F60: // 0x28A9B40 - 148
        {
            // __int64 __fastcall sub_27D9F60(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 8) + 0x298i64) + 0x788i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4880: // 0x28A9B40 - 149
        {
            // __int64 __fastcall sub_27D4880(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(0x2A47AA13 * FuckEnc::CacheRead<_DWORD>(a3 + 0x3B0));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D93D0: // 0x28A9B40 - 150
        {
            // __int64 __fastcall sub_27D93D0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x298);
            *a1 ^= a2 + FuckEnc::CacheRead<_DWORD>(result + 0x3B0);
            return result;

            break;
        }
        case 0x27D8DD0: // 0x28A9B40 - 151
        {
            // __int64 __fastcall sub_27D8DD0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x1F0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x120) | 0xB;
            return result;

            break;
        }
        case 0x27D6A70: // 0x28A9B40 - 152
        {
            // __int64 __fastcall sub_27D6A70(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = *a1 ^ FuckEnc::CacheRead<_DWORD>(a3 + 0x20) ^ 0xC03DA94E;
            *a1 = result;
            return result;

            break;
        }
        case 0x27DB0A0: // 0x28A9B40 - 153
        {
            // __int64 __fastcall sub_27DB0A0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x400) + 8i64 * (unsigned __int8)__ROL4__(a2, 8)) + 0x640i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB800: // 0x28A9B40 - 154
        {
            // __int64 __fastcall sub_27DB800(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xD0) + 0x4D0i64) + 4i64 * ((0xFD * a2) & 9));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3970: // 0x28A9B40 - 155
        {
            // __int64 __fastcall sub_27D3970(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x170) + 8i64 * (unsigned __int8)(0x19 * a2)) + 0x450i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6320: // 0x28A9B40 - 156
        {
            // __int64 __fastcall sub_27D6320(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = 0x3B2A0120 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x120) ^ 0xC3013137);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D30B0: // 0x28A9B40 - 157
        {
            // __int64 __fastcall sub_27D30B0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(a2 * FuckEnc::CacheRead<_DWORD>(a3 + 0x308) * a2);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8200: // 0x28A9B40 - 158
        {
            // __int64 __fastcall sub_27D8200(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x4E8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x2B0) ^ 0x58FD0CAE;
            return result;

            break;
        }
        case 0x27D9960: // 0x28A9B40 - 159
        {
            // __int64 __fastcall sub_27D9960(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x710) + 0x3A0i64) + 0x1C0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7380: // 0x28A9B40 - 160
        {
            // __int64 __fastcall sub_27D7380(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xD0) + 0x110i64) + 0x268i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD100: // 0x28A9B40 - 161
        {
            // __int64 __fastcall sub_27DD100(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x110);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x58) + 0x6AD1FF41;
            return result;

            break;
        }
        case 0x27DC160: // 0x28A9B40 - 162
        {
            // __int64 __fastcall sub_27DC160(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x4A8);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x78);
            return result;

            break;
        }
        case 0x27DDB80: // 0x28A9B40 - 163
        {
            // __int64 __fastcall sub_27DDB80(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3A8) + 8i64 * ((unsigned __int8)__ROR4__(a2, 0xA) & 0xA7)) + 0x2C0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5570: // 0x28A9B40 - 164
        {
            // __int64 __fastcall sub_27D5570(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x780) + 8i64 * (unsigned __int8)__ROR4__(a2, 0x10)) + 0x48i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D54B0: // 0x28A9B40 - 165
        {
            // __int64 __fastcall sub_27D54B0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x588) + 8i64 * (unsigned __int8)(0xE3 * a2)) + 0x58i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3AC0: // 0x28A9B40 - 166
        {
            // __int64 __fastcall sub_27D3AC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x5F0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x178) >> 0x1B;
            return result;

            break;
        }
        case 0x27D7430: // 0x28A9B40 - 167
        {
            // __int64 __fastcall sub_27D7430(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x170) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(a3 + 0x550), 0x1D)) + 0x268i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5330: // 0x28A9B40 - 168
        {
            // __int64 __fastcall sub_27D5330(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (FuckEnc::CacheRead<_DWORD>(a3 + 0x568) >> 0x16) & 0x3F2;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9140: // 0x28A9B40 - 169
        {
            // __int64 __fastcall sub_27D9140(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3A0) + 0x5D0i64) + 0x3B0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D47B0: // 0x28A9B40 - 170
        {
            // __int64 __fastcall sub_27D47B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x710);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x3F8);
            return result;

            break;
        }
        case 0x27D7220: // 0x28A9B40 - 171
        {
            // __int64 __fastcall sub_27D7220(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x298) + 0x630i64) + 0x120i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD450: // 0x28A9B40 - 172
        {
            // __int64 __fastcall sub_27DD450(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x630) + 0x240i64) + 4i64 * (unsigned __int8)(2 * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE810: // 0x28A9B40 - 173
        {
            // __int64 __fastcall sub_27DE810(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x110);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x4F8);
            return result;

            break;
        }
        case 0x27DA790: // 0x28A9B40 - 174
        {
            // void __fastcall sub_27DA790(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x788) * a2);

            break;
        }
        case 0x27D9E90: // 0x28A9B40 - 175
        {
            // __int64 __fastcall sub_27D9E90(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4A8) + 0x5B0i64) + 0x20i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9DD0: // 0x28A9B40 - 176
        {
            // __int64 __fastcall sub_27D9DD0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x778) + 0x4A0i64) + 4i64 * (a2 & 0x4C));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA260: // 0x28A9B40 - 177
        {
            // __int64 __fastcall sub_27DA260(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheReadPlural<_QWORD>(a3 + 0x2F8) + 0x2B0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCBB0: // 0x28A9B40 - 178
        {
            // __int64 __fastcall sub_27DCBB0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x340) + 0xD0i64) + 0x550i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8420: // 0x28A9B40 - 179
        {
            // __int64 __fastcall sub_27D8420(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5C8) + 0x210i64) + 4i64 * (__ROR4__(a2, 0x1F) & 6));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4150: // 0x28A9B40 - 180
        {
            // __int64 __fastcall sub_27D4150(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x670);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x48);
            return result;

            break;
        }
        case 0x27D8E90: // 0x28A9B40 - 181
        {
            // __int64 __fastcall sub_27D8E90(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3E0) + 0x388i64) + 4i64 * (unsigned __int8)(0x57 * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D46E0: // 0x28A9B40 - 182
        {
            // __int64 __fastcall sub_27D46E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x5C8);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x430);
            return result;

            break;
        }
        case 0x27DE490: // 0x28A9B40 - 183
        {
            // __int64 __fastcall sub_27DE490(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x778);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x78) & 0xFFFFFFF6;
            return result;

            break;
        }
        case 0x27D7160: // 0x28A9B40 - 184
        {
            // __int64 __fastcall sub_27D7160(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)((a2 + FuckEnc::CacheRead<_DWORD>(a3 + 0x6C0)) << 0x1C);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D97F0: // 0x28A9B40 - 185
        {
            // __int64 __fastcall sub_27D97F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 8) + 0x1D8i64) + 0x430i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCAD0: // 0x28A9B40 - 186
        {
            // __int64 __fastcall sub_27DCAD0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x740);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x3F8) - 0x3CFE76BC;
            return result;

            break;
        }
        case 0x27D3C30: // 0x28A9B40 - 187
        {
            // __int64 __fastcall sub_27D3C30(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (0x28821793 * FuckEnc::CacheRead<_DWORD>(a3 + 0x450)) | 0x17u;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBAC0: // 0x28A9B40 - 188
        {
            // __int64 __fastcall sub_27DBAC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x1D8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x1C0) & 0xFFFFFFE6;
            return result;

            break;
        }
        case 0x27D6190: // 0x28A9B40 - 189
        {
            // __int64 __fastcall sub_27D6190(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x218) + 0x740i64) + 0x6B0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D75B0: // 0x28A9B40 - 190
        {
            // __int64 __fastcall sub_27D75B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (FuckEnc::CacheRead<_DWORD>(a3 + 0x598) >> 0x1B) & 0xC;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DDA00: // 0x28A9B40 - 191
        {
            // __int64 __fastcall sub_27DDA00(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xB0) + 0x4A0i64) + 4i64 * (a2 & 0xDC));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA530: // 0x28A9B40 - 192
        {
            // __int64 __fastcall sub_27DA530(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x6EB7FB36 * FuckEnc::CacheRead<_DWORD>(a3 + 0x2C0) - 0x645CFD01);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D66B0: // 0x28A9B40 - 193
        {
            // __int64 __fastcall sub_27D66B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x258) + 0x220i64) + 0x4F8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4F00: // 0x28A9B40 - 194
        {
            // __int64 __fastcall sub_27D4F00(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x440) + 8i64 * (a2 & 0xCF)) + 0x598i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE000: // 0x28A9B40 - 195
        {
            // __int64 __fastcall sub_27DE000(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4B0) + 0x710i64) + 0x168i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D87C0: // 0x28A9B40 - 196
        {
            // __int64 __fastcall sub_27D87C0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x68) + 8i64 * (unsigned __int8)__ROR4__(a2, 0xB)) + 0x6B0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC8E0: // 0x28A9B40 - 197
        {
            // __int64 __fastcall sub_27DC8E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4A8) + 0x4B0i64) + 0x6B0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7500: // 0x28A9B40 - 198
        {
            // __int64 __fastcall sub_27D7500(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xB0) + 0xD0i64) + 0x20i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB6F0: // 0x28A9B40 - 199
        {
            // __int64 __fastcall sub_27DB6F0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2B8) + 8i64 * (a2 & 0xF1)) + 0x58i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6FE0: // 0x28A9B40 - 200
        {
            // __int64 __fastcall sub_27D6FE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3A0) + 0x3A0i64) + 0x450i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D50B0: // 0x28A9B40 - 201
        {
            // __int64 __fastcall sub_27D50B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x778) + 0x528i64) + 0x1C0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8070: // 0x28A9B40 - 202
        {
            // __int64 __fastcall sub_27D8070(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 ^ *a1 ^ FuckEnc::CacheRead<_DWORD>(a3 + 0x120) ^ 0x81B74E9u;
            *a1 = result;
            return result;

            break;
        }
        case 0x27D5FE0: // 0x28A9B40 - 203
        {
            // __int64 __fastcall sub_27D5FE0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x3A0);
            *a1 ^= a2 ^ FuckEnc::CacheRead<_DWORD>(result + 0x168);
            return result;

            break;
        }
        case 0x27D53F0: // 0x28A9B40 - 204
        {
            // __int64 __fastcall sub_27D53F0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x530) + 0x240i64) + 4i64 * (a2 & 0xB4));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3700: // 0x28A9B40 - 205
        {
            // __int64 __fastcall sub_27D3700(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x528) + 0x618i64) + 4i64 * (unsigned __int8)__ROL4__(a2, 0x10));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8B90: // 0x28A9B40 - 206
        {
            // __int64 __fastcall sub_27D8B90(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x118) + 8i64 * ((5 * a2) & 0xD)) + 0x420i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC400: // 0x28A9B40 - 207
        {
            // __int64 __fastcall sub_27DC400(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3A8) + 8i64 * (unsigned __int8)(0x9C * FuckEnc::CacheRead<_BYTE>(a3 + 0x58))) + 0x688i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9C60: // 0x28A9B40 - 208
        {
            // __int64 __fastcall sub_27D9C60(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x388);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (unsigned __int8)(0xD4 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(a3 + 0x718) + 0x688i64)));
            return result;

            break;
        }
        case 0x27D6810: // 0x28A9B40 - 209
        {
            // __int64 __fastcall sub_27D6810(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4F0) + 8i64 * (a2 & 0x46)) + 0x550i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7650: // 0x28A9B40 - 210
        {
            // __int64 __fastcall sub_27D7650(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6F8) + 0x530i64) + 0x450i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6480: // 0x28A9B40 - 211
        {
            // __int64 __fastcall sub_27D6480(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x568) ^ 0xF3752B22);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8940: // 0x28A9B40 - 212
        {
            // __int64 __fastcall sub_27D8940(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x638) + 8i64 * (a2 & 0x3A)) + 0x688i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9320: // 0x28A9B40 - 213
        {
            // __int64 __fastcall sub_27D9320(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(FuckEnc::CacheRead<_DWORD>(a3 + 0x550) + 0x526C966C);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8AD0: // 0x28A9B40 - 214
        {
            // __int64 __fastcall sub_27D8AD0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4E8) + 0x730i64) + 4i64 * (a2 ^ 0x38u));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6B00: // 0x28A9B40 - 215
        {
            // __int64 __fastcall sub_27D6B00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = 0x4453D0FF * (FuckEnc::CacheRead<_DWORD>(a3 + 0x268) | 0x1Eu);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE970: // 0x28A9B40 - 216
        {
            // __int64 __fastcall sub_27DE970(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x260) + 8i64 * (unsigned __int8)__ROL4__(a2, 0x14)) + 0x598i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB340: // 0x28A9B40 - 217
        {
            // __int64 __fastcall sub_27DB340(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1B0) + 8i64 * (unsigned __int8)__ROL4__(a2, 7)) + 0x3F8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2E70: // 0x28A9B40 - 218
        {
            // __int64 __fastcall sub_27D2E70(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x48) | 8u);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8380: // 0x28A9B40 - 219
        {
            // __int64 __fastcall sub_27D8380(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x488) + 0x4D0i64) + 4i64 * (unsigned __int8)__ROR4__(a2, 0x1B));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD670: // 0x28A9B40 - 220
        {
            // __int64 __fastcall sub_27DD670(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x170) + 8i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x2B0) & 0xC8)) + 0x120i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5190: // 0x28A9B40 - 221
        {
            // __int64 __fastcall sub_27D5190(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x240);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (__ROL4__(FuckEnc::CacheRead<_DWORD>(a3 + 0x268), 7) & 0x72));
            return result;

            break;
        }
        case 0x27DC230: // 0x28A9B40 - 222
        {
            // __int64 __fastcall sub_27DC230(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x260) + 8i64 * ((unsigned __int8)__ROL4__(a2, 0x1C) & 0xC6)) + 0x3F8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7AF0: // 0x28A9B40 - 223
        {
            // __int64 __fastcall sub_27D7AF0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(FuckEnc::CacheRead<_DWORD>(a3 + 0x6C0) >> 2);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3890: // 0x28A9B40 - 224
        {
            // __int64 __fastcall sub_27D3890(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x480);
            *a1 ^= a2 + FuckEnc::CacheRead<_DWORD>(result + 0x640);
            return result;

            break;
        }
        case 0x27DE2E0: // 0x28A9B40 - 225
        {
            // __int64 __fastcall sub_27DE2E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x150);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x20);
            return result;

            break;
        }
        case 0x27DD1B0: // 0x28A9B40 - 226
        {
            // __int64 __fastcall sub_27DD1B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~(0xC3018944 * FuckEnc::CacheRead<_DWORD>(a3 + 0x2B0));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7D00: // 0x28A9B40 - 227
        {
            // __int64 __fastcall sub_27D7D00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x338) + 0x150i64) + 0x48i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC070: // 0x28A9B40 - 228
        {
            // void __fastcall sub_27DC070(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= FuckEnc::CacheRead<_DWORD>(a3 + 0x48) + a2 - 0x3C2F00B1;

            break;
        }
        case 0x27D4D90: // 0x28A9B40 - 229
        {
            // __int64 __fastcall sub_27D4D90(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5C8) + 0x340i64) + 0x1C0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D34F0: // 0x28A9B40 - 230
        {
            // void __fastcall sub_27D34F0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= (unsigned int)(FuckEnc::CacheRead<_DWORD>(a3 + 0x168) * a2) >> 0xE;

            break;
        }
        case 0x27D9460: // 0x28A9B40 - 231
        {
            // __int64 __fastcall sub_27D9460(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5C8) + 0x678i64) + 0x3F8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2F10: // 0x28A9B40 - 232
        {
            // __int64 __fastcall sub_27D2F10(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (FuckEnc::CacheRead<_DWORD>(a3 + 0x190) | 0x980000u) >> 0x13;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD5C0: // 0x28A9B40 - 233
        {
            // __int64 __fastcall sub_27DD5C0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x718) + 0x730i64) + 4i64 * (a2 & 0x15));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5AB0: // 0x28A9B40 - 234
        {
            // __int64 __fastcall sub_27D5AB0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x260) + 8i64 * ((unsigned __int8)__ROL4__(a2, 0x10) & 0xF6)) + 0x698i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D98B0: // 0x28A9B40 - 235
        {
            // __int64 __fastcall sub_27D98B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x320) + 0x90i64) + 0x688i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3DA0: // 0x28A9B40 - 236
        {
            // __int64 __fastcall sub_27D3DA0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x260) + 8i64 * ((0xF7 * a2) & 0x12)) + 0x30i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8590: // 0x28A9B40 - 237
        {
            // __int64 __fastcall sub_27D8590(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x3E0);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x578);
            return result;

            break;
        }
        case 0x27DC310: // 0x28A9B40 - 238
        {
            // __int64 __fastcall sub_27DC310(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 ^ *a1 ^ (FuckEnc::CacheRead<_DWORD>(a3 + 0x2C0) | 0x13u);
            *a1 = result;
            return result;

            break;
        }
        case 0x27DD390: // 0x28A9B40 - 239
        {
            // __int64 __fastcall sub_27DD390(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(FuckEnc::CacheRead<_DWORD>(a3 + 0x640) >> 1);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D68D0: // 0x28A9B40 - 240
        {
            // __int64 __fastcall sub_27D68D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x3E8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x58) ^ 0x9D48B38C;
            return result;

            break;
        }
        case 0x27D96A0: // 0x28A9B40 - 241
        {
            // __int64 __fastcall sub_27D96A0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(a2 + FuckEnc::CacheRead<_DWORD>(a3 + 0x450));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7B90: // 0x28A9B40 - 242
        {
            // __int64 __fastcall sub_27D7B90(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x740) + 0x1F8i64) + 0x4F8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5260: // 0x28A9B40 - 243
        {
            // __int64 __fastcall sub_27D5260(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3A0) + 0x718i64) + 0x698i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC5F0: // 0x28A9B40 - 244
        {
            // __int64 __fastcall sub_27DC5F0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x338) + 0x4D0i64) + 4i64 * (unsigned __int8)(0xC3 * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC500: // 0x28A9B40 - 245
        {
            // __int64 __fastcall sub_27DC500(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x298) + 0x110i64) + 0x2C0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA020: // 0x28A9B40 - 246
        {
            // __int64 __fastcall sub_27DA020(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x4B0);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x2E8);
            return result;

            break;
        }
        case 0x27DE530: // 0x28A9B40 - 247
        {
            // __int64 __fastcall sub_27DE530(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x480) + 0x4D0i64) + 4i64 * (unsigned __int8)(0x67 * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7920: // 0x28A9B40 - 248
        {
            // __int64 __fastcall sub_27D7920(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x4A8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x308) ^ 0xAD875AAE;
            return result;

            break;
        }
        case 0x27D5630: // 0x28A9B40 - 249
        {
            // __int64 __fastcall sub_27D5630(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~(0x963109E1 * FuckEnc::CacheRead<_DWORD>(a3 + 0x698));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7870: // 0x28A9B40 - 250
        {
            // __int64 __fastcall sub_27D7870(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(a2 + (FuckEnc::CacheRead<_DWORD>(a3 + 0x698) << 0x19));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCEA0: // 0x28A9B40 - 251
        {
            // __int64 __fastcall sub_27DCEA0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x1F8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x430) ^ 0xD0EA8F;
            return result;

            break;
        }
        case 0x27DDDE0: // 0x28A9B40 - 252
        {
            // __int64 __fastcall sub_27DDDE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1F8) + 0x718i64) + 0x168i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4E40: // 0x28A9B40 - 253
        {
            // __int64 __fastcall sub_27D4E40(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x1D8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x4F8) | 1;
            return result;

            break;
        }
        case 0x27D32C0: // 0x28A9B40 - 254
        {
            // __int64 __fastcall sub_27D32C0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 1200) + 1560i64) + 4i64 * (a2 & 0x4C));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DAA50: // 0x28A9B40 - 255
        {
            // __int64 __fastcall sub_27DAA50(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 1848);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 1760);
            return result;

            break;
        }
        // Main Function 0x28A9B40 End

        // Main Function 0x28AB2F0 Start
        case 0x27DDAE0: // 0x28AB2F0 - 0
        {
            // __int64 __fastcall sub_27DDAE0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x3A8) ^ 0xE8699F9E);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D69C0: // 0x28AB2F0 - 1
        {
            // __int64 __fastcall sub_27D69C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x628) + 0x1B8i64) + 0x118i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA890: // 0x28AB2F0 - 2
        {
            // __int64 __fastcall sub_27DA890(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x770);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x5A8) & 0xFFFFFFEC;
            return result;

            break;
        }
        case 0x27D7DC0: // 0x28AB2F0 - 3
        {
            // __int64 __fastcall sub_27D7DC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x520);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x460) - 0x3CFE76BC;
            return result;

            break;
        }
        case 0x27D8D40: // 0x28AB2F0 - 4
        {
            // __int64 __fastcall sub_27D8D40(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x1D8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x5E0) >> 0xB;
            return result;

            break;
        }
        case 0x27DBCB0: // 0x28AB2F0 - 5
        {
            // __int64 __fastcall sub_27DBCB0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_DWORD>(a3 + 0x1C0) & 0xFFFFFFE0 | 0x1A;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5E90: // 0x28AB2F0 - 6
        {
            // __int64 __fastcall sub_27D5E90(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x540) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(a3 + 0x1A8), 0xD)) + 0x260i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE990: // 0x28AB2F0 - 7
        {
            // __int64 __fastcall sub_27DE990(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x788) + 8i64 * ((unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(a3 + 0x718), 0x18) & 0x83)) + 0x488i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DEA60: // 0x28AB2F0 - 8
        {
            // __int64 __fastcall sub_27DEA60(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x578) + 0x610i64) + 4i64 * ((a2 ^ 0xD7) & 0xA8));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC250: // 0x28AB2F0 - 9
        {
            // __int64 __fastcall sub_27DC250(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6F8) + 0x628i64) + 0x1F8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8440: // 0x28AB2F0 - 10
        {
            // __int64 __fastcall sub_27D8440(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3F0) + 0x6F8i64) + 0x6F0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2A20: // 0x28AB2F0 - 11
        {
            // __int64 __fastcall sub_27D2A20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(-FuckEnc::CacheRead<_DWORD>(a3 + 0x4F0) - 0x2B2011BA);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD970: // 0x28AB2F0 - 12
        {
            // __int64 __fastcall sub_27DD970(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6F8) + 0x758i64) + 4i64 * (unsigned __int8)(0xA9 * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2950: // 0x28AB2F0 - 13
        {
            // __int64 __fastcall sub_27D2950(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x128) + 0x250i64) + 0x488i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6A80: // 0x28AB2F0 - 14
        {
            // __int64 __fastcall sub_27D6A80(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x20) + 8i64 * ((a2 ^ 0xEF) & 0x98)) + 0x260i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8C70: // 0x28AB2F0 - 15
        {
            // __int64 __fastcall sub_27D8C70(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3F0) + 0x5C8i64) + 4i64 * (a2 & 0x28));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB620: // 0x28AB2F0 - 16
        {
            // __int64 __fastcall sub_27DB620(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x108) + 0x578i64) + 0x1F8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DDBA0: // 0x28AB2F0 - 17
        {
            // __int64 __fastcall sub_27DDBA0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x290) + 0x1D8i64) + 0x2F0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8500: // 0x28AB2F0 - 18
        {
            // __int64 __fastcall sub_27D8500(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4E0) + 0x4C8i64) + 4i64 * (a2 & 0xA8));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D56F0: // 0x28AB2F0 - 19
        {
            // __int64 __fastcall sub_27D56F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x448);
            *a1 ^= 0xC3018944 * FuckEnc::CacheRead<_DWORD>(result + 0x78);
            return result;

            break;
        }
        case 0x27D9DF0: // 0x28AB2F0 - 20
        {
            // __int64 __fastcall sub_27D9DF0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x520);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x718) - 0x6107C078;
            return result;

            break;
        }
        case 0x27DE0E0: // 0x28AB2F0 - 21
        {
            // __int64 __fastcall sub_27DE0E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2D0) + 0x18i64) + 0x208i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5350: // 0x28AB2F0 - 22
        {
            // __int64 __fastcall sub_27D5350(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x188) + 0x578i64) + 0x260i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DAF10: // 0x28AB2F0 - 23
        {
            // __int64 __fastcall sub_27DAF10(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = 0xDF68C000 * FuckEnc::CacheRead<_DWORD>(a3 + 0x498);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DDD40: // 0x28AB2F0 - 24
        {
            // __int64 __fastcall sub_27DDD40(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x398);
            *a1 ^= 0xE18E8856 * FuckEnc::CacheRead<_DWORD>(result + 0xB0);
            return result;

            break;
        }
        case 0x27DDA20: // 0x28AB2F0 - 25
        {
            // __int64 __fastcall sub_27DDA20(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3B0) + 8i64 * (unsigned __int8)__ROR4__(a2, 3)) + 0x318i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7240: // 0x28AB2F0 - 26
        {
            // __int64 __fastcall sub_27D7240(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x500) + 0x610i64) + 4i64 * ((0xCE * a2) & 0x4C));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD6A0: // 0x28AB2F0 - 27
        {
            // __int64 __fastcall sub_27DD6A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2D0) + 0x538i64) + 0x598i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6550: // 0x28AB2F0 - 28
        {
            // __int64 __fastcall sub_27D6550(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x680);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x4F0) * a2;
            return result;

            break;
        }
        case 0x27D32E0: // 0x28AB2F0 - 29
        {
            // __int64 __fastcall sub_27D32E0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x520) + 0xF0i64) + 4i64 * (unsigned __int8)(0x5C * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2D10: // 0x28AB2F0 - 30
        {
            // __int64 __fastcall sub_27D2D10(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4F8) + 8i64 * (a2 & 0x34)) + 0xC0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC080: // 0x28AB2F0 - 31
        {
            // __int64 __fastcall sub_27DC080(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xC8) + 8i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x6C8) & 0xBB)) + 0x638i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD810: // 0x28AB2F0 - 32
        {
            // __int64 __fastcall sub_27DD810(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x788) + 8i64 * (unsigned __int8)(0x11 * a2)) + 0x1C0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4370: // 0x28AB2F0 - 33
        {
            // __int64 __fastcall sub_27D4370(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x1D8);
            *a1 ^= a2 ^ FuckEnc::CacheRead<_DWORD>(result + 0x78);
            return result;

            break;
        }
        case 0x27D4160: // 0x28AB2F0 - 34
        {
            // __int64 __fastcall sub_27D4160(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x250) + 0x6A8i64) + 0x88i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB9E0: // 0x28AB2F0 - 35
        {
            // __int64 __fastcall sub_27DB9E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(FuckEnc::CacheRead<_DWORD>(a3 + 0x1D0) - 0x19FB489C) >> 0x1C;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8BB0: // 0x28AB2F0 - 36
        {
            // __int64 __fastcall sub_27D8BB0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x358) + 8i64 * (unsigned __int8)(0x6D * a2)) + 0x118i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4700: // 0x28AB2F0 - 37
        {
            // __int64 __fastcall sub_27D4700(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6C0) + 0x758i64) + 4i64 * (unsigned __int8)__ROR4__(a2, 0x11));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7E80: // 0x28AB2F0 - 38
        {
            // __int64 __fastcall sub_27D7E80(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2E8) + 0x6D8i64) + 0x5E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9540: // 0x28AB2F0 - 39
        {
            // __int64 __fastcall sub_27D9540(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x20 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x728) + 0x30131B4));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6830: // 0x28AB2F0 - 40
        {
            // __int64 __fastcall sub_27D6830(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x500) + 0x188i64) + 0x5E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9260: // 0x28AB2F0 - 41
        {
            // __int64 __fastcall sub_27D9260(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x250) + 0x1A0i64) + 0x1A8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6C80: // 0x28AB2F0 - 42
        {
            // __int64 __fastcall sub_27D6C80(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (0xC3018944 * FuckEnc::CacheRead<_DWORD>(a3 + 0x350)) >> 7;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9020: // 0x28AB2F0 - 43
        {
            // __int64 __fastcall sub_27D9020(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x488) & 0xFFFFFFFB);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D73A0: // 0x28AB2F0 - 44
        {
            // __int64 __fastcall sub_27D73A0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x358) + 8i64 * (unsigned __int8)__ROL4__(a2, 0x16)) + 0x318i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9F80: // 0x28AB2F0 - 45
        {
            // __int64 __fastcall sub_27D9F80(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheReadPlural<_QWORD>(a3 + 0x680) + 0x718i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE3D0: // 0x28AB2F0 - 46
        {
            // __int64 __fastcall sub_27DE3D0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x578) + 0x610i64) + 4i64 * (a2 ^ 0xC8u));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2F30: // 0x28AB2F0 - 47
        {
            // __int64 __fastcall sub_27D2F30(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x628) + 0xF0i64) + 4i64 * (unsigned __int8)(0x5C * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6000: // 0x28AB2F0 - 48
        {
            // __int64 __fastcall sub_27D6000(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x128) + 0x590i64) + 0x1F8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7B00: // 0x28AB2F0 - 49
        {
            // __int64 __fastcall sub_27D7B00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3B8) + 0x320i64) + 0x6E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE8D0: // 0x28AB2F0 - 50
        {
            // __int64 __fastcall sub_27DE8D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6A8) + 0x108i64) + 0x450i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3AE0: // 0x28AB2F0 - 51
        {
            // __int64 __fastcall sub_27D3AE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1D8) + 0x430i64) + 0x5A8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA490: // 0x28AB2F0 - 52
        {
            // __int64 __fastcall sub_27DA490(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x688) + 8i64 * ((a2 ^ 0xED) & 0x72)) + 0x1F8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D93F0: // 0x28AB2F0 - 53
        {
            // __int64 __fastcall sub_27D93F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~FuckEnc::CacheRead<_DWORD>(a3 + 0x208) >> 6;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6E90: // 0x28AB2F0 - 54
        {
            // __int64 __fastcall sub_27D6E90(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x18);
            *a1 ^= 0xD1FF418A * FuckEnc::CacheRead<_DWORD>(result + 0x6F0);
            return result;

            break;
        }
        case 0x27D70A0: // 0x28AB2F0 - 55
        {
            // __int64 __fastcall sub_27D70A0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1D8) + 0x4C8i64) + 4i64 * (unsigned __int8)__ROR4__(a2, 9));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB170: // 0x28AB2F0 - 56
        {
            // __int64 __fastcall sub_27DB170(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x538) + 0x418i64) + 0x5D0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6610: // 0x28AB2F0 - 57
        {
            // __int64 __fastcall sub_27D6610(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x210) + 8i64 * ((a2 ^ 0xDF) & 0x6C)) + 0x438i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC420: // 0x28AB2F0 - 58
        {
            // __int64 __fastcall sub_27DC420(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x628) + 0x300i64) + 0x88i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4DB0: // 0x28AB2F0 - 59
        {
            // __int64 __fastcall sub_27D4DB0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x148) + 0x520i64) + 0x260i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6280: // 0x28AB2F0 - 60
        {
            // __int64 __fastcall sub_27D6280(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x680);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x6E0);
            return result;

            break;
        }
        case 0x27D51B0: // 0x28AB2F0 - 61
        {
            // __int64 __fastcall sub_27D51B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x790) + 0x70i64) + 0x2F0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA6C0: // 0x28AB2F0 - 62
        {
            // __int64 __fastcall sub_27DA6C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6D8) + 0x2D0i64) + 0x6C8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8220: // 0x28AB2F0 - 63
        {
            // __int64 __fastcall sub_27D8220(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x538);
            *a1 ^= a2 ^ FuckEnc::CacheRead<_DWORD>(result + 0x78);
            return result;

            break;
        }
        case 0x27D44D0: // 0x28AB2F0 - 64
        {
            // __int64 __fastcall sub_27D44D0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x540) + 8i64 * (a2 & 0xF9)) + 0x638i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCFA0: // 0x28AB2F0 - 65
        {
            // __int64 __fastcall sub_27DCFA0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x160);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x5E0);
            return result;

            break;
        }
        case 0x27D33B0: // 0x28AB2F0 - 66
        {
            // __int64 __fastcall sub_27D33B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x18) + 0x6F8i64) + 0x638i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD120: // 0x28AB2F0 - 67
        {
            // __int64 __fastcall sub_27DD120(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = 0x869ACFE0 * FuckEnc::CacheRead<_DWORD>(a3 + 0x6E0);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCCC0: // 0x28AB2F0 - 68
        {
            // __int64 __fastcall sub_27DCCC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x418) + 0x2A8i64) + 0x118i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8090: // 0x28AB2F0 - 69
        {
            // __int64 __fastcall sub_27D8090(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x2D0);
            *a1 ^= a2 + FuckEnc::CacheRead<_DWORD>(result + 0x3A8);
            return result;

            break;
        }
        case 0x27D7BB0: // 0x28AB2F0 - 70
        {
            // __int64 __fastcall sub_27D7BB0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 ^ *a1 ^ (unsigned int)(a2 + FuckEnc::CacheRead<_DWORD>(a3 + 0x208));
            *a1 = result;
            return result;

            break;
        }
        case 0x27DB000: // 0x28AB2F0 - 71
        {
            // void __fastcall sub_27DB000(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x598) ^ a2);

            break;
        }
        case 0x27DDC80: // 0x28AB2F0 - 72
        {
            // __int64 __fastcall sub_27DDC80(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x168) + 8i64 * (a2 & 0x23)) + 0x88i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD3A0: // 0x28AB2F0 - 73
        {
            // __int64 __fastcall sub_27DD3A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x480);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(a3 + 0x1C0) & 0x30));
            return result;

            break;
        }
        case 0x27DCAF0: // 0x28AB2F0 - 74
        {
            // __int64 __fastcall sub_27DCAF0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6F8) + 0x108i64) + 0x78i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB440: // 0x28AB2F0 - 75
        {
            // __int64 __fastcall sub_27DB440(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5E8) + 8i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x718) & 0xB7)) + 0x438i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D54D0: // 0x28AB2F0 - 76
        {
            // __int64 __fastcall sub_27D54D0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x688) + 8i64 * ((a2 ^ 1) & 0xD)) + 0x6F0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2AE0: // 0x28AB2F0 - 77
        {
            // __int64 __fastcall sub_27D2AE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4E0) + 0x790i64) + 0x3A8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6780: // 0x28AB2F0 - 78
        {
            // __int64 __fastcall sub_27D6780(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x18);
            *a1 ^= a2 ^ FuckEnc::CacheRead<_DWORD>(result + 0x450);
            return result;

            break;
        }
        case 0x27DE770: // 0x28AB2F0 - 79
        {
            // __int64 __fastcall sub_27DE770(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x468) + 0x6C0i64) + 0x260i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3A20: // 0x28AB2F0 - 80
        {
            // __int64 __fastcall sub_27D3A20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x648) + 0x160i64) + 0x728i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC610: // 0x28AB2F0 - 81
        {
            // __int64 __fastcall sub_27DC610(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3B0) + 8i64 * (a2 & 0xE)) + 0x350i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D64A0: // 0x28AB2F0 - 82
        {
            // __int64 __fastcall sub_27D64A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xC8) + 8i64 * ((0xF2 * FuckEnc::CacheRead<_BYTE>(a3 + 0x118)) & 0x10)) + 0x6E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4E60: // 0x28AB2F0 - 83
        {
            // __int64 __fastcall sub_27D4E60(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x70) + 0x148i64) + 0x2F0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8A30: // 0x28AB2F0 - 84
        {
            // __int64 __fastcall sub_27D8A30(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x2E8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x208) - (_DWORD)0x32F00B3;
            return result;

            break;
        }
        case 0x27DD530: // 0x28AB2F0 - 85
        {
            // __int64 __fastcall sub_27DD530(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x120) + 8i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x438) & 0xE8)) + 0x728i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9760: // 0x28AB2F0 - 86
        {
            // __int64 __fastcall sub_27D9760(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x128) + 0x5B0i64) + 0x260i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D37F0: // 0x28AB2F0 - 87
        {
            // __int64 __fastcall sub_27D37F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x520);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x308) ^ 0x91A4516E;
            return result;

            break;
        }
        case 0x27D5590: // 0x28AB2F0 - 88
        {
            // __int64 __fastcall sub_27D5590(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3B8) + 0x538i64) + 0x3A8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3E70: // 0x28AB2F0 - 89
        {
            // __int64 __fastcall sub_27D3E70(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~(FuckEnc::CacheRead<_DWORD>(a3 + 0xB0) ^ 0xC9723F20);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9EB0: // 0x28AB2F0 - 90
        {
            // __int64 __fastcall sub_27D9EB0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x338);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x108) + 0x438i64) ^ 0xA1u));
            return result;

            break;
        }
        case 0x27D3500: // 0x28AB2F0 - 91
        {
            // __int64 __fastcall sub_27D3500(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3) + 0x4C8i64) + 4i64 * (a2 & 0xAB));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D85B0: // 0x28AB2F0 - 92
        {
            // __int64 __fastcall sub_27D85B0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2B0) + 8i64 * (a2 & 0x9A)) + 0x118i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5B80: // 0x28AB2F0 - 93
        {
            // __int64 __fastcall sub_27D5B80(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x758);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x598) & 0x42));
            return result;

            break;
        }
        case 0x27DDE00: // 0x28AB2F0 - 94
        {
            // __int64 __fastcall sub_27DDE00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x648) + 0x40i64) + 0x498i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3990: // 0x28AB2F0 - 95
        {
            // __int64 __fastcall sub_27D3990(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x210) + 8i64 * ((unsigned __int8)__ROL4__(a2, 0x11) & 0xCE)) + 0x498i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7940: // 0x28AB2F0 - 96
        {
            // __int64 __fastcall sub_27D7940(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x238);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x148) + 0x6F0i64) ^ 0xFBu));
            return result;

            break;
        }
        case 0x27D6B20: // 0x28AB2F0 - 97
        {
            // __int64 __fastcall sub_27D6B20(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x3B8);
            *a1 ^= a2 ^ FuckEnc::CacheRead<_DWORD>(result + 0x718);
            return result;

            break;
        }
        case 0x27D3FE0: // 0x28AB2F0 - 98
        {
            // __int64 __fastcall sub_27D3FE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (FuckEnc::CacheRead<_DWORD>(a3 + 0x5E0) ^ 0x78Fu) << 0x13;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D98D0: // 0x28AB2F0 - 99
        {
            // __int64 __fastcall sub_27D98D0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3B0) + 8i64 * ((a2 ^ 0x10) & 0xD0)) + 0x350i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9BC0: // 0x28AB2F0 - 100
        {
            // __int64 __fastcall sub_27D9BC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x680) + 0x290i64) + 0x350i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBBE0: // 0x28AB2F0 - 101
        {
            // __int64 __fastcall sub_27DBBE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x6F8);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x60);
            return result;

            break;
        }
        case 0x27D35B0: // 0x28AB2F0 - 102
        {
            // __int64 __fastcall sub_27D35B0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 + (FuckEnc::CacheRead<_DWORD>(a3 + 0x498) ^ 0xEDC30131);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3720: // 0x28AB2F0 - 103
        {
            // __int64 __fastcall sub_27D3720(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x560);
            *a1 ^= 0xACDB68C6 * FuckEnc::CacheRead<_DWORD>(result + 0xC0);
            return result;

            break;
        }
        case 0x27D2E80: // 0x28AB2F0 - 104
        {
            // __int64 __fastcall sub_27D2E80(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x35000000 * FuckEnc::CacheRead<_DWORD>(a3 + 0x88));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8EB0: // 0x28AB2F0 - 105
        {
            // __int64 __fastcall sub_27D8EB0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheReadPlural<_QWORD>(a3 + 0x70) + 0x488i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4B80: // 0x28AB2F0 - 106
        {
            // __int64 __fastcall sub_27D4B80(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x120) + 8i64 * (unsigned __int8)__ROR4__(a2, 2)) + 0x460i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA350: // 0x28AB2F0 - 107
        {
            // void __fastcall sub_27DA350(_DWORD *a1, unsigned int a2, __int64 a3)

            a2 = (unsigned int)a2;
            a3 = (__int64)a3;

            *a1 ^= (FuckEnc::CacheRead<_DWORD>(a3 + 0x2F0) ^ a2) >> 6;

            break;
        }
        case 0x27D82E0: // 0x28AB2F0 - 108
        {
            // __int64 __fastcall sub_27D82E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3B8) + 0x628i64) + 0x350i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7170: // 0x28AB2F0 - 109
        {
            // __int64 __fastcall sub_27D7170(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x270) + 0x770i64) + 0x6F0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7730: // 0x28AB2F0 - 110
        {
            // __int64 __fastcall sub_27D7730(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x680) + 0x238i64) + 4i64 * (unsigned __int8)(0x6E * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D61B0: // 0x28AB2F0 - 111
        {
            // __int64 __fastcall sub_27D61B0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x688) + 8i64 * (unsigned __int8)(0x7C * a2)) + 0x580i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4FF0: // 0x28AB2F0 - 112
        {
            // __int64 __fastcall sub_27D4FF0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x770) + 0x648i64) + 0x1A8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8150: // 0x28AB2F0 - 113
        {
            // __int64 __fastcall sub_27D8150(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x2E00BEB6 * FuckEnc::CacheRead<_DWORD>(a3 + 0x438));
            *a1 ^= 0xB9E29F58 - result;
            return result;

            break;
        }
        case 0x27DD2F0: // 0x28AB2F0 - 114
        {
            // __int64 __fastcall sub_27DD2F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheReadPlural<_QWORD>(a3 + 0x3F0) + 0x1F8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC700: // 0x28AB2F0 - 115
        {
            // __int64 __fastcall sub_27DC700(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (FuckEnc::CacheRead<_DWORD>(a3 + 0x78) ^ 0x78AC0FE1u) - 0x4C3CEECF;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA280: // 0x28AB2F0 - 116
        {
            // __int64 __fastcall sub_27DA280(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x358) + 8i64 * (unsigned __int8)__ROR4__(a2, 7)) + 0x340i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4C50: // 0x28AB2F0 - 117
        {
            // __int64 __fastcall sub_27D4C50(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xC8) + 8i64 * (unsigned __int8)__ROL4__(a2, 0x1A)) + 0x460i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD070: // 0x28AB2F0 - 118
        {
            // __int64 __fastcall sub_27DD070(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x320) + 0x578i64) + 0x78i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4AD0: // 0x28AB2F0 - 119
        {
            // __int64 __fastcall sub_27D4AD0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x40) + 0x90i64) + 0x1C0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE4A0: // 0x28AB2F0 - 120
        {
            // __int64 __fastcall sub_27DE4A0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x290) + 0x1F0i64) + 4i64 * ((0xFA * a2) & 0x1A));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4640: // 0x28AB2F0 - 121
        {
            // __int64 __fastcall sub_27D4640(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x7F2F0016 * FuckEnc::CacheRead<_DWORD>(a3 + 0x498));
            *a1 ^= 0x89D565F0 - result;
            return result;

            break;
        }
        case 0x27D9C80: // 0x28AB2F0 - 122
        {
            // __int64 __fastcall sub_27D9C80(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6A8) + 0x270i64) + 0x2F0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DDF70: // 0x28AB2F0 - 123
        {
            // __int64 __fastcall sub_27DDF70(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2D0) + 0x430i64) + 0x5E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCDC0: // 0x28AB2F0 - 124
        {
            // __int64 __fastcall sub_27DCDC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x128) + 0x538i64) + 0x60i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7FD0: // 0x28AB2F0 - 125
        {
            // __int64 __fastcall sub_27D7FD0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x148) + 0x448i64) + 0x1A8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DDEB0: // 0x28AB2F0 - 126
        {
            // __int64 __fastcall sub_27DDEB0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~((_DWORD)0xE8D18FA + FuckEnc::CacheRead<_DWORD>(a3 + 0x6F0));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB360: // 0x28AB2F0 - 127
        {
            // __int64 __fastcall sub_27DB360(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x3B8);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x4F0);
            return result;

            break;
        }
        case 0x27D3DC0: // 0x28AB2F0 - 128
        {
            // __int64 __fastcall sub_27D3DC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_DWORD>(a3 + 0xC0) | 0x17u;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D72F0: // 0x28AB2F0 - 129
        {
            // __int64 __fastcall sub_27D72F0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x468) + 0x380i64) + 4i64 * (a2 & 0xCC));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D77D0: // 0x28AB2F0 - 130
        {
            // __int64 __fastcall sub_27D77D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(((_DWORD)0x58F9A0 + FuckEnc::CacheRead<_DWORD>(a3 + 0x350)) << 6);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD5E0: // 0x28AB2F0 - 131
        {
            // __int64 __fastcall sub_27DD5E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x48C80000 * FuckEnc::CacheRead<_DWORD>(a3 + 0x5E0));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7F30: // 0x28AB2F0 - 132
        {
            // __int64 __fastcall sub_27D7F30(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3F8) + 8i64 * (a2 & 0x50)) + 0xB0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBE90: // 0x28AB2F0 - 133
        {
            // __int64 __fastcall sub_27DBE90(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2E8) + 0x758i64) + 4i64 * ((unsigned __int8)__ROR4__(a2, 8) & 0x9C));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8F60: // 0x28AB2F0 - 134
        {
            // __int64 __fastcall sub_27D8F60(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x418) + 0x418i64) + 0x88i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9980: // 0x28AB2F0 - 135
        {
            // __int64 __fastcall sub_27D9980(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x1A0);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x638);
            return result;

            break;
        }
        case 0x27D9D40: // 0x28AB2F0 - 136
        {
            // __int64 __fastcall sub_27D9D40(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x250) + 0x338i64) + 4i64 * (a2 ^ 0x66u));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBD90: // 0x28AB2F0 - 137
        {
            // __int64 __fastcall sub_27DBD90(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x418) + 0x758i64) + 4i64 * (unsigned __int8)(0xF0 * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8670: // 0x28AB2F0 - 138
        {
            // __int64 __fastcall sub_27D8670(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x210) + 8i64 * (a2 & 0x6D)) + 0x6F0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCBD0: // 0x28AB2F0 - 139
        {
            // __int64 __fastcall sub_27DCBD0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x290);
            *a1 ^= 0x111BC245 * FuckEnc::CacheRead<_DWORD>(result + 0x60);
            return result;

            break;
        }
        case 0x27DE240: // 0x28AB2F0 - 140
        {
            // __int64 __fastcall sub_27DE240(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x108) + 0x6A8i64) + 0x488i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5280: // 0x28AB2F0 - 141
        {
            // __int64 __fastcall sub_27D5280(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x128) + 0x480i64) + 4i64 * (a2 & 0x12));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4F20: // 0x28AB2F0 - 142
        {
            // __int64 __fastcall sub_27D4F20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (FuckEnc::CacheRead<_DWORD>(a3 + 0x5E0) & 0xFFFFFFE0) - 0x5C2E00BF;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DAD40: // 0x28AB2F0 - 143
        {
            // __int64 __fastcall sub_27DAD40(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x320);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x5A8) ^ 0xD1B56EE8;
            return result;

            break;
        }
        case 0x27D3F30: // 0x28AB2F0 - 144
        {
            // __int64 __fastcall sub_27D3F30(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x790) + 0x5B0i64) + 0x5A8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA1C0: // 0x28AB2F0 - 145
        {
            // __int64 __fastcall sub_27DA1C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheReadPlural<_QWORD>(a3 + 0x398) + 0x580i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3190: // 0x28AB2F0 - 146
        {
            // __int64 __fastcall sub_27D3190(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1A0) + 0x380i64) + 4i64 * (unsigned __int8)(0xFD * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC170: // 0x28AB2F0 - 147
        {
            // __int64 __fastcall sub_27DC170(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5B0) + 0x5C8i64) + 4i64 * (unsigned __int8)__ROL4__(a2, 0x13));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE2F0: // 0x28AB2F0 - 148
        {
            // __int64 __fastcall sub_27DE2F0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3) + 0x758i64) + 4i64 * (unsigned __int8)__ROL4__(a2, 7));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBAE0: // 0x28AB2F0 - 149
        {
            // __int64 __fastcall sub_27DBAE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x250);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x3A8) & 0xFFFFFFF3;
            return result;

            break;
        }
        case 0x27D6340: // 0x28AB2F0 - 150
        {
            // __int64 __fastcall sub_27D6340(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(FuckEnc::CacheRead<_DWORD>(a3 + 0x1F8) << 0x1E);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9480: // 0x28AB2F0 - 151
        {
            // __int64 __fastcall sub_27D9480(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4E0) + 0x430i64) + 0x5E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4090: // 0x28AB2F0 - 152
        {
            // __int64 __fastcall sub_27D4090(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x6C0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x4F0) & 0xFFFFFFF2;
            return result;

            break;
        }
        case 0x27DA040: // 0x28AB2F0 - 153
        {
            // __int64 __fastcall sub_27DA040(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3B8) + 0x4E0i64) + 0x438i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD1C0: // 0x28AB2F0 - 154
        {
            // __int64 __fastcall sub_27DD1C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x628) + 0x2A8i64) + 0x5A8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5880: // 0x28AB2F0 - 155
        {
            // __int64 __fastcall sub_27D5880(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x168) + 8i64 * (a2 ^ 0x23u)) + 0xC0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC900: // 0x28AB2F0 - 156
        {
            // __int64 __fastcall sub_27DC900(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x468) + 0x6C0i64) + 0xB0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DAA70: // 0x28AB2F0 - 157
        {
            // __int64 __fastcall sub_27DAA70(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1B8) + 0x3F0i64) + 0x438i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D63E0: // 0x28AB2F0 - 158
        {
            // __int64 __fastcall sub_27D63E0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5E8) + 8i64 * (unsigned __int8)(0x2A * a2)) + 0x5D0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6DE0: // 0x28AB2F0 - 159
        {
            // __int64 __fastcall sub_27D6DE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x680);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x5A8) ^ 0xC3018944;
            return result;

            break;
        }
        case 0x27DC330: // 0x28AB2F0 - 160
        {
            // __int64 __fastcall sub_27DC330(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1B8) + 0x2D0i64) + 0x728i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2DE0: // 0x28AB2F0 - 161
        {
            // __int64 __fastcall sub_27D2DE0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5E8) + 8i64 * (unsigned __int8)__ROL4__(a2, 3)) + 0x5A8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5C50: // 0x28AB2F0 - 162
        {
            // __int64 __fastcall sub_27D5C50(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x188) + 0x480i64) + 4i64 * (unsigned __int8)(0xDB * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D88B0: // 0x28AB2F0 - 163
        {
            // __int64 __fastcall sub_27D88B0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3F8) + 8i64 * (unsigned __int8)__ROL4__(a2, 3)) + 0x1A8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5A10: // 0x28AB2F0 - 164
        {
            // __int64 __fastcall sub_27D5A10(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheReadPlural<_QWORD>(a3 + 0x468) + 0x728i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA610: // 0x28AB2F0 - 165
        {
            // __int64 __fastcall sub_27DA610(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x520) + 0x6F8i64) + 0x488i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE1A0: // 0x28AB2F0 - 166
        {
            // __int64 __fastcall sub_27DE1A0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x128) + 0x380i64) + 4i64 * (a2 ^ 0xB3u));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6BE0: // 0x28AB2F0 - 167
        {
            // __int64 __fastcall sub_27D6BE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2D0) + 0x590i64) + 0x6F0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7C60: // 0x28AB2F0 - 168
        {
            // __int64 __fastcall sub_27D7C60(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x680) + 0x3F0i64) + 0x350i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7670: // 0x28AB2F0 - 169
        {
            // __int64 __fastcall sub_27D7670(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x468);
            *a1 ^= 0xD6C37F3F * FuckEnc::CacheRead<_DWORD>(result + 0x1F8);
            return result;

            break;
        }
        case 0x27D47D0: // 0x28AB2F0 - 170
        {
            // __int64 __fastcall sub_27D47D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x128);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x498) + 0x4A2ADD2E;
            return result;

            break;
        }
        case 0x27D60D0: // 0x28AB2F0 - 171
        {
            // __int64 __fastcall sub_27D60D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x770) + 0x430i64) + 0x3A8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3230: // 0x28AB2F0 - 172
        {
            // __int64 __fastcall sub_27D3230(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x668);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x308) ^ 0xE461C40E;
            return result;

            break;
        }
        case 0x27DEB10: // 0x28AB2F0 - 173
        {
            // void __fastcall sub_27DEB10(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= (unsigned int)(FuckEnc::CacheRead<_DWORD>(a3 + 0xB0) * a2) >> 0x19;

            break;
        }
        case 0x27D6F40: // 0x28AB2F0 - 174
        {
            // __int64 __fastcall sub_27D6F40(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3F0) + 0x1B8i64) + 0x318i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DAB50: // 0x28AB2F0 - 175
        {
            // __int64 __fastcall sub_27DAB50(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3B0) + 8i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x3A8) & 0x4F)) + 0x638i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD470: // 0x28AB2F0 - 176
        {
            // __int64 __fastcall sub_27DD470(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x590) + 0x1F0i64) + 4i64 * ((unsigned __int8)(0xA7 * a2) & 0xB8));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB820: // 0x28AB2F0 - 177
        {
            // __int64 __fastcall sub_27DB820(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0xA8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * ((0xE8 * FuckEnc::CacheRead<_BYTE>(a3 + 0x88)) & 0x3D));
            return result;

            break;
        }
        case 0x27DB0C0: // 0x28AB2F0 - 178
        {
            // __int64 __fastcall sub_27DB0C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0x2F0);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7A40: // 0x28AB2F0 - 179
        {
            // __int64 __fastcall sub_27D7A40(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = *a1 ^ FuckEnc::CacheRead<_DWORD>(a3 + 0x6F0) ^ 0x3B50F4F6u;
            *a1 = result;
            return result;

            break;
        }
        case 0x27D3670: // 0x28AB2F0 - 180
        {
            // __int64 __fastcall sub_27D3670(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6A8) + 0xA8i64) + 4i64 * (a2 & 0x5F));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3B90: // 0x28AB2F0 - 181
        {
            // __int64 __fastcall sub_27D3B90(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x418);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x3A8);
            return result;

            break;
        }
        case 0x27D2BB0: // 0x28AB2F0 - 182
        {
            // __int64 __fastcall sub_27D2BB0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~FuckEnc::CacheRead<_DWORD>(a3 + 0x118) & 0xFFFFFFE6;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4430: // 0x28AB2F0 - 183
        {
            // __int64 __fastcall sub_27D4430(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3B0) + 8i64 * (a2 & 0xBD)) + 0x308i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D42C0: // 0x28AB2F0 - 184
        {
            // __int64 __fastcall sub_27D42C0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xC8) + 8i64 * (a2 & 0x39)) + 0x580i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4200: // 0x28AB2F0 - 185
        {
            // __int64 __fastcall sub_27D4200(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x300) + 0xF0i64) + 4i64 * (unsigned __int8)__ROL4__(a2, 5));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3C50: // 0x28AB2F0 - 186
        {
            // __int64 __fastcall sub_27D3C50(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x758);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * ((unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(a3 + 0x780), 0x1D) & 0x9F));
            return result;

            break;
        }
        case 0x27D7520: // 0x28AB2F0 - 187
        {
            // __int64 __fastcall sub_27D7520(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x480);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * ((unsigned __int8)(0x46 * FuckEnc::CacheRead<_BYTE>(a3 + 0x598)) & 0x8A));
            return result;

            break;
        }
        case 0x27DB250: // 0x28AB2F0 - 188
        {
            // __int64 __fastcall sub_27DB250(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x640) + 8i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x350) & 0xEF)) + 0x718i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5930: // 0x28AB2F0 - 189
        {
            // __int64 __fastcall sub_27D5930(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = *a1 ^ FuckEnc::CacheRead<_DWORD>(a3 + 0x718) ^ 0xD8FE77DE;
            *a1 = result;
            return result;

            break;
        }
        case 0x27D4A20: // 0x28AB2F0 - 190
        {
            // __int64 __fastcall sub_27D4A20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x70);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0xB0) >> 4;
            return result;

            break;
        }
        case 0x27D8720: // 0x28AB2F0 - 191
        {
            // __int64 __fastcall sub_27D8720(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5B0) + 0x770i64) + 0x1F8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3470: // 0x28AB2F0 - 192
        {
            // __int64 __fastcall sub_27D3470(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x2E8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x78) * a2;
            return result;

            break;
        }
        case 0x27D68F0: // 0x28AB2F0 - 193
        {
            // __int64 __fastcall sub_27D68F0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x290);
            *a1 ^= a2 + FuckEnc::CacheRead<_DWORD>(result + 0x260);
            return result;

            break;
        }
        case 0x27DD250: // 0x28AB2F0 - 194
        {
            // __int64 __fastcall sub_27DD250(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 ^ *a1 ^ (unsigned int)~FuckEnc::CacheRead<_DWORD>(a3 + 0x450);
            *a1 = result;
            return result;

            break;
        }
        case 0x27D9810: // 0x28AB2F0 - 195
        {
            // __int64 __fastcall sub_27D9810(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6D8) + 0x188i64) + 0x78i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA7A0: // 0x28AB2F0 - 196
        {
            // __int64 __fastcall sub_27DA7A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(FuckEnc::CacheRead<_DWORD>(a3 + 0x438) << 0x13);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6D40: // 0x28AB2F0 - 197
        {
            // __int64 __fastcall sub_27D6D40(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x688) + 8i64 * ((5 * a2) & 0x19)) + 0x2F0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB710: // 0x28AB2F0 - 198
        {
            // __int64 __fastcall sub_27DB710(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x468);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x6F0) + 0x73C2CE9F;
            return result;

            break;
        }
        case 0x27D2C50: // 0x28AB2F0 - 199
        {
            // __int64 __fastcall sub_27D2C50(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3) + 0x1A0i64) + 0x6E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D38B0: // 0x28AB2F0 - 200
        {
            // __int64 __fastcall sub_27D38B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x418) + 0x590i64) + 0x488i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBFA0: // 0x28AB2F0 - 201
        {
            // __int64 __fastcall sub_27DBFA0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x225F5A46 * FuckEnc::CacheRead<_DWORD>(a3 + 0x118) + 0x47AF3A5C);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCA00: // 0x28AB2F0 - 202
        {
            // __int64 __fastcall sub_27DCA00(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x20) + 8i64 * ((a2 ^ 0xD6) & 0x6D)) + 0x1A8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB8F0: // 0x28AB2F0 - 203
        {
            // void __fastcall sub_27DB8F0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x438) ^ a2);

            break;
        }
        case 0x27DCEC0: // 0x28AB2F0 - 204
        {
            // __int64 __fastcall sub_27DCEC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x578);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x260);
            return result;

            break;
        }
        case 0x27DA3F0: // 0x28AB2F0 - 205
        {
            // __int64 __fastcall sub_27DA3F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x2D0);
            *a1 ^= 0x211B2DC0 * FuckEnc::CacheRead<_DWORD>(result + 0x308);
            return result;

            break;
        }
        case 0x27DA990: // 0x28AB2F0 - 206
        {
            // __int64 __fastcall sub_27DA990(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x250) + 0x398i64) + 0x6E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D57C0: // 0x28AB2F0 - 207
        {
            // __int64 __fastcall sub_27D57C0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xC8) + 8i64 * (a2 ^ 0x3Bu)) + 0x718i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8DF0: // 0x28AB2F0 - 208
        {
            // __int64 __fastcall sub_27D8DF0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x210) + 8i64 * (a2 & 0xBC)) + 0x438i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9B10: // 0x28AB2F0 - 209
        {
            // __int64 __fastcall sub_27D9B10(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x250) + 0x58i64) + 0x4F0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2FE0: // 0x28AB2F0 - 210
        {
            // __int64 __fastcall sub_27D2FE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x290) + 0x108i64) + 0x118i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DEBE0: // 0x28AB2F0 - 211
        {
            // __int64 __fastcall sub_27DEBE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x2CF63BC6 - FuckEnc::CacheRead<_DWORD>(a3 + 0x6F0));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D66D0: // 0x28AB2F0 - 212
        {
            // __int64 __fastcall sub_27D66D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned __int16>(a3 + 0x3AA);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA110: // 0x28AB2F0 - 213
        {
            // __int64 __fastcall sub_27DA110(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x640) + 8i64 * ((unsigned __int8)(0x44 * a2) & 0x9B)) + 0x350i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE830: // 0x28AB2F0 - 214
        {
            // __int64 __fastcall sub_27DE830(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x538);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x598) >> 0xA;
            return result;

            break;
        }
        case 0x27D75C0: // 0x28AB2F0 - 215
        {
            // __int64 __fastcall sub_27D75C0(_DWORD *a1, unsigned int a2, __int64 a3)

            a2 = (unsigned int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 + (FuckEnc::CacheRead<_DWORD>(a3 + 0x598) ^ a2);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE550: // 0x28AB2F0 - 216
        {
            // __int64 __fastcall sub_27DE550(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x710);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x6C8) & 0x50));
            return result;

            break;
        }
        case 0x27DB530: // 0x28AB2F0 - 217
        {
            // __int64 __fastcall sub_27DB530(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2A8) + 0x238i64) + 4i64 * (a2 & 0x28));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5AD0: // 0x28AB2F0 - 218
        {
            // __int64 __fastcall sub_27D5AD0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x60) | 0x1Fu);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9A40: // 0x28AB2F0 - 219
        {
            // __int64 __fastcall sub_27D9A40(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x540) + 8i64 * ((0xC8 * a2) & 0x42)) + 0x88i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8AF0: // 0x28AB2F0 - 220
        {
            // __int64 __fastcall sub_27D8AF0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x2A8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x460) - 0x605ECC17;
            return result;

            break;
        }
        case 0x27D5640: // 0x28AB2F0 - 221
        {
            // __int64 __fastcall sub_27D5640(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2B0) + 8i64 * (unsigned __int8)__ROR4__(a2, 0x17)) + 0x1C0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3D10: // 0x28AB2F0 - 222
        {
            // __int64 __fastcall sub_27D3D10(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x320) + 0x2A8i64) + 0x638i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5D00: // 0x28AB2F0 - 223
        {
            // __int64 __fastcall sub_27D5D00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4E0) + 0x628i64) + 0x350i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9160: // 0x28AB2F0 - 224
        {
            // __int64 __fastcall sub_27D9160(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x730) + 8i64 * (unsigned __int8)(0x9A * a2)) + 0x498i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD760: // 0x28AB2F0 - 225
        {
            // __int64 __fastcall sub_27DD760(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x398) + 0x710i64) + 4i64 * (unsigned __int8)__ROL4__(a2, 0x1D));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD8C0: // 0x28AB2F0 - 226
        {
            // __int64 __fastcall sub_27DD8C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~FuckEnc::CacheRead<_DWORD>(a3 + 0xC0) | 0x1Eu;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC800: // 0x28AB2F0 - 227
        {
            // __int64 __fastcall sub_27DC800(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = *a1 ^ (FuckEnc::CacheRead<_DWORD>(a3 + 0xB0) | 0xD) ^ 0x7C2B74E9u;
            *a1 = result;
            return result;

            break;
        }
        case 0x27D96B0: // 0x28AB2F0 - 228
        {
            // __int64 __fastcall sub_27D96B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x500) + 0x128i64) + 0x5E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D83A0: // 0x28AB2F0 - 229
        {
            // __int64 __fastcall sub_27D83A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~FuckEnc::CacheRead<_DWORD>(a3 + 0x1D0) >> 5;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DAE40: // 0x28AB2F0 - 230
        {
            // __int64 __fastcall sub_27DAE40(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x5B4787E9 - FuckEnc::CacheRead<_DWORD>(a3 + 0x318));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5F40: // 0x28AB2F0 - 231
        {
            // __int64 __fastcall sub_27D5F40(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x40) + 0x290i64) + 0x780i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7880: // 0x28AB2F0 - 232
        {
            // __int64 __fastcall sub_27D7880(_DWORD *a1, __int64 a2, __int64 FuckEnc::CacheRead<__int64>(a3))

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<__int64>(a3);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<__int64>(a3) + 0xB0);
            return result;

            break;
        }
        case 0x27D8960: // 0x28AB2F0 - 233
        {
            // __int64 __fastcall sub_27D8960(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x18);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x598);
            return result;

            break;
        }
        case 0x27DE020: // 0x28AB2F0 - 234
        {
            // __int64 __fastcall sub_27DE020(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x6D8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x318) >> 0x13;
            return result;

            break;
        }
        case 0x27D7460: // 0x28AB2F0 - 235
        {
            // __int64 __fastcall sub_27D7460(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x108) + 0x430i64) + 0x438i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D90C0: // 0x28AB2F0 - 236
        {
            // __int64 __fastcall sub_27D90C0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x40) + 0xA8i64) + 4i64 * (unsigned __int8)__ROL4__(a2, 0xF));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D50D0: // 0x28AB2F0 - 237
        {
            // __int64 __fastcall sub_27D50D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x188) + 0x250i64) + 0x1F8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5DC0: // 0x28AB2F0 - 238
        {
            // __int64 __fastcall sub_27D5DC0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x320) + 0x380i64) + 4i64 * ((a2 ^ 1) & 0xE5));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC520: // 0x28AB2F0 - 239
        {
            // __int64 __fastcall sub_27DC520(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x448) + 0x18i64) + 0x60i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4890: // 0x28AB2F0 - 240
        {
            // __int64 __fastcall sub_27D4890(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x128);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x5D0) ^ 0x3F09FE71;
            return result;

            break;
        }
        case 0x27DE610: // 0x28AB2F0 - 241
        {
            // __int64 __fastcall sub_27DE610(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x128) + 0x300i64) + 0x580i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7000: // 0x28AB2F0 - 242
        {
            // __int64 __fastcall sub_27D7000(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x538);
            *a1 ^= a2 + FuckEnc::CacheRead<_DWORD>(result + 0x208);
            return result;

            break;
        }
        case 0x27D5410: // 0x28AB2F0 - 243
        {
            // __int64 __fastcall sub_27D5410(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5E8) + 8i64 * (a2 ^ 0x7Du)) + 0x5A8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2890: // 0x28AB2F0 - 244
        {
            // __int64 __fastcall sub_27D2890(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x648);
            *a1 ^= 0xEFBFC13B * FuckEnc::CacheRead<_DWORD>(result + 0x450);
            return result;

            break;
        }
        case 0x27D4590: // 0x28AB2F0 - 245
        {
            // __int64 __fastcall sub_27D4590(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(~FuckEnc::CacheRead<_DWORD>(a3 + 0x6F0) << 0x1E);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9600: // 0x28AB2F0 - 246
        {
            // __int64 __fastcall sub_27D9600(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x688) + 8i64 * (unsigned __int8)(0xC7 * a2)) + 0x6F0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4960: // 0x28AB2F0 - 247
        {
            // __int64 __fastcall sub_27D4960(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x20) + 8i64 * (a2 & 0xA8)) + 0xB0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D30C0: // 0x28AB2F0 - 248
        {
            // __int64 __fastcall sub_27D30C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x790);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x3A8) << 9;
            return result;

            break;
        }
        case 0x27DA550: // 0x28AB2F0 - 249
        {
            // __int64 __fastcall sub_27DA550(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x430) + 0x430i64) + 0x340i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DAC50: // 0x28AB2F0 - 250
        {
            // __int64 __fastcall sub_27DAC50(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4F8) + 8i64 * (a2 & 0x52)) + 0x5D0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D87E0: // 0x28AB2F0 - 251
        {
            // __int64 __fastcall sub_27D87E0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 ^ *a1 ^ (unsigned int)(FuckEnc::CacheRead<_DWORD>(a3 + 0x1C0) - ((_DWORD)0xA378840 + 2));
            *a1 = result;
            return result;

            break;
        }
        case 0x27D4CF0: // 0x28AB2F0 - 252
        {
            // __int64 __fastcall sub_27D4CF0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1D8) + 0x468i64) + 0x438i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7D20: // 0x28AB2F0 - 253
        {
            // __int64 __fastcall sub_27D7D20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x520) + 0x250i64) + 0x1D0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9340: // 0x28AB2F0 - 254
        {
            // __int64 __fastcall sub_27D9340(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6A8) + 0x4C8i64) + 4i64 * ((unsigned __int8)__ROR4__(a2, 0xF) & 0x97));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE6C0: // 0x28AB2F0 - 255
        {
            // __int64 __fastcall sub_27DE6C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5B0) + 0x6D8i64) + 0x5D0i64);
            *a1 ^= result;
            return result;

            break;
        }
        // Main Function 0x28AB2F0 End

        // Main Function 0x28ACAA0 Start
        case 0x27D61D0: // 0x28ACAA0 - 0
        {
            // __int64 __fastcall sub_27D61D0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2D8) + 8i64 * (a2 & 0x7D)) + 0x768i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8D60: // 0x28ACAA0 - 1
        {
            // __int64 __fastcall sub_27D8D60(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0xAE8307 * FuckEnc::CacheRead<_DWORD>(a3 + 0x400)) >> 1;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3740: // 0x28ACAA0 - 2
        {
            // __int64 __fastcall sub_27D3740(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x588) + 0x6C0i64) + 0x768i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA570: // 0x28ACAA0 - 3
        {
            // __int64 __fastcall sub_27DA570(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x5E0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x78) & 0xFC));
            return result;

            break;
        }
        case 0x27D2BC0: // 0x28ACAA0 - 4
        {
            // __int64 __fastcall sub_27D2BC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x330) + 0x6D0i64) + 0x20i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE040: // 0x28ACAA0 - 5
        {
            // __int64 __fastcall sub_27DE040(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1A8) + 0x448i64) + 4i64 * (unsigned __int8)(0x89 * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DAB70: // 0x28ACAA0 - 6
        {
            // __int64 __fastcall sub_27DAB70(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(a2 + (FuckEnc::CacheRead<_DWORD>(a3 + 0x768) << 0xF));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5EC0: // 0x28ACAA0 - 7
        {
            // __int64 __fastcall sub_27D5EC0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x2F8);
            *a1 ^= a2 + FuckEnc::CacheRead<_DWORD>(result + 0x400);
            return result;

            break;
        }
        case 0x27DC820: // 0x28ACAA0 - 8
        {
            // __int64 __fastcall sub_27DC820(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x370) + 8i64 * (unsigned __int8)__ROL4__(a2, 0xA)) + 0x390i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD990: // 0x28ACAA0 - 9
        {
            // __int64 __fastcall sub_27DD990(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x618);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x28) * a2;
            return result;

            break;
        }
        case 0x27D83B0: // 0x28ACAA0 - 10
        {
            // __int64 __fastcall sub_27D83B0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x578) + 0x1B8i64) + 4i64 * (unsigned __int8)(0xDD * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7890: // 0x28ACAA0 - 11
        {
            // __int64 __fastcall sub_27D7890(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x750) + 0x2E8i64) + 0x780i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB730: // 0x28ACAA0 - 12
        {
            // __int64 __fastcall sub_27DB730(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xE0) + 8i64 * ((unsigned __int8)(0xCB * a2) & 0xFD)) + 0x2B0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB900: // 0x28ACAA0 - 13
        {
            // __int64 __fastcall sub_27DB900(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6C8) + 0x350i64) + 4i64 * (unsigned __int8)__ROR4__(a2, 0x14));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4A30: // 0x28ACAA0 - 14
        {
            // __int64 __fastcall sub_27D4A30(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x58) + 0x1E8i64) + 0x780i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4220: // 0x28ACAA0 - 15
        {
            // __int64 __fastcall sub_27D4220(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x1A0);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x168);
            return result;

            break;
        }
        case 0x27DDB00: // 0x28ACAA0 - 16
        {
            // __int64 __fastcall sub_27DDB00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x60);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x620) ^ 0xDB4E50BD;
            return result;

            break;
        }
        case 0x27DA130: // 0x28ACAA0 - 17
        {
            // __int64 __fastcall sub_27DA130(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1B0) + 0x5C8i64) + 0x548i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D31B0: // 0x28ACAA0 - 18
        {
            // __int64 __fastcall sub_27D31B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0x598);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBA00: // 0x28ACAA0 - 19
        {
            // __int64 __fastcall sub_27DBA00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(FuckEnc::CacheRead<_DWORD>(a3 + 0x3A8) - (_DWORD)0x143CEECF) >> 8;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE570: // 0x28ACAA0 - 20
        {
            // __int64 __fastcall sub_27DE570(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x378) + 0x58i64) + 0x638i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2E90: // 0x28ACAA0 - 21
        {
            // __int64 __fastcall sub_27D2E90(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 * (FuckEnc::CacheRead<_DWORD>(a3 + 0xD8) ^ 0x6319E9C3u);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7540: // 0x28ACAA0 - 22
        {
            // __int64 __fastcall sub_27D7540(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x330) + 0x480i64) + 0x400i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2970: // 0x28ACAA0 - 23
        {
            // __int64 __fastcall sub_27D2970(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x318) + 8i64 * ((unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(a3 + 0x3A8), 4) & 0xB7)) + 0x3F8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7020: // 0x28ACAA0 - 24
        {
            // __int64 __fastcall sub_27D7020(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6C0) + 0x300i64) + 4i64 * (unsigned __int8)(0x93 * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7690: // 0x28ACAA0 - 25
        {
            // __int64 __fastcall sub_27D7690(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5C8) + 0x590i64) + 4i64 * (a2 ^ 0x19u));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D69E0: // 0x28ACAA0 - 26
        {
            // __int64 __fastcall sub_27D69E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0x688);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7750: // 0x28ACAA0 - 27
        {
            // __int64 __fastcall sub_27D7750(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0xA8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x638) & 0xFFFFFFEB;
            return result;

            break;
        }
        case 0x27D60F0: // 0x28ACAA0 - 28
        {
            // __int64 __fastcall sub_27D60F0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x190) + 8i64 * (unsigned __int8)(0xAD * a2)) + 0x100i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D57E0: // 0x28ACAA0 - 29
        {
            // __int64 __fastcall sub_27D57E0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4D0) + 0x70i64) + 4i64 * (a2 ^ 7u));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC350: // 0x28ACAA0 - 30
        {
            // __int64 __fastcall sub_27DC350(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x6C8);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x100);
            return result;

            break;
        }
        case 0x27D51D0: // 0x28ACAA0 - 31
        {
            // __int64 __fastcall sub_27D51D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x190) + 8i64 * (unsigned __int8)(0x67 * FuckEnc::CacheRead<_BYTE>(a3 + 0x220))) + 0x78i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6AA0: // 0x28ACAA0 - 32
        {
            // __int64 __fastcall sub_27D6AA0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(0x5C51F243 * FuckEnc::CacheRead<_DWORD>(a3 + 0x308));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3000: // 0x28ACAA0 - 33
        {
            // __int64 __fastcall sub_27D3000(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x480) + 0xC0i64) + 4i64 * ((unsigned __int8)__ROL4__(a2, 0x12) & 0xB6));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD130: // 0x28ACAA0 - 34
        {
            // __int64 __fastcall sub_27DD130(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x708) + 0xC0i64) + 4i64 * (a2 & 0x4E));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9EE0: // 0x28ACAA0 - 35
        {
            // __int64 __fastcall sub_27D9EE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x608) + 0xA8i64) + 0x118i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE790: // 0x28ACAA0 - 36
        {
            // __int64 __fastcall sub_27DE790(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x378) + 0x498i64) + 4i64 * ((0xFD * a2) & 5));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9E10: // 0x28ACAA0 - 37
        {
            // __int64 __fastcall sub_27D9E10(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0xC00A8DB * FuckEnc::CacheRead<_DWORD>(a3 + 0x3F8));
            *a1 ^= 0x93C31131 - result;
            return result;

            break;
        }
        case 0x27D7A60: // 0x28ACAA0 - 38
        {
            // __int64 __fastcall sub_27D7A60(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xE8) + 0x590i64) + 4i64 * (unsigned __int8)__ROL4__(a2, 0x18));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA9B0: // 0x28ACAA0 - 39
        {
            // __int64 __fastcall sub_27DA9B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2F8) + 0x618i64) + 0xD8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5A30: // 0x28ACAA0 - 40
        {
            // __int64 __fastcall sub_27D5A30(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (FuckEnc::CacheRead<_DWORD>(a3 + 0x368) ^ 0xE8D5FCF5) - 0x3CFE76BC;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DAD60: // 0x28ACAA0 - 41
        {
            // __int64 __fastcall sub_27DAD60(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x460) + 8i64 * (a2 ^ 0x2Bu)) + 0x688i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6400: // 0x28ACAA0 - 42
        {
            // __int64 __fastcall sub_27D6400(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x578);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x5F8) - 0x3CEECE96;
            return result;

            break;
        }
        case 0x27DA4B0: // 0x28ACAA0 - 43
        {
            // __int64 __fastcall sub_27DA4B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x608);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x6E0) - 0x42E445DF;
            return result;

            break;
        }
        case 0x27D8A50: // 0x28ACAA0 - 44
        {
            // __int64 __fastcall sub_27D8A50(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = *a1 ^ FuckEnc::CacheRead<_DWORD>(a3 + 0x28) ^ 0x638E4ED4u;
            *a1 = result;
            return result;

            break;
        }
        case 0x27DE3F0: // 0x28ACAA0 - 45
        {
            // __int64 __fastcall sub_27DE3F0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x568) + 8i64 * ((a2 ^ 1) & 0x11)) + 0x308i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6CA0: // 0x28ACAA0 - 46
        {
            // __int64 __fastcall sub_27D6CA0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6B0) + 8i64 * (a2 ^ 0x29u)) + 0x260i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4DD0: // 0x28ACAA0 - 47
        {
            // __int64 __fastcall sub_27D4DD0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_DWORD>(a3 + 0x450) >> 0x1B;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC0B0: // 0x28ACAA0 - 48
        {
            // __int64 __fastcall sub_27DC0B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x6C8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x740) - 0x1BB12F01;
            return result;

            break;
        }
        case 0x27DE8F0: // 0x28ACAA0 - 49
        {
            // __int64 __fastcall sub_27DE8F0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 + (FuckEnc::CacheRead<_DWORD>(a3 + 0x20) & 0xFFFFFFF5);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D70C0: // 0x28ACAA0 - 50
        {
            // __int64 __fastcall sub_27D70C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x58);
            *a1 ^= 0xEF983F31 * FuckEnc::CacheRead<_DWORD>(result + 0x740);
            return result;

            break;
        }
        case 0x27D4000: // 0x28ACAA0 - 51
        {
            // __int64 __fastcall sub_27D4000(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2F0) + 0x590i64) + 4i64 * (a2 & 0x62));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8B10: // 0x28ACAA0 - 52
        {
            // __int64 __fastcall sub_27D8B10(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x338) + 0x578i64) + 0x3F8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6570: // 0x28ACAA0 - 53
        {
            // __int64 __fastcall sub_27D6570(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1D0) + 8i64 * (unsigned __int8)(0x43 * a2)) + 0x3A8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7970: // 0x28ACAA0 - 54
        {
            // __int64 __fastcall sub_27D7970(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x478) + 0x668i64) + 0x170i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D38D0: // 0x28ACAA0 - 55
        {
            // __int64 __fastcall sub_27D38D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x580);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x368);
            return result;

            break;
        }
        case 0x27D4450: // 0x28ACAA0 - 56
        {
            // __int64 __fastcall sub_27D4450(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xE0) + 8i64 * (a2 & 0xB5)) + 0x118i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB470: // 0x28ACAA0 - 57
        {
            // __int64 __fastcall sub_27DB470(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2E8) + 0x68i64) + 0x390i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D62A0: // 0x28ACAA0 - 58
        {
            // __int64 __fastcall sub_27D62A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x48) + 8i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x260) & 0xA6)) + 0x170i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE310: // 0x28ACAA0 - 59
        {
            // __int64 __fastcall sub_27DE310(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x760) + 0x68i64) + 0x598i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D48B0: // 0x28ACAA0 - 60
        {
            // __int64 __fastcall sub_27D48B0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2D8) + 8i64 * ((unsigned __int8)__ROL4__(a2, 2) & 0xD6)) + 0xD8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC440: // 0x28ACAA0 - 61
        {
            // __int64 __fastcall sub_27DC440(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xF8) + 0x2E8i64) + 0x100i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9620: // 0x28ACAA0 - 62
        {
            // __int64 __fastcall sub_27D9620(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x388) + 0x1A0i64) + 0x248i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2D30: // 0x28ACAA0 - 63
        {
            // __int64 __fastcall sub_27D2D30(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x230) + 0x728i64) + 4i64 * (unsigned __int8)__ROL4__(a2, 0x10));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D28B0: // 0x28ACAA0 - 64
        {
            // __int64 __fastcall sub_27D28B0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(a2 * ~FuckEnc::CacheRead<_DWORD>(a3 + 0x3F8));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCCE0: // 0x28ACAA0 - 65
        {
            // __int64 __fastcall sub_27DCCE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x478);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x1C0);
            return result;

            break;
        }
        case 0x27DC540: // 0x28ACAA0 - 66
        {
            // __int64 __fastcall sub_27DC540(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(a2 + FuckEnc::CacheRead<_DWORD>(a3 + 0x5F8));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6D60: // 0x28ACAA0 - 67
        {
            // __int64 __fastcall sub_27D6D60(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = 0x80067DD5 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x6E0) ^ 0xC3018944);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBBF0: // 0x28ACAA0 - 68
        {
            // __int64 __fastcall sub_27DBBF0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x41590000 * FuckEnc::CacheRead<_DWORD>(a3 + 0x2B0));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DAF20: // 0x28ACAA0 - 69
        {
            // __int64 __fastcall sub_27DAF20(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x588) + 0x70i64) + 4i64 * (a2 & 0x49));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD1E0: // 0x28ACAA0 - 70
        {
            // __int64 __fastcall sub_27DD1E0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x300);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * ((FuckEnc::CacheRead<_BYTE>(a3 + 0x1C0) * a2) & 0x5A));
            return result;

            break;
        }
        case 0x27DC720: // 0x28ACAA0 - 71
        {
            // __int64 __fastcall sub_27DC720(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x88) + 8i64 * (a2 & 0x2C)) + 0x620i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9400: // 0x28ACAA0 - 72
        {
            // __int64 __fastcall sub_27D9400(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x3F748196 * FuckEnc::CacheRead<_DWORD>(a3 + 0x390) * a2);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3250: // 0x28ACAA0 - 73
        {
            // __int64 __fastcall sub_27D3250(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x68) + 0x378i64) + 0x620i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6630: // 0x28ACAA0 - 74
        {
            // __int64 __fastcall sub_27D6630(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2F8) + 0x338i64) + 0x1C0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7190: // 0x28ACAA0 - 75
        {
            // __int64 __fastcall sub_27D7190(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)((a2 + FuckEnc::CacheRead<_DWORD>(a3 + 0x2B0)) << 0x15);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3C70: // 0x28ACAA0 - 76
        {
            // __int64 __fastcall sub_27D3C70(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3) + 0x338i64) + 0x780i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD8D0: // 0x28ACAA0 - 77
        {
            // __int64 __fastcall sub_27DD8D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x478) + 0x1F0i64) + 0x1C0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7C80: // 0x28ACAA0 - 78
        {
            // __int64 __fastcall sub_27D7C80(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x1A0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x3F8) ^ 0x5DC31131;
            return result;

            break;
        }
        case 0x27D8240: // 0x28ACAA0 - 79
        {
            // __int64 __fastcall sub_27D8240(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0x5F8);
            *a1 ^= result + 2 * a2;
            return result;

            break;
        }
        case 0x27DBEC0: // 0x28ACAA0 - 80
        {
            // __int64 __fastcall sub_27DBEC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x588) + 0x5C0i64) + 0x780i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4E80: // 0x28ACAA0 - 81
        {
            // __int64 __fastcall sub_27D4E80(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xE0) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(a3 + 0x28), 0x15)) + 0x638i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD490: // 0x28ACAA0 - 82
        {
            // __int64 __fastcall sub_27DD490(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x5E0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x68) + 0x690i64), 0xD));
            return result;

            break;
        }
        case 0x27D6B40: // 0x28ACAA0 - 83
        {
            // __int64 __fastcall sub_27D6B40(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x338);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x638);
            return result;

            break;
        }
        case 0x27D3E90: // 0x28ACAA0 - 84
        {
            // __int64 __fastcall sub_27D3E90(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xE8) + 0x5E0i64) + 4i64 * (__ROR4__(a2, 4) & 0x54));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D80B0: // 0x28ACAA0 - 85
        {
            // __int64 __fastcall sub_27D80B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x338) + 0x5C8i64) + 0x2B8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D44F0: // 0x28ACAA0 - 86
        {
            // __int64 __fastcall sub_27D44F0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 ^ *a1 ^ (0xC311318A * FuckEnc::CacheRead<_DWORD>(a3 + 0x248));
            *a1 = result;
            return result;

            break;
        }
        case 0x27D9A60: // 0x28ACAA0 - 87
        {
            // __int64 __fastcall sub_27D9A60(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x710) + 0x6D8i64) + 4i64 * (__ROR4__(a2, 4) & 0x15));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DDF90: // 0x28ACAA0 - 88
        {
            // __int64 __fastcall sub_27DDF90(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_DWORD>(a3 + 0x390) >> 0x17;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2E00: // 0x28ACAA0 - 89
        {
            // __int64 __fastcall sub_27D2E00(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x228) + 8i64 * (unsigned __int8)__ROR4__(a2, 0x13)) + 0x690i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2A40: // 0x28ACAA0 - 90
        {
            // __int64 __fastcall sub_27D2A40(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1A0) + 0x3D8i64) + 0xD8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBFC0: // 0x28ACAA0 - 91
        {
            // __int64 __fastcall sub_27DBFC0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x31B7E424 * FuckEnc::CacheRead<_DWORD>(a3 + 0x28) * a2);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7D40: // 0x28ACAA0 - 92
        {
            // __int64 __fastcall sub_27D7D40(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(0x6C4ADAB2 * FuckEnc::CacheRead<_DWORD>(a3 + 0x598));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D73C0: // 0x28ACAA0 - 93
        {
            // __int64 __fastcall sub_27D73C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0x2B8);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCFC0: // 0x28ACAA0 - 94
        {
            // __int64 __fastcall sub_27DCFC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2F8) + 0x6C8i64) + 0x28i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4F40: // 0x28ACAA0 - 95
        {
            // __int64 __fastcall sub_27D4F40(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x88) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(a3 + 0x4F0), 0x1C)) + 0x368i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9560: // 0x28ACAA0 - 96
        {
            // __int64 __fastcall sub_27D9560(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x460) + 8i64 * (a2 ^ 0x8Bu)) + 0x2B0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2C70: // 0x28ACAA0 - 97
        {
            // __int64 __fastcall sub_27D2C70(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x6C0);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x4B0);
            return result;

            break;
        }
        case 0x27DD780: // 0x28ACAA0 - 98
        {
            // __int64 __fastcall sub_27DD780(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x668) + 0x3D8i64) + 0x28i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D64C0: // 0x28ACAA0 - 99
        {
            // __int64 __fastcall sub_27D64C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x330) + 0x6D0i64) + 0x220i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D67A0: // 0x28ACAA0 - 100
        {
            // __int64 __fastcall sub_27D67A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x668) + 0xF8i64) + 0x3F8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D75D0: // 0x28ACAA0 - 101
        {
            // __int64 __fastcall sub_27D75D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x58) + 0x1F0i64) + 0x620i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9B30: // 0x28ACAA0 - 102
        {
            // __int64 __fastcall sub_27D9B30(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5C0) + 0x6D0i64) + 0x2B0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8300: // 0x28ACAA0 - 103
        {
            // __int64 __fastcall sub_27D8300(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x2F0);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x598);
            return result;

            break;
        }
        case 0x27DC270: // 0x28ACAA0 - 104
        {
            // __int64 __fastcall sub_27DC270(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x710) + 0x1E8i64) + 0x780i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8170: // 0x28ACAA0 - 105
        {
            // __int64 __fastcall sub_27D8170(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1F0) + 0x230i64) + 0x2B0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC630: // 0x28ACAA0 - 106
        {
            // __int64 __fastcall sub_27DC630(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0x3A8);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3A40: // 0x28ACAA0 - 107
        {
            // __int64 __fastcall sub_27D3A40(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x568) + 8i64 * (unsigned __int8)__ROL4__(a2, 0xC)) + 0x780i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2B00: // 0x28ACAA0 - 108
        {
            // __int64 __fastcall sub_27D2B00(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x378) + 0x6D8i64) + 4i64 * ((unsigned __int8)__ROL4__(a2, 0x11) & 0xD6));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D98F0: // 0x28ACAA0 - 109
        {
            // __int64 __fastcall sub_27D98F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x58) + 0x588i64) + 0x170i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D66E0: // 0x28ACAA0 - 110
        {
            // __int64 __fastcall sub_27D66E0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x430);
            *a1 ^= a2 + FuckEnc::CacheRead<_DWORD>(result + 0x308);
            return result;

            break;
        }
        case 0x27D85D0: // 0x28ACAA0 - 111
        {
            // __int64 __fastcall sub_27D85D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x600) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(a3 + 0x308) ^ 0x4Au)) + 0x390i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7F50: // 0x28ACAA0 - 112
        {
            // __int64 __fastcall sub_27D7F50(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0x390);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DDBC0: // 0x28ACAA0 - 113
        {
            // __int64 __fastcall sub_27DDBC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5A8) + 8i64 * (unsigned __int8)(0x9D * FuckEnc::CacheRead<_BYTE>(a3 + 0x4F0))) + 0x2B8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8740: // 0x28ACAA0 - 114
        {
            // __int64 __fastcall sub_27D8740(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x608) + 0xC0i64) + 4i64 * (unsigned __int8)__ROR4__(a2, 0x16));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D55B0: // 0x28ACAA0 - 115
        {
            // __int64 __fastcall sub_27D55B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x480) + 0xA0i64) + 0x4B0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4AF0: // 0x28ACAA0 - 116
        {
            // __int64 __fastcall sub_27D4AF0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = 0xFAF4F334 * ~FuckEnc::CacheRead<_DWORD>(a3 + 0x168);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCBF0: // 0x28ACAA0 - 117
        {
            // __int64 __fastcall sub_27DCBF0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(a2 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x308) << 0x1E));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5010: // 0x28ACAA0 - 118
        {
            // __int64 __fastcall sub_27D5010(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x608);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x28) ^ 0x3E08B422;
            return result;

            break;
        }
        case 0x27DBB00: // 0x28ACAA0 - 119
        {
            // __int64 __fastcall sub_27DBB00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x440);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x598);
            return result;

            break;
        }
        case 0x27D3DD0: // 0x28ACAA0 - 120
        {
            // __int64 __fastcall sub_27D3DD0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x668);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x5F8) ^ 0x9A1D2F12;
            return result;

            break;
        }
        case 0x27D45A0: // 0x28ACAA0 - 121
        {
            // __int64 __fastcall sub_27D45A0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4C0) + 0x6D8i64) + 4i64 * (unsigned __int8)(0xF3 * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD6C0: // 0x28ACAA0 - 122
        {
            // __int64 __fastcall sub_27DD6C0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x420) + 8i64 * (a2 & 0xDC)) + 0x5F8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB280: // 0x28ACAA0 - 123
        {
            // __int64 __fastcall sub_27DB280(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x438);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x688);
            return result;

            break;
        }
        case 0x27D4390: // 0x28ACAA0 - 124
        {
            // __int64 __fastcall sub_27D4390(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4C0) + 0x2E8i64) + 0xD8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D50F0: // 0x28ACAA0 - 125
        {
            // __int64 __fastcall sub_27D50F0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x618) + 0x70i64) + 4i64 * (a2 & 0x23));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D47F0: // 0x28ACAA0 - 126
        {
            // __int64 __fastcall sub_27D47F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6C8) + 0x1A8i64) + 0x6E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE260: // 0x28ACAA0 - 127
        {
            // __int64 __fastcall sub_27DE260(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4C0) + 0x448i64) + 4i64 * (a2 & 0xF1));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DDD60: // 0x28ACAA0 - 128
        {
            // __int64 __fastcall sub_27DDD60(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x48) + 8i64 * ((unsigned __int8)__ROR4__(a2, 0x16) & 0xFC)) + 0x3F8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9780: // 0x28ACAA0 - 129
        {
            // __int64 __fastcall sub_27D9780(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0xD8);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D88D0: // 0x28ACAA0 - 130
        {
            // __int64 __fastcall sub_27D88D0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x600) + 8i64 * (__ROL4__(a2, 2) & 0x55)) + 0x168i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7FF0: // 0x28ACAA0 - 131
        {
            // __int64 __fastcall sub_27D7FF0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x1B0);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x3F8);
            return result;

            break;
        }
        case 0x27D9180: // 0x28ACAA0 - 132
        {
            // __int64 __fastcall sub_27D9180(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x540) ^ 0xF175D0FF);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD560: // 0x28ACAA0 - 133
        {
            // __int64 __fastcall sub_27DD560(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xE8) + 0x388i64) + 0x3A8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD260: // 0x28ACAA0 - 134
        {
            // __int64 __fastcall sub_27DD260(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x370) + 8i64 * (a2 ^ 0x4Fu)) + 0x28i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB0D0: // 0x28ACAA0 - 135
        {
            // __int64 __fastcall sub_27DB0D0(_DWORD *a1, __int64 a2, __int64 FuckEnc::CacheRead<__int64>(a3))

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<__int64>(a3);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<__int64>(a3) + 0x690);
            return result;

            break;
        }
        case 0x27DD830: // 0x28ACAA0 - 136
        {
            // __int64 __fastcall sub_27DD830(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x190) + 8i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x638) & 0x34)) + 0x598i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5710: // 0x28ACAA0 - 137
        {
            // __int64 __fastcall sub_27D5710(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x338) + 0x668i64) + 0x78i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7260: // 0x28ACAA0 - 138
        {
            // __int64 __fastcall sub_27D7260(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (FuckEnc::CacheRead<_DWORD>(a3 + 0x390) ^ 0xBAF1u) << 0xF;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5950: // 0x28ACAA0 - 139
        {
            // void __fastcall sub_27D5950(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= (FuckEnc::CacheRead<_DWORD>(a3 + 0x1C0) * a2) ^ 0x1F17FA4D;

            break;
        }
        case 0x27D5DF0: // 0x28ACAA0 - 140
        {
            // __int64 __fastcall sub_27D5DF0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x588) + 0x6D8i64) + 4i64 * (a2 & 0x7C));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D94A0: // 0x28ACAA0 - 141
        {
            // __int64 __fastcall sub_27D94A0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xA0) + 0x728i64) + 4i64 * (unsigned __int8)__ROL4__(a2, 0x1A));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6910: // 0x28ACAA0 - 142
        {
            // __int64 __fastcall sub_27D6910(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1D0) + 8i64 * ((unsigned __int8)__ROR4__(a2, 9) & 0xC1)) + 0x688i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5AE0: // 0x28ACAA0 - 143
        {
            // __int64 __fastcall sub_27D5AE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = 0x89D7FF1F * FuckEnc::CacheRead<_DWORD>(a3 + 0x540);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D42E0: // 0x28ACAA0 - 144
        {
            // __int64 __fastcall sub_27D42E0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(a2 + FuckEnc::CacheRead<_DWORD>(a3 + 0x118));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D33D0: // 0x28ACAA0 - 145
        {
            // __int64 __fastcall sub_27D33D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0x780);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3B00: // 0x28ACAA0 - 146
        {
            // __int64 __fastcall sub_27D3B00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x608) + 0x230i64) + 0x6E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4C70: // 0x28ACAA0 - 147
        {
            // __int64 __fastcall sub_27D4C70(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3D8) + 0x2F0i64) + 0x368i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB840: // 0x28ACAA0 - 148
        {
            // __int64 __fastcall sub_27DB840(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x708) + 0x350i64) + 4i64 * (a2 ^ 0xB2u));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DDE20: // 0x28ACAA0 - 149
        {
            // __int64 __fastcall sub_27DDE20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(FuckEnc::CacheRead<_DWORD>(a3 + 0x1C0) + 0x4D08AA39);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE4C0: // 0x28ACAA0 - 150
        {
            // __int64 __fastcall sub_27DE4C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x20) & 0xFFFFFFFD);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3810: // 0x28ACAA0 - 151
        {
            // __int64 __fastcall sub_27D3810(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheReadPlural<_QWORD>(a3 + 0x588) + 0x78i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D40B0: // 0x28ACAA0 - 152
        {
            // __int64 __fastcall sub_27D40B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = 0xD1FF415F * ~FuckEnc::CacheRead<_DWORD>(a3 + 0x620);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB010: // 0x28ACAA0 - 153
        {
            // __int64 __fastcall sub_27DB010(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2F8) + 0x148i64) + 0x260i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D39B0: // 0x28ACAA0 - 154
        {
            // __int64 __fastcall sub_27D39B0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1B0) + 0x300i64) + 4i64 * (unsigned __int8)__ROL4__(a2, 0x14));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9FA0: // 0x28ACAA0 - 155
        {
            // __int64 __fastcall sub_27D9FA0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6F0) + 8i64 * (unsigned __int8)(0xA8 * a2)) + 0x168i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D35D0: // 0x28ACAA0 - 156
        {
            // __int64 __fastcall sub_27D35D0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1A0) + 0x6D8i64) + 4i64 * (a2 & 0x52));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE850: // 0x28ACAA0 - 157
        {
            // __int64 __fastcall sub_27DE850(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x5E0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x760) + 0x3F8i64) & 0x84));
            return result;

            break;
        }
        case 0x27D6E00: // 0x28ACAA0 - 158
        {
            // __int64 __fastcall sub_27D6E00(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3) + 0x498i64) + 4i64 * (unsigned __int8)(0x28 * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA6E0: // 0x28ACAA0 - 159
        {
            // __int64 __fastcall sub_27DA6E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6B0) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(a3 + 0x540) ^ 0xFAu)) + 0x540i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4180: // 0x28ACAA0 - 160
        {
            // __int64 __fastcall sub_27D4180(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2F0) + 0x1B8i64) + 4i64 * (a2 & 0xEF));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA8B0: // 0x28ACAA0 - 161
        {
            // __int64 __fastcall sub_27DA8B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(FuckEnc::CacheRead<_DWORD>(a3 + 0x4D8) + 0x3A474E6F);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5C70: // 0x28ACAA0 - 162
        {
            // void __fastcall sub_27D5C70(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x2B8) * a2);

            break;
        }
        case 0x27D3520: // 0x28ACAA0 - 163
        {
            // __int64 __fastcall sub_27D3520(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6F0) + 8i64 * (unsigned __int8)(0xC3 * a2)) + 0x260i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5430: // 0x28ACAA0 - 164
        {
            // __int64 __fastcall sub_27D5430(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6C0) + 0x578i64) + 0x248i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D54F0: // 0x28ACAA0 - 165
        {
            // __int64 __fastcall sub_27D54F0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x600) + 8i64 * (unsigned __int8)(0x66 * a2)) + 0x28i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D99A0: // 0x28ACAA0 - 166
        {
            // __int64 __fastcall sub_27D99A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(FuckEnc::CacheRead<_DWORD>(a3 + 0x3A8) + 0x4651E962);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA7B0: // 0x28ACAA0 - 167
        {
            // __int64 __fastcall sub_27DA7B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x5E0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x78) & 0xAD));
            return result;

            break;
        }
        case 0x27D8690: // 0x28ACAA0 - 168
        {
            // __int64 __fastcall sub_27D8690(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (FuckEnc::CacheRead<_DWORD>(a3 + 0x260) ^ 0x56C30131u) + 0x1526A457;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7DE0: // 0x28ACAA0 - 169
        {
            // __int64 __fastcall sub_27D7DE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x300);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(a3 + 0x6E0) ^ 0xC) & 0x3F));
            return result;

            break;
        }
        case 0x27DC190: // 0x28ACAA0 - 170
        {
            // __int64 __fastcall sub_27DC190(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x578);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x688) | 0x15;
            return result;

            break;
        }
        case 0x27D8460: // 0x28ACAA0 - 171
        {
            // __int64 __fastcall sub_27D8460(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xE0) + 8i64 * (unsigned __int8)(0xC1 * a2)) + 0x620i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBDB0: // 0x28ACAA0 - 172
        {
            // __int64 __fastcall sub_27DBDB0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            // Utils::Log(1, "0x%llX 0x%llX", a2, a3);

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x190) + 8i64 * (unsigned __int8)(0x2C * a2)) + 0x400i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3690: // 0x28ACAA0 - 173
        {
            // __int64 __fastcall sub_27D3690(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x68);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x390) - 0x2C7A8FDD;
            return result;

            break;
        }
        case 0x27DD090: // 0x28ACAA0 - 174
        {
            // __int64 __fastcall sub_27DD090(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x608) + 0x580i64) + 0x368i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6020: // 0x28ACAA0 - 175
        {
            // __int64 __fastcall sub_27D6020(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x478);
            *a1 ^= (_DWORD)0xED387CE + FuckEnc::CacheRead<_DWORD>(result + 0x740);
            return result;

            break;
        }
        case 0x27D96D0: // 0x28ACAA0 - 176
        {
            // __int64 __fastcall sub_27D96D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = 0x15F78D5F * (FuckEnc::CacheRead<_DWORD>(a3 + 0x3A8) ^ 0xBBD1FF41);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9D60: // 0x28ACAA0 - 177
        {
            // __int64 __fastcall sub_27D9D60(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(0x19D31DA * FuckEnc::CacheRead<_DWORD>(a3 + 0x260));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC920: // 0x28ACAA0 - 178
        {
            // __int64 __fastcall sub_27DC920(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x568) + 8i64 * (a2 ^ 0x2Du)) + 0x740i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5BA0: // 0x28ACAA0 - 179
        {
            // __int64 __fastcall sub_27D5BA0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x509755FD * FuckEnc::CacheRead<_DWORD>(a3 + 0x638) + 0x3381B62A);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4BA0: // 0x28ACAA0 - 180
        {
            // __int64 __fastcall sub_27D4BA0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3D8) + 0x520i64) + 0x598i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB640: // 0x28ACAA0 - 181
        {
            // __int64 __fastcall sub_27DB640(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x4D0);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x780);
            return result;

            break;
        }
        case 0x27DD5F0: // 0x28ACAA0 - 182
        {
            // __int64 __fastcall sub_27DD5F0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4C0) + 0x590i64) + 4i64 * ((unsigned __int8)__ROR4__(a2, 0xD) & 0xE1));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4720: // 0x28ACAA0 - 183
        {
            // __int64 __fastcall sub_27D4720(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x318) + 8i64 * (unsigned __int8)__ROL4__(a2, 3)) + 0x100i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DDCA0: // 0x28ACAA0 - 184
        {
            // __int64 __fastcall sub_27DDCA0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x618);
            *a1 ^= a2 + FuckEnc::CacheRead<_DWORD>(result + 0x368);
            return result;

            break;
        }
        case 0x27D9830: // 0x28ACAA0 - 185
        {
            // __int64 __fastcall sub_27D9830(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(FuckEnc::CacheRead<_DWORD>(a3 + 0x638) + 0x3B487C85);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DAA90: // 0x28ACAA0 - 186
        {
            // __int64 __fastcall sub_27DAA90(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x338) + 0x5C0i64) + 0x78i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6C00: // 0x28ACAA0 - 187
        {
            // __int64 __fastcall sub_27D6C00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xA8) + 0x440i64) + 0x2B8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB190: // 0x28ACAA0 - 188
        {
            // __int64 __fastcall sub_27DB190(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0xC0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (__ROL4__(0x8619D0FF * FuckEnc::CacheRead<_DWORD>(a3 + 0x400), 8) & 0x23));
            return result;

            break;
        }
        case 0x27DE100: // 0x28ACAA0 - 189
        {
            // __int64 __fastcall sub_27DE100(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0xA0);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x4B0);
            return result;

            break;
        }
        case 0x27D8520: // 0x28ACAA0 - 190
        {
            // __int64 __fastcall sub_27D8520(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x4D8) | 0x11u);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB380: // 0x28ACAA0 - 192
        {
            // __int64 __fastcall sub_27DB380(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(a2 + ~FuckEnc::CacheRead<_DWORD>(a3 + 0x260));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA060: // 0x28ACAA0 - 193
        {
            // __int64 __fastcall sub_27DA060(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x388) + 0x6D8i64) + 4i64 * (unsigned __int8)(0xA * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DEB20: // 0x28ACAA0 - 194
        {
            // __int64 __fastcall sub_27DEB20(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x568) + 8i64 * a2) + 0xD8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5F60: // 0x28ACAA0 - 195
        {
            // __int64 __fastcall sub_27D5F60(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x760) + 0x1A8i64) + 0x768i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBCC0: // 0x28ACAA0 - 196
        {
            // __int64 __fastcall sub_27DBCC0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x600) + 8i64 * (a2 ^ 0xF5u)) + 0x4B0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3F50: // 0x28ACAA0 - 197
        {
            // __int64 __fastcall sub_27D3F50(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2E8) + 0x208i64) + 4i64 * (unsigned __int8)__ROL4__(a2, 0x18));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5D20: // 0x28ACAA0 - 198
        {
            // __int64 __fastcall sub_27D5D20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x350);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (unsigned __int8)(0x90 * FuckEnc::CacheRead<_BYTE>(a3 + 0x220)));
            return result;

            break;
        }
        case 0x27D3300: // 0x28ACAA0 - 199
        {
            // __int64 __fastcall sub_27D3300(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1D0) + 8i64 * (a2 & 0xA7)) + 0x368i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8EC0: // 0x28ACAA0 - 200
        {
            // __int64 __fastcall sub_27D8EC0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5C8) + 0x448i64) + 4i64 * (a2 & 0x57));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DEA90: // 0x28ACAA0 - 201
        {
            // __int64 __fastcall sub_27DEA90(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = *a1 ^ FuckEnc::CacheRead<_DWORD>(a3 + 0x220) ^ 0xAEA1107B;
            *a1 = result;
            return result;

            break;
        }
        case 0x27D8C90: // 0x28ACAA0 - 202
        {
            // __int64 __fastcall sub_27D8C90(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (FuckEnc::CacheRead<_DWORD>(a3 + 0x780) ^ 0x50B50CDDu) - 0x3CFE76BC;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE6E0: // 0x28ACAA0 - 203
        {
            // __int64 __fastcall sub_27DE6E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x440) + 0x760i64) + 0x540i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3BB0: // 0x28ACAA0 - 204
        {
            // __int64 __fastcall sub_27D3BB0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x430) + 0x430i64) + 0x248i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6350: // 0x28ACAA0 - 205
        {
            // __int64 __fastcall sub_27D6350(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x608);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x100) >> 0x17;
            return result;

            break;
        }
        case 0x27D8800: // 0x28ACAA0 - 206
        {
            // __int64 __fastcall sub_27D8800(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x618) + 0x60i64) + 0x28i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD310: // 0x28ACAA0 - 207
        {
            // __int64 __fastcall sub_27DD310(_DWORD *a1, unsigned int a2, __int64 a3)

            a2 = (unsigned int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x5F8) ^ a2);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7310: // 0x28ACAA0 - 208
        {
            // void __fastcall sub_27D7310(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= ~(FuckEnc::CacheRead<_DWORD>(a3 + 0xD8) ^ a2);

            break;
        }
        case 0x27DD3C0: // 0x28ACAA0 - 209
        {
            // __int64 __fastcall sub_27DD3C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~(0xC30131C2 * FuckEnc::CacheRead<_DWORD>(a3 + 0x780));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9BE0: // 0x28ACAA0 - 210
        {
            // __int64 __fastcall sub_27D9BE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x378) + 0x388i64) + 0x400i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE1C0: // 0x28ACAA0 - 211
        {
            // __int64 __fastcall sub_27DE1C0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x480) + 0x1B8i64) + 4i64 * (a2 & 0xA3));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D52A0: // 0x28ACAA0 - 212
        {
            // __int64 __fastcall sub_27D52A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x578);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x598);
            return result;

            break;
        }
        case 0x27DCA20: // 0x28ACAA0 - 213
        {
            // __int64 __fastcall sub_27DCA20(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x420) + 8i64 * (__ROR4__(a2, 0x1F) & 0x6A)) + 0x4D8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DDA40: // 0x28ACAA0 - 214
        {
            // __int64 __fastcall sub_27DDA40(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x2F8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x100) ^ 0xC3018944;
            return result;

            break;
        }
        case 0x27DA2A0: // 0x28ACAA0 - 215
        {
            // __int64 __fastcall sub_27DA2A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(FuckEnc::CacheRead<_DWORD>(a3 + 0x548) + 0xA70BD3A);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA410: // 0x28ACAA0 - 216
        {
            // __int64 __fastcall sub_27DA410(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (FuckEnc::CacheRead<_DWORD>(a3 + 0x308) >> 0x13) & 0x1FEF;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6F60: // 0x28ACAA0 - 217
        {
            // __int64 __fastcall sub_27D6F60(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1A8) + 0x5E0i64) + 4i64 * (a2 & 9));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9030: // 0x28ACAA0 - 218
        {
            // __int64 __fastcall sub_27D9030(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xE0) + 8i64 * (unsigned __int8)(0xA7 * a2)) + 0x690i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9CA0: // 0x28ACAA0 - 219
        {
            // __int64 __fastcall sub_27D9CA0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3D8) + 0x588i64) + 0x168i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D30E0: // 0x28ACAA0 - 220
        {
            // __int64 __fastcall sub_27D30E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = *a1 ^ FuckEnc::CacheRead<_DWORD>(a3 + 0x2B0) ^ 0x4D693917u;
            *a1 = result;
            return result;

            break;
        }
        case 0x27DCB10: // 0x28ACAA0 - 221
        {
            // __int64 __fastcall sub_27DCB10(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x750) + 0x4C0i64) + 0x688i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7EA0: // 0x28ACAA0 - 222
        {
            // __int64 __fastcall sub_27D7EA0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(FuckEnc::CacheRead<_DWORD>(a3 + 0x598) >> 0xD);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5370: // 0x28ACAA0 - 223
        {
            // __int64 __fastcall sub_27D5370(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1F0) + 0x1F0i64) + 0x5F8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB550: // 0x28ACAA0 - 224
        {
            // void __fastcall sub_27DB550(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= (unsigned int)0xFF56972 ^ (FuckEnc::CacheRead<_DWORD>(a3 + 0x1C0) * a2);

            break;
        }
        case 0x27DEBF0: // 0x28ACAA0 - 225
        {
            // __int64 __fastcall sub_27DEBF0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x388) + 0x430i64) + 0x690i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9370: // 0x28ACAA0 - 226
        {
            // __int64 __fastcall sub_27D9370(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x750) + 0x2F0i64) + 0x740i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8BD0: // 0x28ACAA0 - 227
        {
            // __int64 __fastcall sub_27D8BD0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1D0) + 8i64 * (unsigned __int8)__ROL4__(a2, 8)) + 0x390i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DDED0: // 0x28ACAA0 - 228
        {
            // __int64 __fastcall sub_27DDED0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x668) + 0x60i64) + 0x688i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7B20: // 0x28ACAA0 - 229
        {
            // __int64 __fastcall sub_27D7B20(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1D0) + 8i64 * (unsigned __int8)(0xC3 * a2)) + 0x690i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA630: // 0x28ACAA0 - 230
        {
            // __int64 __fastcall sub_27DA630(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0xC0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(a3 + 0x368) ^ 0x58) & 0xDE));
            return result;

            break;
        }
        case 0x27D3480: // 0x28ACAA0 - 231
        {
            // __int64 __fastcall sub_27D3480(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2D8) + 8i64 * ((0xEF * a2) & 0x33)) + 0x620i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4660: // 0x28ACAA0 - 232
        {
            // __int64 __fastcall sub_27D4660(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = *a1 ^ (0xA999387E * FuckEnc::CacheRead<_DWORD>(a3 + 0x548)) ^ 0xA12108FF;
            *a1 = result;
            return result;

            break;
        }
        case 0x27D2F50: // 0x28ACAA0 - 233
        {
            // __int64 __fastcall sub_27D2F50(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x290);
            *a1 ^= 0xD1FF411F * FuckEnc::CacheRead<_DWORD>(result + 0x4B0);
            return result;

            break;
        }
        case 0x27DAE50: // 0x28ACAA0 - 234
        {
            // __int64 __fastcall sub_27DAE50(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2D8) + 8i64 * (a2 ^ 0x34u)) + 0x118i64);
            // Utils::Log(1, "0x%llX 0x%llX 0x%llX 0x%llX", a2, a3, result, (unsigned int)(*a1));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE9C0: // 0x28ACAA0 - 235
        {
            // __int64 __fastcall sub_27DE9C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x478);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x260) & 0xFFFFFFFE;
            return result;

            break;
        }
        case 0x27D8E10: // 0x28ACAA0 - 236
        {
            // __int64 __fastcall sub_27D8E10(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x1A8);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x390);
            return result;

            break;
        }
        case 0x27DCEE0: // 0x28ACAA0 - 237
        {
            // __int64 __fastcall sub_27DCEE0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x230) + 0x350i64) + 4i64 * (a2 & 0xAE));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA360: // 0x28ACAA0 - 238
        {
            // __int64 __fastcall sub_27DA360(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x568) + 8i64 * (a2 & 0x37)) + 0xD8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCDE0: // 0x28ACAA0 - 239
        {
            // __int64 __fastcall sub_27DCDE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = *a1 ^ FuckEnc::CacheRead<_DWORD>(a3 + 0x368) ^ 0xC9CE0319;
            *a1 = result;
            return result;

            break;
        }
        case 0x27D6EB0: // 0x28ACAA0 - 240
        {
            // __int64 __fastcall sub_27D6EB0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x228) + 8i64 * (unsigned __int8)__ROR4__(a2, 0xD)) + 0x28i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5660: // 0x28ACAA0 - 241
        {
            // __int64 __fastcall sub_27D5660(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x430) + 0x6D8i64) + 4i64 * ((a2 ^ 0x12) & 0x72));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D90E0: // 0x28ACAA0 - 242
        {
            // __int64 __fastcall sub_27D90E0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2D8) + 8i64 * (unsigned __int8)__ROL4__(a2, 0x1A)) + 0x3F8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6850: // 0x28ACAA0 - 243
        {
            // __int64 __fastcall sub_27D6850(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x618);
            *a1 ^= 0x5EB1FC5F * FuckEnc::CacheRead<_DWORD>(result + 0x540);
            return result;

            break;
        }
        case 0x27D4D10: // 0x28ACAA0 - 244
        {
            // __int64 __fastcall sub_27D4D10(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x1B8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x368) & 0x79));
            return result;

            break;
        }
        case 0x27DAC70: // 0x28ACAA0 - 245
        {
            // __int64 __fastcall sub_27DAC70(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x578) + 0x588i64) + 0x20i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7480: // 0x28ACAA0 - 246
        {
            // __int64 __fastcall sub_27D7480(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2F0) + 0x448i64) + 4i64 * (a2 & 0xF3));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE630: // 0x28ACAA0 - 247
        {
            // __int64 __fastcall sub_27DE630(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0x3F8);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D77F0: // 0x28ACAA0 - 248
        {
            // __int64 __fastcall sub_27D77F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x290);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x6E0);
            return result;

            break;
        }
        case 0x27DA1E0: // 0x28ACAA0 - 249
        {
            // __int64 __fastcall sub_27DA1E0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xE0) + 8i64 * (__ROR4__(a2, 0x18) & 0x6D)) + 0x768i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8970: // 0x28ACAA0 - 250
        {
            // __int64 __fastcall sub_27D8970(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x480) + 0x388i64) + 0x248i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8F80: // 0x28ACAA0 - 251
        {
            // __int64 __fastcall sub_27D8F80(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x668);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x768);
            return result;

            break;
        }
        case 0x27D9280: // 0x28ACAA0 - 252
        {
            // __int64 __fastcall sub_27D9280(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x370) + 8i64 * (unsigned __int8)(0x86 * a2)) + 0x780i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4980: // 0x28ACAA0 - 253
        {
            // __int64 __fastcall sub_27D4980(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x208);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1A8) + 0x2B8i64) & 0x7F));
            return result;

            break;
        }
        case 0x27D3D30: // 0x28ACAA0 - 254
        {
            // __int64 __fastcall sub_27D3D30(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x478);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x1C0) ^ 0xE4B017D2;
            return result;

            break;
        }
        case 0x27D7BC0: // 0x28ACAA0 - 255
        {
            // __int64 __fastcall sub_27D7BC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xA8) + 0x520i64) + 0x690i64);
            *a1 ^= result;
            return result;

            break;
        }
        // Main Function 0x28ACAA0 End

        // Main Function 0x28AE250 Start
        case 0x27D7040: // 0x28AE250 - 0
        {
            // __int64 __fastcall sub_27D7040(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x300) + 0x750i64) + 0x3A8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8190: // 0x28AE250 - 1
        {
            // __int64 __fastcall sub_27D8190(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = *a1 ^ (FuckEnc::CacheRead<_DWORD>(a3 + 0x780) - 0x7463712E) ^ 0xAE8CB70D;
            *a1 = result;
            return result;

            break;
        }
        case 0x27D9580: // 0x28AE250 - 2
        {
            // __int64 __fastcall sub_27D9580(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4B0) + 8i64 * (a2 ^ 0x99u)) + 0x3A8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6E20: // 0x28AE250 - 3
        {
            // __int64 __fastcall sub_27D6E20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6D8) + 0x6F0i64) + 0x338i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3BD0: // 0x28AE250 - 4
        {
            // __int64 __fastcall sub_27D3BD0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x500) + 0x1D0i64) + 0x308i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D96F0: // 0x28AE250 - 5
        {
            // __int64 __fastcall sub_27D96F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x640);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x4F0) ^ 0xC31131B0;
            return result;

            break;
        }
        case 0x27D3C90: // 0x28AE250 - 6
        {
            // __int64 __fastcall sub_27D3C90(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x70) + 0x658i64) + 4i64 * ((0xC8 * a2) & 0x79));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3100: // 0x28AE250 - 7
        {
            // __int64 __fastcall sub_27D3100(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4D8) + 0x3B8i64) + 0x458i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5390: // 0x28AE250 - 8
        {
            // __int64 __fastcall sub_27D5390(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = 0x8028D10B * FuckEnc::CacheRead<_DWORD>(a3 + 0x410) * a2;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3DF0: // 0x28AE250 - 9
        {
            // __int64 __fastcall sub_27D3DF0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x2E0) ^ 0xA7C31131);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB0E0: // 0x28AE250 - 10
        {
            // __int64 __fastcall sub_27DB0E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ((unsigned int)0xF2A9309 ^ FuckEnc::CacheRead<_DWORD>(a3 + 0x558)) + 0x49C551AE;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD0B0: // 0x28AE250 - 11
        {
            // __int64 __fastcall sub_27DD0B0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x90) + 8i64 * ((unsigned __int8)(0xDE * a2) & 0xAB)) + 0x310i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9390: // 0x28AE250 - 12
        {
            // __int64 __fastcall sub_27D9390(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(a2 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x2C8) + 1));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBC00: // 0x28AE250 - 13
        {
            // __int64 __fastcall sub_27DBC00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x378);
            *a1 ^= 0xA050B0F8 * FuckEnc::CacheRead<_DWORD>(result + 0x6E8);
            return result;

            break;
        }
        case 0x27D78B0: // 0x28AE250 - 14
        {
            // __int64 __fastcall sub_27D78B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_DWORD>(a3 + 0x78) | 0x13u;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DEAB0: // 0x28AE250 - 15
        {
            // void __fastcall sub_27DEAB0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= (FuckEnc::CacheRead<_DWORD>(a3 + 0x198) ^ a2) + 0x6BD1FF41;

            break;
        }
        case 0x27DA380: // 0x28AE250 - 16
        {
            // __int64 __fastcall sub_27DA380(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1D8) + 8i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x180) & 0xDD)) + 0x6E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D71A0: // 0x28AE250 - 17
        {
            // __int64 __fastcall sub_27D71A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_DWORD>(a3 + 0x1C0) ^ 0xEB5D56FF | 0x17;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9420: // 0x28AE250 - 18
        {
            // __int64 __fastcall sub_27D9420(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x70);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x480);
            return result;

            break;
        }
        case 0x27D83D0: // 0x28AE250 - 19
        {
            // __int64 __fastcall sub_27D83D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0x180);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3540: // 0x28AE250 - 20
        {
            // __int64 __fastcall sub_27D3540(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (FuckEnc::CacheRead<_DWORD>(a3 + 0x5C8) ^ 0xF8859BEB) & 0xFFFFFFF4;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9B50: // 0x28AE250 - 21
        {
            // void __fastcall sub_27D9B50(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x6A0) * a2);

            break;
        }
        case 0x27DB030: // 0x28AE250 - 22
        {
            // __int64 __fastcall sub_27DB030(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x600) + 0x4F8i64) + 0x78i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4020: // 0x28AE250 - 23
        {
            // __int64 __fastcall sub_27D4020(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = 0xEC6F7A00 * FuckEnc::CacheRead<_DWORD>(a3 + 0x80);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8600: // 0x28AE250 - 24
        {
            // __int64 __fastcall sub_27D8600(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x590);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x260);
            return result;

            break;
        }
        case 0x27D6110: // 0x28AE250 - 25
        {
            // __int64 __fastcall sub_27D6110(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x378) + 0x648i64) + 0x428i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA590: // 0x28AE250 - 26
        {
            // __int64 __fastcall sub_27DA590(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x648) + 0x278i64) + 4i64 * (unsigned __int8)(0xDD * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7EB0: // 0x28AE250 - 27
        {
            // __int64 __fastcall sub_27D7EB0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4F8) + 0x4F8i64) + 0x410i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2EB0: // 0x28AE250 - 28
        {
            // __int64 __fastcall sub_27D2EB0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3A0) + 8i64 * ((0x15 * a2) & 0x31)) + 0x1C0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9A80: // 0x28AE250 - 29
        {
            // __int64 __fastcall sub_27D9A80(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x740) + 8i64 * (a2 & 0xE3)) + 0x118i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D55D0: // 0x28AE250 - 30
        {
            // __int64 __fastcall sub_27D55D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x270);
            *a1 ^= 0x2CA5CE1B * FuckEnc::CacheRead<_DWORD>(result + 0x6A0);
            return result;

            break;
        }
        case 0x27DA150: // 0x28AE250 - 31
        {
            // __int64 __fastcall sub_27DA150(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x320) + 8i64 * (a2 & 0xC9)) + 0x1C0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5970: // 0x28AE250 - 32
        {
            // __int64 __fastcall sub_27D5970(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x318) + 0x2F8i64) + 0x480i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4510: // 0x28AE250 - 33
        {
            // __int64 __fastcall sub_27D4510(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x640) + 0x6D0i64) + 0x2E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA7D0: // 0x28AE250 - 34
        {
            // __int64 __fastcall sub_27DA7D0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4B0) + 8i64 * (a2 & 0x7D)) + 0x5C8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2D50: // 0x28AE250 - 35
        {
            // __int64 __fastcall sub_27D2D50(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x4C0);
            *a1 ^= 0xF8C31131 * FuckEnc::CacheRead<_DWORD>(result + 0x410);
            return result;

            break;
        }
        case 0x27DC0D0: // 0x28AE250 - 36
        {
            // __int64 __fastcall sub_27DC0D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x3B0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x780) & 0xFFFFFFE7;
            return result;

            break;
        }
        case 0x27D3270: // 0x28AE250 - 37
        {
            // __int64 __fastcall sub_27D3270(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x460) + 0x3C0i64) + 4i64 * (a2 & 0xB6));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4A50: // 0x28AE250 - 38
        {
            // __int64 __fastcall sub_27D4A50(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x448) + 0x318i64) + 0x5C8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DAC90: // 0x28AE250 - 39
        {
            // __int64 __fastcall sub_27DAC90(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x268) + 0xE0i64) + 0x2E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6420: // 0x28AE250 - 40
        {
            // __int64 __fastcall sub_27D6420(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x100) + 0x768i64) + 0x480i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5680: // 0x28AE250 - 41
        {
            // __int64 __fastcall sub_27D5680(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6F0) + 0x390i64) + 0x198i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA8D0: // 0x28AE250 - 42
        {
            // __int64 __fastcall sub_27DA8D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x648) + 0x228i64) + 0x570i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DDA60: // 0x28AE250 - 43
        {
            // __int64 __fastcall sub_27DDA60(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x620) + 0x798i64) + 4i64 * (unsigned __int8)(0x58 * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4D30: // 0x28AE250 - 44
        {
            // __int64 __fastcall sub_27D4D30(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3A0) + 8i64 * ((unsigned __int8)(0x92 * FuckEnc::CacheRead<_BYTE>(a3 + 0x6A0)) & 0xFB)) + 0x428i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D48D0: // 0x28AE250 - 45
        {
            // __int64 __fastcall sub_27D48D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0x38);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE7B0: // 0x28AE250 - 46
        {
            // __int64 __fastcall sub_27DE7B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x748) + 0x460i64) + 0x180i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9850: // 0x28AE250 - 47
        {
            // __int64 __fastcall sub_27D9850(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x750);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x570) ^ 0xF1DD4E62;
            return result;

            break;
        }
        case 0x27D9CC0: // 0x28AE250 - 48
        {
            // __int64 __fastcall sub_27D9CC0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x248) + 0x7A0i64) + 4i64 * (unsigned __int8)__ROL4__(a2, 0x1E));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3760: // 0x28AE250 - 49
        {
            // __int64 __fastcall sub_27D3760(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x258) + 8i64 * (a2 & 0xC)) + 0x308i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DDD80: // 0x28AE250 - 50
        {
            // __int64 __fastcall sub_27DDD80(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(a2 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x638) - 0x608CA7BF));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE700: // 0x28AE250 - 51
        {
            // __int64 __fastcall sub_27DE700(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x390) + 0x248i64) + 0x5A0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D28C0: // 0x28AE250 - 52
        {
            // __int64 __fastcall sub_27D28C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0x638);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC370: // 0x28AE250 - 53
        {
            // __int64 __fastcall sub_27DC370(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = *a1 ^ (FuckEnc::CacheRead<_DWORD>(a3 + 0x260) + 0x4F7166C8) ^ 0xC8FA5C6A;
            *a1 = result;
            return result;

            break;
        }
        case 0x27DD580: // 0x28AE250 - 54
        {
            // __int64 __fastcall sub_27DD580(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x2E85C280 * FuckEnc::CacheRead<_DWORD>(a3 + 0x50));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3D50: // 0x28AE250 - 55
        {
            // __int64 __fastcall sub_27D3D50(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x280);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (unsigned __int8)(0xFA * FuckEnc::CacheRead<_BYTE>(a3 + 0x6E0)));
            return result;

            break;
        }
        case 0x27D58A0: // 0x28AE250 - 56
        {
            // __int64 __fastcall sub_27D58A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x72265161 * FuckEnc::CacheRead<_DWORD>(a3 + 0x78));
            *a1 ^= 0x34955F67 - result;
            return result;

            break;
        }
        case 0x27D4680: // 0x28AE250 - 57
        {
            // __int64 __fastcall sub_27D4680(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x100) + 0x100i64) + 0x780i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5BC0: // 0x28AE250 - 58
        {
            // __int64 __fastcall sub_27D5BC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x120);
            *a1 ^= 0xC3113147 * FuckEnc::CacheRead<_DWORD>(result + 0x338);
            return result;

            break;
        }
        case 0x27D33E0: // 0x28AE250 - 59
        {
            // __int64 __fastcall sub_27D33E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x630) + 8i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x1F0) & 0x8D)) + 0x338i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC740: // 0x28AE250 - 60
        {
            // __int64 __fastcall sub_27DC740(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x768) + 0x268i64) + 0x1F0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7B40: // 0x28AE250 - 61
        {
            // __int64 __fastcall sub_27D7B40(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x370) + 0x510i64) + 4i64 * (a2 & 0xB5));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB1B0: // 0x28AE250 - 62
        {
            // __int64 __fastcall sub_27DB1B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(FuckEnc::CacheRead<_DWORD>(a3 + 0x50) >> 2);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7810: // 0x28AE250 - 63
        {
            // __int64 __fastcall sub_27D7810(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x68) + 0x588i64) + 0x428i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D73D0: // 0x28AE250 - 64
        {
            // __int64 __fastcall sub_27D73D0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x320) + 8i64 * (unsigned __int8)(0xBB * a2)) + 0x260i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5E10: // 0x28AE250 - 65
        {
            // __int64 __fastcall sub_27D5E10(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1B0) + 0x440i64) + 0x5C8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB750: // 0x28AE250 - 66
        {
            // __int64 __fastcall sub_27DB750(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6F8) + 8i64 * (__ROL4__(FuckEnc::CacheRead<_DWORD>(a3 + 0x6A0), 0x1E) & 0x25)) + 0x780i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9910: // 0x28AE250 - 67
        {
            // __int64 __fastcall sub_27D9910(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = 0x331841DA * (FuckEnc::CacheRead<_DWORD>(a3 + 0x38) | 0x1Eu);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE4D0: // 0x28AE250 - 68
        {
            // __int64 __fastcall sub_27DE4D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x500);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x570) >> 0x12;
            return result;

            break;
        }
        case 0x27DC640: // 0x28AE250 - 69
        {
            // __int64 __fastcall sub_27DC640(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x2F8);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x2C8);
            return result;

            break;
        }
        case 0x27D88F0: // 0x28AE250 - 70
        {
            // __int64 __fastcall sub_27D88F0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x230) + 0x130i64) + 4i64 * (unsigned __int8)__ROR4__(a2, 5));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7BE0: // 0x28AE250 - 71
        {
            // __int64 __fastcall sub_27D7BE0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x120) + 0x658i64) + 4i64 * (unsigned __int8)__ROR4__(a2, 0x14));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9640: // 0x28AE250 - 73
        {
            // __int64 __fastcall sub_27D9640(_DWORD *a1, unsigned int a2, __int64 a3)

            a2 = (unsigned int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 + (FuckEnc::CacheRead<_DWORD>(a3 + 0x118) ^ a2);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DDBE0: // 0x28AE250 - 74
        {
            // __int64 __fastcall sub_27DDBE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x448) + 0x370i64) + 0x6B8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4C90: // 0x28AE250 - 75
        {
            // __int64 __fastcall sub_27D4C90(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0x710);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D80D0: // 0x28AE250 - 76
        {
            // __int64 __fastcall sub_27D80D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x750);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x50) + 0x4C5A9F84;
            return result;

            break;
        }
        case 0x27DC550: // 0x28AE250 - 77
        {
            // __int64 __fastcall sub_27DC550(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1B8) + 0x658i64) + 4i64 * (unsigned __int8)(0x81 * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD6E0: // 0x28AE250 - 78
        {
            // __int64 __fastcall sub_27DD6E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x648);
            *a1 ^= 0xC3018944 * FuckEnc::CacheRead<_DWORD>(result + 0x6A0);
            return result;

            break;
        }
        case 0x27D8820: // 0x28AE250 - 79
        {
            // __int64 __fastcall sub_27D8820(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4B0) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(a3 + 0x598), 0x15)) + 0x710i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE410: // 0x28AE250 - 80
        {
            // __int64 __fastcall sub_27DE410(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x448) + 0x88i64) + 0x5C8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2E20: // 0x28AE250 - 81
        {
            // __int64 __fastcall sub_27D2E20(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1B8) + 0x508i64) + 4i64 * (a2 & 0xBA));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCF00: // 0x28AE250 - 82
        {
            // __int64 __fastcall sub_27DCF00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x750);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x458);
            return result;

            break;
        }
        case 0x27D5D40: // 0x28AE250 - 83
        {
            // __int64 __fastcall sub_27D5D40(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5A8) + 0x278i64) + 4i64 * (a2 ^ 0x28u));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8320: // 0x28AE250 - 84
        {
            // __int64 __fastcall sub_27D8320(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x788) + 0x508i64) + 4i64 * (unsigned __int8)(0xED * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8D70: // 0x28AE250 - 85
        {
            // __int64 __fastcall sub_27D8D70(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4B0) + 8i64 * (a2 & 0x18)) + 0x6A0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7280: // 0x28AE250 - 86
        {
            // __int64 __fastcall sub_27D7280(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x268) + 0x3C0i64) + 4i64 * (a2 & 0xE7));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D42F0: // 0x28AE250 - 87
        {
            // __int64 __fastcall sub_27D42F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x448) + 0x460i64) + 0x118i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD320: // 0x28AE250 - 88
        {
            // __int64 __fastcall sub_27DD320(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x228) + 0x510i64) + 4i64 * ((0x27 * a2) & 0x49));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCA40: // 0x28AE250 - 89
        {
            // __int64 __fastcall sub_27DCA40(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x378);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0xA8);
            return result;

            break;
        }
        case 0x27DDEF0: // 0x28AE250 - 90
        {
            // __int64 __fastcall sub_27DDEF0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 + (FuckEnc::CacheRead<_DWORD>(a3 + 0x6A0) & 0xFFFFFFE9);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC1B0: // 0x28AE250 - 91
        {
            // __int64 __fastcall sub_27DC1B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x68);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x1F0) >> 7;
            return result;

            break;
        }
        case 0x27D8760: // 0x28AE250 - 92
        {
            // __int64 __fastcall sub_27D8760(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x270) + 0x4C0i64) + 0x428i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5800: // 0x28AE250 - 93
        {
            // __int64 __fastcall sub_27D5800(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = *a1 ^ (FuckEnc::CacheRead<_DWORD>(a3 + 0x38) + 0x70D1FF41) ^ 0xD0FFCCE0;
            *a1 = result;
            return result;

            break;
        }
        case 0x27D8480: // 0x28AE250 - 94
        {
            // __int64 __fastcall sub_27D8480(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x448) + 0x768i64) + 0x6B8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBB20: // 0x28AE250 - 95
        {
            // __int64 __fastcall sub_27DBB20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x278);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x640) + 0x310i64), 0x1D));
            return result;

            break;
        }
        case 0x27DE870: // 0x28AE250 - 96
        {
            // __int64 __fastcall sub_27DE870(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x1FAAB620 * FuckEnc::CacheRead<_DWORD>(a3 + 0x338));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6B60: // 0x28AE250 - 97
        {
            // __int64 __fastcall sub_27D6B60(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x620);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x198) << 0xB;
            return result;

            break;
        }
        case 0x27DA2C0: // 0x28AE250 - 98
        {
            // __int64 __fastcall sub_27DA2C0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x740) + 8i64 * (a2 ^ 0x1Cu)) + 0x458i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6650: // 0x28AE250 - 99
        {
            // __int64 __fastcall sub_27D6650(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x768) + 0x280i64) + 4i64 * (unsigned __int8)(0x39 * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D43B0: // 0x28AE250 - 100
        {
            // __int64 __fastcall sub_27D43B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x1B0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x570) & 0xFFFFFFFD;
            return result;

            break;
        }
        case 0x27DE900: // 0x28AE250 - 101
        {
            // __int64 __fastcall sub_27DE900(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x608) + 0x510i64) + 4i64 * ((a2 ^ 0x95) & 0xEB));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8B30: // 0x28AE250 - 102
        {
            // __int64 __fastcall sub_27D8B30(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x230) + 0x4C0i64) + 0x6B8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7CA0: // 0x28AE250 - 103
        {
            // __int64 __fastcall sub_27D7CA0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x630) + 8i64 * (unsigned __int8)(0x52 * a2)) + 0x1C0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3EB0: // 0x28AE250 - 104
        {
            // __int64 __fastcall sub_27D3EB0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x508);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(a3 + 0x410) ^ 0x20) & 0xB8));
            return result;

            break;
        }
        case 0x27D9D70: // 0x28AE250 - 105
        {
            // __int64 __fastcall sub_27D9D70(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xD8) + 8i64 * (~a2 & 0x11)) + 0x38i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD620: // 0x28AE250 - 106
        {
            // __int64 __fastcall sub_27DD620(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5B0) + 8i64 * (unsigned __int8)(0x99 * a2)) + 0x198i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D29A0: // 0x28AE250 - 107
        {
            // __int64 __fastcall sub_27D29A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2F8) + 0x68i64) + 0x338i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D99B0: // 0x28AE250 - 108
        {
            // __int64 __fastcall sub_27D99B0(_DWORD *a1, unsigned int a2, __int64 a3)

            a2 = (unsigned int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 + (FuckEnc::CacheRead<_DWORD>(a3 + 0x2E0) ^ a2);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D67C0: // 0x28AE250 - 109
        {
            // __int64 __fastcall sub_27D67C0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5B0) + 8i64 * (a2 & 0x92)) + 0x118i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7770: // 0x28AE250 - 110
        {
            // void __fastcall sub_27D7770(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x780) * a2);

            break;
        }
        case 0x27D4240: // 0x28AE250 - 111
        {
            // __int64 __fastcall sub_27D4240(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x368) + 8i64 * ((6 * a2) & 0x13)) + 0x458i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE060: // 0x28AE250 - 112
        {
            // __int64 __fastcall sub_27DE060(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x110) + 8i64 * (a2 & 0x21)) + 0x6A0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE280: // 0x28AE250 - 113
        {
            // __int64 __fastcall sub_27DE280(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x368) + 8i64 * (a2 & 0xFB)) + 0x6E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9050: // 0x28AE250 - 114
        {
            // __int64 __fastcall sub_27D9050(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(~FuckEnc::CacheRead<_DWORD>(a3 + 0x78) << 0xA);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DAD80: // 0x28AE250 - 115
        {
            // __int64 __fastcall sub_27DAD80(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x500) + 0x798i64) + 4i64 * (unsigned __int8)__ROR4__(a2, 0x10));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB570: // 0x28AE250 - 116
        {
            // __int64 __fastcall sub_27DB570(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1B0) + 0x370i64) + 0x450i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCC00: // 0x28AE250 - 117
        {
            // __int64 __fastcall sub_27DCC00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x640) + 0x750i64) + 0x450i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD280: // 0x28AE250 - 118
        {
            // __int64 __fastcall sub_27DD280(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x650);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x450) & 0xA3));
            return result;

            break;
        }
        case 0x27D9FC0: // 0x28AE250 - 119
        {
            // __int64 __fastcall sub_27D9FC0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4B0) + 8i64 * (a2 & 0xB6)) + 0x1C8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCD00: // 0x28AE250 - 120
        {
            // __int64 __fastcall sub_27DCD00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x748);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x6B8);
            return result;

            break;
        }
        case 0x27D6590: // 0x28AE250 - 121
        {
            // __int64 __fastcall sub_27D6590(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x778) + 8i64 * (a2 & 0x67)) + 0x198i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7F60: // 0x28AE250 - 122
        {
            // __int64 __fastcall sub_27D7F60(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x500) + 0x588i64) + 0x458i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB860: // 0x28AE250 - 123
        {
            // __int64 __fastcall sub_27DB860(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (0xA2860DD7 * FuckEnc::CacheRead<_DWORD>(a3 + 0x338)) & 0xFFFFFFF3;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D74A0: // 0x28AE250 - 124
        {
            // __int64 __fastcall sub_27D74A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x4B8);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x1F0);
            return result;

            break;
        }
        case 0x27D7560: // 0x28AE250 - 125
        {
            // __int64 __fastcall sub_27D7560(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x608);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x78) * a2;
            return result;

            break;
        }
        case 0x27D6930: // 0x28AE250 - 126
        {
            // __int64 __fastcall sub_27D6930(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x2F8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x458) * a2;
            return result;

            break;
        }
        case 0x27D9100: // 0x28AE250 - 127
        {
            // __int64 __fastcall sub_27D9100(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~FuckEnc::CacheRead<_DWORD>(a3 + 0x6A0) | 0xFu;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6700: // 0x28AE250 - 128
        {
            // __int64 __fastcall sub_27D6700(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x1B0);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x450);
            return result;

            break;
        }
        case 0x27D5450: // 0x28AE250 - 129
        {
            // __int64 __fastcall sub_27D5450(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x648) + 0x3C0i64) + 4i64 * (a2 & 0x8A));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD9A0: // 0x28AE250 - 130
        {
            // __int64 __fastcall sub_27DD9A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x120) + 0x640i64) + 0x6B8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D92A0: // 0x28AE250 - 131
        {
            // __int64 __fastcall sub_27D92A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x790);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x428) | 0x16;
            return result;

            break;
        }
        case 0x27D76B0: // 0x28AE250 - 132
        {
            // __int64 __fastcall sub_27D76B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x590) + 0x460i64) + 0x458i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD3D0: // 0x28AE250 - 133
        {
            // __int64 __fastcall sub_27DD3D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x378);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x6E8) ^ 0xB78D5D75;
            return result;

            break;
        }
        case 0x27DE330: // 0x28AE250 - 134
        {
            // __int64 __fastcall sub_27DE330(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x230) + 0x318i64) + 0x6E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7990: // 0x28AE250 - 135
        {
            // __int64 __fastcall sub_27D7990(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4F8) + 0x4D8i64) + 0x6E8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DDCC0: // 0x28AE250 - 136
        {
            // __int64 __fastcall sub_27DDCC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x6F0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x710) + 0x6332A573;
            return result;

            break;
        }
        case 0x27DE640: // 0x28AE250 - 137
        {
            // __int64 __fastcall sub_27DE640(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x6E8) ^ 0x14D1FF41u);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE590: // 0x28AE250 - 138
        {
            // __int64 __fastcall sub_27DE590(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x788) + 0x600i64) + 0x558i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3F70: // 0x28AE250 - 139
        {
            // void __fastcall sub_27D3F70(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= (FuckEnc::CacheRead<_DWORD>(a3 + 0x118) ^ a2) + 0x1EBFD0FF;

            break;
        }
        case 0x27D6D80: // 0x28AE250 - 140
        {
            // __int64 __fastcall sub_27D6D80(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x630) + 8i64 * ((unsigned __int8)(0x42 * a2) & 0xCA)) + 0x6E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3320: // 0x28AE250 - 141
        {
            // __int64 __fastcall sub_27D3320(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x620) + 0x138i64) + 4i64 * (__ROR4__(a2, 5) & 0xC));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCE00: // 0x28AE250 - 142
        {
            // __int64 __fastcall sub_27DCE00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x390) + 0x1B8i64) + 0x428i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8EE0: // 0x28AE250 - 143
        {
            // __int64 __fastcall sub_27D8EE0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x268);
            *a1 ^= a2 + FuckEnc::CacheRead<_DWORD>(result + 0xA8);
            return result;

            break;
        }
        case 0x27DA710: // 0x28AE250 - 144
        {
            // __int64 __fastcall sub_27DA710(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6F8) + 8i64 * (a2 & 0x82)) + 0x598i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2BE0: // 0x28AE250 - 145
        {
            // __int64 __fastcall sub_27D2BE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x588) + 0x448i64) + 0x6E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE120: // 0x28AE250 - 146
        {
            // __int64 __fastcall sub_27DE120(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x468) + 8i64 * (a2 & 0xA9)) + 0x638i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6CC0: // 0x28AE250 - 147
        {
            // __int64 __fastcall sub_27D6CC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x648) + 0x378i64) + 0x260i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4BC0: // 0x28AE250 - 148
        {
            // __int64 __fastcall sub_27D4BC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x740) + 8i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x80) & 0xE8)) + 0x308i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D36B0: // 0x28AE250 - 149
        {
            // __int64 __fastcall sub_27D36B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x4F0) | 7u);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8FA0: // 0x28AE250 - 150
        {
            // __int64 __fastcall sub_27D8FA0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x220) + 8i64 * (unsigned __int8)__ROR4__(a2, 0x15)) + 0x80i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB2A0: // 0x28AE250 - 151
        {
            // __int64 __fastcall sub_27DB2A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x790) + 0xE0i64) + 0x570i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA200: // 0x28AE250 - 152
        {
            // __int64 __fastcall sub_27DA200(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x70);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x1C8);
            return result;

            break;
        }
        case 0x27DDB20: // 0x28AE250 - 153
        {
            // __int64 __fastcall sub_27DDB20(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x100) + 0x3C8i64) + 4i64 * ((0x3A * a2) & 0x5B));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7A80: // 0x28AE250 - 154
        {
            // __int64 __fastcall sub_27D7A80(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x370) + 0x370i64) + 0x428i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBFD0: // 0x28AE250 - 155
        {
            // __int64 __fastcall sub_27DBFD0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(FuckEnc::CacheRead<_DWORD>(a3 + 0x410) + 0x3585825A);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6F80: // 0x28AE250 - 156
        {
            // __int64 __fastcall sub_27D6F80(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x368) + 8i64 * (a2 & 0x1B)) + 0x1C8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D91A0: // 0x28AE250 - 157
        {
            // __int64 __fastcall sub_27D91A0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x1D0);
            *a1 ^= a2 ^ FuckEnc::CacheRead<_DWORD>(result + 0x480);
            return result;

            break;
        }
        case 0x27DBEE0: // 0x28AE250 - 158
        {
            // __int64 __fastcall sub_27DBEE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = *a1 ^ FuckEnc::CacheRead<_DWORD>(a3 + 0x5C8) ^ 0xF9152DA1;
            *a1 = result;
            return result;

            break;
        }
        case 0x27D5730: // 0x28AE250 - 159
        {
            // __int64 __fastcall sub_27D5730(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6D0) + 0x4F8i64) + 0x78i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2B30: // 0x28AE250 - 160
        {
            // __int64 __fastcall sub_27D2B30(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1D0) + 0x68i64) + 0x1C8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DAF40: // 0x28AE250 - 161
        {
            // __int64 __fastcall sub_27DAF40(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x5A62DD7 * FuckEnc::CacheRead<_DWORD>(a3 + 0x80));
            *a1 ^= 0xA0C6CB85 - result;
            return result;

            break;
        }
        case 0x27D9E30: // 0x28AE250 - 162
        {
            // __int64 __fastcall sub_27D9E30(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x88);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x570);
            return result;

            break;
        }
        case 0x27DA080: // 0x28AE250 - 163
        {
            // __int64 __fastcall sub_27DA080(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xE8) + 0x280i64) + 4i64 * ((unsigned __int8)__ROR4__(a2, 0x14) & 0x99));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9790: // 0x28AE250 - 164
        {
            // __int64 __fastcall sub_27D9790(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2F8) + 0x68i64) + 0x6B8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8A60: // 0x28AE250 - 165
        {
            // __int64 __fastcall sub_27D8A60(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x620);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x1C0) - (_DWORD)0x133CEECF;
            return result;

            break;
        }
        case 0x27DBA20: // 0x28AE250 - 166
        {
            // __int64 __fastcall sub_27DBA20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0xE0);
            *a1 ^= 0x120EAC09 * FuckEnc::CacheRead<_DWORD>(result + 0x6B8);
            return result;

            break;
        }
        case 0x27DAAB0: // 0x28AE250 - 167
        {
            // __int64 __fastcall sub_27DAAB0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(0x760E03F5 * FuckEnc::CacheRead<_DWORD>(a3 + 0x710));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2A60: // 0x28AE250 - 168
        {
            // __int64 __fastcall sub_27D2A60(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x88);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x78) >> 0x19;
            return result;

            break;
        }
        case 0x27DA9D0: // 0x28AE250 - 169
        {
            // __int64 __fastcall sub_27DA9D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x51A8FEC3 - FuckEnc::CacheRead<_DWORD>(a3 + 0x1C8));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD7A0: // 0x28AE250 - 170
        {
            // __int64 __fastcall sub_27DD7A0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x630) + 8i64 * (a2 & 0xE)) + 0x6E8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3820: // 0x28AE250 - 171
        {
            // __int64 __fastcall sub_27D3820(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6F8) + 8i64 * (a2 & 0xAB)) + 0x428i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DEB40: // 0x28AE250 - 172
        {
            // __int64 __fastcall sub_27DEB40(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6F0) + 0x230i64) + 0x450i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5110: // 0x28AE250 - 173
        {
            // __int64 __fastcall sub_27D5110(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x50ECB1E4 * ~FuckEnc::CacheRead<_DWORD>(a3 + 0x4F0));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB490: // 0x28AE250 - 174
        {
            // __int64 __fastcall sub_27DB490(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = *a1 ^ (0xC31131AA * FuckEnc::CacheRead<_DWORD>(a3 + 0x4F0)) ^ 0x91C31131;
            *a1 = result;
            return result;

            break;
        }
        case 0x27D70E0: // 0x28AE250 - 175
        {
            // __int64 __fastcall sub_27D70E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x318) + 0x5A8i64) + 0x6A0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7E00: // 0x28AE250 - 176
        {
            // __int64 __fastcall sub_27D7E00(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2F8) + 0x278i64) + 4i64 * (unsigned __int8)(0x75 * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D41A0: // 0x28AE250 - 177
        {
            // __int64 __fastcall sub_27D41A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x4B8);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x4F0);
            return result;

            break;
        }
        case 0x27DB660: // 0x28AE250 - 178
        {
            // __int64 __fastcall sub_27DB660(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x788);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x80) ^ 0xA46E39BF;
            return result;

            break;
        }
        case 0x27D45C0: // 0x28AE250 - 179
        {
            // __int64 __fastcall sub_27D45C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x370);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x1F0) ^ 0x94C30131;
            return result;

            break;
        }
        case 0x27D31C0: // 0x28AE250 - 180
        {
            // __int64 __fastcall sub_27D31C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x500);
            *a1 ^= 0xC311312E * FuckEnc::CacheRead<_DWORD>(result + 0x1C0);
            return result;

            break;
        }
        case 0x27DB920: // 0x28AE250 - 181
        {
            // __int64 __fastcall sub_27DB920(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x458) ^ 0xAFFD651B);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8BF0: // 0x28AE250 - 182
        {
            // __int64 __fastcall sub_27D8BF0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6D0) + 0x508i64) + 4i64 * (a2 ^ 0x34u));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD850: // 0x28AE250 - 183
        {
            // void __fastcall sub_27DD850(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x558) * a2);

            break;
        }
        case 0x27D8250: // 0x28AE250 - 184
        {
            // __int64 __fastcall sub_27D8250(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x600) + 0x6D8i64) + 0x570i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8990: // 0x28AE250 - 185
        {
            // __int64 __fastcall sub_27D8990(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x460) + 0x4F8i64) + 0x260i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4740: // 0x28AE250 - 186
        {
            // __int64 __fastcall sub_27D4740(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x1B8);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x6A0);
            return result;

            break;
        }
        case 0x27D75F0: // 0x28AE250 - 187
        {
            // __int64 __fastcall sub_27D75F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3B0) + 0x270i64) + 0x570i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3A60: // 0x28AE250 - 188
        {
            // __int64 __fastcall sub_27D3A60(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x588);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x570);
            return result;

            break;
        }
        case 0x27D6ED0: // 0x28AE250 - 189
        {
            // __int64 __fastcall sub_27D6ED0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4F8) + 0x7A0i64) + 4i64 * (unsigned __int8)(0xF7 * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7320: // 0x28AE250 - 190
        {
            // __int64 __fastcall sub_27D7320(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x318) + 0x3C8i64) + 4i64 * (unsigned __int8)__ROL4__(a2, 2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7D50: // 0x28AE250 - 191
        {
            // __int64 __fastcall sub_27D7D50(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x748) + 0x278i64) + 4i64 * (unsigned __int8)(0x18 * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE9E0: // 0x28AE250 - 192
        {
            // __int64 __fastcall sub_27DE9E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x788) + 0x248i64) + 0x6E8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D49A0: // 0x28AE250 - 193
        {
            // __int64 __fastcall sub_27D49A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x4D8);
            *a1 ^= 0xC3113136 * FuckEnc::CacheRead<_DWORD>(result + 0x180);
            return result;

            break;
        }
        case 0x27DBDD0: // 0x28AE250 - 194
        {
            // __int64 __fastcall sub_27DBDD0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x128);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x310) ^ 0x5F74EBF4;
            return result;

            break;
        }
        case 0x27D8E30: // 0x28AE250 - 195
        {
            // __int64 __fastcall sub_27D8E30(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x588);
            *a1 ^= 0x2E84027 * FuckEnc::CacheRead<_DWORD>(result + 0x598);
            return result;

            break;
        }
        case 0x27DE1E0: // 0x28AE250 - 196
        {
            // __int64 __fastcall sub_27DE1E0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = 0xD1FF41AC * (a2 + FuckEnc::CacheRead<_DWORD>(a3 + 0x410));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D39D0: // 0x28AE250 - 197
        {
            // __int64 __fastcall sub_27D39D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_DWORD>(a3 + 0x180) & 0xFFFFFFF0;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D34A0: // 0x28AE250 - 198
        {
            // __int64 __fastcall sub_27D34A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x440) + 0x6D8i64) + 0x338i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC290: // 0x28AE250 - 199
        {
            // __int64 __fastcall sub_27DC290(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x378) + 0x640i64) + 0x4F0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC940: // 0x28AE250 - 200
        {
            // __int64 __fastcall sub_27DC940(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x368) + 8i64 * (a2 & 0xD3)) + 0x1C0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D35F0: // 0x28AE250 - 201
        {
            // __int64 __fastcall sub_27D35F0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3A0) + 8i64 * (a2 ^ 0x13u)) + 0x80i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3B20: // 0x28AE250 - 202
        {
            // __int64 __fastcall sub_27D3B20(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 ^ *a1 ^ (unsigned int)~FuckEnc::CacheRead<_DWORD>(a3 + 0x5C8);
            *a1 = result;
            return result;

            break;
        }
        case 0x27D2C90: // 0x28AE250 - 203
        {
            // __int64 __fastcall sub_27D2C90(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x508);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * ((unsigned __int8)(0x82 * FuckEnc::CacheRead<_BYTE>(a3 + 0x6B8)) & 0xA3));
            return result;

            break;
        }
        case 0x27D5F80: // 0x28AE250 - 204
        {
            // __int64 __fastcall sub_27D5F80(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x3C0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(a3 + 0x710) & 0x41));
            return result;

            break;
        }
        case 0x27D86B0: // 0x28AE250 - 205
        {
            // __int64 __fastcall sub_27D86B0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xD8) + 8i64 * (__ROR4__(a2, 1) & 0x2C)) + 0x310i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA650: // 0x28AE250 - 206
        {
            // __int64 __fastcall sub_27DA650(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x608);
            *a1 ^= a2 ^ FuckEnc::CacheRead<_DWORD>(result + 0x38);
            return result;

            break;
        }
        case 0x27DDFA0: // 0x28AE250 - 207
        {
            // __int64 __fastcall sub_27DDFA0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x648);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x198);
            return result;

            break;
        }
        case 0x27D9F00: // 0x28AE250 - 208
        {
            // __int64 __fastcall sub_27D9F00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = *a1 ^ FuckEnc::CacheRead<_DWORD>(a3 + 0x598) ^ 0x713CEECEu;
            *a1 = result;
            return result;

            break;
        }
        case 0x27D64E0: // 0x28AE250 - 209
        {
            // __int64 __fastcall sub_27D64E0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xE8) + 0x650i64) + 4i64 * ((unsigned __int8)(0x84 * a2) & 0xAA));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3030: // 0x28AE250 - 210
        {
            // __int64 __fastcall sub_27D3030(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x4C0);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x2E0);
            return result;

            break;
        }
        case 0x27D4810: // 0x28AE250 - 211
        {
            // __int64 __fastcall sub_27D4810(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~FuckEnc::CacheRead<_DWORD>(a3 + 0x2C8) & 0xFFFFFFF7;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6040: // 0x28AE250 - 212
        {
            // __int64 __fastcall sub_27D6040(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x608) + 0x7A0i64) + 4i64 * (a2 & 0x3A));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5AF0: // 0x28AE250 - 213
        {
            // __int64 __fastcall sub_27D5AF0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x90) + 8i64 * ((unsigned __int8)(0x83 * a2) & 0x84)) + 0x6E8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4B10: // 0x28AE250 - 214
        {
            // __int64 __fastcall sub_27D4B10(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x70);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x4F0);
            return result;

            break;
        }
        case 0x27D5C80: // 0x28AE250 - 215
        {
            // __int64 __fastcall sub_27D5C80(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x448);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x338);
            return result;

            break;
        }
        case 0x27D2F70: // 0x28AE250 - 216
        {
            // __int64 __fastcall sub_27D2F70(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x590) + 0x3C0i64) + 4i64 * (unsigned __int8)(0x43 * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D69F0: // 0x28AE250 - 217
        {
            // __int64 __fastcall sub_27D69F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x228) + 0x6F0i64) + 0x338i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D40D0: // 0x28AE250 - 218
        {
            // __int64 __fastcall sub_27D40D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x300);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x260) | 0x15;
            return result;

            break;
        }
        case 0x27D4DE0: // 0x28AE250 - 219
        {
            // __int64 __fastcall sub_27D4DE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x620) + 0x6F0i64) + 0x338i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8CB0: // 0x28AE250 - 220
        {
            // __int64 __fastcall sub_27D8CB0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x268) + 0x130i64) + 4i64 * ((unsigned __int8)__ROR4__(a2, 0x1C) & 0xEE));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA430: // 0x28AE250 - 221
        {
            // __int64 __fastcall sub_27DA430(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4D8) + 0x68i64) + 0x310i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8530: // 0x28AE250 - 222
        {
            // __int64 __fastcall sub_27D8530(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x130);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(a3 + 0x410) ^ 0x84u));
            return result;

            break;
        }
        case 0x27D4EA0: // 0x28AE250 - 223
        {
            // __int64 __fastcall sub_27D4EA0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x7A0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(a3 + 0x410), 4));
            return result;

            break;
        }
        case 0x27DEC10: // 0x28AE250 - 224
        {
            // __int64 __fastcall sub_27DEC10(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5B0) + 8i64 * (unsigned __int8)(0xC9 * a2)) + 0x3A8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D51F0: // 0x28AE250 - 225
        {
            // __int64 __fastcall sub_27D51F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x318);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x198) - 0x589CFA2F;
            return result;

            break;
        }
        case 0x27DD150: // 0x28AE250 - 226
        {
            // __int64 __fastcall sub_27DD150(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6F0) + 0x768i64) + 0x5A0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D62C0: // 0x28AE250 - 227
        {
            // __int64 __fastcall sub_27D62C0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6F8) + 8i64 * (a2 & 0x9C)) + 0xA8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6AB0: // 0x28AE250 - 228
        {
            // __int64 __fastcall sub_27D6AB0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x378) + 0x4B8i64) + 0x6B8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D61F0: // 0x28AE250 - 229
        {
            // __int64 __fastcall sub_27D61F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x510);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x640) + 0x50i64), 0xB));
            return result;

            break;
        }
        case 0x27DD200: // 0x28AE250 - 230
        {
            // __int64 __fastcall sub_27DD200(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6F0) + 0x510i64) + 4i64 * ((7 * a2) & 0x1D));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5EE0: // 0x28AE250 - 231
        {
            // void __fastcall sub_27D5EE0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x308) ^ a2);

            break;
        }
        case 0x27DC460: // 0x28AE250 - 232
        {
            // __int64 __fastcall sub_27DC460(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x258) + 8i64 * (a2 ^ 0x96u)) + 0x458i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCFE0: // 0x28AE250 - 233
        {
            // __int64 __fastcall sub_27DCFE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2F8) + 0xE0i64) + 0x2E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DDE40: // 0x28AE250 - 234
        {
            // __int64 __fastcall sub_27DDE40(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4F8) + 0x68i64) + 0x558i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5A50: // 0x28AE250 - 235
        {
            // __int64 __fastcall sub_27D5A50(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x120);
            *a1 ^= 0xC3018944 * FuckEnc::CacheRead<_DWORD>(result + 0x6B8);
            return result;

            break;
        }
        case 0x27DA4D0: // 0x28AE250 - 236
        {
            // __int64 __fastcall sub_27DA4D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x6D8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x78) ^ 0x34433CD2;
            return result;

            break;
        }
        case 0x27DD4B0: // 0x28AE250 - 237
        {
            // __int64 __fastcall sub_27DD4B0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5A8) + 0x510i64) + 4i64 * (__ROR4__(a2, 0x18) & 0x26));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6370: // 0x28AE250 - 238
        {
            // __int64 __fastcall sub_27D6370(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x4F8);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x780);
            return result;

            break;
        }
        case 0x27DAB80: // 0x28AE250 - 239
        {
            // __int64 __fastcall sub_27DAB80(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x3B0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x5C8) << 0x16;
            return result;

            break;
        }
        case 0x27D8010: // 0x28AE250 - 240
        {
            // __int64 __fastcall sub_27D8010(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x790) + 0x7A0i64) + 4i64 * (__ROL4__(a2, 8) & 0x59));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB390: // 0x28AE250 - 241
        {
            // __int64 __fastcall sub_27DB390(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = *a1 ^ FuckEnc::CacheRead<_DWORD>(a3 + 0x480) ^ 0x26C59442u;
            *a1 = result;
            return result;

            break;
        }
        case 0x27D5030: // 0x28AE250 - 242
        {
            // __int64 __fastcall sub_27D5030(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x268) + 0x788i64) + 0x260i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBCE0: // 0x28AE250 - 243
        {
            // __int64 __fastcall sub_27DBCE0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x318) + 0x7A0i64) + 4i64 * (unsigned __int8)(0xDE * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9C00: // 0x28AE250 - 244
        {
            // __int64 __fastcall sub_27D9C00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x780) ^ 0xE3BA168A);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6870: // 0x28AE250 - 245
        {
            // __int64 __fastcall sub_27D6870(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x1B0);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x780);
            return result;

            break;
        }
        case 0x27DD8F0: // 0x28AE250 - 246
        {
            // __int64 __fastcall sub_27DD8F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = *a1 ^ (FuckEnc::CacheRead<_DWORD>(a3 + 0x780) + 0x7F8321B4) ^ 0xCFF70657;
            *a1 = result;
            return result;

            break;
        }
        case 0x27DAE70: // 0x28AE250 - 247
        {
            // __int64 __fastcall sub_27DAE70(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x2C8) ^ 0xC3113178);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4470: // 0x28AE250 - 248
        {
            // __int64 __fastcall sub_27D4470(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x2E0) | 9u);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6C20: // 0x28AE250 - 249
        {
            // __int64 __fastcall sub_27D6C20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0x5A0);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4F70: // 0x28AE250 - 250
        {
            // __int64 __fastcall sub_27D4F70(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x500);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x6E0) + 0x21291DDD;
            return result;

            break;
        }
        case 0x27D52C0: // 0x28AE250 - 251
        {
            // __int64 __fastcall sub_27D52C0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4E8) + 8i64 * ((unsigned __int8)(0xA5 * a2) & 0x89)) + 0x428i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5510: // 0x28AE250 - 252
        {
            // __int64 __fastcall sub_27D5510(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x588) + 0x4B8i64) + 0x410i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D94C0: // 0x28AE250 - 253
        {
            // __int64 __fastcall sub_27D94C0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x3B0);
            *a1 ^= a2 + FuckEnc::CacheRead<_DWORD>(result + 0x310);
            return result;

            break;
        }
        case 0x27D38F0: // 0x28AE250 - 254
        {
            // __int64 __fastcall sub_27D38F0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x110) + 8i64 * (a2 & 0x84)) + 0x410i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC840: // 0x28AE250 - 255
        {
            // __int64 __fastcall sub_27DC840(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xE0) + 0x620i64) + 0x308i64);
            *a1 ^= result;
            return result;

            break;
        }
        // Main Function 0x28AE250 End

        // Main Function 0x28AFAA0 Start
        case 0x27D8780: // 0x28AFAA0 - 0
        {
            // __int64 __fastcall sub_27D8780(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x598) + 8i64 * ((0xD7 * a2) & 0x7B)) + 0x258i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9FE0: // 0x28AFAA0 - 1
        {
            // __int64 __fastcall sub_27D9FE0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3B0) + 0x380i64) + 4i64 * (a2 & 0x96));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2CB0: // 0x28AFAA0 - 2
        {
            // __int64 __fastcall sub_27D2CB0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3) + 0x608i64) + 0x180i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4260: // 0x28AFAA0 - 3
        {
            // __int64 __fastcall sub_27D4260(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3B8) + 8i64 * ((unsigned __int8)__ROL4__(a2, 0xF) & 0xBF)) + 8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3410: // 0x28AFAA0 - 4
        {
            // __int64 __fastcall sub_27D3410(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x520) + 0x4C8i64) + 4i64 * ((0xEA * a2) & 0x27));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5050: // 0x28AFAA0 - 5
        {
            // __int64 __fastcall sub_27D5050(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3B8) + 8i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x6A0) & 0x9E)) + 0x558i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DEAC0: // 0x28AFAA0 - 6
        {
            // __int64 __fastcall sub_27DEAC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x4C0);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x40);
            return result;

            break;
        }
        case 0x27D99C0: // 0x28AFAA0 - 7
        {
            // __int64 __fastcall sub_27D99C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(0x435BC30B * FuckEnc::CacheRead<_DWORD>(a3 + 0x108));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2D70: // 0x28AFAA0 - 8
        {
            // __int64 __fastcall sub_27D2D70(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x500) + 8i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x7A8) & 0x92)) + 0x4E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9E50: // 0x28AFAA0 - 9
        {
            // __int64 __fastcall sub_27D9E50(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1C0) + 8i64 * (a2 ^ 0xD7u)) + 0x2D0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3560: // 0x28AFAA0 - 10
        {
            // __int64 __fastcall sub_27D3560(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x790) + 8i64 * (a2 ^ 0xE3u)) + 0x3A0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D56A0: // 0x28AFAA0 - 11
        {
            // __int64 __fastcall sub_27D56A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x68);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x3D0);
            return result;

            break;
        }
        case 0x27D72A0: // 0x28AFAA0 - 12
        {
            // __int64 __fastcall sub_27D72A0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x788) + 0x758i64) + 4i64 * (unsigned __int8)__ROL4__(a2, 0x14));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6720: // 0x28AFAA0 - 13
        {
            // __int64 __fastcall sub_27D6720(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x790) + 8i64 * (unsigned __int8)(0xC6 * a2)) + 0x38i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D74C0: // 0x28AFAA0 - 14
        {
            // __int64 __fastcall sub_27D74C0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6D0) + 0x5F8i64) + 4i64 * (a2 & 0x5F));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3E10: // 0x28AFAA0 - 15
        {
            // __int64 __fastcall sub_27D3E10(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x120) + 0x588i64) + 0x150i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC760: // 0x28AFAA0 - 16
        {
            // __int64 __fastcall sub_27DC760(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x588) + 0x50i64) + 0x410i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2E40: // 0x28AFAA0 - 17
        {
            // __int64 __fastcall sub_27D2E40(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(a2 + FuckEnc::CacheRead<_DWORD>(a3 + 0x40));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8C10: // 0x28AFAA0 - 18
        {
            // __int64 __fastcall sub_27D8C10(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x640) + 0x610i64) + 4i64 * (a2 ^ 0x48u));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5A70: // 0x28AFAA0 - 19
        {
            // __int64 __fastcall sub_27D5A70(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x750) + 0x740i64) + 4i64 * ((0x16 * a2) & 0x35));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5EF0: // 0x28AFAA0 - 20
        {
            // __int64 __fastcall sub_27D5EF0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0xF0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (unsigned __int8)(0x3D * (FuckEnc::CacheRead<_BYTE>(a3 + 0x6A8) ^ a2)));
            return result;

            break;
        }
        case 0x27DD220: // 0x28AFAA0 - 21
        {
            // __int64 __fastcall sub_27DD220(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0x4E0);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3610: // 0x28AFAA0 - 22
        {
            // __int64 __fastcall sub_27D3610(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x608);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x298) ^ 0x9F49689;
            return result;

            break;
        }
        case 0x27D9920: // 0x28AFAA0 - 23
        {
            // __int64 __fastcall sub_27D9920(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3D8) + 0x6B8i64) + 0x630i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D28D0: // 0x28AFAA0 - 24
        {
            // __int64 __fastcall sub_27D28D0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x4F8);
            *a1 ^= a2 ^ FuckEnc::CacheRead<_DWORD>(result + 0x398);
            return result;

            break;
        }
        case 0x27D48E0: // 0x28AFAA0 - 25
        {
            // __int64 __fastcall sub_27D48E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x520);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x188) ^ 0xCC2F5144;
            return result;

            break;
        }
        case 0x27DEB60: // 0x28AFAA0 - 26
        {
            // __int64 __fastcall sub_27DEB60(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x520) + 0x2F8i64) + 0x4E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2F90: // 0x28AFAA0 - 27
        {
            // __int64 __fastcall sub_27D2F90(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x6D0);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x6A8);
            return result;

            break;
        }
        case 0x27D91C0: // 0x28AFAA0 - 28
        {
            // __int64 __fastcall sub_27D91C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x448) + 8i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x140) & 0x96)) + 0x298i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA2E0: // 0x28AFAA0 - 29
        {
            // __int64 __fastcall sub_27DA2E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x440) + 0x588i64) + 0x528i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2ED0: // 0x28AFAA0 - 30
        {
            // __int64 __fastcall sub_27D2ED0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5E0) + 0x208i64) + 0x140i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE2A0: // 0x28AFAA0 - 31
        {
            // __int64 __fastcall sub_27DE2A0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x590) + 8i64 * (a2 & 0x10)) + 0x108i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6E40: // 0x28AFAA0 - 32
        {
            // void __fastcall sub_27D6E40(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x3D0) * a2);

            break;
        }
        case 0x27D4B20: // 0x28AFAA0 - 33
        {
            // __int64 __fastcall sub_27D4B20(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1B8) + 8i64 * (unsigned __int8)__ROR4__(a2, 0x19)) + 0x630i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC660: // 0x28AFAA0 - 34
        {
            // __int64 __fastcall sub_27DC660(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x300) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(a3 + 0x3D0) ^ 0x97u)) + 0x110i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE350: // 0x28AFAA0 - 35
        {
            // __int64 __fastcall sub_27DE350(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x240);
            *a1 ^= a2 ^ FuckEnc::CacheRead<_DWORD>(result + 0x630);
            return result;

            break;
        }
        case 0x27DABA0: // 0x28AFAA0 - 36
        {
            // __int64 __fastcall sub_27DABA0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x790) + 8i64 * ((unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(a3 + 0x3E0), 0xB) & 0xF3)) + 0x518i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7ED0: // 0x28AFAA0 - 37
        {
            // __int64 __fastcall sub_27D7ED0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x70) + 8i64 * ((unsigned __int8)__ROR4__(a2, 0x11) & 0x9F)) + 0x140i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6950: // 0x28AFAA0 - 38
        {
            // __int64 __fastcall sub_27D6950(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x78) + 8i64 * (a2 & 0x39)) + 0x108i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9C20: // 0x28AFAA0 - 39
        {
            // __int64 __fastcall sub_27D9C20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x750);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x6A8);
            return result;

            break;
        }
        case 0x27D46A0: // 0x28AFAA0 - 40
        {
            // __int64 __fastcall sub_27D46A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x148) + 0x4C0i64) + 0x3A0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9D90: // 0x28AFAA0 - 41
        {
            // __int64 __fastcall sub_27D9D90(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x378) + 0x5F8i64) + 4i64 * (a2 & 0x20));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA5B0: // 0x28AFAA0 - 42
        {
            // __int64 __fastcall sub_27DA5B0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x388) + 0x220i64) + 4i64 * (a2 ^ 0xB3u));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD3F0: // 0x28AFAA0 - 43
        {
            // __int64 __fastcall sub_27DD3F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x668) + 0x230i64) + 0x770i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DACB0: // 0x28AFAA0 - 44
        {
            // __int64 __fastcall sub_27DACB0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x6D0);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x3D0);
            return result;

            break;
        }
        case 0x27D3ED0: // 0x28AFAA0 - 45
        {
            // __int64 __fastcall sub_27D3ED0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x648) + 8i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x288) & 0x56)) + 0x6A8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4CA0: // 0x28AFAA0 - 46
        {
            // __int64 __fastcall sub_27D4CA0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6D8) + 8i64 * (a2 & 5)) + 0x188i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC0F0: // 0x28AFAA0 - 47
        {
            // __int64 __fastcall sub_27DC0F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x5F8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (unsigned __int8)(0xA * FuckEnc::CacheRead<_DWORD>(a3 + 0x108)));
            return result;

            break;
        }
        case 0x27D4030: // 0x28AFAA0 - 48
        {
            // __int64 __fastcall sub_27D4030(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(a2 * ~FuckEnc::CacheRead<_DWORD>(a3 + 0x3A0));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DAE90: // 0x28AFAA0 - 49
        {
            // __int64 __fastcall sub_27DAE90(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 + (FuckEnc::CacheRead<_DWORD>(a3 + 0x7A8) | 0x19u);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3050: // 0x28AFAA0 - 50
        {
            // __int64 __fastcall sub_27D3050(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x4C8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(a3 + 0x3E0) * a2, 0x14));
            return result;

            break;
        }
        case 0x27D5FA0: // 0x28AFAA0 - 51
        {
            // __int64 __fastcall sub_27D5FA0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x148);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x3D0) ^ 0x1E297B67;
            return result;

            break;
        }
        case 0x27DE930: // 0x28AFAA0 - 52
        {
            // __int64 __fastcall sub_27DE930(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x238);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(a3 + 0x4E8), 0x13));
            return result;

            break;
        }
        case 0x27D9060: // 0x28AFAA0 - 53
        {
            // __int64 __fastcall sub_27D9060(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6E0) + 8i64 * (unsigned __int8)__ROL4__(a2, 0x18)) + 0x3D0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8550: // 0x28AFAA0 - 54
        {
            // __int64 __fastcall sub_27D8550(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x128) + 8i64 * ((unsigned __int8)(0x6A * FuckEnc::CacheRead<_BYTE>(a3 + 0x188)) & 0xEC)) + 0x188i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD0D0: // 0x28AFAA0 - 55
        {
            // __int64 __fastcall sub_27DD0D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x198);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x2D0) ^ 0x3369E75C;
            return result;

            break;
        }
        case 0x27D8F00: // 0x28AFAA0 - 56
        {
            // __int64 __fastcall sub_27D8F00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0xE8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x2C8) - 0x3CEECEC3;
            return result;

            break;
        }
        case 0x27D53B0: // 0x28AFAA0 - 57
        {
            // __int64 __fastcall sub_27D53B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x588) + 0x428i64) + 0x288i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5210: // 0x28AFAA0 - 58
        {
            // __int64 __fastcall sub_27D5210(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x598) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(a3 + 0x418) ^ 0xEF) & 0x9F)) + 0x6A0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8340: // 0x28AFAA0 - 59
        {
            // __int64 __fastcall sub_27D8340(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x78) + 8i64 * (a2 & 0xBC)) + 0x258i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5130: // 0x28AFAA0 - 60
        {
            // __int64 __fastcall sub_27D5130(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6F8) + 0x320i64) + 0x628i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3BF0: // 0x28AFAA0 - 61
        {
            // __int64 __fastcall sub_27D3BF0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3B0) + 0x468i64) + 0x258i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DDDA0: // 0x28AFAA0 - 62
        {
            // __int64 __fastcall sub_27DDDA0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1D8) + 0x268i64) + 0x250i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA0B0: // 0x28AFAA0 - 63
        {
            // __int64 __fastcall sub_27DA0B0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3B8) + 8i64 * (unsigned __int8)(0x2F * a2)) + 0x6A8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DDA80: // 0x28AFAA0 - 64
        {
            // __int64 __fastcall sub_27DDA80(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x448) + 8i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x528) & 0x46)) + 0x3D0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB4B0: // 0x28AFAA0 - 65
        {
            // void __fastcall sub_27DB4B0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x670) ^ a2);

            break;
        }
        case 0x27DBDF0: // 0x28AFAA0 - 66
        {
            // __int64 __fastcall sub_27DBDF0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x388) + 0x588i64) + 0x150i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DADA0: // 0x28AFAA0 - 67
        {
            // __int64 __fastcall sub_27DADA0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x6A8) ^ 0x15663903u);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D41C0: // 0x28AFAA0 - 68
        {
            // __int64 __fastcall sub_27D41C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(0x10FC5E04 * FuckEnc::CacheRead<_DWORD>(a3 + 0x110));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE430: // 0x28AFAA0 - 69
        {
            // void __fastcall sub_27DE430(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= FuckEnc::CacheRead<_DWORD>(a3 + 0x3A0) * a2 - 0x36269095;

            break;
        }
        case 0x27D6DA0: // 0x28AFAA0 - 70
        {
            // __int64 __fastcall sub_27D6DA0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(a2 + FuckEnc::CacheRead<_DWORD>(a3 + 0x188));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA7F0: // 0x28AFAA0 - 71
        {
            // __int64 __fastcall sub_27DA7F0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3B8) + 8i64 * ((0xFE * a2) & 0xB)) + 0x150i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4760: // 0x28AFAA0 - 72
        {
            // __int64 __fastcall sub_27D4760(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x590) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(a3 + 0x558), 0x1C)) + 0x7A8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8E50: // 0x28AFAA0 - 73
        {
            // __int64 __fastcall sub_27D8E50(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x2F8);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x7A8);
            return result;

            break;
        }
        case 0x27DD700: // 0x28AFAA0 - 74
        {
            // __int64 __fastcall sub_27DD700(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x198) + 0x640i64) + 0x660i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD860: // 0x28AFAA0 - 75
        {
            // __int64 __fastcall sub_27DD860(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6E0) + 8i64 * ((unsigned __int8)__ROL4__(a2, 0x10) & 0x84)) + 0x6A0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D62E0: // 0x28AFAA0 - 76
        {
            // __int64 __fastcall sub_27D62E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x468) + 0x640i64) + 0x660i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBD00: // 0x28AFAA0 - 77
        {
            // __int64 __fastcall sub_27DBD00(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x590) + 8i64 * (unsigned __int8)__ROL4__(a2, 0xC)) + 0x4E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7340: // 0x28AFAA0 - 78
        {
            // __int64 __fastcall sub_27D7340(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0xC0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x558) + 0x6F0A16E7;
            return result;

            break;
        }
        case 0x27DAAC0: // 0x28AFAA0 - 79
        {
            // __int64 __fastcall sub_27DAAC0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x498) + 0x740i64) + 4i64 * (__ROR4__(a2, 3) & 0x4F));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D49C0: // 0x28AFAA0 - 80
        {
            // __int64 __fastcall sub_27D49C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x240) + 0x3B0i64) + 0x628i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5470: // 0x28AFAA0 - 81
        {
            // __int64 __fastcall sub_27D5470(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x3B0);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x188);
            return result;

            break;
        }
        case 0x27D8270: // 0x28AFAA0 - 82
        {
            // __int64 __fastcall sub_27D8270(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x450) + 8i64 * (a2 & 0xF3)) + 0x250i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE660: // 0x28AFAA0 - 83
        {
            // __int64 __fastcall sub_27DE660(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = 0xA2AA6FE2 * ~FuckEnc::CacheRead<_DWORD>(a3 + 0x110);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7C00: // 0x28AFAA0 - 84
        {
            // __int64 __fastcall sub_27D7C00(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3D8) + 0x758i64) + 4i64 * (a2 & 0x2B));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D73F0: // 0x28AFAA0 - 85
        {
            // __int64 __fastcall sub_27D73F0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x368);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (__ROL4__(FuckEnc::CacheRead<_DWORD>(a3 + 0x2D0) + a2, 0x1B) & 0x15));
            return result;

            break;
        }
        case 0x27D86D0: // 0x28AFAA0 - 86
        {
            // void __fastcall sub_27D86D0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x3D0) ^ a2);

            break;
        }
        case 0x27D6C30: // 0x28AFAA0 - 87
        {
            // __int64 __fastcall sub_27D6C30(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x208) + 0x3B0i64) + 0x108i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8A80: // 0x28AFAA0 - 88
        {
            // __int64 __fastcall sub_27D8A80(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(FuckEnc::CacheRead<_DWORD>(a3 + 0x560) - 0x69AEFD9F);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB2C0: // 0x28AFAA0 - 89
        {
            // __int64 __fastcall sub_27DB2C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x350);
            *a1 ^= 0xC0394FC3 * FuckEnc::CacheRead<_DWORD>(result + 0x558);
            return result;

            break;
        }
        case 0x27D3D70: // 0x28AFAA0 - 90
        {
            // __int64 __fastcall sub_27D3D70(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x70) + 8i64 * (a2 & 0xB3)) + 0x40i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD340: // 0x28AFAA0 - 91
        {
            // __int64 __fastcall sub_27DD340(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x4C3CFECE - FuckEnc::CacheRead<_DWORD>(a3 + 0x108));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD7C0: // 0x28AFAA0 - 92
        {
            // __int64 __fastcall sub_27DD7C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (2 * FuckEnc::CacheRead<_DWORD>(a3 + 0x40)) | 0x1Bu;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCA60: // 0x28AFAA0 - 93
        {
            // __int64 __fastcall sub_27DCA60(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x5F8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (unsigned __int8)(6 * (FuckEnc::CacheRead<_DWORD>(a3 + 8) ^ 0x94)));
            return result;

            break;
        }
        case 0x27DC570: // 0x28AFAA0 - 94
        {
            // __int64 __fastcall sub_27DC570(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x128) + 8i64 * (unsigned __int8)__ROR4__(a2, 0x1A)) + 0x528i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9CE0: // 0x28AFAA0 - 95
        {
            // __int64 __fastcall sub_27D9CE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x608) + 0x640i64) + 0x770i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3910: // 0x28AFAA0 - 96
        {
            // __int64 __fastcall sub_27D3910(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x588) + 0x498i64) + 0x6A8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D84A0: // 0x28AFAA0 - 97
        {
            // __int64 __fastcall sub_27D84A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x750);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x560) & 0xFFFFFFF0;
            return result;

            break;
        }
        case 0x27D6130: // 0x28AFAA0 - 98
        {
            // __int64 __fastcall sub_27D6130(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x6B8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 8) + 0xDC0B103;
            return result;

            break;
        }
        case 0x27DCF20: // 0x28AFAA0 - 99
        {
            // __int64 __fastcall sub_27DCF20(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x90) + 0x4B0i64) + 4i64 * (__ROR4__(a2, 0xC) & 0x7A));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD9C0: // 0x28AFAA0 - 100
        {
            // __int64 __fastcall sub_27DD9C0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4C0) + 0x4C8i64) + 4i64 * (unsigned __int8)(0xB5 * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6390: // 0x28AFAA0 - 101
        {
            // __int64 __fastcall sub_27D6390(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x740);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * ((unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(a3 + 0x418) >> 0x17, 1) & 0x8F));
            return result;

            break;
        }
        case 0x27DDB40: // 0x28AFAA0 - 102
        {
            // __int64 __fastcall sub_27DDB40(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x230);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 8) - 0x20DD15FF;
            return result;

            break;
        }
        case 0x27D6670: // 0x28AFAA0 - 103
        {
            // __int64 __fastcall sub_27D6670(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x268);
            *a1 ^= 0xC503DC2B * FuckEnc::CacheRead<_DWORD>(result + 0x558);
            return result;

            break;
        }
        case 0x27DC2B0: // 0x28AFAA0 - 104
        {
            // __int64 __fastcall sub_27DC2B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x788);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 8);
            return result;

            break;
        }
        case 0x27D5D60: // 0x28AFAA0 - 105
        {
            // __int64 __fastcall sub_27D5D60(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xE8) + 0x4F8i64) + 0x630i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5990: // 0x28AFAA0 - 106
        {
            // __int64 __fastcall sub_27D5990(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6E0) + 8i64 * (unsigned __int8)__ROR4__(a2, 0x15)) + 0x410i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB680: // 0x28AFAA0 - 107
        {
            // __int64 __fastcall sub_27DB680(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1C0) + 8i64 * (a2 ^ 0x4Fu)) + 0x150i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9B60: // 0x28AFAA0 - 108
        {
            // __int64 __fastcall sub_27D9B60(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x448) + 8i64 * (a2 & 0x20)) + 0x660i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB1C0: // 0x28AFAA0 - 109
        {
            // __int64 __fastcall sub_27DB1C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x79165E4 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x250) >> 0xB));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3CB0: // 0x28AFAA0 - 110
        {
            // __int64 __fastcall sub_27D3CB0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x618);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x110) + 0x7CBA6FEC;
            return result;

            break;
        }
        case 0x27DC390: // 0x28AFAA0 - 111
        {
            // void __fastcall sub_27DC390(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= (FuckEnc::CacheRead<_DWORD>(a3 + 0x628) * a2) ^ 0x61ED4DC2;

            break;
        }
        case 0x27DA9E0: // 0x28AFAA0 - 112
        {
            // __int64 __fastcall sub_27DA9E0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4C0) + 0xF0i64) + 4i64 * (unsigned __int8)(0x7D * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7B60: // 0x28AFAA0 - 113
        {
            // __int64 __fastcall sub_27D7B60(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(a2 + FuckEnc::CacheRead<_DWORD>(a3 + 0x6A8));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DEA00: // 0x28AFAA0 - 114
        {
            // __int64 __fastcall sub_27DEA00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x410) ^ 0xE5A688D2);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D83E0: // 0x28AFAA0 - 115
        {
            // __int64 __fastcall sub_27D83E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(FuckEnc::CacheRead<_DWORD>(a3 + 0x518) + 0x45A5E02D);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7780: // 0x28AFAA0 - 116
        {
            // __int64 __fastcall sub_27D7780(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(FuckEnc::CacheRead<_DWORD>(a3 + 0x628) << 0xD);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D58C0: // 0x28AFAA0 - 117
        {
            // __int64 __fastcall sub_27D58C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0x288);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D55F0: // 0x28AFAA0 - 118
        {
            // __int64 __fastcall sub_27D55F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4D0) + 0x760i64) + 0x518i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA210: // 0x28AFAA0 - 119
        {
            // __int64 __fastcall sub_27DA210(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x308) + 8i64 * (a2 ^ 0x80u)) + 0x298i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3F80: // 0x28AFAA0 - 120
        {
            // __int64 __fastcall sub_27D3F80(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3D8) + 0x758i64) + 4i64 * (a2 & 0xC1));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8030: // 0x28AFAA0 - 121
        {
            // __int64 __fastcall sub_27D8030(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x300) + 8i64 * (__ROR4__(a2, 3) & 7)) + 0x298i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA8F0: // 0x28AFAA0 - 122
        {
            // __int64 __fastcall sub_27DA8F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x350) + 0x2E0i64) + 0x110i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3780: // 0x28AFAA0 - 123
        {
            // __int64 __fastcall sub_27D3780(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x740);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x760) + 0x3A0i64) ^ 0x61) & 0xF3));
            return result;

            break;
        }
        case 0x27D3290: // 0x28AFAA0 - 124
        {
            // __int64 __fastcall sub_27D3290(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x440);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x560);
            return result;

            break;
        }
        case 0x27D7570: // 0x28AFAA0 - 125
        {
            // __int64 __fastcall sub_27D7570(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6E0) + 8i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 8) & 0x2E)) + 0x660i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB100: // 0x28AFAA0 - 126
        {
            // __int64 __fastcall sub_27DB100(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x128) + 8i64 * (a2 ^ 0x45u)) + 0x110i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8FC0: // 0x28AFAA0 - 127
        {
            // __int64 __fastcall sub_27D8FC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x3B0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x7A8) - 0x3F2F009D;
            return result;

            break;
        }
        case 0x27D5820: // 0x28AFAA0 - 128
        {
            // __int64 __fastcall sub_27D5820(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4D0) + 0x4F8i64) + 0x7A8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE080: // 0x28AFAA0 - 129
        {
            // __int64 __fastcall sub_27DE080(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x378) + 0x640i64) + 0x628i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4F90: // 0x28AFAA0 - 130
        {
            // __int64 __fastcall sub_27D4F90(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = *a1 ^ FuckEnc::CacheRead<_DWORD>(a3 + 0x418) ^ 0xC32F00F0;
            *a1 = result;
            return result;

            break;
        }
        case 0x27D8B50: // 0x28AFAA0 - 131
        {
            // __int64 __fastcall sub_27D8B50(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x208) + 0x570i64) + 0x4E8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4EC0: // 0x28AFAA0 - 132
        {
            // __int64 __fastcall sub_27D4EC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheReadPlural<_QWORD>(a3 + 0x388) + 0x2C8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D52E0: // 0x28AFAA0 - 133
        {
            // __int64 __fastcall sub_27D52E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6D8) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(a3 + 0x778), 0xD)) + 0x3E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE7D0: // 0x28AFAA0 - 134
        {
            // __int64 __fastcall sub_27DE7D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x240) + 0x6B8i64) + 0x518i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7100: // 0x28AFAA0 - 135
        {
            // __int64 __fastcall sub_27D7100(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x588) + 0x640i64) + 8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9650: // 0x28AFAA0 - 136
        {
            // __int64 __fastcall sub_27D9650(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x120) + 0xD8i64) + 4i64 * ((unsigned __int8)__ROR4__(a2, 0x16) & 0xED));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE4F0: // 0x28AFAA0 - 137
        {
            // __int64 __fastcall sub_27DE4F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2E0) + 0x2E0i64) + 0x770i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBA40: // 0x28AFAA0 - 138
        {
            // __int64 __fastcall sub_27DBA40(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x2E6E3AC * FuckEnc::CacheRead<_DWORD>(a3 + 0x630) + 0x3CD785B0);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE140: // 0x28AFAA0 - 139
        {
            // __int64 __fastcall sub_27DE140(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x608) + 0x3B0i64) + 0x250i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7E20: // 0x28AFAA0 - 140
        {
            // __int64 __fastcall sub_27D7E20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x368);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(a3 + 0x410) ^ 0xBA2BFDBA, 2));
            return result;

            break;
        }
        case 0x27DB780: // 0x28AFAA0 - 141
        {
            // __int64 __fastcall sub_27DB780(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x230) + 0x428i64) + 0x630i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3120: // 0x28AFAA0 - 142
        {
            // __int64 __fastcall sub_27D3120(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x208);
            *a1 ^= 0xC3018944 * FuckEnc::CacheRead<_DWORD>(result + 0x660);
            return result;

            break;
        }
        case 0x27DDE60: // 0x28AFAA0 - 143
        {
            // __int64 __fastcall sub_27DDE60(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x498);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x7A8) - 0x6B7F46A6;
            return result;

            break;
        }
        case 0x27DD2A0: // 0x28AFAA0 - 144
        {
            // void __fastcall sub_27DD2A0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= (unsigned int)(FuckEnc::CacheRead<_DWORD>(a3 + 0x660) * a2) >> 0x1F;

            break;
        }
        case 0x27DAF60: // 0x28AFAA0 - 145
        {
            // __int64 __fastcall sub_27DAF60(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x618) + 0x1D8i64) + 0x2C8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBFF0: // 0x28AFAA0 - 146
        {
            // __int64 __fastcall sub_27DBFF0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x668);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x140) - 0x3DA33000;
            return result;

            break;
        }
        case 0x27D4D60: // 0x28AFAA0 - 147
        {
            // __int64 __fastcall sub_27D4D60(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4F8) + 0x3B0i64) + 0x3A0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8D90: // 0x28AFAA0 - 148
        {
            // __int64 __fastcall sub_27D8D90(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x468) + 0x238i64) + 4i64 * (a2 & 7));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5CA0: // 0x28AFAA0 - 149
        {
            // __int64 __fastcall sub_27D5CA0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x120);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x628);
            return result;

            break;
        }
        case 0x27D6CE0: // 0x28AFAA0 - 150
        {
            // __int64 __fastcall sub_27D6CE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6D0) + 0x268i64) + 8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8910: // 0x28AFAA0 - 151
        {
            // __int64 __fastcall sub_27D8910(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(~FuckEnc::CacheRead<_DWORD>(a3 + 0x770) << 9);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D79B0: // 0x28AFAA0 - 152
        {
            // __int64 __fastcall sub_27D79B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x208) + 0x198i64) + 0x288i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D81B0: // 0x28AFAA0 - 153
        {
            // __int64 __fastcall sub_27D81B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4D0) + 0x1D8i64) + 0x418i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7D70: // 0x28AFAA0 - 154
        {
            // __int64 __fastcall sub_27D7D70(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x788);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x630);
            return result;

            break;
        }
        case 0x27D3A80: // 0x28AFAA0 - 155
        {
            // __int64 __fastcall sub_27D3A80(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x6F8);
            *a1 ^= a2 ^ FuckEnc::CacheRead<_DWORD>(result + 0x528);
            return result;

            break;
        }
        case 0x27D89B0: // 0x28AFAA0 - 157
        {
            // __int64 __fastcall sub_27D89B0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x500) + 8i64 * (a2 & 0x97)) + 0x40i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2A70: // 0x28AFAA0 - 158
        {
            // __int64 __fastcall sub_27D2A70(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1C0) + 8i64 * (a2 & 0xA2)) + 0x410i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6A10: // 0x28AFAA0 - 159
        {
            // __int64 __fastcall sub_27D6A10(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x300) + 8i64 * ((unsigned __int8)__ROL4__(a2, 0xA) & 0xDD)) + 0x418i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCC20: // 0x28AFAA0 - 160
        {
            // __int64 __fastcall sub_27DCC20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x6F8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x258) << 0x15;
            return result;

            break;
        }
        case 0x27DA730: // 0x28AFAA0 - 161
        {
            // __int64 __fastcall sub_27DA730(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x378);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x418) << 0x1F;
            return result;

            break;
        }
        case 0x27DD640: // 0x28AFAA0 - 162
        {
            // __int64 __fastcall sub_27DD640(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x4B0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (__ROL4__(FuckEnc::CacheRead<_DWORD>(a3 + 0x628), 0x12) & 0x44));
            return result;

            break;
        }
        case 0x27D7CC0: // 0x28AFAA0 - 163
        {
            // __int64 __fastcall sub_27D7CC0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x300) + 8i64 * (unsigned __int8)(0x58 * a2)) + 0x518i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE5B0: // 0x28AFAA0 - 164
        {
            // __int64 __fastcall sub_27DE5B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4C0) + 0x68i64) + 0x778i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4BF0: // 0x28AFAA0 - 165
        {
            // __int64 __fastcall sub_27D4BF0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x640) + 0x610i64) + 4i64 * (a2 ^ 0xA5u));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5E30: // 0x28AFAA0 - 166
        {
            // __int64 __fastcall sub_27D5E30(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)((FuckEnc::CacheRead<_DWORD>(a3 + 0x410) >> 1) - 0x4189F3B8);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6440: // 0x28AFAA0 - 167
        {
            // __int64 __fastcall sub_27D6440(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6D8) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(a3 + 0x410) ^ 0xBDu)) + 0x40i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9430: // 0x28AFAA0 - 168
        {
            // __int64 __fastcall sub_27D9430(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x668) + 0x440i64) + 0x770i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6890: // 0x28AFAA0 - 169
        {
            // __int64 __fastcall sub_27D6890(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x120) + 0x198i64) + 0x110i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5BE0: // 0x28AFAA0 - 170
        {
            // __int64 __fastcall sub_27D5BE0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x70) + 8i64 * (a2 & 0x96)) + 0x3A0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3340: // 0x28AFAA0 - 171
        {
            // __int64 __fastcall sub_27D3340(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1C0) + 8i64 * ((unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(a3 + 0x150), 2) & 0xC9)) + 0x258i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4530: // 0x28AFAA0 - 172
        {
            // __int64 __fastcall sub_27D4530(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x268);
            *a1 ^= 0xE5D0FF13 * FuckEnc::CacheRead<_DWORD>(result + 0x4E8);
            return result;

            break;
        }
        case 0x27D94E0: // 0x28AFAA0 - 173
        {
            // __int64 __fastcall sub_27D94E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x6D0);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x4E0);
            return result;

            break;
        }
        case 0x27DA4F0: // 0x28AFAA0 - 174
        {
            // __int64 __fastcall sub_27DA4F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x750) + 0x1B0i64) + 0x518i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D95A0: // 0x28AFAA0 - 175
        {
            // __int64 __fastcall sub_27D95A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x378);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x518) & 0xFFFFFFF9;
            return result;

            break;
        }
        case 0x27DE880: // 0x28AFAA0 - 176
        {
            // __int64 __fastcall sub_27DE880(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x640) + 0x440i64) + 0x250i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC480: // 0x28AFAA0 - 177
        {
            // __int64 __fastcall sub_27DC480(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x70) + 8i64 * (a2 ^ 0x5Cu)) + 0x2C8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D76D0: // 0x28AFAA0 - 178
        {
            // __int64 __fastcall sub_27D76D0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x468) + 0x4B0i64) + 4i64 * ((unsigned __int8)(0x31 * a2) & 0xAB));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD4D0: // 0x28AFAA0 - 179
        {
            // __int64 __fastcall sub_27DD4D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x380);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xC0) + 0x518i64), 0xD));
            return result;

            break;
        }
        case 0x27D7830: // 0x28AFAA0 - 180
        {
            // __int64 __fastcall sub_27D7830(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4C0) + 0x380i64) + 4i64 * (unsigned __int8)__ROR4__(a2, 0x19));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA450: // 0x28AFAA0 - 181
        {
            // __int64 __fastcall sub_27DA450(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(~FuckEnc::CacheRead<_DWORD>(a3 + 0x110) << 0xF);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7060: // 0x28AFAA0 - 182
        {
            // __int64 __fastcall sub_27D7060(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x16BC92E7 * FuckEnc::CacheRead<_DWORD>(a3 + 0x40) - 0x6C005DE2);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC1C0: // 0x28AFAA0 - 183
        {
            // void __fastcall sub_27DC1C0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x560) ^ a2);

            break;
        }
        case 0x27DC860: // 0x28AFAA0 - 184
        {
            // __int64 __fastcall sub_27DC860(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x308) + 8i64 * (a2 & 0x6D)) + 0x140i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D71C0: // 0x28AFAA0 - 185
        {
            // void __fastcall sub_27D71C0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= (FuckEnc::CacheRead<_DWORD>(a3 + 0x3D0) * a2) ^ 0x208E6C9B;

            break;
        }
        case 0x27D39E0: // 0x28AFAA0 - 186
        {
            // __int64 __fastcall sub_27D39E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x64C681F8 - FuckEnc::CacheRead<_DWORD>(a3 + 8));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D78C0: // 0x28AFAA0 - 187
        {
            // __int64 __fastcall sub_27D78C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x740);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * ((0xE7 * FuckEnc::CacheRead<_BYTE>(a3 + 0x108)) & 0x3D));
            return result;

            break;
        }
        case 0x27DB590: // 0x28AFAA0 - 188
        {
            // __int64 __fastcall sub_27DB590(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x378) + 0x740i64) + 4i64 * (unsigned __int8)(7 * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4E00: // 0x28AFAA0 - 189
        {
            // __int64 __fastcall sub_27D4E00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x520);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x288) - 0x3CFE76BC;
            return result;

            break;
        }
        case 0x27DA3B0: // 0x28AFAA0 - 190
        {
            // __int64 __fastcall sub_27DA3B0(_DWORD *a1, __int64 a2, __int64 FuckEnc::CacheRead<__int64>(a3))

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<__int64>(a3);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<__int64>(a3) + 0x670) | 8;
            return result;

            break;
        }
        case 0x27D92C0: // 0x28AFAA0 - 191
        {
            // __int64 __fastcall sub_27D92C0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x468) + 0x368i64) + 4i64 * (a2 & 0xE3));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6500: // 0x28AFAA0 - 192
        {
            // __int64 __fastcall sub_27D6500(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x50) + 0x220i64) + 4i64 * (unsigned __int8)(0x1D * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D93A0: // 0x28AFAA0 - 193
        {
            // void __fastcall sub_27D93A0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x560) * a2);

            break;
        }
        case 0x27D4310: // 0x28AFAA0 - 194
        {
            // __int64 __fastcall sub_27D4310(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x70) + 8i64 * ((unsigned __int8)(0x6E * a2) & 0xB8)) + 0x250i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC960: // 0x28AFAA0 - 195
        {
            // __int64 __fastcall sub_27DC960(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x268);
            *a1 ^= a2 + FuckEnc::CacheRead<_DWORD>(result + 0x418);
            return result;

            break;
        }
        case 0x27DA170: // 0x28AFAA0 - 196
        {
            // void __fastcall sub_27DA170(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= (FuckEnc::CacheRead<_DWORD>(a3 + 0x628) * a2) & 0xFFFFFFE6;

            break;
        }
        case 0x27DBF00: // 0x28AFAA0 - 197
        {
            // __int64 __fastcall sub_27DBF00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4C0) + 0x198i64) + 0x4E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD170: // 0x28AFAA0 - 198
        {
            // __int64 __fastcall sub_27DD170(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x790) + 8i64 * ((0x1C * a2) & 0x2B)) + 0x2D0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D29C0: // 0x28AFAA0 - 199
        {
            // __int64 __fastcall sub_27D29C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x57094A3D * FuckEnc::CacheRead<_DWORD>(a3 + 0x398));
            *a1 ^= 0xFACA5A02 - result;
            return result;

            break;
        }
        case 0x27D6B80: // 0x28AFAA0 - 200
        {
            // __int64 __fastcall sub_27D6B80(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x500) + 8i64 * (unsigned __int8)(0xA3 * a2)) + 0x418i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB3B0: // 0x28AFAA0 - 201
        {
            // __int64 __fastcall sub_27DB3B0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x598) + 8i64 * (unsigned __int8)__ROR4__(a2, 1)) + 0x288i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DDC00: // 0x28AFAA0 - 202
        {
            // __int64 __fastcall sub_27DDC00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x148);
            *a1 ^= 0x7C36528D * FuckEnc::CacheRead<_DWORD>(result + 8);
            return result;

            break;
        }
        case 0x27D34C0: // 0x28AFAA0 - 203
        {
            // __int64 __fastcall sub_27D34C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x49064EB7 - FuckEnc::CacheRead<_DWORD>(a3 + 0x560));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D45E0: // 0x28AFAA0 - 204
        {
            // __int64 __fastcall sub_27D45E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x740);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(a3 + 0x2C8) ^ 0xB2u));
            return result;

            break;
        }
        case 0x27D40F0: // 0x28AFAA0 - 205
        {
            // __int64 __fastcall sub_27D40F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x5F8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(a3 + 0x518) ^ 0xEB) & 0x3C));
            return result;

            break;
        }
        case 0x27D8CE0: // 0x28AFAA0 - 206
        {
            // __int64 __fastcall sub_27D8CE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x378);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x140);
            return result;

            break;
        }
        case 0x27D9F20: // 0x28AFAA0 - 207
        {
            // __int64 __fastcall sub_27D9F20(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x2E0);
            *a1 ^= a2 + FuckEnc::CacheRead<_DWORD>(result + 0x108);
            return result;

            break;
        }
        case 0x27DCE20: // 0x28AFAA0 - 208
        {
            // __int64 __fastcall sub_27DCE20(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x618);
            *a1 ^= a2 + FuckEnc::CacheRead<_DWORD>(result + 0x2C8);
            return result;

            break;
        }
        case 0x27D7610: // 0x28AFAA0 - 209
        {
            // __int64 __fastcall sub_27D7610(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4C0) + 0x290i64) + 0x298i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D67E0: // 0x28AFAA0 - 210
        {
            // void __fastcall sub_27D67E0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x2C8) * a2);

            break;
        }
        case 0x27D7F80: // 0x28AFAA0 - 211
        {
            // __int64 __fastcall sub_27D7F80(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 8);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D65B0: // 0x28AFAA0 - 212
        {
            // __int64 __fastcall sub_27D65B0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x198) + 0x740i64) + 4i64 * (a2 & 0xE4));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6060: // 0x28AFAA0 - 213
        {
            // __int64 __fastcall sub_27D6060(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x6F8);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x2D0);
            return result;

            break;
        }
        case 0x27D5B10: // 0x28AFAA0 - 214
        {
            // __int64 __fastcall sub_27D5B10(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x758);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4 * ((FuckEnc::CacheRead<_DWORD>(a3 + 0x630) & 0xFE | 1i64) ^ 0x50));
            return result;

            break;
        }
        case 0x27D2C00: // 0x28AFAA0 - 215
        {
            // __int64 __fastcall sub_27D2C00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(FuckEnc::CacheRead<_DWORD>(a3 + 0x180) >> 9);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9AA0: // 0x28AFAA0 - 216
        {
            // __int64 __fastcall sub_27D9AA0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_DWORD>(a3 + 0x3D0) & 0xFFFFFFED;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8850: // 0x28AFAA0 - 217
        {
            // __int64 __fastcall sub_27D8850(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3) + 0x3D8i64) + 0x108i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DDCE0: // 0x28AFAA0 - 218
        {
            // __int64 __fastcall sub_27DDCE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x238);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * ((unsigned __int8)(0x4F * ~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(a3 + 0x630)) & 0xA9));
            return result;

            break;
        }
        case 0x27D7AA0: // 0x28AFAA0 - 219
        {
            // __int64 __fastcall sub_27D7AA0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x518) | 0x1Du);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6AD0: // 0x28AFAA0 - 220
        {
            // __int64 __fastcall sub_27D6AD0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(FuckEnc::CacheRead<_DWORD>(a3 + 0x560) >> 0x1C);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D97B0: // 0x28AFAA0 - 221
        {
            // __int64 __fastcall sub_27D97B0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2E0) + 0x5F8i64) + 4i64 * (unsigned __int8)(0x55 * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCB30: // 0x28AFAA0 - 222
        {
            // __int64 __fastcall sub_27DCB30(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x378) + 0x640i64) + 0x410i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD000: // 0x28AFAA0 - 223
        {
            // __int64 __fastcall sub_27DD000(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4D0) + 0x380i64) + 4i64 * ((unsigned __int8)__ROR4__(a2, 6) & 0xAB));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D31E0: // 0x28AFAA0 - 224
        {
            // __int64 __fastcall sub_27D31E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~FuckEnc::CacheRead<_DWORD>(a3 + 0x410) >> 5;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D80F0: // 0x28AFAA0 - 225
        {
            // void __fastcall sub_27D80F0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= (FuckEnc::CacheRead<_DWORD>(a3 + 0x258) * a2) ^ 0x6C08D71A;

            break;
        }
        case 0x27DA670: // 0x28AFAA0 - 226
        {
            // __int64 __fastcall sub_27DA670(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x268) + 0x1D8i64) + 0x660i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB880: // 0x28AFAA0 - 227
        {
            // __int64 __fastcall sub_27DB880(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(a2 + 0x82D1A01 * FuckEnc::CacheRead<_DWORD>(a3 + 0x630));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9870: // 0x28AFAA0 - 228
        {
            // __int64 __fastcall sub_27D9870(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x78) + 8i64 * ((0x1C * a2) & 0x29)) + 0x398i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCD20: // 0x28AFAA0 - 229
        {
            // __int64 __fastcall sub_27DCD20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x520) + 0x498i64) + 0x628i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3B30: // 0x28AFAA0 - 230
        {
            // __int64 __fastcall sub_27D3B30(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x5B0);
            *a1 ^= 0x8B4316CD * FuckEnc::CacheRead<_DWORD>(result + 0x528);
            return result;

            break;
        }
        case 0x27D36C0: // 0x28AFAA0 - 231
        {
            // __int64 __fastcall sub_27D36C0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x120) + 0x238i64) + 4i64 * (~a2 & 0x64));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBC20: // 0x28AFAA0 - 232
        {
            // __int64 __fastcall sub_27DBC20(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x648) + 8i64 * (unsigned __int8)__ROR4__(a2, 9)) + 0x660i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4480: // 0x28AFAA0 - 233
        {
            // __int64 __fastcall sub_27D4480(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)0xE8CA925 ^ *a1 ^ (FuckEnc::CacheRead<_DWORD>(a3 + 0x3A0) - 0x75A6E15A);
            *a1 = result;
            return result;

            break;
        }
        case 0x27DE720: // 0x28AFAA0 - 234
        {
            // __int64 __fastcall sub_27DE720(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x760) + 0x758i64) + 4i64 * (unsigned __int8)__ROR4__(a2, 0x1E));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD910: // 0x28AFAA0 - 235
        {
            // __int64 __fastcall sub_27DD910(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x120) + 0x6D0i64) + 8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8620: // 0x28AFAA0 - 236
        {
            // __int64 __fastcall sub_27D8620(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = *a1 ^ (FuckEnc::CacheRead<_DWORD>(a3 + 0x660) << 0x10) ^ 0xCCAAEC67;
            *a1 = result;
            return result;

            break;
        }
        case 0x27DDF00: // 0x28AFAA0 - 237
        {
            // __int64 __fastcall sub_27DDF00(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x148) + 0x740i64) + 4i64 * (unsigned __int8)__ROL4__(a2, 8));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9710: // 0x28AFAA0 - 238
        {
            // __int64 __fastcall sub_27D9710(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x450) + 8i64 * (~(unsigned __int8)FuckEnc::CacheRead<_DWORD>(a3 + 0x528) & 0x30)) + 0x3D0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB940: // 0x28AFAA0 - 239
        {
            // __int64 __fastcall sub_27DB940(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 ^ (unsigned int)(*a1 ^ (FuckEnc::CacheRead<_DWORD>(a3 + 0x108) >> 4));
            *a1 = result;
            return result;

            break;
        }
        case 0x27D2B50: // 0x28AFAA0 - 240
        {
            // __int64 __fastcall sub_27D2B50(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x368);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (unsigned __int8)-FuckEnc::CacheRead<_BYTE>(a3 + 0x410));
            return result;

            break;
        }
        case 0x27D3840: // 0x28AFAA0 - 241
        {
            // __int64 __fastcall sub_27D3840(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4C0) + 0x608i64) + 0x2D0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBB40: // 0x28AFAA0 - 242
        {
            // __int64 __fastcall sub_27DBB40(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x790) + 8i64 * ((unsigned __int8)(0xAD * FuckEnc::CacheRead<_BYTE>(a3 + 0x630)) & 0xF5)) + 0x180i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5750: // 0x28AFAA0 - 243
        {
            // __int64 __fastcall sub_27D5750(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x350) + 0x388i64) + 0x558i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9110: // 0x28AFAA0 - 244
        {
            // __int64 __fastcall sub_27D9110(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2E0) + 0x50i64) + 0x140i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DDFC0: // 0x28AFAA0 - 245
        {
            // __int64 __fastcall sub_27DDFC0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x760) + 0x740i64) + 4i64 * (a2 & 0x8A));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D43D0: // 0x28AFAA0 - 246
        {
            // __int64 __fastcall sub_27D43D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x68) + 0x468i64) + 0x4E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6EF0: // 0x28AFAA0 - 247
        {
            // __int64 __fastcall sub_27D6EF0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_DWORD>(a3 + 0x2D0) >> 0x16;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6210: // 0x28AFAA0 - 248
        {
            // __int64 __fastcall sub_27D6210(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(FuckEnc::CacheRead<_DWORD>(a3 + 0x558) >> 0x1B);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4A70: // 0x28AFAA0 - 249
        {
            // __int64 __fastcall sub_27D4A70(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x448) + 8i64 * (unsigned __int8)__ROL4__(a2, 0x18)) + 0x150i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5530: // 0x28AFAA0 - 251
        {
            // __int64 __fastcall sub_27D5530(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x500) + 8i64 * (a2 & 0xFE)) + 0x628i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6FA0: // 0x28AFAA0 - 252
        {
            // __int64 __fastcall sub_27D6FA0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x120);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x110) * a2;
            return result;

            break;
        }
        case 0x27D4820: // 0x28AFAA0 - 254
        {
            // __int64 __fastcall sub_27D4820(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x728);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x180);
            return result;

            break;
        }
        case 0x27DD590: // 0x28AFAA0 - 255
        {
            // __int64 __fastcall sub_27DD590(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2E0) + 0x3D8i64) + 0x528i64);
            *a1 ^= result;
            return result;

            break;
        }
        // Main Function 0x28AFAA0 End

        // Main Function 0x28B12F0 Start
        case 0x27DC3B0: // 0x28B12F0 - 0
        {
            // __int64 __fastcall sub_27DC3B0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4B0) + 8i64 * ((a2 ^ 0xBF) & 0xC4)) + 0x458i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9940: // 0x28B12F0 - 1
        {
            // __int64 __fastcall sub_27D9940(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x668) + 8i64 * ((unsigned __int8)__ROR4__(a2, 8) & 0xA1)) + 0x248i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DAA00: // 0x28B12F0 - 2
        {
            // __int64 __fastcall sub_27DAA00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~FuckEnc::CacheRead<_DWORD>(a3 + 0x208) | 0x1Cu;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DDB60: // 0x28B12F0 - 3
        {
            // __int64 __fastcall sub_27DDB60(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0xC0);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCC40: // 0x28B12F0 - 4
        {
            // __int64 __fastcall sub_27DCC40(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x6E0);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x5A0);
            return result;

            break;
        }
        case 0x27D5E50: // 0x28B12F0 - 5
        {
            // __int64 __fastcall sub_27D5E50(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5F8) + 8i64 * ((a2 ^ 0xFD) & 0x42)) + 0x2F8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D99D0: // 0x28B12F0 - 6
        {
            // __int64 __fastcall sub_27D99D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x148) + 8i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(a3 + 0x620) ^ 0x89u)) + 0x498i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3370: // 0x28B12F0 - 7
        {
            // __int64 __fastcall sub_27D3370(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = *a1 ^ FuckEnc::CacheRead<_DWORD>(a3 + 0x80) ^ 0xAF57A40u;
            *a1 = result;
            return result;

            break;
        }
        case 0x27DE370: // 0x28B12F0 - 8
        {
            // __int64 __fastcall sub_27DE370(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x298);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x1B0) | 9;
            return result;

            break;
        }
        case 0x27D4E20: // 0x28B12F0 - 9
        {
            // __int64 __fastcall sub_27D4E20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = *a1 ^ (0xF08EBE39 * FuckEnc::CacheRead<_DWORD>(a3 + 0x348)) ^ 0x2AC3008F;
            *a1 = result;
            return result;

            break;
        }
        case 0x27DA750: // 0x28B12F0 - 10
        {
            // __int64 __fastcall sub_27DA750(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 ^ *a1 ^ (unsigned int)(FuckEnc::CacheRead<_DWORD>(a3 + 0x1C8) - 0x6DCE44E3);
            *a1 = result;
            return result;

            break;
        }
        case 0x27DA3C0: // 0x28B12F0 - 11
        {
            // __int64 __fastcall sub_27DA3C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x658);
            *a1 ^= 0xBFC495AB * FuckEnc::CacheRead<_DWORD>(result + 0x200);
            return result;

            break;
        }
        case 0x27DDAA0: // 0x28B12F0 - 12
        {
            // __int64 __fastcall sub_27DDAA0(_DWORD *a1, int a2, _QWORD FuckEnc::CacheRead<__int64>(a3))

            a2 = (int)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3) + 8i64 * (unsigned __int8)__ROR4__(a2, 0x1E)) + 0x200i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCF40: // 0x28B12F0 - 13
        {
            // __int64 __fastcall sub_27DCF40(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x748) + 0x308i64) + 0x5E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4600: // 0x28B12F0 - 14
        {
            // __int64 __fastcall sub_27D4600(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x308) + 0x4F0i64) + 0x440i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5C00: // 0x28B12F0 - 15
        {
            // __int64 __fastcall sub_27D5C00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xD8) + 8i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(a3 + 0x490) ^ 0x50) & 0xD0)) + 0x2F8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBC40: // 0x28B12F0 - 16
        {
            // __int64 __fastcall sub_27DBC40(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~FuckEnc::CacheRead<_DWORD>(a3 + 0x1C8) | 0xFu;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DDD00: // 0x28B12F0 - 17
        {
            // __int64 __fastcall sub_27DDD00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = 0x634A2EC2 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x200) & 0xFFFFFFEA);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD190: // 0x28B12F0 - 18
        {
            // __int64 __fastcall sub_27DD190(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x150) + 0x38i64) + 4i64 * (unsigned __int8)__ROL4__(a2, 0x11));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB890: // 0x28B12F0 - 19
        {
            // __int64 __fastcall sub_27DB890(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0x550);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCA80: // 0x28B12F0 - 20
        {
            // __int64 __fastcall sub_27DCA80(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 + (FuckEnc::CacheRead<_DWORD>(a3 + 0x100) & 0xFFFFFFE9);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D89D0: // 0x28B12F0 - 21
        {
            // __int64 __fastcall sub_27D89D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x38);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(a3 + 0x2C0), 0x1B));
            return result;

            break;
        }
        case 0x27D7590: // 0x28B12F0 - 22
        {
            // __int64 __fastcall sub_27D7590(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4B0) + 8i64 * (unsigned __int8)(0xF1 * a2)) + 0xB8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3E30: // 0x28B12F0 - 23
        {
            // __int64 __fastcall sub_27D3E30(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x748) + 0x180i64) + 4i64 * (a2 & 0xBB));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE0A0: // 0x28B12F0 - 24
        {
            // __int64 __fastcall sub_27DE0A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x748);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x550) ^ 0x8E0FFE7A;
            return result;

            break;
        }
        case 0x27D6DB0: // 0x28B12F0 - 25
        {
            // __int64 __fastcall sub_27D6DB0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x650);
            *a1 ^= a2 + FuckEnc::CacheRead<_DWORD>(result + 0x588);
            return result;

            break;
        }
        case 0x27DC690: // 0x28B12F0 - 26
        {
            // __int64 __fastcall sub_27DC690(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x150) + 0x3A8i64) + 0x68i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DAF80: // 0x28B12F0 - 27
        {
            // __int64 __fastcall sub_27DAF80(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x238) + 0x558i64) + 4i64 * (unsigned __int8)__ROR4__(a2, 0x1E));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA510: // 0x28B12F0 - 28
        {
            // __int64 __fastcall sub_27DA510(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x670) + 0x180i64) + 4i64 * (a2 ^ 0x8Cu));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4330: // 0x28B12F0 - 29
        {
            // __int64 __fastcall sub_27D4330(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4B0) + 8i64 * ((unsigned __int8)(0x83 * a2) & 0xB9)) + 0x30i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DDC20: // 0x28B12F0 - 30
        {
            // __int64 __fastcall sub_27DDC20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x150) + 0x780i64) + 0x588i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DDFE0: // 0x28B12F0 - 31
        {
            // __int64 __fastcall sub_27DDFE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x2C0) ^ 0xB01DC2F4;
            return result;

            break;
        }
        case 0x27D5490: // 0x28B12F0 - 32
        {
            // __int64 __fastcall sub_27D5490(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = 0xD1FF41ED * (FuckEnc::CacheRead<_DWORD>(a3 + 0x1C8) >> 0xC);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBA60: // 0x28B12F0 - 33
        {
            // __int64 __fastcall sub_27DBA60(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x3E0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x6D0) << 0x12;
            return result;

            break;
        }
        case 0x27DDF20: // 0x28B12F0 - 34
        {
            // __int64 __fastcall sub_27DDF20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x420);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xE8) + 0x5A0i64) ^ 0xF3) & 0x6D));
            return result;

            break;
        }
        case 0x27D4C10: // 0x28B12F0 - 35
        {
            // __int64 __fastcall sub_27D4C10(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x798);
            *a1 ^= a2 + FuckEnc::CacheRead<_DWORD>(result + 0x408);
            return result;

            break;
        }
        case 0x27D7070: // 0x28B12F0 - 36
        {
            // __int64 __fastcall sub_27D7070(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(FuckEnc::CacheRead<_DWORD>(a3 + 0x248) << 0xB);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6220: // 0x28B12F0 - 37
        {
            // __int64 __fastcall sub_27D6220(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x7B34C380 * FuckEnc::CacheRead<_DWORD>(a3 + 0x390) + 0x1CDD3E80);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE8A0: // 0x28B12F0 - 38
        {
            // __int64 __fastcall sub_27DE8A0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x148) + 8i64 * (__ROR4__(a2, 0xC) & 0xB)) + 0x1B0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DACD0: // 0x28B12F0 - 39
        {
            // __int64 __fastcall sub_27DACD0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x528);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x2C0) ^ 0xFF2C14D1;
            return result;

            break;
        }
        case 0x27DA460: // 0x28B12F0 - 40
        {
            // __int64 __fastcall sub_27DA460(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~(0xC3018944 * FuckEnc::CacheRead<_DWORD>(a3 + 0xC0));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA690: // 0x28B12F0 - 41
        {
            // __int64 __fastcall sub_27DA690(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xE8) + 0x638i64) + 0x588i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8400: // 0x28B12F0 - 42
        {
            // __int64 __fastcall sub_27D8400(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x228) + 0x750i64) + 0x5D8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE5D0: // 0x28B12F0 - 43
        {
            // __int64 __fastcall sub_27DE5D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x670);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x2F8) << 8;
            return result;

            break;
        }
        case 0x27D2A90: // 0x28B12F0 - 44
        {
            // __int64 __fastcall sub_27D2A90(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x6B0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x298) + 0x6E8i64) ^ 6) & 0x1E));
            return result;

            break;
        }
        case 0x27D8640: // 0x28B12F0 - 45
        {
            // __int64 __fastcall sub_27D8640(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x238);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x30);
            return result;

            break;
        }
        case 0x27D39F0: // 0x28B12F0 - 46
        {
            // __int64 __fastcall sub_27D39F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x450) + 0x230i64) + 0x498i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE7F0: // 0x28B12F0 - 47
        {
            // __int64 __fastcall sub_27DE7F0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2A0) + 8i64 * (a2 ^ 0x1Cu)) + 0x5E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DADC0: // 0x28B12F0 - 48
        {
            // __int64 __fastcall sub_27DADC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x2B071425 * FuckEnc::CacheRead<_DWORD>(a3 + 0x408)) >> 0xB;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5840: // 0x28B12F0 - 49
        {
            // __int64 __fastcall sub_27D5840(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3C0) + 0x780i64) + 0x350i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3580: // 0x28B12F0 - 50
        {
            // __int64 __fastcall sub_27D3580(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x798) + 0x510i64) + 0x6E8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBF20: // 0x28B12F0 - 51
        {
            // __int64 __fastcall sub_27DBF20(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x748) + 0x2C8i64) + 4i64 * (unsigned __int8)(0x2D * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D81D0: // 0x28B12F0 - 52
        {
            // __int64 __fastcall sub_27D81D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x348) | 4u);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5610: // 0x28B12F0 - 53
        {
            // __int64 __fastcall sub_27D5610(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x230);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0xC0);
            return result;

            break;
        }
        case 0x27D5D80: // 0x28B12F0 - 54
        {
            // __int64 __fastcall sub_27D5D80(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x118) + 0x380i64) + 0x588i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6F00: // 0x28B12F0 - 55
        {
            // __int64 __fastcall sub_27D6F00(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x450) + 0x48i64) + 4i64 * (unsigned __int8)__ROR4__(a2, 0xA));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC980: // 0x28B12F0 - 56
        {
            // __int64 __fastcall sub_27DC980(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x658);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x248) | 0x1F;
            return result;

            break;
        }
        case 0x27DBE10: // 0x28B12F0 - 57
        {
            // __int64 __fastcall sub_27DBE10(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x278) + 0x238i64) + 0x6E8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4840: // 0x28B12F0 - 58
        {
            // __int64 __fastcall sub_27D4840(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = 0x9E1F7FE3 * ~FuckEnc::CacheRead<_DWORD>(a3 + 0xB8);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBB70: // 0x28B12F0 - 59
        {
            // __int64 __fastcall sub_27DBB70(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x38);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (unsigned __int8)(0xA5 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(a3 + 0x280) + 0x1C8i64)));
            return result;

            break;
        }
        case 0x27D9450: // 0x28B12F0 - 60
        {
            // __int64 __fastcall sub_27D9450(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x495D35FB - FuckEnc::CacheRead<_DWORD>(a3 + 0x408));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCD40: // 0x28B12F0 - 61
        {
            // __int64 __fastcall sub_27DCD40(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xE8) + 0x420i64) + 4i64 * (__ROR4__(a2, 0x17) & 0x1A));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4550: // 0x28B12F0 - 62
        {
            // __int64 __fastcall sub_27D4550(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xE8) + 0x260i64) + 0x68i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD880: // 0x28B12F0 - 63
        {
            // __int64 __fastcall sub_27DD880(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x3C0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x310) ^ 0x27A5E763;
            return result;

            break;
        }
        case 0x27D49E0: // 0x28B12F0 - 64
        {
            // __int64 __fastcall sub_27D49E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4C0) + 0x748i64) + 0x698i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D72C0: // 0x28B12F0 - 65
        {
            // __int64 __fastcall sub_27D72C0(_DWORD *a1, unsigned int a2, __int64 a3)

            a2 = (unsigned int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = 0x56CF8628 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x5D8) ^ a2);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DEA20: // 0x28B12F0 - 66
        {
            // __int64 __fastcall sub_27DEA20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x298);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x248) << 6;
            return result;

            break;
        }
        case 0x27DA230: // 0x28B12F0 - 67
        {
            // __int64 __fastcall sub_27DA230(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0xC30131 * ~FuckEnc::CacheRead<_DWORD>(a3 + 0x440));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB2E0: // 0x28B12F0 - 68
        {
            // __int64 __fastcall sub_27DB2E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x308) + 0x758i64) + 0x720i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8DB0: // 0x28B12F0 - 69
        {
            // __int64 __fastcall sub_27D8DB0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x290) + 8i64 * ((0x1D * a2) & 0x23)) + 0x100i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8290: // 0x28B12F0 - 70
        {
            // __int64 __fastcall sub_27D8290(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3E0) + 0x638i64) + 0x1C8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8920: // 0x28B12F0 - 71
        {
            // __int64 __fastcall sub_27D8920(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x370);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x620);
            return result;

            break;
        }
        case 0x27D6E50: // 0x28B12F0 - 72
        {
            // __int64 __fastcall sub_27D6E50(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x38);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * ((unsigned __int8)(0x1B * FuckEnc::CacheRead<_BYTE>(a3 + 0x1C8)) & 0x9B));
            return result;

            break;
        }
        case 0x27DE680: // 0x28B12F0 - 73
        {
            // __int64 __fastcall sub_27DE680(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x4C8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x208) - 0x5A3CFECF;
            return result;

            break;
        }
        case 0x27D3EF0: // 0x28B12F0 - 74
        {
            // __int64 __fastcall sub_27D3EF0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4B8) + 0x3C0i64) + 0x490i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8580: // 0x28B12F0 - 75
        {
            // __int64 __fastcall sub_27D8580(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~(0xC3018944 * FuckEnc::CacheRead<_DWORD>(a3 + 0x6D0));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D56B0: // 0x28B12F0 - 76
        {
            // __int64 __fastcall sub_27D56B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x138);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x390) ^ 0x54EFC0D;
            return result;

            break;
        }
        case 0x27DB5B0: // 0x28B12F0 - 77
        {
            // __int64 __fastcall sub_27DB5B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x420);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xE8) + 0x1B0i64) & 9));
            return result;

            break;
        }
        case 0x27D41D0: // 0x28B12F0 - 78
        {
            // __int64 __fastcall sub_27D41D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x228);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x5D8) ^ 0x30B00017;
            return result;

            break;
        }
        case 0x27D91F0: // 0x28B12F0 - 79
        {
            // __int64 __fastcall sub_27D91F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xD8) + 8i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x100) & 0xFC)) + 0x100i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7CE0: // 0x28B12F0 - 80
        {
            // __int64 __fastcall sub_27D7CE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x48);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (unsigned __int8)__ROR4__(~FuckEnc::CacheRead<_DWORD>(a3 + 0x1C8), 0x10));
            return result;

            break;
        }
        case 0x27D3140: // 0x28B12F0 - 81
        {
            // __int64 __fastcall sub_27D3140(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 8) + 0x190i64) + 4i64 * (unsigned __int8)__ROL4__(a2, 0x1D));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE740: // 0x28B12F0 - 82
        {
            // __int64 __fastcall sub_27DE740(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(a2 * ~FuckEnc::CacheRead<_DWORD>(a3 + 0x5A0));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC010: // 0x28B12F0 - 83
        {
            // __int64 __fastcall sub_27DC010(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x598) + 0x278i64) + 0x5D8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA180: // 0x28B12F0 - 84
        {
            // __int64 __fastcall sub_27DA180(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x678) + 8i64 * (a2 & 0x97)) + 0x490i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7AB0: // 0x28B12F0 - 85
        {
            // __int64 __fastcall sub_27D7AB0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x150);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x310);
            return result;

            break;
        }
        case 0x27D6460: // 0x28B12F0 - 86
        {
            // __int64 __fastcall sub_27D6460(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x6A0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (unsigned __int8)(0x6D * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(a3 + 0x308) + 0x490i64)));
            return result;

            break;
        }
        case 0x27D65D0: // 0x28B12F0 - 87
        {
            // __int64 __fastcall sub_27D65D0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x658) + 0x2D8i64) + 4i64 * (a2 & 0x9A));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6AE0: // 0x28B12F0 - 88
        {
            // __int64 __fastcall sub_27D6AE0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = 0xFB5F45B0 * FuckEnc::CacheRead<_DWORD>(a3 + 0x350) * a2;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB3D0: // 0x28B12F0 - 89
        {
            // __int64 __fastcall sub_27DB3D0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x528) + 0x190i64) + 4i64 * (unsigned __int8)(0x9C * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA910: // 0x28B12F0 - 90
        {
            // __int64 __fastcall sub_27DA910(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6E0) + 0x568i64) + 4i64 * (a2 & 0xBB));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6BA0: // 0x28B12F0 - 91
        {
            // __int64 __fastcall sub_27D6BA0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x608) + 0x510i64) + 0x620i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6D00: // 0x28B12F0 - 92
        {
            // __int64 __fastcall sub_27D6D00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x380);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x208) - 0x2E00BE75;
            return result;

            break;
        }
        case 0x27D4A90: // 0x28B12F0 - 93
        {
            // __int64 __fastcall sub_27D4A90(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x130);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x100) + 0x14C31131;
            return result;

            break;
        }
        case 0x27DE2C0: // 0x28B12F0 - 94
        {
            // __int64 __fastcall sub_27DE2C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x650) + 0x380i64) + 0x80i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6150: // 0x28B12F0 - 95
        {
            // __int64 __fastcall sub_27D6150(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x118) + 0x370i64) + 0x6E8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5240: // 0x28B12F0 - 96
        {
            // __int64 __fastcall sub_27D5240(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 ^ *a1 ^ (unsigned int)(FuckEnc::CacheRead<_DWORD>(a3 + 0x720) - 0x225DD445);
            *a1 = result;
            return result;

            break;
        }
        case 0x27D9E70: // 0x28B12F0 - 97
        {
            // __int64 __fastcall sub_27D9E70(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x130) + 0x370i64) + 0x68i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8B70: // 0x28B12F0 - 98
        {
            // __int64 __fastcall sub_27D8B70(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x3C8);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0xB8);
            return result;

            break;
        }
        case 0x27D6690: // 0x28B12F0 - 99
        {
            // __int64 __fastcall sub_27D6690(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x678) + 8i64 * (__ROR4__(a2, 0xA) & 0x15)) + 0x620i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D97D0: // 0x28B12F0 - 100
        {
            // __int64 __fastcall sub_27D97D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x508) + 0x6E0i64) + 0x348i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4CC0: // 0x28B12F0 - 101
        {
            // __int64 __fastcall sub_27D4CC0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 ^ *a1 ^ (unsigned int)~FuckEnc::CacheRead<_DWORD>(a3 + 0xB8);
            *a1 = result;
            return result;

            break;
        }
        case 0x27D4D80: // 0x28B12F0 - 102
        {
            // __int64 __fastcall sub_27D4D80(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0x728);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6C50: // 0x28B12F0 - 103
        {
            // __int64 __fastcall sub_27D6C50(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(0x48CA186F * FuckEnc::CacheRead<_DWORD>(a3 + 0x498));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA000: // 0x28B12F0 - 104
        {
            // __int64 __fastcall sub_27DA000(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3C8) + 0x130i64) + 0x720i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DAAE0: // 0x28B12F0 - 105
        {
            // __int64 __fastcall sub_27DAAE0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x280) + 0x190i64) + 4i64 * ((0x19 * a2) & 0x7F));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D44A0: // 0x28B12F0 - 106
        {
            // __int64 __fastcall sub_27D44A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(FuckEnc::CacheRead<_DWORD>(a3 + 0x178) >> 0x15);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9AB0: // 0x28B12F0 - 107
        {
            // __int64 __fastcall sub_27D9AB0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (FuckEnc::CacheRead<_DWORD>(a3 + 0x720) ^ 0xFFFDAA60) << 0xC;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D43F0: // 0x28B12F0 - 108
        {
            // __int64 __fastcall sub_27D43F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x150) + 0x138i64) + 0x490i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC110: // 0x28B12F0 - 109
        {
            // __int64 __fastcall sub_27DC110(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0x588);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC4A0: // 0x28B12F0 - 110
        {
            // __int64 __fastcall sub_27DC4A0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x4C8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x458) * a2;
            return result;

            break;
        }
        case 0x27D6970: // 0x28B12F0 - 111
        {
            // __int64 __fastcall sub_27D6970(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x48);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * ((unsigned __int8)__ROR4__(~FuckEnc::CacheRead<_DWORD>(a3 + 0x2F8), 0xC) & 0x85));
            return result;

            break;
        }
        case 0x27DB7A0: // 0x28B12F0 - 112
        {
            // __int64 __fastcall sub_27DB7A0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x3C8);
            *a1 ^= a2 + FuckEnc::CacheRead<_DWORD>(result + 0x5A0);
            return result;

            break;
        }
        case 0x27DB050: // 0x28B12F0 - 113
        {
            // __int64 __fastcall sub_27DB050(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x780) + 0x510i64) + 0x208i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4280: // 0x28B12F0 - 114
        {
            // __int64 __fastcall sub_27D4280(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x48);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4C0) + 0x698i64) & 0xD2));
            return result;

            break;
        }
        case 0x27D3B50: // 0x28B12F0 - 115
        {
            // __int64 __fastcall sub_27D3B50(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x758);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x390) + 0x7603FFC6;
            return result;

            break;
        }
        case 0x27D67F0: // 0x28B12F0 - 116
        {
            // __int64 __fastcall sub_27D67F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xF0) + 0x670i64) + 0x200i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA810: // 0x28B12F0 - 117
        {
            // __int64 __fastcall sub_27DA810(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x278) + 0x308i64) + 0x350i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8870: // 0x28B12F0 - 118
        {
            // __int64 __fastcall sub_27D8870(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x668) + 8i64 * ((unsigned __int8)(0x94 * a2) & 0xA6)) + 0x100i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCE40: // 0x28B12F0 - 119
        {
            // __int64 __fastcall sub_27DCE40(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4C0) + 0x420i64) + 4i64 * (unsigned __int8)(0x3F * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7630: // 0x28B12F0 - 120
        {
            // __int64 __fastcall sub_27D7630(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x798);
            *a1 ^= 0xE2E0A98B * FuckEnc::CacheRead<_DWORD>(result + 0x768);
            return result;

            break;
        }
        case 0x27D3D90: // 0x28B12F0 - 121
        {
            // __int64 __fastcall sub_27D3D90(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x78);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x5D8);
            return result;

            break;
        }
        case 0x27D8E70: // 0x28B12F0 - 122
        {
            // __int64 __fastcall sub_27D8E70(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x158) + 8i64 * (a2 & 0x3B)) + 0x6D0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8FE0: // 0x28B12F0 - 123
        {
            // __int64 __fastcall sub_27D8FE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x230) + 0x260i64) + 0x178i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DDE80: // 0x28B12F0 - 124
        {
            // __int64 __fastcall sub_27DDE80(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~FuckEnc::CacheRead<_DWORD>(a3 + 0x6D0) >> 3;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DEB80: // 0x28B12F0 - 125
        {
            // __int64 __fastcall sub_27DEB80(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x3A8);
            *a1 ^= 0xD0DD088A * FuckEnc::CacheRead<_DWORD>(result + 0x1C8);
            return result;

            break;
        }
        case 0x27D6A30: // 0x28B12F0 - 126
        {
            // __int64 __fastcall sub_27D6A30(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x668) + 8i64 * (a2 & 0x52)) + 0x6E8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC880: // 0x28B12F0 - 127
        {
            // __int64 __fastcall sub_27DC880(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6E0) + 0x4C0i64) + 0x498i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DEAD0: // 0x28B12F0 - 128
        {
            // __int64 __fastcall sub_27DEAD0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x3C8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x80) - 0x31911E44;
            return result;

            break;
        }
        case 0x27D34D0: // 0x28B12F0 - 129
        {
            // __int64 __fastcall sub_27D34D0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x138);
            *a1 ^= a2 + FuckEnc::CacheRead<_DWORD>(result + 0x620);
            return result;

            break;
        }
        case 0x27D7410: // 0x28B12F0 - 130
        {
            // __int64 __fastcall sub_27D7410(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x650) + 0x780i64) + 0x310i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5B40: // 0x28B12F0 - 131
        {
            // __int64 __fastcall sub_27D5B40(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x750) + 0x1C0i64) + 0x728i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D71E0: // 0x28B12F0 - 132
        {
            // __int64 __fastcall sub_27D71E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x130);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x1B0) & 0xFFFFFFE4;
            return result;

            break;
        }
        case 0x27D9C40: // 0x28B12F0 - 133
        {
            // __int64 __fastcall sub_27D9C40(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x678) + 8i64 * (unsigned __int8)(0x1A * a2)) + 0x4D8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2FB0: // 0x28B12F0 - 134
        {
            // __int64 __fastcall sub_27D2FB0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x6E0);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x30);
            return result;

            break;
        }
        case 0x27D7790: // 0x28B12F0 - 135
        {
            // __int64 __fastcall sub_27D7790(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x678) + 8i64 * (a2 & 0xE5)) + 0x1C8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB120: // 0x28B12F0 - 136
        {
            // __int64 __fastcall sub_27DB120(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = 0xD2E6BC6C * FuckEnc::CacheRead<_DWORD>(a3 + 0x620);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9B80: // 0x28B12F0 - 137
        {
            // __int64 __fastcall sub_27D9B80(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x748) + 0x528i64) + 0x248i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7850: // 0x28B12F0 - 138
        {
            // __int64 __fastcall sub_27D7850(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3A8) + 0x510i64) + 0x768i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD930: // 0x28B12F0 - 139
        {
            // __int64 __fastcall sub_27DD930(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x298) + 0x6B0i64) + 4i64 * (a2 & 0x95));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5550: // 0x28B12F0 - 140
        {
            // __int64 __fastcall sub_27D5550(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4F0) + 0x230i64) + 0x80i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2C10: // 0x28B12F0 - 141
        {
            // __int64 __fastcall sub_27D2C10(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xD8) + 8i64 * (a2 & 0xB0)) + 0x1B0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6520: // 0x28B12F0 - 142
        {
            // __int64 __fastcall sub_27D6520(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x670) + 0x180i64) + 4i64 * (a2 & 0xC3));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6300: // 0x28B12F0 - 143
        {
            // __int64 __fastcall sub_27D6300(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1C0) + 0x420i64) + 4i64 * ((0xA * a2) & 0x12));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DAEA0: // 0x28B12F0 - 144
        {
            // __int64 __fastcall sub_27DAEA0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (FuckEnc::CacheRead<_DWORD>(a3 + 0x6E8) ^ 0x6FD1FF40) & 0xFFFFFFFA;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5770: // 0x28B12F0 - 145
        {
            // __int64 __fastcall sub_27D5770(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x118) + 0x6A0i64) + 4i64 * ((a2 ^ 0xE7) & 0xFC));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D74E0: // 0x28B12F0 - 146
        {
            // __int64 __fastcall sub_27D74E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (FuckEnc::CacheRead<_DWORD>(a3 + 0x310) + 0x2CC3156D) | 2u;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7360: // 0x28B12F0 - 147
        {
            // __int64 __fastcall sub_27D7360(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x600);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0xB8) + 0x355C652B;
            return result;

            break;
        }
        case 0x27D76F0: // 0x28B12F0 - 148
        {
            // __int64 __fastcall sub_27D76F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 8) + 8i64) + 0x4D8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9F40: // 0x28B12F0 - 149
        {
            // __int64 __fastcall sub_27D9F40(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x298) + 0x260i64) + 0x458i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8110: // 0x28B12F0 - 150
        {
            // __int64 __fastcall sub_27D8110(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2A0) + 8i64 * (unsigned __int8)(0x62 * FuckEnc::CacheRead<_BYTE>(a3 + 0x408))) + 0x5D8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA5D0: // 0x28B12F0 - 151
        {
            // __int64 __fastcall sub_27DA5D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x508);
            *a1 ^= 0x2B25BBD1 * FuckEnc::CacheRead<_DWORD>(result + 0x1B0);
            return result;

            break;
        }
        case 0x27D3AA0: // 0x28B12F0 - 152
        {
            // __int64 __fastcall sub_27D3AA0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x780);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x588);
            return result;

            break;
        }
        case 0x27D4FB0: // 0x28B12F0 - 153
        {
            // __int64 __fastcall sub_27D4FB0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3E8) + 8i64 * (a2 & 0x52)) + 0x68i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE450: // 0x28B12F0 - 154
        {
            // __int64 __fastcall sub_27DE450(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x230) + 0x420i64) + 4i64 * (a2 & 8));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5F10: // 0x28B12F0 - 155
        {
            // __int64 __fastcall sub_27D5F10(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x130);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x200) ^ 0x1EE462DA;
            return result;

            break;
        }
        case 0x27D4EE0: // 0x28B12F0 - 156
        {
            // __int64 __fastcall sub_27D4EE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x260) + 0x638i64) + 0x458i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD2B0: // 0x28B12F0 - 157
        {
            // __int64 __fastcall sub_27DD2B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x260) + 0x750i64) + 0x588i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9DB0: // 0x28B12F0 - 158
        {
            // __int64 __fastcall sub_27D9DB0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x2C8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4C0) + 0x440i64), 0xB));
            return result;

            break;
        }
        case 0x27DE200: // 0x28B12F0 - 159
        {
            // __int64 __fastcall sub_27DE200(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x638) + 0x650i64) + 0x390i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3070: // 0x28B12F0 - 160
        {
            // __int64 __fastcall sub_27D3070(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = 0xFB832C37 * ~FuckEnc::CacheRead<_DWORD>(a3 + 0x498);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD410: // 0x28B12F0 - 161
        {
            // __int64 __fastcall sub_27DD410(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x670) + 0x420i64) + 4i64 * ((unsigned __int8)(0x55 * a2) & 0xF4));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC2C0: // 0x28B12F0 - 162
        {
            // __int64 __fastcall sub_27DC2C0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4B0) + 8i64 * ((0x20 * a2) & 0x5C)) + 0x698i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D63B0: // 0x28B12F0 - 163
        {
            // __int64 __fastcall sub_27D63B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = *a1 ^ FuckEnc::CacheRead<_DWORD>(a3 + 0x248) ^ 0xC739F983;
            *a1 = result;
            return result;

            break;
        }
        case 0x27D3860: // 0x28B12F0 - 164
        {
            // __int64 __fastcall sub_27D3860(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x598);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x4D8);
            return result;

            break;
        }
        case 0x27D93B0: // 0x28B12F0 - 165
        {
            // __int64 __fastcall sub_27D93B0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3E8) + 8i64 * (unsigned __int8)(2 * a2)) + 0x588i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7D90: // 0x28B12F0 - 166
        {
            // void __fastcall sub_27D7D90(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x80) ^ a2);

            break;
        }
        case 0x27D5CC0: // 0x28B12F0 - 167
        {
            // __int64 __fastcall sub_27D5CC0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x78);
            *a1 ^= a2 ^ FuckEnc::CacheRead<_DWORD>(result + 0x5A0);
            return result;

            break;
        }
        case 0x27D68B0: // 0x28B12F0 - 168
        {
            // __int64 __fastcall sub_27D68B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x48);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x280) + 0x2F8i64), 0x10));
            return result;

            break;
        }
        case 0x27D3CD0: // 0x28B12F0 - 169
        {
            // __int64 __fastcall sub_27D3CD0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x3A8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x698) - 0x6825733E;
            return result;

            break;
        }
        case 0x27D9080: // 0x28B12F0 - 170
        {
            // __int64 __fastcall sub_27D9080(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3E8) + 8i64 * ((unsigned __int8)__ROL4__(a2, 6) & 0x92)) + 0x550i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8360: // 0x28B12F0 - 171
        {
            // __int64 __fastcall sub_27D8360(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3A8) + 0x48i64) + 4i64 * (a2 & 0x12));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D31F0: // 0x28B12F0 - 172
        {
            // __int64 __fastcall sub_27D31F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x228) + 0x3E0i64) + 0xB8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2E50: // 0x28B12F0 - 173
        {
            // __int64 __fastcall sub_27D2E50(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0xE8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x350) ^ 0x32674258;
            return result;

            break;
        }
        case 0x27D58D0: // 0x28B12F0 - 174
        {
            // __int64 __fastcall sub_27D58D0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xD8) + 8i64 * (unsigned __int8)(0x5F * a2)) + 0x440i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DE510: // 0x28B12F0 - 175
        {
            // __int64 __fastcall sub_27DE510(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x158) + 8i64 * (unsigned __int8)(0x26 * a2)) + 0x588i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D37B0: // 0x28B12F0 - 176
        {
            // __int64 __fastcall sub_27D37B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3C0) + 0x528i64) + 0x498i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6FC0: // 0x28B12F0 - 177
        {
            // __int64 __fastcall sub_27D6FC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x190);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x2C0) & 0xFA));
            return result;

            break;
        }
        case 0x27DEC30: // 0x28B12F0 - 178
        {
            // __int64 __fastcall sub_27DEC30(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0x5D8);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9D00: // 0x28B12F0 - 179
        {
            // __int64 __fastcall sub_27D9D00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x150);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x620);
            return result;

            break;
        }
        case 0x27DE160: // 0x28B12F0 - 180
        {
            // __int64 __fastcall sub_27DE160(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6E0) + 0x750i64) + 0x390i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD230: // 0x28B12F0 - 181
        {
            // __int64 __fastcall sub_27DD230(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0xB8);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7120: // 0x28B12F0 - 182
        {
            // __int64 __fastcall sub_27D7120(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x520) + 8i64 * (a2 & 0x90)) + 0x440i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBD20: // 0x28B12F0 - 183
        {
            // __int64 __fastcall sub_27DBD20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x378);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x30);
            return result;

            break;
        }
        case 0x27D9680: // 0x28B12F0 - 184
        {
            // __int64 __fastcall sub_27D9680(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x650);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x5A0) & 0xFFFFFFFD;
            return result;

            break;
        }
        case 0x27D95C0: // 0x28B12F0 - 185
        {
            // __int64 __fastcall sub_27D95C0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x10) + 8i64 * (__ROL4__(a2, 1) & 0x35)) + 0x6E8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8F20: // 0x28B12F0 - 186
        {
            // __int64 __fastcall sub_27D8F20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x780);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x550) - 0x3CFE76BC;
            return result;

            break;
        }
        case 0x27DC1D0: // 0x28B12F0 - 187
        {
            // __int64 __fastcall sub_27DC1D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x5E0) ^ 0x5FB7DE18u);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D92E0: // 0x28B12F0 - 188
        {
            // __int64 __fastcall sub_27D92E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)0x5C30131 ^ *a1 ^ (0x27D651AD * FuckEnc::CacheRead<_DWORD>(a3 + 0x178));
            *a1 = result;
            return result;

            break;
        }
        case 0x27D8C30: // 0x28B12F0 - 189
        {
            // __int64 __fastcall sub_27D8C30(_DWORD *a1, char a2, _QWORD FuckEnc::CacheRead<__int64>(a3))

            a2 = (char)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3) + 8i64 * (unsigned __int8)(0x53 * a2)) + 0x200i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D78E0: // 0x28B12F0 - 190
        {
            // __int64 __fastcall sub_27D78E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(-FuckEnc::CacheRead<_DWORD>(a3 + 0x390) - 0x3CEECE6C);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D53D0: // 0x28B12F0 - 191
        {
            // __int64 __fastcall sub_27D53D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x260);
            *a1 ^= 0x47CAE109 * FuckEnc::CacheRead<_DWORD>(result + 0x310);
            return result;

            break;
        }
        case 0x27D7F90: // 0x28B12F0 - 192
        {
            // __int64 __fastcall sub_27D7F90(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x658) + 0x6A0i64) + 4i64 * ((a2 ^ 0xCF) & 0xF3));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5310: // 0x28B12F0 - 193
        {
            // __int64 __fastcall sub_27D5310(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x650) + 0x658i64) + 0x4D8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DABD0: // 0x28B12F0 - 194
        {
            // __int64 __fastcall sub_27DABD0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x290) + 8i64 * (unsigned __int8)__ROL4__(a2, 7)) + 0x348i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5A90: // 0x28B12F0 - 195
        {
            // __int64 __fastcall sub_27D5A90(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x278) + 0x650i64) + 0x2F8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC780: // 0x28B12F0 - 196
        {
            // __int64 __fastcall sub_27DC780(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x670) + 0xE0i64) + 0x1C8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB1E0: // 0x28B12F0 - 197
        {
            // __int64 __fastcall sub_27DB1E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x130) + 0x670i64) + 0x68i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB6A0: // 0x28B12F0 - 198
        {
            // __int64 __fastcall sub_27DB6A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x610);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x458);
            return result;

            break;
        }
        case 0x27DD350: // 0x28B12F0 - 199
        {
            // __int64 __fastcall sub_27DD350(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xE8) + 0x38i64) + 4i64 * (unsigned __int8)__ROR4__(a2, 6));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6080: // 0x28B12F0 - 200
        {
            // __int64 __fastcall sub_27D6080(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x668) + 8i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x720) & 0xE6)) + 0x768i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9130: // 0x28B12F0 - 201
        {
            // void __fastcall sub_27D9130(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= FuckEnc::CacheRead<_DWORD>(a3 + 0x490) + a2 - 0xB1F1FBE;

            break;
        }
        case 0x27D9730: // 0x28B12F0 - 202
        {
            // void __fastcall sub_27D9730(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x1B0) ^ a2);

            break;
        }
        case 0x27D3630: // 0x28B12F0 - 203
        {
            // __int64 __fastcall sub_27D3630(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x280) + 0xE0i64) + 0x728i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2CD0: // 0x28B12F0 - 204
        {
            // __int64 __fastcall sub_27D2CD0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x410);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (unsigned __int8)(0xC * FuckEnc::CacheRead<_DWORD>(a3 + 0x5A0)));
            return result;

            break;
        }
        case 0x27DD5B0: // 0x28B12F0 - 205
        {
            // __int64 __fastcall sub_27DD5B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(FuckEnc::CacheRead<_DWORD>(a3 + 0x458) >> 4);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4900: // 0x28B12F0 - 206
        {
            // __int64 __fastcall sub_27D4900(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (0x6ED1FF41 * FuckEnc::CacheRead<_DWORD>(a3 + 0x80)) & 0xFFFFFFED;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD9E0: // 0x28B12F0 - 207
        {
            // __int64 __fastcall sub_27DD9E0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xD8) + 8i64 * (unsigned __int8)(0x84 * a2)) + 0x408i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7C20: // 0x28B12F0 - 208
        {
            // __int64 __fastcall sub_27D7C20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x298);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x5A0);
            return result;

            break;
        }
        case 0x27DC590: // 0x28B12F0 - 209
        {
            // __int64 __fastcall sub_27DC590(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x130);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x310);
            return result;

            break;
        }
        case 0x27D6740: // 0x28B12F0 - 210
        {
            // __int64 __fastcall sub_27D6740(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0xF0);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x4D8);
            return result;

            break;
        }
        case 0x27DA0D0: // 0x28B12F0 - 211
        {
            // __int64 __fastcall sub_27DA0D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = *a1 ^ (FuckEnc::CacheRead<_DWORD>(a3 + 0x4D8) << 0x12) ^ 0x32C537F8u;
            *a1 = result;
            return result;

            break;
        }
        case 0x27DD7D0: // 0x28B12F0 - 212
        {
            // __int64 __fastcall sub_27DD7D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x608);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x350);
            return result;

            break;
        }
        case 0x27DE950: // 0x28B12F0 - 213
        {
            // __int64 __fastcall sub_27DE950(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x368) + 8i64 * (a2 & 0x1C)) + 0x178i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D36E0: // 0x28B12F0 - 214
        {
            // __int64 __fastcall sub_27D36E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1C0) + 0x658i64) + 0x100i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D29E0: // 0x28B12F0 - 215
        {
            // __int64 __fastcall sub_27D29E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x780) + 0xF0i64) + 0x2F8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D59B0: // 0x28B12F0 - 216
        {
            // __int64 __fastcall sub_27D59B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x228) + 0x3A8i64) + 0x350i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7E40: // 0x28B12F0 - 217
        {
            // __int64 __fastcall sub_27D7E40(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x130) + 0x278i64) + 0x5E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D46C0: // 0x28B12F0 - 218
        {
            // __int64 __fastcall sub_27D46C0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x740) + 8i64 * (a2 ^ 0xBDu)) + 0x620i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5FC0: // 0x28B12F0 - 219
        {
            // __int64 __fastcall sub_27D5FC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x380) + 0xE0i64) + 0x588i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D32B0: // 0x28B12F0 - 220
        {
            // __int64 __fastcall sub_27D32B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(FuckEnc::CacheRead<_DWORD>(a3 + 0xB8) >> 0x13);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9500: // 0x28B12F0 - 221
        {
            // __int64 __fastcall sub_27D9500(_DWORD *a1, char a2, _QWORD FuckEnc::CacheRead<__int64>(a3))

            a2 = (char)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3) + 8i64 * (~a2 & 3)) + 0x498i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5080: // 0x28B12F0 - 222
        {
            // __int64 __fastcall sub_27D5080(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0x458);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8050: // 0x28B12F0 - 223
        {
            // __int64 __fastcall sub_27D8050(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x308) + 0x2C8i64) + 4i64 * (unsigned __int8)__ROR4__(a2, 0x18));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5150: // 0x28B12F0 - 224
        {
            // void __fastcall sub_27D5150(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= FuckEnc::CacheRead<_DWORD>(a3 + 0x498) * a2 + 0x2EEC5C2B;

            break;
        }
        case 0x27DD720: // 0x28B12F0 - 225
        {
            // __int64 __fastcall sub_27DD720(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5F8) + 8i64 * (unsigned __int8)__ROL4__(a2, 0x12)) + 0x390i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3FA0: // 0x28B12F0 - 226
        {
            // __int64 __fastcall sub_27D3FA0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x658) + 0x370i64) + 0xB8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D87A0: // 0x28B12F0 - 227
        {
            // __int64 __fastcall sub_27D87A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x748) + 0x3C0i64) + 0x5A0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3C10: // 0x28B12F0 - 228
        {
            // __int64 __fastcall sub_27D3C10(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x610) + 0x3C8i64) + 0x620i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D7EF0: // 0x28B12F0 - 229
        {
            // __int64 __fastcall sub_27D7EF0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xE8) + 0x238i64) + 0x5A0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD0F0: // 0x28B12F0 - 230
        {
            // __int64 __fastcall sub_27DD0F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~(0xB48A0FA1 * FuckEnc::CacheRead<_DWORD>(a3 + 0x390));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D28F0: // 0x28B12F0 - 231
        {
            // __int64 __fastcall sub_27D28F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x670);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x440);
            return result;

            break;
        }
        case 0x27DD4F0: // 0x28B12F0 - 232
        {
            // __int64 __fastcall sub_27DD4F0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x368) + 8i64 * ((a2 ^ 0x60) & 0xF1)) + 0x498i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4110: // 0x28B12F0 - 233
        {
            // __int64 __fastcall sub_27D4110(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x530) + 8i64 * (unsigned __int8)__ROL4__(a2, 0x19)) + 0x310i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3930: // 0x28B12F0 - 234
        {
            // __int64 __fastcall sub_27D3930(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4C8) + 0x4C8i64) + 0x390i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9890: // 0x28B12F0 - 235
        {
            // __int64 __fastcall sub_27D9890(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6E0) + 0x508i64) + 0x1C8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DDDC0: // 0x28B12F0 - 236
        {
            // __int64 __fastcall sub_27DDDC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x278) + 0x378i64) + 0x178i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB4C0: // 0x28B12F0 - 237
        {
            // __int64 __fastcall sub_27DB4C0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x780) + 0x410i64) + 4i64 * (a2 ^ 0x39u));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D79D0: // 0x28B12F0 - 238
        {
            // __int64 __fastcall sub_27D79D0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x308);
            *a1 ^= a2 + FuckEnc::CacheRead<_DWORD>(result + 0x178);
            return result;

            break;
        }
        case 0x27D2EF0: // 0x28B12F0 - 239
        {
            // __int64 __fastcall sub_27D2EF0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x650);
            *a1 ^= a2 + FuckEnc::CacheRead<_DWORD>(result + 0x498);
            return result;

            break;
        }
        case 0x27D2DA0: // 0x28B12F0 - 240
        {
            // __int64 __fastcall sub_27D2DA0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = *a1 ^ FuckEnc::CacheRead<_DWORD>(a3 + 0x208) ^ 0xC72C07EC;
            *a1 = result;
            return result;

            break;
        }
        case 0x27D7B70: // 0x28B12F0 - 241
        {
            // __int64 __fastcall sub_27D7B70(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x308) + 0x410i64) + 4i64 * (a2 & 0xA));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D8D00: // 0x28B12F0 - 242
        {
            // __int64 __fastcall sub_27D8D00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x10) + 8i64 * (unsigned __int8)(0x70 * FuckEnc::CacheRead<_BYTE>(a3 + 0x768))) + 0x768i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA300: // 0x28B12F0 - 243
        {
            // __int64 __fastcall sub_27DA300(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_DWORD>(a3 + 0x390) & 0xFFFFFFF3;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4B40: // 0x28B12F0 - 244
        {
            // __int64 __fastcall sub_27D4B40(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3E8) + 8i64 * (a2 & 0x8B)) + 0x310i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D86E0: // 0x28B12F0 - 245
        {
            // __int64 __fastcall sub_27D86E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0xE0);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x6E8);
            return result;

            break;
        }
        case 0x27DD030: // 0x28B12F0 - 246
        {
            // __int64 __fastcall sub_27DD030(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x280);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x5D8) ^ 0x30BDB050;
            return result;

            break;
        }
        case 0x27D4040: // 0x28B12F0 - 247
        {
            // __int64 __fastcall sub_27D4040(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = *a1 ^ (FuckEnc::CacheRead<_DWORD>(a3 + 0x208) - 0x74969C68) ^ 0xD95983F3;
            *a1 = result;
            return result;

            break;
        }
        case 0x27D84C0: // 0x28B12F0 - 248
        {
            // __int64 __fastcall sub_27D84C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x3E0);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x498);
            return result;

            break;
        }
        case 0x27D3430: // 0x28B12F0 - 249
        {
            // __int64 __fastcall sub_27D3430(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x678) + 8i64 * (unsigned __int8)(0xD9 * a2)) + 0x720i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D2B70: // 0x28B12F0 - 250
        {
            // __int64 __fastcall sub_27D2B70(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x370) + 0x378i64) + 0x80i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCB50: // 0x28B12F0 - 251
        {
            // __int64 __fastcall sub_27DCB50(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x758);
            *a1 ^= 0xC3113109 * FuckEnc::CacheRead<_DWORD>(result + 0x1B0);
            return result;

            break;
        }
        case 0x27D8A90: // 0x28B12F0 - 252
        {
            // __int64 __fastcall sub_27D8A90(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x750) + 0x610i64) + 0x550i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD660: // 0x28B12F0 - 253
        {
            // __int64 __fastcall sub_27DD660(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 ^ *a1 ^ (unsigned int)(a2 + FuckEnc::CacheRead<_DWORD>(a3 + 0x350));
            *a1 = result;
            return result;

            break;
        }
        case 0x27D4790: // 0x28B12F0 - 254
        {
            // __int64 __fastcall sub_27D4790(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x298) + 0x4C0i64) + 0x80i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB960: // 0x28B12F0 - 255
        {
            // __int64 __fastcall sub_27DB960(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x750) + 0x610i64) + 0x200i64);
            *a1 ^= result;
            return result;

            break;
        }
        // Main Function 0x28B12F0 End

        // Main Function 0x28B2B40 Start
        case 0x27D82B0: // 0x28B2B40 - 0
        {
            // __int64 __fastcall sub_27D82B0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a2 + 0x2E8);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DD430: // 0x28B2B40 - 1
        {
            // __int64 __fastcall sub_27DD430(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x338) + 0xF0i64) + 0x30i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCE60: // 0x28B2B40 - 2
        {
            // __int64 __fastcall sub_27DCE60(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x288) + 0x28i64) + 0x368i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBE30: // 0x28B2B40 - 3
        {
            // __int64 __fastcall sub_27DBE30(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0xF0) + 0xF0i64) + 0x268i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB3F0: // 0x28B2B40 - 4
        {
            // __int64 __fastcall sub_27DB3F0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = 0xA74F633C * FuckEnc::CacheRead<_DWORD>(a2 + 0x138);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC030: // 0x28B2B40 - 5
        {
            // __int64 __fastcall sub_27DC030(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x258);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x1E0) ^ 0x22BF4651;
            return result;

            break;
        }
        case 0x27DC2E0: // 0x28B2B40 - 6
        {
            // __int64 __fastcall sub_27DC2E0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0xF0) + 0x380i64) + 0x2E8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB7C0: // 0x28B2B40 - 7
        {
            // __int64 __fastcall sub_27DB7C0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x1B0) + 0x340i64) + 0x240i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBC50: // 0x28B2B40 - 8
        {
            // __int64 __fastcall sub_27DBC50(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x370) + 0x250i64) + 0x2E8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC120: // 0x28B2B40 - 9
        {
            // __int64 __fastcall sub_27DC120(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x28);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0xF8) + 0x164450AC;
            return result;

            break;
        }
        case 0x27DAFA0: // 0x28B2B40 - 10
        {
            // __int64 __fastcall sub_27DAFA0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x168) + 0x2E0i64) + 0x180i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB300: // 0x28B2B40 - 11
        {
            // __int64 __fastcall sub_27DB300(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0xF0) + 0x340i64) + 0x98i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DEC40: // 0x28B2B40 - 12
        {
            // __int64 __fastcall sub_27DEC40(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_DWORD>(a2 + 0x98) >> 0x1C;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCF60: // 0x28B2B40 - 13
        {
            // __int64 __fastcall sub_27DCF60(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = 0x1F6B6311 * (FuckEnc::CacheRead<_DWORD>(a2 + 0x140) ^ 0x919CB27C);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB200: // 0x28B2B40 - 14
        {
            // __int64 __fastcall sub_27DB200(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x80) + 0x1D8i64) + 0x140i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCD60: // 0x28B2B40 - 15
        {
            // __int64 __fastcall sub_27DCD60(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x110) + 0x258i64) + 0x350i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB070: // 0x28B2B40 - 16
        {
            // __int64 __fastcall sub_27DB070(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x258) + 0x88i64) + 0x1E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC7A0: // 0x28B2B40 - 17
        {
            // __int64 __fastcall sub_27DC7A0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = (unsigned int)(0x49F1A4E3 * FuckEnc::CacheRead<_DWORD>(a2 + 0x138));
            *a1 ^= 0x928E37F5 - result;
            return result;

            break;
        }
        case 0x27DA930: // 0x28B2B40 - 18
        {
            // __int64 __fastcall sub_27DA930(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x348) + 0x298i64) + 0x350i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9AD0: // 0x28B2B40 - 19
        {
            // __int64 __fastcall sub_27D9AD0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x90) + 0x90i64) + 0x198i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC6B0: // 0x28B2B40 - 20
        {
            // __int64 __fastcall sub_27DC6B0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_DWORD>(a2 + 0x2E8) >> 0x1A;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DABF0: // 0x28B2B40 - 21
        {
            // __int64 __fastcall sub_27DABF0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x1B0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x138) - 0x3D8215D7;
            return result;

            break;
        }
        case 0x27DB980: // 0x28B2B40 - 22
        {
            // __int64 __fastcall sub_27DB980(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x338) + 0x1B0i64) + 0x228i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4920: // 0x28B2B40 - 23
        {
            // __int64 __fastcall sub_27D4920(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x2C0) + 0x110i64) + 0x140i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D9300: // 0x28B2B40 - 24
        {
            // __int64 __fastcall sub_27D9300(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x80);
            *a1 ^= 0x54155F6D * FuckEnc::CacheRead<_DWORD>(result + 0x268);
            return result;

            break;
        }
        case 0x27DDC40: // 0x28B2B40 - 25
        {
            // __int64 __fastcall sub_27DDC40(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x90) + 0x168i64) + 0x180i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DAB00: // 0x28B2B40 - 26
        {
            // __int64 __fastcall sub_27DAB00(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x298) + 0x260i64) + 0x200i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D4130: // 0x28B2B40 - 27
        {
            // __int64 __fastcall sub_27D4130(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x380) + 0x80i64) + 0x368i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DAA10: // 0x28B2B40 - 28
        {
            // __int64 __fastcall sub_27DAA10(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x288) + 0x170i64) + 0xB0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D5170: // 0x28B2B40 - 29
        {
            // __int64 __fastcall sub_27D5170(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x338) + 0x370i64) + 0x138i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC3D0: // 0x28B2B40 - 30
        {
            // __int64 __fastcall sub_27DC3D0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x1B0) + 0x340i64) + 0x280i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC9A0: // 0x28B2B40 - 31
        {
            // __int64 __fastcall sub_27DC9A0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0xF0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0xB0) << 0x1A;
            return result;

            break;
        }
        case 0x27D7AD0: // 0x28B2B40 - 32
        {
            // __int64 __fastcall sub_27D7AD0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x28);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x220) ^ 0x3DBBD539;
            return result;

            break;
        }
        case 0x27D2910: // 0x28B2B40 - 33
        {
            // __int64 __fastcall sub_27D2910(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x348) + 0x1B0i64) + 0x240i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB4E0: // 0x28B2B40 - 34
        {
            // __int64 __fastcall sub_27DB4E0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x2C0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x310) - 0x2D3FDCD1;
            return result;

            break;
        }
        case 0x27DB5D0: // 0x28B2B40 - 35
        {
            // __int64 __fastcall sub_27DB5D0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x178) + 0x110i64) + 0x268i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBB90: // 0x28B2B40 - 36
        {
            // __int64 __fastcall sub_27DBB90(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x80) + 0x260i64) + 0x198i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DA310: // 0x28B2B40 - 37
        {
            // __int64 __fastcall sub_27DA310(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x298);
            *a1 ^= 0x97329620 * FuckEnc::CacheRead<_DWORD>(result + 0x2C8);
            return result;

            break;
        }
        case 0x27D7200: // 0x28B2B40 - 38
        {
            // __int64 __fastcall sub_27D7200(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x170) + 0x340i64) + 0xF8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3160: // 0x28B2B40 - 39
        {
            // __int64 __fastcall sub_27D3160(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = (unsigned int)(FuckEnc::CacheRead<_DWORD>(a2 + 0x180) - 0x5C1C6AB2) >> 0x10;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBD30: // 0x28B2B40 - 40
        {
            // __int64 __fastcall sub_27DBD30(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x1D8) + 0x110i64) + 0x200i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D3950: // 0x28B2B40 - 41
        {
            // __int64 __fastcall sub_27D3950(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x250) + 0x348i64) + 0xB0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCC60: // 0x28B2B40 - 42
        {
            // __int64 __fastcall sub_27DCC60(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x1A0);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x2E8);
            return result;

            break;
        }
        case 0x27DA830: // 0x28B2B40 - 43
        {
            // __int64 __fastcall sub_27DA830(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x90) + 0x2C0i64) + 0x2E8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB8A0: // 0x28B2B40 - 44
        {
            // __int64 __fastcall sub_27DB8A0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x1B0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x118) + 0x427A64D6;
            return result;

            break;
        }
        case 0x27DC8A0: // 0x28B2B40 - 45
        {
            // __int64 __fastcall sub_27DC8A0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0xC8) + 0x260i64) + 0x228i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC1F0: // 0x28B2B40 - 46
        {
            // __int64 __fastcall sub_27DC1F0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = (unsigned int)(0x62745DF6 * FuckEnc::CacheRead<_DWORD>(a2 + 0x268));
            *a1 ^= 0xA0CEF29E - result;
            return result;

            break;
        }
        case 0x27D6240: // 0x28B2B40 - 47
        {
            // __int64 __fastcall sub_27D6240(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x380) + 8i64) + 0x138i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D6A50: // 0x28B2B40 - 48
        {
            // __int64 __fastcall sub_27D6A50(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x2E0) + 0x348i64) + 0x308i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCA90: // 0x28B2B40 - 49
        {
            // __int64 __fastcall sub_27DCA90(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x298);
            *a1 ^= 0x3D1C896A * FuckEnc::CacheRead<_DWORD>(result + 0x58);
            return result;

            break;
        }
        case 0x27DBA80: // 0x28B2B40 - 50
        {
            // __int64 __fastcall sub_27DBA80(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x2E0);
            *a1 ^= 0xD72C2E68 * FuckEnc::CacheRead<_DWORD>(result + 0x1E0);
            return result;

            break;
        }
        case 0x27DC5B0: // 0x28B2B40 - 51
        {
            // __int64 __fastcall sub_27DC5B0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x260);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x30) ^ 0x7EE7D657;
            return result;

            break;
        }
        case 0x27DE470: // 0x28B2B40 - 52
        {
            // __int64 __fastcall sub_27DE470(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = *a1 ^ (FuckEnc::CacheRead<_DWORD>(a2 + 0x98) - 0x4A2EA38F) ^ 0x1601736Au;
            *a1 = result;
            return result;

            break;
        }
        case 0x27D59D0: // 0x28B2B40 - 53
        {
            // __int64 __fastcall sub_27D59D0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x258);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x2E8) ^ 0x58032C80;
            return result;

            break;
        }
        case 0x27D8AB0: // 0x28B2B40 - 54
        {
            // __int64 __fastcall sub_27D8AB0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0xF0);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x138);
            return result;

            break;
        }
        case 0x27DAEC0: // 0x28B2B40 - 55
        {
            // __int64 __fastcall sub_27DAEC0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0xB8) + 0x260i64) + 0x310i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB6C0: // 0x28B2B40 - 56
        {
            // __int64 __fastcall sub_27DB6C0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = (unsigned int)(0x201127B6 - FuckEnc::CacheRead<_DWORD>(a2 + 0x98));
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DCB70: // 0x28B2B40 - 57
        {
            // __int64 __fastcall sub_27DCB70(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0xB8) + 0x340i64) + 0x228i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DB130: // 0x28B2B40 - 58
        {
            // __int64 __fastcall sub_27DB130(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x380) + 0x340i64) + 0x280i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DACF0: // 0x28B2B40 - 59
        {
            // __int64 __fastcall sub_27DACF0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x1A0) + 0x178i64) + 0x200i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27D79F0: // 0x28B2B40 - 60
        {
            // __int64 __fastcall sub_27D79F0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = (0x15F1992E * FuckEnc::CacheRead<_DWORD>(a2 + 0x350)) | 0x10u;
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DADE0: // 0x28B2B40 - 61
        {
            // __int64 __fastcall sub_27DADE0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0xF0) + 0xC8i64) + 0x138i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DC4C0: // 0x28B2B40 - 62
        {
            // __int64 __fastcall sub_27DC4C0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x1A0) + 8i64) + 0x220i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0x27DBF40: // 0x28B2B40 - 63
        {
            // __int64 __fastcall sub_27DBF40(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = (unsigned int)(0x747791C8 * FuckEnc::CacheRead<_DWORD>(a2 + 0x30));
            *a1 ^= 0x34BC99FA - result;
            return result;

            break;
        }
        // Main Function 0x28B2B40 End

        // Main Function 0xAAC03F0 Start
        case 0xAAB4C00: // 0xAAC03F0 - 0
        {
            // __int64 __fastcall sub_AAB4C00(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x340) + 0x328i64) + 4i64 * ((unsigned __int8)(0x25 * a2) & 0xE5));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4660: // 0xAAC03F0 - 1
        {
            // __int64 __fastcall sub_AAB4660(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6A8) + 0x410i64) + 4i64 * ((unsigned __int8)__ROL4__(a2, 2) & 0x96));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB45B0: // 0xAAC03F0 - 2
        {
            // __int64 __fastcall sub_AAB45B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x190);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x450) >> 5;
            return result;

            break;
        }
        case 0xAAB7EA0: // 0xAAC03F0 - 3
        {
            // __int64 __fastcall sub_AAB7EA0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x418) + 0x350i64) + 0x7A0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4AA0: // 0xAAC03F0 - 4
        {
            // __int64 __fastcall sub_AAB4AA0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x298) + 8i64 * ((unsigned __int8)(0xE0 * a2) & 0xB8)) + 0x658i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7D90: // 0xAAC03F0 - 5
        {
            // __int64 __fastcall sub_AAB7D90(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x568) + 0x410i64) + 4i64 * (unsigned __int8)__ROR4__(a2, 0x12));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7880: // 0xAAC03F0 - 6
        {
            // __int64 __fastcall sub_AAB7880(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0x6B8);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5030: // 0xAAC03F0 - 7
        {
            // __int64 __fastcall sub_AAB5030(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x180);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x650) & 0x3D));
            return result;

            break;
        }
        case 0xAAB6870: // 0xAAC03F0 - 8
        {
            // __int64 __fastcall sub_AAB6870(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4A8) + 8i64 * (a2 & 0xB9)) + 0x510i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6270: // 0xAAC03F0 - 9
        {
            // __int64 __fastcall sub_AAB6270(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x518);
            *a1 ^= FuckEnc::CacheRead<unsigned __int16>(result + 0x462);
            return result;

            break;
        }
        case 0xAAB7F50: // 0xAAC03F0 - 10
        {
            // __int64 __fastcall sub_AAB7F50(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5C8) + 0x1E8i64) + 0x280i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4A40: // 0xAAC03F0 - 11
        {
            // __int64 __fastcall sub_AAB4A40(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x340) + 0x98i64) + 4i64 * ((a2 ^ 8) & 0x4D));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5A40: // 0xAAC03F0 - 12
        {
            // __int64 __fastcall sub_AAB5A40(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x718) + 0x2C8i64) + 4i64 * (unsigned __int8)(0x14 * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB55B0: // 0xAAC03F0 - 13
        {
            // __int64 __fastcall sub_AAB55B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x208) + 0x7A8i64) + 0x3E8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5110: // 0xAAC03F0 - 14
        {
            // __int64 __fastcall sub_AAB5110(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6D0) + 0x1E0i64) + 4i64 * (unsigned __int8)__ROL4__(a2, 8));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6A40: // 0xAAC03F0 - 15
        {
            // __int64 __fastcall sub_AAB6A40(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (FuckEnc::CacheRead<_DWORD>(a3 + 0x6B8) >> 3) & 0x7FFF;
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB48E0: // 0xAAC03F0 - 16
        {
            // __int64 __fastcall sub_AAB48E0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5C0) + 0x98i64) + 4i64 * (a2 & 0x47));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6D70: // 0xAAC03F0 - 17
        {
            // __int64 __fastcall sub_AAB6D70(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x208) + 0x328i64) + 4i64 * (a2 ^ 0x8Bu));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7AA0: // 0xAAC03F0 - 18
        {
            // __int64 __fastcall sub_AAB7AA0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x7A8) + 0x558i64) + 4i64 * (a2 ^ 0xECu));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4890: // 0xAAC03F0 - 19
        {
            // __int64 __fastcall sub_AAB4890(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1F8) + 0x2D0i64) + 0x50i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4600: // 0xAAC03F0 - 20
        {
            // __int64 __fastcall sub_AAB4600(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x150) + 8i64 * (unsigned __int8)__ROL4__(a2, 0xA)) + 0x3C8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5860: // 0xAAC03F0 - 21
        {
            // __int64 __fastcall sub_AAB5860(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0xC0);
            *a1 ^= 0xD1FF4183 * FuckEnc::CacheRead<_DWORD>(result + 0x318);
            return result;

            break;
        }
        case 0xAAB3DE0: // 0xAAC03F0 - 22
        {
            // __int64 __fastcall sub_AAB3DE0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x360) + 8i64 * (unsigned __int8)(0x1C * a2)) + 0x308i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6980: // 0xAAC03F0 - 23
        {
            // __int64 __fastcall sub_AAB6980(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5E0) + 0x2C8i64) + 4i64 * (unsigned __int8)__ROL4__(a2, 1));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6680: // 0xAAC03F0 - 24
        {
            // __int64 __fastcall sub_AAB6680(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 8) + 8i64 * (a2 ^ 0x80u)) + 0x2E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5830: // 0xAAC03F0 - 25
        {
            // void __fastcall sub_AAB5830(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x6F0) * a2);

            break;
        }
        case 0xAAB6C00: // 0xAAC03F0 - 26
        {
            // __int64 __fastcall sub_AAB6C00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x150) + 8i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x678) & 0xDF)) + 0x1C0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7EE0: // 0xAAC03F0 - 27
        {
            // __int64 __fastcall sub_AAB7EE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2D8) + 0x708i64) + 0x798i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6CC0: // 0xAAC03F0 - 28
        {
            // __int64 __fastcall sub_AAB6CC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(FuckEnc::CacheRead<_DWORD>(a3 + 0x658) + 0x3852B0BF);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB53F0: // 0xAAC03F0 - 29
        {
            // __int64 __fastcall sub_AAB53F0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x208) + 0x2C8i64) + 4i64 * (a2 ^ 0xD3u));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB58F0: // 0xAAC03F0 - 30
        {
            // __int64 __fastcall sub_AAB58F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x68) + 0x588i64) + 0x78i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5DF0: // 0xAAC03F0 - 31
        {
            // __int64 __fastcall sub_AAB5DF0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x410);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(a3 + 0x798) ^ 0x86u));
            return result;

            break;
        }
        case 0xAAB6730: // 0xAAC03F0 - 32
        {
            // __int64 __fastcall sub_AAB6730(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (FuckEnc::CacheRead<_DWORD>(a3 + 0x280) ^ 0x61u) << 0x18;
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7700: // 0xAAC03F0 - 33
        {
            // __int64 __fastcall sub_AAB7700(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x340) + 0x1B0i64) + 0x650i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7240: // 0xAAC03F0 - 34
        {
            // __int64 __fastcall sub_AAB7240(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x420) + 0x38i64) + 4i64 * (unsigned __int8)(0x20 * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7F10: // 0xAAC03F0 - 35
        {
            // __int64 __fastcall sub_AAB7F10(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x700);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5D0) + 0x798i64), 1));
            return result;

            break;
        }
        case 0xAAB5B90: // 0xAAC03F0 - 36
        {
            // __int64 __fastcall sub_AAB5B90(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x3D0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x7A0) | 0x1B;
            return result;

            break;
        }
        case 0xAAB4E50: // 0xAAC03F0 - 37
        {
            // __int64 __fastcall sub_AAB4E50(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xB0) + 0x2C8i64) + 4i64 * ((unsigned __int8)__ROL4__(a2, 0x12) & 0xF2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5580: // 0xAAC03F0 - 38
        {
            // __int64 __fastcall sub_AAB5580(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 + (FuckEnc::CacheRead<_DWORD>(a3 + 0x138) | 0xEu);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5A80: // 0xAAC03F0 - 39
        {
            // __int64 __fastcall sub_AAB5A80(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x350) + 0x338i64) + 0x130i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6460: // 0xAAC03F0 - 40
        {
            // __int64 __fastcall sub_AAB6460(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1F8) + 0x420i64) + 0x650i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5FD0: // 0xAAC03F0 - 41
        {
            // __int64 __fastcall sub_AAB5FD0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x298) + 8i64 * ((0x17 * a2) & 0x77)) + 0x278i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4530: // 0xAAC03F0 - 42
        {
            // __int64 __fastcall sub_AAB4530(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x5C0);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x508);
            return result;

            break;
        }
        case 0xAAB4C30: // 0xAAC03F0 - 43
        {
            // __int64 __fastcall sub_AAB4C30(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x190) + 0x560i64) + 0x138i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5190: // 0xAAC03F0 - 44
        {
            // __int64 __fastcall sub_AAB5190(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(a2 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x5A8) + 1));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6E80: // 0xAAC03F0 - 45
        {
            // __int64 __fastcall sub_AAB6E80(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2A8) + 8i64 * (unsigned __int8)__ROR4__(a2, 0x1E)) + 0x798i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB42E0: // 0xAAC03F0 - 46
        {
            // void __fastcall sub_AAB42E0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= 0x10 * FuckEnc::CacheRead<_DWORD>(a3 + 0x7A0) * a2;

            break;
        }
        case 0xAAB7A60: // 0xAAC03F0 - 47
        {
            // __int64 __fastcall sub_AAB7A60(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(-FuckEnc::CacheRead<_DWORD>(a3 + 0x3C0) - 0x20F3D8DA);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7630: // 0xAAC03F0 - 48
        {
            // __int64 __fastcall sub_AAB7630(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x478) + 0x3D0i64) + 0x6E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4260: // 0xAAC03F0 - 49
        {
            // __int64 __fastcall sub_AAB4260(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x3B8D0CD2 * FuckEnc::CacheRead<_DWORD>(a3 + 0x318) * a2);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5650: // 0xAAC03F0 - 50
        {
            // __int64 __fastcall sub_AAB5650(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3F0) + 8i64 * (a2 & 0x1E)) + 0x158i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6760: // 0xAAC03F0 - 51
        {
            // __int64 __fastcall sub_AAB6760(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x350) + 0x1F8i64) + 0x308i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB8010: // 0xAAC03F0 - 52
        {
            // __int64 __fastcall sub_AAB8010(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x160) + 8i64 * (unsigned __int8)(0x7F * a2)) + 0x7A0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5240: // 0xAAC03F0 - 53
        {
            // __int64 __fastcall sub_AAB5240(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6D0) + 0x558i64) + 4i64 * ((a2 ^ 0xDF) & 0x60));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4ED0: // 0xAAC03F0 - 54
        {
            // __int64 __fastcall sub_AAB4ED0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x140) + 0x48i64) + 0x428i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB52C0: // 0xAAC03F0 - 55
        {
            // __int64 __fastcall sub_AAB52C0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5F0) + 8i64 * (a2 ^ 0x70u)) + 0x650i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4A70: // 0xAAC03F0 - 56
        {
            // __int64 __fastcall sub_AAB4A70(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x420) + 0x6A0i64) + 4i64 * (unsigned __int8)(0x21 * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB50C0: // 0xAAC03F0 - 57
        {
            // __int64 __fastcall sub_AAB50C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x660) + 0x1B0i64) + 0x450i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5E70: // 0xAAC03F0 - 58
        {
            // __int64 __fastcall sub_AAB5E70(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(~FuckEnc::CacheRead<_DWORD>(a3 + 0x530) << 0x11);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB41D0: // 0xAAC03F0 - 59
        {
            // __int64 __fastcall sub_AAB41D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x68000000 * FuckEnc::CacheRead<_DWORD>(a3 + 0x658));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5DB0: // 0xAAC03F0 - 60
        {
            // __int64 __fastcall sub_AAB5DB0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2F8) + 0x188i64) + 0x530i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB46B0: // 0xAAC03F0 - 61
        {
            // __int64 __fastcall sub_AAB46B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3E0) + 8i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x88) & 0xB5)) + 0x798i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6E20: // 0xAAC03F0 - 62
        {
            // __int64 __fastcall sub_AAB6E20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (FuckEnc::CacheRead<_DWORD>(a3 + 0x428) - 0x2E00BE95) | 0x13u;
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB67D0: // 0xAAC03F0 - 63
        {
            // __int64 __fastcall sub_AAB67D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x188) + 0x418i64) + 0x658i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4770: // 0xAAC03F0 - 64
        {
            // __int64 __fastcall sub_AAB4770(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x660) + 0x6D0i64) + 0x3C0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7300: // 0xAAC03F0 - 65
        {
            // __int64 __fastcall sub_AAB7300(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(FuckEnc::CacheRead<_DWORD>(a3 + 0x3E8) >> 0x13);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7780: // 0xAAC03F0 - 66
        {
            // __int64 __fastcall sub_AAB7780(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x7A8) + 0x288i64) + 0x510i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6B00: // 0xAAC03F0 - 67
        {
            // __int64 __fastcall sub_AAB6B00(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x69C7EC6B * (a2 + FuckEnc::CacheRead<_DWORD>(a3 + 0x10)));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB61B0: // 0xAAC03F0 - 68
        {
            // __int64 __fastcall sub_AAB61B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x140) + 0x418i64) + 0x650i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5380: // 0xAAC03F0 - 69
        {
            // __int64 __fastcall sub_AAB5380(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x5D0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x508) << 0x13;
            return result;

            break;
        }
        case 0xAAB61F0: // 0xAAC03F0 - 70
        {
            // __int64 __fastcall sub_AAB61F0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3F0) + 8i64 * (unsigned __int8)__ROL4__(a2, 0x10)) + 0x10i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB51C0: // 0xAAC03F0 - 71
        {
            // __int64 __fastcall sub_AAB51C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x560) + 0x478i64) + 0x1D0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB40A0: // 0xAAC03F0 - 72
        {
            // __int64 __fastcall sub_AAB40A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (FuckEnc::CacheRead<_DWORD>(a3 + 0x308) + 0x1DFA2614) | 0xAu;
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB53C0: // 0xAAC03F0 - 73
        {
            // __int64 __fastcall sub_AAB53C0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x68) + 0x6A0i64) + 4i64 * (unsigned __int8)(0x76 * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7190: // 0xAAC03F0 - 74
        {
            // __int64 __fastcall sub_AAB7190(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x410);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x460) & 0x5A));
            return result;

            break;
        }
        case 0xAAB70E0: // 0xAAC03F0 - 75
        {
            // __int64 __fastcall sub_AAB70E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x150) + 8i64 * ((0x37 * FuckEnc::CacheRead<_BYTE>(a3 + 0x3E8)) & 0x46)) + 0x50i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB49C0: // 0xAAC03F0 - 76
        {
            // __int64 __fastcall sub_AAB49C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6B0) + 0x288i64) + 0x50i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB43F0: // 0xAAC03F0 - 77
        {
            // __int64 __fastcall sub_AAB43F0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x340) + 0x328i64) + 4i64 * (a2 & 0x1A));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB44B0: // 0xAAC03F0 - 78
        {
            // __int64 __fastcall sub_AAB44B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0xA0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x510) ^ 0xC3018944;
            return result;

            break;
        }
        case 0xAAB7E10: // 0xAAC03F0 - 79
        {
            // __int64 __fastcall sub_AAB7E10(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x40) + 0x38i64) + 4i64 * (~a2 & 0x40));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6360: // 0xAAC03F0 - 80
        {
            // __int64 __fastcall sub_AAB6360(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xC0) + 0x6A8i64) + 0x10i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7840: // 0xAAC03F0 - 81
        {
            // __int64 __fastcall sub_AAB7840(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x2E00BEA4 - FuckEnc::CacheRead<_DWORD>(a3 + 0x50));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5A10: // 0xAAC03F0 - 82
        {
            // __int64 __fastcall sub_AAB5A10(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0x278);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB73B0: // 0xAAC03F0 - 83
        {
            // __int64 __fastcall sub_AAB73B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x330) + 0x480i64) + 0x50i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB3D80: // 0xAAC03F0 - 84
        {
            // __int64 __fastcall sub_AAB3D80(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3E0) + 8i64 * (unsigned __int8)(0x33 * a2)) + 0x3C0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB66C0: // 0xAAC03F0 - 85
        {
            // __int64 __fastcall sub_AAB66C0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x3D0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x50) * a2;
            return result;

            break;
        }
        case 0xAAB4470: // 0xAAC03F0 - 86
        {
            // __int64 __fastcall sub_AAB4470(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x288) + 0x478i64) + 0x6E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6810: // 0xAAC03F0 - 87
        {
            // __int64 __fastcall sub_AAB6810(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x190);
            *a1 ^= a2 + FuckEnc::CacheRead<_DWORD>(result + 0x3C8);
            return result;

            break;
        }
        case 0xAAB4BC0: // 0xAAC03F0 - 88
        {
            // __int64 __fastcall sub_AAB4BC0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3E0) + 8i64 * (a2 & 0x86)) + 0x678i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB68D0: // 0xAAC03F0 - 89
        {
            // __int64 __fastcall sub_AAB68D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0x318);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7DE0: // 0xAAC03F0 - 90
        {
            // __int64 __fastcall sub_AAB7DE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xA8) + 0x3D0i64) + 0x5A8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7B70: // 0xAAC03F0 - 91
        {
            // __int64 __fastcall sub_AAB7B70(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x588) + 0x588i64) + 0x308i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6040: // 0xAAC03F0 - 92
        {
            // __int64 __fastcall sub_AAB6040(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2F8) + 0x718i64) + 0x318i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6ED0: // 0xAAC03F0 - 93
        {
            // __int64 __fastcall sub_AAB6ED0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x150) + 8i64 * ((unsigned __int8)__ROL4__(a2, 0x16) & 0xF8)) + 0x530i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7D10: // 0xAAC03F0 - 94
        {
            // __int64 __fastcall sub_AAB7D10(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x660) + 0xA8i64) + 0x3C8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB72A0: // 0xAAC03F0 - 95
        {
            // __int64 __fastcall sub_AAB72A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x6A8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x280) >> 0x1D;
            return result;

            break;
        }
        case 0xAAB4110: // 0xAAC03F0 - 96
        {
            // __int64 __fastcall sub_AAB4110(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1F0) + 0x330i64) + 0x5A8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5150: // 0xAAC03F0 - 97
        {
            // __int64 __fastcall sub_AAB5150(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x140) + 0x660i64) + 0x88i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4FA0: // 0xAAC03F0 - 98
        {
            // __int64 __fastcall sub_AAB4FA0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2A8) + 8i64 * (unsigned __int8)__ROL4__(FuckEnc::CacheRead<_DWORD>(a3 + 0x130), 0x14)) + 0x280i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4570: // 0xAAC03F0 - 99
        {
            // __int64 __fastcall sub_AAB4570(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x188) + 0x3D0i64) + 0x3C0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB60E0: // 0xAAC03F0 - 100
        {
            // __int64 __fastcall sub_AAB60E0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x680) + 8i64 * (a2 ^ 0xEEu)) + 0x1D0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5280: // 0xAAC03F0 - 101
        {
            // __int64 __fastcall sub_AAB5280(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x1F8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x2A0) | 0x19;
            return result;

            break;
        }
        case 0xAAB5EF0: // 0xAAC03F0 - 102
        {
            // __int64 __fastcall sub_AAB5EF0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x587A2F00 - FuckEnc::CacheRead<_DWORD>(a3 + 0x1C0));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4840: // 0xAAC03F0 - 103
        {
            // __int64 __fastcall sub_AAB4840(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x2D8);
            *a1 ^= 0x58DCDA0A * FuckEnc::CacheRead<_DWORD>(result + 0x78);
            return result;

            break;
        }
        case 0xAAB4AE0: // 0xAAC03F0 - 104
        {
            // __int64 __fastcall sub_AAB4AE0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5F0) + 8i64 * ((3 * a2) & 0x3A)) + 0x6E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5C70: // 0xAAC03F0 - 105
        {
            // __int64 __fastcall sub_AAB5C70(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x6D4B1E0D * FuckEnc::CacheRead<_DWORD>(a3 + 0x6F0) * a2);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4D30: // 0xAAC03F0 - 106
        {
            // __int64 __fastcall sub_AAB4D30(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x48);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x1C0) * a2;
            return result;

            break;
        }
        case 0xAAB5890: // 0xAAC03F0 - 108
        {
            // __int64 __fastcall sub_AAB5890(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x338) + 0x338i64) + 0x6B8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7FD0: // 0xAAC03F0 - 109
        {
            // __int64 __fastcall sub_AAB7FD0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xA0) + 0x5C0i64) + 0x280i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4F70: // 0xAAC03F0 - 110
        {
            // __int64 __fastcall sub_AAB4F70(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1F8) + 0x7A8i64) + 0x138i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5330: // 0xAAC03F0 - 111
        {
            // __int64 __fastcall sub_AAB5330(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x1E0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(a3 + 0x7A0) ^ 0x96u));
            return result;

            break;
        }
        case 0xAAB6510: // 0xAAC03F0 - 112
        {
            // __int64 __fastcall sub_AAB6510(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x670) + 8i64 * (unsigned __int8)(6 * a2)) + 0x2E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4960: // 0xAAC03F0 - 113
        {
            // __int64 __fastcall sub_AAB4960(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x218) + 8i64 * (a2 & 0x6A)) + 0x6B8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5AE0: // 0xAAC03F0 - 114
        {
            // __int64 __fastcall sub_AAB5AE0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x420) + 0x98i64) + 4i64 * (unsigned __int8)(0xF0 * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5790: // 0xAAC03F0 - 115
        {
            // __int64 __fastcall sub_AAB5790(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x498) + 0x2C8i64) + 4i64 * ((unsigned __int8)__ROL4__(a2, 0xA) & 0xFD));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6420: // 0xAAC03F0 - 116
        {
            // __int64 __fastcall sub_AAB6420(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x1F8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x508) >> 0x14;
            return result;

            break;
        }
        case 0xAAB4CF0: // 0xAAC03F0 - 117
        {
            // __int64 __fastcall sub_AAB4CF0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x218) + 8i64 * (__ROL4__(a2, 0xE) & 0x76)) + 0x508i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6DD0: // 0xAAC03F0 - 118
        {
            // __int64 __fastcall sub_AAB6DD0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3F0) + 8i64 * ((unsigned __int8)~a2 & 0x90)) + 0x3C8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7580: // 0xAAC03F0 - 119
        {
            // __int64 __fastcall sub_AAB7580(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xC0) + 0x48i64) + 0x460i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB3FD0: // 0xAAC03F0 - 120
        {
            // __int64 __fastcall sub_AAB3FD0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x718) + 0x410i64) + 4i64 * (unsigned __int8)(0xC * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB65D0: // 0xAAC03F0 - 121
        {
            // __int64 __fastcall sub_AAB65D0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x7A8) + 0x410i64) + 4i64 * (a2 ^ 0x2Au));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6C60: // 0xAAC03F0 - 122
        {
            // __int64 __fastcall sub_AAB6C60(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(-FuckEnc::CacheRead<_DWORD>(a3 + 0x138) - 0x2F003394);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4B20: // 0xAAC03F0 - 123
        {
            // __int64 __fastcall sub_AAB4B20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6A8) + 0x718i64) + 0x530i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5490: // 0xAAC03F0 - 124
        {
            // __int64 __fastcall sub_AAB5490(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x338) + 0x180i64) + 4i64 * (__ROL4__(a2, 0x1B) & 0x34));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6D10: // 0xAAC03F0 - 125
        {
            // __int64 __fastcall sub_AAB6D10(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x560) + 0x560i64) + 0x450i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB74D0: // 0xAAC03F0 - 126
        {
            // __int64 __fastcall sub_AAB74D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xB0) + 0x5E0i64) + 0x318i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7680: // 0xAAC03F0 - 127
        {
            // __int64 __fastcall sub_AAB7680(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x470);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2D8) + 0x6B8i64) & 0x19));
            return result;

            break;
        }
        case 0xAAB7420: // 0xAAC03F0 - 128
        {
            // __int64 __fastcall sub_AAB7420(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)((FuckEnc::CacheRead<_DWORD>(a3 + 0x3C0) << 0x15) + 0x71B8F274);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4D50: // 0xAAC03F0 - 129
        {
            // __int64 __fastcall sub_AAB4D50(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_DWORD>(a3 + 0x198) & 0xFFFFFFE0;
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB78B0: // 0xAAC03F0 - 130
        {
            // __int64 __fastcall sub_AAB78B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x710) + 0x708i64) + 0x598i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6550: // 0xAAC03F0 - 131
        {
            // __int64 __fastcall sub_AAB6550(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = 0x14128FF8 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x6E0) ^ 0x5ACEDD56u);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5B50: // 0xAAC03F0 - 132
        {
            // __int64 __fastcall sub_AAB5B50(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x738) + 8i64 * (unsigned __int8)(0x2E * a2)) + 0x570i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB69E0: // 0xAAC03F0 - 133
        {
            // __int64 __fastcall sub_AAB69E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x478) + 0x6D0i64) + 0x2A0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB44F0: // 0xAAC03F0 - 134
        {
            // __int64 __fastcall sub_AAB44F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x680) + 8i64 * (unsigned __int8)(0x21 * FuckEnc::CacheRead<_BYTE>(a3 + 0x78))) + 0x6B8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5AB0: // 0xAAC03F0 - 135
        {
            // __int64 __fastcall sub_AAB5AB0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x560);
            *a1 ^= a2 + FuckEnc::CacheRead<_DWORD>(result + 0x510);
            return result;

            break;
        }
        case 0xAAB6590: // 0xAAC03F0 - 136
        {
            // __int64 __fastcall sub_AAB6590(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x338) + 0x708i64) + 0x508i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5460: // 0xAAC03F0 - 137
        {
            // __int64 __fastcall sub_AAB5460(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5D0) + 0xA8i64) + 0x50i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7740: // 0xAAC03F0 - 138
        {
            // __int64 __fastcall sub_AAB7740(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(FuckEnc::CacheRead<_DWORD>(a3 + 0x508) + 0x4B2F8A0C);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB79E0: // 0xAAC03F0 - 139
        {
            // __int64 __fastcall sub_AAB79E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x2F8);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x198);
            return result;

            break;
        }
        case 0xAAB4A00: // 0xAAC03F0 - 140
        {
            // __int64 __fastcall sub_AAB4A00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x4B1578F * ~FuckEnc::CacheRead<_DWORD>(a3 + 0x278));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB71E0: // 0xAAC03F0 - 141
        {
            // __int64 __fastcall sub_AAB71E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x558);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5C0) + 0x450i64), 0x17));
            return result;

            break;
        }
        case 0xAAB7D50: // 0xAAC03F0 - 142
        {
            // __int64 __fastcall sub_AAB7D50(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x480);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x3E8) * a2;
            return result;

            break;
        }
        case 0xAAB4190: // 0xAAC03F0 - 143
        {
            // __int64 __fastcall sub_AAB4190(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x718);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x278) ^ 0x2B11CBD0;
            return result;

            break;
        }
        case 0xAAB5200: // 0xAAC03F0 - 144
        {
            // __int64 __fastcall sub_AAB5200(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x518) + 0x6A8i64) + 0x570i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7920: // 0xAAC03F0 - 145
        {
            // __int64 __fastcall sub_AAB7920(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3E0) + 8i64 * ((a2 ^ 0xFE) & 3)) + 0x198i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5B20: // 0xAAC03F0 - 146
        {
            // __int64 __fastcall sub_AAB5B20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x7F4C110E - FuckEnc::CacheRead<_DWORD>(a3 + 0x10));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB76D0: // 0xAAC03F0 - 147
        {
            // __int64 __fastcall sub_AAB76D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1F8) + 0x48i64) + 0x2A0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5CB0: // 0xAAC03F0 - 148
        {
            // __int64 __fastcall sub_AAB5CB0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1F8) + 0xA8i64) + 0x798i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6000: // 0xAAC03F0 - 150
        {
            // __int64 __fastcall sub_AAB6000(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x150) + 8i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x280) & 0x61)) + 0x428i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB67A0: // 0xAAC03F0 - 151
        {
            // __int64 __fastcall sub_AAB67A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x2D8);
            *a1 ^= 0xF94DD0FF * FuckEnc::CacheRead<_DWORD>(result + 0x3C8);
            return result;

            break;
        }
        case 0xAAB5950: // 0xAAC03F0 - 152
        {
            // __int64 __fastcall sub_AAB5950(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x288) + 0x420i64) + 0x7A0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5070: // 0xAAC03F0 - 153
        {
            // __int64 __fastcall sub_AAB5070(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x5E0);
            *a1 ^= 0x10 * FuckEnc::CacheRead<_DWORD>(result + 0x10);
            return result;

            break;
        }
        case 0xAAB4D80: // 0xAAC03F0 - 154
        {
            // __int64 __fastcall sub_AAB4D80(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x7A8) + 0x708i64) + 0x510i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7B30: // 0xAAC03F0 - 155
        {
            // __int64 __fastcall sub_AAB7B30(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x488) + 0x350i64) + 0x3C8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7350: // 0xAAC03F0 - 156
        {
            // __int64 __fastcall sub_AAB7350(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x40) + 0x330i64) + 0x198i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6920: // 0xAAC03F0 - 157
        {
            // __int64 __fastcall sub_AAB6920(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x140);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x450) - 0x1C744E8;
            return result;

            break;
        }
        case 0xAAB3ED0: // 0xAAC03F0 - 158
        {
            // __int64 __fastcall sub_AAB3ED0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x680) + 8i64 * (unsigned __int8)(0xCF * a2)) + 0x510i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7F90: // 0xAAC03F0 - 159
        {
            // __int64 __fastcall sub_AAB7F90(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x7A8) + 0x1B0i64) + 0x50i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7BE0: // 0xAAC03F0 - 160
        {
            // __int64 __fastcall sub_AAB7BE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xB0) + 0x6D0i64) + 0x50i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4040: // 0xAAC03F0 - 161
        {
            // __int64 __fastcall sub_AAB4040(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x68) + 0xC0i64) + 0x138i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB40E0: // 0xAAC03F0 - 162
        {
            // __int64 __fastcall sub_AAB40E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x558);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(a3 + 0x198) ^ 0xA3u));
            return result;

            break;
        }
        case 0xAAB41F0: // 0xAAC03F0 - 163
        {
            // __int64 __fastcall sub_AAB41F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x40) + 0x338i64) + 0x6F0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB54D0: // 0xAAC03F0 - 164
        {
            // __int64 __fastcall sub_AAB54D0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6D0) + 0x700i64) + 4i64 * ((a2 ^ 0xBD) & 0xD2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6320: // 0xAAC03F0 - 165
        {
            // __int64 __fastcall sub_AAB6320(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x568);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x598) - 0x7BE0B03F;
            return result;

            break;
        }
        case 0xAAB78F0: // 0xAAC03F0 - 166
        {
            // __int64 __fastcall sub_AAB78F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0x2A0);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5520: // 0xAAC03F0 - 167
        {
            // __int64 __fastcall sub_AAB5520(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x518) + 0x420i64) + 0x50i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4000: // 0xAAC03F0 - 168
        {
            // __int64 __fastcall sub_AAB4000(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x518);
            *a1 ^= a2 + FuckEnc::CacheRead<_DWORD>(result + 0x198);
            return result;

            break;
        }
        case 0xAAB5990: // 0xAAC03F0 - 169
        {
            // __int64 __fastcall sub_AAB5990(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x7025C90E * FuckEnc::CacheRead<_DWORD>(a3 + 0x3E8) + 0x2CC30131);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5690: // 0xAAC03F0 - 170
        {
            // __int64 __fastcall sub_AAB5690(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x338);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x530) + 0x37636F47;
            return result;

            break;
        }
        case 0xAAB77C0: // 0xAAC03F0 - 171
        {
            // __int64 __fastcall sub_AAB77C0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x188) + 0x5B8i64) + 4i64 * (a2 & 0x22));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7AE0: // 0xAAC03F0 - 172
        {
            // __int64 __fastcall sub_AAB7AE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = 0xB92E08F4 * FuckEnc::CacheRead<_DWORD>(a3 + 0x308);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB57F0: // 0xAAC03F0 - 173
        {
            // __int64 __fastcall sub_AAB57F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x488);
            *a1 ^= 0xC3018944 * FuckEnc::CacheRead<_DWORD>(result + 0x3C8);
            return result;

            break;
        }
        case 0xAAB5D30: // 0xAAC03F0 - 174
        {
            // __int64 __fastcall sub_AAB5D30(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x330) + 0x1F8i64) + 0x570i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB62E0: // 0xAAC03F0 - 175
        {
            // __int64 __fastcall sub_AAB62E0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(a2 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x280) - 0x3CFE76BC));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB63E0: // 0xAAC03F0 - 176
        {
            // __int64 __fastcall sub_AAB63E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x2D8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x318) ^ 0x569B2D6E;
            return result;

            break;
        }
        case 0xAAB4920: // 0xAAC03F0 - 177
        {
            // __int64 __fastcall sub_AAB4920(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x150) + 8i64 * (unsigned __int8)__ROL4__(a2, 5)) + 0x658i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB62B0: // 0xAAC03F0 - 178
        {
            // __int64 __fastcall sub_AAB62B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x68);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x3C0) & 0xFFFFFFEE;
            return result;

            break;
        }
        case 0xAAB4C70: // 0xAAC03F0 - 179
        {
            // __int64 __fastcall sub_AAB4C70(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x518) + 0x5C0i64) + 0x308i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4E10: // 0xAAC03F0 - 180
        {
            // __int64 __fastcall sub_AAB4E10(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x40);
            *a1 ^= 0xADA40B5 * FuckEnc::CacheRead<_DWORD>(result + 0x5A8);
            return result;

            break;
        }
        case 0xAAB5550: // 0xAAC03F0 - 181
        {
            // __int64 __fastcall sub_AAB5550(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x3D0);
            *a1 ^= 0xC3018944 * FuckEnc::CacheRead<_DWORD>(result + 0x798);
            return result;

            break;
        }
        case 0xAAB6630: // 0xAAC03F0 - 182
        {
            // __int64 __fastcall sub_AAB6630(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_DWORD>(a3 + 0x460) ^ 0xECD0FF68 | 8;
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6FD0: // 0xAAC03F0 - 183
        {
            // __int64 __fastcall sub_AAB6FD0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x68) + 0x7A8i64) + 0x460i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB59D0: // 0xAAC03F0 - 184
        {
            // __int64 __fastcall sub_AAB59D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xA0) + 0x710i64) + 0x308i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4CB0: // 0xAAC03F0 - 185
        {
            // __int64 __fastcall sub_AAB4CB0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x288);
            *a1 ^= 0xC30131CC * FuckEnc::CacheRead<_DWORD>(result + 0x450);
            return result;

            break;
        }
        case 0xAAB7C90: // 0xAAC03F0 - 186
        {
            // __int64 __fastcall sub_AAB7C90(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x340) + 0x5C0i64) + 0x318i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5BF0: // 0xAAC03F0 - 187
        {
            // __int64 __fastcall sub_AAB5BF0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5F0) + 8i64 * (unsigned __int8)(0x37 * a2)) + 0x5A8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB79A0: // 0xAAC03F0 - 188
        {
            // __int64 __fastcall sub_AAB79A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xA8) + 0x660i64) + 0x3C0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5F90: // 0xAAC03F0 - 189
        {
            // __int64 __fastcall sub_AAB5F90(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (FuckEnc::CacheRead<_DWORD>(a3 + 0x570) ^ 0xC49CEEE2) + 0x6DDB9D04;
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4EA0: // 0xAAC03F0 - 190
        {
            // __int64 __fastcall sub_AAB4EA0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x538) + 8i64 * ((unsigned __int8)(0x1C * a2) & 0xB6)) + 0x508i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7800: // 0xAAC03F0 - 191
        {
            // __int64 __fastcall sub_AAB7800(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x518) + 0x2C8i64) + 4i64 * (unsigned __int8)(0x7A * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7520: // 0xAAC03F0 - 192
        {
            // __int64 __fastcall sub_AAB7520(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x7A8) + 0x558i64) + 4i64 * (unsigned __int8)__ROL4__(a2, 0xD));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4740: // 0xAAC03F0 - 194
        {
            // __int64 __fastcall sub_AAB4740(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x2DA244BA - FuckEnc::CacheRead<_DWORD>(a3 + 0x138));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB3F50: // 0xAAC03F0 - 195
        {
            // __int64 __fastcall sub_AAB3F50(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 ^ *a1 ^ (0x8C51A606 * FuckEnc::CacheRead<_DWORD>(a3 + 0x1D0));
            *a1 = result;
            return result;

            break;
        }
        case 0xAAB7480: // 0xAAC03F0 - 196
        {
            // __int64 __fastcall sub_AAB7480(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x40);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x3E8);
            return result;

            break;
        }
        case 0xAAB5F20: // 0xAAC03F0 - 197
        {
            // __int64 __fastcall sub_AAB5F20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5E0) + 0x350i64) + 0x3C8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7130: // 0xAAC03F0 - 198
        {
            // __int64 __fastcall sub_AAB7130(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5C0) + 0x140i64) + 0x598i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4B80: // 0xAAC03F0 - 199
        {
            // __int64 __fastcall sub_AAB4B80(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x5C0);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x450);
            return result;

            break;
        }
        case 0xAAB42A0: // 0xAAC03F0 - 200
        {
            // __int64 __fastcall sub_AAB42A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xA0) + 0x568i64) + 0x678i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7E60: // 0xAAC03F0 - 201
        {
            // __int64 __fastcall sub_AAB7E60(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x560) + 0x38i64) + 4i64 * (a2 & 0x2A));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6170: // 0xAAC03F0 - 202
        {
            // __int64 __fastcall sub_AAB6170(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1F8) + 0x6A0i64) + 4i64 * (a2 & 0xA3));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7C10: // 0xAAC03F0 - 203
        {
            // __int64 __fastcall sub_AAB7C10(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x188) + 0x40i64) + 0x6F0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB66F0: // 0xAAC03F0 - 204
        {
            // __int64 __fastcall sub_AAB66F0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x538) + 8i64 * (a2 & 0x5D)) + 0x678i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7080: // 0xAAC03F0 - 205
        {
            // __int64 __fastcall sub_AAB7080(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x1F0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x650) * a2;
            return result;

            break;
        }
        case 0xAAB52F0: // 0xAAC03F0 - 206
        {
            // __int64 __fastcall sub_AAB52F0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x498) + 0x558i64) + 4i64 * ((unsigned __int8)(0xA7 * a2) & 0x87));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6B50: // 0xAAC03F0 - 207
        {
            // void __fastcall sub_AAB6B50(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= FuckEnc::CacheRead<_DWORD>(a3 + 0x530) * a2 - 0x582E00BF;

            break;
        }
        case 0xAAB4220: // 0xAAC03F0 - 208
        {
            // __int64 __fastcall sub_AAB4220(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x190) + 0x2D8i64) + 0x138i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6080: // 0xAAC03F0 - 209
        {
            // void __fastcall sub_AAB6080(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x598) * a2);

            break;
        }
        case 0xAAB5750: // 0xAAC03F0 - 210
        {
            // __int64 __fastcall sub_AAB5750(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x190) + 0x710i64) + 0x508i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB3E10: // 0xAAC03F0 - 211
        {
            // __int64 __fastcall sub_AAB3E10(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x1F8);
            *a1 ^= a2 ^ FuckEnc::CacheRead<_DWORD>(result + 0x798);
            return result;

            break;
        }
        case 0xAAB5710: // 0xAAC03F0 - 212
        {
            // __int64 __fastcall sub_AAB5710(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x680) + 8i64 * (__ROL4__(a2, 9) & 0x2A)) + 0x678i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB64A0: // 0xAAC03F0 - 213
        {
            // __int64 __fastcall sub_AAB64A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x350) + 0x7A8i64) + 0x138i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6230: // 0xAAC03F0 - 214
        {
            // __int64 __fastcall sub_AAB6230(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x18) + 8i64 * (unsigned __int8)__ROL4__(a2, 0xC)) + 0x508i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB47B0: // 0xAAC03F0 - 215
        {
            // __int64 __fastcall sub_AAB47B0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x588) + 0x410i64) + 4i64 * (a2 & 0xA8));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB63A0: // 0xAAC03F0 - 216
        {
            // __int64 __fastcall sub_AAB63A0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x738) + 8i64 * (a2 & 0x4B)) + 0x5A8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5420: // 0xAAC03F0 - 217
        {
            // __int64 __fastcall sub_AAB5420(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3F0) + 8i64 * ((a2 ^ 0x21) & 0x61)) + 0x6E0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB3F10: // 0xAAC03F0 - 218
        {
            // __int64 __fastcall sub_AAB3F10(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x6A0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (__ROR4__(FuckEnc::CacheRead<_DWORD>(a3 + 0x3C0), 0x17) & 0x6A));
            return result;

            break;
        }
        case 0xAAB3E50: // 0xAAC03F0 - 219
        {
            // __int64 __fastcall sub_AAB3E50(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x5E0);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x88);
            return result;

            break;
        }
        case 0xAAB4370: // 0xAAC03F0 - 220
        {
            // __int64 __fastcall sub_AAB4370(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_DWORD>(a3 + 0x510) ^ 0x56E0242A | 4u;
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6610: // 0xAAC03F0 - 221
        {
            // __int64 __fastcall sub_AAB6610(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0x678);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4FF0: // 0xAAC03F0 - 222
        {
            // __int64 __fastcall sub_AAB4FF0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x6A8);
            *a1 ^= 0xABC1391D * FuckEnc::CacheRead<_DWORD>(result + 0x130);
            return result;

            break;
        }
        case 0xAAB6F80: // 0xAAC03F0 - 223
        {
            // __int64 __fastcall sub_AAB6F80(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(~FuckEnc::CacheRead<_DWORD>(a3 + 0x460) << 0xF);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5E30: // 0xAAC03F0 - 224
        {
            // __int64 __fastcall sub_AAB5E30(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xA0) + 0x190i64) + 0x3C8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7CD0: // 0xAAC03F0 - 225
        {
            // __int64 __fastcall sub_AAB7CD0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x708) + 0x410i64) + 4i64 * (a2 & 9));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7960: // 0xAAC03F0 - 226
        {
            // __int64 __fastcall sub_AAB7960(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x140) + 0x470i64) + 4i64 * ((unsigned __int8)(0x1B * a2) & 0x8F));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB3F90: // 0xAAC03F0 - 227
        {
            // __int64 __fastcall sub_AAB3F90(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 ^ *a1 ^ (0xC3018944 * FuckEnc::CacheRead<_DWORD>(a3 + 0x2E0));
            *a1 = result;
            return result;

            break;
        }
        case 0xAAB56D0: // 0xAAC03F0 - 228
        {
            // __int64 __fastcall sub_AAB56D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x440) + 0x518i64) + 0x198i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6BB0: // 0xAAC03F0 - 229
        {
            // __int64 __fastcall sub_AAB6BB0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0x158);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4150: // 0xAAC03F0 - 230
        {
            // __int64 __fastcall sub_AAB4150(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x5E0);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x3E8);
            return result;

            break;
        }
        case 0xAAB6AA0: // 0xAAC03F0 - 231
        {
            // __int64 __fastcall sub_AAB6AA0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1E8) + 0x410i64) + 4i64 * (a2 & 0x64));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5CF0: // 0xAAC03F0 - 232
        {
            // __int64 __fastcall sub_AAB5CF0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x1F8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x6B8) ^ 0x1FA50402;
            return result;

            break;
        }
        case 0xAAB43B0: // 0xAAC03F0 - 233
        {
            // __int64 __fastcall sub_AAB43B0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x318) ^ 0x7FD4FF9Cu);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5D70: // 0xAAC03F0 - 234
        {
            // __int64 __fastcall sub_AAB5D70(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x350) + 0x5C0i64) + 0x6F0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7030: // 0xAAC03F0 - 235
        {
            // __int64 __fastcall sub_AAB7030(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x4692677C - FuckEnc::CacheRead<_DWORD>(a3 + 0x10));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB60B0: // 0xAAC03F0 - 236
        {
            // __int64 __fastcall sub_AAB60B0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x728) + 0x6A0i64) + 4i64 * (a2 ^ 0x4Fu));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5F60: // 0xAAC03F0 - 237
        {
            // __int64 __fastcall sub_AAB5F60(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(a2 + ~FuckEnc::CacheRead<_DWORD>(a3 + 0x530));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5C30: // 0xAAC03F0 - 238
        {
            // __int64 __fastcall sub_AAB5C30(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x518);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x798) & 0xFFFFFFE5;
            return result;

            break;
        }
        case 0xAAB7BB0: // 0xAAC03F0 - 239
        {
            // __int64 __fastcall sub_AAB7BB0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = *a1 ^ (FuckEnc::CacheRead<_DWORD>(a3 + 0x88) + 0x3E71B6EA) ^ 0xC7D0FF69;
            *a1 = result;
            return result;

            break;
        }
        case 0xAAB3E90: // 0xAAC03F0 - 240
        {
            // __int64 __fastcall sub_AAB3E90(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = 0x97E239C8 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x510) >> 0xF);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB47F0: // 0xAAC03F0 - 241
        {
            // __int64 __fastcall sub_AAB47F0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x360) + 8i64 * (a2 & 0x88)) + 0x1C0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6130: // 0xAAC03F0 - 242
        {
            // __int64 __fastcall sub_AAB6130(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4A8) + 8i64 * (unsigned __int8)(0x1D * a2)) + 0x450i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4330: // 0xAAC03F0 - 243
        {
            // __int64 __fastcall sub_AAB4330(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4A8) + 8i64 * ((a2 ^ 0xDF) & 0x75)) + 0x1D0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4430: // 0xAAC03F0 - 244
        {
            // __int64 __fastcall sub_AAB4430(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x708) + 0x5C0i64) + 0x1C0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4F00: // 0xAAC03F0 - 245
        {
            // __int64 __fastcall sub_AAB4F00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x190) + 0x440i64) + 0x598i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4700: // 0xAAC03F0 - 246
        {
            // __int64 __fastcall sub_AAB4700(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x670) + 8i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x598) & 0x56)) + 0x658i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5610: // 0xAAC03F0 - 247
        {
            // __int64 __fastcall sub_AAB5610(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x480) + 0x478i64) + 0x658i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7C50: // 0xAAC03F0 - 248
        {
            // __int64 __fastcall sub_AAB7C50(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x420) + 0x5C0i64) + 0x570i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB75D0: // 0xAAC03F0 - 249
        {
            // __int64 __fastcall sub_AAB75D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x498);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x3C0) >> 0x1D;
            return result;

            break;
        }
        case 0xAAB4F40: // 0xAAC03F0 - 250
        {
            // __int64 __fastcall sub_AAB4F40(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2F8) + 0x1E0i64) + 4i64 * (a2 ^ 0xEFu));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6F20: // 0xAAC03F0 - 251
        {
            // __int64 __fastcall sub_AAB6F20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x418);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x6F0);
            return result;

            break;
        }
        case 0xAAB64E0: // 0xAAC03F0 - 252
        {
            // __int64 __fastcall sub_AAB64E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x18) + 8i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x130) & 0xDA)) + 0x450i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4DC0: // 0xAAC03F0 - 253
        {
            // __int64 __fastcall sub_AAB4DC0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x418) + 0x700i64) + 4i64 * (unsigned __int8)(0x70 * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB8050: // 0xAAC03F0 - 254
        {
            // __int64 __fastcall sub_AAB8050(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(FuckEnc::CacheRead<_DWORD>(a3 + 0x3E8) >> 0x1D);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7A20: // 0xAAC03F0 - 255
        {
            // __int64 __fastcall sub_AAB7A20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(940084874 - FuckEnc::CacheRead<_DWORD>(a3 + 464));
            *a1 ^= result;
            return result;

            break;
        }
        // Main Function 0xAAC03F0 End

        // Main Function 0xAAC1BA0 Start
        case 0xAAB75F0: // 0xAAC1BA0 - 0
        {
            // __int64 __fastcall sub_AAB75F0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x168) + 0x300i64) + 0x230i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6940: // 0xAAC1BA0 - 1
        {
            // __int64 __fastcall sub_AAB6940(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x308) + 0x220i64) + 0x288i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB68E0: // 0xAAC1BA0 - 2
        {
            // __int64 __fastcall sub_AAB68E0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x228) + 0x138i64) + 0x278i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB3DA0: // 0xAAC1BA0 - 3
        {
            // __int64 __fastcall sub_AAB3DA0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x228) + 0x2B8i64) + 0x1A0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB42F0: // 0xAAC1BA0 - 4
        {
            // __int64 __fastcall sub_AAB42F0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x50) + 0x50i64) + 0x288i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6A60: // 0xAAC1BA0 - 5
        {
            // __int64 __fastcall sub_AAB6A60(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x328) + 0x168i64) + 0x360i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6C80: // 0xAAC1BA0 - 6
        {
            // __int64 __fastcall sub_AAB6C80(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x250) + 0x138i64) + 0x2F0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB63C0: // 0xAAC1BA0 - 7
        {
            // __int64 __fastcall sub_AAB63C0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = (unsigned int)~(FuckEnc::CacheRead<_DWORD>(a2 + 0x2D0) + 0x6E9583AA);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6890: // 0xAAC1BA0 - 8
        {
            // __int64 __fastcall sub_AAB6890(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = 0xA371EEAB * (FuckEnc::CacheRead<_DWORD>(a2 + 0x148) ^ 0x1FAF8D95);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6650: // 0xAAC1BA0 - 9
        {
            // __int64 __fastcall sub_AAB6650(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = (unsigned int)~(0x391BF429 * FuckEnc::CacheRead<_DWORD>(a2 + 0x208));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5BB0: // 0xAAC1BA0 - 10
        {
            // __int64 __fastcall sub_AAB5BB0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x220) + 0x140i64) + 0x370i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6FF0: // 0xAAC1BA0 - 11
        {
            // __int64 __fastcall sub_AAB6FF0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x70) + 0x130i64) + 0x278i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6CE0: // 0xAAC1BA0 - 12
        {
            // __int64 __fastcall sub_AAB6CE0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2) + 0x58i64) + 0x100i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7310: // 0xAAC1BA0 - 13
        {
            // __int64 __fastcall sub_AAB7310(_DWORD *a1, __int64 FuckEnc::CacheRead<__int64>(a2))

            __int64 result; // rax

            result = FuckEnc::CacheRead<__int64>(a2);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<__int64>(a2) + 0x38) ^ 0xCECF382;
            return result;

            break;
        }
        case 0xAAB7AF0: // 0xAAC1BA0 - 14
        {
            // __int64 __fastcall sub_AAB7AF0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x138) + 0x80i64) + 0x340i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB45D0: // 0xAAC1BA0 - 15
        {
            // __int64 __fastcall sub_AAB45D0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = ~(FuckEnc::CacheRead<_DWORD>(a2 + 0x148) ^ 0x7B3F032Cu);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7040: // 0xAAC1BA0 - 16
        {
            // __int64 __fastcall sub_AAB7040(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x240);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x208);
            return result;

            break;
        }
        case 0xAAB70A0: // 0xAAC1BA0 - 17
        {
            // __int64 __fastcall sub_AAB70A0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = (FuckEnc::CacheRead<_DWORD>(a2 + 0x340) ^ 0x88BFAB80) + 0x26633DEC;
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5080: // 0xAAC1BA0 - 18
        {
            // __int64 __fastcall sub_AAB5080(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x2A8) + 0x390i64) + 0x100i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7490: // 0xAAC1BA0 - 19
        {
            // __int64 __fastcall sub_AAB7490(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x1D0);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x258);
            return result;

            break;
        }
        case 0xAAB74F0: // 0xAAC1BA0 - 20
        {
            // __int64 __fastcall sub_AAB74F0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = (0x13D0573A * FuckEnc::CacheRead<_DWORD>(a2 + 0x190)) & 0xFFFFFFF7;
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6AC0: // 0xAAC1BA0 - 21
        {
            // __int64 __fastcall sub_AAB6AC0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x80) + 0x240i64) + 0x318i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB58B0: // 0xAAC1BA0 - 22
        {
            // __int64 __fastcall sub_AAB58B0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x218) + 0x390i64) + 0xA8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6E40: // 0xAAC1BA0 - 23
        {
            // __int64 __fastcall sub_AAB6E40(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x300) + 0x58i64) + 0x88i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6DF0: // 0xAAC1BA0 - 24
        {
            // __int64 __fastcall sub_AAB6DF0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x338) + 0x218i64) + 0x2D0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB71B0: // 0xAAC1BA0 - 25
        {
            // __int64 __fastcall sub_AAB71B0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x338);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x190) ^ 0x895544EA;
            return result;

            break;
        }
        case 0xAAB48B0: // 0xAAC1BA0 - 26
        {
            // __int64 __fastcall sub_AAB48B0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = ~(0xD88D66A1 * FuckEnc::CacheRead<_DWORD>(a2 + 0x288));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6EA0: // 0xAAC1BA0 - 27
        {
            // __int64 __fastcall sub_AAB6EA0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = ~((unsigned int)0xE6F1663 ^ FuckEnc::CacheRead<_DWORD>(a2 + 0x120));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6100: // 0xAAC1BA0 - 28
        {
            // __int64 __fastcall sub_AAB6100(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x1D0) + 0x250i64) + 0x340i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7260: // 0xAAC1BA0 - 29
        {
            // __int64 __fastcall sub_AAB7260(_DWORD *a1, __int64 FuckEnc::CacheRead<__int64>(a2))

            __int64 result; // rax

            result = FuckEnc::CacheRead<__int64>(a2);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<__int64>(a2) + 0xA8) ^ 0x58A131D2;
            return result;

            break;
        }
        case 0xAAB5E80: // 0xAAC1BA0 - 30
        {
            // __int64 __fastcall sub_AAB5E80(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x58) + 0x390i64) + 0x2B0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6C30: // 0xAAC1BA0 - 31
        {
            // __int64 __fastcall sub_AAB6C30(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a2 + 0x148);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6F90: // 0xAAC1BA0 - 32
        {
            // __int64 __fastcall sub_AAB6F90(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x2B8) + 0x220i64) + 0x398i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6830: // 0xAAC1BA0 - 33
        {
            // __int64 __fastcall sub_AAB6830(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x48);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x278) + 0x2D1F43EC;
            return result;

            break;
        }
        case 0xAAB6EF0: // 0xAAC1BA0 - 34
        {
            // __int64 __fastcall sub_AAB6EF0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = (unsigned int)(~FuckEnc::CacheRead<_DWORD>(a2 + 0x370) - (_DWORD)0xC8221C3);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5350: // 0xAAC1BA0 - 35
        {
            // __int64 __fastcall sub_AAB5350(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x1C0) + 0x48i64) + 0x2B0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB72C0: // 0xAAC1BA0 - 36
        {
            // __int64 __fastcall sub_AAB72C0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x390);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x398);
            return result;

            break;
        }
        case 0xAAB7100: // 0xAAC1BA0 - 37
        {
            // __int64 __fastcall sub_AAB7100(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = (unsigned int)~FuckEnc::CacheRead<_DWORD>(a2 + 0x190) >> 0x1D;
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7200: // 0xAAC1BA0 - 38
        {
            // __int64 __fastcall sub_AAB7200(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0xE8) + 0x80i64) + 0x38i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB67F0: // 0xAAC1BA0 - 39
        {
            // __int64 __fastcall sub_AAB67F0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = ~(0x9BC5E123 * FuckEnc::CacheRead<_DWORD>(a2 + 0x288));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB8060: // 0xAAC1BA0 - 40
        {
            // __int64 __fastcall sub_AAB8060(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheReadPlural<_QWORD>(a2 + 0xD8) + 0x370i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB69A0: // 0xAAC1BA0 - 41
        {
            // __int64 __fastcall sub_AAB69A0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0xE8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0xB8) >> 0x12;
            return result;

            break;
        }
        case 0xAAB6F40: // 0xAAC1BA0 - 42
        {
            // __int64 __fastcall sub_AAB6F40(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x328);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x288) ^ 0x297D17B4;
            return result;

            break;
        }
        case 0xAAB55D0: // 0xAAC1BA0 - 43
        {
            // __int64 __fastcall sub_AAB55D0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x228);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x148) & 0xFFFFFFF2;
            return result;

            break;
        }
        case 0xAAB76A0: // 0xAAC1BA0 - 44
        {
            // __int64 __fastcall sub_AAB76A0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = (unsigned int)FuckEnc::CacheRead<unsigned __int8>(a2 + 0x1EB) + 0x16ABEBEA;
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6A00: // 0xAAC1BA0 - 45
        {
            // __int64 __fastcall sub_AAB6A00(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x218) + 0x58i64) + 0x18i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6D30: // 0xAAC1BA0 - 46
        {
            // __int64 __fastcall sub_AAB6D30(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = (FuckEnc::CacheRead<_DWORD>(a2 + 0xB8) ^ 0xED4DB7BA) & 0xFFFFFFE5;
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4060: // 0xAAC1BA0 - 47
        {
            // __int64 __fastcall sub_AAB4060(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x1D0) + 0x308i64) + 0xB8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB75A0: // 0xAAC1BA0 - 48
        {
            // __int64 __fastcall sub_AAB75A0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x220) + 0x218i64) + 0xA8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7650: // 0xAAC1BA0 - 49
        {
            // __int64 __fastcall sub_AAB7650(_DWORD *a1, __int64 FuckEnc::CacheRead<__int64>(a2))

            __int64 result; // rax

            result = FuckEnc::CacheRead<__int64>(a2);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<__int64>(a2) + 0x190);
            return result;

            break;
        }
        case 0xAAB4DE0: // 0xAAC1BA0 - 50
        {
            // __int64 __fastcall sub_AAB4DE0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x228) + 0xD8i64) + 0x1E8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7150: // 0xAAC1BA0 - 51
        {
            // __int64 __fastcall sub_AAB7150(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x240) + 0x390i64) + 0x360i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB73D0: // 0xAAC1BA0 - 52
        {
            // __int64 __fastcall sub_AAB73D0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x240) + 0x158i64) + 0x100i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7440: // 0xAAC1BA0 - 53
        {
            // __int64 __fastcall sub_AAB7440(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x50) + 0x80i64) + 0x2D0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7540: // 0xAAC1BA0 - 54
        {
            // __int64 __fastcall sub_AAB7540(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0xD8) + 0x138i64) + 0x148i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6B70: // 0xAAC1BA0 - 55
        {
            // __int64 __fastcall sub_AAB6B70(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x1C0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x360) ^ 0x56E250B1;
            return result;

            break;
        }
        case 0xAAB6D90: // 0xAAC1BA0 - 56
        {
            // __int64 __fastcall sub_AAB6D90(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x240) + 0x48i64) + 0x100i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6BC0: // 0xAAC1BA0 - 57
        {
            // __int64 __fastcall sub_AAB6BC0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = (FuckEnc::CacheRead<_DWORD>(a2 + 0x360) ^ 0xF1EA6E3D) + 0x148A1323;
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7850: // 0xAAC1BA0 - 58
        {
            // __int64 __fastcall sub_AAB7850(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x50);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x258);
            return result;

            break;
        }
        case 0xAAB6B10: // 0xAAC1BA0 - 59
        {
            // __int64 __fastcall sub_AAB6B10(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0x228) + 0x80i64) + 0xA8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4B40: // 0xAAC1BA0 - 60
        {
            // __int64 __fastcall sub_AAB4B40(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2) + 0x308i64) + 0x208i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5910: // 0xAAC1BA0 - 61
        {
            // __int64 __fastcall sub_AAB5910(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a2 + 0x328);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x1E8) << 0x1F;
            return result;

            break;
        }
        case 0xAAB7DB0: // 0xAAC1BA0 - 62
        {
            // __int64 __fastcall sub_AAB7DB0(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = ~(FuckEnc::CacheRead<_DWORD>(a2 + 0x288) & 0xFFFFFFFB);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7370: // 0xAAC1BA0 - 63
        {
            // __int64 __fastcall sub_AAB7370(_DWORD *a1, __int64 a2)

            a2 = (__int64)a2;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a2 + 0xD8) + 0x308i64) + 0x398i64);
            *a1 ^= result;
            return result;

            break;
        }
        // Main Function 0xAAC1BA0 End

        // Main Function 0xAAC2370 Start
        case 0xAAB4F20: // 0xAAC2370 - 0
        {
            // __int64 __fastcall sub_AAB4F20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0xB8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x4E8) & 0xFFFFFFEA;
            return result;

            break;
        }
        case 0xAAB3DC0: // 0xAAC2370 - 1
        {
            // __int64 __fastcall sub_AAB3DC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x720);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x280) ^ 0x6B543DE2;
            return result;

            break;
        }
        case 0xAAB5540: // 0xAAC2370 - 2
        {
            // __int64 __fastcall sub_AAB5540(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x58);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x6D0);
            return result;

            break;
        }
        case 0xAAB7110: // 0xAAC2370 - 3
        {
            // __int64 __fastcall sub_AAB7110(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x260) + 8i64 * ((unsigned __int8)(0x2C * a2) & 0xBA)) + 0x1B0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5E50: // 0xAAC2370 - 4
        {
            // __int64 __fastcall sub_AAB5E50(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x448);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x510);
            return result;

            break;
        }
        case 0xAAB6D50: // 0xAAC2370 - 5
        {
            // __int64 __fastcall sub_AAB6D50(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x710) + 0x6C8i64) + 0x7A0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7940: // 0xAAC2370 - 6
        {
            // __int64 __fastcall sub_AAB7940(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6D8) + 0x578i64) + 0x110i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB60D0: // 0xAAC2370 - 7
        {
            // __int64 __fastcall sub_AAB60D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(0x6A2DE310 * FuckEnc::CacheRead<_DWORD>(a3 + 0x110));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7BD0: // 0xAAC2370 - 8
        {
            // __int64 __fastcall sub_AAB7BD0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_DWORD>(a3 + 0x1B0) >> 0xF;
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5670: // 0xAAC2370 - 9
        {
            // __int64 __fastcall sub_AAB5670(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x560);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x3C8) | 0xD;
            return result;

            break;
        }
        case 0xAAB41B0: // 0xAAC2370 - 10
        {
            // __int64 __fastcall sub_AAB41B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x6A8);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x6E8);
            return result;

            break;
        }
        case 0xAAB4D40: // 0xAAC2370 - 11
        {
            // __int64 __fastcall sub_AAB4D40(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x40);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x658) * a2;
            return result;

            break;
        }
        case 0xAAB66A0: // 0xAAC2370 - 12
        {
            // __int64 __fastcall sub_AAB66A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x128) + 8i64 * (unsigned __int8)(0x23 * FuckEnc::CacheRead<_BYTE>(a3 + 0x6D0))) + 0x458i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6150: // 0xAAC2370 - 13
        {
            // __int64 __fastcall sub_AAB6150(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0xDB03478 * FuckEnc::CacheRead<_DWORD>(a3 + 0x310) - 0x578A8FE0);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6EB0: // 0xAAC2370 - 14
        {
            // __int64 __fastcall sub_AAB6EB0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4F0) + 8i64 * (unsigned __int8)(0xBF * a2)) + 0x258i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB77A0: // 0xAAC2370 - 15
        {
            // __int64 __fastcall sub_AAB77A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = *a1 ^ FuckEnc::CacheRead<_DWORD>(a3 + 0x658) ^ 0x7E037372u;
            *a1 = result;
            return result;

            break;
        }
        case 0xAAB42C0: // 0xAAC2370 - 16
        {
            // __int64 __fastcall sub_AAB42C0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x500) + 8i64 * ((unsigned __int8)(0x8D * a2) & 0xEF)) + 0x778i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7760: // 0xAAC2370 - 17
        {
            // __int64 __fastcall sub_AAB7760(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x260) + 8i64 * (a2 & 0x5E)) + 0x248i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7CF0: // 0xAAC2370 - 18
        {
            // __int64 __fastcall sub_AAB7CF0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x58) + 0x748i64) + 4i64 * (unsigned __int8)__ROL4__(a2, 3));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5B00: // 0xAAC2370 - 19
        {
            // __int64 __fastcall sub_AAB5B00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xB8) + 0x2E8i64) + 0x458i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4350: // 0xAAC2370 - 20
        {
            // __int64 __fastcall sub_AAB4350(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x170);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x6D0) >> 1;
            return result;

            break;
        }
        case 0xAAB6250: // 0xAAC2370 - 21
        {
            // __int64 __fastcall sub_AAB6250(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x560);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x6A0);
            return result;

            break;
        }
        case 0xAAB5630: // 0xAAC2370 - 22
        {
            // __int64 __fastcall sub_AAB5630(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x338) + 0x338i64) + 0x658i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB47D0: // 0xAAC2370 - 23
        {
            // __int64 __fastcall sub_AAB47D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1C0) + 0x490i64) + 0x6E8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB3E30: // 0xAAC2370 - 24
        {
            // __int64 __fastcall sub_AAB3E30(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x600);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(a3 + 0x630), 0x13));
            return result;

            break;
        }
        case 0xAAB4790: // 0xAAC2370 - 25
        {
            // __int64 __fastcall sub_AAB4790(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x268) + 8i64 * (a2 & 0xD8)) + 0x280i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5F70: // 0xAAC2370 - 26
        {
            // __int64 __fastcall sub_AAB5F70(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x338);
            *a1 ^= 0xA1C66572 * FuckEnc::CacheRead<_DWORD>(result + 0x768);
            return result;

            break;
        }
        case 0xAAB6090: // 0xAAC2370 - 27
        {
            // __int64 __fastcall sub_AAB6090(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x78) + 0x548i64) + 0x68i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5AD0: // 0xAAC2370 - 28
        {
            // __int64 __fastcall sub_AAB5AD0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(FuckEnc::CacheRead<_DWORD>(a3 + 0x410) << 7);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB53E0: // 0xAAC2370 - 29
        {
            // __int64 __fastcall sub_AAB53E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = 0xAFC2B300 * FuckEnc::CacheRead<_DWORD>(a3 + 0x248);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4E00: // 0xAAC2370 - 30
        {
            // __int64 __fastcall sub_AAB4E00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(FuckEnc::CacheRead<_DWORD>(a3 + 0x310) << 0xF);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB46E0: // 0xAAC2370 - 31
        {
            // __int64 __fastcall sub_AAB46E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6C8) + 0x28i64) + 0x1B0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6B30: // 0xAAC2370 - 32
        {
            // __int64 __fastcall sub_AAB6B30(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x480) + 0xE0i64) + 4i64 * (a2 & 0x18));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6190: // 0xAAC2370 - 33
        {
            // __int64 __fastcall sub_AAB6190(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x270) + 8i64 * ((unsigned __int8)(0x5E * a2) & 0x88)) + 0x620i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5010: // 0xAAC2370 - 34
        {
            // __int64 __fastcall sub_AAB5010(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x720);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x310);
            return result;

            break;
        }
        case 0xAAB4AC0: // 0xAAC2370 - 35
        {
            // __int64 __fastcall sub_AAB4AC0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3B8) + 8i64 * ((unsigned __int8)__ROL4__(a2, 0x14) & 0x95)) + 0x658i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6380: // 0xAAC2370 - 36
        {
            // __int64 __fastcall sub_AAB6380(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x578) + 0x450i64) + 0x310i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB51E0: // 0xAAC2370 - 37
        {
            // __int64 __fastcall sub_AAB51E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x580);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x6A0) >> 8;
            return result;

            break;
        }
        case 0xAAB4A60: // 0xAAC2370 - 38
        {
            // __int64 __fastcall sub_AAB4A60(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x70);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x768);
            return result;

            break;
        }
        case 0xAAB4D60: // 0xAAC2370 - 39
        {
            // __int64 __fastcall sub_AAB4D60(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x580) + 0x228i64) + 4i64 * (a2 & 0x1F));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB3E70: // 0xAAC2370 - 40
        {
            // __int64 __fastcall sub_AAB3E70(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x480) + 0x308i64) + 0x620i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5810: // 0xAAC2370 - 41
        {
            // __int64 __fastcall sub_AAB5810(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x5C8) + 0x1F0i64) + 0x658i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5500: // 0xAAC2370 - 42
        {
            // __int64 __fastcall sub_AAB5500(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x268) + 8i64 * (a2 & 0x14)) + 0x510i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4810: // 0xAAC2370 - 43
        {
            // __int64 __fastcall sub_AAB4810(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1A8) + 0x600i64) + 4i64 * ((unsigned __int8)__ROL4__(a2, 0x1D) & 0xD3));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6C40: // 0xAAC2370 - 44
        {
            // __int64 __fastcall sub_AAB6C40(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6E0) + 0x548i64) + 0x630i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6960: // 0xAAC2370 - 45
        {
            // __int64 __fastcall sub_AAB6960(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x448);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x1C8);
            return result;

            break;
        }
        case 0xAAB70C0: // 0xAAC2370 - 46
        {
            // __int64 __fastcall sub_AAB70C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = *a1 ^ (FuckEnc::CacheRead<_DWORD>(a3 + 0x1B0) | 8) ^ 0x40241E9Cu;
            *a1 = result;
            return result;

            break;
        }
        case 0xAAB3EF0: // 0xAAC2370 - 47
        {
            // __int64 __fastcall sub_AAB3EF0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x710) + 0x300i64) + 0x1C8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7220: // 0xAAC2370 - 48
        {
            // __int64 __fastcall sub_AAB7220(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x40) + 0x6A8i64) + 0x3C8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4240: // 0xAAC2370 - 49
        {
            // __int64 __fastcall sub_AAB4240(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x6D8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x138) ^ 0xA7C31131;
            return result;

            break;
        }
        case 0xAAB6210: // 0xAAC2370 - 50
        {
            // __int64 __fastcall sub_AAB6210(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x400) + 0x200i64) + 0x4D8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4640: // 0xAAC2370 - 51
        {
            // __int64 __fastcall sub_AAB4640(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x5D8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x280) ^ 0xC10246A4;
            return result;

            break;
        }
        case 0xAAB4550: // 0xAAC2370 - 52
        {
            // __int64 __fastcall sub_AAB4550(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x348);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x588) << 0x1B;
            return result;

            break;
        }
        case 0xAAB7170: // 0xAAC2370 - 53
        {
            // __int64 __fastcall sub_AAB7170(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x2E8);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x658);
            return result;

            break;
        }
        case 0xAAB5480: // 0xAAC2370 - 54
        {
            // __int64 __fastcall sub_AAB5480(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x70);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x310);
            return result;

            break;
        }
        case 0xAAB4D10: // 0xAAC2370 - 55
        {
            // __int64 __fastcall sub_AAB4D10(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x438) + 0x370i64) + 4i64 * (a2 & 0xC3));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB61D0: // 0xAAC2370 - 56
        {
            // __int64 __fastcall sub_AAB61D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x510) ^ 0xA15D755E);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB44D0: // 0xAAC2370 - 57
        {
            // __int64 __fastcall sub_AAB44D0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 ^ *a1 ^ (unsigned int)(FuckEnc::CacheRead<_DWORD>(a3 + 0x100) - 0x68B252FA);
            *a1 = result;
            return result;

            break;
        }
        case 0xAAB6710: // 0xAAC2370 - 58
        {
            // __int64 __fastcall sub_AAB6710(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x500) + 8i64 * ((0xE3 * a2) & 0x2F)) + 0x3A0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB62C0: // 0xAAC2370 - 59
        {
            // __int64 __fastcall sub_AAB62C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x320);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (((unsigned __int8)(0xDD * FuckEnc::CacheRead<_BYTE>(a3 + 0x768)) ^ 0xEE) & 0x55));
            return result;

            break;
        }
        case 0xAAB52A0: // 0xAAC2370 - 60
        {
            // __int64 __fastcall sub_AAB52A0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x710) + 0x90i64) + 4i64 * (a2 & 0x34));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5770: // 0xAAC2370 - 61
        {
            // __int64 __fastcall sub_AAB5770(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x788) + 8i64 * (a2 & 0x56)) + 0x138i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7720: // 0xAAC2370 - 62
        {
            // __int64 __fastcall sub_AAB7720(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1A0) + 0x40i64) + 0x558i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4450: // 0xAAC2370 - 63
        {
            // __int64 __fastcall sub_AAB4450(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x270) + 8i64 * ((unsigned __int8)__ROR4__(a2, 0x16) & 0x9B)) + 0x440i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5D90: // 0xAAC2370 - 64
        {
            // __int64 __fastcall sub_AAB5D90(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6E0) + 0x1F0i64) + 0x138i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6CA0: // 0xAAC2370 - 65
        {
            // __int64 __fastcall sub_AAB6CA0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x338) + 0x6F8i64) + 4i64 * (a2 ^ 0x4Cu));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4410: // 0xAAC2370 - 66
        {
            // __int64 __fastcall sub_AAB4410(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2F0) + 0x6A8i64) + 0x630i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5050: // 0xAAC2370 - 67
        {
            // __int64 __fastcall sub_AAB5050(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x638) + 8i64 * (-FuckEnc::CacheRead<_DWORD>(a3 + 0x620) & 0x39)) + 0x558i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB76F0: // 0xAAC2370 - 68
        {
            // __int64 __fastcall sub_AAB76F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(FuckEnc::CacheRead<_DWORD>(a3 + 0x6A0) << 9);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7F00: // 0xAAC2370 - 69
        {
            // __int64 __fastcall sub_AAB7F00(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(a2 * ~FuckEnc::CacheRead<_DWORD>(a3 + 0x410));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7FF0: // 0xAAC2370 - 70
        {
            // __int64 __fastcall sub_AAB7FF0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x6D8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x458) | 8;
            return result;

            break;
        }
        case 0xAAB4100: // 0xAAC2370 - 71
        {
            // __int64 __fastcall sub_AAB4100(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(FuckEnc::CacheRead<_DWORD>(a3 + 0x458) << 0x15);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4020: // 0xAAC2370 - 72
        {
            // __int64 __fastcall sub_AAB4020(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x1A0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x4E8) - 0x2FCF1AAF;
            return result;

            break;
        }
        case 0xAAB65F0: // 0xAAC2370 - 73
        {
            // __int64 __fastcall sub_AAB65F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x590) + 0x720i64) + 0x4E8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5E10: // 0xAAC2370 - 74
        {
            // __int64 __fastcall sub_AAB5E10(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x690) + 0x600i64) + 4i64 * (unsigned __int8)__ROL4__(a2, 0xF));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4EC0: // 0xAAC2370 - 75
        {
            // __int64 __fastcall sub_AAB4EC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0x248);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5840: // 0xAAC2370 - 76
        {
            // __int64 __fastcall sub_AAB5840(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4F8) + 8i64 * (unsigned __int8)~a2) + 0x440i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5DD0: // 0xAAC2370 - 77
        {
            // __int64 __fastcall sub_AAB5DD0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xA8) + 0x5B0i64) + 4i64 * (__ROL4__(a2, 0x1E) & 0x11));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5D50: // 0xAAC2370 - 78
        {
            // __int64 __fastcall sub_AAB5D50(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x580);
            *a1 ^= a2 + FuckEnc::CacheRead<_DWORD>(result + 0x558);
            return result;

            break;
        }
        case 0xAAB51A0: // 0xAAC2370 - 79
        {
            // __int64 __fastcall sub_AAB51A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x438) + 0x5C8i64) + 0x38i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4FD0: // 0xAAC2370 - 80
        {
            // __int64 __fastcall sub_AAB4FD0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x60);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x3A0) ^ 0xD1FF41BA;
            return result;

            break;
        }
        case 0xAAB7A40: // 0xAAC2370 - 81
        {
            // __int64 __fastcall sub_AAB7A40(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x28) + 0x4B8i64) + 4i64 * (a2 ^ 0xD6u));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4490: // 0xAAC2370 - 82
        {
            // __int64 __fastcall sub_AAB4490(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x4D8) ^ 0xC3018944);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB3FF0: // 0xAAC2370 - 83
        {
            // __int64 __fastcall sub_AAB3FF0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x53CEECE - FuckEnc::CacheRead<_DWORD>(a3 + 0x630));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5A60: // 0xAAC2370 - 84
        {
            // __int64 __fastcall sub_AAB5A60(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x6C8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x630) ^ 0x892F2A5C;
            return result;

            break;
        }
        case 0xAAB5260: // 0xAAC2370 - 85
        {
            // __int64 __fastcall sub_AAB5260(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x40) + 0x450i64) + 0x510i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6020: // 0xAAC2370 - 86
        {
            // __int64 __fastcall sub_AAB6020(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x578) + 0x5B0i64) + 4i64 * (unsigned __int8)(0x32 * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4980: // 0xAAC2370 - 87
        {
            // __int64 __fastcall sub_AAB4980(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x580) + 0x480i64) + 0x510i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7CB0: // 0xAAC2370 - 88
        {
            // __int64 __fastcall sub_AAB7CB0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x690) + 0x348i64) + 0x6A0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7AC0: // 0xAAC2370 - 89
        {
            // __int64 __fastcall sub_AAB7AC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4F8) + 8i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x6D0) & 0x22)) + 0x310i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB59F0: // 0xAAC2370 - 90
        {
            // __int64 __fastcall sub_AAB59F0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x338) + 0xE0i64) + 4i64 * (unsigned __int8)__ROL4__(a2, 0x13));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5FF0: // 0xAAC2370 - 91
        {
            // __int64 __fastcall sub_AAB5FF0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x40A8E87 * FuckEnc::CacheRead<_DWORD>(a3 + 0x658));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB58D0: // 0xAAC2370 - 92
        {
            // __int64 __fastcall sub_AAB58D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x60);
            *a1 ^= 0x6BAD803E * FuckEnc::CacheRead<_DWORD>(result + 0x2F8);
            return result;

            break;
        }
        case 0xAAB7A00: // 0xAAC2370 - 93
        {
            // __int64 __fastcall sub_AAB7A00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x580) + 0x308i64) + 0x38i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4750: // 0xAAC2370 - 94
        {
            // __int64 __fastcall sub_AAB4750(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x228);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(a3 + 0x1B0) ^ 0xC2u));
            return result;

            break;
        }
        case 0xAAB8030: // 0xAAC2370 - 95
        {
            // __int64 __fastcall sub_AAB8030(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x560) + 0xE0i64) + 4i64 * ((unsigned __int8)(0x83 * a2) & 0x8A));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB63D0: // 0xAAC2370 - 96
        {
            // __int64 __fastcall sub_AAB63D0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x438);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x68) * a2;
            return result;

            break;
        }
        case 0xAAB5570: // 0xAAC2370 - 97
        {
            // __int64 __fastcall sub_AAB5570(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 ^ *a1 ^ (unsigned int)(FuckEnc::CacheRead<_DWORD>(a3 + 0x68) * a2);
            *a1 = result;
            return result;

            break;
        }
        case 0xAAB7E00: // 0xAAC2370 - 98
        {
            // __int64 __fastcall sub_AAB7E00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (FuckEnc::CacheRead<_DWORD>(a3 + 0x6A0) & 0xFFFFFFE1) << 8;
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7060: // 0xAAC2370 - 99
        {
            // __int64 __fastcall sub_AAB7060(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2D0) + 0x748i64) + 4i64 * (a2 & 0x59));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB73F0: // 0xAAC2370 - 100
        {
            // __int64 __fastcall sub_AAB73F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x500) + 8i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x390) & 0x8A)) + 0x390i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6480: // 0xAAC2370 - 101
        {
            // __int64 __fastcall sub_AAB6480(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x268) + 8i64 * (a2 ^ 9u)) + 0x1C8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4F60: // 0xAAC2370 - 102
        {
            // __int64 __fastcall sub_AAB4F60(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~(0xC301310C * FuckEnc::CacheRead<_DWORD>(a3 + 0x68));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6300: // 0xAAC2370 - 103
        {
            // __int64 __fastcall sub_AAB6300(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x260) + 8i64 * (a2 & 0x3C)) + 0x38i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB54B0: // 0xAAC2370 - 104
        {
            // __int64 __fastcall sub_AAB54B0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x780) + 8i64 * (unsigned __int8)(0xD4 * a2)) + 0x2C8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB48C0: // 0xAAC2370 - 105
        {
            // __int64 __fastcall sub_AAB48C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x578) + 0x590i64) + 0x100i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6F60: // 0xAAC2370 - 106
        {
            // __int64 __fastcall sub_AAB6F60(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x448) + 0x578i64) + 0x458i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB56F0: // 0xAAC2370 - 107
        {
            // __int64 __fastcall sub_AAB56F0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x28) + 0x4B8i64) + 4i64 * ((unsigned __int8)(0xFD * a2) & 0xB4));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB64C0: // 0xAAC2370 - 108
        {
            // __int64 __fastcall sub_AAB64C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (FuckEnc::CacheRead<_DWORD>(a3 + 0x310) ^ 0x43618ABFu) - 0x7BB069B8;
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7B90: // 0xAAC2370 - 109
        {
            // __int64 __fastcall sub_AAB7B90(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x348);
            *a1 ^= 0x2F562DB2 * FuckEnc::CacheRead<_DWORD>(result + 0x588);
            return result;

            break;
        }
        case 0xAAB67C0: // 0xAAC2370 - 110
        {
            // __int64 __fastcall sub_AAB67C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x510) & 0xFFFFFFE1);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB79C0: // 0xAAC2370 - 111
        {
            // __int64 __fastcall sub_AAB79C0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x270) + 8i64 * (a2 ^ 0xB8u)) + 0x1B0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5730: // 0xAAC2370 - 112
        {
            // __int64 __fastcall sub_AAB5730(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x188) + 0xE0i64) + 4i64 * (unsigned __int8)__ROL4__(a2, 0x1E));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4080: // 0xAAC2370 - 113
        {
            // __int64 __fastcall sub_AAB4080(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x1A8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x6E8) ^ 0xC3113131;
            return result;

            break;
        }
        case 0xAAB5410: // 0xAAC2370 - 114
        {
            // __int64 __fastcall sub_AAB5410(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (FuckEnc::CacheRead<_DWORD>(a3 + 0x4E8) & 0xFFFFFFE7) << 0xB;
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4620: // 0xAAC2370 - 115
        {
            // __int64 __fastcall sub_AAB4620(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xA8) + 0x690i64) + 0x410i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4B60: // 0xAAC2370 - 116
        {
            // __int64 __fastcall sub_AAB4B60(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x300) + 0xA8i64) + 0x588i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6740: // 0xAAC2370 - 117
        {
            // __int64 __fastcall sub_AAB6740(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1C0) + 0x308i64) + 0x80i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB55F0: // 0xAAC2370 - 118
        {
            // __int64 __fastcall sub_AAB55F0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x60) + 0x1B8i64) + 0x778i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6E10: // 0xAAC2370 - 119
        {
            // __int64 __fastcall sub_AAB6E10(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(8 * ~FuckEnc::CacheRead<_DWORD>(a3 + 0x280));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6BE0: // 0xAAC2370 - 120
        {
            // __int64 __fastcall sub_AAB6BE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x710);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x778);
            return result;

            break;
        }
        case 0xAAB71D0: // 0xAAC2370 - 121
        {
            // __int64 __fastcall sub_AAB71D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(a3 + 0x2F8);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6570: // 0xAAC2370 - 122
        {
            // __int64 __fastcall sub_AAB6570(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x500) + 8i64 * (unsigned __int8)__ROL4__(a2, 0x1F)) + 0x1C8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5590: // 0xAAC2370 - 123
        {
            // __int64 __fastcall sub_AAB5590(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x170) + 0x6C8i64) + 0x410i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7D70: // 0xAAC2370 - 124
        {
            // __int64 __fastcall sub_AAB7D70(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x788) + 8i64 * ((0xC * a2) & 0x51)) + 0x248i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4170: // 0xAAC2370 - 125
        {
            // __int64 __fastcall sub_AAB4170(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x268) + 8i64 * ((unsigned __int8)(0x11 * a2) & 0x88)) + 0x630i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4130: // 0xAAC2370 - 126
        {
            // __int64 __fastcall sub_AAB4130(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6C0) + 0x348i64) + 0x258i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6900: // 0xAAC2370 - 127
        {
            // __int64 __fastcall sub_AAB6900(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x598) + 0x748i64) + 4i64 * (a2 & 0x51));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5170: // 0xAAC2370 - 128
        {
            // __int64 __fastcall sub_AAB5170(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x300) + 0x370i64) + 4i64 * (unsigned __int8)(0xC1 * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5EA0: // 0xAAC2370 - 129
        {
            // __int64 __fastcall sub_AAB5EA0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x720) + 0x370i64) + 4i64 * ((unsigned __int8)__ROR4__(a2, 0xF) & 0xE6));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7500: // 0xAAC2370 - 130
        {
            // __int64 __fastcall sub_AAB7500(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x450) + 0x468i64) + 4i64 * (unsigned __int8)(0x4E * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB45E0: // 0xAAC2370 - 131
        {
            // __int64 __fastcall sub_AAB45E0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x548) + 0x600i64) + 4i64 * (unsigned __int8)(0x4D * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6060: // 0xAAC2370 - 132
        {
            // __int64 __fastcall sub_AAB6060(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x270) + 8i64 * (unsigned __int8)__ROR4__(a2, 0x12)) + 0x558i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5A20: // 0xAAC2370 - 133
        {
            // __int64 __fastcall sub_AAB5A20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x28) + 0x6A8i64) + 0x7A0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6A80: // 0xAAC2370 - 134
        {
            // __int64 __fastcall sub_AAB6A80(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x578);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x248);
            return result;

            break;
        }
        case 0xAAB4CD0: // 0xAAC2370 - 135
        {
            // __int64 __fastcall sub_AAB4CD0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x200);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x3C8);
            return result;

            break;
        }
        case 0xAAB5220: // 0xAAC2370 - 136
        {
            // __int64 __fastcall sub_AAB5220(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x58) + 0x430i64) + 0x2F8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7F70: // 0xAAC2370 - 137
        {
            // __int64 __fastcall sub_AAB7F70(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x37D1FF41 * (a2 + FuckEnc::CacheRead<_DWORD>(a3 + 0x5A0)));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4C20: // 0xAAC2370 - 138
        {
            // __int64 __fastcall sub_AAB4C20(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 ^ *a1 ^ (unsigned int)(0xDB9A471 * FuckEnc::CacheRead<_DWORD>(a3 + 0x38));
            *a1 = result;
            return result;

            break;
        }
        case 0xAAB6FB0: // 0xAAC2370 - 139
        {
            // __int64 __fastcall sub_AAB6FB0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x58) + 0x170i64) + 0x138i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB53A0: // 0xAAC2370 - 140
        {
            // __int64 __fastcall sub_AAB53A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4F8) + 8i64 * (unsigned __int8)(0x99 * FuckEnc::CacheRead<_BYTE>(a3 + 0x510))) + 0x310i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4B00: // 0xAAC2370 - 141
        {
            // __int64 __fastcall sub_AAB4B00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x5D8);
            *a1 ^= 0x9106A550 * FuckEnc::CacheRead<_DWORD>(result + 0x458);
            return result;

            break;
        }
        case 0xAAB7330: // 0xAAC2370 - 142
        {
            // __int64 __fastcall sub_AAB7330(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x308) + 0x170i64) + 0x68i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7EC0: // 0xAAC2370 - 143
        {
            // __int64 __fastcall sub_AAB7EC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2E8) + 0x560i64) + 0x620i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5CD0: // 0xAAC2370 - 144
        {
            // __int64 __fastcall sub_AAB5CD0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4F8) + 8i64 * (unsigned __int8)~a2) + 0x6D0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6DB0: // 0xAAC2370 - 145
        {
            // __int64 __fastcall sub_AAB6DB0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x690) + 0x370i64) + 4i64 * (unsigned __int8)__ROL4__(a2, 8));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6290: // 0xAAC2370 - 146
        {
            // __int64 __fastcall sub_AAB6290(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x5C8);
            *a1 ^= 0x17E40927 * FuckEnc::CacheRead<_DWORD>(result + 0x1B0);
            return result;

            break;
        }
        case 0xAAB7C70: // 0xAAC2370 - 147
        {
            // __int64 __fastcall sub_AAB7C70(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x648) + 8i64 * (unsigned __int8)__ROR4__(a2, 0x1E)) + 0x6E8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6780: // 0xAAC2370 - 148
        {
            // __int64 __fastcall sub_AAB6780(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x3F4A143D - FuckEnc::CacheRead<_DWORD>(a3 + 0x410));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5880: // 0xAAC2370 - 149
        {
            // __int64 __fastcall sub_AAB5880(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x548);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x38) | 8;
            return result;

            break;
        }
        case 0xAAB5370: // 0xAAC2370 - 150
        {
            // __int64 __fastcall sub_AAB5370(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(~FuckEnc::CacheRead<_DWORD>(a3 + 0x630) << 0x1A);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5C50: // 0xAAC2370 - 151
        {
            // __int64 __fastcall sub_AAB5C50(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x60);
            *a1 ^= 0x6F1FD039 * FuckEnc::CacheRead<_DWORD>(result + 0x2C8);
            return result;

            break;
        }
        case 0xAAB6A20: // 0xAAC2370 - 152
        {
            // __int64 __fastcall sub_AAB6A20(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6D8) + 0x598i64) + 0x7A0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5970: // 0xAAC2370 - 153
        {
            // __int64 __fastcall sub_AAB5970(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x448);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x7A0) ^ 0x73991A87;
            return result;

            break;
        }
        case 0xAAB6850: // 0xAAC2370 - 154
        {
            // __int64 __fastcall sub_AAB6850(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x450) + 0x600i64) + 4i64 * (unsigned __int8)(8 * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5D10: // 0xAAC2370 - 155
        {
            // __int64 __fastcall sub_AAB5D10(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x320);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * ((unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(a3 + 0x768), 0xE) & 0xB0));
            return result;

            break;
        }
        case 0xAAB5ED0: // 0xAAC2370 - 156
        {
            // __int64 __fastcall sub_AAB5ED0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x790) + 8i64 * (a2 & 0xAD)) + 0x80i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB65B0: // 0xAAC2370 - 157
        {
            // __int64 __fastcall sub_AAB65B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = *a1 ^ FuckEnc::CacheRead<_DWORD>(a3 + 0x5A0) & 0xFFFFFFE6 ^ 0xD7D1B473;
            *a1 = result;
            return result;

            break;
        }
        case 0xAAB7F30: // 0xAAC2370 - 158
        {
            // __int64 __fastcall sub_AAB7F30(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x548);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x4E8);
            return result;

            break;
        }
        case 0xAAB5F40: // 0xAAC2370 - 159
        {
            // __int64 __fastcall sub_AAB5F40(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x270) + 8i64 * ((a2 ^ 0xEB) & 0x9F)) + 0x410i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB3EB0: // 0xAAC2370 - 160
        {
            // __int64 __fastcall sub_AAB3EB0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1B8) + 0x6D8i64) + 0x100i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB50E0: // 0xAAC2370 - 161
        {
            // __int64 __fastcall sub_AAB50E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x468);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * ((unsigned __int8)FuckEnc::CacheRead<_DWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x188) + 0x6D0i64) ^ 0x92u));
            return result;

            break;
        }
        case 0xAAB77E0: // 0xAAC2370 - 162
        {
            // __int64 __fastcall sub_AAB77E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x400) + 0x5C8i64) + 0x110i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7DC0: // 0xAAC2370 - 163
        {
            // __int64 __fastcall sub_AAB7DC0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x300) + 0x580i64) + 0x138i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5C10: // 0xAAC2370 - 164
        {
            // __int64 __fastcall sub_AAB5C10(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x120) + 8i64 * (a2 ^ 0x6Bu)) + 0x4D8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5C90: // 0xAAC2370 - 165
        {
            // __int64 __fastcall sub_AAB5C90(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x480);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x768);
            return result;

            break;
        }
        case 0xAAB7610: // 0xAAC2370 - 166
        {
            // __int64 __fastcall sub_AAB7610(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1B8) + 0x28i64) + 0x4D8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB3E00: // 0xAAC2370 - 167
        {
            // void __fastcall sub_AAB3E00(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= (FuckEnc::CacheRead<_DWORD>(a3 + 0x768) * a2) | 8;

            break;
        }
        case 0xAAB59B0: // 0xAAC2370 - 168
        {
            // __int64 __fastcall sub_AAB59B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x70) + 0x6D8i64) + 0x558i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4C50: // 0xAAC2370 - 169
        {
            // __int64 __fastcall sub_AAB4C50(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x690) + 0x590i64) + 0x100i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5B70: // 0xAAC2370 - 170
        {
            // __int64 __fastcall sub_AAB5B70(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x170);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x778);
            return result;

            break;
        }
        case 0xAAB5AA0: // 0xAAC2370 - 171
        {
            // __int64 __fastcall sub_AAB5AA0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 ^ *a1 ^ (unsigned int)~FuckEnc::CacheRead<_DWORD>(a3 + 0x3A0);
            *a1 = result;
            return result;

            break;
        }
        case 0xAAB7890: // 0xAAC2370 - 172
        {
            // __int64 __fastcall sub_AAB7890(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x170) + 0x6E0i64) + 0x110i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7C00: // 0xAAC2370 - 173
        {
            // __int64 __fastcall sub_AAB7C00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(4 * FuckEnc::CacheRead<_DWORD>(a3 + 0x440));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB41E0: // 0xAAC2370 - 174
        {
            // void __fastcall sub_AAB41E0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x510) * a2);

            break;
        }
        case 0xAAB5130: // 0xAAC2370 - 175
        {
            // __int64 __fastcall sub_AAB5130(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x598);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x6E8) << 0xF;
            return result;

            break;
        }
        case 0xAAB5FB0: // 0xAAC2370 - 176
        {
            // __int64 __fastcall sub_AAB5FB0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x780) + 8i64 * (a2 & 0x7F)) + 0x390i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7C30: // 0xAAC2370 - 177
        {
            // __int64 __fastcall sub_AAB7C30(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x640) + 8i64 * (unsigned __int8)__ROL4__(a2, 0xF)) + 0x6A0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB49E0: // 0xAAC2370 - 178
        {
            // __int64 __fastcall sub_AAB49E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x690) + 0x430i64) + 0x620i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB76B0: // 0xAAC2370 - 179
        {
            // __int64 __fastcall sub_AAB76B0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x78) + 0x5B0i64) + 4i64 * (unsigned __int8)__ROL4__(a2, 0x13));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7460: // 0xAAC2370 - 180
        {
            // __int64 __fastcall sub_AAB7460(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x120) + 8i64 * (unsigned __int8)__ROL4__(a2, 0x12)) + 0x390i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6340: // 0xAAC2370 - 181
        {
            // __int64 __fastcall sub_AAB6340(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x690) + 0x228i64) + 4i64 * (unsigned __int8)(0xEB * a2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4940: // 0xAAC2370 - 182
        {
            // __int64 __fastcall sub_AAB4940(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x598) + 0x308i64) + 0x5A0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4EF0: // 0xAAC2370 - 183
        {
            // __int64 __fastcall sub_AAB4EF0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(a2 + (FuckEnc::CacheRead<_DWORD>(a3 + 0x5A0) << 6));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6AE0: // 0xAAC2370 - 184
        {
            // __int64 __fastcall sub_AAB6AE0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x1B8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x410) >> 6;
            return result;

            break;
        }
        case 0xAAB4E30: // 0xAAC2370 - 185
        {
            // __int64 __fastcall sub_AAB4E30(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xB8) + 0x78i64) + 0x630i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB68B0: // 0xAAC2370 - 186
        {
            // __int64 __fastcall sub_AAB68B0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x118) + 8i64 * (unsigned __int8)__ROR4__(a2, 5)) + 0x3A0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6120: // 0xAAC2370 - 187
        {
            // __int64 __fastcall sub_AAB6120(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~FuckEnc::CacheRead<_DWORD>(a3 + 0x3A0) >> 2;
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6660: // 0xAAC2370 - 188
        {
            // __int64 __fastcall sub_AAB6660(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x200);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x768) & 0xFFFFFFFD;
            return result;

            break;
        }
        case 0xAAB43D0: // 0xAAC2370 - 189
        {
            // __int64 __fastcall sub_AAB43D0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x430) + 0x370i64) + 4i64 * (a2 & 0xB1));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB8080: // 0xAAC2370 - 190
        {
            // __int64 __fastcall sub_AAB8080(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4F8) + 8i64 * (unsigned __int8)__ROR4__(FuckEnc::CacheRead<_DWORD>(a3 + 0x630), 7)) + 0x310i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB74B0: // 0xAAC2370 - 191
        {
            // __int64 __fastcall sub_AAB74B0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0xB8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x4E8) & 0xFFFFFFE0;
            return result;

            break;
        }
        case 0xAAB4BA0: // 0xAAC2370 - 192
        {
            // __int64 __fastcall sub_AAB4BA0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6E0) + 0x1D8i64) + 4i64 * (a2 & 0xF3));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB57C0: // 0xAAC2370 - 193
        {
            // __int64 __fastcall sub_AAB57C0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6E0) + 0xE0i64) + 4i64 * ((unsigned __int8)__ROL4__(a2, 0x18) & 0x85));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB50A0: // 0xAAC2370 - 194
        {
            // __int64 __fastcall sub_AAB50A0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 ^ *a1 ^ FuckEnc::CacheRead<_DWORD>(a3 + 0x248) & 0xFFFFFFE7;
            *a1 = result;
            return result;

            break;
        }
        case 0xAAB4690: // 0xAAC2370 - 195
        {
            // __int64 __fastcall sub_AAB4690(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4F0) + 8i64 * (unsigned __int8)(0x67 * a2)) + 0x410i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4310: // 0xAAC2370 - 196
        {
            // __int64 __fastcall sub_AAB4310(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = 0x9AC3872F * ((unsigned int)0xDD47FB5 ^ FuckEnc::CacheRead<_DWORD>(a3 + 0x3C8));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7280: // 0xAAC2370 - 197
        {
            // __int64 __fastcall sub_AAB7280(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x2F0);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x3C8) << 0x1A;
            return result;

            break;
        }
        case 0xAAB4F90: // 0xAAC2370 - 198
        {
            // __int64 __fastcall sub_AAB4F90(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x28);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x558) & 0xFFFFFFF1;
            return result;

            break;
        }
        case 0xAAB6CF0: // 0xAAC2370 - 199
        {
            // __int64 __fastcall sub_AAB6CF0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = a2 ^ *a1 ^ (unsigned int)(0xB5B222E * FuckEnc::CacheRead<_DWORD>(a3 + 0x80));
            *a1 = result;
            return result;

            break;
        }
        case 0xAAB66D0: // 0xAAC2370 - 200
        {
            // __int64 __fastcall sub_AAB66D0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x400) + 0x6C8i64) + 0x2F8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5BD0: // 0xAAC2370 - 201
        {
            // __int64 __fastcall sub_AAB5BD0(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x28) + 0x468i64) + 4i64 * ((unsigned __int8)__ROR4__(a2, 1) & 0xCC));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4510: // 0xAAC2370 - 202
        {
            // __int64 __fastcall sub_AAB4510(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2D0) + 0x348i64) + 0x768i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7820: // 0xAAC2370 - 203
        {
            // __int64 __fastcall sub_AAB7820(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3A8) + 8i64 * ((unsigned __int8)(0xB6 * a2) & 0xD1)) + 0x440i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4DA0: // 0xAAC2370 - 204
        {
            // __int64 __fastcall sub_AAB4DA0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2D0) + 0x6E0i64) + 0x110i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB40C0: // 0xAAC2370 - 205
        {
            // __int64 __fastcall sub_AAB40C0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x118) + 8i64 * (a2 & 0x78)) + 0x100i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6B90: // 0xAAC2370 - 206
        {
            // __int64 __fastcall sub_AAB6B90(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3B0) + 8i64 * (a2 & 0xD8)) + 0x510i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4900: // 0xAAC2370 - 207
        {
            // __int64 __fastcall sub_AAB4900(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)(0x47AB310D * FuckEnc::CacheRead<_DWORD>(a3 + 0x6D0));
            *a1 ^= 0xCEC30131 - result;
            return result;

            break;
        }
        case 0xAAB6F00: // 0xAAC2370 - 208
        {
            // __int64 __fastcall sub_AAB6F00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x690) + 0x578i64) + 0x68i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4390: // 0xAAC2370 - 209
        {
            // __int64 __fastcall sub_AAB4390(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x640) + 8i64 * a2) + 0x410i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6620: // 0xAAC2370 - 210
        {
            // __int64 __fastcall sub_AAB6620(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_DWORD>(a3 + 0x38) >> 0x17;
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB69C0: // 0xAAC2370 - 211
        {
            // __int64 __fastcall sub_AAB69C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1A8) + 0x6C0i64) + 0x280i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7390: // 0xAAC2370 - 212
        {
            // __int64 __fastcall sub_AAB7390(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4F8) + 8i64 * (unsigned __int8)(0x5B * a2)) + 0x3C8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7560: // 0xAAC2370 - 213
        {
            // __int64 __fastcall sub_AAB7560(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x348) + 0x468i64) + 4i64 * ((unsigned __int8)(0xC2 * a2) & 0xF2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4590: // 0xAAC2370 - 214
        {
            // __int64 __fastcall sub_AAB4590(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2B8) + 0x6E0i64) + 0x458i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4C90: // 0xAAC2370 - 215
        {
            // __int64 __fastcall sub_AAB4C90(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x578) + 0x188i64) + 0x4D8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB49A0: // 0xAAC2370 - 216
        {
            // __int64 __fastcall sub_AAB49A0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x690) + 0x70i64) + 0x4E8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7660: // 0xAAC2370 - 217
        {
            // __int64 __fastcall sub_AAB7660(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x748);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 4i64 * (unsigned __int8)(0x15 * FuckEnc::CacheRead<_BYTE>(FuckEnc::CacheRead<_QWORD>(a3 + 0x40) + 0x110i64)));
            return result;

            break;
        }
        case 0xAAB4A20: // 0xAAC2370 - 218
        {
            // __int64 __fastcall sub_AAB4A20(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x348);
            *a1 ^= a2 + FuckEnc::CacheRead<_DWORD>(result + 0x248);
            return result;

            break;
        }
        case 0xAAB6530: // 0xAAC2370 - 219
        {
            // __int64 __fastcall sub_AAB6530(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3B0) + 8i64 * ((a2 ^ 0xF5) & 0x7B)) + 0x280i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4210: // 0xAAC2370 - 220
        {
            // __int64 __fastcall sub_AAB4210(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_DWORD>(a3 + 0x390) | 0x1Du;
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4BE0: // 0xAAC2370 - 221
        {
            // __int64 __fastcall sub_AAB4BE0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x780) + 8i64 * (unsigned __int8)(0x5B * a2)) + 0x768i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4E80: // 0xAAC2370 - 222
        {
            // __int64 __fastcall sub_AAB4E80(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x338);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x6D0) >> 0xF;
            return result;

            break;
        }
        case 0xAAB4720: // 0xAAC2370 - 223
        {
            // __int64 __fastcall sub_AAB4720(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x60);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x100) - 0x7A20737C;
            return result;

            break;
        }
        case 0xAAB7A80: // 0xAAC2370 - 224
        {
            // __int64 __fastcall sub_AAB7A80(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x308) + 0x560i64) + 0x4E8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7010: // 0xAAC2370 - 225
        {
            // __int64 __fastcall sub_AAB7010(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x6C8);
            *a1 ^= FuckEnc::CacheRead<_DWORD>(result + 0x510) ^ 0x2C1FE1D5;
            return result;

            break;
        }
        case 0xAAB78D0: // 0xAAC2370 - 226
        {
            // __int64 __fastcall sub_AAB78D0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x430) + 0x5B0i64) + 4i64 * (a2 ^ 3u));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6800: // 0xAAC2370 - 227
        {
            // void __fastcall sub_AAB6800(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= (FuckEnc::CacheRead<_DWORD>(a3 + 0x68) * a2) | 0xC;

            break;
        }
        case 0xAAB7E30: // 0xAAC2370 - 228
        {
            // __int64 __fastcall sub_AAB7E30(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x300) + 0x6F8i64) + 4i64 * ((unsigned __int8)__ROL4__(a2, 0xD) & 0x8B));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7860: // 0xAAC2370 - 229
        {
            // __int64 __fastcall sub_AAB7860(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1F0) + 0x370i64) + 4i64 * (a2 & 0x86));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7980: // 0xAAC2370 - 230
        {
            // __int64 __fastcall sub_AAB7980(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6E0) + 0x28i64) + 0x1C8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7B10: // 0xAAC2370 - 231
        {
            // __int64 __fastcall sub_AAB7B10(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xB8) + 0x4B8i64) + 4i64 * (a2 & 0xAA));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5440: // 0xAAC2370 - 232
        {
            // __int64 __fastcall sub_AAB5440(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x558) ^ 0x929A4944);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5B30: // 0xAAC2370 - 233
        {
            // __int64 __fastcall sub_AAB5B30(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1F0) + 0x6C8i64) + 0x630i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB72E0: // 0xAAC2370 - 234
        {
            // __int64 __fastcall sub_AAB72E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x1A0) + 0x598i64) + 0x110i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4860: // 0xAAC2370 - 235
        {
            // __int64 __fastcall sub_AAB4860(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x598) + 0x1D8i64) + 4i64 * ((a2 ^ 0xFD) & 0x83));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB75C0: // 0xAAC2370 - 236
        {
            // __int64 __fastcall sub_AAB75C0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (FuckEnc::CacheRead<_DWORD>(a3 + 0x80) | 1u) << 0x15;
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7B50: // 0xAAC2370 - 237
        {
            // __int64 __fastcall sub_AAB7B50(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x118) + 8i64 * ((0xE7 * a2) & 0x3F)) + 0x7A0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB4A90: // 0xAAC2370 - 238
        {
            // void __fastcall sub_AAB4A90(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= FuckEnc::CacheRead<_DWORD>(a3 + 0x768) + a2 - 0x462F00FB;

            break;
        }
        case 0xAAB6E60: // 0xAAC2370 - 239
        {
            // __int64 __fastcall sub_AAB6E60(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x58) + 0x320i64) + 4i64 * (a2 ^ 0x98u));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7900: // 0xAAC2370 - 240
        {
            // __int64 __fastcall sub_AAB7900(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x40) + 0xE0i64) + 4i64 * (a2 & 0xA2));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB3F70: // 0xAAC2370 - 241
        {
            // __int64 __fastcall sub_AAB3F70(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4F8) + 8i64 * (FuckEnc::CacheRead<_DWORD>(a3 + 0x280) & 0xF)) + 0x410i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6440: // 0xAAC2370 - 242
        {
            // __int64 __fastcall sub_AAB6440(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6D8) + 0x430i64) + 0x6D0i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB52E0: // 0xAAC2370 - 243
        {
            // __int64 __fastcall sub_AAB52E0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~FuckEnc::CacheRead<_DWORD>(a3 + 0x38) >> 7;
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6400: // 0xAAC2370 - 244
        {
            // __int64 __fastcall sub_AAB6400(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0xB8) + 0x28i64) + 0x1C8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5F00: // 0xAAC2370 - 245
        {
            // __int64 __fastcall sub_AAB5F00(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<_QWORD>(a3 + 0x548);
            *a1 ^= ~FuckEnc::CacheRead<_DWORD>(result + 0x4D8);
            return result;

            break;
        }
        case 0xAAB3F30: // 0xAAC2370 - 246
        {
            // __int64 __fastcall sub_AAB3F30(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = (unsigned int)~(FuckEnc::CacheRead<_DWORD>(a3 + 0x6A0) + 0x4A9F3431);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7FB0: // 0xAAC2370 - 247
        {
            // __int64 __fastcall sub_AAB7FB0(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x3A8) + 8i64 * (a2 ^ 0xCCu)) + 0x310i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5930: // 0xAAC2370 - 248
        {
            // __int64 __fastcall sub_AAB5930(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x6C8) + 0x228i64) + 4i64 * ((unsigned __int8)(0xA6 * a2) & 0x8E));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7D30: // 0xAAC2370 - 249
        {
            // __int64 __fastcall sub_AAB7D30(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x400) + 0x1B8i64) + 0x2F8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB7E80: // 0xAAC2370 - 250
        {
            // __int64 __fastcall sub_AAB7E80(_DWORD *a1, unsigned __int8 a2, __int64 a3)

            a2 = (unsigned __int8)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x4F0) + 8i64 * (a2 & 0xEF)) + 0x6E8i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB5310: // 0xAAC2370 - 251
        {
            // __int64 __fastcall sub_AAB5310(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x200) + 0x600i64) + 4i64 * (unsigned __int8)__ROR4__(a2, 0x13));
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB3FB0: // 0xAAC2370 - 252
        {
            // __int64 __fastcall sub_AAB3FB0(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x418) + 0x450i64) + 0x38i64);
            *a1 ^= result;
            return result;

            break;
        }
        case 0xAAB6500: // 0xAAC2370 - 253
        {
            // void __fastcall sub_AAB6500(_DWORD *a1, int a2, __int64 a3)

            a2 = (int)a2;
            a3 = (__int64)a3;

            *a1 ^= ~(FuckEnc::CacheRead<_DWORD>(a3 + 0x778) ^ a2);

            break;
        }
        case 0xAAB4280: // 0xAAC2370 - 254
        {
            // __int64 __fastcall sub_AAB4280(_DWORD *a1, __int64 a2, __int64 a3)

            a2 = (__int64)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = *a1 ^ FuckEnc::CacheRead<_DWORD>(a3 + 1696) ^ 0xE2DB1E50;
            *a1 = result;
            return result;

            break;
        }
        case 0xAAB56B0: // 0xAAC2370 - 255
        {
            // __int64 __fastcall sub_AAB56B0(_DWORD *a1, char a2, __int64 a3)

            a2 = (char)a2;
            a3 = (__int64)a3;

            __int64 result; // rax

            result = FuckEnc::CacheRead<unsigned int>(FuckEnc::CacheRead<_QWORD>(FuckEnc::CacheRead<_QWORD>(a3 + 0x2E8) + 0x90i64) + 4i64 * (unsigned __int8)(0xE9 * a2));
            *a1 ^= result;
            return result;

            break;
        }
            // Main Function 0xAAC2370 End

        default:
        {
            Utils::Log(2, XorStr("Unknown Call: 0x%llX"), Func);
            break;
        }
        }
    }
} // namespace Calls