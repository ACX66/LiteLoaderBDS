/**
 * @file  CandleBlockItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "BlockItem.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CandleBlockItem.
 *
 */
class CandleBlockItem : public BlockItem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CANDLEBLOCKITEM
public:
    class CandleBlockItem& operator=(class CandleBlockItem const &) = delete;
    CandleBlockItem(class CandleBlockItem const &) = delete;
    CandleBlockItem() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~CandleBlockItem();
    /**
     * @note   Virtual function table index: 7
     * @symbol 
     */
    virtual void __unk_vfn_7();
    /**
     * @note   Virtual function table index: 11
     * @symbol 
     */
    virtual void __unk_vfn_11();
    /**
     * @note   Virtual function table index: 14
     * @symbol 
     */
    virtual void __unk_vfn_14();
    /**
     * @note   Virtual function table index: 16
     * @symbol 
     */
    virtual void __unk_vfn_16();
    /**
     * @note   Virtual function table index: 46
     * @symbol ?getLevelDataForAuxValue@CandleBlockItem@@UEBAHH@Z
     */
    virtual int getLevelDataForAuxValue(int) const;
    /**
     * @note   Virtual function table index: 52
     * @symbol 
     */
    virtual void __unk_vfn_52();
    /**
     * @note   Virtual function table index: 54
     * @symbol 
     */
    virtual void __unk_vfn_54();
    /**
     * @note   Virtual function table index: 67
     * @symbol 
     */
    virtual void __unk_vfn_67();
    /**
     * @note   Virtual function table index: 71
     * @symbol 
     */
    virtual void __unk_vfn_71();
    /**
     * @note   Virtual function table index: 72
     * @symbol 
     */
    virtual void __unk_vfn_72();
    /**
     * @note   Virtual function table index: 73
     * @symbol 
     */
    virtual void __unk_vfn_73();
    /**
     * @note   Virtual function table index: 76
     * @symbol 
     */
    virtual void __unk_vfn_76();
    /**
     * @note   Virtual function table index: 80
     * @symbol 
     */
    virtual void __unk_vfn_80();
    /**
     * @note   Virtual function table index: 81
     * @symbol 
     */
    virtual void __unk_vfn_81();
    /**
     * @note   Virtual function table index: 136
     * @symbol ?_useOn@CandleBlockItem@@UEBA_NAEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CANDLEBLOCKITEM
    /**
     * @note   Virtual function table index: -1
     * @symbol ?isCandle@CandleBlockItem@@UEBA_NXZ
     */
    MCVAPI bool isCandle() const;
#endif
    /**
     * @symbol ??0CandleBlockItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI CandleBlockItem(std::string const &, int);

};