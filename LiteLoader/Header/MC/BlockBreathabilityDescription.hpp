/**
 * @file  BlockBreathabilityDescription.hpp
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
 * @brief MC structure BlockBreathabilityDescription.
 *
 */
struct BlockBreathabilityDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKBREATHABILITYDESCRIPTION
public:
    struct BlockBreathabilityDescription& operator=(struct BlockBreathabilityDescription const &) = delete;
    BlockBreathabilityDescription(struct BlockBreathabilityDescription const &) = delete;
    BlockBreathabilityDescription() = delete;
#endif
public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~BlockBreathabilityDescription();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?getName@BlockBreathabilityDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @note   Virtual function table index: 2
     * @symbol ?initializeComponent@BlockBreathabilityDescription@@UEBAXAEAVEntityContext@@@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @note   Virtual function table index: 3
     * @symbol 
     */
    virtual void __unk_vfn_3();
    /**
     * @note   Virtual function table index: 4
     * @symbol ?isNetworkComponent@BlockBreathabilityDescription@@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @note   Virtual function table index: 5
     * @symbol ?buildNetworkTag@BlockBreathabilityDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @note   Virtual function table index: 6
     * @symbol ?initializeFromNetwork@BlockBreathabilityDescription@@UEAAXAEBVCompoundTag@@@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKBREATHABILITYDESCRIPTION
#endif
MCAPI static std::string const NameID;
    /**
     * @symbol ?bindType@BlockBreathabilityDescription@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?registerVersionUpgrades@BlockBreathabilityDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};