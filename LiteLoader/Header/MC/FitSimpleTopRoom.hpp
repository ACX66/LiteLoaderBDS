// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_FITSIMPLETOPROOM
#include "Extra/FitSimpleTopRoomAPI.hpp"
#undef EXTRA_INCLUDE_PART_FITSIMPLETOPROOM
class FitSimpleTopRoom {
#include "Extra/FitSimpleTopRoomAPI.hpp"
public:
    /*0*/ virtual ~FitSimpleTopRoom();
    /*1*/ virtual bool fits(class RoomDefinition const&) const;
    /*2*/ virtual std::unique_ptr<class OceanMonumentPiece> create(int&, class std::shared_ptr<class RoomDefinition>, class Random&);


protected:

private:
};