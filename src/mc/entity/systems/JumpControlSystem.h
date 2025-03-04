#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JumpControlSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JUMPCONTROLSYSTEM
public:
    JumpControlSystem& operator=(JumpControlSystem const&) = delete;
    JumpControlSystem(JumpControlSystem const&)            = delete;
    JumpControlSystem()                                    = delete;
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
     * @symbol ?tick\@JumpControlSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
