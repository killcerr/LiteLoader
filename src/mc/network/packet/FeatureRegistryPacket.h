#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/level/levelgen/feature/registry/FeatureRegistry.h"

class FeatureRegistryPacket : public ::Packet {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FEATUREREGISTRYPACKET
public:
    FeatureRegistryPacket& operator=(FeatureRegistryPacket const&) = delete;
    FeatureRegistryPacket(FeatureRegistryPacket const&)            = delete;
    FeatureRegistryPacket()                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@FeatureRegistryPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@FeatureRegistryPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@FeatureRegistryPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@FeatureRegistryPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FEATUREREGISTRYPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~FeatureRegistryPacket();
#endif
    /**
     * @symbol
     * ??0FeatureRegistryPacket\@\@QEAA\@AEBV?$vector\@UFeatureBinaryJsonFormat\@FeatureRegistry\@\@V?$allocator\@UFeatureBinaryJsonFormat\@FeatureRegistry\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI FeatureRegistryPacket(std::vector<struct FeatureRegistry::FeatureBinaryJsonFormat> const&);
};
