// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "ScriptApi.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTSERVERACTORDEFINITIONEVENTTRIGGEREDEVENT
#include "Extra/ScriptServerActorDefinitionEventTriggeredEventAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTSERVERACTORDEFINITIONEVENTTRIGGEREDEVENT
class ScriptServerActorDefinitionEventTriggeredEvent {
#include "Extra/ScriptServerActorDefinitionEventTriggeredEventAPI.hpp"
public:
    /*0*/ virtual ~ScriptServerActorDefinitionEventTriggeredEvent();
    /*1*/ virtual bool _serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle&) const;

    MCAPI void setActorId(struct ActorUniqueID const&);
    MCAPI void setEventId(std::string const&);

protected:

private:
    MCAPI static class HashedString const mHash;
};