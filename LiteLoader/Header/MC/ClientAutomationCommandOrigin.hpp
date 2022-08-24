/**
 * @file  ClientAutomationCommandOrigin.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "CommandOrigin.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ClientAutomationCommandOrigin.
 *
 */
class ClientAutomationCommandOrigin : public CommandOrigin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTAUTOMATIONCOMMANDORIGIN
public:
    class ClientAutomationCommandOrigin& operator=(class ClientAutomationCommandOrigin const &) = delete;
    ClientAutomationCommandOrigin(class ClientAutomationCommandOrigin const &) = delete;
    ClientAutomationCommandOrigin() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~ClientAutomationCommandOrigin();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?getRequestId@ClientAutomationCommandOrigin@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getRequestId() const;
    /**
     * @note   Virtual function table index: 2
     * @symbol ?getName@ClientAutomationCommandOrigin@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @note   Virtual function table index: 3
     * @symbol ?getBlockPosition@ClientAutomationCommandOrigin@@UEBA?AVBlockPos@@XZ
     */
    virtual class BlockPos getBlockPosition() const;
    /**
     * @note   Virtual function table index: 4
     * @symbol ?getWorldPosition@ClientAutomationCommandOrigin@@UEBA?AVVec3@@XZ
     */
    virtual class Vec3 getWorldPosition() const;
    /**
     * @note   Virtual function table index: 5
     * @symbol ?getRotation@ClientAutomationCommandOrigin@@UEBA?AV?$optional@VVec2@@@std@@XZ
     */
    virtual class std::optional<class Vec2> getRotation() const;
    /**
     * @note   Virtual function table index: 6
     * @symbol ?getLevel@ClientAutomationCommandOrigin@@UEBAPEAVLevel@@XZ
     */
    virtual class Level * getLevel() const;
    /**
     * @note   Virtual function table index: 7
     * @symbol ?getDimension@ClientAutomationCommandOrigin@@UEBAPEAVDimension@@XZ
     */
    virtual class Dimension * getDimension() const;
    /**
     * @note   Virtual function table index: 8
     * @symbol ?getEntity@ClientAutomationCommandOrigin@@UEBAPEAVActor@@XZ
     */
    virtual class Actor * getEntity() const;
    /**
     * @note   Virtual function table index: 9
     * @symbol ?getPermissionsLevel@ClientAutomationCommandOrigin@@UEBA?AW4CommandPermissionLevel@@XZ
     */
    virtual enum CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @note   Virtual function table index: 10
     * @symbol ?clone@ClientAutomationCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @note   Virtual function table index: 17
     * @symbol ?canUseCommandsWithoutCheatsEnabled@ClientAutomationCommandOrigin@@UEBA_NXZ
     */
    virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /**
     * @note   Virtual function table index: 18
     * @symbol ?isSelectorExpansionAllowed@ClientAutomationCommandOrigin@@UEBA_NXZ
     */
    virtual bool isSelectorExpansionAllowed() const;
    /**
     * @note   Virtual function table index: 23
     * @symbol ?getOriginType@ClientAutomationCommandOrigin@@UEBA?AW4CommandOriginType@@XZ
     */
    virtual enum CommandOriginType getOriginType() const;
    /**
     * @note   Virtual function table index: 24
     * @symbol ?toCommandOriginData@ClientAutomationCommandOrigin@@UEBA?AUCommandOriginData@@XZ
     */
    virtual struct CommandOriginData toCommandOriginData() const;
    /**
     * @note   Virtual function table index: 29
     * @symbol ?serialize@ClientAutomationCommandOrigin@@UEBA?AVCompoundTag@@XZ
     */
    virtual class CompoundTag serialize() const;
    /**
     * @note   Virtual function table index: 30
     * @symbol ?isValid@ClientAutomationCommandOrigin@@UEBA_NXZ
     */
    virtual bool isValid() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CLIENTAUTOMATIONCOMMANDORIGIN
#endif
    /**
     * @symbol ??0ClientAutomationCommandOrigin@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI ClientAutomationCommandOrigin(std::string const &);

};