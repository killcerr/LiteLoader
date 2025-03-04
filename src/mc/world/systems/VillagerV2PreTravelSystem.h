#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class VillagerV2PreTravelSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VILLAGERV2PRETRAVELSYSTEM
public:
    VillagerV2PreTravelSystem& operator=(VillagerV2PreTravelSystem const&) = delete;
    VillagerV2PreTravelSystem(VillagerV2PreTravelSystem const&)            = delete;
    VillagerV2PreTravelSystem()                                            = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@VillagerV2PreTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

    // private:
    /**
     * @symbol
     * ?_doVillagerV2PreTravel\@VillagerV2PreTravelSystem\@\@CAXAEBVStrictEntityContext\@\@AEBUSynchedActorDataComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@USkipMobTravelFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void
    _doVillagerV2PreTravel(class StrictEntityContext const&, struct SynchedActorDataComponent const&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct SkipMobTravelFlag>>);

private:
};
