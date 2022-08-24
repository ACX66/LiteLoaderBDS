/**
 * @file  SculkVeinBlockBehavior.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SculkVeinBlockBehavior.
 *
 */
class SculkVeinBlockBehavior {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCULKVEINBLOCKBEHAVIOR
public:
    class SculkVeinBlockBehavior& operator=(class SculkVeinBlockBehavior const &) = delete;
    SculkVeinBlockBehavior(class SculkVeinBlockBehavior const &) = delete;
    SculkVeinBlockBehavior() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol ?updateDecayDelay@SculkVeinBlockBehavior@@UEBAHH@Z
     */
    virtual int updateDecayDelay(int) const;
    /**
     * @note   Virtual function table index: 1
     * @symbol ?updateFacingData@SculkVeinBlockBehavior@@UEBAHHAEBVBlock@@@Z
     */
    virtual int updateFacingData(int, class Block const &) const;
    /**
     * @note   Virtual function table index: 2
     * @symbol ?canChangeBlockOnSpread@SculkVeinBlockBehavior@@UEBA_NXZ
     */
    virtual bool canChangeBlockOnSpread() const;
    /**
     * @note   Virtual function table index: 3
     * @symbol ?attemptSpreadVeins@SculkVeinBlockBehavior@@UEBA_NAEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEBVBlock@@HAEAVSculkSpreader@@@Z
     */
    virtual bool attemptSpreadVeins(class IBlockWorldGenAPI &, class BlockPos const &, class Block const &, int, class SculkSpreader &) const;
    /**
     * @note   Virtual function table index: 4
     * @symbol ?attemptUseCharge@SculkVeinBlockBehavior@@UEBAHAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@2HHAEAVRandom@@AEAVSculkSpreader@@_N@Z
     */
    virtual int attemptUseCharge(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &, class BlockPos const &, int, int, class Random &, class SculkSpreader &, bool) const;
    /**
     * @note   Virtual function table index: 5
     * @symbol ?onDischarged@SculkVeinBlockBehavior@@UEBAXAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onDischarged(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCULKVEINBLOCKBEHAVIOR
#endif

//private:
    /**
     * @symbol ?_attemptPlaceSculk@SculkVeinBlockBehavior@@CA_NAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@AEAVSculkSpreader@@AEAVRandom@@@Z
     */
    MCAPI static bool _attemptPlaceSculk(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &, class SculkSpreader &, class Random &);
    /**
     * @symbol ?_cleanUpVeinsWithSculkSubstrate@SculkVeinBlockBehavior@@CAXAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI static void _cleanUpVeinsWithSculkSubstrate(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &);

private:

};