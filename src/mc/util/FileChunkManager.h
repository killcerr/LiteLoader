#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FileChunkManager {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILECHUNKMANAGER
public:
    FileChunkManager& operator=(FileChunkManager const&) = delete;
    FileChunkManager(FileChunkManager const&)            = delete;
#endif

public:
    /**
     * @symbol ??0FileChunkManager\@\@QEAA\@XZ
     */
    MCAPI FileChunkManager();
    /**
     * @symbol ?getChunkInfo\@FileChunkManager\@\@QEBA?AUFileChunkInfo\@\@H\@Z
     */
    MCAPI struct FileChunkInfo getChunkInfo(int) const;
    /**
     * @symbol
     * ?getChunks\@FileChunkManager\@\@QEBAAEBV?$vector\@UFileChunkInfo\@\@V?$allocator\@UFileChunkInfo\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct FileChunkInfo> const& getChunks() const;
    /**
     * @symbol ?getTotalNumberOfChunks\@FileChunkManager\@\@QEAAHXZ
     */
    MCAPI int getTotalNumberOfChunks();
    /**
     * @symbol ?reset\@FileChunkManager\@\@QEAAXXZ
     */
    MCAPI void reset();
    /**
     * @symbol ?reset\@FileChunkManager\@\@QEAAX_KI\@Z
     */
    MCAPI void reset(unsigned __int64, unsigned int);
    /**
     * @symbol ??1FileChunkManager\@\@QEAA\@XZ
     */
    MCAPI ~FileChunkManager();

    // private:
    /**
     * @symbol ?_generateChunkInfo\@FileChunkManager\@\@AEAAXXZ
     */
    MCAPI void _generateChunkInfo();

private:
};
