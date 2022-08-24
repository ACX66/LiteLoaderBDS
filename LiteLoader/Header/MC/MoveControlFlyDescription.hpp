/**
 * @file  MoveControlFlyDescription.hpp
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
 * @brief MC class MoveControlFlyDescription.
 *
 */
class MoveControlFlyDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVECONTROLFLYDESCRIPTION
public:
    class MoveControlFlyDescription& operator=(class MoveControlFlyDescription const &) = delete;
    MoveControlFlyDescription(class MoveControlFlyDescription const &) = delete;
    MoveControlFlyDescription() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol ?getJsonName@MoveControlFlyDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @note   Virtual function table index: 1
     * @symbol 
     */
    virtual ~MoveControlFlyDescription();
    /**
     * @note   Virtual function table index: 2
     * @symbol ?deserializeData@MoveControlDescription@@UEAAXUDeserializeDataParams@@@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @note   Virtual function table index: 3
     * @symbol ?serializeData@MoveControlDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVECONTROLFLYDESCRIPTION
#endif

};