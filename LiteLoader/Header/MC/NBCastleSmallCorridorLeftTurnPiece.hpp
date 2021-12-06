// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "NetherFortressPiece.hpp"
#define EXTRA_INCLUDE_PART_NBCASTLESMALLCORRIDORLEFTTURNPIECE
#include "Extra/NBCastleSmallCorridorLeftTurnPieceAPI.hpp"
#undef EXTRA_INCLUDE_PART_NBCASTLESMALLCORRIDORLEFTTURNPIECE
class NBCastleSmallCorridorLeftTurnPiece : public NetherFortressPiece {
#include "Extra/NBCastleSmallCorridorLeftTurnPieceAPI.hpp"
public:
    /*0*/ virtual ~NBCastleSmallCorridorLeftTurnPiece();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual int /*enum enum StructurePieceType*/ getType() const;
    /*3*/ virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    /*4*/ virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /*5*/ virtual void __unk_vfn_1();
    /*6*/ virtual void __unk_vfn_2();


protected:

private:
};