#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct IsStunnedDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISSTUNNEDDEFINITION
public:
    IsStunnedDefinition& operator=(IsStunnedDefinition const&) = delete;
    IsStunnedDefinition(IsStunnedDefinition const&)            = delete;
    IsStunnedDefinition()                                      = delete;
#endif

public:
    /**
     * @symbol ?initialize\@IsStunnedDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&) const;
    /**
     * @symbol ?uninitialize\@IsStunnedDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void uninitialize(class EntityContext&) const;
    /**
     * @symbol
     * ?buildSchema\@IsStunnedDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UIsStunnedDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsStunnedDefinition>>&);
};
