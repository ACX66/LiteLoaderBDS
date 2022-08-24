/**
 * @file  ScriptItemGameplayHandler.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Scripting.hpp"
#include "ScriptModuleMinecraft.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptItemGameplayHandler.
 *
 */
class ScriptItemGameplayHandler {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTITEMGAMEPLAYHANDLER
public:
    class ScriptItemGameplayHandler& operator=(class ScriptItemGameplayHandler const &) = delete;
    ScriptItemGameplayHandler(class ScriptItemGameplayHandler const &) = delete;
    ScriptItemGameplayHandler() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~ScriptItemGameplayHandler();
    /**
     * @note   Virtual function table index: 1
     * @symbol 
     */
    virtual void __unk_vfn_1();
    /**
     * @note   Virtual function table index: 2
     * @symbol 
     */
    virtual void __unk_vfn_2();
    /**
     * @note   Virtual function table index: 3
     * @symbol 
     */
    virtual void __unk_vfn_3();
    /**
     * @note   Virtual function table index: 4
     * @symbol 
     */
    virtual void __unk_vfn_4();
    /**
     * @note   Virtual function table index: 5
     * @symbol 
     */
    virtual void __unk_vfn_5();
    /**
     * @note   Virtual function table index: 6
     * @symbol 
     */
    virtual void __unk_vfn_6();
    /**
     * @note   Virtual function table index: 7
     * @symbol 
     */
    virtual void __unk_vfn_7();
    /**
     * @note   Virtual function table index: 8
     * @symbol 
     */
    virtual void __unk_vfn_8();
    /**
     * @note   Virtual function table index: 9
     * @symbol ?handleEvent@ScriptItemGameplayHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAUItemDefinitionEventTriggeredEvent@@@Z
     */
    virtual struct GameplayHandlerResult<enum CoordinatorResult> handleEvent(struct ItemDefinitionEventTriggeredEvent &);
    /**
     * @note   Virtual function table index: 10
     * @symbol ?handleEvent@ScriptItemGameplayHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAUItemUseOnEvent@@@Z
     */
    virtual struct GameplayHandlerResult<enum CoordinatorResult> handleEvent(struct ItemUseOnEvent &);
    /**
     * @note   Virtual function table index: 11
     * @symbol ?handleEvent@ScriptItemGameplayHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAUItemUseEvent@@@Z
     */
    virtual struct GameplayHandlerResult<enum CoordinatorResult> handleEvent(struct ItemUseEvent &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTITEMGAMEPLAYHANDLER
#endif

//private:
    /**
     * @symbol ?_handleItemDefinitionEventTriggered@ScriptItemGameplayHandler@@AEAA_NAEAUItemDefinitionEventTriggeredEvent@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VScriptWorldEvents@ScriptModuleMinecraft@@@4@@Z
     */
    MCAPI bool _handleItemDefinitionEventTriggered(struct ItemDefinitionEventTriggeredEvent &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptWorldEvents>);
    /**
     * @symbol ?_handleItemUseEvent@ScriptItemGameplayHandler@@AEAA_NAEAUItemUseEvent@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VScriptWorldEvents@ScriptModuleMinecraft@@@4@@Z
     */
    MCAPI bool _handleItemUseEvent(struct ItemUseEvent &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptWorldEvents>);
    /**
     * @symbol ?_handleItemUseOnEvent@ScriptItemGameplayHandler@@AEAA_NAEAUItemUseOnEvent@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VScriptWorldEvents@ScriptModuleMinecraft@@@4@@Z
     */
    MCAPI bool _handleItemUseOnEvent(struct ItemUseOnEvent &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptWorldEvents>);

private:

};