#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/PoolElementStructurePiece.h"

class VillagePiece : public ::PoolElementStructurePiece {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VILLAGEPIECE
public:
    VillagePiece& operator=(VillagePiece const&) = delete;
    VillagePiece(VillagePiece const&)            = delete;
    VillagePiece()                               = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 13
     * @symbol
     * ?generateHeightAtPosition\@VillagePiece\@\@UEBAHAEBVBlockPos\@\@AEAVDimension\@\@AEAVBlockVolume\@\@AEAV?$unordered_map\@VChunkPos\@\@V?$unique_ptr\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@U?$default_delete\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@\@2\@\@std\@\@U?$hash\@VChunkPos\@\@\@3\@U?$equal_to\@VChunkPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkPos\@\@V?$unique_ptr\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@U?$default_delete\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    virtual int generateHeightAtPosition(class BlockPos const&, class Dimension&, class BlockVolume&, class std::unordered_map<class ChunkPos, std::unique_ptr<std::vector<short>>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, std::unique_ptr<std::vector<short>>>>>&)
        const;
    /**
     * @vftbl 14
     * @symbol ?getSupportBlock\@VillagePiece\@\@UEBAPEBVBlock\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEBV2\@\@Z
     */
    virtual class Block const* getSupportBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /**
     * @vftbl 15
     * @symbol ?getBeardStabilizeBlock\@VillagePiece\@\@UEBAAEBVBlock\@\@AEBV2\@\@Z
     */
    virtual class Block const& getBeardStabilizeBlock(class Block const&) const;
    /**
     * @vftbl 16
     * @symbol ?getTerrainAdjustmentEffect\@VillagePiece\@\@UEBA?AW4AdjustmentEffect\@\@XZ
     */
    virtual enum class AdjustmentEffect getTerrainAdjustmentEffect() const;
    /**
     * @vftbl 17
     * @symbol ?_needsPostProcessing\@VillagePiece\@\@MEAA_NAEAVBlockSource\@\@\@Z
     */
    virtual bool _needsPostProcessing(class BlockSource&);
    /**
     * @symbol
     * ?addPieces\@VillagePiece\@\@SAXVBlockPos\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@AEAVJigsawStructureRegistry\@\@W4VanillaBiomeTypes\@\@AEAVDimension\@\@\@Z
     */
    MCAPI static void
    addPieces(class BlockPos, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&, class JigsawStructureRegistry&, enum class VanillaBiomeTypes, class Dimension&);
};
