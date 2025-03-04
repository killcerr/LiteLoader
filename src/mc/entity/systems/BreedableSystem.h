#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BreedableSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREEDABLESYSTEM
public:
    BreedableSystem& operator=(BreedableSystem const&) = delete;
    BreedableSystem(BreedableSystem const&)            = delete;
    BreedableSystem()                                  = delete;
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
     * @symbol ?tick\@BreedableSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
