/**
 * @file  BuoyancySystem.hpp
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
 * @brief MC class BuoyancySystem.
 *
 */
class BuoyancySystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BUOYANCYSYSTEM
public:
    class BuoyancySystem& operator=(class BuoyancySystem const &) = delete;
    BuoyancySystem(class BuoyancySystem const &) = delete;
    BuoyancySystem() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~BuoyancySystem();
    /**
     * @note   Virtual function table index: 1
     * @symbol 
     */
    virtual void __unk_vfn_1();
    /**
     * @note   Virtual function table index: 2
     * @symbol ?tick@BuoyancySystem@@UEAAXAEAVEntityRegistry@@@Z
     */
    virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BUOYANCYSYSTEM
#endif

};