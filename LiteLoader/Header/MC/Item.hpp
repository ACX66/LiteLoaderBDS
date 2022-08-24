/**
 * @file  Item.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Item.
 *
 */
class Item {

#define AFTER_EXTRA
// Add Member There
public:
class Tier {
public:
    Tier() = delete;
    Tier(Tier const&) = delete;
    Tier(Tier const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEM
public:
    class Item& operator=(class Item const &) = delete;
    Item(class Item const &) = delete;
    Item() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~Item();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?initServer@Item@@UEAA_NAEAVValue@Json@@AEBVSemVersion@@@Z
     */
    virtual bool initServer(class Json::Value &, class SemVersion const &);
    /**
     * @note   Virtual function table index: 2
     * @symbol ?tearDown@Item@@UEAAXXZ
     */
    virtual void tearDown();
    /**
     * @note   Virtual function table index: 3
     * @symbol ?setDescriptionId@Item@@UEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual class Item & setDescriptionId(std::string const &);
    /**
     * @note   Virtual function table index: 4
     * @symbol ?getDescriptionId@Item@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getDescriptionId() const;
    /**
     * @note   Virtual function table index: 5
     * @symbol ?getMaxUseDuration@Item@@UEBAHPEBVItemInstance@@@Z
     */
    virtual int getMaxUseDuration(class ItemInstance const *) const;
    /**
     * @note   Virtual function table index: 6
     * @symbol ?getMaxUseDuration@Item@@UEBAHPEBVItemStack@@@Z
     */
    virtual int getMaxUseDuration(class ItemStack const *) const;
    /**
     * @note   Virtual function table index: 7
     * @symbol 
     */
    virtual void __unk_vfn_7();
    /**
     * @note   Virtual function table index: 8
     * @symbol ?hasTag@Item@@UEBA_NAEBVHashedString@@@Z
     */
    virtual bool hasTag(class HashedString const &) const;
    /**
     * @note   Virtual function table index: 9
     * @symbol ?hasTag@Item@@UEBA_NAEBUItemTag@@@Z
     */
    virtual bool hasTag(struct ItemTag const &) const;
    /**
     * @note   Virtual function table index: 10
     * @symbol ?executeEvent@Item@@UEBAXAEAVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRenderParams@@@Z
     */
    virtual void executeEvent(class ItemStackBase &, std::string const &, class RenderParams &) const;
    /**
     * @note   Virtual function table index: 11
     * @symbol 
     */
    virtual void __unk_vfn_11();
    /**
     * @note   Virtual function table index: 12
     * @symbol ?isArmor@Item@@UEBA_NXZ
     */
    virtual bool isArmor() const;
    /**
     * @note   Virtual function table index: 13
     * @symbol ?isBlockPlanterItem@Item@@UEBA_NXZ
     */
    virtual bool isBlockPlanterItem() const;
    /**
     * @note   Virtual function table index: 14
     * @symbol 
     */
    virtual void __unk_vfn_14();
    /**
     * @note   Virtual function table index: 15
     * @symbol ?isCamera@Item@@UEBA_NXZ
     */
    virtual bool isCamera() const;
    /**
     * @note   Virtual function table index: 16
     * @symbol 
     */
    virtual void __unk_vfn_16();
    /**
     * @note   Virtual function table index: 17
     * @symbol ?isDamageable@Item@@UEBA_NXZ
     */
    virtual bool isDamageable() const;
    /**
     * @note   Virtual function table index: 18
     * @symbol ?isDyeable@Item@@UEBA_NXZ
     */
    virtual bool isDyeable() const;
    /**
     * @note   Virtual function table index: 19
     * @symbol ?isDye@Item@@UEBA_NXZ
     */
    virtual bool isDye() const;
    /**
     * @note   Virtual function table index: 20
     * @symbol ?getItemColor@Item@@UEBA?AW4ItemColor@@XZ
     */
    virtual enum ItemColor getItemColor() const;
    /**
     * @note   Virtual function table index: 21
     * @symbol ?isFertilizer@Item@@UEBA_NXZ
     */
    virtual bool isFertilizer() const;
    /**
     * @note   Virtual function table index: 22
     * @symbol ?isFood@Item@@UEBA_NXZ
     */
    virtual bool isFood() const;
    /**
     * @note   Virtual function table index: 23
     * @symbol ?isThrowable@Item@@UEBA_NXZ
     */
    virtual bool isThrowable() const;
    /**
     * @note   Virtual function table index: 24
     * @symbol ?isUseable@Item@@UEBA_NXZ
     */
    virtual bool isUseable() const;
    /**
     * @note   Virtual function table index: 25
     * @symbol ?getComponent@Item@@UEBAPEAVItemComponent@@AEBVHashedString@@@Z
     */
    virtual class ItemComponent * getComponent(class HashedString const &) const;
    /**
     * @note   Virtual function table index: 26
     * @symbol ?getCamera@Item@@UEBAPEAVICameraItemComponent@@XZ
     */
    virtual class ICameraItemComponent * getCamera() const;
    /**
     * @note   Virtual function table index: 27
     * @symbol ?getFood@Item@@UEBAPEAVIFoodItemComponent@@XZ
     */
    virtual class IFoodItemComponent * getFood() const;
    /**
     * @note   Virtual function table index: 28
     * @symbol ?getFuel@Item@@UEBAPEBVFuelItemComponent@@XZ
     */
    virtual class FuelItemComponent const * getFuel() const;
    /**
     * @note   Virtual function table index: 29
     * @symbol ?setMaxStackSize@Item@@UEAAAEAV1@E@Z
     */
    virtual class Item & setMaxStackSize(unsigned char);
    /**
     * @note   Virtual function table index: 30
     * @symbol ?setStackedByData@Item@@UEAAAEAV1@_N@Z
     */
    virtual class Item & setStackedByData(bool);
    /**
     * @note   Virtual function table index: 31
     * @symbol ?setMaxDamage@Item@@UEAAAEAV1@H@Z
     */
    virtual class Item & setMaxDamage(int);
    /**
     * @note   Virtual function table index: 32
     * @symbol ?setHandEquipped@Item@@UEAAAEAV1@XZ
     */
    virtual class Item & setHandEquipped();
    /**
     * @note   Virtual function table index: 33
     * @symbol ?setUseAnimation@Item@@UEAAAEAV1@W4UseAnimation@@@Z
     */
    virtual class Item & setUseAnimation(enum UseAnimation);
    /**
     * @note   Virtual function table index: 34
     * @symbol ?setMaxUseDuration@Item@@UEAAAEAV1@H@Z
     */
    virtual class Item & setMaxUseDuration(int);
    /**
     * @note   Virtual function table index: 35
     * @symbol ?setRequiresWorldBuilder@Item@@UEAAAEAV1@_N@Z
     */
    virtual class Item & setRequiresWorldBuilder(bool);
    /**
     * @note   Virtual function table index: 36
     * @symbol ?setExplodable@Item@@UEAAAEAV1@_N@Z
     */
    virtual class Item & setExplodable(bool);
    /**
     * @note   Virtual function table index: 37
     * @symbol ?setFireResistant@Item@@UEAAAEAV1@_N@Z
     */
    virtual class Item & setFireResistant(bool);
    /**
     * @note   Virtual function table index: 38
     * @symbol ?setIsGlint@Item@@UEAAAEAV1@_N@Z
     */
    virtual class Item & setIsGlint(bool);
    /**
     * @note   Virtual function table index: 39
     * @symbol ?setShouldDespawn@Item@@UEAAAEAV1@_N@Z
     */
    virtual class Item & setShouldDespawn(bool);
    /**
     * @note   Virtual function table index: 40
     * @symbol ?buildNetworkTag@Item@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @note   Virtual function table index: 41
     * @symbol ?initializeFromNetwork@Item@@UEAAXAEBVCompoundTag@@@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @note   Virtual function table index: 42
     * @symbol ?validateFromNetwork@Item@@UEAA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVCompoundTag@@@Z
     */
    virtual std::vector<std::string> validateFromNetwork(class CompoundTag const &);
    /**
     * @note   Virtual function table index: 43
     * @symbol ?getBlockShape@Item@@UEBA?AW4BlockShape@@XZ
     */
    virtual enum BlockShape getBlockShape() const;
    /**
     * @note   Virtual function table index: 44
     * @symbol ?canBeDepleted@Item@@UEBA_NXZ
     */
    virtual bool canBeDepleted() const;
    /**
     * @note   Virtual function table index: 45
     * @symbol ?canDestroySpecial@Item@@UEBA_NAEBVBlock@@@Z
     */
    virtual bool canDestroySpecial(class Block const &) const;
    /**
     * @note   Virtual function table index: 46
     * @symbol ?getLevelDataForAuxValue@Item@@UEBAHH@Z
     */
    virtual int getLevelDataForAuxValue(int) const;
    /**
     * @note   Virtual function table index: 47
     * @symbol ?isStackedByData@Item@@UEBA_NXZ
     */
    virtual bool isStackedByData() const;
    /**
     * @note   Virtual function table index: 48
     * @symbol ?getMaxDamage@Item@@UEBAFXZ
     */
    virtual short getMaxDamage() const;
    /**
     * @note   Virtual function table index: 49
     * @symbol ?getAttackDamage@Item@@UEBAHXZ
     */
    virtual int getAttackDamage() const;
    /**
     * @note   Virtual function table index: 50
     * @symbol ?isHandEquipped@Item@@UEBA_NXZ
     */
    virtual bool isHandEquipped() const;
    /**
     * @note   Virtual function table index: 51
     * @symbol ?isGlint@Item@@UEBA_NAEBVItemStackBase@@@Z
     */
    virtual bool isGlint(class ItemStackBase const &) const;
    /**
     * @note   Virtual function table index: 52
     * @symbol 
     */
    virtual void __unk_vfn_52();
    /**
     * @note   Virtual function table index: 53
     * @symbol ?getPatternIndex@Item@@UEBAHXZ
     */
    virtual int getPatternIndex() const;
    /**
     * @note   Virtual function table index: 54
     * @symbol 
     */
    virtual void __unk_vfn_54();
    /**
     * @note   Virtual function table index: 55
     * @symbol ?isWearableThroughLootTable@Item@@UEBA_NPEBVCompoundTag@@@Z
     */
    virtual bool isWearableThroughLootTable(class CompoundTag const *) const;
    /**
     * @note   Virtual function table index: 56
     * @symbol ?canDestroyInCreative@Item@@UEBA_NXZ
     */
    virtual bool canDestroyInCreative() const;
    /**
     * @note   Virtual function table index: 57
     * @symbol ?isDestructive@Item@@UEBA_NH@Z
     */
    virtual bool isDestructive(int) const;
    /**
     * @note   Virtual function table index: 58
     * @symbol ?isLiquidClipItem@Item@@UEBA_NH@Z
     */
    virtual bool isLiquidClipItem(int) const;
    /**
     * @note   Virtual function table index: 59
     * @symbol ?shouldInteractionWithBlockBypassLiquid@Item@@UEBA_NAEBVBlock@@@Z
     */
    virtual bool shouldInteractionWithBlockBypassLiquid(class Block const &) const;
    /**
     * @note   Virtual function table index: 60
     * @symbol ?requiresInteract@Item@@UEBA_NXZ
     */
    virtual bool requiresInteract() const;
    /**
     * @note   Virtual function table index: 61
     * @symbol ?appendFormattedHovertext@Item@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @note   Virtual function table index: 62
     * @symbol ?isValidRepairItem@Item@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
     */
    virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &, class BaseGameVersion const &) const;
    /**
     * @note   Virtual function table index: 63
     * @symbol ?getEnchantSlot@Item@@UEBAHXZ
     */
    virtual int getEnchantSlot() const;
    /**
     * @note   Virtual function table index: 64
     * @symbol ?getEnchantValue@Item@@UEBAHXZ
     */
    virtual int getEnchantValue() const;
    /**
     * @note   Virtual function table index: 65
     * @symbol ?getArmorValue@Item@@UEBAHXZ
     */
    virtual int getArmorValue() const;
    /**
     * @note   Virtual function table index: 66
     * @symbol ?getToughnessValue@Item@@UEBAHXZ
     */
    virtual int getToughnessValue() const;
    /**
     * @note   Virtual function table index: 67
     * @symbol 
     */
    virtual void __unk_vfn_67();
    /**
     * @note   Virtual function table index: 68
     * @symbol ?isValidAuxValue@Item@@UEBA_NH@Z
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @note   Virtual function table index: 69
     * @symbol ?getDamageChance@Item@@UEBAHH@Z
     */
    virtual int getDamageChance(int) const;
    /**
     * @note   Virtual function table index: 70
     * @symbol ?getViewDamping@Item@@UEBAMXZ
     */
    virtual float getViewDamping() const;
    /**
     * @note   Virtual function table index: 71
     * @symbol 
     */
    virtual void __unk_vfn_71();
    /**
     * @note   Virtual function table index: 72
     * @symbol 
     */
    virtual void __unk_vfn_72();
    /**
     * @note   Virtual function table index: 73
     * @symbol 
     */
    virtual void __unk_vfn_73();
    /**
     * @note   Virtual function table index: 74
     * @symbol ?getColor@Item@@UEBA?AVColor@mce@@PEBVCompoundTag@@AEBVItemDescriptor@@@Z
     */
    virtual class mce::Color getColor(class CompoundTag const *, class ItemDescriptor const &) const;
    /**
     * @note   Virtual function table index: 75
     * @symbol ?hasCustomColor@Item@@UEBA_NPEBVCompoundTag@@@Z
     */
    virtual bool hasCustomColor(class CompoundTag const *) const;
    /**
     * @note   Virtual function table index: 76
     * @symbol 
     */
    virtual void __unk_vfn_76();
    /**
     * @note   Virtual function table index: 77
     * @symbol ?clearColor@Item@@UEBAXAEAVItemStackBase@@@Z
     */
    virtual void clearColor(class ItemStackBase &) const;
    /**
     * @note   Virtual function table index: 78
     * @symbol ?clearColor@Item@@UEBAXPEAVCompoundTag@@@Z
     */
    virtual void clearColor(class CompoundTag *) const;
    /**
     * @note   Virtual function table index: 79
     * @symbol ?setColor@Item@@UEBAXAEAVItemStackBase@@AEBVColor@mce@@@Z
     */
    virtual void setColor(class ItemStackBase &, class mce::Color const &) const;
    /**
     * @note   Virtual function table index: 80
     * @symbol 
     */
    virtual void __unk_vfn_80();
    /**
     * @note   Virtual function table index: 81
     * @symbol 
     */
    virtual void __unk_vfn_81();
    /**
     * @note   Virtual function table index: 82
     * @symbol ?getActorIdentifier@Item@@UEBA?AUActorDefinitionIdentifier@@AEBVItemStack@@@Z
     */
    virtual struct ActorDefinitionIdentifier getActorIdentifier(class ItemStack const &) const;
    /**
     * @note   Virtual function table index: 83
     * @symbol ?buildIdAux@Item@@UEBAHFPEBVCompoundTag@@@Z
     */
    virtual int buildIdAux(short, class CompoundTag const *) const;
    /**
     * @note   Virtual function table index: 84
     * @symbol ?canUseOnSimTick@Item@@UEBA_NXZ
     */
    virtual bool canUseOnSimTick() const;
    /**
     * @note   Virtual function table index: 85
     * @symbol ?use@Item@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @note   Virtual function table index: 86
     * @symbol ?dispense@Item@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @note   Virtual function table index: 87
     * @symbol ?useTimeDepleted@Item@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z
     */
    virtual enum ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /**
     * @note   Virtual function table index: 88
     * @symbol ?releaseUsing@Item@@UEBAXAEAVItemStack@@PEAVPlayer@@H@Z
     */
    virtual void releaseUsing(class ItemStack &, class Player *, int) const;
    /**
     * @note   Virtual function table index: 89
     * @symbol ?getDestroySpeed@Item@@UEBAMAEBVItemStackBase@@AEBVBlock@@@Z
     */
    virtual float getDestroySpeed(class ItemStackBase const &, class Block const &) const;
    /**
     * @note   Virtual function table index: 90
     * @symbol ?hurtActor@Item@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
     */
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @note   Virtual function table index: 91
     * @symbol ?hitActor@Item@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
     */
    virtual void hitActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @note   Virtual function table index: 92
     * @symbol ?hitBlock@Item@@UEBAXAEAVItemStack@@AEBVBlock@@AEBVBlockPos@@AEAVMob@@@Z
     */
    virtual void hitBlock(class ItemStack &, class Block const &, class BlockPos const &, class Mob &) const;
    /**
     * @note   Virtual function table index: 93
     * @symbol ?mineBlock@Item@@UEBA_NAEAVItemInstance@@AEBVBlock@@HHHPEAVActor@@@Z
     */
    virtual bool mineBlock(class ItemInstance &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @note   Virtual function table index: 94
     * @symbol ?mineBlock@Item@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
     */
    virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @note   Virtual function table index: 95
     * @symbol ?buildDescriptionName@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemStackBase@@@Z
     */
    virtual std::string buildDescriptionName(class ItemStackBase const &) const;
    /**
     * @note   Virtual function table index: 96
     * @symbol ?buildDescriptionId@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @note   Virtual function table index: 97
     * @symbol ?buildEffectDescriptionName@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemStackBase@@@Z
     */
    virtual std::string buildEffectDescriptionName(class ItemStackBase const &) const;
    /**
     * @note   Virtual function table index: 98
     * @symbol ?buildCategoryDescriptionName@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string buildCategoryDescriptionName() const;
    /**
     * @note   Virtual function table index: 99
     * @symbol ?readUserData@Item@@UEBAXAEAVItemStackBase@@AEAVIDataInput@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual void readUserData(class ItemStackBase &, class IDataInput &, class ReadOnlyBinaryStream &) const;
    /**
     * @note   Virtual function table index: 100
     * @symbol ?writeUserData@Item@@UEBAXAEBVItemStackBase@@AEAVIDataOutput@@@Z
     */
    virtual void writeUserData(class ItemStackBase const &, class IDataOutput &) const;
    /**
     * @note   Virtual function table index: 101
     * @symbol ?getMaxStackSize@Item@@UEBAEAEBVItemDescriptor@@@Z
     */
    virtual unsigned char getMaxStackSize(class ItemDescriptor const &) const;
    /**
     * @note   Virtual function table index: 102
     * @symbol ?inventoryTick@Item@@UEBA_NAEAVItemStack@@AEAVLevel@@AEAVActor@@H_N@Z
     */
    virtual bool inventoryTick(class ItemStack &, class Level &, class Actor &, int, bool) const;
    /**
     * @note   Virtual function table index: 103
     * @symbol ?refreshedInContainer@Item@@UEBAXAEBVItemStackBase@@AEAVLevel@@@Z
     */
    virtual void refreshedInContainer(class ItemStackBase const &, class Level &) const;
    /**
     * @note   Virtual function table index: 104
     * @symbol ?getCooldownType@Item@@UEBAAEBVHashedString@@XZ
     */
    virtual class HashedString const & getCooldownType() const;
    /**
     * @note   Virtual function table index: 105
     * @symbol ?getCooldownTime@Item@@UEBAHXZ
     */
    virtual int getCooldownTime() const;
    /**
     * @note   Virtual function table index: 106
     * @symbol ?fixupCommon@Item@@UEBAXAEAVItemStackBase@@@Z
     */
    virtual void fixupCommon(class ItemStackBase &) const;
    /**
     * @note   Virtual function table index: 107
     * @symbol ?fixupCommon@Item@@UEBAXAEAVItemStackBase@@AEAVLevel@@@Z
     */
    virtual void fixupCommon(class ItemStackBase &, class Level &) const;
    /**
     * @note   Virtual function table index: 108
     * @symbol ?getDamageValue@Item@@UEBAFPEBVCompoundTag@@@Z
     */
    virtual short getDamageValue(class CompoundTag const *) const;
    /**
     * @note   Virtual function table index: 109
     * @symbol ?hasDamageValue@Item@@UEBA_NPEBVCompoundTag@@@Z
     */
    virtual bool hasDamageValue(class CompoundTag const *) const;
    /**
     * @note   Virtual function table index: 110
     * @symbol ?setDamageValue@Item@@UEBAXAEAVItemStackBase@@F@Z
     */
    virtual void setDamageValue(class ItemStackBase &, short) const;
    /**
     * @note   Virtual function table index: 111
     * @symbol ?getInHandUpdateType@Item@@UEBA?AW4InHandUpdateType@@AEBVPlayer@@AEBVItemInstance@@1_N2@Z
     */
    virtual enum InHandUpdateType getInHandUpdateType(class Player const &, class ItemInstance const &, class ItemInstance const &, bool, bool) const;
    /**
     * @note   Virtual function table index: 112
     * @symbol ?getInHandUpdateType@Item@@UEBA?AW4InHandUpdateType@@AEBVPlayer@@AEBVItemStack@@1_N2@Z
     */
    virtual enum InHandUpdateType getInHandUpdateType(class Player const &, class ItemStack const &, class ItemStack const &, bool, bool) const;
    /**
     * @note   Virtual function table index: 113
     * @symbol ?validFishInteraction@Item@@UEBA_NH@Z
     */
    virtual bool validFishInteraction(int) const;
    /**
     * @note   Virtual function table index: 114
     * @symbol ?enchantProjectile@Item@@UEBAXAEBVItemStackBase@@AEAVActor@@@Z
     */
    virtual void enchantProjectile(class ItemStackBase const &, class Actor &) const;
    /**
     * @note   Virtual function table index: 115
     * @symbol ?getEquipLocation@Item@@UEBA?AW4ActorLocation@@XZ
     */
    virtual enum ActorLocation getEquipLocation() const;
    /**
     * @note   Virtual function table index: 116
     * @symbol ?getEquipSound@Item@@UEBA?AW4LevelSoundEvent@@XZ
     */
    virtual enum LevelSoundEvent getEquipSound() const;
    /**
     * @note   Virtual function table index: 117
     * @symbol ?isSameItem@Item@@UEBA_NAEBVItemStackBase@@0@Z
     */
    virtual bool isSameItem(class ItemStackBase const &, class ItemStackBase const &) const;
    /**
     * @note   Virtual function table index: 118
     * @symbol ?initClient@Item@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
     */
    virtual void initClient(class Json::Value &, class SemVersion const &);
    /**
     * @note   Virtual function table index: 119
     * @symbol ?getInteractText@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPlayer@@@Z
     */
    virtual std::string getInteractText(class Player const &) const;
    /**
     * @note   Virtual function table index: 120
     * @symbol ?getAnimationFrameFor@Item@@UEBAHPEAVMob@@_NPEBVItemStack@@_N@Z
     */
    virtual int getAnimationFrameFor(class Mob *, bool, class ItemStack const *, bool) const;
    /**
     * @note   Virtual function table index: 121
     * @symbol ?isEmissive@Item@@UEBA_NH@Z
     */
    virtual bool isEmissive(int) const;
    /**
     * @note   Virtual function table index: 122
     * @symbol ?getLightEmission@Item@@UEBA?AUBrightness@@H@Z
     */
    virtual struct Brightness getLightEmission(int) const;
    /**
     * @note   Virtual function table index: 123
     * @symbol ?getIcon@Item@@UEBAAEBUTextureUVCoordinateSet@@AEBVItemStackBase@@H_N@Z
     */
    virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /**
     * @note   Virtual function table index: 124
     * @symbol ?getIconYOffset@Item@@UEBAHXZ
     */
    virtual int getIconYOffset() const;
    /**
     * @note   Virtual function table index: 125
     * @symbol ?setIcon@Item@@UEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    virtual class Item & setIcon(std::string const &, int);
    /**
     * @note   Virtual function table index: 126
     * @symbol ?setIcon@Item@@UEAAAEAV1@AEBUTextureUVCoordinateSet@@@Z
     */
    virtual class Item & setIcon(struct TextureUVCoordinateSet const &);
    /**
     * @note   Virtual function table index: 127
     * @symbol ?setIconAtlas@Item@@UEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    virtual class Item & setIconAtlas(std::string const &, int);
    /**
     * @note   Virtual function table index: 128
     * @symbol ?canBeCharged@Item@@UEBA_NXZ
     */
    virtual bool canBeCharged() const;
    /**
     * @note   Virtual function table index: 129
     * @symbol ?playSoundIncrementally@Item@@UEBAXAEBVItemInstance@@AEAVMob@@@Z
     */
    virtual void playSoundIncrementally(class ItemInstance const &, class Mob &) const;
    /**
     * @note   Virtual function table index: 130
     * @symbol ?playSoundIncrementally@Item@@UEBAXAEBVItemStack@@AEAVMob@@@Z
     */
    virtual void playSoundIncrementally(class ItemStack const &, class Mob &) const;
    /**
     * @note   Virtual function table index: 131
     * @symbol ?getFurnaceBurnIntervalMultipler@Item@@UEBAMAEBVItemStackBase@@@Z
     */
    virtual float getFurnaceBurnIntervalMultipler(class ItemStackBase const &) const;
    /**
     * @note   Virtual function table index: 132
     * @symbol ?getFurnaceXPmultiplier@Item@@UEBAMAEBVItemStackBase@@@Z
     */
    virtual float getFurnaceXPmultiplier(class ItemStackBase const &) const;
    /**
     * @note   Virtual function table index: 133
     * @symbol ?getAuxValuesDescription@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getAuxValuesDescription() const;
    /**
     * @note   Virtual function table index: 134
     * @symbol ?_checkUseOnPermissions@Item@@EEBA_NAEAVActor@@AEAVItemStackBase@@AEBEAEBVBlockPos@@@Z
     */
    virtual bool _checkUseOnPermissions(class Actor &, class ItemStackBase &, unsigned char const &, class BlockPos const &) const;
    /**
     * @note   Virtual function table index: 135
     * @symbol ?_calculatePlacePos@Item@@EEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
     */
    virtual bool _calculatePlacePos(class ItemStackBase &, class Actor &, unsigned char &, class BlockPos &) const;
    /**
     * @note   Virtual function table index: 136
     * @symbol ?_useOn@Item@@EEBA_NAEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEM
    /**
     * @note   Virtual function table index: -1
     * @symbol ?getBaseColor@Item@@UEBA?AVColor@mce@@AEBVItemStack@@@Z
     */
    MCVAPI class mce::Color getBaseColor(class ItemStack const &) const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?getSecondaryColor@Item@@UEBA?AVColor@mce@@AEBVItemStack@@@Z
     */
    MCVAPI class mce::Color getSecondaryColor(class ItemStack const &) const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?hasCustomColor@Item@@UEBA_NAEBVItemStackBase@@@Z
     */
    MCVAPI bool hasCustomColor(class ItemStackBase const &) const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?isActorPlacerItem@Item@@UEBA_NXZ
     */
    MCVAPI bool isActorPlacerItem() const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?isBucket@Item@@UEBA_NXZ
     */
    MCVAPI bool isBucket() const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?isCandle@Item@@UEBA_NXZ
     */
    MCVAPI bool isCandle() const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?isComplex@Item@@UEBA_NXZ
     */
    MCVAPI bool isComplex() const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?isComponentBased@Item@@UEBA_NXZ
     */
    MCVAPI bool isComponentBased() const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?isMultiColorTinted@Item@@UEBA_NAEBVItemStack@@@Z
     */
    MCVAPI bool isMultiColorTinted(class ItemStack const &) const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?isMusicDisk@Item@@UEBA_NXZ
     */
    MCVAPI bool isMusicDisk() const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?isPattern@Item@@UEBA_NXZ
     */
    MCVAPI bool isPattern() const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?showsDurabilityInCreative@Item@@UEBA_NXZ
     */
    MCVAPI bool showsDurabilityInCreative() const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?uniqueAuxValues@Item@@UEBA_NXZ
     */
    MCVAPI bool uniqueAuxValues() const;
#endif
    /**
     * @symbol ??0Item@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@F@Z
     */
    MCAPI Item(std::string const &, short);
    /**
     * @symbol ?addOnResetBAIcallback@Item@@QEAAXAEBV?$function@$$A6AXXZ@std@@@Z
     */
    MCAPI void addOnResetBAIcallback(class std::function<void (void)> const &);
    /**
     * @symbol ?addTag@Item@@QEAAAEAV1@AEBUItemTag@@@Z
     */
    MCAPI class Item & addTag(struct ItemTag const &);
    /**
     * @symbol ?addTag@Item@@QEAAAEAV1@AEBVHashedString@@@Z
     */
    MCAPI class Item & addTag(class HashedString const &);
    /**
     * @symbol ?allowOffhand@Item@@QEBA_NXZ
     */
    MCAPI bool allowOffhand() const;
    /**
     * @symbol ?buildDescriptor@Item@@QEBA?AVItemDescriptor@@FPEBVCompoundTag@@@Z
     */
    MCAPI class ItemDescriptor buildDescriptor(short, class CompoundTag const *) const;
    /**
     * @symbol ?calculatePlacePos@Item@@QEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
     */
    MCAPI bool calculatePlacePos(class ItemStackBase &, class Actor &, unsigned char &, class BlockPos &) const;
    /**
     * @symbol ?destroySpeedBonus@Item@@QEBAMAEBVItemStackBase@@@Z
     */
    MCAPI float destroySpeedBonus(class ItemStackBase const &) const;
    /**
     * @symbol ?fixupOnLoad@Item@@QEBAXAEAVItemStackBase@@@Z
     */
    MCAPI void fixupOnLoad(class ItemStackBase &) const;
    /**
     * @symbol ?fixupOnLoad@Item@@QEBAXAEAVItemStackBase@@AEAVLevel@@@Z
     */
    MCAPI void fixupOnLoad(class ItemStackBase &, class Level &) const;
    /**
     * @symbol ?getCommandNames@Item@@QEBA?AV?$vector@UCommandName@@V?$allocator@UCommandName@@@std@@@std@@XZ
     */
    MCAPI std::vector<struct CommandName> getCommandNames() const;
    /**
     * @symbol ?getCreativeCategory@Item@@QEBA?AW4CreativeItemCategory@@XZ
     */
    MCAPI enum CreativeItemCategory getCreativeCategory() const;
    /**
     * @symbol ?getCreativeGroup@Item@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getCreativeGroup() const;
    /**
     * @symbol ?getFrameCount@Item@@QEBAHXZ
     */
    MCAPI int getFrameCount() const;
    /**
     * @symbol ?getFullItemName@Item@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getFullItemName() const;
    /**
     * @symbol ?getFullNameHash@Item@@QEBAAEBVHashedString@@XZ
     */
    MCAPI class HashedString const & getFullNameHash() const;
    /**
     * @symbol ?getId@Item@@QEBAFXZ
     */
    MCAPI short getId() const;
    /**
     * @symbol ?getLegacyBlock@Item@@QEBAAEBV?$WeakPtr@VBlockLegacy@@@@XZ
     */
    MCAPI class WeakPtr<class BlockLegacy> const & getLegacyBlock() const;
    /**
     * @symbol ?getNamespace@Item@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getNamespace() const;
    /**
     * @symbol ?getRawNameHash@Item@@QEBAAEBVHashedString@@XZ
     */
    MCAPI class HashedString const & getRawNameHash() const;
    /**
     * @symbol ?getRawNameId@Item@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getRawNameId() const;
    /**
     * @symbol ?getRequiredBaseGameVersion@Item@@QEBAAEBVBaseGameVersion@@XZ
     */
    MCAPI class BaseGameVersion const & getRequiredBaseGameVersion() const;
    /**
     * @symbol ?getSerializedName@Item@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getSerializedName() const;
    /**
     * @symbol ?getUseAnimation@Item@@QEBA?AW4UseAnimation@@XZ
     */
    MCAPI enum UseAnimation getUseAnimation() const;
    /**
     * @symbol ?hasTag@Item@@QEBA_NAEB_K@Z
     */
    MCAPI bool hasTag(unsigned __int64 const &) const;
    /**
     * @symbol ?isElytra@Item@@QEBA_NXZ
     */
    MCAPI bool isElytra() const;
    /**
     * @symbol ?isExplodable@Item@@QEBA_NXZ
     */
    MCAPI bool isExplodable() const;
    /**
     * @symbol ?isFireResistant@Item@@QEBA_NXZ
     */
    MCAPI bool isFireResistant() const;
    /**
     * @symbol ?isNameTag@Item@@QEBA_NXZ
     */
    MCAPI bool isNameTag() const;
    /**
     * @symbol ?isSeed@Item@@QEBA_NXZ
     */
    MCAPI bool isSeed() const;
    /**
     * @symbol ?setAllowOffhand@Item@@QEAAAEAV1@_N@Z
     */
    MCAPI class Item & setAllowOffhand(bool);
    /**
     * @symbol ?setCategory@Item@@QEAAAEAV1@W4CreativeItemCategory@@@Z
     */
    MCAPI class Item & setCategory(enum CreativeItemCategory);
    /**
     * @symbol ?setCreativeGroup@Item@@QEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class Item & setCreativeGroup(std::string const &);
    /**
     * @symbol ?setFurnaceBurnIntervalMultiplier@Item@@QEAAAEAV1@M@Z
     */
    MCAPI class Item & setFurnaceBurnIntervalMultiplier(float);
    /**
     * @symbol ?setFurnaceXPmultiplier@Item@@QEAAAEAV1@M@Z
     */
    MCAPI class Item & setFurnaceXPmultiplier(float);
    /**
     * @symbol ?setIsMirroredArt@Item@@QEAAAEAV1@_N@Z
     */
    MCAPI class Item & setIsMirroredArt(bool);
    /**
     * @symbol ?setMinRequiredBaseGameVersion@Item@@QEAAAEAV1@AEBVBaseGameVersion@@@Z
     */
    MCAPI class Item & setMinRequiredBaseGameVersion(class BaseGameVersion const &);
    /**
     * @symbol ?shouldDespawn@Item@@QEBA_NXZ
     */
    MCAPI bool shouldDespawn() const;
    /**
     * @symbol ?updateCustomBlockEntityTag@Item@@QEBA_NAEAVBlockSource@@AEAVItemStackBase@@AEBVBlockPos@@@Z
     */
    MCAPI bool updateCustomBlockEntityTag(class BlockSource &, class ItemStackBase &, class BlockPos const &) const;
    /**
     * @symbol ?useOn@Item@@QEBA_NAEAVItemStack@@AEAVActor@@HHHEAEBVVec3@@@Z
     */
    MCAPI bool useOn(class ItemStack &, class Actor &, int, int, int, unsigned char, class Vec3 const &) const;
MCAPI static std::string const ICON_DESCRIPTION_PREFIX;
MCAPI static std::string const TAG_DAMAGE;
    /**
     * @symbol ?addCreativeItem@Item@@SAXAEBVBlock@@@Z
     */
    MCAPI static void addCreativeItem(class Block const &);
    /**
     * @symbol ?addCreativeItem@Item@@SAXAEBVItemInstance@@@Z
     */
    MCAPI static void addCreativeItem(class ItemInstance const &);
    /**
     * @symbol ?addCreativeItem@Item@@SAXAEBVItemStack@@@Z
     */
    MCAPI static void addCreativeItem(class ItemStack const &);
    /**
     * @symbol ?addLooseCreativeItems@Item@@SAX_NAEBVBaseGameVersion@@@Z
     */
    MCAPI static void addLooseCreativeItems(bool, class BaseGameVersion const &);
    /**
     * @symbol ?endCreativeItemDefinitions@Item@@SAX_N@Z
     */
    MCAPI static void endCreativeItemDefinitions(bool);
    /**
     * @symbol ?getIconTextureUVSet@Item@@SAAEBUTextureUVCoordinateSet@@AEBVTextureAtlasItem@@HH@Z
     */
    MCAPI static struct TextureUVCoordinateSet const & getIconTextureUVSet(class TextureAtlasItem const &, int, int);
    /**
     * @symbol ?getTextureItem@Item@@SAAEBVTextureAtlasItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static class TextureAtlasItem const & getTextureItem(std::string const &);
    /**
     * @symbol ?getTextureUVCoordinateSet@Item@@SA?AUTextureUVCoordinateSet@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI static struct TextureUVCoordinateSet getTextureUVCoordinateSet(std::string const &, int);
    /**
     * @symbol ?isElytra@Item@@SA_NAEBVItemDescriptor@@@Z
     */
    MCAPI static bool isElytra(class ItemDescriptor const &);
    /**
     * @symbol ?isElytraBroken@Item@@SA_NH@Z
     */
    MCAPI static bool isElytraBroken(int);
    /**
     * @symbol ?isFlyEnabled@Item@@SA_NAEBVItemInstance@@@Z
     */
    MCAPI static bool isFlyEnabled(class ItemInstance const &);
    /**
     * @symbol ?isSameTypeAndItem@Item@@SA_NAEBVItemStackBase@@0@Z
     */
    MCAPI static bool isSameTypeAndItem(class ItemStackBase const &, class ItemStackBase const &);
MCAPI static class CreativeGroupInfo * mActiveCreativeGroupInfo;
MCAPI static class CreativeItemGroupCategory * mActiveCreativeItemCategory;
MCAPI static class CreativeItemRegistry * mActiveCreativeItemRegistry;
MCAPI static bool const mGenerateDenyParticleEffect;
MCAPI static struct TextureUVCoordinateSet mInvalidTextureUVCoordinateSet;
MCAPI static class std::weak_ptr<class AtlasItemManager> mItemTextureItems;
    /**
     * @symbol ?setAtlasItemManager@Item@@SAXV?$shared_ptr@VAtlasItemManager@@@std@@@Z
     */
    MCAPI static void setAtlasItemManager(class std::shared_ptr<class AtlasItemManager>);
    /**
     * @symbol ?startCreativeItemDefinitions@Item@@SAX_NPEAVCreativeItemRegistry@@@Z
     */
    MCAPI static void startCreativeItemDefinitions(bool, class CreativeItemRegistry *);
    /**
     * @symbol ?toBlockId@Item@@SA?AUNewBlockID@@F@Z
     */
    MCAPI static struct NewBlockID toBlockId(short);

//protected:
    /**
     * @symbol ?_helpChangeInventoryItemInPlace@Item@@IEBAXAEAVActor@@AEAVItemStack@@1W4ItemAcquisitionMethod@@@Z
     */
    MCAPI void _helpChangeInventoryItemInPlace(class Actor &, class ItemStack &, class ItemStack &, enum ItemAcquisitionMethod) const;

//private:
    /**
     * @symbol ?_addLooseCreativeItemsClient@Item@@CAXXZ
     */
    MCAPI static void _addLooseCreativeItemsClient();

protected:

private:
MCAPI static std::unique_ptr<class std::set<short, struct std::less<short>, class std::allocator<short>>> mServerItemsUsedInCreativeItems;

};