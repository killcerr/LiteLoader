#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LegacyStructureSettings {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYSTRUCTURESETTINGS
public:
    LegacyStructureSettings& operator=(LegacyStructureSettings const&) = delete;
#endif

public:
    /**
     * @symbol ??0LegacyStructureSettings\@\@QEAA\@XZ
     */
    MCAPI LegacyStructureSettings();
    /**
     * @symbol ??0LegacyStructureSettings\@\@QEAA\@W4Mirror\@\@W4Rotation\@\@PEBVBlock\@\@AEBVBoundingBox\@\@\@Z
     */
    MCAPI LegacyStructureSettings(enum class Mirror, enum class Rotation, class Block const*, class BoundingBox const&);
    /**
     * @symbol ??0LegacyStructureSettings\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI LegacyStructureSettings(class LegacyStructureSettings const&);
    /**
     * @symbol ?addSwapAuxValue\@LegacyStructureSettings\@\@QEAAXHH\@Z
     */
    MCAPI void addSwapAuxValue(int, int);
    /**
     * @symbol ?getBoundingBox\@LegacyStructureSettings\@\@QEAAAEBVBoundingBox\@\@XZ
     */
    MCAPI class BoundingBox const& getBoundingBox();
    /**
     * @symbol ?getMirror\@LegacyStructureSettings\@\@QEBAAEBW4Mirror\@\@XZ
     */
    MCAPI enum class Mirror const& getMirror() const;
    /**
     * @symbol ?getRefPos\@LegacyStructureSettings\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const& getRefPos() const;
    /**
     * @symbol ?getRotation\@LegacyStructureSettings\@\@QEBAAEBW4Rotation\@\@XZ
     */
    MCAPI enum class Rotation const& getRotation() const;
    /**
     * @symbol ?getSwappedBlock\@LegacyStructureSettings\@\@QEBAAEBVBlock\@\@AEBVBlockPalette\@\@AEBV2\@\@Z
     */
    MCAPI class Block const& getSwappedBlock(class BlockPalette const&, class Block const&) const;
    /**
     * @symbol ?placeWaterBelowSeaLevel\@LegacyStructureSettings\@\@QEAAX_N\@Z
     */
    MCAPI void placeWaterBelowSeaLevel(bool);
    /**
     * @symbol
     * ?setBlockRules\@LegacyStructureSettings\@\@QEAAXPEBV?$vector\@V?$unique_ptr\@VStructurePoolBlockRule\@\@U?$default_delete\@VStructurePoolBlockRule\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePoolBlockRule\@\@U?$default_delete\@VStructurePoolBlockRule\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void setBlockRules(std::vector<std::unique_ptr<class StructurePoolBlockRule>> const*);
    /**
     * @symbol
     * ?setBlockTagRules\@LegacyStructureSettings\@\@QEAAXPEBV?$vector\@V?$unique_ptr\@VStructurePoolBlockTagRule\@\@U?$default_delete\@VStructurePoolBlockTagRule\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePoolBlockTagRule\@\@U?$default_delete\@VStructurePoolBlockTagRule\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void setBlockTagRules(std::vector<std::unique_ptr<class StructurePoolBlockTagRule>> const*);
    /**
     * @symbol ?setBoundingBox\@LegacyStructureSettings\@\@QEAAXAEBVBoundingBox\@\@\@Z
     */
    MCAPI void setBoundingBox(class BoundingBox const&);
    /**
     * @symbol ?setIgnoreBlock\@LegacyStructureSettings\@\@QEAAXPEBVBlock\@\@\@Z
     */
    MCAPI void setIgnoreBlock(class Block const*);
    /**
     * @symbol ?setIntegrity\@LegacyStructureSettings\@\@QEAAXM\@Z
     */
    MCAPI void setIntegrity(float);
    /**
     * @symbol ?setMirror\@LegacyStructureSettings\@\@QEAAXW4Mirror\@\@\@Z
     */
    MCAPI void setMirror(enum class Mirror);
    /**
     * @symbol ?setProjection\@LegacyStructureSettings\@\@QEAAXW4Projection\@\@\@Z
     */
    MCAPI void setProjection(enum class Projection);
    /**
     * @symbol ?setRefPos\@LegacyStructureSettings\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setRefPos(class BlockPos const&);
    /**
     * @symbol ?setRotation\@LegacyStructureSettings\@\@QEAAXW4Rotation\@\@\@Z
     */
    MCAPI void setRotation(enum class Rotation);
    /**
     * @symbol ?setSeed\@LegacyStructureSettings\@\@QEAAXI\@Z
     */
    MCAPI void setSeed(unsigned int);
    /**
     * @symbol ?updateBoundingBoxFromChunkPos\@LegacyStructureSettings\@\@QEAAXXZ
     */
    MCAPI void updateBoundingBoxFromChunkPos();
    /**
     * @symbol ??1LegacyStructureSettings\@\@QEAA\@XZ
     */
    MCAPI ~LegacyStructureSettings();
    /**
     * @symbol ?INTEGRITY_MAX\@LegacyStructureSettings\@\@2MB
     */
    MCAPI static float const INTEGRITY_MAX;
    /**
     * @symbol ?INTEGRITY_MIN\@LegacyStructureSettings\@\@2MB
     */
    MCAPI static float const INTEGRITY_MIN;
    /**
     * @symbol ?MAX_STRUCTURE_SIZE\@LegacyStructureSettings\@\@2HB
     */
    MCAPI static int const MAX_STRUCTURE_SIZE;
};
