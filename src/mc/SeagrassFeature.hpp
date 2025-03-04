/**
 * @file  SeagrassFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SeagrassFeature.
 *
 */
class SeagrassFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SEAGRASSFEATURE
public:
    class SeagrassFeature& operator=(class SeagrassFeature const &) = delete;
    SeagrassFeature(class SeagrassFeature const &) = delete;
    SeagrassFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SeagrassFeature();
    /**
     * @vftbl  3
     * @symbol  ?place\@SeagrassFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

//private:
    /**
     * @symbol  ?_isNotIce\@SeagrassFeature\@\@AEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _isNotIce(class BlockSource &, class BlockPos const &) const;

private:

};