// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_SCRIPTSERVERNETWORKEVENTLISTENER
#include "Extra/ScriptServerNetworkEventListenerAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTSERVERNETWORKEVENTLISTENER
class ScriptServerNetworkEventListener {
#include "Extra/ScriptServerNetworkEventListenerAPI.hpp"
public:
    /*0*/ virtual ~ScriptServerNetworkEventListener();
    /*1*/ virtual int /*enum enum EventResult*/ onChat(struct ChatEvent const&);


protected:

private:
};