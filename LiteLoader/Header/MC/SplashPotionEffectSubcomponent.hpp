/**
 * @file  SplashPotionEffectSubcomponent.hpp
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
 * @brief MC class SplashPotionEffectSubcomponent.
 *
 */
class SplashPotionEffectSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPLASHPOTIONEFFECTSUBCOMPONENT
public:
    class SplashPotionEffectSubcomponent& operator=(class SplashPotionEffectSubcomponent const &) = delete;
    SplashPotionEffectSubcomponent(class SplashPotionEffectSubcomponent const &) = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~SplashPotionEffectSubcomponent();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?readfromJSON@SplashPotionEffectSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
     */
    virtual void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @note   Virtual function table index: 2
     * @symbol ?writetoJSON@SplashPotionEffectSubcomponent@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void writetoJSON(class Json::Value &) const;
    /**
     * @note   Virtual function table index: 3
     * @symbol ?doOnHitEffect@SplashPotionEffectSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @note   Virtual function table index: 4
     * @symbol ?getName@SplashPotionEffectSubcomponent@@UEAAPEBDXZ
     */
    virtual char const * getName();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPLASHPOTIONEFFECTSUBCOMPONENT
#endif
    /**
     * @symbol ??0SplashPotionEffectSubcomponent@@QEAA@XZ
     */
    MCAPI SplashPotionEffectSubcomponent();
    /**
     * @symbol ?applyMobEffects@SplashPotionEffectSubcomponent@@QEAAXAEBVMobEffectInstance@@AEBV?$vector@PEAVActor@@V?$allocator@PEAVActor@@@std@@@std@@AEAVActor@@AEBV?$shared_ptr@$$CBVPotion@@@4@MPEAVMobEffect@@AEAVHitResult@@H@Z
     */
    MCAPI void applyMobEffects(class MobEffectInstance const &, std::vector<class Actor *> const &, class Actor &, class std::shared_ptr<class Potion const> const &, float, class MobEffect *, class HitResult &, int);

};