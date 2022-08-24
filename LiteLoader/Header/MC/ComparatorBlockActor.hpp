/**
 * @file  ComparatorBlockActor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ComparatorBlockActor.
 *
 */
class ComparatorBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPARATORBLOCKACTOR
public:
    class ComparatorBlockActor& operator=(class ComparatorBlockActor const &) = delete;
    ComparatorBlockActor(class ComparatorBlockActor const &) = delete;
    ComparatorBlockActor() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~ComparatorBlockActor();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?load@ComparatorBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @note   Virtual function table index: 2
     * @symbol ?save@ComparatorBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @note   Virtual function table index: 7
     * @symbol ?tick@ComparatorBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @note   Virtual function table index: 12
     * @symbol 
     */
    virtual void __unk_vfn_12();
    /**
     * @note   Virtual function table index: 16
     * @symbol 
     */
    virtual void __unk_vfn_16();
    /**
     * @note   Virtual function table index: 28
     * @symbol 
     */
    virtual void __unk_vfn_28();
    /**
     * @note   Virtual function table index: 29
     * @symbol 
     */
    virtual void __unk_vfn_29();
    /**
     * @note   Virtual function table index: 30
     * @symbol 
     */
    virtual void __unk_vfn_30();
    /**
     * @note   Virtual function table index: 32
     * @symbol 
     */
    virtual void __unk_vfn_32();
    /**
     * @note   Virtual function table index: 33
     * @symbol 
     */
    virtual void __unk_vfn_33();
    /**
     * @note   Virtual function table index: 34
     * @symbol 
     */
    virtual void __unk_vfn_34();
    /**
     * @note   Virtual function table index: 38
     * @symbol ?getOutputSignal@ComparatorBlockActor@@UEAAHXZ
     */
    virtual int getOutputSignal();
    /**
     * @note   Virtual function table index: 39
     * @symbol ?setOutputSignal@ComparatorBlockActor@@UEAAXH@Z
     */
    virtual void setOutputSignal(int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPARATORBLOCKACTOR
#endif
    /**
     * @symbol ??0ComparatorBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI ComparatorBlockActor(class BlockPos const &);

};