#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class ItemUseOnActorInventoryTransaction {
public:
    // ItemUseOnActorInventoryTransaction inner types declare
    // clang-format off

    // clang-format on

    // ItemUseOnActorInventoryTransaction inner types define
    enum class ActionType {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMUSEONACTORINVENTORYTRANSACTION
public:
    ItemUseOnActorInventoryTransaction& operator=(ItemUseOnActorInventoryTransaction const&) = delete;
    ItemUseOnActorInventoryTransaction(ItemUseOnActorInventoryTransaction const&)            = delete;
    ItemUseOnActorInventoryTransaction()                                                     = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?read\@ItemUseOnActorInventoryTransaction\@\@UEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> read(class ReadOnlyBinaryStream&);
    /**
     * @vftbl 2
     * @symbol ?write\@ItemUseOnActorInventoryTransaction\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 3
     * @symbol ?postLoadItems\@ItemUseOnActorInventoryTransaction\@\@UEAAXAEAVBlockPalette\@\@_N\@Z
     */
    virtual void postLoadItems(class BlockPalette&, bool);
    /**
     * @vftbl 4
     * @symbol ?handle\@ItemUseOnActorInventoryTransaction\@\@UEBA?AW4InventoryTransactionError\@\@AEAVPlayer\@\@_N\@Z
     */
    virtual enum class InventoryTransactionError handle(class Player&, bool) const;
    /**
     * @vftbl 5
     * @symbol
     * ?onTransactionError\@ItemUseOnActorInventoryTransaction\@\@UEBAXAEAVPlayer\@\@W4InventoryTransactionError\@\@\@Z
     */
    virtual void onTransactionError(class Player&, enum class InventoryTransactionError) const;
    /**
     * @symbol ?setSelectedItem\@ItemUseOnActorInventoryTransaction\@\@QEAAAEAV1\@AEBVItemStack\@\@\@Z
     */
    MCAPI class ItemUseOnActorInventoryTransaction& setSelectedItem(class ItemStack const&);
};
