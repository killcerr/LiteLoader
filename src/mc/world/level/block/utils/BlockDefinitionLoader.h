#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/puv/LoadResult.h"

class BlockDefinitionLoader {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKDEFINITIONLOADER
public:
    BlockDefinitionLoader& operator=(BlockDefinitionLoader const&) = delete;
    BlockDefinitionLoader(BlockDefinitionLoader const&)            = delete;
    BlockDefinitionLoader()                                        = delete;
#endif

public:
    /**
     * @symbol
     * ??0BlockDefinitionLoader\@\@QEAA\@PEAVBlockDefinitionGroup\@\@PEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VSemVersion\@\@PEBVExperiments\@\@\@Z
     */
    MCAPI
    BlockDefinitionLoader(class BlockDefinitionGroup*, class Core::PathBuffer<std::string> const*, std::string, class SemVersion, class Experiments const*);
    /**
     * @symbol
     * ?load\@BlockDefinitionLoader\@\@QEBA?AV?$LoadResult\@UBlockDefinition\@\@\@Puv\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Puv::LoadResult<struct BlockDefinition> load(std::string const&) const;
    /**
     * @symbol ??1BlockDefinitionLoader\@\@QEAA\@XZ
     */
    MCAPI ~BlockDefinitionLoader();
};
