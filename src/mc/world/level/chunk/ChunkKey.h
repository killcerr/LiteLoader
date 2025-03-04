#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class ChunkKey {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKKEY
public:
    ChunkKey& operator=(ChunkKey const&) = delete;
    ChunkKey(ChunkKey const&)            = delete;
    ChunkKey()                           = delete;
#endif

public:
    /**
     * @symbol ??0ChunkKey\@\@QEAA\@AEBVLevelChunk\@\@\@Z
     */
    MCAPI ChunkKey(class LevelChunk const&);
    /**
     * @symbol ??0ChunkKey\@\@QEAA\@AEBVChunkPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI ChunkKey(class ChunkPos const&, class AutomaticID<class Dimension, int>);
    /**
     * @symbol ?asSpan\@ChunkKey\@\@QEBA?AV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::basic_string_view<char, struct std::char_traits<char>> asSpan() const;
    /**
     * @symbol ?hashCode\@ChunkKey\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 hashCode() const;
};
