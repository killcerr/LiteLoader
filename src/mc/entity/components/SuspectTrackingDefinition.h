#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SuspectTrackingDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUSPECTTRACKINGDEFINITION
public:
    SuspectTrackingDefinition& operator=(SuspectTrackingDefinition const&) = delete;
    SuspectTrackingDefinition(SuspectTrackingDefinition const&)            = delete;
    SuspectTrackingDefinition()                                            = delete;
#endif

public:
    /**
     * @symbol ?initialize\@SuspectTrackingDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVSuspectTrackingComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class SuspectTrackingComponent&) const;
    /**
     * @symbol
     * ?buildSchema\@SuspectTrackingDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VSuspectTrackingDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SuspectTrackingDefinition>>&);
};
