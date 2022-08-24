/**
 * @file  TrailComponent.hpp
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
 * @brief MC class TrailComponent.
 *
 */
class TrailComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRAILCOMPONENT
public:
    class TrailComponent& operator=(class TrailComponent const &) = delete;
    TrailComponent(class TrailComponent const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TRAILCOMPONENT
#endif
    /**
     * @symbol ??0TrailComponent@@QEAA@XZ
     */
    MCAPI TrailComponent();
    /**
     * @symbol ?initFromDefinition@TrailComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void initFromDefinition(class Actor &);

};