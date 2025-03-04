#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RaidBossSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAIDBOSSSYSTEM
public:
    RaidBossSystem& operator=(RaidBossSystem const&) = delete;
    RaidBossSystem(RaidBossSystem const&)            = delete;
    RaidBossSystem()                                 = delete;
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
     * @symbol ?tick\@RaidBossSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
