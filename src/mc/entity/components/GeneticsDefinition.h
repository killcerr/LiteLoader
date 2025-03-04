#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GeneticsDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GENETICSDEFINITION
public:
    GeneticsDefinition& operator=(GeneticsDefinition const&) = delete;
    GeneticsDefinition(GeneticsDefinition const&)            = delete;
#endif

public:
    /**
     * @symbol ??0GeneticsDefinition\@\@QEAA\@XZ
     */
    MCAPI GeneticsDefinition();
    /**
     * @symbol ?addGeneDefinition\@GeneticsDefinition\@\@QEAAXAEBUGeneDefinition\@\@\@Z
     */
    MCAPI void addGeneDefinition(struct GeneDefinition const&);
    /**
     * @symbol ?initialize\@GeneticsDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVGeneticsComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class GeneticsComponent&) const;
    /**
     * @symbol
     * ?buildSchema\@GeneticsDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VGeneticsDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GeneticsDefinition>>&);

    // private:

private:
    /**
     * @symbol ?DEFAULT_MUTATION_RATE\@GeneticsDefinition\@\@0MB
     */
    MCAPI static float const DEFAULT_MUTATION_RATE;
};
