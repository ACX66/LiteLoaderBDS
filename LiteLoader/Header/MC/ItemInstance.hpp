// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "ItemStackBase.hpp"
#define EXTRA_INCLUDE_PART_ITEMINSTANCE
#include "Extra/ItemInstanceAPI.hpp"
#undef EXTRA_INCLUDE_PART_ITEMINSTANCE
class ItemInstance : public ItemStackBase {
#include "Extra/ItemInstanceAPI.hpp"
public:
    /*0*/ virtual ~ItemInstance();
    /*1*/ virtual void reinit(class Item const&, int, int);
    /*2*/ virtual void reinit(class BlockLegacy const&, int);
    /*3*/ virtual void reinit(class gsl::basic_string_span<char const, -1>, int, int);

    MCAPI void __autoclassinit2(unsigned __int64);
    MCAPI class ItemInstance clone() const;
    MCAPI class ItemInstance& operator=(class ItemInstance const&);
    MCAPI static class ItemInstance const EMPTY_ITEM;
    MCAPI static class ItemInstance fromTag(class CompoundTag const&);

protected:

private:
};