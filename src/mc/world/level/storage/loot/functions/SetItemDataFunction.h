#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakPtr.h"
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SetItemDataFunction : public ::LootItemFunction {
public:
    // SetItemDataFunction inner types declare
    // clang-format off

    // clang-format on

    // SetItemDataFunction inner types define
    enum class ApplyForComplexAliasBlockResult {};

    enum class ApplyForItemResult {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETITEMDATAFUNCTION
public:
    SetItemDataFunction& operator=(SetItemDataFunction const&) = delete;
    SetItemDataFunction(SetItemDataFunction const&)            = delete;
    SetItemDataFunction()                                      = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?apply\@SetItemDataFunction\@\@UEAAXAEAVItemStack\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemStack&, class Random&, class LootTableContext&);
    /**
     * @vftbl 3
     * @symbol ?apply\@SetItemDataFunction\@\@UEAAXAEAVItemInstance\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemInstance&, class Random&, class LootTableContext&);
    /**
     * @symbol
     * ?deserialize\@SetItemDataFunction\@\@SA?AV?$unique_ptr\@VLootItemFunction\@\@U?$default_delete\@VLootItemFunction\@\@\@std\@\@\@std\@\@VValue\@Json\@\@AEAV?$vector\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI static std::unique_ptr<class LootItemFunction>
    deserialize(class Json::Value, std::vector<std::unique_ptr<class LootItemCondition>>&);

    // private:
    /**
     * @symbol
     * ?_applyImplForComplexAliasBlock\@SetItemDataFunction\@\@AEAA?AW4ApplyForComplexAliasBlockResult\@1\@AEAPEBVItem\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVRandom\@\@AEAH\@Z
     */
    MCAPI enum class SetItemDataFunction::ApplyForComplexAliasBlockResult
    _applyImplForComplexAliasBlock(class Item const*&, std::string const&, class Random&, int&);
    /**
     * @symbol
     * ?_applyImplForItem\@SetItemDataFunction\@\@AEAA?AW4ApplyForItemResult\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0AEAVRandom\@\@AEAHAEAV?$WeakPtr\@VItem\@\@\@\@\@Z
     */
    MCAPI enum class SetItemDataFunction::ApplyForItemResult
    _applyImplForItem(std::string const&, std::string const&, class Random&, int&, class WeakPtr<class Item>&);
    /**
     * @symbol ?_applyImplForNormalBlock\@SetItemDataFunction\@\@AEAAXAEAPEBVBlock\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void _applyImplForNormalBlock(class Block const*&, class Random&);

private:
};
