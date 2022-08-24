/**
 * @file  PlayerEnchantOptionsPacket.hpp
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
 * @brief MC class PlayerEnchantOptionsPacket.
 *
 */
class PlayerEnchantOptionsPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERENCHANTOPTIONSPACKET
public:
    class PlayerEnchantOptionsPacket& operator=(class PlayerEnchantOptionsPacket const &) = delete;
    PlayerEnchantOptionsPacket(class PlayerEnchantOptionsPacket const &) = delete;
    PlayerEnchantOptionsPacket() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~PlayerEnchantOptionsPacket();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?getId@PlayerEnchantOptionsPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @note   Virtual function table index: 2
     * @symbol ?getName@PlayerEnchantOptionsPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @note   Virtual function table index: 3
     * @symbol ?write@PlayerEnchantOptionsPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @note   Virtual function table index: 6
     * @symbol ?_read@PlayerEnchantOptionsPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERENCHANTOPTIONSPACKET
#endif

};