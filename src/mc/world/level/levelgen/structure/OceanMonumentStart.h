#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OceanMonumentStart {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANMONUMENTSTART
public:
    OceanMonumentStart& operator=(OceanMonumentStart const&) = delete;
    OceanMonumentStart(OceanMonumentStart const&)            = delete;
    OceanMonumentStart()                                     = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?postProcess\@OceanMonumentStart\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /**
     * @symbol ?createMonument\@OceanMonumentStart\@\@QEAAXAEAVDimension\@\@AEAVRandom\@\@HH\@Z
     */
    MCAPI void createMonument(class Dimension&, class Random&, int, int);
};
