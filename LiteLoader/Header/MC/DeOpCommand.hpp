// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_DEOPCOMMAND
#include "Extra/DeOpCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART_DEOPCOMMAND
class DeOpCommand {
#include "Extra/DeOpCommandAPI.hpp"
public:
    /*0*/ virtual ~DeOpCommand();
    /*1*/ virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    MCAPI static void setup(class CommandRegistry&);

protected:

private:
};