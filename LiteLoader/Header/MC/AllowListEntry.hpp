// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_ALLOWLISTENTRY
#include "Extra/AllowListEntryAPI.hpp"
#undef EXTRA_INCLUDE_PART_ALLOWLISTENTRY
class AllowListEntry {
#include "Extra/AllowListEntryAPI.hpp"
public:
    /*0*/ virtual ~AllowListEntry();
    /*1*/ virtual void serialize(class Json::Value&);
    /*2*/ virtual void deserialize(class Json::Value&);


protected:

private:
};