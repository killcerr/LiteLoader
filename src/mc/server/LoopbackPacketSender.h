#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtrT.h"

class LoopbackPacketSender {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOPBACKPACKETSENDER
public:
    LoopbackPacketSender& operator=(LoopbackPacketSender const&) = delete;
    LoopbackPacketSender(LoopbackPacketSender const&)            = delete;
    LoopbackPacketSender()                                       = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?send\@LoopbackPacketSender\@\@UEAAXAEAVPacket\@\@\@Z
     */
    virtual void send(class Packet&);
    /**
     * @vftbl 2
     * @symbol ?sendToServer\@LoopbackPacketSender\@\@UEAAXAEAVPacket\@\@\@Z
     */
    virtual void sendToServer(class Packet&);
    /**
     * @vftbl 3
     * @symbol ?sendToClient\@LoopbackPacketSender\@\@UEAAXPEBVUserEntityIdentifierComponent\@\@AEBVPacket\@\@\@Z
     */
    virtual void sendToClient(class UserEntityIdentifierComponent const*, class Packet const&);
    /**
     * @vftbl 4
     * @symbol ?sendToClient\@LoopbackPacketSender\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPacket\@\@W4SubClientId\@\@\@Z
     */
    virtual void sendToClient(class NetworkIdentifier const&, class Packet const&, enum class SubClientId);
    /**
     * @vftbl 5
     * @symbol
     * ?sendToClients\@LoopbackPacketSender\@\@UEAAXAEBV?$vector\@UNetworkIdentifierWithSubId\@\@V?$allocator\@UNetworkIdentifierWithSubId\@\@\@std\@\@\@std\@\@AEBVPacket\@\@\@Z
     */
    virtual void sendToClients(std::vector<struct NetworkIdentifierWithSubId> const&, class Packet const&);
    /**
     * @vftbl 6
     * @symbol ?sendBroadcast\@LoopbackPacketSender\@\@UEAAXAEBVPacket\@\@\@Z
     */
    virtual void sendBroadcast(class Packet const&);
    /**
     * @vftbl 7
     * @symbol ?sendBroadcast\@LoopbackPacketSender\@\@UEAAXAEBVNetworkIdentifier\@\@W4SubClientId\@\@AEBVPacket\@\@\@Z
     */
    virtual void sendBroadcast(class NetworkIdentifier const&, enum class SubClientId, class Packet const&);
    /**
     * @vftbl 8
     * @symbol ?flush\@LoopbackPacketSender\@\@UEAAXAEBVNetworkIdentifier\@\@$$QEAV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    virtual void flush(class NetworkIdentifier const&, class std::function<void(void)>&&);
    /**
     * @symbol ??0LoopbackPacketSender\@\@QEAA\@W4SubClientId\@\@AEAVNetworkSystem\@\@\@Z
     */
    MCAPI LoopbackPacketSender(enum class SubClientId, class NetworkSystem&);
    /**
     * @symbol ?addLoopbackCallback\@LoopbackPacketSender\@\@QEAAXAEAVNetEventCallback\@\@\@Z
     */
    MCAPI void addLoopbackCallback(class NetEventCallback&);
    /**
     * @symbol ?removeLoopbackCallback\@LoopbackPacketSender\@\@QEAAXAEAVNetEventCallback\@\@\@Z
     */
    MCAPI void removeLoopbackCallback(class NetEventCallback&);
    /**
     * @symbol
     * ?setUserList\@LoopbackPacketSender\@\@QEAAXPEBV?$vector\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@V?$allocator\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setUserList(std::vector<class OwnerPtrT<struct EntityRefTraits>> const*);
};
