/**
 * @file  ScriptSettings.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ScriptSettings.
 *
 */
struct ScriptSettings {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSETTINGS
public:
    struct ScriptSettings& operator=(struct ScriptSettings const &) = delete;
    ScriptSettings(struct ScriptSettings const &) = delete;
    ScriptSettings() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTSETTINGS
#endif
    /**
     * @symbol ??0ScriptSettings@@QEAA@$$QEAU0@@Z
     */
    MCAPI ScriptSettings(struct ScriptSettings &&);
    /**
     * @symbol ??1ScriptSettings@@QEAA@XZ
     */
    MCAPI ~ScriptSettings();

};