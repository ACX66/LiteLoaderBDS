/**
 * @file  StructureStart.hpp
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
 * @brief MC class StructureStart.
 *
 */
class StructureStart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURESTART
public:
    class StructureStart& operator=(class StructureStart const &) = delete;
    StructureStart(class StructureStart const &) = delete;
    StructureStart() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~StructureStart();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?postProcess@StructureStart@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @note   Virtual function table index: 2
     * @symbol ?isValid@StructureStart@@UEBA_NXZ
     */
    virtual bool isValid() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTURESTART
#endif
    /**
     * @symbol ?postProcessMobsAt@StructureStart@@QEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    MCAPI void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);

//protected:
    /**
     * @symbol ?calculateBoundingBox@StructureStart@@IEAAXXZ
     */
    MCAPI void calculateBoundingBox();
    /**
     * @symbol ?moveBoundingBoxes@StructureStart@@IEAAXH@Z
     */
    MCAPI void moveBoundingBoxes(int);
    /**
     * @symbol ?moveInsideHeights@StructureStart@@IEAAXAEAVRandom@@FF@Z
     */
    MCAPI void moveInsideHeights(class Random &, short, short);
    /**
     * @symbol ?moveToBelowSeaLevel@StructureStart@@IEAAXFFAEAVRandom@@H@Z
     */
    MCAPI void moveToBelowSeaLevel(short, short, class Random &, int);

protected:

};