/**
 * @file  BlockCreativeGroupDescription.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockCreativeGroupDescription.
 *
 */
struct BlockCreativeGroupDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCREATIVEGROUPDESCRIPTION
public:
    struct BlockCreativeGroupDescription& operator=(struct BlockCreativeGroupDescription const &) = delete;
    BlockCreativeGroupDescription(struct BlockCreativeGroupDescription const &) = delete;
    BlockCreativeGroupDescription() = delete;
#endif
public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~BlockCreativeGroupDescription();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?getName@BlockCreativeGroupDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @note   Virtual function table index: 2
     * @symbol ?initializeComponent@BlockCreativeGroupDescription@@UEBAXAEAVEntityContext@@@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @note   Virtual function table index: 3
     * @symbol 
     */
    virtual void __unk_vfn_3();
    /**
     * @note   Virtual function table index: 4
     * @symbol ?isNetworkComponent@BlockCreativeGroupDescription@@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @note   Virtual function table index: 5
     * @symbol ?buildNetworkTag@BlockCreativeGroupDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @note   Virtual function table index: 6
     * @symbol ?initializeFromNetwork@BlockCreativeGroupDescription@@UEAAXAEBVCompoundTag@@@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKCREATIVEGROUPDESCRIPTION
#endif
MCAPI static std::string const NameID;
    /**
     * @symbol ?bindType@BlockCreativeGroupDescription@@SAXXZ
     */
    MCAPI static void bindType();

};