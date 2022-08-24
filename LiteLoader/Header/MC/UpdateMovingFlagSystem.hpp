/**
 * @file  UpdateMovingFlagSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class UpdateMovingFlagSystem.
 *
 */
class UpdateMovingFlagSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATEMOVINGFLAGSYSTEM
public:
    class UpdateMovingFlagSystem& operator=(class UpdateMovingFlagSystem const &) = delete;
    UpdateMovingFlagSystem(class UpdateMovingFlagSystem const &) = delete;
    UpdateMovingFlagSystem() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_UPDATEMOVINGFLAGSYSTEM
#endif
    /**
     * @symbol ?createUpdateMovingFlagSystem@UpdateMovingFlagSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createUpdateMovingFlagSystem();

};