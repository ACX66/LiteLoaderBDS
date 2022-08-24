/**
 * @file  ArmorItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ArmorItem.
 *
 */
class ArmorItem : public Item {

#define AFTER_EXTRA
// Add Member There
public:
class ArmorMaterial {
public:
    ArmorMaterial() = delete;
    ArmorMaterial(ArmorMaterial const&) = delete;
    ArmorMaterial(ArmorMaterial const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARMORITEM
public:
    class ArmorItem& operator=(class ArmorItem const &) = delete;
    ArmorItem(class ArmorItem const &) = delete;
    ArmorItem() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~ArmorItem();
    /**
     * @note   Virtual function table index: 7
     * @symbol 
     */
    virtual void __unk_vfn_7();
    /**
     * @note   Virtual function table index: 11
     * @symbol 
     */
    virtual void __unk_vfn_11();
    /**
     * @note   Virtual function table index: 12
     * @symbol ?isArmor@ArmorItem@@UEBA_NXZ
     */
    virtual bool isArmor() const;
    /**
     * @note   Virtual function table index: 14
     * @symbol 
     */
    virtual void __unk_vfn_14();
    /**
     * @note   Virtual function table index: 16
     * @symbol 
     */
    virtual void __unk_vfn_16();
    /**
     * @note   Virtual function table index: 18
     * @symbol ?isDyeable@ArmorItem@@UEBA_NXZ
     */
    virtual bool isDyeable() const;
    /**
     * @note   Virtual function table index: 52
     * @symbol 
     */
    virtual void __unk_vfn_52();
    /**
     * @note   Virtual function table index: 54
     * @symbol 
     */
    virtual void __unk_vfn_54();
    /**
     * @note   Virtual function table index: 61
     * @symbol ?appendFormattedHovertext@ArmorItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @note   Virtual function table index: 62
     * @symbol ?isValidRepairItem@ArmorItem@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
     */
    virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &, class BaseGameVersion const &) const;
    /**
     * @note   Virtual function table index: 63
     * @symbol ?getEnchantSlot@ArmorItem@@UEBAHXZ
     */
    virtual int getEnchantSlot() const;
    /**
     * @note   Virtual function table index: 64
     * @symbol ?getEnchantValue@ArmorItem@@UEBAHXZ
     */
    virtual int getEnchantValue() const;
    /**
     * @note   Virtual function table index: 65
     * @symbol ?getArmorValue@ArmorItem@@UEBAHXZ
     */
    virtual int getArmorValue() const;
    /**
     * @note   Virtual function table index: 66
     * @symbol ?getToughnessValue@ArmorItem@@UEBAHXZ
     */
    virtual int getToughnessValue() const;
    /**
     * @note   Virtual function table index: 67
     * @symbol 
     */
    virtual void __unk_vfn_67();
    /**
     * @note   Virtual function table index: 69
     * @symbol ?getDamageChance@ArmorItem@@UEBAHH@Z
     */
    virtual int getDamageChance(int) const;
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
     * @symbol ?getColor@ArmorItem@@UEBA?AVColor@mce@@PEBVCompoundTag@@AEBVItemDescriptor@@@Z
     */
    virtual class mce::Color getColor(class CompoundTag const *, class ItemDescriptor const &) const;
    /**
     * @note   Virtual function table index: 75
     * @symbol ?hasCustomColor@ArmorItem@@UEBA_NPEBVCompoundTag@@@Z
     */
    virtual bool hasCustomColor(class CompoundTag const *) const;
    /**
     * @note   Virtual function table index: 76
     * @symbol 
     */
    virtual void __unk_vfn_76();
    /**
     * @note   Virtual function table index: 77
     * @symbol ?clearColor@ArmorItem@@UEBAXAEAVItemStackBase@@@Z
     */
    virtual void clearColor(class ItemStackBase &) const;
    /**
     * @note   Virtual function table index: 79
     * @symbol ?setColor@ArmorItem@@UEBAXAEAVItemStackBase@@AEBVColor@mce@@@Z
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
     * @note   Virtual function table index: 83
     * @symbol ?buildIdAux@ArmorItem@@UEBAHFPEBVCompoundTag@@@Z
     */
    virtual int buildIdAux(short, class CompoundTag const *) const;
    /**
     * @note   Virtual function table index: 85
     * @symbol ?use@ArmorItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @note   Virtual function table index: 86
     * @symbol ?dispense@ArmorItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @note   Virtual function table index: 90
     * @symbol ?hurtActor@ArmorItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
     */
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @note   Virtual function table index: 94
     * @symbol ?mineBlock@ArmorItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
     */
    virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @note   Virtual function table index: 115
     * @symbol ?getEquipLocation@ArmorItem@@UEBA?AW4ActorLocation@@XZ
     */
    virtual enum ActorLocation getEquipLocation() const;
    /**
     * @note   Virtual function table index: 116
     * @symbol ?getEquipSound@ArmorItem@@UEBA?AW4LevelSoundEvent@@XZ
     */
    virtual enum LevelSoundEvent getEquipSound() const;
    /**
     * @note   Virtual function table index: 123
     * @symbol ?getIcon@ArmorItem@@UEBAAEBUTextureUVCoordinateSet@@AEBVItemStackBase@@H_N@Z
     */
    virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /**
     * @note   Virtual function table index: 125
     * @symbol ?setIcon@ArmorItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    virtual class Item & setIcon(std::string const &, int);
    /**
     * @note   Virtual function table index: 137
     * @symbol ?getArmorKnockbackResistance@ArmorItem@@UEBAMXZ
     */
    virtual float getArmorKnockbackResistance() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ARMORITEM
#endif
    /**
     * @symbol ??0ArmorItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVArmorMaterial@0@HW4ArmorSlot@@@Z
     */
    MCAPI ArmorItem(std::string const &, int, class ArmorItem::ArmorMaterial const &, int, enum ArmorSlot);
MCAPI static class ArmorItem::ArmorMaterial const CHAIN;
MCAPI static class ArmorItem::ArmorMaterial const DIAMOND;
MCAPI static class ArmorItem::ArmorMaterial const ELYTRA;
MCAPI static class ArmorItem::ArmorMaterial const GOLD;
MCAPI static class ArmorItem::ArmorMaterial const IRON;
MCAPI static class ArmorItem::ArmorMaterial const LEATHER;
MCAPI static class ArmorItem::ArmorMaterial const NETHERITE;
MCAPI static class ArmorItem::ArmorMaterial const TURTLE;
    /**
     * @symbol ?dispenseArmor@ArmorItem@@SA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@EW4ArmorSlot@@@Z
     */
    MCAPI static bool dispenseArmor(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char, enum ArmorSlot);
    /**
     * @symbol ?getSlotForItem@ArmorItem@@SA?AW4ArmorSlot@@AEBVItemStackBase@@@Z
     */
    MCAPI static enum ArmorSlot getSlotForItem(class ItemStackBase const &);
    /**
     * @symbol ?isDamageable@ArmorItem@@SA_NAEBVItemDescriptor@@@Z
     */
    MCAPI static bool isDamageable(class ItemDescriptor const &);
MCAPI static int const mHealthPerSlot[];

//private:
    /**
     * @symbol ?getTierItem@ArmorItem@@AEBA?AVItemInstance@@XZ
     */
    MCAPI class ItemInstance getTierItem() const;

private:

};