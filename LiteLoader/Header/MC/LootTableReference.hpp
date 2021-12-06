// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_LOOTTABLEREFERENCE
#include "Extra/LootTableReferenceAPI.hpp"
#undef EXTRA_INCLUDE_PART_LOOTTABLEREFERENCE
class LootTableReference {
#include "Extra/LootTableReferenceAPI.hpp"
public:
    /*0*/ virtual bool _createItem(std::vector<class ItemStack>&, class Random&, class LootTableContext&);
    /*1*/ virtual ~LootTableReference();

    MCAPI static std::unique_ptr<class LootPoolEntry> deserialize(class Json::Value, int, int, std::vector<std::unique_ptr<class LootItemCondition>>&);

protected:

private:
};