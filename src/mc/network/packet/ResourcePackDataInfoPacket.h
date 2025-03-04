#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class ResourcePackDataInfoPacket : public ::Packet {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKDATAINFOPACKET
public:
    ResourcePackDataInfoPacket& operator=(ResourcePackDataInfoPacket const&) = delete;
    ResourcePackDataInfoPacket(ResourcePackDataInfoPacket const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@ResourcePackDataInfoPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@ResourcePackDataInfoPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@ResourcePackDataInfoPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@ResourcePackDataInfoPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCEPACKDATAINFOPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ResourcePackDataInfoPacket();
#endif
    /**
     * @symbol ??0ResourcePackDataInfoPacket\@\@QEAA\@XZ
     */
    MCAPI ResourcePackDataInfoPacket();
    /**
     * @symbol
     * ??0ResourcePackDataInfoPacket\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@IH_K0_NW4PackType\@\@\@Z
     */
    MCAPI ResourcePackDataInfoPacket(
        std::string const&,
        unsigned int,
        int,
        unsigned __int64,
        std::string const&,
        bool,
        enum class PackType
    );
};
