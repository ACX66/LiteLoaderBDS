// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "BehaviorDefinition.hpp"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_INTERACTACTIONDEFINITION
#include "Extra/InteractActionDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_INTERACTACTIONDEFINITION
class InteractActionDefinition : public BehaviorDefinition {
#include "Extra/InteractActionDefinitionAPI.hpp"
public:
    /*0*/ virtual ~InteractActionDefinition();
    /*1*/ virtual void load(class Json::Value, class BehaviorFactory const&);


protected:

private:
};