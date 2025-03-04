#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class FallingBlockNormalTickSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FALLINGBLOCKNORMALTICKSYSTEM
public:
    FallingBlockNormalTickSystem& operator=(FallingBlockNormalTickSystem const&) = delete;
    FallingBlockNormalTickSystem(FallingBlockNormalTickSystem const&)            = delete;
    FallingBlockNormalTickSystem()                                               = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@FallingBlockNormalTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

    // private:
    /**
     * @symbol
     * ?_doFallingBlockNormalTickSystem\@FallingBlockNormalTickSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@AEAVITickDelegate\@\@\@Z
     */
    MCAPI static void
    _doFallingBlockNormalTickSystem(class StrictEntityContext const&, class ActorOwnerComponent&, class ITickDelegate&);
    /**
     * @symbol
     * ?_tickFallingBlockNormalTickSystem\@FallingBlockNormalTickSystem\@\@CAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UFallingBlockFlag\@\@\@\@\@\@VActorOwnerComponent\@\@\@\@\@Z
     */
    MCAPI static void _tickFallingBlockNormalTickSystem(class ViewT<
                                                        class StrictEntityContext,
                                                        class EntityRegistryBase,
                                                        struct Include<
                                                            class FlagComponent<struct ActorMovementTickNeededFlag>,
                                                            class FlagComponent<struct FallingBlockFlag>>,
                                                        class ActorOwnerComponent>);

private:
};
