// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_MANAGEDWANDERINGTRADERDESCRIPTION
#include "Extra/ManagedWanderingTraderDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART_MANAGEDWANDERINGTRADERDESCRIPTION
class ManagedWanderingTraderDescription {
#include "Extra/ManagedWanderingTraderDescriptionAPI.hpp"
public:
    /*0*/ virtual char const* getJsonName() const;
    /*1*/ virtual ~ManagedWanderingTraderDescription();
    /*2*/ virtual void serializeData(class Json::Value&) const;


protected:

private:
};