#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class ShulkerPostAiStepSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHULKERPOSTAISTEPSYSTEM
public:
    ShulkerPostAiStepSystem& operator=(ShulkerPostAiStepSystem const&) = delete;
    ShulkerPostAiStepSystem(ShulkerPostAiStepSystem const&)            = delete;
    ShulkerPostAiStepSystem()                                          = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@ShulkerPostAiStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    /**
     * @symbol
     * ?tick\@ShulkerPostAiStepSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UShulkerFlag\@\@\@\@\@\@UActorRotationComponent\@\@UMobBodyRotationComponent\@\@UStateVectorComponent\@\@\@\@\@Z
     */
    MCAPI static void tick(class ViewT<
                           class StrictEntityContext,
                           class EntityRegistryBase,
                           struct Include<
                               class FlagComponent<struct ActorMovementTickNeededFlag>,
                               class FlagComponent<struct ShulkerFlag>>,
                           struct ActorRotationComponent,
                           struct MobBodyRotationComponent,
                           struct StateVectorComponent>);

    // private:
    /**
     * @symbol
     * ?_doShulkerPostAiStepSystem\@ShulkerPostAiStepSystem\@\@CAXAEBVStrictEntityContext\@\@AEAUActorRotationComponent\@\@AEAUMobBodyRotationComponent\@\@AEAUStateVectorComponent\@\@\@Z
     */
    MCAPI static void
    _doShulkerPostAiStepSystem(class StrictEntityContext const&, struct ActorRotationComponent&, struct MobBodyRotationComponent&, struct StateVectorComponent&);

private:
};
