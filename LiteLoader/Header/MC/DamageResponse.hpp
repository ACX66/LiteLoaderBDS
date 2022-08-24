/**
 * @file  DamageResponse.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DamageResponse.
 *
 */
class DamageResponse {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DAMAGERESPONSE
public:
    class DamageResponse& operator=(class DamageResponse const &) = delete;
    DamageResponse(class DamageResponse const &) = delete;
    DamageResponse() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~DamageResponse();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?getName@DamageResponse@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @note   Virtual function table index: 2
     * @symbol ?executeAction@DamageResponse@@UEBAXAEAVRenderParams@@@Z
     */
    virtual void executeAction(class RenderParams &) const;
    /**
     * @note   Virtual function table index: 3
     * @symbol ?buildSchema@DamageResponse@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UEventResponseCollection@@@JsonUtil@@@std@@AEBV?$Factory@VEventResponse@@$$V@@@Z
     */
    virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>> &, class Factory<class EventResponse> const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DAMAGERESPONSE
#endif
MCAPI static std::string const NameID;

//private:
    /**
     * @symbol ?repairOrHurtItem@DamageResponse@@AEBAXAEBHAEAVRenderParams@@@Z
     */
    MCAPI void repairOrHurtItem(int const &, class RenderParams &) const;

private:

};