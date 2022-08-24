/**
 * @file  SnackGoal.hpp
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
 * @brief MC class SnackGoal.
 *
 */
class SnackGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SNACKGOAL
public:
    class SnackGoal& operator=(class SnackGoal const &) = delete;
    SnackGoal(class SnackGoal const &) = delete;
    SnackGoal() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~SnackGoal();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?canUse@SnackGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @note   Virtual function table index: 2
     * @symbol ?canContinueToUse@SnackGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @note   Virtual function table index: 3
     * @symbol 
     */
    virtual void __unk_vfn_3();
    /**
     * @note   Virtual function table index: 4
     * @symbol ?start@SnackGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @note   Virtual function table index: 5
     * @symbol ?stop@SnackGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @note   Virtual function table index: 6
     * @symbol ?tick@SnackGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @note   Virtual function table index: 7
     * @symbol ?appendDebugInfo@SnackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
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
     * @note   Virtual function table index: 10
     * @symbol ?getRandomEatingEnd@SnackGoal@@MEBAHXZ
     */
    virtual int getRandomEatingEnd() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SNACKGOAL
#endif
    /**
     * @symbol ??0SnackGoal@@QEAA@AEAVMob@@AEBV?$vector@VItemDescriptor@@V?$allocator@VItemDescriptor@@@std@@@std@@MMM@Z
     */
    MCAPI SnackGoal(class Mob &, std::vector<class ItemDescriptor> const &, float, float, float);

//private:
    /**
     * @symbol ?_hasSnackableItems@SnackGoal@@AEAA_NXZ
     */
    MCAPI bool _hasSnackableItems();
    /**
     * @symbol ?_isSnackableItem@SnackGoal@@AEBA_NAEBVItemStack@@@Z
     */
    MCAPI bool _isSnackableItem(class ItemStack const &) const;
    /**
     * @symbol ?_updateHand@SnackGoal@@AEAAXAEBVItemStack@@@Z
     */
    MCAPI void _updateHand(class ItemStack const &);

private:
MCAPI static int const CHEW_CHANCE;
MCAPI static int const EATING_TIME;
MCAPI static float const PATH_RANGE;
MCAPI static int const RANDOM_EATING_END;
MCAPI static int const RANDOM_EATING_START;
MCAPI static float const SEARCH_SIZE;
MCAPI static float const STOP_DIST_SQRD;

};