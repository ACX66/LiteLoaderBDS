/**
 * @file  SleepGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MoveToPOIGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SleepGoal.
 *
 */
class SleepGoal : public MoveToPOIGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLEEPGOAL
public:
    class SleepGoal& operator=(class SleepGoal const &) = delete;
    SleepGoal(class SleepGoal const &) = delete;
    SleepGoal() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~SleepGoal();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?canUse@SleepGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @note   Virtual function table index: 2
     * @symbol ?canContinueToUse@SleepGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @note   Virtual function table index: 3
     * @symbol 
     */
    virtual void __unk_vfn_3();
    /**
     * @note   Virtual function table index: 4
     * @symbol ?start@SleepGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @note   Virtual function table index: 5
     * @symbol ?stop@SleepGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @note   Virtual function table index: 6
     * @symbol ?tick@SleepGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @note   Virtual function table index: 7
     * @symbol ?appendDebugInfo@SleepGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @note   Virtual function table index: 8
     * @symbol 
     */
    virtual void __unk_vfn_8();
    /**
     * @note   Virtual function table index: 9
     * @symbol 
     */
    virtual void __unk_vfn_9();
    /**
     * @note   Virtual function table index: 16
     * @symbol ?_getRepathTime@SleepGoal@@EEBA_KXZ
     */
    virtual unsigned __int64 _getRepathTime() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SLEEPGOAL
#endif
    /**
     * @symbol ??0SleepGoal@@QEAA@AEAVMob@@MMM_NMHM@Z
     */
    MCAPI SleepGoal(class Mob &, float, float, float, bool, float, int, float);

//private:
    /**
     * @symbol ?_lockPosToBedPos@SleepGoal@@AEAAXXZ
     */
    MCAPI void _lockPosToBedPos();
    /**
     * @symbol ?_setSleepVariables@SleepGoal@@AEAAXXZ
     */
    MCAPI void _setSleepVariables();
    /**
     * @symbol ?_wakeUp@SleepGoal@@AEAAXXZ
     */
    MCAPI void _wakeUp();

private:

};