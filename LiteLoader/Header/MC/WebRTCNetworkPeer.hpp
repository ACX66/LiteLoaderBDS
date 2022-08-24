/**
 * @file  WebRTCNetworkPeer.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "NetworkPeer.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WebRTCNetworkPeer.
 *
 */
class WebRTCNetworkPeer : public NetworkPeer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEBRTCNETWORKPEER
public:
    class WebRTCNetworkPeer& operator=(class WebRTCNetworkPeer const &) = delete;
    WebRTCNetworkPeer(class WebRTCNetworkPeer const &) = delete;
    WebRTCNetworkPeer() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~WebRTCNetworkPeer();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?sendPacket@WebRTCNetworkPeer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Reliability@NetworkPeer@@HGW4Compressibility@@@Z
     */
    virtual void sendPacket(std::string const &, enum NetworkPeer::Reliability, int, unsigned short, enum Compressibility);
    /**
     * @note   Virtual function table index: 2
     * @symbol ?receivePacket@WebRTCNetworkPeer@@UEAA?AW4DataStatus@NetworkPeer@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@5@@Z
     */
    virtual enum NetworkPeer::DataStatus receivePacket(std::string &, class std::shared_ptr<class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>> const &);
    /**
     * @note   Virtual function table index: 3
     * @symbol ?getNetworkStatus@WebRTCNetworkPeer@@UEBA?AUNetworkStatus@NetworkPeer@@XZ
     */
    virtual struct NetworkPeer::NetworkStatus getNetworkStatus() const;
    /**
     * @note   Virtual function table index: 4
     * @symbol ?update@WebRTCNetworkPeer@@UEAAXXZ
     */
    virtual void update();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WEBRTCNETWORKPEER
#endif
    /**
     * @symbol ??0WebRTCNetworkPeer@@QEAA@AEBV?$shared_ptr@UNetherNetInstance@@@std@@@Z
     */
    MCAPI WebRTCNetworkPeer(class std::shared_ptr<struct NetherNetInstance> const &);
    /**
     * @symbol ?setRemoteUserID@WebRTCNetworkPeer@@QEAAX_K@Z
     */
    MCAPI void setRemoteUserID(unsigned __int64);
    /**
     * @symbol ?pullIncomingData@WebRTCNetworkPeer@@SAXAEBV?$shared_ptr@UNetherNetInstance@@@std@@AEAVNetworkHandler@@@Z
     */
    MCAPI static void pullIncomingData(class std::shared_ptr<struct NetherNetInstance> const &, class NetworkHandler &);

//private:
    /**
     * @symbol ?_updateConnectionStatus@WebRTCNetworkPeer@@AEAAXXZ
     */
    MCAPI void _updateConnectionStatus();

private:

};