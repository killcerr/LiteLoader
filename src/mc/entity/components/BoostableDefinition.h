#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BoostableDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOOSTABLEDEFINITION
public:
    BoostableDefinition& operator=(BoostableDefinition const&) = delete;
    BoostableDefinition(BoostableDefinition const&)            = delete;
    BoostableDefinition()                                      = delete;
#endif

public:
    /**
     * @symbol ?initialize\@BoostableDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVBoostableComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class BoostableComponent&) const;
    /**
     * @symbol
     * ?buildSchema\@BoostableDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VBoostableDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BoostableDefinition>>&);
};
