#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class InventoryTransactionPacket : public ::Packet {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORYTRANSACTIONPACKET
public:
    InventoryTransactionPacket& operator=(InventoryTransactionPacket const&) = delete;
    InventoryTransactionPacket(InventoryTransactionPacket const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@InventoryTransactionPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@InventoryTransactionPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@InventoryTransactionPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@InventoryTransactionPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INVENTORYTRANSACTIONPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~InventoryTransactionPacket();
#endif
    /**
     * @symbol
     * ??0InventoryTransactionPacket\@\@QEAA\@V?$unique_ptr\@VComplexInventoryTransaction\@\@U?$default_delete\@VComplexInventoryTransaction\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI InventoryTransactionPacket(std::unique_ptr<class ComplexInventoryTransaction>, bool);
    /**
     * @symbol ??0InventoryTransactionPacket\@\@QEAA\@XZ
     */
    MCAPI InventoryTransactionPacket();
    /**
     * @symbol ?postLoadItems\@InventoryTransactionPacket\@\@QEBAXAEAVBlockPalette\@\@_N\@Z
     */
    MCAPI void postLoadItems(class BlockPalette&, bool) const;
};
