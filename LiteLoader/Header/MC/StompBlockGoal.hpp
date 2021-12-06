// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "BaseMoveToGoal.hpp"
#define EXTRA_INCLUDE_PART_STOMPBLOCKGOAL
#include "Extra/StompBlockGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_STOMPBLOCKGOAL
class StompBlockGoal : public BaseMoveToGoal {
#include "Extra/StompBlockGoalAPI.hpp"
public:
    /*0*/ virtual ~StompBlockGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
    /*8*/ virtual void __unk_vfn_1();
    /*9*/ virtual void __unk_vfn_2();
    /*10*/ virtual bool isValidTarget(class BlockSource&, class BlockPos const&);
    /*11*/ virtual bool _canReach(class BlockPos const&);
    /*12*/ virtual void _moveToBlock();
    /*13*/ virtual unsigned __int64 _getRepathTime() const;
    /*14*/ virtual bool findTargetBlock();
    /*15*/ virtual void _createBreakProgressParticles(class Level&, class BlockSource&, class BlockPos);
    /*16*/ virtual void _createDestroyParticles(class Level&, class BlockSource&, class BlockPos);
    /*17*/ virtual void _playBreakProgressSound(class Level&, class BlockSource&, class BlockPos);
    /*18*/ virtual void _playDestroySound(class Level&, class BlockSource&, class BlockPos);


protected:

private:
};