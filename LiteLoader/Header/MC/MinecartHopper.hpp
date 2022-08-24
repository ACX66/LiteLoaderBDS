/**
 * @file  MinecartHopper.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Minecart.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MinecartHopper.
 *
 */
class MinecartHopper : public Minecart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECARTHOPPER
public:
    class MinecartHopper& operator=(class MinecartHopper const &) = delete;
    MinecartHopper(class MinecartHopper const &) = delete;
    MinecartHopper() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 14
     * @symbol 
     */
    virtual ~MinecartHopper();
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
     * @note   Virtual function table index: 286
     * @symbol ?destroy@MinecartHopper@@UEAAXAEBVActorDamageSource@@_N@Z
     */
    virtual void destroy(class ActorDamageSource const &, bool);
    /**
     * @note   Virtual function table index: 287
     * @symbol ?getType@MinecartHopper@@UEAA?AW4MinecartType@@XZ
     */
    virtual enum MinecartType getType();
    /**
     * @note   Virtual function table index: 288
     * @symbol ?getDefaultDisplayBlock@MinecartHopper@@UEBAPEBVBlock@@XZ
     */
    virtual class Block const * getDefaultDisplayBlock() const;
    /**
     * @note   Virtual function table index: 289
     * @symbol 
     */
    virtual void __unk_vfn_289();
    /**
     * @note   Virtual function table index: 290
     * @symbol ?getDefaultDisplayOffset@MinecartHopper@@UEBAHXZ
     */
    virtual int getDefaultDisplayOffset() const;
    /**
     * @note   Virtual function table index: 291
     * @symbol ?applyNaturalSlowdown@MinecartHopper@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void applyNaturalSlowdown(class BlockSource &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MINECARTHOPPER
#endif
    /**
     * @symbol ??0MinecartHopper@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI MinecartHopper(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

};