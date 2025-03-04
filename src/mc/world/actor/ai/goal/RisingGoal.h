#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseTimedActorFlagGoal.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class RisingGoal : public ::BaseTimedActorFlagGoal {
public:
    // RisingGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // RisingGoal inner types define
    class Definition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RISINGGOAL_DEFINITION
    public:
        Definition& operator=(Definition const&) = delete;
        Definition(Definition const&)            = delete;
        Definition()                             = delete;
#endif

    public:
        /**
         * @symbol
         * ?buildSchema\@Definition\@RisingGoal\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDefinition\@RisingGoal\@\@\@JsonUtil\@\@\@4\@\@Z
         */
        MCAPI static void
        buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class RisingGoal::Definition>>&);
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RISINGGOAL
public:
    RisingGoal& operator=(RisingGoal const&) = delete;
    RisingGoal(RisingGoal const&)            = delete;
    RisingGoal()                             = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @symbol ??0RisingGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI RisingGoal(class Mob&);
};
