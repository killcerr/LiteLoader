#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace CaveFeatureUtils { struct CarverConfiguration; }
namespace CaveFeatureUtils { struct CarvingParameters; }
// clang-format on

class CaveFeature {
public:
    // CaveFeature inner types declare
    // clang-format off
    class CachedMetaData;
    // clang-format on

    // CaveFeature inner types define
    class CachedMetaData {
    public:
        // CachedMetaData inner types declare
        // clang-format off
        struct CarveEllipsoidParams;
        // clang-format on

        // CachedMetaData inner types define
        struct CarveEllipsoidParams {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAVEFEATURE_CACHEDMETADATA_CARVEELLIPSOIDPARAMS
        public:
            CarveEllipsoidParams& operator=(CarveEllipsoidParams const&) = delete;
            CarveEllipsoidParams(CarveEllipsoidParams const&)            = delete;
            CarveEllipsoidParams()                                       = delete;
#endif

        public:
        };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAVEFEATURE_CACHEDMETADATA
    public:
        CachedMetaData& operator=(CachedMetaData const&) = delete;
        CachedMetaData(CachedMetaData const&)            = delete;
        CachedMetaData()                                 = delete;
#endif

    public:
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAVEFEATURE
public:
    CaveFeature& operator=(CaveFeature const&) = delete;
    CaveFeature(CaveFeature const&)            = delete;
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
     * ?place\@CaveFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
    /**
     * @vftbl 2
     * @symbol
     * ?isValidPlacement\@CaveFeature\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual bool isValidPlacement(std::string const&);
    /**
     * @vftbl 3
     * @symbol
     * ?addRoom\@CaveFeature\@\@MEBAXAEAVIBlockWorldGenAPI\@\@AEBUCarverConfiguration\@CaveFeatureUtils\@\@AEAVRandom\@\@AEBVChunkPos\@\@AEBVVec3\@\@AEAVRenderParams\@\@AEBUCarvingParameters\@4\@AEAV?$vector\@UCarveEllipsoidParams\@CachedMetaData\@CaveFeature\@\@V?$allocator\@UCarveEllipsoidParams\@CachedMetaData\@CaveFeature\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual void
    addRoom(class IBlockWorldGenAPI&, struct CaveFeatureUtils::CarverConfiguration const&, class Random&, class ChunkPos const&, class Vec3 const&, class RenderParams&, struct CaveFeatureUtils::CarvingParameters const&, std::vector<struct CaveFeature::CachedMetaData::CarveEllipsoidParams>&)
        const;
    /**
     * @vftbl 4
     * @symbol
     * ?addTunnel\@CaveFeature\@\@MEBAXAEAVIBlockWorldGenAPI\@\@AEBUCarverConfiguration\@CaveFeatureUtils\@\@AEAVRandom\@\@AEBVChunkPos\@\@AEBVVec3\@\@MMMHHMAEAVRenderParams\@\@AEBUCarvingParameters\@4\@AEAV?$vector\@UCarveEllipsoidParams\@CachedMetaData\@CaveFeature\@\@V?$allocator\@UCarveEllipsoidParams\@CachedMetaData\@CaveFeature\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual void addTunnel(class IBlockWorldGenAPI&, struct CaveFeatureUtils::CarverConfiguration const&, class Random&, class ChunkPos const&, class Vec3 const&, float, float, float, int, int, float, class RenderParams&, struct CaveFeatureUtils::CarvingParameters const&, std::vector<struct CaveFeature::CachedMetaData::CarveEllipsoidParams>&)
        const;
    /**
     * @vftbl 5
     * @symbol
     * ?carveEllipsoidVolume\@CaveFeature\@\@MEBA_NAEAVIBlockWorldGenAPI\@\@AEBUCarverConfiguration\@CaveFeatureUtils\@\@AEAVRandom\@\@AEBVChunkPos\@\@AEBVVec3\@\@AEBVBoundingBox\@\@MMAEBUCarvingParameters\@4\@\@Z
     */
    virtual bool
    carveEllipsoidVolume(class IBlockWorldGenAPI&, struct CaveFeatureUtils::CarverConfiguration const&, class Random&, class ChunkPos const&, class Vec3 const&, class BoundingBox const&, float, float, struct CaveFeatureUtils::CarvingParameters const&)
        const;
    /**
     * @vftbl 6
     * @symbol
     * ?addFeature\@CaveFeature\@\@MEBAXAEAVIBlockWorldGenAPI\@\@AEBVChunkPos\@\@AEAVRandom\@\@1AEAVRenderParams\@\@AEAV?$vector\@UCarveEllipsoidParams\@CachedMetaData\@CaveFeature\@\@V?$allocator\@UCarveEllipsoidParams\@CachedMetaData\@CaveFeature\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual void
    addFeature(class IBlockWorldGenAPI&, class ChunkPos const&, class Random&, class ChunkPos const&, class RenderParams&, std::vector<struct CaveFeature::CachedMetaData::CarveEllipsoidParams>&)
        const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CAVEFEATURE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CaveFeature();
#endif
    /**
     * @symbol ??0CaveFeature\@\@QEAA\@XZ
     */
    MCAPI CaveFeature();
    /**
     * @symbol ?getWidthModifier\@CaveFeature\@\@QEBAMAEAVRenderParams\@\@\@Z
     */
    MCAPI float getWidthModifier(class RenderParams&) const;

    // protected:
    /**
     * @symbol
     * ?carveBlock\@CaveFeature\@\@IEBA_NAEAVIBlockWorldGenAPI\@\@AEBUCarverConfiguration\@CaveFeatureUtils\@\@VBlockPos\@\@PEA_N_NAEBVVec3\@\@HV5\@\@Z
     */
    MCAPI bool carveBlock(
        class IBlockWorldGenAPI&,
        struct CaveFeatureUtils::CarverConfiguration const&,
        class BlockPos,
        bool*,
        bool,
        class Vec3 const&,
        int,
        class BlockPos
    ) const;
    /**
     * @symbol
     * ?carveEllipsoid\@CaveFeature\@\@IEBA_NAEAVIBlockWorldGenAPI\@\@AEBUCarverConfiguration\@CaveFeatureUtils\@\@AEAVRandom\@\@AEBVChunkPos\@\@AEBVVec3\@\@MMAEBUCarvingParameters\@4\@\@Z
     */
    MCAPI bool
    carveEllipsoid(class IBlockWorldGenAPI&, struct CaveFeatureUtils::CarverConfiguration const&, class Random&, class ChunkPos const&, class Vec3 const&, float, float, struct CaveFeatureUtils::CarvingParameters const&)
        const;
    /**
     * @symbol ?detectWater\@CaveFeature\@\@IEBA_NAEAVIBlockWorldGenAPI\@\@AEBVBoundingBox\@\@\@Z
     */
    MCAPI bool detectWater(class IBlockWorldGenAPI&, class BoundingBox const&) const;
    /**
     * @symbol ?shouldSkipCarving\@CaveFeature\@\@KA_NMMMMM\@Z
     */
    MCAPI static bool shouldSkipCarving(float, float, float, float, float);

protected:
};
