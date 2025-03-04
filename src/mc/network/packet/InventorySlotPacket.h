#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class InventorySlotPacket : public ::Packet {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORYSLOTPACKET
public:
    InventorySlotPacket& operator=(InventorySlotPacket const&) = delete;
    InventorySlotPacket(InventorySlotPacket const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@InventorySlotPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@InventorySlotPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@InventorySlotPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@InventorySlotPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INVENTORYSLOTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~InventorySlotPacket();
#endif
    /**
     * @symbol ??0InventorySlotPacket\@\@QEAA\@W4ContainerID\@\@IAEBVItemStack\@\@\@Z
     */
    MCAPI InventorySlotPacket(enum class ContainerID, unsigned int, class ItemStack const&);
    /**
     * @symbol ??0InventorySlotPacket\@\@QEAA\@XZ
     */
    MCAPI InventorySlotPacket();
};
