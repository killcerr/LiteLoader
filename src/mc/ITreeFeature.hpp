/**
 * @file  ITreeFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ITreeFeature.
 *
 */
class ITreeFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITREEFEATURE
public:
    class ITreeFeature& operator=(class ITreeFeature const &) = delete;
    ITreeFeature(class ITreeFeature const &) = delete;
    ITreeFeature() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITREEFEATURE
    /**
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~ITreeFeature();
#endif

//protected:
    /**
     * @symbol  ?_place\@ITreeFeature\@\@IEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    MCAPI class std::optional<class BlockPos> _place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;

protected:

};