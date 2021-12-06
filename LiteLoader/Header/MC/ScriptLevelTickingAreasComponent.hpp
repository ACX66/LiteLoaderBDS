// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "ScriptApi.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTLEVELTICKINGAREASCOMPONENT
#include "Extra/ScriptLevelTickingAreasComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTLEVELTICKINGAREASCOMPONENT
class ScriptLevelTickingAreasComponent {
#include "Extra/ScriptLevelTickingAreasComponentAPI.hpp"
public:
    /*0*/ virtual ~ScriptLevelTickingAreasComponent();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void __unk_vfn_1();
    /*3*/ virtual bool applyComponentTo(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, class Level&, class ScriptApi::ScriptObjectHandle const&) const;
    /*4*/ virtual void __unk_vfn_2();
    /*5*/ virtual void __unk_vfn_3();
    /*6*/ virtual void __unk_vfn_4();
    /*7*/ virtual bool retrieveComponentFrom(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, class Level&, class ScriptApi::ScriptObjectHandle&) const;
    /*8*/ virtual void __unk_vfn_5();
    /*9*/ virtual void __unk_vfn_6();
    /*10*/ virtual void __unk_vfn_7();
    /*11*/ virtual bool hasComponent(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, class Actor&, bool&) const;
    /*12*/ virtual bool hasComponent(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, class Level&, bool&) const;


protected:

private:
    MCAPI static class HashedString const mHash;
};