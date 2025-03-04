#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class EnvironmentSensorDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENVIRONMENTSENSORDEFINITION
public:
    EnvironmentSensorDefinition& operator=(EnvironmentSensorDefinition const&) = delete;
    EnvironmentSensorDefinition(EnvironmentSensorDefinition const&)            = delete;
    EnvironmentSensorDefinition()                                              = delete;
#endif

public:
    /**
     * @symbol ?addEnvironmentTrigger\@EnvironmentSensorDefinition\@\@QEAAXAEBVActorDefinitionTrigger\@\@\@Z
     */
    MCAPI void addEnvironmentTrigger(class ActorDefinitionTrigger const&);
    /**
     * @symbol
     * ?buildSchema\@EnvironmentSensorDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VEnvironmentSensorDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class EnvironmentSensorDefinition>>&);
};
