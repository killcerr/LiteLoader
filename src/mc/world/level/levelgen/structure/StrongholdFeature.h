#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

class StrongholdFeature : public ::StructureFeature {
public:
    // StrongholdFeature inner types declare
    // clang-format off
    struct StrongholdResult;
    // clang-format on

    // StrongholdFeature inner types define
    struct StrongholdResult {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRONGHOLDFEATURE_STRONGHOLDRESULT
    public:
        StrongholdResult& operator=(StrongholdResult const&) = delete;
        StrongholdResult(StrongholdResult const&)            = delete;
        StrongholdResult()                                   = delete;
#endif

    public:
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRONGHOLDFEATURE
public:
    StrongholdFeature& operator=(StrongholdFeature const&) = delete;
    StrongholdFeature(StrongholdFeature const&)            = delete;
    StrongholdFeature()                                    = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol
     * ?getNearestGeneratedFeature\@StrongholdFeature\@\@UEAA_NAEAVDimension\@\@AEBVBiomeSource\@\@AEBVBlockPos\@\@AEAV4\@AEBVIPreliminarySurfaceProvider\@\@_N\@Z
     */
    virtual bool getNearestGeneratedFeature(
        class Dimension&,
        class BiomeSource const&,
        class BlockPos const&,
        class BlockPos&,
        class IPreliminarySurfaceProvider const&,
        bool
    );
    /**
     * @vftbl 5
     * @symbol
     * ?isFeatureChunk\@StrongholdFeature\@\@UEAA_NAEBVBiomeSource\@\@AEAVRandom\@\@AEBVChunkPos\@\@IAEBVIPreliminarySurfaceProvider\@\@AEBVDimension\@\@\@Z
     */
    virtual bool
    isFeatureChunk(class BiomeSource const&, class Random&, class ChunkPos const&, unsigned int, class IPreliminarySurfaceProvider const&, class Dimension const&);
    /**
     * @vftbl 6
     * @symbol
     * ?createStructureStart\@StrongholdFeature\@\@MEAA?AV?$unique_ptr\@VStructureStart\@\@U?$default_delete\@VStructureStart\@\@\@std\@\@\@std\@\@AEAVDimension\@\@AEBVBiomeSource\@\@AEAVRandom\@\@AEBVChunkPos\@\@AEBVIPreliminarySurfaceProvider\@\@\@Z
     */
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension&, class BiomeSource const&, class Random&, class ChunkPos const&, class IPreliminarySurfaceProvider const&);
    /**
     * @symbol ??0StrongholdFeature\@\@QEAA\@PEAVVillageFeature\@\@I\@Z
     */
    MCAPI StrongholdFeature(class VillageFeature*, unsigned int);
    /**
     * @symbol ?START_OFFSET\@StrongholdFeature\@\@2VBlockPos\@\@B
     */
    MCAPI static class BlockPos const START_OFFSET;

    // protected:
    /**
     * @symbol
     * ?generatePositions\@StrongholdFeature\@\@IEAAXAEAVRandom\@\@AEBVBiomeSource\@\@IAEBVIPreliminarySurfaceProvider\@\@AEBVDimension\@\@\@Z
     */
    MCAPI void
    generatePositions(class Random&, class BiomeSource const&, unsigned int, class IPreliminarySurfaceProvider const&, class Dimension const&);

    // private:
    /**
     * @symbol ?_generateStronghold\@StrongholdFeature\@\@AEAA?BUStrongholdResult\@1\@IAEBVChunkPos\@\@\@Z
     */
    MCAPI struct StrongholdFeature::StrongholdResult const _generateStronghold(unsigned int, class ChunkPos const&);
    /**
     * @symbol ?_getNearestStronghold\@StrongholdFeature\@\@AEAA_NAEBVDimension\@\@IAEBVBlockPos\@\@AEAV3\@_N\@Z
     */
    MCAPI bool
    _getNearestStronghold(class Dimension const&, unsigned int, class BlockPos const&, class BlockPos&, bool);

protected:
private:
};
