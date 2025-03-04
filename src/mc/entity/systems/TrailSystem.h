#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TrailSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRAILSYSTEM
public:
    TrailSystem& operator=(TrailSystem const&) = delete;
    TrailSystem(TrailSystem const&)            = delete;
    TrailSystem()                              = delete;
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
     * @symbol ?tick\@TrailSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);

    // private:
    /**
     * @symbol ?_tickComponent\@TrailSystem\@\@CAXAEAVActorOwnerComponent\@\@AEAVTrailComponent\@\@\@Z
     */
    MCAPI static void _tickComponent(class ActorOwnerComponent&, class TrailComponent&);

private:
};
