// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "ContainerValidationBase.hpp"
#define EXTRA_INCLUDE_PART_INVENTORYCONTAINERVALIDATION
#include "Extra/InventoryContainerValidationAPI.hpp"
#undef EXTRA_INCLUDE_PART_INVENTORYCONTAINERVALIDATION
class InventoryContainerValidation : public ContainerValidationBase {
#include "Extra/InventoryContainerValidationAPI.hpp"
public:
    /*0*/ virtual ~InventoryContainerValidation();
    /*1*/ virtual bool isValidSlotForContainer(class ContainerScreenContext const&, class Container const&, int) const;
    /*2*/ virtual void __unk_vfn_0();
    /*3*/ virtual void __unk_vfn_1();
    /*4*/ virtual bool isItemAllowedToRemove(class ContainerScreenContext const&, class ItemStackBase const&) const;
    /*5*/ virtual void __unk_vfn_2();
    /*
    inline bool canItemMoveToContainer(class ItemStackBase const& a0) const{
        bool (InventoryContainerValidation::*rv)(class ItemStackBase const&) const;
        *((void**)&rv) = dlsym("?canItemMoveToContainer@InventoryContainerValidation@@UEBA_NAEBVItemStackBase@@@Z");
        return (this->*rv)(std::forward<class ItemStackBase const&>(a0));
    }
    */

protected:

private:
};