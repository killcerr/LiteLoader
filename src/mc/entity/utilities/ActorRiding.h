#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorRiding {
/**
 * @symbol ?clearVehiclePrev\@ActorRiding\@\@YAXAEAVEntityContext\@\@\@Z
 */
MCAPI void clearVehiclePrev(class EntityContext&);
/**
 * @symbol
 * ?getPassengers\@ActorRiding\@\@YAAEBV?$vector\@UStrictActorIDEntityContextPair\@\@V?$allocator\@UStrictActorIDEntityContextPair\@\@\@std\@\@\@std\@\@AEBVEntityContext\@\@\@Z
 */
MCAPI std::vector<struct StrictActorIDEntityContextPair> const& getPassengers(class EntityContext const&);
/**
 * @symbol
 * ?getPendingRemovePassengers\@ActorRiding\@\@YAAEBV?$vector\@UStrictActorIDEntityContextPair\@\@V?$allocator\@UStrictActorIDEntityContextPair\@\@\@std\@\@\@std\@\@AEBVEntityContext\@\@\@Z
 */
MCAPI std::vector<struct StrictActorIDEntityContextPair> const& getPendingRemovePassengers(class EntityContext const&);
/**
 * @symbol ?getVehicleID\@ActorRiding\@\@YA?AUActorUniqueID\@\@AEBVEntityContext\@\@\@Z
 */
MCAPI struct ActorUniqueID getVehicleID(class EntityContext const&);
/**
 * @symbol ?getVehiclePrevEntity\@ActorRiding\@\@YA?AVStrictEntityContext\@\@AEBVEntityContext\@\@\@Z
 */
MCAPI class StrictEntityContext getVehiclePrevEntity(class EntityContext const&);
/**
 * @symbol ?removePassengerFromList\@ActorRiding\@\@YAXAEAVEntityContext\@\@AEBUActorUniqueID\@\@\@Z
 */
MCAPI void removePassengerFromList(class EntityContext&, struct ActorUniqueID const&);
/**
 * @symbol ?setPassengersChanged\@ActorRiding\@\@YAXAEAVEntityContext\@\@_N\@Z
 */
MCAPI void setPassengersChanged(class EntityContext&, bool);
/**
 * @symbol ?setVehicle\@ActorRiding\@\@YAXAEAVEntityContext\@\@VStrictEntityContext\@\@AEBUActorUniqueID\@\@\@Z
 */
MCAPI void setVehicle(class EntityContext&, class StrictEntityContext, struct ActorUniqueID const&);
/**
 * @symbol
 * ?tryRemoveLastPendingPassenger\@ActorRiding\@\@YA?AUStrictActorIDEntityContextPair\@\@AEAVEntityContext\@\@\@Z
 */
MCAPI struct StrictActorIDEntityContextPair tryRemoveLastPendingPassenger(class EntityContext&);

}; // namespace ActorRiding
