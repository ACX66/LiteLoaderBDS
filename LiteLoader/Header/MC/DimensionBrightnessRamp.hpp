/**
 * @file  DimensionBrightnessRamp.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DimensionBrightnessRamp.
 *
 */
class DimensionBrightnessRamp {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSIONBRIGHTNESSRAMP
public:
    class DimensionBrightnessRamp& operator=(class DimensionBrightnessRamp const &) = delete;
    DimensionBrightnessRamp(class DimensionBrightnessRamp const &) = delete;
    DimensionBrightnessRamp() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~DimensionBrightnessRamp();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?buildBrightnessRamp@DimensionBrightnessRamp@@UEAAXXZ
     */
    virtual void buildBrightnessRamp();
    /**
     * @note   Virtual function table index: 2
     * @symbol ?getBaseAmbientValue@DimensionBrightnessRamp@@UEBAMXZ
     */
    virtual float getBaseAmbientValue() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIMENSIONBRIGHTNESSRAMP
#endif
    /**
     * @symbol ?getBrightnessRampValue@DimensionBrightnessRamp@@QEBAMH@Z
     */
    MCAPI float getBrightnessRampValue(int) const;

};