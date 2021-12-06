// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Json.hpp"
#include "FilterTest.hpp"
#define EXTRA_INCLUDE_PART_FILTERGROUP
#include "Extra/FilterGroupAPI.hpp"
#undef EXTRA_INCLUDE_PART_FILTERGROUP
class FilterGroup {
#include "Extra/FilterGroupAPI.hpp"
public:
    /*0*/ virtual ~FilterGroup();
    /*1*/ virtual class std::shared_ptr<class FilterGroup> _createSubgroup(int /*enum enum FilterGroup::CollectionType*/) const = 0;
    /*2*/ virtual bool _setupContext(class FilterTest const&, struct FilterContext&) const;
    /*3*/ virtual bool _handleUnknownMember(std::string const&, class Json::Value const&);

    MCAPI bool addFilterTest(struct FilterTest::Definition const&, struct FilterInputs const&);
    MCAPI bool addFilterTest(std::string const&, struct FilterInputs const&);
    MCAPI bool empty() const;
    MCAPI bool evaluate(class std::array<struct FilterContext, 10>&) const;
    MCAPI std::vector<class std::shared_ptr<class FilterGroup>> const& getChildren() const;
    MCAPI std::vector<class std::shared_ptr<class FilterTest>> const& getMembers() const;
    MCAPI bool parse(class Json::Value const&);
    MCAPI void serialize(class Json::Value&) const;

protected:
    MCAPI bool _parseFilterInputs(class Json::Value const&, struct FilterTest::Definition const&, struct FilterInputs&);
    MCAPI bool _parseFilterParam(std::string const&, std::string const&, class Json::Value const&, struct FilterParamDefinition const&, class FilterInput&);
    MCAPI bool _parseMember(std::string const&, class Json::Value const&);
    MCAPI bool _parseObject(std::string const&, class Json::Value const&);
    MCAPI bool _parseTest(class Json::Value const&);

private:
};