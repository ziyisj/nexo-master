#pragma once

#include <Hack/FuckEnc.h>
#include <IDA/ida_defs.h>

class ENC
{
public:
    static void Decrypt(uint8_t Type, unsigned int* Data, unsigned int Size, uint16_t Handle, bool Lock = false, bool DeBug = false, uint64_t DeBugFunc = 0, uint64_t DeBugBase = 0);
};