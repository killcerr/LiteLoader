#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class BasaltPillarFeature : public ::Feature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASALTPILLARFEATURE
public:
    BasaltPillarFeature& operator=(BasaltPillarFeature const&) = delete;
    BasaltPillarFeature(BasaltPillarFeature const&)            = delete;
    BasaltPillarFeature()                                      = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@BasaltPillarFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // private:
    /**
     * @symbol
     * ?_growColumn\@BasaltPillarFeature\@\@AEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@MAEBVBlock\@\@\@Z
     */
    MCAPI bool _growColumn(class BlockSource&, class BlockPos const&, class Random&, float, class Block const&) const;

private:
};
