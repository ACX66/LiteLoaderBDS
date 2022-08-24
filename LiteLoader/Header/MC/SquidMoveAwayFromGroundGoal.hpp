/**
 * @file  SquidMoveAwayFromGroundGoal.hpp
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
 * @brief MC class SquidMoveAwayFromGroundGoal.
 *
 */
class SquidMoveAwayFromGroundGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SQUIDMOVEAWAYFROMGROUNDGOAL
public:
    class SquidMoveAwayFromGroundGoal& operator=(class SquidMoveAwayFromGroundGoal const &) = delete;
    SquidMoveAwayFromGroundGoal(class SquidMoveAwayFromGroundGoal const &) = delete;
    SquidMoveAwayFromGroundGoal() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~SquidMoveAwayFromGroundGoal();
    /**
     * @note   Virtual function table index: 1
     * @symbol 
     */
    virtual void __unk_vfn_1();
    /**
     * @note   Virtual function table index: 2
     * @symbol 
     */
    virtual void __unk_vfn_2();
    /**
     * @note   Virtual function table index: 3
     * @symbol 
     */
    virtual void __unk_vfn_3();
    /**
     * @note   Virtual function table index: 4
     * @symbol ?start@SquidMoveAwayFromGroundGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @note   Virtual function table index: 5
     * @symbol 
     */
    virtual void __unk_vfn_5();
    /**
     * @note   Virtual function table index: 6
     * @symbol 
     */
    virtual void __unk_vfn_6();
    /**
     * @note   Virtual function table index: 7
     * @symbol ?appendDebugInfo@SquidMoveAwayFromGroundGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SQUIDMOVEAWAYFROMGROUNDGOAL
    /**
     * @note   Virtual function table index: -1
     * @symbol ?canContinueToUse@SquidMoveAwayFromGroundGoal@@UEAA_NXZ
     */
    MCVAPI bool canContinueToUse();
    /**
     * @note   Virtual function table index: -1
     * @symbol ?canUse@SquidMoveAwayFromGroundGoal@@UEAA_NXZ
     */
    MCVAPI bool canUse();
    /**
     * @note   Virtual function table index: -1
     * @symbol ?stop@SquidMoveAwayFromGroundGoal@@UEAAXXZ
     */
    MCVAPI void stop();
    /**
     * @note   Virtual function table index: -1
     * @symbol ?tick@SquidMoveAwayFromGroundGoal@@UEAAXXZ
     */
    MCVAPI void tick();
#endif

};