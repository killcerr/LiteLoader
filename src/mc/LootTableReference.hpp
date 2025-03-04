/**
 * @file  LootTableReference.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LootTableReference.
 *
 */
class LootTableReference {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTTABLEREFERENCE
public:
    class LootTableReference& operator=(class LootTableReference const &) = delete;
    LootTableReference(class LootTableReference const &) = delete;
    LootTableReference() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  ?_createItem\@LootTableReference\@\@MEAA_NAEAV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual bool _createItem(std::vector<class ItemStack> &, class Random &, class LootTableContext &);
    /**
     * @symbol  ?deserialize\@LootTableReference\@\@SA?AV?$unique_ptr\@VLootPoolEntry\@\@U?$default_delete\@VLootPoolEntry\@\@\@std\@\@\@std\@\@VValue\@Json\@\@HHAEAV?$vector\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI static std::unique_ptr<class LootPoolEntry> deserialize(class Json::Value, int, int, std::vector<std::unique_ptr<class LootItemCondition>> &);

};