/**
 * @file  AbstractCandleBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AbstractCandleBlock.
 *
 */
class AbstractCandleBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ABSTRACTCANDLEBLOCK
public:
    class AbstractCandleBlock& operator=(class AbstractCandleBlock const &) = delete;
    AbstractCandleBlock(class AbstractCandleBlock const &) = delete;
    AbstractCandleBlock() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~AbstractCandleBlock();
    /**
     * @note   Virtual function table index: 19
     * @symbol 
     */
    virtual void __unk_vfn_19();
    /**
     * @note   Virtual function table index: 29
     * @symbol 
     */
    virtual void __unk_vfn_29();
    /**
     * @note   Virtual function table index: 30
     * @symbol 
     */
    virtual void __unk_vfn_30();
    /**
     * @note   Virtual function table index: 32
     * @symbol 
     */
    virtual void __unk_vfn_32();
    /**
     * @note   Virtual function table index: 33
     * @symbol 
     */
    virtual void __unk_vfn_33();
    /**
     * @note   Virtual function table index: 34
     * @symbol 
     */
    virtual void __unk_vfn_34();
    /**
     * @note   Virtual function table index: 35
     * @symbol ?isWaterBlocking@AbstractCandleBlock@@UEBA_NXZ
     */
    virtual bool isWaterBlocking() const;
    /**
     * @note   Virtual function table index: 36
     * @symbol 
     */
    virtual void __unk_vfn_36();
    /**
     * @note   Virtual function table index: 37
     * @symbol 
     */
    virtual void __unk_vfn_37();
    /**
     * @note   Virtual function table index: 38
     * @symbol 
     */
    virtual void __unk_vfn_38();
    /**
     * @note   Virtual function table index: 39
     * @symbol 
     */
    virtual void __unk_vfn_39();
    /**
     * @note   Virtual function table index: 40
     * @symbol 
     */
    virtual void __unk_vfn_40();
    /**
     * @note   Virtual function table index: 41
     * @symbol 
     */
    virtual void __unk_vfn_41();
    /**
     * @note   Virtual function table index: 42
     * @symbol 
     */
    virtual void __unk_vfn_42();
    /**
     * @note   Virtual function table index: 44
     * @symbol 
     */
    virtual void __unk_vfn_44();
    /**
     * @note   Virtual function table index: 45
     * @symbol 
     */
    virtual void __unk_vfn_45();
    /**
     * @note   Virtual function table index: 46
     * @symbol 
     */
    virtual void __unk_vfn_46();
    /**
     * @note   Virtual function table index: 47
     * @symbol 
     */
    virtual void __unk_vfn_47();
    /**
     * @note   Virtual function table index: 48
     * @symbol 
     */
    virtual void __unk_vfn_48();
    /**
     * @note   Virtual function table index: 49
     * @symbol 
     */
    virtual void __unk_vfn_49();
    /**
     * @note   Virtual function table index: 59
     * @symbol 
     */
    virtual void __unk_vfn_59();
    /**
     * @note   Virtual function table index: 60
     * @symbol 
     */
    virtual void __unk_vfn_60();
    /**
     * @note   Virtual function table index: 61
     * @symbol ?canContainLiquid@AbstractCandleBlock@@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
    /**
     * @note   Virtual function table index: 73
     * @symbol 
     */
    virtual void __unk_vfn_73();
    /**
     * @note   Virtual function table index: 80
     * @symbol 
     */
    virtual void __unk_vfn_80();
    /**
     * @note   Virtual function table index: 98
     * @symbol ?neighborChanged@AbstractCandleBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @note   Virtual function table index: 105
     * @symbol 
     */
    virtual void __unk_vfn_105();
    /**
     * @note   Virtual function table index: 113
     * @symbol ?entityInside@AbstractCandleBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
     */
    virtual void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
    /**
     * @note   Virtual function table index: 124
     * @symbol 
     */
    virtual void __unk_vfn_124();
    /**
     * @note   Virtual function table index: 126
     * @symbol 
     */
    virtual void __unk_vfn_126();
    /**
     * @note   Virtual function table index: 127
     * @symbol 
     */
    virtual void __unk_vfn_127();
    /**
     * @note   Virtual function table index: 132
     * @symbol 
     */
    virtual void __unk_vfn_132();
    /**
     * @note   Virtual function table index: 148
     * @symbol 
     */
    virtual void __unk_vfn_148();
    /**
     * @note   Virtual function table index: 152
     * @symbol ?animateTick@AbstractCandleBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @note   Virtual function table index: 154
     * @symbol ?getLightEmission@AbstractCandleBlock@@UEBA?AUBrightness@@AEBVBlock@@@Z
     */
    virtual struct Brightness getLightEmission(class Block const &) const;
    /**
     * @note   Virtual function table index: 157
     * @symbol 
     */
    virtual void __unk_vfn_157();
    /**
     * @note   Virtual function table index: 168
     * @symbol 
     */
    virtual void __unk_vfn_168();
    /**
     * @note   Virtual function table index: 169
     * @symbol 
     */
    virtual void __unk_vfn_169();
    /**
     * @note   Virtual function table index: 170
     * @symbol 
     */
    virtual void __unk_vfn_170();
    /**
     * @note   Virtual function table index: 174
     * @symbol ?tick@AbstractCandleBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @note   Virtual function table index: 177
     * @symbol 
     */
    virtual void __unk_vfn_177();
    /**
     * @note   Virtual function table index: 188
     * @symbol 
     */
    virtual void __unk_vfn_188();
    /**
     * @note   Virtual function table index: 192
     * @symbol ?_getNumCandles@AbstractCandleBlock@@MEBAHAEBVBlock@@@Z
     */
    virtual int _getNumCandles(class Block const &) const;
    /**
     * @note   Virtual function table index: 193
     * @symbol ?_iterateCandles@AbstractCandleBlock@@MEBAXAEBVBlock@@AEBVBlockPos@@V?$function@$$A6AXAEBVVec3@@H@Z@std@@@Z
     */
    virtual void _iterateCandles(class Block const &, class BlockPos const &, class std::function<void (class Vec3 const &, int)>) const;
    /**
     * @note   Virtual function table index: 194
     * @symbol ?_tryLightOnFire@AbstractCandleBlock@@MEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
     */
    virtual void _tryLightOnFire(class BlockSource &, class BlockPos const &, class Actor *) const;
    /**
     * @note   Virtual function table index: 195
     * @symbol 
     */
    virtual void __unk_vfn_195();
    /**
     * @note   Virtual function table index: 196
     * @symbol 
     */
    virtual void __unk_vfn_196();
    /**
     * @note   Virtual function table index: 197
     * @symbol 
     */
    virtual void __unk_vfn_197();
    /**
     * @note   Virtual function table index: 198
     * @symbol 
     */
    virtual void __unk_vfn_198();
    /**
     * @note   Virtual function table index: 199
     * @symbol 
     */
    virtual void __unk_vfn_199();
    /**
     * @symbol ?getDescriptionId@BlockLegacy@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getDescriptionId() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ABSTRACTCANDLEBLOCK
    /**
     * @note   Virtual function table index: -1
     * @symbol ?canBeSilkTouched@AbstractCandleBlock@@UEBA_NXZ
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?hasVariableLighting@AbstractCandleBlock@@UEBA_NXZ
     */
    MCVAPI bool hasVariableLighting() const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?isInteractiveBlock@AbstractCandleBlock@@UEBA_NXZ
     */
    MCVAPI bool isInteractiveBlock() const;
#endif
    /**
     * @symbol ??0AbstractCandleBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
     */
    MCAPI AbstractCandleBlock(std::string const &, int, class Material const &);

//protected:
    /**
     * @symbol ?_checkForWaterlogging@AbstractCandleBlock@@IEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void _checkForWaterlogging(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?_extinguish@AbstractCandleBlock@@IEBAXPEAVActor@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void _extinguish(class Actor *, class Block const &, class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?_canBeLit@AbstractCandleBlock@@KA_NAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI static bool _canBeLit(class Block const &, class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?_isLit@AbstractCandleBlock@@KA_NAEBVBlock@@@Z
     */
    MCAPI static bool _isLit(class Block const &);

protected:

};