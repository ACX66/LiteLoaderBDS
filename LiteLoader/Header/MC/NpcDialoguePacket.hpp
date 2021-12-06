// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Packet.hpp"
#define EXTRA_INCLUDE_PART_NPCDIALOGUEPACKET
#include "Extra/NpcDialoguePacketAPI.hpp"
#undef EXTRA_INCLUDE_PART_NPCDIALOGUEPACKET
class NpcDialoguePacket : public Packet {
#include "Extra/NpcDialoguePacketAPI.hpp"
public:
    /*0*/ virtual ~NpcDialoguePacket();
    /*1*/ virtual int /*enum enum MinecraftPacketIds*/ getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*4*/ virtual bool disallowBatching() const;
    /*5*/ virtual int /*enum enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);

    MCAPI static bool initializePacket(class NpcDialoguePacket&, class NpcDialogueStorage const*, std::string const&);

protected:

private:
};