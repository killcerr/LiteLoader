#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class DimensionTransitionSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSIONTRANSITIONSYSTEM
public:
    DimensionTransitionSystem& operator=(DimensionTransitionSystem const&) = delete;
    DimensionTransitionSystem(DimensionTransitionSystem const&)            = delete;
    DimensionTransitionSystem()                                            = delete;
#endif

public:
    /**
     * @symbol
     * ?_tickPortalTransition\@DimensionTransitionSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Exclude\@UPassengerComponent\@\@UVehicleComponent\@\@\@\@VActorOwnerComponent\@\@$$CBUDimensionTransitionComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UDimensionTransitionComponent\@\@\@\@\@Z
     */
    MCAPI static void
        _tickPortalTransition(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Exclude<struct PassengerComponent, struct VehicleComponent>, class ActorOwnerComponent, struct DimensionTransitionComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct DimensionTransitionComponent>);
    /**
     * @symbol
     * ?_tickVehicleDismount\@DimensionTransitionSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UPlayerChangeDimensionRequestComponent\@\@UPassengerComponent\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UPlayerChangeDimensionRequestComponent\@\@\@\@$$CBUVehicleComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@V?$FlagComponent\@UExitFromPassengerFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void _tickVehicleDismount(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct PlayerChangeDimensionRequestComponent, struct PassengerComponent>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct PlayerChangeDimensionRequestComponent>, struct VehicleComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct StopRidingRequestFlag>, class FlagComponent<struct ExitFromPassengerFlag>>);
    /**
     * @symbol ?createPortalTransition\@DimensionTransitionSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createPortalTransition();
    /**
     * @symbol ?createReadyToContinueServer\@DimensionTransitionSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createReadyToContinueServer();
    /**
     * @symbol ?createVehicleDismount\@DimensionTransitionSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createVehicleDismount();
    /**
     * @symbol
     * ?removeChangeDimensionRequest\@DimensionTransitionSystem\@\@SAXAEBVStrictEntityContext\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UPlayerChangeDimensionRequestComponent\@\@\@\@\@Z
     */
    MCAPI static void
    removeChangeDimensionRequest(class StrictEntityContext const&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct PlayerChangeDimensionRequestComponent>);
    /**
     * @symbol
     * ?requestPlayerChangeDimension\@DimensionTransitionSystem\@\@SAXAEBVStrictEntityContext\@\@V?$unique_ptr\@VChangeDimensionRequest\@\@U?$default_delete\@VChangeDimensionRequest\@\@\@std\@\@\@std\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UPlayerChangeDimensionRequestComponent\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@VDimensionStateComponent\@\@UStateVectorComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UPlayerChangeDimensionRequestComponent\@\@\@\@_N\@Z
     */
    MCAPI static void requestPlayerChangeDimension(
        class StrictEntityContext const&,
        std::unique_ptr<class ChangeDimensionRequest>,
        class ViewT<
            class StrictEntityContext,
            class EntityRegistryBase,
            struct Include<struct PlayerChangeDimensionRequestComponent>>,
        class ViewT<
            class StrictEntityContext,
            class EntityRegistryBase,
            class DimensionStateComponent,
            struct StateVectorComponent>,
        class EntityModifierT<
            class EntityRegistryBase,
            class StrictEntityContext,
            struct PlayerChangeDimensionRequestComponent>,
        bool
    );
    /**
     * @symbol
     * ?shouldLevelWaitForSystem\@DimensionTransitionSystem\@\@SA_NAEBVStrictEntityContext\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUPlayerChangeDimensionRequestComponent\@\@\@\@\@Z
     */
    MCAPI static bool
    shouldLevelWaitForSystem(class StrictEntityContext const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct PlayerChangeDimensionRequestComponent const>);
    /**
     * @symbol
     * ?tryHandleChangeDimensionRequestLevel\@DimensionTransitionSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@UPlayerChangeDimensionRequestComponent\@\@VActorOwnerComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UPlayerChangeDimensionRequestComponent\@\@\@\@AEBV?$function\@$$A6A_NAEAVPlayer\@\@AEAVChangeDimensionRequest\@\@\@Z\@std\@\@AEBV?$function\@$$A6A_NAEAVPlayer\@\@\@Z\@5\@\@Z
     */
    MCAPI static void
    tryHandleChangeDimensionRequestLevel(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct PlayerComponentFlag>>, struct PlayerChangeDimensionRequestComponent, class ActorOwnerComponent>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct PlayerChangeDimensionRequestComponent>, class std::function<bool(class Player&, class ChangeDimensionRequest&)> const&, class std::function<bool(class Player&)> const&);
};
