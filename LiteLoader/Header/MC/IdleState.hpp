/**
 * @file  IdleState.hpp
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
 * @brief MC class IdleState.
 *
 */
class IdleState : public PetSleepWithOwnerState {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IDLESTATE
public:
    class IdleState& operator=(class IdleState const &) = delete;
    IdleState(class IdleState const &) = delete;
    IdleState() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~IdleState();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?tick@IdleState@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @note   Virtual function table index: 2
     * @symbol ?start@IdleState@@UEAAXXZ
     */
    virtual void start();
    /**
     * @note   Virtual function table index: 3
     * @symbol ?stop@PetSleepWithOwnerState@@UEAAXXZ
     */
    virtual void stop();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IDLESTATE
#endif
    /**
     * @symbol ?create@IdleState@@SA?AV?$unique_ptr@VIdleState@@U?$default_delete@VIdleState@@@std@@@std@@AEAVPetSleepWithOwnerGoal@@@Z
     */
    MCAPI static std::unique_ptr<class IdleState> create(class PetSleepWithOwnerGoal &);

};