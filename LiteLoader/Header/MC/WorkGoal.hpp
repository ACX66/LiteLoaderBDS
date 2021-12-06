// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "MoveToPOIGoal.hpp"
#define EXTRA_INCLUDE_PART_WORKGOAL
#include "Extra/WorkGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_WORKGOAL
class WorkGoal : public MoveToPOIGoal {
#include "Extra/WorkGoalAPI.hpp"
public:
    /*0*/ virtual ~WorkGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
    /*8*/ virtual void __unk_vfn_1();
    /*9*/ virtual void __unk_vfn_2();
    /*10*/ virtual unsigned __int64 _getRepathTime() const;


protected:

private:
    MCAPI bool _isInsideOrIsNotRaining();
    MCAPI static int const RAIN_CHECK_MAX_COOLDOWN;
    MCAPI static int const WORK_TIMESTAMP_UPDATE_INVERVAL;
};