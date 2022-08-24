/**
 * @file  BlockPropertyComponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockPropertyComponent.
 *
 */
struct BlockPropertyComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKPROPERTYCOMPONENT
public:
    struct BlockPropertyComponent& operator=(struct BlockPropertyComponent const &) = delete;
    BlockPropertyComponent(struct BlockPropertyComponent const &) = delete;
    BlockPropertyComponent() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKPROPERTYCOMPONENT
#endif
    /**
     * @symbol ?getProperty@BlockPropertyComponent@@QEBA_NW4BlockProperty@@@Z
     */
    MCAPI bool getProperty(enum BlockProperty) const;
    /**
     * @symbol ?hasProperty@BlockPropertyComponent@@QEBA_NW4BlockProperty@@@Z
     */
    MCAPI bool hasProperty(enum BlockProperty) const;

};