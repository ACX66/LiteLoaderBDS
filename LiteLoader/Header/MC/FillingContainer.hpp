/**
 * @file  FillingContainer.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Container.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FillingContainer.
 *
 */
class FillingContainer : public Container {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILLINGCONTAINER
public:
    FillingContainer(class FillingContainer const &) = delete;
    FillingContainer() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~FillingContainer();
    /**
     * @note   Virtual function table index: 2
     * @symbol ?serverInitItemStackIds@FillingContainer@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     */
    virtual void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @note   Virtual function table index: 5
     * @symbol ?getItem@FillingContainer@@UEBAAEBVItemStack@@H@Z
     */
    virtual class ItemStack const & getItem(int) const;
    /**
     * @note   Virtual function table index: 9
     * @symbol ?setItem@FillingContainer@@UEAAXHAEBVItemStack@@@Z
     */
    virtual void setItem(int, class ItemStack const &);
    /**
     * @note   Virtual function table index: 10
     * @symbol ?setItemWithForceBalance@FillingContainer@@UEAAXHAEBVItemStack@@_N@Z
     */
    virtual void setItemWithForceBalance(int, class ItemStack const &, bool);
    /**
     * @note   Virtual function table index: 11
     * @symbol ?removeItem@FillingContainer@@UEAAXHH@Z
     */
    virtual void removeItem(int, int);
    /**
     * @note   Virtual function table index: 14
     * @symbol ?getContainerSize@FillingContainer@@UEBAHXZ
     */
    virtual int getContainerSize() const;
    /**
     * @note   Virtual function table index: 15
     * @symbol ?getMaxStackSize@FillingContainer@@UEBAHXZ
     */
    virtual int getMaxStackSize() const;
    /**
     * @note   Virtual function table index: 16
     * @symbol ?startOpen@FillingContainer@@UEAAXAEAVPlayer@@@Z
     */
    virtual void startOpen(class Player &);
    /**
     * @note   Virtual function table index: 17
     * @symbol ?stopOpen@FillingContainer@@UEAAXAEAVPlayer@@@Z
     */
    virtual void stopOpen(class Player &);
    /**
     * @note   Virtual function table index: 22
     * @symbol 
     */
    virtual void __unk_vfn_22();
    /**
     * @note   Virtual function table index: 23
     * @symbol 
     */
    virtual void __unk_vfn_23();
    /**
     * @note   Virtual function table index: 33
     * @symbol ?add@FillingContainer@@UEAA_NAEAVItemStack@@@Z
     */
    virtual bool add(class ItemStack &);
    /**
     * @note   Virtual function table index: 34
     * @symbol ?canAdd@FillingContainer@@UEBA_NAEBVItemStack@@@Z
     */
    virtual bool canAdd(class ItemStack const &) const;
    /**
     * @note   Virtual function table index: 35
     * @symbol ?clearSlot@FillingContainer@@UEAAXH@Z
     */
    virtual void clearSlot(int);
    /**
     * @note   Virtual function table index: 36
     * @symbol ?clearInventory@FillingContainer@@UEAAHH@Z
     */
    virtual int clearInventory(int);
    /**
     * @note   Virtual function table index: 37
     * @symbol ?load@FillingContainer@@UEAAXAEBVListTag@@AEBVSemVersion@@AEAVLevel@@@Z
     */
    virtual void load(class ListTag const &, class SemVersion const &, class Level &);
    /**
     * @note   Virtual function table index: 38
     * @symbol ?getEmptySlotsCount@FillingContainer@@UEBAHXZ
     */
    virtual int getEmptySlotsCount() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FILLINGCONTAINER
#endif
    /**
     * @symbol ??0FillingContainer@@QEAA@PEAVPlayer@@HW4ContainerType@@@Z
     */
    MCAPI FillingContainer(class Player *, int, enum ContainerType);
    /**
     * @symbol ?getHotbarSize@FillingContainer@@QEBAHXZ
     */
    MCAPI int getHotbarSize() const;
    /**
     * @symbol ?getSlotWithItem@FillingContainer@@QEBAHAEBVItemStack@@_N1@Z
     */
    MCAPI int getSlotWithItem(class ItemStack const &, bool, bool) const;
    /**
     * @symbol ?hasResource@FillingContainer@@QEAA_NH@Z
     */
    MCAPI bool hasResource(int);
    /**
     * @symbol ??4FillingContainer@@QEAAAEAV0@AEBV0@@Z
     */
    MCAPI class FillingContainer & operator=(class FillingContainer const &);
    /**
     * @symbol ?removeResource@FillingContainer@@QEAAHAEBVItemStack@@_N1H@Z
     */
    MCAPI int removeResource(class ItemStack const &, bool, bool, int);
    /**
     * @symbol ?removeResource@FillingContainer@@QEAA_NH@Z
     */
    MCAPI bool removeResource(int);
    /**
     * @symbol ?save@FillingContainer@@QEBA?AV?$unique_ptr@VListTag@@U?$default_delete@VListTag@@@std@@@std@@XZ
     */
    MCAPI std::unique_ptr<class ListTag> save() const;
    /**
     * @symbol ?swapSlots@FillingContainer@@QEAAXHH@Z
     */
    MCAPI void swapSlots(int, int);

//protected:
    /**
     * @symbol ?_addResource@FillingContainer@@IEAAHAEBVItemStack@@@Z
     */
    MCAPI int _addResource(class ItemStack const &);
    /**
     * @symbol ?_doDrop@FillingContainer@@IEAAXAEAVItemStack@@_N@Z
     */
    MCAPI void _doDrop(class ItemStack &, bool);
    /**
     * @symbol ?_fixBackwardCompabilityItem@FillingContainer@@IEAAXAEAVItemStack@@@Z
     */
    MCAPI void _fixBackwardCompabilityItem(class ItemStack &);
    /**
     * @symbol ?_getEmptySlotsCount@FillingContainer@@IEBAHHH@Z
     */
    MCAPI int _getEmptySlotsCount(int, int) const;
    /**
     * @symbol ?_getFreeSlot@FillingContainer@@IEBAHXZ
     */
    MCAPI int _getFreeSlot() const;
    /**
     * @symbol ?_getSlot@FillingContainer@@IEBAHH@Z
     */
    MCAPI int _getSlot(int) const;
    /**
     * @symbol ?_getSlotWithRemainingSpace@FillingContainer@@IEBAHAEBVItemStack@@@Z
     */
    MCAPI int _getSlotWithRemainingSpace(class ItemStack const &) const;
    /**
     * @symbol ?_isCreative@FillingContainer@@IEBA_NXZ
     */
    MCAPI bool _isCreative() const;
    /**
     * @symbol ?_release@FillingContainer@@IEAAXH@Z
     */
    MCAPI void _release(int);

protected:

};