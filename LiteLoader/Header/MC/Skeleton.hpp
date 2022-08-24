/**
 * @file  Skeleton.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "HumanoidMonster.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Skeleton.
 *
 */
class Skeleton : public HumanoidMonster {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SKELETON
public:
    class Skeleton& operator=(class Skeleton const &) = delete;
    Skeleton(class Skeleton const &) = delete;
    Skeleton() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 14
     * @symbol 
     */
    virtual ~Skeleton();
    /**
     * @note   Virtual function table index: 41
     * @symbol 
     */
    virtual void __unk_vfn_41();
    /**
     * @note   Virtual function table index: 49
     * @symbol ?normalTick@Skeleton@@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @note   Virtual function table index: 51
     * @symbol ?passengerTick@Skeleton@@UEAAXXZ
     */
    virtual void passengerTick();
    /**
     * @note   Virtual function table index: 61
     * @symbol 
     */
    virtual void __unk_vfn_61();
    /**
     * @note   Virtual function table index: 68
     * @symbol 
     */
    virtual void __unk_vfn_68();
    /**
     * @note   Virtual function table index: 82
     * @symbol 
     */
    virtual void __unk_vfn_82();
    /**
     * @note   Virtual function table index: 85
     * @symbol 
     */
    virtual void __unk_vfn_85();
    /**
     * @note   Virtual function table index: 88
     * @symbol 
     */
    virtual void __unk_vfn_88();
    /**
     * @note   Virtual function table index: 96
     * @symbol 
     */
    virtual void __unk_vfn_96();
    /**
     * @note   Virtual function table index: 99
     * @symbol 
     */
    virtual void __unk_vfn_99();
    /**
     * @note   Virtual function table index: 106
     * @symbol 
     */
    virtual void __unk_vfn_106();
    /**
     * @note   Virtual function table index: 108
     * @symbol 
     */
    virtual void __unk_vfn_108();
    /**
     * @note   Virtual function table index: 109
     * @symbol 
     */
    virtual void __unk_vfn_109();
    /**
     * @note   Virtual function table index: 111
     * @symbol 
     */
    virtual void __unk_vfn_111();
    /**
     * @note   Virtual function table index: 114
     * @symbol ?setTarget@Skeleton@@UEAAXPEAVActor@@@Z
     */
    virtual void setTarget(class Actor *);
    /**
     * @note   Virtual function table index: 174
     * @symbol ?canFreeze@Skeleton@@UEBA_NXZ
     */
    virtual bool canFreeze() const;
    /**
     * @note   Virtual function table index: 182
     * @symbol 
     */
    virtual void __unk_vfn_182();
    /**
     * @note   Virtual function table index: 196
     * @symbol 
     */
    virtual void __unk_vfn_196();
    /**
     * @note   Virtual function table index: 212
     * @symbol ?canBeAffected@Skeleton@@UEBA_NAEBVMobEffectInstance@@@Z
     */
    virtual bool canBeAffected(class MobEffectInstance const &) const;
    /**
     * @note   Virtual function table index: 222
     * @symbol 
     */
    virtual void __unk_vfn_222();
    /**
     * @note   Virtual function table index: 223
     * @symbol 
     */
    virtual void __unk_vfn_223();
    /**
     * @note   Virtual function table index: 224
     * @symbol ?getDebugText@Skeleton@@EEAAXAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     */
    virtual void getDebugText(std::vector<std::string> &);
    /**
     * @note   Virtual function table index: 248
     * @symbol 
     */
    virtual void __unk_vfn_248();
    /**
     * @note   Virtual function table index: 251
     * @symbol 
     */
    virtual void __unk_vfn_251();
    /**
     * @note   Virtual function table index: 253
     * @symbol ?die@Skeleton@@UEAAXAEBVActorDamageSource@@@Z
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @note   Virtual function table index: 269
     * @symbol 
     */
    virtual void __unk_vfn_269();
    /**
     * @note   Virtual function table index: 277
     * @symbol 
     */
    virtual void __unk_vfn_277();
    /**
     * @note   Virtual function table index: 285
     * @symbol 
     */
    virtual void __unk_vfn_285();
    /**
     * @note   Virtual function table index: 313
     * @symbol 
     */
    virtual void __unk_vfn_313();
    /**
     * @note   Virtual function table index: 316
     * @symbol ?doHurtTarget@Skeleton@@UEAA_NPEAVActor@@AEBW4ActorDamageCause@@@Z
     */
    virtual bool doHurtTarget(class Actor *, enum ActorDamageCause const &);
    /**
     * @note   Virtual function table index: 317
     * @symbol 
     */
    virtual void __unk_vfn_317();
    /**
     * @note   Virtual function table index: 351
     * @symbol 
     */
    virtual void __unk_vfn_351();
    /**
     * @note   Virtual function table index: 365
     * @symbol 
     */
    virtual void __unk_vfn_365();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SKELETON
    /**
     * @note   Virtual function table index: -1
     * @symbol ?useNewAi@Skeleton@@UEBA_NXZ
     */
    MCVAPI bool useNewAi() const;
#endif
    /**
     * @symbol ??0Skeleton@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI Skeleton(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?setWitherParent@Skeleton@@QEAAXPEAVWitherBoss@@@Z
     */
    MCAPI void setWitherParent(class WitherBoss *);

//private:

private:
MCAPI static class mce::UUID const SPEED_MODIFIER_ATTACK_UUID;

};