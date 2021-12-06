// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_SPAWNGROUPREGISTRY
#include "Extra/SpawnGroupRegistryAPI.hpp"
#undef EXTRA_INCLUDE_PART_SPAWNGROUPREGISTRY
class SpawnGroupRegistry {
#include "Extra/SpawnGroupRegistryAPI.hpp"
public:
    /*0*/ virtual ~SpawnGroupRegistry();
    /*1*/ virtual std::string const& getRootKey();
    /*2*/ virtual std::string const& getFileType();
    /*3*/ virtual bool processPopulationControl(std::string const&, class Json::Value&);
    /*4*/ virtual void readResourceFiles(class ResourcePackManager&, class std::unordered_map<std::string, std::string, struct std::hash<std::string >, struct std::equal_to<std::string >, class std::allocator<struct std::pair<std::string const, std::string > > >&);

    MCAPI class SpawnGroupData const* getSpawnGroup(std::string const&) const;

protected:

private:
};