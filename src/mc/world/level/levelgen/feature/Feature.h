#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class Feature : public ::IFeature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FEATURE
public:
    Feature& operator=(Feature const&) = delete;
    Feature(Feature const&)            = delete;
    Feature()                          = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?place\@Feature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
    /**
     * @vftbl 2
     * @symbol
     * ?isValidPlacement\@IFeature\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual bool isValidPlacement(std::string const&);
    /**
     * @vftbl 3
     * @symbol ?place\@LegacySmallMushroomsFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FEATURE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Feature();
#endif
    /**
     * @symbol ??0Feature\@\@QEAA\@PEAVActor\@\@\@Z
     */
    MCAPI Feature(class Actor*);

    // protected:
    /**
     * @symbol ?_placeBlock\@Feature\@\@IEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    MCAPI bool _placeBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /**
     * @symbol ?_setManuallyPlaced\@Feature\@\@IEAAXPEAVActor\@\@\@Z
     */
    MCAPI void _setManuallyPlaced(class Actor*);

protected:
};
