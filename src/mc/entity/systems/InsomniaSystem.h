#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InsomniaSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSOMNIASYSTEM
public:
    InsomniaSystem& operator=(InsomniaSystem const&) = delete;
    InsomniaSystem(InsomniaSystem const&)            = delete;
    InsomniaSystem()                                 = delete;
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
     * @symbol ?tick\@InsomniaSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
