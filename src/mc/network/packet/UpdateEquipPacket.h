#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class UpdateEquipPacket : public ::Packet {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATEEQUIPPACKET
public:
    UpdateEquipPacket& operator=(UpdateEquipPacket const&) = delete;
    UpdateEquipPacket(UpdateEquipPacket const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@UpdateEquipPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@UpdateEquipPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@UpdateEquipPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@UpdateEquipPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_UPDATEEQUIPPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~UpdateEquipPacket();
#endif
    /**
     * @symbol ??0UpdateEquipPacket\@\@QEAA\@XZ
     */
    MCAPI UpdateEquipPacket();
    /**
     * @symbol
     * ??0UpdateEquipPacket\@\@QEAA\@W4ContainerID\@\@W4ContainerType\@\@H$$QEAVCompoundTag\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI
    UpdateEquipPacket(enum class ContainerID, enum class ContainerType, int, class CompoundTag&&, struct ActorUniqueID const&);
};
