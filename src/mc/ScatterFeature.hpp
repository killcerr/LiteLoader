/**
 * @file  ScatterFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScatterFeature.
 *
 */
class ScatterFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCATTERFEATURE
public:
    class ScatterFeature& operator=(class ScatterFeature const &) = delete;
    ScatterFeature(class ScatterFeature const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ScatterFeature();
    /**
     * @vftbl  1
     * @symbol  ?place\@ScatterFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;
    /**
     * @symbol  ??0ScatterFeature\@\@QEAA\@XZ
     */
    MCAPI ScatterFeature();

};