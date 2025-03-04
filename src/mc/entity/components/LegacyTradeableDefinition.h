#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class LegacyTradeableDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYTRADEABLEDEFINITION
public:
    LegacyTradeableDefinition& operator=(LegacyTradeableDefinition const&) = delete;
    LegacyTradeableDefinition(LegacyTradeableDefinition const&)            = delete;
#endif

public:
    /**
     * @symbol ??0LegacyTradeableDefinition\@\@QEAA\@XZ
     */
    MCAPI LegacyTradeableDefinition();
    /**
     * @symbol ?initialize\@LegacyTradeableDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVLegacyTradeableComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class LegacyTradeableComponent&) const;
    /**
     * @symbol
     * ?buildSchema\@LegacyTradeableDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VLegacyTradeableDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class LegacyTradeableDefinition>>&);
};
