#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/List.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
namespace RakNet { class PluginInterface2; }
namespace RakNet { class RakNetRandom; }
namespace RakNet { class RakNetSocket2; }
namespace RakNet { struct InternalPacket; }
namespace RakNet { struct RakNetStatistics; }
namespace RakNet { struct SplitPacketChannel; }
namespace RakNet { struct SystemAddress; }
namespace RakNet { struct uint24_t; }
// clang-format on

namespace RakNet {

class ReliabilityLayer {
public:
    // ReliabilityLayer inner types declare
    // clang-format off
    struct DatagramHistoryNode;
    struct MessageNumberNode;
    // clang-format on

    // ReliabilityLayer inner types define
    struct DatagramHistoryNode {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNET_RELIABILITYLAYER_DATAGRAMHISTORYNODE
    public:
        DatagramHistoryNode& operator=(DatagramHistoryNode const&) = delete;
        DatagramHistoryNode(DatagramHistoryNode const&)            = delete;
        DatagramHistoryNode()                                      = delete;
#endif

    public:
    };

    struct MessageNumberNode {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNET_RELIABILITYLAYER_MESSAGENUMBERNODE
    public:
        MessageNumberNode& operator=(MessageNumberNode const&) = delete;
        MessageNumberNode(MessageNumberNode const&)            = delete;
        MessageNumberNode()                                    = delete;
#endif

    public:
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNET_RELIABILITYLAYER
public:
    ReliabilityLayer& operator=(ReliabilityLayer const&) = delete;
    ReliabilityLayer(ReliabilityLayer const&)            = delete;
#endif

public:
    /**
     * @symbol ?AckTimeout\@ReliabilityLayer\@RakNet\@\@QEAA_N_K\@Z
     */
    MCAPI bool AckTimeout(unsigned __int64);
    /**
     * @symbol ?AreAcksWaiting\@ReliabilityLayer\@RakNet\@\@QEAA_NXZ
     */
    MCAPI bool AreAcksWaiting();
    /**
     * @symbol ?GetStatistics\@ReliabilityLayer\@RakNet\@\@QEAAPEAURakNetStatistics\@2\@PEAU32\@\@Z
     */
    MCAPI struct RakNet::RakNetStatistics* GetStatistics(struct RakNet::RakNetStatistics*);
    /**
     * @symbol ?GetTimeoutTime\@ReliabilityLayer\@RakNet\@\@QEAAIXZ
     */
    MCAPI unsigned int GetTimeoutTime();
    /**
     * @symbol
     * ?HandleSocketReceiveFromConnectedPlayer\@ReliabilityLayer\@RakNet\@\@QEAA_NPEBDIAEAUSystemAddress\@2\@AEAV?$List\@PEAVPluginInterface2\@RakNet\@\@\@DataStructures\@\@HPEAVRakNetSocket2\@2\@PEAVRakNetRandom\@2\@_KAEAVBitStream\@2\@\@Z
     */
    MCAPI bool
    HandleSocketReceiveFromConnectedPlayer(char const*, unsigned int, struct RakNet::SystemAddress&, class DataStructures::List<class RakNet::PluginInterface2*>&, int, class RakNet::RakNetSocket2*, class RakNet::RakNetRandom*, unsigned __int64, class RakNet::BitStream&);
    /**
     * @symbol ?IsDeadConnection\@ReliabilityLayer\@RakNet\@\@QEBA_NXZ
     */
    MCAPI bool IsDeadConnection() const;
    /**
     * @symbol ?IsOutgoingDataWaiting\@ReliabilityLayer\@RakNet\@\@QEAA_NXZ
     */
    MCAPI bool IsOutgoingDataWaiting();
    /**
     * @symbol ?Receive\@ReliabilityLayer\@RakNet\@\@QEAAIPEAPEAE\@Z
     */
    MCAPI unsigned int Receive(unsigned char**);
    /**
     * @symbol ??0ReliabilityLayer\@RakNet\@\@QEAA\@XZ
     */
    MCAPI ReliabilityLayer();
    /**
     * @symbol ?Reset\@ReliabilityLayer\@RakNet\@\@QEAAX_NH0\@Z
     */
    MCAPI void Reset(bool, int, bool);
    /**
     * @symbol ?Send\@ReliabilityLayer\@RakNet\@\@QEAA_NPEADIW4PacketPriority\@\@W4PacketReliability\@\@E_NH_KI\@Z
     */
    MCAPI bool Send(
        char*,
        unsigned int,
        enum class PacketPriority,
        enum class PacketReliability,
        unsigned char,
        bool,
        int,
        unsigned __int64,
        unsigned int
    );
    /**
     * @symbol ?SetSplitMessageProgressInterval\@ReliabilityLayer\@RakNet\@\@QEAAXH\@Z
     */
    MCAPI void SetSplitMessageProgressInterval(int);
    /**
     * @symbol ?SetTimeoutTime\@ReliabilityLayer\@RakNet\@\@QEAAXI\@Z
     */
    MCAPI void SetTimeoutTime(unsigned int);
    /**
     * @symbol ?SetUnreliableTimeout\@ReliabilityLayer\@RakNet\@\@QEAAXI\@Z
     */
    MCAPI void SetUnreliableTimeout(unsigned int);
    /**
     * @symbol
     * ?Update\@ReliabilityLayer\@RakNet\@\@QEAAXPEAVRakNetSocket2\@2\@AEAUSystemAddress\@2\@H_KIAEAV?$List\@PEAVPluginInterface2\@RakNet\@\@\@DataStructures\@\@PEAVRakNetRandom\@2\@AEAVBitStream\@2\@\@Z
     */
    MCAPI void
    Update(class RakNet::RakNetSocket2*, struct RakNet::SystemAddress&, int, unsigned __int64, unsigned int, class DataStructures::List<class RakNet::PluginInterface2*>&, class RakNet::RakNetRandom*, class RakNet::BitStream&);
    /**
     * @symbol ??1ReliabilityLayer\@RakNet\@\@QEAA\@XZ
     */
    MCAPI ~ReliabilityLayer();

    // private:
    /**
     * @symbol ?AllocateFromInternalPacketPool\@ReliabilityLayer\@RakNet\@\@AEAAPEAUInternalPacket\@2\@XZ
     */
    MCAPI struct RakNet::InternalPacket* AllocateFromInternalPacketPool();
    /**
     * @symbol
     * ?BuildPacketFromSplitPacketList\@ReliabilityLayer\@RakNet\@\@AEAAPEAUInternalPacket\@2\@G_KPEAVRakNetSocket2\@2\@AEAUSystemAddress\@2\@PEAVRakNetRandom\@2\@AEAVBitStream\@2\@\@Z
     */
    MCAPI struct RakNet::InternalPacket*
    BuildPacketFromSplitPacketList(unsigned short, unsigned __int64, class RakNet::RakNetSocket2*, struct RakNet::SystemAddress&, class RakNet::RakNetRandom*, class RakNet::BitStream&);
    /**
     * @symbol
     * ?BuildPacketFromSplitPacketList\@ReliabilityLayer\@RakNet\@\@AEAAPEAUInternalPacket\@2\@PEAUSplitPacketChannel\@2\@_K\@Z
     */
    MCAPI struct RakNet::InternalPacket*
    BuildPacketFromSplitPacketList(struct RakNet::SplitPacketChannel*, unsigned __int64);
    /**
     * @symbol ?ClearPacketsAndDatagrams\@ReliabilityLayer\@RakNet\@\@AEAAXXZ
     */
    MCAPI void ClearPacketsAndDatagrams();
    /**
     * @symbol
     * ?CreateInternalPacketFromBitStream\@ReliabilityLayer\@RakNet\@\@AEAAPEAUInternalPacket\@2\@PEAVBitStream\@2\@_K\@Z
     */
    MCAPI struct RakNet::InternalPacket* CreateInternalPacketFromBitStream(class RakNet::BitStream*, unsigned __int64);
    /**
     * @symbol ?FreeInternalPacketData\@ReliabilityLayer\@RakNet\@\@AEAAXPEAUInternalPacket\@2\@PEBDI\@Z
     */
    MCAPI void FreeInternalPacketData(struct RakNet::InternalPacket*, char const*, unsigned int);
    /**
     * @symbol ?FreeThreadSafeMemory\@ReliabilityLayer\@RakNet\@\@AEAAXXZ
     */
    MCAPI void FreeThreadSafeMemory();
    /**
     * @symbol
     * ?GetMessageNumberNodeByDatagramIndex\@ReliabilityLayer\@RakNet\@\@AEAAPEAUMessageNumberNode\@12\@Uuint24_t\@2\@PEA_K\@Z
     */
    MCAPI struct RakNet::ReliabilityLayer::MessageNumberNode*
    GetMessageNumberNodeByDatagramIndex(struct RakNet::uint24_t, unsigned __int64*);
    /**
     * @symbol ?GetNextWeight\@ReliabilityLayer\@RakNet\@\@AEAA_KH\@Z
     */
    MCAPI unsigned __int64 GetNextWeight(int);
    /**
     * @symbol ?InitializeVariables\@ReliabilityLayer\@RakNet\@\@AEAAXXZ
     */
    MCAPI void InitializeVariables();
    /**
     * @symbol ?InsertIntoSplitPacketList\@ReliabilityLayer\@RakNet\@\@AEAAXPEAUInternalPacket\@2\@_K\@Z
     */
    MCAPI void InsertIntoSplitPacketList(struct RakNet::InternalPacket*, unsigned __int64);
    /**
     * @symbol ?PushDatagram\@ReliabilityLayer\@RakNet\@\@AEAAXXZ
     */
    MCAPI void PushDatagram();
    /**
     * @symbol ?PushPacket\@ReliabilityLayer\@RakNet\@\@AEAAX_KPEAUInternalPacket\@2\@_N\@Z
     */
    MCAPI void PushPacket(unsigned __int64, struct RakNet::InternalPacket*, bool);
    /**
     * @symbol ?RemoveFromDatagramHistory\@ReliabilityLayer\@RakNet\@\@AEAAXUuint24_t\@2\@\@Z
     */
    MCAPI void RemoveFromDatagramHistory(struct RakNet::uint24_t);
    /**
     * @symbol
     * ?RemovePacketFromResendListAndDeleteOlderReliableSequenced\@ReliabilityLayer\@RakNet\@\@AEAAIUuint24_t\@2\@_KAEAV?$List\@PEAVPluginInterface2\@RakNet\@\@\@DataStructures\@\@AEBUSystemAddress\@2\@\@Z
     */
    MCAPI unsigned int
    RemovePacketFromResendListAndDeleteOlderReliableSequenced(struct RakNet::uint24_t, unsigned __int64, class DataStructures::List<class RakNet::PluginInterface2*>&, struct RakNet::SystemAddress const&);
    /**
     * @symbol
     * ?SendACKs\@ReliabilityLayer\@RakNet\@\@AEAAXPEAVRakNetSocket2\@2\@AEAUSystemAddress\@2\@_KPEAVRakNetRandom\@2\@AEAVBitStream\@2\@\@Z
     */
    MCAPI void
    SendACKs(class RakNet::RakNetSocket2*, struct RakNet::SystemAddress&, unsigned __int64, class RakNet::RakNetRandom*, class RakNet::BitStream&);
    /**
     * @symbol
     * ?SendBitStream\@ReliabilityLayer\@RakNet\@\@AEAAXPEAVRakNetSocket2\@2\@AEAUSystemAddress\@2\@PEAVBitStream\@2\@PEAVRakNetRandom\@2\@_K\@Z
     */
    MCAPI void SendBitStream(
        class RakNet::RakNetSocket2*,
        struct RakNet::SystemAddress&,
        class RakNet::BitStream*,
        class RakNet::RakNetRandom*,
        unsigned __int64
    );
    /**
     * @symbol ?SplitPacket\@ReliabilityLayer\@RakNet\@\@AEAAXPEAUInternalPacket\@2\@\@Z
     */
    MCAPI void SplitPacket(struct RakNet::InternalPacket*);
    /**
     * @symbol
     * ?WriteToBitStreamFromInternalPacket\@ReliabilityLayer\@RakNet\@\@AEAAIPEAVBitStream\@2\@QEBUInternalPacket\@2\@_K\@Z
     */
    MCAPI unsigned int WriteToBitStreamFromInternalPacket(
        class RakNet::BitStream*,
        struct RakNet::InternalPacket const* const,
        unsigned __int64
    );

private:
};

}; // namespace RakNet
