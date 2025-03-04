#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ClientboundDebugRendererPacket : public ::Packet {
public:
    // ClientboundDebugRendererPacket inner types declare
    // clang-format off

    // clang-format on

    // ClientboundDebugRendererPacket inner types define
    enum class Type {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTBOUNDDEBUGRENDERERPACKET
public:
    ClientboundDebugRendererPacket& operator=(ClientboundDebugRendererPacket const&) = delete;
    ClientboundDebugRendererPacket(ClientboundDebugRendererPacket const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@ClientboundDebugRendererPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@ClientboundDebugRendererPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@ClientboundDebugRendererPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@ClientboundDebugRendererPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CLIENTBOUNDDEBUGRENDERERPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ClientboundDebugRendererPacket();
#endif
    /**
     * @symbol
     * ??0ClientboundDebugRendererPacket\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVColor\@mce\@\@AEBVVec3\@\@V?$duration\@_JU?$ratio\@$00$0DOI\@\@std\@\@\@chrono\@2\@\@Z
     */
    MCAPI
    ClientboundDebugRendererPacket(std::string, class mce::Color const&, class Vec3 const&, class std::chrono::duration<__int64, struct std::ratio<1, 1000>>);
    /**
     * @symbol ??0ClientboundDebugRendererPacket\@\@QEAA\@XZ
     */
    MCAPI ClientboundDebugRendererPacket();
    /**
     * @symbol ??0ClientboundDebugRendererPacket\@\@QEAA\@W4Type\@0\@\@Z
     */
    MCAPI ClientboundDebugRendererPacket(enum class ClientboundDebugRendererPacket::Type);
};
