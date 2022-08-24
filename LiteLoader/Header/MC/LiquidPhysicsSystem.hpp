/**
 * @file  LiquidPhysicsSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LiquidPhysicsSystem.
 *
 */
class LiquidPhysicsSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LIQUIDPHYSICSSYSTEM
public:
    class LiquidPhysicsSystem& operator=(class LiquidPhysicsSystem const &) = delete;
    LiquidPhysicsSystem(class LiquidPhysicsSystem const &) = delete;
    LiquidPhysicsSystem() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LIQUIDPHYSICSSYSTEM
#endif
    /**
     * @symbol ?applyPhysics@LiquidPhysicsSystem@@SAXW4MaterialType@@AEBVIConstBlockSource@@AEBUAABBShapeComponent@@AEAUStateVectorComponent@@@Z
     */
    MCAPI static void applyPhysics(enum MaterialType, class IConstBlockSource const &, struct AABBShapeComponent const &, struct StateVectorComponent &);

};