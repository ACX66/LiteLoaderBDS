/**
 * @file  ItemStack.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ItemStackBase.hpp"

#define BEFORE_EXTRA
// Add include headers & pre-declares
#include "ItemStackNetIdVariant.hpp"
#include "MC/I18n.hpp"
#include "MC/PropertiesSettings.hpp"
class Tag;
class ItemActor;
class CompoundTag;
class ItemInstance;

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStack.
 *
 */
class ItemStack : public ItemStackBase {

#define AFTER_EXTRA
// Add new members to class
    ItemStackNetIdVariant mNetId;

public:
    // The return value should be freed by the developer if it is no longer used
    LIAPI static ItemStack* create();
    // The return value should be freed by the developer if it is no longer used
    LIAPI static ItemStack* create(std::string type, int count = 1);
    // The return value should be freed by the developer if it is no longer used
    LIAPI static ItemStack* create(std::unique_ptr<CompoundTag> tag);
    // The return value should be freed by the developer if it is no longer used
    LIAPI static ItemStack* create(short itemId, int aux,int count = 1);
    LIAPI ItemStack* clone_s() const;
    LIAPI static ItemStack fromItemInstance(ItemInstance const& ins);

    LIAPI std::string getTypeName() const;
    LIAPI int getAux() const;
    LIAPI int getCount() const;

    LIAPI bool setItem(ItemStack* newItem);
    LIAPI bool setLore(const std::vector<std::string>& lores);
    LIAPI std::unique_ptr<CompoundTag> getNbt();
    LIAPI bool setNbt(CompoundTag* nbt);
    LIAPI string getStandardName(const Localization& language);

#undef AFTER_EXTRA
public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~ItemStack();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?reinit@ItemStack@@UEAAXAEBVItem@@HH@Z
     */
    virtual void reinit(class Item const &, int, int);
    /**
     * @note   Virtual function table index: 2
     * @symbol ?reinit@ItemStack@@UEAAXAEBVBlockLegacy@@H@Z
     */
    virtual void reinit(class BlockLegacy const &, int);
    /**
     * @note   Virtual function table index: 3
     * @symbol ?reinit@ItemStack@@UEAAXV?$basic_string_span@$$CBD$0?0@gsl@@HH@Z
     */
    virtual void reinit(class gsl::basic_string_span<char const, -1>, int, int);
    /**
     * @note   Virtual function table index: 4
     * @symbol ?setNull@ItemStack@@UEAAXXZ
     */
    virtual void setNull();
    /**
     * @note   Virtual function table index: 5
     * @symbol ?toString@ItemStack@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string toString() const;
    /**
     * @note   Virtual function table index: 6
     * @symbol ?toDebugString@ItemStack@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string toDebugString() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTACK
#endif
    /**
     * @symbol ??0ItemStack@@QEAA@XZ
     */
    MCAPI ItemStack();
    /**
     * @symbol ??0ItemStack@@QEAA@V?$basic_string_span@$$CBD$0?0@gsl@@HHPEBVCompoundTag@@@Z
     */
    MCAPI ItemStack(class gsl::basic_string_span<char const, -1>, int, int, class CompoundTag const *);
    /**
     * @symbol ??0ItemStack@@QEAA@AEBVRecipeIngredient@@@Z
     */
    MCAPI ItemStack(class RecipeIngredient const &);
    /**
     * @symbol ??0ItemStack@@QEAA@AEBVItemInstance@@@Z
     */
    MCAPI ItemStack(class ItemInstance const &);
    /**
     * @symbol ??0ItemStack@@QEAA@AEBVItem@@HHPEBVCompoundTag@@@Z
     */
    MCAPI ItemStack(class Item const &, int, int, class CompoundTag const *);
    /**
     * @symbol ??0ItemStack@@QEAA@AEBVItem@@HH@Z
     */
    MCAPI ItemStack(class Item const &, int, int);
    /**
     * @symbol ??0ItemStack@@QEAA@AEBVItem@@H@Z
     */
    MCAPI ItemStack(class Item const &, int);
    /**
     * @symbol ??0ItemStack@@QEAA@AEBVItem@@@Z
     */
    MCAPI ItemStack(class Item const &);
    /**
     * @symbol ??0ItemStack@@QEAA@AEBVBlockLegacy@@H@Z
     */
    MCAPI ItemStack(class BlockLegacy const &, int);
    /**
     * @symbol ??0ItemStack@@QEAA@AEBVBlock@@HPEBVCompoundTag@@@Z
     */
    MCAPI ItemStack(class Block const &, int, class CompoundTag const *);
    /**
     * @symbol ??0ItemStack@@QEAA@AEBV0@@Z
     */
    MCAPI ItemStack(class ItemStack const &);
    /**
     * @symbol ?_assignNetIdVariant@ItemStack@@QEBAXAEBV1@@Z
     */
    MCAPI void _assignNetIdVariant(class ItemStack const &) const;
    /**
     * @symbol ?clientInitLegacyRequestId@ItemStack@@QEAAXAEBV?$TypedClientNetId@UItemStackLegacyRequestIdTag@@H$0A@@@@Z
     */
    MCAPI void clientInitLegacyRequestId(class TypedClientNetId<struct ItemStackLegacyRequestIdTag, int, 0> const &);
    /**
     * @symbol ?clone@ItemStack@@QEBA?AV1@XZ
     */
    MCAPI class ItemStack clone() const;
    /**
     * @symbol ?getDestroySpeed@ItemStack@@QEBAMAEBVBlock@@@Z
     */
    MCAPI float getDestroySpeed(class Block const &) const;
    /**
     * @symbol ?getItemStackNetIdVariant@ItemStack@@QEBAAEBUItemStackNetIdVariant@@XZ
     */
    MCAPI struct ItemStackNetIdVariant const & getItemStackNetIdVariant() const;
    /**
     * @symbol ?getMaxUseDuration@ItemStack@@QEBAHXZ
     */
    MCAPI int getMaxUseDuration() const;
    /**
     * @symbol ?getStrippedNetworkItem@ItemStack@@QEBA?AV1@XZ
     */
    MCAPI class ItemStack getStrippedNetworkItem() const;
    /**
     * @symbol ?hasItemStackNetId@ItemStack@@QEBA_NXZ
     */
    MCAPI bool hasItemStackNetId() const;
    /**
     * @symbol ?inventoryTick@ItemStack@@QEAA_NAEAVLevel@@AEAVActor@@H_N@Z
     */
    MCAPI bool inventoryTick(class Level &, class Actor &, int, bool);
    /**
     * @symbol ?matchesAndNetIdVariantMatches@ItemStack@@QEBA_NAEBV1@@Z
     */
    MCAPI bool matchesAndNetIdVariantMatches(class ItemStack const &) const;
    /**
     * @symbol ?matchesNetIdVariant@ItemStack@@QEBA_NAEBV1@@Z
     */
    MCAPI bool matchesNetIdVariant(class ItemStack const &) const;
    /**
     * @symbol ?mineBlock@ItemStack@@QEAAXAEBVBlock@@HHHPEAVMob@@@Z
     */
    MCAPI void mineBlock(class Block const &, int, int, int, class Mob *);
    /**
     * @symbol ??4ItemStack@@QEAAAEAV0@AEBV0@@Z
     */
    MCAPI class ItemStack & operator=(class ItemStack const &);
    /**
     * @symbol ?playSoundIncrementally@ItemStack@@QEBAXAEAVMob@@@Z
     */
    MCAPI void playSoundIncrementally(class Mob &) const;
    /**
     * @symbol ?releaseUsing@ItemStack@@QEAAXPEAVPlayer@@H@Z
     */
    MCAPI void releaseUsing(class Player *, int);
    /**
     * @symbol ?sameItemAndAuxAndBlockData@ItemStack@@QEBA_NAEBV1@@Z
     */
    MCAPI bool sameItemAndAuxAndBlockData(class ItemStack const &) const;
    /**
     * @symbol ?serverInitNetId@ItemStack@@QEAAXXZ
     */
    MCAPI void serverInitNetId();
    /**
     * @symbol ?tryGetItemStackNetId@ItemStack@@QEBAPEBV?$TypedServerNetId@UItemStackNetIdTag@@H$0A@@@XZ
     */
    MCAPI class TypedServerNetId<struct ItemStackNetIdTag, int, 0> const * tryGetItemStackNetId() const;
    /**
     * @symbol ?use@ItemStack@@QEAAAEAV1@AEAVPlayer@@@Z
     */
    MCAPI class ItemStack & use(class Player &);
    /**
     * @symbol ?useAsFuel@ItemStack@@QEAAXXZ
     */
    MCAPI void useAsFuel();
    /**
     * @symbol ?useOn@ItemStack@@QEAA_NAEAVActor@@HHHEAEBVVec3@@@Z
     */
    MCAPI bool useOn(class Actor &, int, int, int, unsigned char, class Vec3 const &);
    /**
     * @symbol ?useTimeDepleted@ItemStack@@QEAA?AW4ItemUseMethod@@PEAVLevel@@PEAVPlayer@@@Z
     */
    MCAPI enum ItemUseMethod useTimeDepleted(class Level *, class Player *);
MCAPI static class ItemStack const EMPTY_ITEM;
    /**
     * @symbol ?fromDescriptor@ItemStack@@SA?AV1@AEBVNetworkItemStackDescriptor@@AEAVBlockPalette@@_N@Z
     */
    MCAPI static class ItemStack fromDescriptor(class NetworkItemStackDescriptor const &, class BlockPalette &, bool);
    /**
     * @symbol ?fromTag@ItemStack@@SA?AV1@AEBVCompoundTag@@@Z
     */
    MCAPI static class ItemStack fromTag(class CompoundTag const &);
    /**
     * @symbol ?fromTag@ItemStack@@SA?AV1@AEBVCompoundTag@@AEAVLevel@@@Z
     */
    MCAPI static class ItemStack fromTag(class CompoundTag const &, class Level &);

};