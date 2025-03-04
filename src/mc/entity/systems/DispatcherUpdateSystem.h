#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DispatcherUpdateSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DISPATCHERUPDATESYSTEM
public:
    DispatcherUpdateSystem& operator=(DispatcherUpdateSystem const&) = delete;
    DispatcherUpdateSystem(DispatcherUpdateSystem const&)            = delete;
    DispatcherUpdateSystem()                                         = delete;
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
     * @symbol ?tick\@DispatcherUpdateSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
