// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "StructurePiece.hpp"
#define EXTRA_INCLUDE_PART_POOLELEMENTSTRUCTUREPIECE
#include "Extra/PoolElementStructurePieceAPI.hpp"
#undef EXTRA_INCLUDE_PART_POOLELEMENTSTRUCTUREPIECE
class PoolElementStructurePiece : public StructurePiece {
#include "Extra/PoolElementStructurePieceAPI.hpp"
public:
    /*0*/ virtual ~PoolElementStructurePiece();
    /*1*/ virtual void moveBoundingBox(int, int, int);
    /*2*/ virtual class PoolElementStructurePiece* asPoolElement();
    /*3*/ virtual int /*enum enum StructurePieceType*/ getType() const;
    /*4*/ virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    /*5*/ virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /*6*/ virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
    /*7*/ virtual bool canBeReplaced(class BlockSource&, int, int, int, class BoundingBox const&);
    /*8*/ virtual void addHardcodedSpawnAreas(class LevelChunk&) const;
    /*9*/ virtual int generateHeightAtPosition(class BlockPos const&, class Dimension&, class BlockVolume&, class std::unordered_map<class ChunkPos, std::unique_ptr<std::vector<short>>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, std::unique_ptr<std::vector<short>> > > >&) const = 0;
    /*10*/ virtual class Block const* getSupportBlock(class BlockSource&, class BlockPos const&, class Block const&) const = 0;
    /*11*/ virtual class Block const& getBeardStabilizeBlock(class Block const&) const = 0;
    /*12*/ virtual int /*enum enum AdjustmentEffect*/ getTerrainAdjustmentEffect() const = 0;
    /*13*/ virtual bool _needsPostProcessing(class BlockSource&);


protected:

private:
};