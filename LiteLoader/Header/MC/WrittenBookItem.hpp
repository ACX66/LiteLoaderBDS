/**
 * @file  WrittenBookItem.hpp
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
 * @brief MC class WrittenBookItem.
 *
 */
class WrittenBookItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WRITTENBOOKITEM
public:
    class WrittenBookItem& operator=(class WrittenBookItem const &) = delete;
    WrittenBookItem(class WrittenBookItem const &) = delete;
    WrittenBookItem() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~WrittenBookItem();
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
     * @note   Virtual function table index: 51
     * @symbol ?isGlint@WrittenBookItem@@MEBA_NAEBVItemStackBase@@@Z
     */
    virtual bool isGlint(class ItemStackBase const &) const;
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
     * @symbol ?requiresInteract@WrittenBookItem@@UEBA_NXZ
     */
    virtual bool requiresInteract() const;
    /**
     * @note   Virtual function table index: 61
     * @symbol ?appendFormattedHovertext@WrittenBookItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
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
     * @note   Virtual function table index: 85
     * @symbol ?use@WrittenBookItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @note   Virtual function table index: 96
     * @symbol ?buildDescriptionId@WrittenBookItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @note   Virtual function table index: 119
     * @symbol ?getInteractText@WrittenBookItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPlayer@@@Z
     */
    virtual std::string getInteractText(class Player const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WRITTENBOOKITEM
#endif
    /**
     * @symbol ??0WrittenBookItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI WrittenBookItem(std::string const &, int);
MCAPI static int const MAX_GENERATION;
MCAPI static int const MAX_PAGES;
MCAPI static int const MAX_PAGE_LENGTH;
MCAPI static int const MAX_TITLE_LENGTH;
MCAPI static class gsl::basic_string_span<char const, -1> const TAG_AUTHOR;
MCAPI static class gsl::basic_string_span<char const, -1> const TAG_GENERATION;
MCAPI static class gsl::basic_string_span<char const, -1> const TAG_ID;
MCAPI static class gsl::basic_string_span<char const, -1> const TAG_PAGES;
MCAPI static class gsl::basic_string_span<char const, -1> const TAG_PAGE_PHOTO_NAME;
MCAPI static class gsl::basic_string_span<char const, -1> const TAG_PAGE_TEXT;
MCAPI static class gsl::basic_string_span<char const, -1> const TAG_RESOLVED;
MCAPI static class gsl::basic_string_span<char const, -1> const TAG_TITLE;
MCAPI static class gsl::basic_string_span<char const, -1> const TAG_XUID;
    /**
     * @symbol ?canBeCopied@WrittenBookItem@@SA_NPEBVCompoundTag@@@Z
     */
    MCAPI static bool canBeCopied(class CompoundTag const *);
    /**
     * @symbol ?getGeneration@WrittenBookItem@@SAHPEBVCompoundTag@@@Z
     */
    MCAPI static int getGeneration(class CompoundTag const *);
    /**
     * @symbol ?getPageCount@WrittenBookItem@@SAHAEBVItemStack@@@Z
     */
    MCAPI static int getPageCount(class ItemStack const &);
    /**
     * @symbol ?getPages@WrittenBookItem@@SA?AV?$vector@UPageContent@@V?$allocator@UPageContent@@@std@@@std@@AEBVItemStack@@@Z
     */
    MCAPI static std::vector<struct PageContent> getPages(class ItemStack const &);

};