// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_SCRIPTLEVELEVENTLISTENER
#include "Extra/ScriptLevelEventListenerAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTLEVELEVENTLISTENER
class ScriptLevelEventListener {
#include "Extra/ScriptLevelEventListenerAPI.hpp"
public:
    /*0*/ virtual ~ScriptLevelEventListener();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void __unk_vfn_1();
    /*3*/ virtual void __unk_vfn_2();
    /*4*/ virtual void __unk_vfn_3();
    /*5*/ virtual void __unk_vfn_4();
    /*6*/ virtual void __unk_vfn_5();
    /*7*/ virtual int /*enum enum EventResult*/ onLevelTick();
    /*8*/ virtual int /*enum enum EventResult*/ onLevelWeatherChange(std::string const&, bool, bool);
    /*9*/ virtual void __unk_vfn_6();
    /*10*/ virtual void __unk_vfn_7();
    /*11*/ virtual void __unk_vfn_8();
    /*12*/ virtual void __unk_vfn_9();
    /*13*/ virtual int /*enum enum EventResult*/ onLevelStartLeaveGame(struct LevelStartLeaveGameEvent const&);


protected:

private:
};