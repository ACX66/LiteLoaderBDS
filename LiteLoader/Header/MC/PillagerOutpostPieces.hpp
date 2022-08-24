/**
 * @file  PillagerOutpostPieces.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PillagerOutpostPieces.
 *
 */
class PillagerOutpostPieces {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PILLAGEROUTPOSTPIECES
public:
    class PillagerOutpostPieces& operator=(class PillagerOutpostPieces const &) = delete;
    PillagerOutpostPieces(class PillagerOutpostPieces const &) = delete;
    PillagerOutpostPieces() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PILLAGEROUTPOSTPIECES
#endif
    /**
     * @symbol ?addPieces@PillagerOutpostPieces@@SAXV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@AEBVBlockPos@@AEBW4Rotation@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@AEAVDimension@@@Z
     */
    MCAPI static void addPieces(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class BlockPos const &, enum Rotation const &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, class Dimension &);

//private:
    /**
     * @symbol ?_addPiece@PillagerOutpostPieces@@CAXV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@AEBVBlockPos@@AEBW4Rotation@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@AEAVDimension@@@Z
     */
    MCAPI static void _addPiece(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class BlockPos const &, enum Rotation const &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, class Dimension &);
    /**
     * @symbol ?_addScatteredPieces@PillagerOutpostPieces@@CAXV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@AEAVRandom@@AEBW4Rotation@@AEBVBlockPos@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVDimension@@@Z
     */
    MCAPI static void _addScatteredPieces(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class Random &, enum Rotation const &, class BlockPos const &, std::vector<std::unique_ptr<class StructurePiece>> &, class Dimension &);

private:
MCAPI static class std::array<class gsl::basic_string_span<char const, -1>, 7> MSC_FEATURES;
MCAPI static class gsl::basic_string_span<char const, -1> PILLAGER_LOOT;
MCAPI static class gsl::basic_string_span<char const, -1> STRUCTURE_WATCHTOWER;
MCAPI static class gsl::basic_string_span<char const, -1> STRUCTURE_WATCHTOWER_OVERGROWN;

};