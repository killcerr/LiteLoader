#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct PushThroughDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PUSHTHROUGHDEFINITION
public:
    PushThroughDefinition& operator=(PushThroughDefinition const&) = delete;
    PushThroughDefinition(PushThroughDefinition const&)            = delete;
    PushThroughDefinition()                                        = delete;
#endif

public:
    /**
     * @symbol ?initialize\@PushThroughDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&) const;
    /**
     * @symbol
     * ?buildSchema\@PushThroughDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UPushThroughDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct PushThroughDefinition>>&);
};
