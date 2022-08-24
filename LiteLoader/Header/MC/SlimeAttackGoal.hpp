/**
 * @file  SlimeAttackGoal.hpp
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
 * @brief MC class SlimeAttackGoal.
 *
 */
class SlimeAttackGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLIMEATTACKGOAL
public:
    class SlimeAttackGoal& operator=(class SlimeAttackGoal const &) = delete;
    SlimeAttackGoal(class SlimeAttackGoal const &) = delete;
    SlimeAttackGoal() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~SlimeAttackGoal();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?canUse@SlimeAttackGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @note   Virtual function table index: 2
     * @symbol ?canContinueToUse@SlimeAttackGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @note   Virtual function table index: 3
     * @symbol 
     */
    virtual void __unk_vfn_3();
    /**
     * @note   Virtual function table index: 4
     * @symbol ?start@SlimeAttackGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @note   Virtual function table index: 5
     * @symbol 
     */
    virtual void __unk_vfn_5();
    /**
     * @note   Virtual function table index: 6
     * @symbol ?tick@SlimeAttackGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @note   Virtual function table index: 7
     * @symbol ?appendDebugInfo@SlimeAttackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SLIMEATTACKGOAL
#endif
    /**
     * @symbol ??0SlimeAttackGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI SlimeAttackGoal(class Mob &);

};