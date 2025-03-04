#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SeatDescriptionUtility {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SEATDESCRIPTIONUTILITY
public:
    SeatDescriptionUtility& operator=(SeatDescriptionUtility const&) = delete;
    SeatDescriptionUtility(SeatDescriptionUtility const&)            = delete;
    SeatDescriptionUtility()                                         = delete;
#endif

public:
    /**
     * @symbol
     * ?getSeatDescriptionOfPassenger\@SeatDescriptionUtility\@\@SAAEBUSeatDescription\@\@AEBV?$vector\@USeatDescription\@\@V?$allocator\@USeatDescription\@\@\@std\@\@\@std\@\@HH\@Z
     */
    MCAPI static struct SeatDescription const&
    getSeatDescriptionOfPassenger(std::vector<struct SeatDescription> const&, int, int);
    /**
     * @symbol
     * ?getSeatDescriptionOfPassenger\@SeatDescriptionUtility\@\@SAAEBUSeatDescription\@\@AEBV?$vector\@USeatDescription\@\@V?$allocator\@USeatDescription\@\@\@std\@\@\@std\@\@AEBUVehicleComponent\@\@AEBVStrictEntityContext\@\@\@Z
     */
    MCAPI static struct SeatDescription const&
    getSeatDescriptionOfPassenger(std::vector<struct SeatDescription> const&, struct VehicleComponent const&, class StrictEntityContext const&);
    /**
     * @symbol ?getSeatRidingHeightOffset\@SeatDescriptionUtility\@\@SAMMMM\@Z
     */
    MCAPI static float getSeatRidingHeightOffset(float, float, float);
    /**
     * @symbol
     * ?setValuesToSynchedActorData\@SeatDescriptionUtility\@\@SAXVSynchedActorDataWriter\@\@AEBVVec3\@\@AEBUSeatDescription\@\@M\@Z
     */
    MCAPI static void
    setValuesToSynchedActorData(class SynchedActorDataWriter, class Vec3 const&, struct SeatDescription const&, float);
};
