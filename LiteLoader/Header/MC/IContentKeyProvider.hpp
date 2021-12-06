// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_ICONTENTKEYPROVIDER
#include "Extra/IContentKeyProviderAPI.hpp"
#undef EXTRA_INCLUDE_PART_ICONTENTKEYPROVIDER
class IContentKeyProvider {
#include "Extra/IContentKeyProviderAPI.hpp"
public:
    /*0*/ virtual ~IContentKeyProvider();
    /*1*/ virtual void __unk_vfn_0() = 0;
    /*2*/ virtual std::string getAlternateContentKey(class ContentIdentity const&) const;
    /*3*/ virtual bool requireEncryptedReads() const;


protected:

private:
};