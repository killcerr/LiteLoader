#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"

class PoolElementStructurePiece : public ::StructurePiece {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POOLELEMENTSTRUCTUREPIECE
public:
    PoolElementStructurePiece& operator=(PoolElementStructurePiece const&) = delete;
    PoolElementStructurePiece(PoolElementStructurePiece const&)            = delete;
    PoolElementStructurePiece()                                            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?moveBoundingBox\@PoolElementStructurePiece\@\@UEAAXHHH\@Z
     */
    virtual void moveBoundingBox(int, int, int);
    /**
     * @vftbl 4
     * @symbol ?postProcess\@PoolElementStructurePiece\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /**
     * @vftbl 5
     * @symbol
     * ?postProcessMobsAt\@PoolElementStructurePiece\@\@UEAAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
    /**
     * @vftbl 13
     * @symbol
     * ?generateHeightAtPosition\@VillagePiece\@\@UEBAHAEBVBlockPos\@\@AEAVDimension\@\@AEAVBlockVolume\@\@AEAV?$unordered_map\@VChunkPos\@\@V?$unique_ptr\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@U?$default_delete\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@\@2\@\@std\@\@U?$hash\@VChunkPos\@\@\@3\@U?$equal_to\@VChunkPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkPos\@\@V?$unique_ptr\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@U?$default_delete\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    virtual int generateHeightAtPosition(class BlockPos const&, class Dimension&, class BlockVolume&, class std::unordered_map<class ChunkPos, std::unique_ptr<std::vector<short>>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, std::unique_ptr<std::vector<short>>>>>&)
        const = 0;
    /**
     * @vftbl 14
     * @symbol ?getSupportBlock\@VillagePiece\@\@UEBAPEBVBlock\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEBV2\@\@Z
     */
    virtual class Block const* getSupportBlock(class BlockSource&, class BlockPos const&, class Block const&) const = 0;
    /**
     * @vftbl 15
     * @symbol ?getBeardStabilizeBlock\@VillagePiece\@\@UEBAAEBVBlock\@\@AEBV2\@\@Z
     */
    virtual class Block const& getBeardStabilizeBlock(class Block const&) const = 0;
    /**
     * @vftbl 16
     * @symbol ?getTerrainAdjustmentEffect\@VillagePiece\@\@UEBA?AW4AdjustmentEffect\@\@XZ
     */
    virtual enum class AdjustmentEffect getTerrainAdjustmentEffect() const = 0;
    /**
     * @vftbl 17
     * @symbol ?_needsPostProcessing\@PoolElementStructurePiece\@\@MEAA_NAEAVBlockSource\@\@\@Z
     */
    virtual bool _needsPostProcessing(class BlockSource&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_POOLELEMENTSTRUCTUREPIECE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PoolElementStructurePiece();
#endif
    /**
     * @symbol
     * ??0PoolElementStructurePiece\@\@QEAA\@AEBVStructurePoolElement\@\@VBlockPos\@\@W4Rotation\@\@HAEAUJigsawJunction\@\@AEBVBoundingBox\@\@1\@Z
     */
    MCAPI PoolElementStructurePiece(
        class StructurePoolElement const&,
        class BlockPos,
        enum class Rotation,
        int,
        struct JigsawJunction&,
        class BoundingBox const&,
        class BlockPos
    );
};
