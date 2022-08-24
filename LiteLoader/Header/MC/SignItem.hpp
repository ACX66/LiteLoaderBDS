/**
 * @file  SignItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "SignBlockActor.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SignItem.
 *
 */
class SignItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIGNITEM
public:
    class SignItem& operator=(class SignItem const &) = delete;
    SignItem(class SignItem const &) = delete;
    SignItem() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~SignItem();
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
     * @note   Virtual function table index: 135
     * @symbol ?_calculatePlacePos@SignItem@@EEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
     */
    virtual bool _calculatePlacePos(class ItemStackBase &, class Actor &, unsigned char &, class BlockPos &) const;
    /**
     * @note   Virtual function table index: 136
     * @symbol ?_useOn@SignItem@@UEBA_NAEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIGNITEM
#endif
    /**
     * @symbol ??0SignItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4SignType@SignBlockActor@@@Z
     */
    MCAPI SignItem(std::string const &, int, enum SignBlockActor::SignType);

};