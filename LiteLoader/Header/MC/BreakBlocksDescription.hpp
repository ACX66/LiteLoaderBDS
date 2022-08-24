/**
 * @file  BreakBlocksDescription.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BreakBlocksDescription.
 *
 */
class BreakBlocksDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREAKBLOCKSDESCRIPTION
public:
    class BreakBlocksDescription& operator=(class BreakBlocksDescription const &) = delete;
    BreakBlocksDescription(class BreakBlocksDescription const &) = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol ?getJsonName@BreakBlocksDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @note   Virtual function table index: 1
     * @symbol 
     */
    virtual ~BreakBlocksDescription();
    /**
     * @note   Virtual function table index: 2
     * @symbol ?deserializeData@BreakBlocksDescription@@UEAAXUDeserializeDataParams@@@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @note   Virtual function table index: 3
     * @symbol ?serializeData@BreakBlocksDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BREAKBLOCKSDESCRIPTION
#endif
    /**
     * @symbol ??0BreakBlocksDescription@@QEAA@XZ
     */
    MCAPI BreakBlocksDescription();

};