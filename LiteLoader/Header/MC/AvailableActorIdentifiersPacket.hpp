// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_AVAILABLEACTORIDENTIFIERSPACKET
#include "Extra/AvailableActorIdentifiersPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART_AVAILABLEACTORIDENTIFIERSPACKET
class AvailableActorIdentifiersPacket {
#include "Extra/AvailableActorIdentifiersPacketAPI.hpp"
public:
    /*0*/ virtual ~AvailableActorIdentifiersPacket();
    /*1*/ virtual int /*enum enum MinecraftPacketIds*/ getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*4*/ virtual struct ExtendedStreamReadResult readExtended(class ReadOnlyBinaryStream&);
    /*5*/ virtual void __unk_vfn_0();
    /*6*/ virtual int /*enum enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);


protected:

private:
};