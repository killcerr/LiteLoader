#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/IWebRTCSignalingInterface.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class IWebRTCSignalingInterface; }
namespace NetherNet { enum class ERelayServerConfigurationResult; }
namespace NetherNet { enum class ESendType; }
namespace NetherNet { enum class SignalingHostConnectionStatus; }
namespace NetherNet { struct NetherNetTransportServerConfiguration; }
namespace NetherNet { struct NetworkID; }
namespace NetherNet { struct SessionState; }
// clang-format on

class NetherNetTransportStub {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERNETTRANSPORTSTUB
public:
    NetherNetTransportStub& operator=(NetherNetTransportStub const&) = delete;
    NetherNetTransportStub(NetherNetTransportStub const&)            = delete;
    NetherNetTransportStub()                                         = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETHERNETTRANSPORTSTUB
    /**
     * @symbol ?AcceptSessionWithUser\@NetherNetTransportStub\@\@UEAA_NUNetworkID\@NetherNet\@\@\@Z
     */
    MCVAPI bool AcceptSessionWithUser(struct NetherNet::NetworkID);
    /**
     * @symbol ?ClearPacketData\@NetherNetTransportStub\@\@UEAAXUNetworkID\@NetherNet\@\@\@Z
     */
    MCVAPI void ClearPacketData(struct NetherNet::NetworkID);
    /**
     * @symbol ?CloseSessionWithUser\@NetherNetTransportStub\@\@UEAA_NUNetworkID\@NetherNet\@\@\@Z
     */
    MCVAPI bool CloseSessionWithUser(struct NetherNet::NetworkID);
    /**
     * @symbol ?DisableBroadcastDiscovery\@NetherNetTransportStub\@\@UEAAXXZ
     */
    MCVAPI void DisableBroadcastDiscovery();
    /**
     * @symbol ?DisableSignalingOverLAN\@NetherNetTransportStub\@\@UEAAXXZ
     */
    MCVAPI void DisableSignalingOverLAN();
    /**
     * @symbol ?EnableBroadcastDiscovery\@NetherNetTransportStub\@\@UEAAXXZ
     */
    MCVAPI void EnableBroadcastDiscovery();
    /**
     * @symbol ?EnableSignalingOverLAN\@NetherNetTransportStub\@\@UEAAXXZ
     */
    MCVAPI void EnableSignalingOverLAN();
    /**
     * @symbol ?GetSessionState\@NetherNetTransportStub\@\@UEAA_NUNetworkID\@NetherNet\@\@PEAUSessionState\@3\@\@Z
     */
    MCVAPI bool GetSessionState(struct NetherNet::NetworkID, struct NetherNet::SessionState*);
    /**
     * @symbol ?IsBroadcastDiscoveryEnabled\@NetherNetTransportStub\@\@UEAA_NXZ
     */
    MCVAPI bool IsBroadcastDiscoveryEnabled();
    /**
     * @symbol ?IsPacketAvailable\@NetherNetTransportStub\@\@UEAA_NUNetworkID\@NetherNet\@\@PEAI\@Z
     */
    MCVAPI bool IsPacketAvailable(struct NetherNet::NetworkID, unsigned int*);
    /**
     * @symbol ?IsSignedIntoSignalingService\@NetherNetTransportStub\@\@UEBA_NXZ
     */
    MCVAPI bool IsSignedIntoSignalingService() const;
    /**
     * @symbol ?OpenSessionWithUser\@NetherNetTransportStub\@\@UEAA_NUNetworkID\@NetherNet\@\@\@Z
     */
    MCVAPI bool OpenSessionWithUser(struct NetherNet::NetworkID);
    /**
     * @symbol ?ReadPacket\@NetherNetTransportStub\@\@UEAA_NUNetworkID\@NetherNet\@\@PEAXIPEAI\@Z
     */
    MCVAPI bool ReadPacket(struct NetherNet::NetworkID, void*, unsigned int, unsigned int*);
    /**
     * @symbol
     * ?RegisterRelayServerCredentialsReadyCallback\@NetherNetTransportStub\@\@UEAAXAEBV?$function\@$$A6AXW4ERelayServerConfigurationResult\@NetherNet\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void
    RegisterRelayServerCredentialsReadyCallback(class std::function<
                                                void(enum class NetherNet::ERelayServerConfigurationResult)> const&);
    /**
     * @symbol ?SendPacket\@NetherNetTransportStub\@\@UEAA_NUNetworkID\@NetherNet\@\@PEBDIW4ESendType\@3\@\@Z
     */
    MCVAPI bool SendPacket(struct NetherNet::NetworkID, char const*, unsigned int, enum class NetherNet::ESendType);
    /**
     * @symbol
     * ?SetServerConfiguration\@NetherNetTransportStub\@\@UEAAXPEBUNetherNetTransportServerConfiguration\@NetherNet\@\@\@Z
     */
    MCVAPI void SetServerConfiguration(struct NetherNet::NetherNetTransportServerConfiguration const*);
    /**
     * @symbol
     * ?SetWebRTCSignalingInterface\@NetherNetTransportStub\@\@UEAAXAEBV?$shared_ptr\@VIWebRTCSignalingInterface\@NetherNet\@\@\@std\@\@\@Z
     */
    MCVAPI void SetWebRTCSignalingInterface(class std::shared_ptr<class NetherNet::IWebRTCSignalingInterface> const&);
    /**
     * @symbol
     * ?SignIntoSignalingService\@NetherNetTransportStub\@\@UEAAXAEBV?$function\@$$A6AXVerror_code\@std\@\@\@Z\@std\@\@AEBV?$function\@$$A6AXW4SignalingHostConnectionStatus\@NetherNet\@\@I\@Z\@3\@AEBUSignalingConfiguration\@IWebRTCSignalingInterface\@NetherNet\@\@\@Z
     */
    MCVAPI void
    SignIntoSignalingService(class std::function<void(class std::error_code)> const&, class std::function<void(enum class NetherNet::SignalingHostConnectionStatus, unsigned int)> const&, struct NetherNet::IWebRTCSignalingInterface::SignalingConfiguration const&);
    /**
     * @symbol ?SignOutFromSignalingService\@NetherNetTransportStub\@\@UEAAXXZ
     */
    MCVAPI void SignOutFromSignalingService();
#endif
};
