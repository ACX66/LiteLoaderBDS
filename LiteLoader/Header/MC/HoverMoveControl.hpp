// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "MoveControl.hpp"
#define EXTRA_INCLUDE_PART_HOVERMOVECONTROL
#include "Extra/HoverMoveControlAPI.hpp"
#undef EXTRA_INCLUDE_PART_HOVERMOVECONTROL
class HoverMoveControl : public MoveControl {
#include "Extra/HoverMoveControlAPI.hpp"
public:
    /*0*/ virtual ~HoverMoveControl();
    /*1*/ virtual void tick(class MoveControlComponent&, class Mob&);


protected:

private:
};