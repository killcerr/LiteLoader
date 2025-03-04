#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class NearestAttackableTargetDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NEARESTATTACKABLETARGETDEFINITION
public:
    NearestAttackableTargetDefinition& operator=(NearestAttackableTargetDefinition const&) = delete;
    NearestAttackableTargetDefinition(NearestAttackableTargetDefinition const&)            = delete;
    NearestAttackableTargetDefinition()                                                    = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?validate\@NearestAttackableTargetDefinition\@\@UEBA_NAEAVMob\@\@\@Z
     */
    virtual bool validate(class Mob&) const;
    /**
     * @symbol
     * ?initialize\@NearestAttackableTargetDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVNearestAttackableTargetGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class NearestAttackableTargetGoal&) const;
    /**
     * @symbol
     * ?buildSchema\@NearestAttackableTargetDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VNearestAttackableTargetDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void
    buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class NearestAttackableTargetDefinition>>&);
};
