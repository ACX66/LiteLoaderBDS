// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "ContainerValidationBase.hpp"
#define EXTRA_INCLUDE_PART_BREWINGSTANDRESULTCONTAINERVALIDATION
#include "Extra/BrewingStandResultContainerValidationAPI.hpp"
#undef EXTRA_INCLUDE_PART_BREWINGSTANDRESULTCONTAINERVALIDATION
class BrewingStandResultContainerValidation : public ContainerValidationBase {
#include "Extra/BrewingStandResultContainerValidationAPI.hpp"
public:
    /*0*/ virtual ~BrewingStandResultContainerValidation();
    /*1*/ virtual bool isValidSlotForContainer(class ContainerScreenContext const&, class Container const&, int) const;
    /*2*/ virtual bool isItemAllowedInSlot(class ContainerScreenContext const&, int, class ItemStackBase const&, int) const;
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void __unk_vfn_1();


protected:

private:
};