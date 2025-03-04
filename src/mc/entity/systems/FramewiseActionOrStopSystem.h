#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class FramewiseActionOrStopSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FRAMEWISEACTIONORSTOPSYSTEM
public:
    FramewiseActionOrStopSystem& operator=(FramewiseActionOrStopSystem const&) = delete;
    FramewiseActionOrStopSystem(FramewiseActionOrStopSystem const&)            = delete;
    FramewiseActionOrStopSystem()                                              = delete;
#endif

public:
    /**
     * @symbol ?createFramewiseActionOrStopSystem\@FramewiseActionOrStopSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createFramewiseActionOrStopSystem();
    /**
     * @symbol
     * ?tickFramewiseActionOrStopSystem\@FramewiseActionOrStopSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@ULocalPlayerComponentFlag\@\@\@\@UPlayerInputRequestComponent\@\@\@\@$$CBULocalMoveVelocityComponent\@\@UActionOrStopComponent\@\@\@\@\@Z
     */
    MCAPI static void tickFramewiseActionOrStopSystem(class ViewT<
                                                      class StrictEntityContext,
                                                      class EntityRegistryBase,
                                                      struct Include<
                                                          class FlagComponent<struct ActorMovementTickNeededFlag>,
                                                          class FlagComponent<struct LocalPlayerComponentFlag>,
                                                          struct PlayerInputRequestComponent>,
                                                      struct LocalMoveVelocityComponent const,
                                                      struct ActionOrStopComponent>);

    // private:
    /**
     * @symbol
     * ?doFramewiseActionOrStopSystem\@FramewiseActionOrStopSystem\@\@CAXAEBULocalMoveVelocityComponent\@\@AEAUActionOrStopComponent\@\@\@Z
     */
    MCAPI static void
    doFramewiseActionOrStopSystem(struct LocalMoveVelocityComponent const&, struct ActionOrStopComponent&);

private:
};
