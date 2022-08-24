/**
 * @file  ItemEventResponseFactory.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemEventResponseFactory.
 *
 */
class ItemEventResponseFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMEVENTRESPONSEFACTORY
public:
    class ItemEventResponseFactory& operator=(class ItemEventResponseFactory const &) = delete;
    ItemEventResponseFactory(class ItemEventResponseFactory const &) = delete;
    ItemEventResponseFactory() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~ItemEventResponseFactory();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?initializeFactory@ItemEventResponseFactory@@UEAAXAEBVExperiments@@@Z
     */
    virtual void initializeFactory(class Experiments const &);
    /**
     * @note   Virtual function table index: 2
     * @symbol ?initSchema@ItemEventResponseFactory@@UEAAXXZ
     */
    virtual void initSchema();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMEVENTRESPONSEFACTORY
#endif

};