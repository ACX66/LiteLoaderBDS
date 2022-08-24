/**
 * @file  RandomizableBlockActorContainer.hpp
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
 * @brief MC class RandomizableBlockActorContainer.
 *
 */
class RandomizableBlockActorContainer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMIZABLEBLOCKACTORCONTAINER
public:
    class RandomizableBlockActorContainer& operator=(class RandomizableBlockActorContainer const &) = delete;
    RandomizableBlockActorContainer(class RandomizableBlockActorContainer const &) = delete;
    RandomizableBlockActorContainer() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RANDOMIZABLEBLOCKACTORCONTAINER
    /**
     * @note   Virtual function table index: -1
     * @symbol ?dropContents@RandomizableBlockActorContainer@@UEAAXAEAVBlockSource@@AEBVVec3@@_N@Z
     */
    MCVAPI void dropContents(class BlockSource &, class Vec3 const &, bool);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?initializeContainerContents@RandomizableBlockActorContainer@@UEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void initializeContainerContents(class BlockSource &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?setContainerChanged@RandomizableBlockActorContainer@@UEAAXH@Z
     */
    MCVAPI void setContainerChanged(int);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?startOpen@RandomizableBlockActorContainer@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ??1RandomizableBlockActorContainer@@UEAA@XZ
     */
    MCVAPI ~RandomizableBlockActorContainer();
#endif
    /**
     * @symbol ??0RandomizableBlockActorContainer@@QEAA@W4BlockActorType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@W4ContainerType@@@Z
     */
    MCAPI RandomizableBlockActorContainer(enum BlockActorType, std::string const &, class BlockPos const &, enum ContainerType);

};