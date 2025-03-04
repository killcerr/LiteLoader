#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class FossilFeature : public ::Feature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOSSILFEATURE
public:
    FossilFeature& operator=(FossilFeature const&) = delete;
    FossilFeature(FossilFeature const&)            = delete;
    FossilFeature()                                = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@FossilFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // private:

private:
    /**
     * @symbol
     * ?STRUCTURE_LOCATION_FOSSIL\@FossilFeature\@\@0QBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STRUCTURE_LOCATION_FOSSIL[];
};
