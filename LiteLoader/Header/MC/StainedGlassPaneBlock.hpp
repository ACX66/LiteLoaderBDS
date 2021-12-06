// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "ThinFenceBlock.hpp"
#define EXTRA_INCLUDE_PART_STAINEDGLASSPANEBLOCK
#include "Extra/StainedGlassPaneBlockAPI.hpp"
#undef EXTRA_INCLUDE_PART_STAINEDGLASSPANEBLOCK
class StainedGlassPaneBlock : public ThinFenceBlock {
#include "Extra/StainedGlassPaneBlockAPI.hpp"
public:
    /*0*/ virtual ~StainedGlassPaneBlock();
    /*1*/ virtual bool hasTag(class BlockSource&, class BlockPos const&, class Block const&, std::string const&) const;
    /*2*/ virtual bool isObstructingChests(class BlockSource&, class BlockPos const&) const;
    /*3*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const;
    /*4*/ virtual bool addCollisionShapes(class Block const&, class BlockSource&, class BlockPos const&, class AABB const*, std::vector<class AABB>&, class optional_ref<struct IActorMovementProxy>) const;
    /*5*/ virtual bool getLiquidClipVolume(class BlockSource&, class BlockPos const&, class AABB&) const;
    /*6*/ virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;
    /*7*/ virtual void onLightningHit(class BlockSource&, class BlockPos const&) const;
    /*8*/ virtual bool liquidCanFlowIntoFromDirection(unsigned char, class std::function<class Block const& (class BlockPos const& )> const&, class BlockPos const&) const;
    /*9*/ virtual void __unk_vfn_0();
    /*10*/ virtual bool isStrippable(class Block const&) const;
    /*11*/ virtual class Block const& getStrippedBlock(class Block const&) const;
    /*12*/ virtual bool canConnect(class Block const&, unsigned char, class Block const&) const;
    /*13*/ virtual class CopperBehavior const* tryGetCopperBehavior() const;
    /*14*/ virtual void __unk_vfn_1();
    /*15*/ virtual void __unk_vfn_2();
    /*16*/ virtual void __unk_vfn_3();
    /*17*/ virtual void __unk_vfn_4();
    /*18*/ virtual void __unk_vfn_5();
    /*19*/ virtual void __unk_vfn_6();
    /*20*/ virtual void __unk_vfn_7();
    /*21*/ virtual void __unk_vfn_8();
    /*22*/ virtual void __unk_vfn_9();
    /*23*/ virtual void __unk_vfn_10();
    /*24*/ virtual bool isDoubleSlabBlock() const;
    /*25*/ virtual void __unk_vfn_11();
    /*26*/ virtual void __unk_vfn_12();
    /*27*/ virtual void __unk_vfn_13();
    /*28*/ virtual void __unk_vfn_14();
    /*29*/ virtual void __unk_vfn_15();
    /*30*/ virtual void __unk_vfn_16();
    /*31*/ virtual bool canBeAscendedByJumping(class Actor const&, class BlockPos const&) const;
    /*32*/ virtual bool isValidAuxValue(int) const;
    /*33*/ virtual bool canFillAtPos(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*34*/ virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*35*/ virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
    /*36*/ virtual void __unk_vfn_17();
    /*37*/ virtual void __unk_vfn_18();
    /*38*/ virtual bool canContainLiquid() const;
    /*39*/ virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, int) const;
    /*40*/ virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;
    /*41*/ virtual bool canBeUsedInCommands(class BaseGameVersion const&) const;
    /*42*/ virtual float getFlexibility(class BlockSource&, class BlockPos const&) const;
    /*43*/ virtual bool shouldDispense(class BlockSource&, class Container&) const;
    /*44*/ virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
    /*45*/ virtual void transformOnFall(class BlockSource&, class BlockPos const&, class Actor*, float) const;
    /*46*/ virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /*47*/ virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*48*/ virtual void __unk_vfn_19();
    /*49*/ virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;
    /*50*/ virtual void onStructureBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*51*/ virtual void onStructureNeighborBlockPlace(class BlockSource&, class BlockPos const&) const;
    /*52*/ virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /*53*/ virtual int /*enum enum BlockProperty*/ getRedstoneProperty(class BlockSource&, class BlockPos const&) const;
    /*54*/ virtual void __unk_vfn_20();
    /*55*/ virtual bool isFilteredOut(int /*enum enum BlockRenderLayer*/) const;
    /*56*/ virtual void __unk_vfn_21();
    /*57*/ virtual bool ignoreEntitiesOnPistonMove(class Block const&) const;
    /*58*/ virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, int /*enum enum FertilizerType*/) const;
    /*59*/ virtual bool mayConsumeFertilizer(class BlockSource&) const;
    /*60*/ virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*61*/ virtual bool mayPick() const;
    /*62*/ virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
    /*63*/ virtual bool mayPlaceOn(class BlockSource&, class BlockPos const&) const;
    /*64*/ virtual bool tryToTill(class BlockSource&, class BlockPos const&, class Actor&, class ItemStack&) const;
    /*65*/ virtual void destroy(class BlockSource&, class BlockPos const&, class Block const&, class Actor*) const;
    /*66*/ virtual bool getIgnoresDestroyPermissions(class Actor&, class BlockPos const&) const;
    /*67*/ virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /*68*/ virtual bool getSecondPart(class BlockSource const&, class BlockPos const&, class BlockPos&) const;
    /*69*/ virtual int getResourceCount(class Randomize&, class Block const&, int) const;
    /*70*/ virtual class ItemInstance asItemInstance(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*71*/ virtual void spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, std::vector<class Item const* >*, float, int) const;
    /*72*/ virtual void __unk_vfn_22();
    /*73*/ virtual class Block const& getPlacementBlock(class Actor&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
    /*74*/ virtual bool isAttachedTo(class BlockSource&, class BlockPos const&, class BlockPos&) const;
    /*75*/ virtual bool attack(class Player*, class BlockPos const&) const;
    /*76*/ virtual void handleEntityInside(class BlockSource&, class BlockPos const&, class Actor*, class Vec3&) const;
    /*77*/ virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor&) const;
    /*78*/ virtual int getExperienceDrop(class Random&) const;
    /*79*/ virtual void triggerEvent(class BlockSource&, class BlockPos const&, int, int) const;
    /*80*/ virtual void __unk_vfn_23();
    /*81*/ virtual float calcGroundFriction(struct IMobMovementProxy const&, class BlockPos const&) const;
    /*82*/ virtual void __unk_vfn_24();
    /*83*/ virtual void __unk_vfn_25();
    /*84*/ virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /*85*/ virtual bool canSpawnAt(class BlockSource const&, class BlockPos const&) const;
    /*86*/ virtual void notifySpawnedAt(class BlockSource&, class BlockPos const&) const;
    /*87*/ virtual void __unk_vfn_26();
    /*88*/ virtual int getIconYOffset() const;
    /*89*/ virtual std::string buildDescriptionId(class Block const&) const;
    /*90*/ virtual bool isAuxValueRelevantForPicking() const;
    /*91*/ virtual int getColor(class Block const&) const;
    /*92*/ virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*93*/ virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;
    /*94*/ virtual bool isSeasonTinted(class Block const&, class BlockSource&, class BlockPos const&) const;
    /*95*/ virtual class AABB const& getVisualShape(class Block const&, class AABB&, bool) const;
    /*96*/ virtual void __unk_vfn_27();
    /*97*/ virtual class Block const& getRenderBlock() const;
    /*98*/ virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /*99*/ virtual int /*enum enum Flip*/ getFaceFlip(unsigned char, class Block const&) const;
    /*100*/ virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*101*/ virtual void __unk_vfn_28();
    /*102*/ virtual class ItemInstance getSilkTouchItemInstance(class Block const&) const;
    /*103*/ virtual class Block const* tryLegacyUpgrade(unsigned short) const;
    /*104*/ virtual bool dealsContactDamage(class Actor const&, class Block const&, bool) const;
    /*105*/ virtual class Block const* tryGetInfested(class Block const&) const;
    /*106*/ virtual class Block const* tryGetUninfested(class Block const&) const;
    /*107*/ virtual void onRemove(class BlockSource&, class BlockPos const&) const;
    /*108*/ virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const;
    /*109*/ virtual void onStandOn(class Actor&, class BlockPos const&) const;
    /*110*/ virtual void onStepOn(class Actor&, class BlockPos const&) const;
    /*111*/ virtual void __unk_vfn_29();
    /*112*/ virtual void __unk_vfn_30();
    /*113*/ virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /*114*/ virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /*115*/ virtual void __unk_vfn_31();
    /*116*/ virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /*117*/ virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;
    /*118*/ virtual int getExtraRenderLayers() const;
    /*119*/ virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&) const;
    /*120*/ virtual void __unk_vfn_32();
    /*121*/ virtual void __unk_vfn_33();


protected:

private:
};