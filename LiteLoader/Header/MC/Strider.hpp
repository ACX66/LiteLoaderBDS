/**
 * @file  Strider.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Animal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Strider.
 *
 */
class Strider : public Animal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRIDER
public:
    class Strider& operator=(class Strider const &) = delete;
    Strider(class Strider const &) = delete;
    Strider() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 14
     * @symbol 
     */
    virtual ~Strider();
    /**
     * @note   Virtual function table index: 41
     * @symbol 
     */
    virtual void __unk_vfn_41();
    /**
     * @note   Virtual function table index: 49
     * @symbol ?normalTick@Strider@@MEAAXXZ
     */
    virtual void normalTick();
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
     * @note   Virtual function table index: 258
     * @symbol ?getNextStep@Strider@@MEAAMM@Z
     */
    virtual float getNextStep(float);
    /**
     * @note   Virtual function table index: 268
     * @symbol ?shouldTryMakeStepSound@Strider@@MEAA_NXZ
     */
    virtual bool shouldTryMakeStepSound();
    /**
     * @note   Virtual function table index: 269
     * @symbol 
     */
    virtual void __unk_vfn_269();
    /**
     * @note   Virtual function table index: 275
     * @symbol ?_playStepSound@Strider@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual void _playStepSound(class BlockPos const &, class Block const &);
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
     * @note   Virtual function table index: 317
     * @symbol 
     */
    virtual void __unk_vfn_317();
    /**
     * @note   Virtual function table index: 349
     * @symbol ?_getWalkTargetValue@Strider@@UEAAMAEBVBlockPos@@@Z
     */
    virtual float _getWalkTargetValue(class BlockPos const &);
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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRIDER
#endif
    /**
     * @symbol ??0Strider@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI Strider(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

};