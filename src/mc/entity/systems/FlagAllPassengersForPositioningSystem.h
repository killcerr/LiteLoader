#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class FlagAllPassengersForPositioningSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLAGALLPASSENGERSFORPOSITIONINGSYSTEM
public:
    FlagAllPassengersForPositioningSystem& operator=(FlagAllPassengersForPositioningSystem const&) = delete;
    FlagAllPassengersForPositioningSystem(FlagAllPassengersForPositioningSystem const&)            = delete;
    FlagAllPassengersForPositioningSystem()                                                        = delete;
#endif

public:
    /**
     * @symbol
     * ?_tick\@FlagAllPassengersForPositioningSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@UPassengerComponent\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UPositionPassengerRequestComponent\@\@\@\@\@Z
     */
    MCAPI static void
        _tick(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, struct PassengerComponent>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct PositionPassengerRequestComponent>);
    /**
     * @symbol ?create\@FlagAllPassengersForPositioningSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
};
