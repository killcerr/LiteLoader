#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DragonFlamingDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRAGONFLAMINGDEFINITION
public:
    DragonFlamingDefinition& operator=(DragonFlamingDefinition const&) = delete;
    DragonFlamingDefinition(DragonFlamingDefinition const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?validateMobType\@DragonFlamingDefinition\@\@UEBA_NAEAVMob\@\@\@Z
     */
    virtual bool validateMobType(class Mob&) const;
    /**
     * @symbol ??0DragonFlamingDefinition\@\@QEAA\@XZ
     */
    MCAPI DragonFlamingDefinition();
    /**
     * @symbol ?initialize\@DragonFlamingDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVDragonFlamingGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class DragonFlamingGoal&) const;
    /**
     * @symbol
     * ?buildSchema\@DragonFlamingDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDragonFlamingDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void
    buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DragonFlamingDefinition>>&);
};
