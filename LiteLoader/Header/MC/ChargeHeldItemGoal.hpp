/**
 * @file  ChargeHeldItemGoal.hpp
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
 * @brief MC class ChargeHeldItemGoal.
 *
 */
class ChargeHeldItemGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHARGEHELDITEMGOAL
public:
    class ChargeHeldItemGoal& operator=(class ChargeHeldItemGoal const &) = delete;
    ChargeHeldItemGoal(class ChargeHeldItemGoal const &) = delete;
    ChargeHeldItemGoal() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~ChargeHeldItemGoal();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?canUse@ChargeHeldItemGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @note   Virtual function table index: 2
     * @symbol ?canContinueToUse@ChargeHeldItemGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @note   Virtual function table index: 3
     * @symbol 
     */
    virtual void __unk_vfn_3();
    /**
     * @note   Virtual function table index: 4
     * @symbol ?start@ChargeHeldItemGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @note   Virtual function table index: 5
     * @symbol ?stop@ChargeHeldItemGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @note   Virtual function table index: 6
     * @symbol ?tick@ChargeHeldItemGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @note   Virtual function table index: 7
     * @symbol ?appendDebugInfo@ChargeHeldItemGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHARGEHELDITEMGOAL
#endif
    /**
     * @symbol ??0ChargeHeldItemGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI ChargeHeldItemGoal(class Mob &);

};