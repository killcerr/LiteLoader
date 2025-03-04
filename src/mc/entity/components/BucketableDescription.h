#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Description.h"

class BucketableDescription : public ::Description {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BUCKETABLEDESCRIPTION
public:
    BucketableDescription& operator=(BucketableDescription const&) = delete;
    BucketableDescription(BucketableDescription const&)            = delete;
    BucketableDescription()                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@BucketableDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BUCKETABLEDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BucketableDescription();
#endif
};
