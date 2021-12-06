// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_VEGETATIONPATCHFEATURE
#include "Extra/VegetationPatchFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_VEGETATIONPATCHFEATURE
class VegetationPatchFeature {
#include "Extra/VegetationPatchFeatureAPI.hpp"
public:
    /*0*/ virtual ~VegetationPatchFeature();
    /*1*/ virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;


protected:

private:
    MCAPI bool _isExposedDirection(class IBlockWorldGenAPI&, class BlockPos const&, unsigned char) const;
    MCAPI std::vector<class BlockPos> _placeGroundPatch(class IBlockWorldGenAPI&, class Random&, class BlockPos const&, int, int) const;
};