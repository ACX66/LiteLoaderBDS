/**
 * @file  WarpedFungusOnAStickItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WarpedFungusOnAStickItem.
 *
 */
class WarpedFungusOnAStickItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WARPEDFUNGUSONASTICKITEM
public:
    class WarpedFungusOnAStickItem& operator=(class WarpedFungusOnAStickItem const &) = delete;
    WarpedFungusOnAStickItem(class WarpedFungusOnAStickItem const &) = delete;
    WarpedFungusOnAStickItem() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~WarpedFungusOnAStickItem();
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
     * @note   Virtual function table index: 50
     * @symbol ?isHandEquipped@WarpedFungusOnAStickItem@@UEBA_NXZ
     */
    virtual bool isHandEquipped() const;
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
     * @note   Virtual function table index: 60
     * @symbol ?requiresInteract@WarpedFungusOnAStickItem@@UEBA_NXZ
     */
    virtual bool requiresInteract() const;
    /**
     * @note   Virtual function table index: 63
     * @symbol ?getEnchantSlot@WarpedFungusOnAStickItem@@UEBAHXZ
     */
    virtual int getEnchantSlot() const;
    /**
     * @note   Virtual function table index: 64
     * @symbol ?getEnchantValue@WarpedFungusOnAStickItem@@UEBAHXZ
     */
    virtual int getEnchantValue() const;
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
     * @note   Virtual function table index: 94
     * @symbol ?mineBlock@WarpedFungusOnAStickItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
     */
    virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WARPEDFUNGUSONASTICKITEM
#endif
    /**
     * @symbol ??0WarpedFungusOnAStickItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI WarpedFungusOnAStickItem(std::string const &, int);

};