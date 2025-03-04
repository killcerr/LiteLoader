#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AddActorEntityProxy {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADDACTORENTITYPROXY
public:
    AddActorEntityProxy& operator=(AddActorEntityProxy const&) = delete;
    AddActorEntityProxy(AddActorEntityProxy const&)            = delete;
    AddActorEntityProxy()                                      = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?initializeActor\@AddActorEntityProxy\@\@UEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeActor(class Actor&);
    /**
     * @vftbl 2
     * @symbol ?reloadActor\@AddActorEntityProxy\@\@UEAAXAEAVActor\@\@\@Z
     */
    virtual void reloadActor(class Actor&);
};
