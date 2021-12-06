// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_ACTORHASMOBEFFECT
#include "Extra/ActorHasMobEffectAPI.hpp"
#undef EXTRA_INCLUDE_PART_ACTORHASMOBEFFECT
class ActorHasMobEffect : public FilterTest {
#include "Extra/ActorHasMobEffectAPI.hpp"
public:
    /*0*/ virtual ~ActorHasMobEffect();
    /*1*/ virtual bool setup(struct FilterTest::Definition const&, struct FilterInputs const&);
    /*2*/ virtual bool evaluate(struct FilterContext const&) const;
    /*3*/ virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    /*4*/ virtual class gsl::basic_string_span<char const, -1> getName() const;
    /*5*/ virtual class Json::Value _serializeValue() const;


protected:

private:
};