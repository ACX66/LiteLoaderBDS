// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "CropBlock.hpp"
#define EXTRA_INCLUDE_PART_POTATOBLOCK
#include "Extra/PotatoBlockAPI.hpp"
#undef EXTRA_INCLUDE_PART_POTATOBLOCK
class PotatoBlock : public CropBlock {
#include "Extra/PotatoBlockAPI.hpp"
public:
    /*0*/ virtual ~PotatoBlock();
    /*1*/ virtual bool isObstructingChests(class BlockSource&, class BlockPos const&) const;
    /*2*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const;
    /*3*/ virtual class AABB const& getAABB(class BlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;
    /*4*/ virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;
    /*5*/ virtual void onLightningHit(class BlockSource&, class BlockPos const&) const;
    /*6*/ virtual bool liquidCanFlowIntoFromDirection(unsigned char, class std::function<class Block const& (class BlockPos const& )> const&, class BlockPos const&) const;
    /*7*/ virtual void __unk_vfn_0();
    /*8*/ virtual bool isStrippable(class Block const&) const;
    /*9*/ virtual class Block const& getStrippedBlock(class Block const&) const;
    /*10*/ virtual class CopperBehavior const* tryGetCopperBehavior() const;
    /*11*/ virtual void __unk_vfn_1();
    /*12*/ virtual void __unk_vfn_2();
    /*13*/ virtual void __unk_vfn_3();
    /*14*/ virtual void __unk_vfn_4();
    /*15*/ virtual void __unk_vfn_5();
    /*16*/ virtual void __unk_vfn_6();
    /*17*/ virtual void __unk_vfn_7();
    /*18*/ virtual void __unk_vfn_8();
    /*19*/ virtual void __unk_vfn_9();
    /*20*/ virtual void __unk_vfn_10();
    /*21*/ virtual bool isDoubleSlabBlock() const;
    /*22*/ virtual void __unk_vfn_11();
    /*23*/ virtual void __unk_vfn_12();
    /*24*/ virtual void __unk_vfn_13();
    /*25*/ virtual void __unk_vfn_14();
    /*26*/ virtual void __unk_vfn_15();
    /*27*/ virtual void __unk_vfn_16();
    /*28*/ virtual bool canBeAscendedByJumping(class Actor const&, class BlockPos const&) const;
    /*29*/ virtual bool isValidAuxValue(int) const;
    /*30*/ virtual bool canFillAtPos(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*31*/ virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*32*/ virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    /*33*/ virtual void __unk_vfn_17();
    /*34*/ virtual void __unk_vfn_18();
    /*35*/ virtual bool canContainLiquid() const;
    /*36*/ virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, int) const;
    /*37*/ virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;
    /*38*/ virtual float getFlexibility(class BlockSource&, class BlockPos const&) const;
    /*39*/ virtual bool shouldDispense(class BlockSource&, class Container&) const;
    /*40*/ virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
    /*41*/ virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    /*42*/ virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /*43*/ virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*44*/ virtual void __unk_vfn_19();
    /*45*/ virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;
    /*46*/ virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*47*/ virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*48*/ virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /*49*/ virtual int /*enum enum BlockProperty*/ getRedstoneProperty(class BlockSource&, class BlockPos const&) const;
    /*50*/ virtual void __unk_vfn_20();
    /*51*/ virtual bool isFilteredOut(int /*enum enum BlockRenderLayer*/) const;
    /*52*/ virtual void __unk_vfn_21();
    /*53*/ virtual bool ignoreEntitiesOnPistonMove(class Block const&) const;
    /*54*/ virtual bool mayConsumeFertilizer(class BlockSource&) const;
    /*55*/ virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*56*/ virtual bool mayPick() const;
    /*57*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
    /*58*/ virtual bool tryToTill(class BlockSource&, class BlockPos const&, class Actor&, class ItemStack&) const;
    /*59*/ virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;
    /*60*/ virtual bool getIgnoresDestroyPermissions(class Actor&, class BlockPos const&) const;
    /*61*/ virtual bool getSecondPart(class BlockSource const&, class BlockPos const&, class BlockPos&) const;
    /*62*/ virtual int getResourceCount(class Randomize&, class Block const&, int) const;
    /*63*/ virtual void spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const* >*, float, int) const;
    /*64*/ virtual void __unk_vfn_22();
    /*65*/ virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
    /*66*/ virtual bool isAttachedTo(class BlockSource&, class BlockPos const&, class BlockPos&) const;
    /*67*/ virtual bool attack(class Player*, class BlockPos const&) const;
    /*68*/ virtual void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&) const;
    /*69*/ virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    /*70*/ virtual int getExperienceDrop(class Random&) const;
    /*71*/ virtual void triggerEvent(class BlockSource&, class BlockPos const&, int, int) const;
    /*72*/ virtual void __unk_vfn_23();
    /*73*/ virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&) const;
    /*74*/ virtual void __unk_vfn_24();
    /*75*/ virtual void __unk_vfn_25();
    /*76*/ virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /*77*/ virtual bool canSpawnAt(class BlockSource const&, class BlockPos const&) const;
    /*78*/ virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    /*79*/ virtual void __unk_vfn_26();
    /*80*/ virtual int getIconYOffset() const;
    /*81*/ virtual bool isAuxValueRelevantForPicking() const;
    /*82*/ virtual int getColor(class Block const&) const;
    /*83*/ virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*84*/ virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;
    /*85*/ virtual bool isSeasonTinted(class Block const&, class BlockSource&, class BlockPos const&) const;
    /*86*/ virtual class AABB const& getVisualShape(class Block const&, class AABB&, bool) const;
    /*87*/ virtual int getVariant(class Block const&) const;
    /*88*/ virtual void __unk_vfn_27();
    /*89*/ virtual class Block const& getRenderBlock() const;
    /*90*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*91*/ virtual int /*enum enum Flip*/ getFaceFlip(unsigned char, class Block const&) const;
    /*92*/ virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*93*/ virtual void __unk_vfn_28();
    /*94*/ virtual class Block const* tryLegacyUpgrade(unsigned short) const;
    /*95*/ virtual bool dealsContactDamage(class Actor const&, class Block const&, bool) const;
    /*96*/ virtual class Block const* tryGetInfested(class Block const&) const;
    /*97*/ virtual class Block const* tryGetUninfested(class Block const&) const;
    /*98*/ virtual void onRemove(class BlockSource&, class BlockPos const&) const;
    /*99*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*100*/ virtual void onStandOn(class Actor&, class BlockPos const&) const;
    /*101*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*102*/ virtual void __unk_vfn_29();
    /*103*/ virtual void __unk_vfn_30();
    /*104*/ virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /*105*/ virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*106*/ virtual void __unk_vfn_31();
    /*107*/ virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /*108*/ virtual int getExtraRenderLayers() const;
    /*109*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*110*/ virtual void __unk_vfn_32();
    /*111*/ virtual void __unk_vfn_33();
    /*112*/ virtual class ItemInstance const getBaseSeed() const;
    /*113*/ virtual class ItemInstance const getBaseCrop() const;
    /*114*/ virtual int getCropNum(class Randomize&, int, int) const;
    /*
    inline class ItemInstance const getBaseSeed() const{
        class ItemInstance const (PotatoBlock::*rv)() const;
        *((void**)&rv) = dlsym("?getBaseSeed@PotatoBlock@@UEBA?BVItemInstance@@XZ");
        return (this->*rv)();
    }
    inline class ItemInstance const getBaseCrop() const{
        class ItemInstance const (PotatoBlock::*rv)() const;
        *((void**)&rv) = dlsym("?getBaseCrop@PotatoBlock@@UEBA?BVItemInstance@@XZ");
        return (this->*rv)();
    }
    inline int getCropNum(class Randomize& a0, int a1, int a2) const{
        int (PotatoBlock::*rv)(class Randomize&, int, int) const;
        *((void**)&rv) = dlsym("?getCropNum@PotatoBlock@@UEBAHAEAVRandomize@@HH@Z");
        return (this->*rv)(std::forward<class Randomize&>(a0), std::forward<int>(a1), std::forward<int>(a2));
    }
    */

protected:

private:
};