#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class IceSpikeFeature : public ::Feature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ICESPIKEFEATURE
public:
    IceSpikeFeature& operator=(IceSpikeFeature const&) = delete;
    IceSpikeFeature(IceSpikeFeature const&)            = delete;
    IceSpikeFeature()                                  = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@IceSpikeFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // private:
    /**
     * @symbol ?_isValidPlaceBlock\@IceSpikeFeature\@\@AEBA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool _isValidPlaceBlock(class Block const&) const;

private:
};
