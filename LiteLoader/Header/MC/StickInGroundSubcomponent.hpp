/**
 * @file  StickInGroundSubcomponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StickInGroundSubcomponent.
 *
 */
class StickInGroundSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STICKINGROUNDSUBCOMPONENT
public:
    class StickInGroundSubcomponent& operator=(class StickInGroundSubcomponent const &) = delete;
    StickInGroundSubcomponent(class StickInGroundSubcomponent const &) = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~StickInGroundSubcomponent();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?readfromJSON@StickInGroundSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
     */
    virtual void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @note   Virtual function table index: 2
     * @symbol ?writetoJSON@StickInGroundSubcomponent@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void writetoJSON(class Json::Value &) const;
    /**
     * @note   Virtual function table index: 3
     * @symbol ?doOnHitEffect@StickInGroundSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @note   Virtual function table index: 4
     * @symbol ?getName@StickInGroundSubcomponent@@UEAAPEBDXZ
     */
    virtual char const * getName();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STICKINGROUNDSUBCOMPONENT
#endif
    /**
     * @symbol ??0StickInGroundSubcomponent@@QEAA@XZ
     */
    MCAPI StickInGroundSubcomponent();

};