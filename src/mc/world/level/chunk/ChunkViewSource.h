#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/GridArea.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/core/utility/buffer_span_mut.h"
#include "mc/world/level/LevelChunkGridAreaElement.h"
#include "mc/world/level/chunk/ChunkSource.h"

class ChunkViewSource : public ::ChunkSource {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKVIEWSOURCE
public:
    ChunkViewSource& operator=(ChunkViewSource const&) = delete;
    ChunkViewSource()                                  = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?getExistingChunk\@ChunkViewSource\@\@UEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBVChunkPos\@\@\@Z
     */
    virtual class std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const&);
    /**
     * @vftbl 4
     * @symbol ?getRandomChunk\@ChunkViewSource\@\@UEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEAVRandom\@\@\@Z
     */
    virtual class std::shared_ptr<class LevelChunk> getRandomChunk(class Random&);
    /**
     * @vftbl 7
     * @symbol
     * ?createNewChunk\@ChunkViewSource\@\@UEAA?AV?$shared_ptr\@VLevelChunk\@\@\@std\@\@AEBVChunkPos\@\@W4LoadMode\@ChunkSource\@\@_N\@Z
     */
    virtual class std::shared_ptr<class LevelChunk>
    createNewChunk(class ChunkPos const&, enum class ChunkSource::LoadMode, bool);
    /**
     * @vftbl 18
     * @symbol
     * ?acquireDiscarded\@ChunkViewSource\@\@UEAAXV?$unique_ptr\@VLevelChunk\@\@ULevelChunkFinalDeleter\@\@\@std\@\@\@Z
     */
    virtual void acquireDiscarded(class std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter>);
    /**
     * @vftbl 22
     * @symbol ?isWithinWorldLimit\@ChunkViewSource\@\@UEBA_NAEBVChunkPos\@\@\@Z
     */
    virtual bool isWithinWorldLimit(class ChunkPos const&) const;
    /**
     * @vftbl 29
     * @symbol ?setLevelChunk\@ChunkViewSource\@\@UEAAXV?$shared_ptr\@VLevelChunk\@\@\@std\@\@\@Z
     */
    virtual void setLevelChunk(class std::shared_ptr<class LevelChunk>);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHUNKVIEWSOURCE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ChunkViewSource();
#endif
    /**
     * @symbol ??0ChunkViewSource\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ChunkViewSource(class ChunkViewSource const&);
    /**
     * @symbol ??0ChunkViewSource\@\@QEAA\@AEAVChunkSource\@\@W4LoadMode\@1\@\@Z
     */
    MCAPI ChunkViewSource(class ChunkSource&, enum class ChunkSource::LoadMode);
    /**
     * @symbol
     * ??0ChunkViewSource\@\@QEAA\@AEAVChunkSource\@\@AEAV?$LevelChunkGridAreaElement\@V?$weak_ptr\@VLevelChunk\@\@\@std\@\@\@\@AEBUBounds\@\@\@Z
     */
    MCAPI
    ChunkViewSource(class ChunkSource&, class LevelChunkGridAreaElement<class std::weak_ptr<class LevelChunk>>&, struct Bounds const&);
    /**
     * @symbol ?clear\@ChunkViewSource\@\@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @symbol ?clearEntryAtChunkPos\@ChunkViewSource\@\@QEAAXAEBVChunkPos\@\@\@Z
     */
    MCAPI void clearEntryAtChunkPos(class ChunkPos const&);
    /**
     * @symbol
     * ?enableBlockEntityAccess\@ChunkViewSource\@\@QEAA?AV?$vector\@VLevelChunkBlockActorAccessToken\@\@V?$allocator\@VLevelChunkBlockActorAccessToken\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class LevelChunkBlockActorAccessToken> enableBlockEntityAccess();
    /**
     * @symbol ?getArea\@ChunkViewSource\@\@QEAAAEAV?$GridArea\@V?$shared_ptr\@VLevelChunk\@\@\@std\@\@\@\@XZ
     */
    MCAPI class GridArea<class std::shared_ptr<class LevelChunk>>& getArea();
    /**
     * @symbol
     * ?move\@ChunkViewSource\@\@QEAAXAEBVBlockPos\@\@H_NW4ChunkSourceViewGenerateMode\@\@V?$function\@$$A6AXV?$buffer_span_mut\@V?$shared_ptr\@VLevelChunk\@\@\@std\@\@\@\@V?$buffer_span\@I\@\@\@Z\@std\@\@PEBM\@Z
     */
    MCAPI void
    move(class BlockPos const&, int, bool, enum class ChunkSourceViewGenerateMode, class std::function<void(class buffer_span_mut<class std::shared_ptr<class LevelChunk>>, class buffer_span<unsigned int>)>, float const*);
    /**
     * @symbol
     * ?move\@ChunkViewSource\@\@QEAAXAEBVBlockPos\@\@0_NW4ChunkSourceViewGenerateMode\@\@V?$function\@$$A6AXV?$buffer_span_mut\@V?$shared_ptr\@VLevelChunk\@\@\@std\@\@\@\@V?$buffer_span\@I\@\@\@Z\@std\@\@PEBM\@Z
     */
    MCAPI void
    move(class BlockPos const&, class BlockPos const&, bool, enum class ChunkSourceViewGenerateMode, class std::function<void(class buffer_span_mut<class std::shared_ptr<class LevelChunk>>, class buffer_span<unsigned int>)>, float const*);
    /**
     * @symbol
     * ?move\@ChunkViewSource\@\@QEAAXAEBUBounds\@\@_NW4ChunkSourceViewGenerateMode\@\@V?$function\@$$A6AXV?$buffer_span_mut\@V?$shared_ptr\@VLevelChunk\@\@\@std\@\@\@\@V?$buffer_span\@I\@\@\@Z\@std\@\@PEBM\@Z
     */
    MCAPI void
    move(struct Bounds const&, bool, enum class ChunkSourceViewGenerateMode, class std::function<void(class buffer_span_mut<class std::shared_ptr<class LevelChunk>>, class buffer_span<unsigned int>)>, float const*);
    /**
     * @symbol
     * ?rebuildSpecificArea\@ChunkViewSource\@\@QEAAXAEBUBounds\@\@_NV?$function\@$$A6AXV?$buffer_span_mut\@V?$shared_ptr\@VLevelChunk\@\@\@std\@\@\@\@V?$buffer_span\@I\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void
    rebuildSpecificArea(struct Bounds const&, bool, class std::function<void(class buffer_span_mut<class std::shared_ptr<class LevelChunk>>, class buffer_span<unsigned int>)>);
    /**
     * @symbol ?getGenerateMode\@ChunkViewSource\@\@SA?AW4ChunkSourceViewGenerateMode\@\@_N0\@Z
     */
    MCAPI static enum class ChunkSourceViewGenerateMode getGenerateMode(bool, bool);
};
