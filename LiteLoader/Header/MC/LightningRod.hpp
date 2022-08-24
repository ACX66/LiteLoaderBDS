/**
 * @file  LightningRod.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LightningRod.
 *
 */
class LightningRod : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LIGHTNINGROD
public:
    class LightningRod& operator=(class LightningRod const &) = delete;
    LightningRod(class LightningRod const &) = delete;
    LightningRod() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~LightningRod();
    /**
     * @note   Virtual function table index: 15
     * @symbol ?onProjectileHit@LightningRod@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVActor@@@Z
     */
    virtual void onProjectileHit(class BlockSource &, class BlockPos const &, class Actor const &) const;
    /**
     * @note   Virtual function table index: 16
     * @symbol ?onLightningHit@LightningRod@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onLightningHit(class BlockSource &, class BlockPos const &) const;
    /**
     * @note   Virtual function table index: 19
     * @symbol 
     */
    virtual void __unk_vfn_19();
    /**
     * @note   Virtual function table index: 25
     * @symbol ?canConnect@LightningRod@@UEBA_NAEBVBlock@@E0@Z
     */
    virtual bool canConnect(class Block const &, unsigned char, class Block const &) const;
    /**
     * @note   Virtual function table index: 29
     * @symbol 
     */
    virtual void __unk_vfn_29();
    /**
     * @note   Virtual function table index: 30
     * @symbol 
     */
    virtual void __unk_vfn_30();
    /**
     * @note   Virtual function table index: 32
     * @symbol 
     */
    virtual void __unk_vfn_32();
    /**
     * @note   Virtual function table index: 33
     * @symbol 
     */
    virtual void __unk_vfn_33();
    /**
     * @note   Virtual function table index: 34
     * @symbol 
     */
    virtual void __unk_vfn_34();
    /**
     * @note   Virtual function table index: 36
     * @symbol 
     */
    virtual void __unk_vfn_36();
    /**
     * @note   Virtual function table index: 37
     * @symbol 
     */
    virtual void __unk_vfn_37();
    /**
     * @note   Virtual function table index: 38
     * @symbol 
     */
    virtual void __unk_vfn_38();
    /**
     * @note   Virtual function table index: 39
     * @symbol 
     */
    virtual void __unk_vfn_39();
    /**
     * @note   Virtual function table index: 40
     * @symbol 
     */
    virtual void __unk_vfn_40();
    /**
     * @note   Virtual function table index: 41
     * @symbol 
     */
    virtual void __unk_vfn_41();
    /**
     * @note   Virtual function table index: 42
     * @symbol 
     */
    virtual void __unk_vfn_42();
    /**
     * @note   Virtual function table index: 44
     * @symbol 
     */
    virtual void __unk_vfn_44();
    /**
     * @note   Virtual function table index: 45
     * @symbol 
     */
    virtual void __unk_vfn_45();
    /**
     * @note   Virtual function table index: 46
     * @symbol 
     */
    virtual void __unk_vfn_46();
    /**
     * @note   Virtual function table index: 47
     * @symbol 
     */
    virtual void __unk_vfn_47();
    /**
     * @note   Virtual function table index: 48
     * @symbol 
     */
    virtual void __unk_vfn_48();
    /**
     * @note   Virtual function table index: 49
     * @symbol 
     */
    virtual void __unk_vfn_49();
    /**
     * @note   Virtual function table index: 51
     * @symbol ?isSignalSource@LightningRod@@UEBA_NXZ
     */
    virtual bool isSignalSource() const;
    /**
     * @note   Virtual function table index: 59
     * @symbol 
     */
    virtual void __unk_vfn_59();
    /**
     * @note   Virtual function table index: 60
     * @symbol 
     */
    virtual void __unk_vfn_60();
    /**
     * @note   Virtual function table index: 61
     * @symbol ?canContainLiquid@LightningRod@@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
    /**
     * @note   Virtual function table index: 62
     * @symbol ?shouldConnectToRedstone@LightningRod@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@H@Z
     */
    virtual bool shouldConnectToRedstone(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @note   Virtual function table index: 73
     * @symbol 
     */
    virtual void __unk_vfn_73();
    /**
     * @note   Virtual function table index: 77
     * @symbol ?setupRedstoneComponent@LightningRod@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /**
     * @note   Virtual function table index: 80
     * @symbol 
     */
    virtual void __unk_vfn_80();
    /**
     * @note   Virtual function table index: 94
     * @symbol ?breaksFallingBlocks@LightningRod@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
     */
    virtual bool breaksFallingBlocks(class Block const &, class BaseGameVersion) const;
    /**
     * @note   Virtual function table index: 101
     * @symbol ?getResourceItem@LightningRod@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @note   Virtual function table index: 102
     * @symbol ?asItemInstance@LightningRod@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @note   Virtual function table index: 105
     * @symbol 
     */
    virtual void __unk_vfn_105();
    /**
     * @note   Virtual function table index: 106
     * @symbol ?getPlacementBlock@LightningRod@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
     */
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @note   Virtual function table index: 124
     * @symbol 
     */
    virtual void __unk_vfn_124();
    /**
     * @note   Virtual function table index: 126
     * @symbol 
     */
    virtual void __unk_vfn_126();
    /**
     * @note   Virtual function table index: 127
     * @symbol 
     */
    virtual void __unk_vfn_127();
    /**
     * @note   Virtual function table index: 132
     * @symbol 
     */
    virtual void __unk_vfn_132();
    /**
     * @note   Virtual function table index: 144
     * @symbol ?getVisualShape@LightningRod@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@_N@Z
     */
    virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /**
     * @note   Virtual function table index: 148
     * @symbol 
     */
    virtual void __unk_vfn_148();
    /**
     * @note   Virtual function table index: 152
     * @symbol ?animateTick@LightningRod@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @note   Virtual function table index: 157
     * @symbol 
     */
    virtual void __unk_vfn_157();
    /**
     * @note   Virtual function table index: 158
     * @symbol ?getSilkTouchItemInstance@LightningRod@@UEBA?AVItemInstance@@AEBVBlock@@@Z
     */
    virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
    /**
     * @note   Virtual function table index: 168
     * @symbol 
     */
    virtual void __unk_vfn_168();
    /**
     * @note   Virtual function table index: 169
     * @symbol 
     */
    virtual void __unk_vfn_169();
    /**
     * @note   Virtual function table index: 170
     * @symbol 
     */
    virtual void __unk_vfn_170();
    /**
     * @note   Virtual function table index: 171
     * @symbol ?onPlace@LightningRod@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @note   Virtual function table index: 174
     * @symbol ?tick@LightningRod@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @note   Virtual function table index: 177
     * @symbol 
     */
    virtual void __unk_vfn_177();
    /**
     * @note   Virtual function table index: 188
     * @symbol 
     */
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LIGHTNINGROD
#endif
    /**
     * @symbol ??0LightningRod@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
     */
    MCAPI LightningRod(std::string const &, int, class Material const &);

};