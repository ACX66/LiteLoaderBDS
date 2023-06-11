/**
 * @file  CraftingDataPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CraftingDataPacket.
 *
 */
class CraftingDataPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTINGDATAPACKET
public:
    class CraftingDataPacket& operator=(class CraftingDataPacket const &) = delete;
    CraftingDataPacket(class CraftingDataPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@CraftingDataPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@CraftingDataPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@CraftingDataPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@CraftingDataPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0CraftingDataPacket\@\@QEAA\@XZ
     */
    MCAPI CraftingDataPacket();
    /**
     * @symbol ?prepareFromRecipes\@CraftingDataPacket\@\@SA?AV?$unique_ptr\@VCraftingDataPacket\@\@U?$default_delete\@VCraftingDataPacket\@\@\@std\@\@\@std\@\@AEBVRecipes\@\@_N\@Z
     */
    MCAPI static std::unique_ptr<class CraftingDataPacket> prepareFromRecipes(class Recipes const &, bool);

};
