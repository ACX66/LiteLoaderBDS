// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_LEAPATTARGETGOAL
#include "Extra/LeapAtTargetGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_LEAPATTARGETGOAL
class LeapAtTargetGoal {
#include "Extra/LeapAtTargetGoalAPI.hpp"
public:
    /*0*/ virtual ~LeapAtTargetGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void start();
    /*5*/ virtual void __unk_vfn_1();
    /*6*/ virtual void __unk_vfn_2();
    /*7*/ virtual void appendDebugInfo(std::string&) const;


protected:

private:
};