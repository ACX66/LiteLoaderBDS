/**
 * @file  IsBabyDefinition.hpp
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
 * @brief MC structure IsBabyDefinition.
 *
 */
struct IsBabyDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISBABYDEFINITION
public:
    struct IsBabyDefinition& operator=(struct IsBabyDefinition const &) = delete;
    IsBabyDefinition(struct IsBabyDefinition const &) = delete;
    IsBabyDefinition() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ISBABYDEFINITION
#endif
    /**
     * @symbol ?initialize@IsBabyDefinition@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void initialize(class EntityContext &);
    /**
     * @symbol ?uninitialize@IsBabyDefinition@@QEAAXAEAVEntityContext@@@Z
     */
    MCAPI void uninitialize(class EntityContext &);
    /**
     * @symbol ?buildSchema@IsBabyDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UIsBabyDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsBabyDefinition>> &);

};