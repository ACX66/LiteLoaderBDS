/**
 * @file  Guardian.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Monster.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Guardian.
 *
 */
class Guardian : public Monster {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GUARDIAN
public:
    class Guardian& operator=(class Guardian const &) = delete;
    Guardian(class Guardian const &) = delete;
    Guardian() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 8
     * @symbol ?reloadHardcoded@Guardian@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @note   Virtual function table index: 9
     * @symbol ?reloadHardcodedClient@Guardian@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcodedClient(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @note   Virtual function table index: 14
     * @symbol 
     */
    virtual ~Guardian();
    /**
     * @note   Virtual function table index: 41
     * @symbol 
     */
    virtual void __unk_vfn_41();
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
     * @symbol ?setTarget@Guardian@@UEAAXPEAVActor@@@Z
     */
    virtual void setTarget(class Actor *);
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
     * @note   Virtual function table index: 269
     * @symbol 
     */
    virtual void __unk_vfn_269();
    /**
     * @note   Virtual function table index: 270
     * @symbol ?_hurt@Guardian@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @note   Virtual function table index: 273
     * @symbol ?readAdditionalSaveData@Guardian@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @note   Virtual function table index: 274
     * @symbol ?addAdditionalSaveData@Guardian@@MEBAXAEAVCompoundTag@@@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @note   Virtual function table index: 277
     * @symbol 
     */
    virtual void __unk_vfn_277();
    /**
     * @note   Virtual function table index: 284
     * @symbol ?_onSizeUpdated@Guardian@@EEAAXXZ
     */
    virtual void _onSizeUpdated();
    /**
     * @note   Virtual function table index: 285
     * @symbol 
     */
    virtual void __unk_vfn_285();
    /**
     * @note   Virtual function table index: 300
     * @symbol ?aiStep@Guardian@@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @note   Virtual function table index: 305
     * @symbol ?checkSpawnRules@Guardian@@UEAA_N_N@Z
     */
    virtual bool checkSpawnRules(bool);
    /**
     * @note   Virtual function table index: 313
     * @symbol 
     */
    virtual void __unk_vfn_313();
    /**
     * @note   Virtual function table index: 314
     * @symbol ?getMaxHeadXRot@Guardian@@UEAAMXZ
     */
    virtual float getMaxHeadXRot();
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
    /**
     * @note   Virtual function table index: 367
     * @symbol ?isDarkEnoughToSpawn@Guardian@@MEBA_NXZ
     */
    virtual bool isDarkEnoughToSpawn() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GUARDIAN
    /**
     * @note   Virtual function table index: -1
     * @symbol ?canSeeInvisible@Guardian@@UEBA_NXZ
     */
    MCVAPI bool canSeeInvisible() const;
#endif
    /**
     * @symbol ??0Guardian@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI Guardian(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?getAttackDuration@Guardian@@QEAAHXZ
     */
    MCAPI int getAttackDuration();
    /**
     * @symbol ?getMoveEyeVector@Guardian@@QEAA?AVVec3@@XZ
     */
    MCAPI class Vec3 getMoveEyeVector();
    /**
     * @symbol ?isElder@Guardian@@QEBA_NXZ
     */
    MCAPI bool isElder() const;
    /**
     * @symbol ?isElderGhost@Guardian@@QEBA_NXZ
     */
    MCAPI bool isElderGhost() const;
    /**
     * @symbol ?preAiStep@Guardian@@QEAAXXZ
     */
    MCAPI void preAiStep();
    /**
     * @symbol ?setAttackTime@Guardian@@QEAAXH@Z
     */
    MCAPI void setAttackTime(int);
    /**
     * @symbol ?setElder@Guardian@@QEAAX_N@Z
     */
    MCAPI void setElder(bool);

//protected:
    /**
     * @symbol ?registerLoopingSounds@Guardian@@IEAAXXZ
     */
    MCAPI void registerLoopingSounds();

//private:

protected:

private:
MCAPI static int const ATTACK_TIME;
MCAPI static int const FIRST_DAMAGE_TIME;

};