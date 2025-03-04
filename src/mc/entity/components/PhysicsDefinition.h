#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class PhysicsDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PHYSICSDEFINITION
public:
    PhysicsDefinition& operator=(PhysicsDefinition const&) = delete;
    PhysicsDefinition(PhysicsDefinition const&)            = delete;
#endif

public:
    /**
     * @symbol ??0PhysicsDefinition\@\@QEAA\@XZ
     */
    MCAPI PhysicsDefinition();
    /**
     * @symbol ?initialize\@PhysicsDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVPhysicsComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class PhysicsComponent&) const;
    /**
     * @symbol
     * ?buildSchema\@PhysicsDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VPhysicsDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class PhysicsDefinition>>&);
};
