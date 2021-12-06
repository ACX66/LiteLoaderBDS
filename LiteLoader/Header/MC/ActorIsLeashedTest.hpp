// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_ACTORISLEASHEDTEST
#include "Extra/ActorIsLeashedTestAPI.hpp"
#undef EXTRA_INCLUDE_PART_ACTORISLEASHEDTEST
class ActorIsLeashedTest : public FilterTest {
#include "Extra/ActorIsLeashedTestAPI.hpp"
public:
    /*0*/ virtual ~ActorIsLeashedTest();
    /*1*/ virtual bool evaluate(struct FilterContext const&) const;
    /*2*/ virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    /*3*/ virtual class gsl::basic_string_span<char const, -1> getName() const;


protected:

private:
};