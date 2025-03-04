#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class RandomSearchAndDigGoal {
public:
    // RandomSearchAndDigGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // RandomSearchAndDigGoal inner types define
    enum class CanUseOutcome {};

    class Definition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMSEARCHANDDIGGOAL_DEFINITION
    public:
        Definition& operator=(Definition const&) = delete;
        Definition(Definition const&)            = delete;
#endif

    public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RANDOMSEARCHANDDIGGOAL_DEFINITION
        /**
         * @symbol __unk_destructor_-1
         */
        MCVAPI ~Definition();
#endif
        /**
         * @symbol ??0Definition\@RandomSearchAndDigGoal\@\@QEAA\@XZ
         */
        MCAPI Definition();
        /**
         * @symbol
         * ?addWeightedChoiceEntry\@Definition\@RandomSearchAndDigGoal\@\@QEAAXAEBURandomSearchAndDigItemChoiceEntry\@\@\@Z
         */
        MCAPI void addWeightedChoiceEntry(struct RandomSearchAndDigItemChoiceEntry const&);
        /**
         * @symbol ?initialize\@Definition\@RandomSearchAndDigGoal\@\@QEBAXAEAVEntityContext\@\@AEAV2\@\@Z
         */
        MCAPI void initialize(class EntityContext&, class RandomSearchAndDigGoal&) const;
        /**
         * @symbol
         * ?buildSchema\@Definition\@RandomSearchAndDigGoal\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDefinition\@RandomSearchAndDigGoal\@\@\@JsonUtil\@\@\@4\@\@Z
         */
        MCAPI static void
        buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class RandomSearchAndDigGoal::Definition>>&);
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMSEARCHANDDIGGOAL
public:
    RandomSearchAndDigGoal& operator=(RandomSearchAndDigGoal const&) = delete;
    RandomSearchAndDigGoal(RandomSearchAndDigGoal const&)            = delete;
    RandomSearchAndDigGoal()                                         = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@RandomSearchAndDigGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@RandomSearchAndDigGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@RandomSearchAndDigGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@RandomSearchAndDigGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@RandomSearchAndDigGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@RandomSearchAndDigGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0RandomSearchAndDigGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI RandomSearchAndDigGoal(class Mob&);
    /**
     * @symbol ?_canUse\@RandomSearchAndDigGoal\@\@QEAA?AW4CanUseOutcome\@1\@XZ
     */
    MCAPI enum class RandomSearchAndDigGoal::CanUseOutcome _canUse();

    // private:
    /**
     * @symbol ?_emitDiggingParticles\@RandomSearchAndDigGoal\@\@AEAAXXZ
     */
    MCAPI void _emitDiggingParticles();
    /**
     * @symbol ?_triggerEvent\@RandomSearchAndDigGoal\@\@AEBAXAEBVActorDefinitionTrigger\@\@\@Z
     */
    MCAPI void _triggerEvent(class ActorDefinitionTrigger const&) const;
    /**
     * @symbol ?_isValidTarget\@RandomSearchAndDigGoal\@\@CA_NAEBVBlockSource\@\@VBlockPos\@\@\@Z
     */
    MCAPI static bool _isValidTarget(class BlockSource const&, class BlockPos);

private:
};
