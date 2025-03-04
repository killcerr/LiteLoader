#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class LootItemCondition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMCONDITION
public:
    LootItemCondition& operator=(LootItemCondition const&) = delete;
    LootItemCondition(LootItemCondition const&)            = delete;
    LootItemCondition()                                    = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOOTITEMCONDITION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LootItemCondition();
#endif
    /**
     * @symbol
     * ?deserialize\@LootItemCondition\@\@SA?AV?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@VValue\@Json\@\@\@Z
     */
    MCAPI static std::unique_ptr<class LootItemCondition> deserialize(class Json::Value);
};
