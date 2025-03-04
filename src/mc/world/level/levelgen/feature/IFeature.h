#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFeature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IFEATURE
public:
    IFeature& operator=(IFeature const&) = delete;
    IFeature(IFeature const&)            = delete;
    IFeature()                           = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IFEATURE
    /**
     * @symbol
     * ?isValidPlacement\@IFeature\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI bool isValidPlacement(std::string const&);
#endif
    /**
     * @symbol ?setBlockSafe\@IFeature\@\@QEBA_NAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEBVBlock\@\@H\@Z
     */
    MCAPI bool setBlockSafe(class IBlockWorldGenAPI&, class BlockPos const&, class Block const&, int) const;
};
