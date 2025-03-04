#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class LootPoolEntry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTPOOLENTRY
public:
    LootPoolEntry& operator=(LootPoolEntry const&) = delete;
    LootPoolEntry(LootPoolEntry const&)            = delete;
    LootPoolEntry()                                = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOOTPOOLENTRY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LootPoolEntry();
#endif
    /**
     * @symbol
     * ?createItem\@LootPoolEntry\@\@QEAAXAEAV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    MCAPI void createItem(std::vector<class ItemStack>&, class Random&, class LootTableContext&);
    /**
     * @symbol
     * ?getConditions\@LootPoolEntry\@\@QEBAAEBV?$vector\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::unique_ptr<class LootItemCondition>> const& getConditions() const;
    /**
     * @symbol ?getWeight\@LootPoolEntry\@\@QEBAHM\@Z
     */
    MCAPI int getWeight(float) const;
    /**
     * @symbol
     * ?deserialize\@LootPoolEntry\@\@SA?AV?$unique_ptr\@VLootPoolEntry\@\@U?$default_delete\@VLootPoolEntry\@\@\@std\@\@\@std\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI static std::unique_ptr<class LootPoolEntry> deserialize(class Json::Value const&);
};
