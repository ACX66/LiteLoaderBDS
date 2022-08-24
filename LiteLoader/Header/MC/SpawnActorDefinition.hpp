/**
 * @file  SpawnActorDefinition.hpp
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
 * @brief MC class SpawnActorDefinition.
 *
 */
class SpawnActorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNACTORDEFINITION
public:
    class SpawnActorDefinition& operator=(class SpawnActorDefinition const &) = delete;
    SpawnActorDefinition(class SpawnActorDefinition const &) = delete;
    SpawnActorDefinition() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPAWNACTORDEFINITION
#endif
    /**
     * @symbol ?initialize@SpawnActorDefinition@@QEBAXAEAVEntityContext@@AEAVSpawnActorComponent@@@Z
     */
    MCAPI void initialize(class EntityContext &, class SpawnActorComponent &) const;
    /**
     * @symbol ?buildSchema@SpawnActorDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VSpawnActorDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SpawnActorDefinition>> &);

};