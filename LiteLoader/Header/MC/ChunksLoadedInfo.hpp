/**
 * @file  ChunksLoadedInfo.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure ChunksLoadedInfo.
 *
 */
struct ChunksLoadedInfo {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKSLOADEDINFO
public:
    struct ChunksLoadedInfo& operator=(struct ChunksLoadedInfo const &) = delete;
    ChunksLoadedInfo(struct ChunksLoadedInfo const &) = delete;
    ChunksLoadedInfo() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHUNKSLOADEDINFO
#endif
    /**
     * @symbol ?getChunkViewSource@ChunksLoadedInfo@@QEBA?AV?$unique_ptr@VChunkViewSource@@U?$default_delete@VChunkViewSource@@@std@@@std@@XZ
     */
    MCAPI std::unique_ptr<class ChunkViewSource> getChunkViewSource() const;
    /**
     * @symbol ?getChunksLoadedStatus@ChunksLoadedInfo@@QEBA?AW4ChunksLoadedStatus@@XZ
     */
    MCAPI enum ChunksLoadedStatus getChunksLoadedStatus() const;
    /**
     * @symbol ?areAllChunksLoadedAndTicking@ChunksLoadedInfo@@SA?AW4ChunksLoadedStatus@@AEBVDimension@@AEAVChunkSource@@AEBUBounds@@_NUTick@@_N@Z
     */
    MCAPI static enum ChunksLoadedStatus areAllChunksLoadedAndTicking(class Dimension const &, class ChunkSource &, struct Bounds const &, bool, struct Tick, bool);
    /**
     * @symbol ?calculateChunksLoadedInfo@ChunksLoadedInfo@@SA?AU1@AEBVDimension@@AEAVChunkSource@@AEBUBounds@@_NUTick@@_N5@Z
     */
    MCAPI static struct ChunksLoadedInfo calculateChunksLoadedInfo(class Dimension const &, class ChunkSource &, struct Bounds const &, bool, struct Tick, bool, bool);

};