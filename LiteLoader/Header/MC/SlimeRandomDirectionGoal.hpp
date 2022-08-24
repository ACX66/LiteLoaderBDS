/**
 * @file  SlimeRandomDirectionGoal.hpp
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
 * @brief MC class SlimeRandomDirectionGoal.
 *
 */
class SlimeRandomDirectionGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLIMERANDOMDIRECTIONGOAL
public:
    class SlimeRandomDirectionGoal& operator=(class SlimeRandomDirectionGoal const &) = delete;
    SlimeRandomDirectionGoal(class SlimeRandomDirectionGoal const &) = delete;
    SlimeRandomDirectionGoal() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~SlimeRandomDirectionGoal();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?canUse@SlimeRandomDirectionGoal@@UEAA_NXZ
     */
    virtual bool canUse();
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
     * @symbol 
     */
    virtual void __unk_vfn_4();
    /**
     * @note   Virtual function table index: 5
     * @symbol 
     */
    virtual void __unk_vfn_5();
    /**
     * @note   Virtual function table index: 6
     * @symbol ?tick@SlimeRandomDirectionGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @note   Virtual function table index: 7
     * @symbol ?appendDebugInfo@SlimeRandomDirectionGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SLIMERANDOMDIRECTIONGOAL
#endif
    /**
     * @symbol ??0SlimeRandomDirectionGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI SlimeRandomDirectionGoal(class Mob &);

};