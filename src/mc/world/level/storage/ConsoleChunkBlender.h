#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ConsoleChunkBlender {
public:
    // ConsoleChunkBlender inner types declare
    // clang-format off

    // clang-format on

    // ConsoleChunkBlender inner types define
    enum class BlenderMode {};

    enum class ShiftBlockTypes {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONSOLECHUNKBLENDER
public:
    ConsoleChunkBlender& operator=(ConsoleChunkBlender const&) = delete;
    ConsoleChunkBlender(ConsoleChunkBlender const&)            = delete;
    ConsoleChunkBlender()                                      = delete;
#endif

public:
    /**
     * @symbol ??1ConsoleChunkBlender\@\@QEAA\@XZ
     */
    MCAPI ~ConsoleChunkBlender();

    // protected:
    /**
     * @symbol ?_blendChunkEnd4J\@ConsoleChunkBlender\@\@IEAAXAEAVLevelChunk\@\@0\@Z
     */
    MCAPI void _blendChunkEnd4J(class LevelChunk&, class LevelChunk&);
    /**
     * @symbol ?_blendChunkNether4J\@ConsoleChunkBlender\@\@IEAAXAEAVLevelChunk\@\@0\@Z
     */
    MCAPI void _blendChunkNether4J(class LevelChunk&, class LevelChunk&);
    /**
     * @symbol ?_blendChunkOverworld\@ConsoleChunkBlender\@\@IEAAXAEAVLevelChunk\@\@0W4ShiftBlockTypes\@1\@\@Z
     */
    MCAPI void
    _blendChunkOverworld(class LevelChunk&, class LevelChunk&, enum class ConsoleChunkBlender::ShiftBlockTypes);
    /**
     * @symbol ?_copyColumnFromGeneratedChunkNether\@ConsoleChunkBlender\@\@IEAAXAEAVLevelChunk\@\@0HH\@Z
     */
    MCAPI void _copyColumnFromGeneratedChunkNether(class LevelChunk&, class LevelChunk&, int, int);
    /**
     * @symbol
     * ?_copyColumnFromGeneratedChunkOverworld\@ConsoleChunkBlender\@\@IEAAXAEAVLevelChunk\@\@0HHW4ShiftBlockTypes\@1\@\@Z
     */
    MCAPI void _copyColumnFromGeneratedChunkOverworld(
        class LevelChunk&,
        class LevelChunk&,
        int,
        int,
        enum class ConsoleChunkBlender::ShiftBlockTypes
    );
    /**
     * @symbol
     * ?_findTopMostWaterHeight\@ConsoleChunkBlender\@\@IEAA?AVChunkLocalHeight\@\@AEAVLevelChunk\@\@HHAEBV?$unordered_set\@PEBVBlockLegacy\@\@U?$hash\@PEBVBlockLegacy\@\@\@std\@\@U?$equal_to\@PEBVBlockLegacy\@\@\@3\@V?$allocator\@PEBVBlockLegacy\@\@\@3\@\@std\@\@\@Z
     */
    MCAPI class ChunkLocalHeight
    _findTopMostWaterHeight(class LevelChunk&, int, int, class std::unordered_set<class BlockLegacy const*, struct std::hash<class BlockLegacy const*>, struct std::equal_to<class BlockLegacy const*>, class std::allocator<class BlockLegacy const*>> const&);
    /**
     * @symbol ?_prepInterpTable\@ConsoleChunkBlender\@\@IEAAXXZ
     */
    MCAPI void _prepInterpTable();
    /**
     * @symbol
     * ?_shiftColumnBySetBlocks\@ConsoleChunkBlender\@\@IEAAXAEAVLevelChunk\@\@HHH_NVChunkLocalHeight\@\@W4ShiftBlockTypes\@1\@AEBUOverworldBlendRules\@\@\@Z
     */
    MCAPI void
    _shiftColumnBySetBlocks(class LevelChunk&, int, int, int, bool, class ChunkLocalHeight, enum class ConsoleChunkBlender::ShiftBlockTypes, struct OverworldBlendRules const&);

protected:
};
