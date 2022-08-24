/**
 * @file  Axolotl.hpp
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
 * @brief MC class Axolotl.
 *
 */
class Axolotl : public Animal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AXOLOTL
public:
    class Axolotl& operator=(class Axolotl const &) = delete;
    Axolotl(class Axolotl const &) = delete;
    Axolotl() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 10
     * @symbol ?initializeComponents@Axolotl@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void initializeComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @note   Virtual function table index: 14
     * @symbol 
     */
    virtual ~Axolotl();
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
     * @symbol ?_getWalkTargetValue@Axolotl@@UEAAMAEBVBlockPos@@@Z
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
    /**
     * @note   Virtual function table index: 366
     * @symbol ?_getAdjustedAABBForSpawnCheck@Axolotl@@UEBA?AVAABB@@AEBV2@AEBVVec3@@@Z
     */
    virtual class AABB _getAdjustedAABBForSpawnCheck(class AABB const &, class Vec3 const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AXOLOTL
#endif
    /**
     * @symbol ??0Axolotl@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI Axolotl(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

};