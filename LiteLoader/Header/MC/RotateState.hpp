/**
 * @file  RotateState.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "PetSleepWithOwnerState.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RotateState.
 *
 */
class RotateState : public PetSleepWithOwnerState {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ROTATESTATE
public:
    class RotateState& operator=(class RotateState const &) = delete;
    RotateState(class RotateState const &) = delete;
    RotateState() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~RotateState();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?tick@RotateState@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @note   Virtual function table index: 2
     * @symbol ?start@PetSleepWithOwnerState@@UEAAXXZ
     */
    virtual void start();
    /**
     * @note   Virtual function table index: 3
     * @symbol ?stop@PetSleepWithOwnerState@@UEAAXXZ
     */
    virtual void stop();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ROTATESTATE
#endif

};