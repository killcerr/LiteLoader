#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct InternalItemDescriptor {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTERNALITEMDESCRIPTOR
public:
    InternalItemDescriptor& operator=(InternalItemDescriptor const&) = delete;
    InternalItemDescriptor(InternalItemDescriptor const&)            = delete;
    InternalItemDescriptor()                                         = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol
     * ?clone\@InternalItemDescriptor\@\@UEBA?AV?$unique_ptr\@UBaseDescriptor\@ItemDescriptor\@\@U?$default_delete\@UBaseDescriptor\@ItemDescriptor\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> clone() const;
    /**
     * @vftbl 2
     * @symbol ?sameItem\@InternalItemDescriptor\@\@UEBA_NAEBUItemEntry\@ItemDescriptor\@\@_N\@Z
     */
    virtual bool sameItem(struct ItemDescriptor::ItemEntry const&, bool) const;
    /**
     * @vftbl 3
     * @symbol
     * ?getFullName\@InternalItemDescriptor\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getFullName() const;
    /**
     * @vftbl 4
     * @symbol ?getItem\@InternalItemDescriptor\@\@UEBA?AUItemEntry\@ItemDescriptor\@\@XZ
     */
    virtual struct ItemDescriptor::ItemEntry getItem() const;
    /**
     * @vftbl 6
     * @symbol
     * ?toMap\@InternalItemDescriptor\@\@UEBA?AV?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@XZ
     */
    virtual class std::map<
        std::string,
        std::string,
        struct std::less<std::string>,
        class std::allocator<struct std::pair<std::string const, std::string>>>
    toMap() const;
    /**
     * @vftbl 7
     * @symbol ?save\@InternalItemDescriptor\@\@UEBA?AV?$optional\@VCompoundTag\@\@\@std\@\@XZ
     */
    virtual class std::optional<class CompoundTag> save() const;
    /**
     * @vftbl 9
     * @symbol ?serialize\@InternalItemDescriptor\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void serialize(class BinaryStream&) const;
    /**
     * @vftbl 10
     * @symbol ?getType\@InternalItemDescriptor\@\@UEBA?AW4InternalType\@ItemDescriptor\@\@XZ
     */
    virtual enum class ItemDescriptor::InternalType getType() const;
    /**
     * @vftbl 12
     * @symbol ?getHash\@InternalItemDescriptor\@\@UEBA_KXZ
     */
    virtual unsigned __int64 getHash() const;
    /**
     * @symbol
     * ?deserialize\@InternalItemDescriptor\@\@SA?AV?$Result\@V?$unique_ptr\@UInternalItemDescriptor\@\@U?$default_delete\@UInternalItemDescriptor\@\@\@std\@\@\@std\@\@Verror_code\@2\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI static class Bedrock::Result<std::unique_ptr<struct InternalItemDescriptor>, class std::error_code>
    deserialize(class ReadOnlyBinaryStream&);
};
