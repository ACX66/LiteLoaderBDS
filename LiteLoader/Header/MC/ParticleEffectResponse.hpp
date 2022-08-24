/**
 * @file  ParticleEffectResponse.hpp
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
 * @brief MC class ParticleEffectResponse.
 *
 */
class ParticleEffectResponse {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PARTICLEEFFECTRESPONSE
public:
    class ParticleEffectResponse& operator=(class ParticleEffectResponse const &) = delete;
    ParticleEffectResponse(class ParticleEffectResponse const &) = delete;
    ParticleEffectResponse() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~ParticleEffectResponse();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?getName@ParticleEffectResponse@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @note   Virtual function table index: 2
     * @symbol ?executeAction@ParticleEffectResponse@@UEBAXAEAVRenderParams@@@Z
     */
    virtual void executeAction(class RenderParams &) const;
    /**
     * @note   Virtual function table index: 3
     * @symbol ?buildSchema@ParticleEffectResponse@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UEventResponseCollection@@@JsonUtil@@@std@@AEBV?$Factory@VEventResponse@@$$V@@@Z
     */
    virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>> &, class Factory<class EventResponse> const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PARTICLEEFFECTRESPONSE
#endif
MCAPI static std::string const NameID;

};