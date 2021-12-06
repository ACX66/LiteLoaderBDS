// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "LevelContainerManagerModel.hpp"
#define EXTRA_INCLUDE_PART_DROPPERCONTAINERMANAGERMODEL
#include "Extra/DropperContainerManagerModelAPI.hpp"
#undef EXTRA_INCLUDE_PART_DROPPERCONTAINERMANAGERMODEL
class DropperContainerManagerModel : public LevelContainerManagerModel {
#include "Extra/DropperContainerManagerModelAPI.hpp"
public:
    /*0*/ virtual ~DropperContainerManagerModel();
    /*1*/ virtual int /*enum enum ContainerID*/ getContainerId() const;
    /*2*/ virtual void setContainerId(int /*enum enum ContainerID*/);
    /*3*/ virtual int /*enum enum ContainerType*/ getContainerType() const;
    /*4*/ virtual void setContainerType(int /*enum enum ContainerType*/);
    /*5*/ virtual void setData(int, int);
    /*6*/ virtual class ContainerScreenContext _postInit();


protected:

private:
};