#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class CameraPresetsPacket : public ::Packet {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAMERAPRESETSPACKET
public:
    CameraPresetsPacket& operator=(CameraPresetsPacket const&) = delete;
    CameraPresetsPacket(CameraPresetsPacket const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@CameraPresetsPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@CameraPresetsPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@CameraPresetsPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 4
     * @symbol
     * ?read\@CameraPresetsPacket\@\@UEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> read(class ReadOnlyBinaryStream&);
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@CameraPresetsPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CAMERAPRESETSPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CameraPresetsPacket();
#endif
    /**
     * @symbol ??0CameraPresetsPacket\@\@QEAA\@AEBVCameraPresets\@\@\@Z
     */
    MCAPI CameraPresetsPacket(class CameraPresets const&);
    /**
     * @symbol ??0CameraPresetsPacket\@\@QEAA\@XZ
     */
    MCAPI CameraPresetsPacket();
};
