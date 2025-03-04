#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class InteractDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTERACTDEFINITION
public:
    InteractDefinition& operator=(InteractDefinition const&) = delete;
    InteractDefinition(InteractDefinition const&)            = delete;
    InteractDefinition()                                     = delete;
#endif

public:
    /**
     * @symbol ?addInteraction\@InteractDefinition\@\@QEAAXAEBUInteraction\@\@\@Z
     */
    MCAPI void addInteraction(struct Interaction const&);
    /**
     * @symbol ?initialize\@InteractDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVInteractComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class InteractComponent&) const;
    /**
     * @symbol
     * ?buildSchema\@InteractDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VInteractDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class InteractDefinition>>&);
};
