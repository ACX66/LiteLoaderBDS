/**
 * @file  BlockEventPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockEventPacket.
 *
 */
class BlockEventPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKEVENTPACKET
public:
    class BlockEventPacket& operator=(class BlockEventPacket const &) = delete;
    BlockEventPacket(class BlockEventPacket const &) = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~BlockEventPacket();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?getId@BlockEventPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @note   Virtual function table index: 2
     * @symbol ?getName@BlockEventPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @note   Virtual function table index: 3
     * @symbol ?write@BlockEventPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @note   Virtual function table index: 6
     * @symbol ?_read@BlockEventPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKEVENTPACKET
#endif
    /**
     * @symbol ??0BlockEventPacket@@QEAA@XZ
     */
    MCAPI BlockEventPacket();
    /**
     * @symbol ??0BlockEventPacket@@QEAA@VBlockPos@@HH@Z
     */
    MCAPI BlockEventPacket(class BlockPos, int, int);

};