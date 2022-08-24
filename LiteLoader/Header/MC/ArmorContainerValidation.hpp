/**
 * @file  ArmorContainerValidation.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ArmorContainerValidation.
 *
 */
class ArmorContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARMORCONTAINERVALIDATION
public:
    class ArmorContainerValidation& operator=(class ArmorContainerValidation const &) = delete;
    ArmorContainerValidation(class ArmorContainerValidation const &) = delete;
    ArmorContainerValidation() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~ArmorContainerValidation();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
     */
    virtual bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int) const;
    /**
     * @note   Virtual function table index: 2
     * @symbol ?isItemAllowedInSlot@ArmorContainerValidation@@UEBA_NAEBVContainerScreenContext@@HAEBVItemStackBase@@H@Z
     */
    virtual bool isItemAllowedInSlot(class ContainerScreenContext const &, int, class ItemStackBase const &, int) const;
    /**
     * @note   Virtual function table index: 3
     * @symbol ?getAvailableSetCount@ArmorContainerValidation@@UEBAHHAEBVItemStackBase@@@Z
     */
    virtual int getAvailableSetCount(int, class ItemStackBase const &) const;
    /**
     * @note   Virtual function table index: 4
     * @symbol ?isItemAllowedToAdd@ArmorContainerValidation@@UEBA_NAEBVItemStack@@@Z
     */
    virtual bool isItemAllowedToAdd(class ItemStack const &) const;
    /**
     * @note   Virtual function table index: 5
     * @symbol ?isItemAllowedToRemove@ArmorContainerValidation@@UEBA_NAEBVContainerScreenContext@@AEBVItemStackBase@@@Z
     */
    virtual bool isItemAllowedToRemove(class ContainerScreenContext const &, class ItemStackBase const &) const;
    /**
     * @note   Virtual function table index: 6
     * @symbol ?canItemMoveToContainer@ArmorContainerValidation@@UEBA_NAEBVItemStackBase@@@Z
     */
    virtual bool canItemMoveToContainer(class ItemStackBase const &) const;
    /**
     * @note   Virtual function table index: 7
     * @symbol ?canDestroy@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@@Z
     */
    virtual bool canDestroy(class ContainerScreenContext const &) const;
    /**
     * @note   Virtual function table index: 8
     * @symbol 
     */
    virtual void __unk_vfn_8();
    /**
     * @note   Virtual function table index: 9
     * @symbol ?getContainerSize@ArmorContainerValidation@@UEBAHAEBVContainerScreenContext@@AEBVContainer@@@Z
     */
    virtual int getContainerSize(class ContainerScreenContext const &, class Container const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ARMORCONTAINERVALIDATION
#endif

};