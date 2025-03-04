#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BreakDoorAnnotationSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREAKDOORANNOTATIONSYSTEM
public:
    BreakDoorAnnotationSystem& operator=(BreakDoorAnnotationSystem const&) = delete;
    BreakDoorAnnotationSystem(BreakDoorAnnotationSystem const&)            = delete;
    BreakDoorAnnotationSystem()                                            = delete;
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
     * @symbol ?tick\@BreakDoorAnnotationSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
