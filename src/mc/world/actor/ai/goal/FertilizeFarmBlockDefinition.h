#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class FertilizeFarmBlockDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FERTILIZEFARMBLOCKDEFINITION
public:
    FertilizeFarmBlockDefinition& operator=(FertilizeFarmBlockDefinition const&) = delete;
    FertilizeFarmBlockDefinition(FertilizeFarmBlockDefinition const&)            = delete;
#endif

public:
    /**
     * @symbol ??0FertilizeFarmBlockDefinition\@\@QEAA\@XZ
     */
    MCAPI FertilizeFarmBlockDefinition();
    /**
     * @symbol ?initialize\@FertilizeFarmBlockDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVFertilizeFarmBlockGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class FertilizeFarmBlockGoal&) const;
    /**
     * @symbol
     * ?buildSchema\@FertilizeFarmBlockDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VFertilizeFarmBlockDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void
    buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class FertilizeFarmBlockDefinition>>&);
};
