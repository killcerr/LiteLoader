#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GlobalRead.h"
#include "mc/common/GlobalWrite.h"
#include "mc/common/StrictExecutionContext.h"
#include "mc/common/wrapper/AddRemove.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/deps/core/data/Filter.h"
#include "mc/deps/core/data/Read.h"
#include "mc/deps/core/data/Write.h"
#include "mc/entity/EntityFactoryT.h"
#include "mc/world/components/FlagComponent.h"

struct MonsterAiStepSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MONSTERAISTEPSYSTEM
public:
    MonsterAiStepSystem& operator=(MonsterAiStepSystem const&) = delete;
    MonsterAiStepSystem(MonsterAiStepSystem const&)            = delete;
    MonsterAiStepSystem()                                      = delete;
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
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol
     * ?tick\@MonsterAiStepSystem\@\@UEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UBlazeFlag\@\@\@\@V?$FlagComponent\@ULavaSlimeFlag\@\@\@\@V?$FlagComponent\@UMonsterFlag\@\@\@\@\@\@U?$Read\@UAABBShapeComponent\@\@UDimensionTypeComponent\@\@UOffsetsComponent\@\@UStateVectorComponent\@\@\@\@U?$Write\@UNoActionTimeComponent\@\@\@\@U?$AddRemove\@$$V\@\@U?$GlobalRead\@ULocalConstBlockSourceFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
     */
    virtual void tick(class StrictExecutionContext<
                      struct Filter<
                          class FlagComponent<struct ActorMovementTickNeededFlag>,
                          class FlagComponent<struct BlazeFlag>,
                          class FlagComponent<struct LavaSlimeFlag>,
                          class FlagComponent<struct MonsterFlag>>,
                      struct Read<
                          struct AABBShapeComponent,
                          struct DimensionTypeComponent,
                          struct OffsetsComponent,
                          struct StateVectorComponent>,
                      struct Write<struct NoActionTimeComponent>,
                      struct AddRemove<>,
                      struct GlobalRead<struct LocalConstBlockSourceFactoryComponent>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>&);
    /**
     * @symbol ?createSystem\@MonsterAiStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    /**
     * @symbol
     * ?tickMonsterAiStep\@MonsterAiStepSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUAABBShapeComponent\@\@AEBUOffsetsComponent\@\@AEBUStateVectorComponent\@\@AEAUNoActionTimeComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UBlazeFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@ULavaSlimeFlag\@\@\@\@\@\@\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static void tickMonsterAiStep(class StrictEntityContext const&, struct AABBShapeComponent const&, struct OffsetsComponent const&, struct StateVectorComponent const&, struct NoActionTimeComponent&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct BlazeFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct LavaSlimeFlag>>>, class IConstBlockSource const&);
};
