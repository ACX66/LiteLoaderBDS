// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "StructurePiece.hpp"
#define EXTRA_INCLUDE_PART_OCEANMONUMENTPIECE
#include "Extra/OceanMonumentPieceAPI.hpp"
#undef EXTRA_INCLUDE_PART_OCEANMONUMENTPIECE
class OceanMonumentPiece : public StructurePiece {
#include "Extra/OceanMonumentPieceAPI.hpp"
public:
    /*0*/ virtual ~OceanMonumentPiece();
    /*1*/ virtual class PoolElementStructurePiece* asPoolElement();
    /*2*/ virtual int /*enum enum StructurePieceType*/ getType() const;
    /*3*/ virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    /*4*/ virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&) = 0;
    /*5*/ virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
    /*6*/ virtual int getWorldX(int, int);
    /*7*/ virtual int getWorldZ(int, int);
    /*8*/ virtual bool canBeReplaced(class BlockSource&, int, int, int, class BoundingBox const&);
    /*9*/ virtual void addHardcodedSpawnAreas(class LevelChunk&) const;


protected:
    MCAPI bool chunkIntersects(class BoundingBox const&, int, int, int, int);
    MCAPI void generateDefaultFloor(class BlockSource&, class BoundingBox const&, int, int, bool);
    MCAPI void spawnElder(class BlockSource&, class BoundingBox const&, int, int, int);
    MCAPI static int mGridroomLeftWingConnectIndex;
    MCAPI static int mGridroomRightWingConnectIndex;
    MCAPI static int mGridroomSourceIndex;
    MCAPI static int mGridroomTopConnectIndex;
    MCAPI static int const mLeftWingIndex;
    MCAPI static int const mPenthouseIndex;
    MCAPI static int const mRightWingIndex;

private:
};