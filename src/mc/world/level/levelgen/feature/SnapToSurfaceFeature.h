#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SnapToSurfaceFeature {
public:
    // SnapToSurfaceFeature inner types declare
    // clang-format off

    // clang-format on

    // SnapToSurfaceFeature inner types define
    enum class Surface {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SNAPTOSURFACEFEATURE
public:
    SnapToSurfaceFeature& operator=(SnapToSurfaceFeature const&) = delete;
    SnapToSurfaceFeature(SnapToSurfaceFeature const&)            = delete;
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
     * ?place\@SnapToSurfaceFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
    /**
     * @symbol ??0SnapToSurfaceFeature\@\@QEAA\@XZ
     */
    MCAPI SnapToSurfaceFeature();

    // private:
    /**
     * @symbol
     * ?_findSnapPos\@SnapToSurfaceFeature\@\@AEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@W4Surface\@1\@\@Z
     */
    MCAPI class std::optional<class BlockPos>
    _findSnapPos(class IBlockWorldGenAPI&, class BlockPos const&, enum class SnapToSurfaceFeature::Surface) const;

private:
};
