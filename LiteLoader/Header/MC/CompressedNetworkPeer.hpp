// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "NetworkPeer.hpp"
#define EXTRA_INCLUDE_PART_COMPRESSEDNETWORKPEER
#include "Extra/CompressedNetworkPeerAPI.hpp"
#undef EXTRA_INCLUDE_PART_COMPRESSEDNETWORKPEER
class CompressedNetworkPeer : public NetworkPeer {
#include "Extra/CompressedNetworkPeerAPI.hpp"
public:
    /*0*/ virtual ~CompressedNetworkPeer();
    /*1*/ virtual void sendPacket(std::string const&, int /*enum enum NetworkPeer::Reliability*/, int, unsigned short, int /*enum enum Compressibility*/);
    /*2*/ virtual int /*enum enum NetworkPeer::DataStatus*/ receivePacket(std::string&, class std::shared_ptr<class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000> > > > const&);
    /*3*/ virtual struct NetworkPeer::NetworkStatus getNetworkStatus() const;


protected:

private:
};