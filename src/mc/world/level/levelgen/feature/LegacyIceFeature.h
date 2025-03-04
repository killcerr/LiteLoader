#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class LegacyIceFeature : public ::Feature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYICEFEATURE
public:
    LegacyIceFeature& operator=(LegacyIceFeature const&) = delete;
    LegacyIceFeature(LegacyIceFeature const&)            = delete;
    LegacyIceFeature()                                   = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@LegacyIceFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
    /**
     * @symbol ??0LegacyIceFeature\@\@QEAA\@AEBVFeatureRegistry\@\@\@Z
     */
    MCAPI LegacyIceFeature(class FeatureRegistry const&);
};
