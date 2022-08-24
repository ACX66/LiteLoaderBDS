/**
 * @file  CoralCrustFeature.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CoralCrustFeature.
 *
 */
class CoralCrustFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORALCRUSTFEATURE
public:
    class CoralCrustFeature& operator=(class CoralCrustFeature const &) = delete;
    CoralCrustFeature(class CoralCrustFeature const &) = delete;
    CoralCrustFeature() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~CoralCrustFeature();
    /**
     * @note   Virtual function table index: 3
     * @symbol ?place@CoralCrustFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CORALCRUSTFEATURE
#endif

//private:
    /**
     * @symbol ?_getCropOffsetFromRot@CoralCrustFeature@@AEBA?AVBlockPos@@HH@Z
     */
    MCAPI class BlockPos _getCropOffsetFromRot(int, int) const;
    /**
     * @symbol ?_getOffsetFromRot@CoralCrustFeature@@AEBA?AVBlockPos@@HH@Z
     */
    MCAPI class BlockPos _getOffsetFromRot(int, int) const;
    /**
     * @symbol ?_placeCoral@CoralCrustFeature@@AEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@AEAV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@AEAV?$vector@U?$pair@VBlockPos@@E@std@@V?$allocator@U?$pair@VBlockPos@@E@std@@@2@@6@H@Z
     */
    MCAPI void _placeCoral(class BlockSource &, class BlockPos const &, class Random &, std::vector<class BlockPos> &, std::vector<struct std::pair<class BlockPos, unsigned char>> &, int) const;
    /**
     * @symbol ?_placeCoralBase@CoralCrustFeature@@AEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@AEAVLegacyStructureTemplate@@AEAVLegacyStructureSettings@@@Z
     */
    MCAPI void _placeCoralBase(class BlockSource &, class BlockPos const &, class Random &, class LegacyStructureTemplate &, class LegacyStructureSettings &) const;
    /**
     * @symbol ?_placeSideDecorations@CoralCrustFeature@@AEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@E@Z
     */
    MCAPI void _placeSideDecorations(class BlockSource &, class BlockPos const &, class Random &, unsigned char) const;

private:

};