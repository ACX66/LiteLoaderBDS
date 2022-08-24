/**
 * @file  HitboxDefinition.hpp
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
 * @brief MC class HitboxDefinition.
 *
 */
class HitboxDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HITBOXDEFINITION
public:
    class HitboxDefinition& operator=(class HitboxDefinition const &) = delete;
    HitboxDefinition(class HitboxDefinition const &) = delete;
    HitboxDefinition() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HITBOXDEFINITION
#endif
    /**
     * @symbol ?addAABB@HitboxDefinition@@QEAAXAEBUHitboxJson@@@Z
     */
    MCAPI void addAABB(struct HitboxJson const &);
    /**
     * @symbol ?initialize@HitboxDefinition@@QEAAXAEAVEntityContext@@AEAVHitboxComponent@@@Z
     */
    MCAPI void initialize(class EntityContext &, class HitboxComponent &);
    /**
     * @symbol ?buildSchema@HitboxDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VHitboxDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class HitboxDefinition>> &);

};