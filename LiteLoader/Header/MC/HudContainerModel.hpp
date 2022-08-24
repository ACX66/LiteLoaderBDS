/**
 * @file  HudContainerModel.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HudContainerModel.
 *
 */
class HudContainerModel : public ContainerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HUDCONTAINERMODEL
public:
    class HudContainerModel& operator=(class HudContainerModel const &) = delete;
    HudContainerModel(class HudContainerModel const &) = delete;
    HudContainerModel() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol ?containerContentChanged@HudContainerModel@@UEAAXH@Z
     */
    virtual void containerContentChanged(int);
    /**
     * @note   Virtual function table index: 1
     * @symbol 
     */
    virtual ~HudContainerModel();
    /**
     * @note   Virtual function table index: 6
     * @symbol 
     */
    virtual void __unk_vfn_6();
    /**
     * @note   Virtual function table index: 7
     * @symbol ?getContainerWeakRef@HudContainerModel@@UEBA?AVContainerWeakRef@@XZ
     */
    virtual class ContainerWeakRef getContainerWeakRef() const;
    /**
     * @note   Virtual function table index: 12
     * @symbol 
     */
    virtual void __unk_vfn_12();
    /**
     * @note   Virtual function table index: 14
     * @symbol ?isValid@HudContainerModel@@UEAA_NXZ
     */
    virtual bool isValid();
    /**
     * @note   Virtual function table index: 15
     * @symbol 
     */
    virtual void __unk_vfn_15();
    /**
     * @note   Virtual function table index: 16
     * @symbol 
     */
    virtual void __unk_vfn_16();
    /**
     * @note   Virtual function table index: 19
     * @symbol 
     */
    virtual void __unk_vfn_19();
    /**
     * @note   Virtual function table index: 20
     * @symbol ?_getContainer@HudContainerModel@@EEBAPEAVContainer@@XZ
     */
    virtual class Container * _getContainer() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HUDCONTAINERMODEL
#endif
    /**
     * @symbol ??0HudContainerModel@@QEAA@W4ContainerEnumName@@AEAVPlayer@@@Z
     */
    MCAPI HudContainerModel(enum ContainerEnumName, class Player &);

//private:
    /**
     * @symbol ?_refreshContainer@HudContainerModel@@AEAAXXZ
     */
    MCAPI void _refreshContainer();

private:

};