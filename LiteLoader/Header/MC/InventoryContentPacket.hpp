// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Packet.hpp"
#define EXTRA_INCLUDE_PART_INVENTORYCONTENTPACKET
#include "Extra/InventoryContentPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART_INVENTORYCONTENTPACKET
class InventoryContentPacket : public Packet {
#include "Extra/InventoryContentPacketAPI.hpp"
public:
    /*0*/ virtual ~InventoryContentPacket();
    /*1*/ virtual int /*enum enum MinecraftPacketIds*/ getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*4*/ virtual bool disallowBatching() const;
    /*5*/ virtual int /*enum enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);

    MCAPI static class InventoryContentPacket fromPlayerInventoryId(enum ContainerID, class Player&);

protected:

private:
};