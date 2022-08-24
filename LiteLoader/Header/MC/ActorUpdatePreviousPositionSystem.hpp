/**
 * @file  ActorUpdatePreviousPositionSystem.hpp
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
 * @brief MC class ActorUpdatePreviousPositionSystem.
 *
 */
class ActorUpdatePreviousPositionSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORUPDATEPREVIOUSPOSITIONSYSTEM
public:
    class ActorUpdatePreviousPositionSystem& operator=(class ActorUpdatePreviousPositionSystem const &) = delete;
    ActorUpdatePreviousPositionSystem(class ActorUpdatePreviousPositionSystem const &) = delete;
    ActorUpdatePreviousPositionSystem() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~ActorUpdatePreviousPositionSystem();
    /**
     * @note   Virtual function table index: 1
     * @symbol 
     */
    virtual void __unk_vfn_1();
    /**
     * @note   Virtual function table index: 2
     * @symbol ?tick@ActorUpdatePreviousPositionSystem@@UEAAXAEAVEntityRegistry@@@Z
     */
    virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORUPDATEPREVIOUSPOSITIONSYSTEM
#endif

};