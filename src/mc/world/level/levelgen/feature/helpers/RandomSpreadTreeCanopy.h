#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class RandomSpreadTreeCanopy {
public:
    // RandomSpreadTreeCanopy inner types declare
    // clang-format off
    struct WeightedBlockReference;
    // clang-format on

    // RandomSpreadTreeCanopy inner types define
    struct WeightedBlockReference {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMSPREADTREECANOPY_WEIGHTEDBLOCKREFERENCE
    public:
        WeightedBlockReference& operator=(WeightedBlockReference const&) = delete;
        WeightedBlockReference(WeightedBlockReference const&)            = delete;
        WeightedBlockReference()                                         = delete;
#endif

    public:
        /**
         * @symbol ??1WeightedBlockReference\@RandomSpreadTreeCanopy\@\@QEAA\@XZ
         */
        MCAPI ~WeightedBlockReference();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMSPREADTREECANOPY
public:
    RandomSpreadTreeCanopy& operator=(RandomSpreadTreeCanopy const&) = delete;
    RandomSpreadTreeCanopy(RandomSpreadTreeCanopy const&)            = delete;
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
     * ?placeCanopy\@RandomSpreadTreeCanopy\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@AEBUTreeParams\@TreeHelper\@\@AEBV?$vector\@VBlockPos\@\@V?$allocator\@VBlockPos\@\@\@std\@\@\@3\@\@Z
     */
    virtual class std::optional<class BlockPos>
    placeCanopy(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&, struct TreeHelper::TreeParams const&, std::vector<class BlockPos> const&)
        const;
    /**
     * @symbol ??0RandomSpreadTreeCanopy\@\@QEAA\@XZ
     */
    MCAPI RandomSpreadTreeCanopy();
};
