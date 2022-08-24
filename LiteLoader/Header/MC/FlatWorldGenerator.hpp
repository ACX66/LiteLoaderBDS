/**
 * @file  FlatWorldGenerator.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FlatWorldGenerator.
 *
 */
class FlatWorldGenerator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLATWORLDGENERATOR
public:
    class FlatWorldGenerator& operator=(class FlatWorldGenerator const &) = delete;
    FlatWorldGenerator(class FlatWorldGenerator const &) = delete;
    FlatWorldGenerator() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FLATWORLDGENERATOR
    /**
     * @note   Virtual function table index: -1
     * @symbol ?decorateWorldGenLoadChunk@FlatWorldGenerator@@MEBAXAEAVBiome@@AEAVLevelChunk@@AEAVBlockVolumeTarget@@AEAVRandom@@AEBVChunkPos@@@Z
     */
    MCVAPI void decorateWorldGenLoadChunk(class Biome &, class LevelChunk &, class BlockVolumeTarget &, class Random &, class ChunkPos const &) const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?decorateWorldGenPostProcess@FlatWorldGenerator@@MEBAXAEAVBiome@@AEAVLevelChunk@@AEAVBlockSource@@AEAVRandom@@@Z
     */
    MCVAPI void decorateWorldGenPostProcess(class Biome &, class LevelChunk &, class BlockSource &, class Random &) const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?findNearestStructureFeature@FlatWorldGenerator@@UEAA_NW4StructureFeatureType@@AEBVBlockPos@@AEAV3@_N@Z
     */
    MCVAPI bool findNearestStructureFeature(enum StructureFeatureType, class BlockPos const &, class BlockPos &, bool);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?findSpawnPosition@FlatWorldGenerator@@UEBA?AVBlockPos@@XZ
     */
    MCVAPI class BlockPos findSpawnPosition() const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?findStructureFeatureTypeAt@FlatWorldGenerator@@UEAA?AW4StructureFeatureType@@AEBVBlockPos@@@Z
     */
    MCVAPI enum StructureFeatureType findStructureFeatureTypeAt(class BlockPos const &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?garbageCollectBlueprints@FlatWorldGenerator@@UEAAXV?$buffer_span@VChunkPos@@@@@Z
     */
    MCVAPI void garbageCollectBlueprints(class buffer_span<class ChunkPos>);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?getBiomeArea@FlatWorldGenerator@@UEBA?AVBiomeArea@@AEBVBoundingBox@@I@Z
     */
    MCVAPI class BiomeArea getBiomeArea(class BoundingBox const &, unsigned int) const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?getBiomeSource@FlatWorldGenerator@@UEBAAEBVBiomeSource@@XZ
     */
    MCVAPI class BiomeSource const & getBiomeSource() const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?getBlockVolumeDimensions@FlatWorldGenerator@@UEBA?AUBlockVolumeDimensions@WorldGenerator@@XZ
     */
    MCVAPI struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?isStructureFeatureTypeAt@FlatWorldGenerator@@UEBA_NAEBVBlockPos@@W4StructureFeatureType@@@Z
     */
    MCVAPI bool isStructureFeatureTypeAt(class BlockPos const &, enum StructureFeatureType) const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?loadChunk@FlatWorldGenerator@@UEAAXAEAVLevelChunk@@_N@Z
     */
    MCVAPI void loadChunk(class LevelChunk &, bool);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?postProcess@FlatWorldGenerator@@UEAA_NAEAVChunkViewSource@@@Z
     */
    MCVAPI bool postProcess(class ChunkViewSource &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?prepareAndComputeHeights@FlatWorldGenerator@@UEAAXAEAVBlockVolume@@AEBVChunkPos@@AEAV?$vector@FV?$allocator@F@std@@@std@@_NH@Z
     */
    MCVAPI void prepareAndComputeHeights(class BlockVolume &, class ChunkPos const &, std::vector<short> &, bool, int);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?prepareHeights@FlatWorldGenerator@@UEAAXAEAVBlockVolume@@AEBVChunkPos@@_N@Z
     */
    MCVAPI void prepareHeights(class BlockVolume &, class ChunkPos const &, bool);
#endif
    /**
     * @symbol ??0FlatWorldGenerator@@QEAA@AEAVDimension@@IAEBVValue@Json@@@Z
     */
    MCAPI FlatWorldGenerator(class Dimension &, unsigned int, class Json::Value const &);

//private:
    /**
     * @symbol ?_generatePrototypeBlockValues@FlatWorldGenerator@@AEAAXAEBVFlatWorldGeneratorOptions@@F@Z
     */
    MCAPI void _generatePrototypeBlockValues(class FlatWorldGeneratorOptions const &, short);

private:

};