#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class AddActorPacket : public ::Packet {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADDACTORPACKET
public:
    AddActorPacket& operator=(AddActorPacket const&) = delete;
    AddActorPacket(AddActorPacket const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@AddActorPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@AddActorPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@AddActorPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@AddActorPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ADDACTORPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AddActorPacket();
#endif
    /**
     * @symbol ??0AddActorPacket\@\@QEAA\@XZ
     */
    MCAPI AddActorPacket();
    /**
     * @symbol ??0AddActorPacket\@\@QEAA\@AEAVActor\@\@\@Z
     */
    MCAPI AddActorPacket(class Actor&);
};
