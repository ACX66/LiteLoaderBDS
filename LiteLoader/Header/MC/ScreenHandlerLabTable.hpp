// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_SCREENHANDLERLABTABLE
#include "Extra/ScreenHandlerLabTableAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCREENHANDLERLABTABLE
class ScreenHandlerLabTable {
#include "Extra/ScreenHandlerLabTableAPI.hpp"
public:
    /*0*/ virtual ~ScreenHandlerLabTable();
    /*1*/ virtual int /*enum enum ItemStackNetResult*/ handleAction(class ItemStackRequestAction const&);
    /*2*/ virtual int /*enum enum ItemStackNetResult*/ endRequest();
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void postRequest(bool);


protected:

private:
    MCAPI enum ItemStackNetResult _handleLabTableCombine(class ItemStackRequestActionDataless<7> const&);
};