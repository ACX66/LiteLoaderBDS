// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "DiggerItem.hpp"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_HATCHETITEM
#include "Extra/HatchetItemAPI.hpp"
#undef EXTRA_INCLUDE_PART_HATCHETITEM
class HatchetItem : public DiggerItem {
#include "Extra/HatchetItemAPI.hpp"
public:
    /*0*/ virtual ~HatchetItem();
    /*1*/ virtual void tearDown();
    /*2*/ virtual int getMaxUseDuration(class ItemStack const*) const;
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void __unk_vfn_1();
    /*5*/ virtual void executeEvent(class ItemStackBase&, std::string const&, class RenderParams&) const;
    /*6*/ virtual void __unk_vfn_2();
    /*7*/ virtual bool isArmor() const;
    /*8*/ virtual bool isBlockPlanterItem() const;
    /*9*/ virtual void __unk_vfn_3();
    /*10*/ virtual void __unk_vfn_4();
    /*11*/ virtual bool isDyeable() const;
    /*12*/ virtual bool isDye() const;
    /*13*/ virtual int /*enum enum ItemColor*/ getItemColor() const;
    /*14*/ virtual bool isFertilizer() const;
    /*15*/ virtual void __unk_vfn_5();
    /*16*/ virtual bool isThrowable() const;
    /*17*/ virtual bool isUseable() const;
    /*18*/ virtual class ItemComponent* getComponent(class HashedString const&) const;
    /*19*/ virtual class FuelItemComponent* getFuel() const;
    /*20*/ virtual int /*enum enum BlockShape*/ getBlockShape() const;
    /*21*/ virtual bool canDestroySpecial(class Block const&) const;
    /*22*/ virtual int getLevelDataForAuxValue(int) const;
    /*23*/ virtual short getMaxDamage() const;
    /*24*/ virtual bool isHandEquipped() const;
    /*25*/ virtual bool isGlint(class ItemStackBase const&) const;
    /*26*/ virtual void __unk_vfn_6();
    /*27*/ virtual int getPatternIndex() const;
    /*28*/ virtual void __unk_vfn_7();
    /*29*/ virtual bool isWearableThroughLootTable(class CompoundTag const*) const;
    /*30*/ virtual bool canDestroyInCreative() const;
    /*31*/ virtual bool isDestructive(int) const;
    /*32*/ virtual bool isLiquidClipItem(int) const;
    /*33*/ virtual bool shouldInteractionWithBlockBypassLiquid(class Block const&) const;
    /*34*/ virtual bool requiresInteract() const;
    /*35*/ virtual int getEnchantSlot() const;
    /*36*/ virtual int getEnchantValue() const;
    /*37*/ virtual int getArmorValue() const;
    /*38*/ virtual void __unk_vfn_8();
    /*39*/ virtual bool isValidAuxValue(int) const;
    /*40*/ virtual float getViewDamping() const;
    /*41*/ virtual void __unk_vfn_9();
    /*42*/ virtual void __unk_vfn_10();
    /*43*/ virtual void __unk_vfn_11();
    /*44*/ virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&) const;
    /*45*/ virtual bool hasCustomColor(class CompoundTag const*) const;
    /*46*/ virtual void __unk_vfn_12();
    /*47*/ virtual void clearColor(class ItemStackBase&) const;
    /*48*/ virtual void clearColor(class CompoundTag*) const;
    /*49*/ virtual void setColor(class ItemStackBase&, class mce::Color const&) const;
    /*50*/ virtual void __unk_vfn_13();
    /*51*/ virtual void __unk_vfn_14();
    /*52*/ virtual void __unk_vfn_15();
    /*53*/ virtual void __unk_vfn_16();
    /*54*/ virtual bool canUseOnSimTick() const;
    /*55*/ virtual float getDestroySpeed(class ItemStackBase const&, class Block const&) const;
    /*56*/ virtual void hitActor(class ItemStack&, class Actor&, class Mob&) const;
    /*57*/ virtual void hitBlock(class ItemStack&, class Block const&, class BlockPos const&, class Mob&) const;
    /*58*/ virtual bool mineBlock(class ItemInstance&, class Block const&, int, int, int, class Actor*) const;
    /*59*/ virtual void __unk_vfn_17();
    /*60*/ virtual unsigned char getMaxStackSize(class ItemDescriptor const&) const;
    /*61*/ virtual bool inventoryTick(class ItemStack&, class Level&, class Actor&, int, bool) const;
    /*62*/ virtual void refreshedInContainer(class ItemStackBase const&, class Level&) const;
    /*63*/ virtual void fixupCommon(class ItemStackBase&, class Level&) const;
    /*64*/ virtual void __unk_vfn_18();
    /*65*/ virtual void __unk_vfn_19();
    /*66*/ virtual bool validFishInteraction(int) const;
    /*67*/ virtual std::string getInteractText(class Player const&) const;
    /*68*/ virtual int getAnimationFrameFor(class Mob*, bool, class ItemStack const*, bool) const;
    /*69*/ virtual int getIconYOffset() const;
    /*70*/ virtual bool canBeCharged() const;
    /*71*/ virtual void playSoundIncrementally(class ItemStack const&, class Mob&) const;
    /*72*/ virtual void __unk_vfn_20();
    /*73*/ virtual std::string getAuxValuesDescription() const;
    /*74*/ virtual bool _calculatePlacePos(class ItemStackBase&, class Actor&, unsigned char&, class BlockPos&) const;


protected:

private:
};