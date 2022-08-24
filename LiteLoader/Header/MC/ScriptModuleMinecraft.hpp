/**
 * @file  ScriptModuleMinecraft.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Scripting.hpp"

#define BEFORE_EXTRA
namespace Scripting {
    template <typename T>
    class ClassBindingBuilder {
        ClassBindingBuilder() = delete;
        ClassBindingBuilder(ClassBindingBuilder const&) = delete;
        ClassBindingBuilder(ClassBindingBuilder const&&) = delete;
    };
    template <typename T, typename T2>
    class EnumBindingBuilder {
        EnumBindingBuilder() = delete;
        EnumBindingBuilder(EnumBindingBuilder const&) = delete;
        EnumBindingBuilder(EnumBindingBuilder const&&) = delete;
    };
    struct Version;
};
#undef BEFORE_EXTRA

/**
 * @brief MC namespace ScriptModuleMinecraft.
 *
 */
namespace ScriptModuleMinecraft {

#define AFTER_EXTRA
enum class ScriptFacing {
    Unknown = -1,
    Down = 0,
    Up = 1,
    North = 2,
    South = 3,
    West = 4,
    East = 5,
};

enum ScriptMessageSourceType;
struct ScriptNavigationResult {
public:
    bool mIsFullPath;
    std::vector<BlockPos> mPath;

public:
    struct ScriptNavigationResult& operator=(struct ScriptNavigationResult const&) = delete;
    ScriptNavigationResult(struct ScriptNavigationResult const&) = delete;
    ScriptNavigationResult() = delete;

public:
    MCAPI ~ScriptNavigationResult();
};
#undef AFTER_EXTRA
    /**
     * @symbol ?bindBlockLocation@ScriptModuleMinecraft@@YA?AV?$ClassBindingBuilder@VBlockPos@@@Scripting@@XZ
     */
    MCAPI class Scripting::ClassBindingBuilder<class BlockPos> bindBlockLocation();
    /**
     * @symbol ?bindFacingEnum@ScriptModuleMinecraft@@YA?AV?$EnumBindingBuilder@W4ScriptFacing@ScriptModuleMinecraft@@W412@@Scripting@@XZ
     */
    MCAPI class Scripting::EnumBindingBuilder<enum ScriptModuleMinecraft::ScriptFacing, enum ScriptModuleMinecraft::ScriptFacing> bindFacingEnum();
    /**
     * @symbol ?bindMessageSourceType@ScriptModuleMinecraft@@YA?AV?$EnumBindingBuilder@W4ScriptMessageSourceType@ScriptModuleMinecraft@@W412@@Scripting@@XZ
     */
    MCAPI class Scripting::EnumBindingBuilder<enum ScriptModuleMinecraft::ScriptMessageSourceType, enum ScriptModuleMinecraft::ScriptMessageSourceType> bindMessageSourceType();

};