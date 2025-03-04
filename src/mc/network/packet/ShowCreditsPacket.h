#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class ShowCreditsPacket : public ::Packet {
public:
    // ShowCreditsPacket inner types declare
    // clang-format off

    // clang-format on

    // ShowCreditsPacket inner types define
    enum class CreditsState {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHOWCREDITSPACKET
public:
    ShowCreditsPacket& operator=(ShowCreditsPacket const&) = delete;
    ShowCreditsPacket(ShowCreditsPacket const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@ShowCreditsPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@ShowCreditsPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@ShowCreditsPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@ShowCreditsPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHOWCREDITSPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ShowCreditsPacket();
#endif
    /**
     * @symbol ??0ShowCreditsPacket\@\@QEAA\@VActorRuntimeID\@\@W4CreditsState\@0\@\@Z
     */
    MCAPI ShowCreditsPacket(class ActorRuntimeID, enum class ShowCreditsPacket::CreditsState);
    /**
     * @symbol ??0ShowCreditsPacket\@\@QEAA\@XZ
     */
    MCAPI ShowCreditsPacket();
};
