/**
 * @file  ClassroomModeListener.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockSourceListener.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ClassroomModeListener.
 *
 */
class ClassroomModeListener : public BlockSourceListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLASSROOMMODELISTENER
public:
    class ClassroomModeListener& operator=(class ClassroomModeListener const &) = delete;
    ClassroomModeListener(class ClassroomModeListener const &) = delete;
    ClassroomModeListener() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~ClassroomModeListener();
    /**
     * @note   Virtual function table index: 1
     * @symbol 
     */
    virtual void __unk_vfn_1();
    /**
     * @note   Virtual function table index: 3
     * @symbol 
     */
    virtual void __unk_vfn_3();
    /**
     * @note   Virtual function table index: 4
     * @symbol 
     */
    virtual void __unk_vfn_4();
    /**
     * @note   Virtual function table index: 6
     * @symbol 
     */
    virtual void __unk_vfn_6();
    /**
     * @note   Virtual function table index: 8
     * @symbol 
     */
    virtual void __unk_vfn_8();
    /**
     * @note   Virtual function table index: 9
     * @symbol 
     */
    virtual void __unk_vfn_9();
    /**
     * @note   Virtual function table index: 10
     * @symbol 
     */
    virtual void __unk_vfn_10();
    /**
     * @note   Virtual function table index: 11
     * @symbol ?addParticle@LevelListener@@UEAAPEAVParticle@@W4ParticleType@@AEBVVec3@@1HPEBVCompoundTag@@_N@Z
     */
    virtual class Particle * addParticle(enum ParticleType, class Vec3 const &, class Vec3 const &, int, class CompoundTag const *, bool);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CLASSROOMMODELISTENER
    /**
     * @note   Virtual function table index: -1
     * @symbol ?onAreaChanged@ClassroomModeListener@@UEAAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    MCVAPI void onAreaChanged(class BlockSource &, class BlockPos const &, class BlockPos const &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?onBlockChanged@ClassroomModeListener@@UEAAXAEAVBlockSource@@AEBVBlockPos@@IAEBVBlock@@2HPEBUActorBlockSyncMessage@@W4BlockChangedEventTarget@@PEAVActor@@@Z
     */
    MCVAPI void onBlockChanged(class BlockSource &, class BlockPos const &, unsigned int, class Block const &, class Block const &, int, struct ActorBlockSyncMessage const *, enum BlockChangedEventTarget, class Actor *);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?onChunkLoaded@ClassroomModeListener@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
     */
    MCVAPI void onChunkLoaded(class ChunkSource &, class LevelChunk &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?onChunkUnloaded@ClassroomModeListener@@UEAAXAEAVLevelChunk@@@Z
     */
    MCVAPI void onChunkUnloaded(class LevelChunk &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?onEntityAdded@ClassroomModeListener@@UEAAXAEAVActor@@@Z
     */
    MCVAPI void onEntityAdded(class Actor &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?onEntityRemoved@ClassroomModeListener@@UEAAXAEAVActor@@@Z
     */
    MCVAPI void onEntityRemoved(class Actor &);
#endif
    /**
     * @symbol ??0ClassroomModeListener@@QEAA@AEAVIMinecraftEventing@@@Z
     */
    MCAPI ClassroomModeListener(class IMinecraftEventing &);

};