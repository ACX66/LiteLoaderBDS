/**
 * @file  RegionHillsOperationNode.hpp
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
 * @brief MC class RegionHillsOperationNode.
 *
 */
class RegionHillsOperationNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REGIONHILLSOPERATIONNODE
public:
    class RegionHillsOperationNode& operator=(class RegionHillsOperationNode const &) = delete;
    RegionHillsOperationNode(class RegionHillsOperationNode const &) = delete;
    RegionHillsOperationNode() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~RegionHillsOperationNode();
    /**
     * @note   Virtual function table index: 3
     * @symbol ?_fillArea@RegionHillsOperationNode@@MEBAXAEAV?$WorkingData@PEAVBiome@@PEAV1@@OperationNodeDetails@@AEBVPos2d@@1H@Z
     */
    virtual void _fillArea(class OperationNodeDetails::WorkingData<class Biome *, class Biome *> &, class Pos2d const &, class Pos2d const &, int) const;
    /**
     * @note   Virtual function table index: 4
     * @symbol ?_getAreaRead@RegionHillsOperationNode@@MEBA?AV?$tuple@VPos2d@@V1@@std@@AEBVPos2d@@0@Z
     */
    virtual class std::tuple<class Pos2d, class Pos2d> _getAreaRead(class Pos2d const &, class Pos2d const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_REGIONHILLSOPERATIONNODE
#endif
    /**
     * @symbol ??0RegionHillsOperationNode@@QEAA@IAEAV?$shared_ptr@V?$OperationNode@PEAVBiome@@VPos2d@@@@@std@@AEAV?$shared_ptr@V?$OperationNode@HVPos2d@@@@@2@AEBVBiomeRegistry@@@Z
     */
    MCAPI RegionHillsOperationNode(unsigned int, class std::shared_ptr<class OperationNode<class Biome *, class Pos2d>> &, class std::shared_ptr<class OperationNode<int, class Pos2d>> &, class BiomeRegistry const &);

};