/**
 * @file  NpcDialoguePacket.hpp
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
 * @brief MC class NpcDialoguePacket.
 *
 */
class NpcDialoguePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCDIALOGUEPACKET
public:
    class NpcDialoguePacket& operator=(class NpcDialoguePacket const &) = delete;
    NpcDialoguePacket(class NpcDialoguePacket const &) = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~NpcDialoguePacket();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?getId@NpcDialoguePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @note   Virtual function table index: 2
     * @symbol ?getName@NpcDialoguePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @note   Virtual function table index: 3
     * @symbol ?write@NpcDialoguePacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @note   Virtual function table index: 6
     * @symbol ?_read@NpcDialoguePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NPCDIALOGUEPACKET
#endif
    /**
     * @symbol ??0NpcDialoguePacket@@QEAA@XZ
     */
    MCAPI NpcDialoguePacket();
    /**
     * @symbol ??0NpcDialoguePacket@@QEAA@UActorUniqueID@@@Z
     */
    MCAPI NpcDialoguePacket(struct ActorUniqueID);
    /**
     * @symbol ?initializePacket@NpcDialoguePacket@@SA_NAEAV1@PEBVNpcDialogueStorage@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static bool initializePacket(class NpcDialoguePacket &, class NpcDialogueStorage const *, std::string const &);

};