/**
 * @file  DimensionStateSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "DimensionStateComponent.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DimensionStateSystem.
 *
 */
class DimensionStateSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSIONSTATESYSTEM
public:
    class DimensionStateSystem& operator=(class DimensionStateSystem const &) = delete;
    DimensionStateSystem(class DimensionStateSystem const &) = delete;
    DimensionStateSystem() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIMENSIONSTATESYSTEM
#endif
    /**
     * @symbol ?isDimensionReady@DimensionStateSystem@@SA_NAEBVEntityContext@@@Z
     */
    MCAPI static bool isDimensionReady(class EntityContext const &);
    /**
     * @symbol ?setDimensionState@DimensionStateSystem@@SAXAEAVEntityContext@@W4DimensionState@DimensionStateComponent@@@Z
     */
    MCAPI static void setDimensionState(class EntityContext &, enum DimensionStateComponent::DimensionState);

};