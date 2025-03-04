#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class NameableDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAMEABLEDEFINITION
public:
    NameableDefinition& operator=(NameableDefinition const&) = delete;
    NameableDefinition(NameableDefinition const&)            = delete;
#endif

public:
    /**
     * @symbol ??0NameableDefinition\@\@QEAA\@XZ
     */
    MCAPI NameableDefinition();
    /**
     * @symbol ?addNameAction\@NameableDefinition\@\@QEAAXAEBUNameAction\@\@\@Z
     */
    MCAPI void addNameAction(struct NameAction const&);
    /**
     * @symbol ?initialize\@NameableDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVNameableComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class NameableComponent&) const;
    /**
     * @symbol ??1NameableDefinition\@\@QEAA\@XZ
     */
    MCAPI ~NameableDefinition();
    /**
     * @symbol
     * ?buildSchema\@NameableDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VNameableDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class NameableDefinition>>&);
};
