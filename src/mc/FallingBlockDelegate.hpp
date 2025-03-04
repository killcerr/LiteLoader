/**
 * @file  FallingBlockDelegate.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class FallingBlockDelegate.
 *
 */
class FallingBlockDelegate {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FALLINGBLOCKDELEGATE
public:
    class FallingBlockDelegate& operator=(class FallingBlockDelegate const &) = delete;
    FallingBlockDelegate(class FallingBlockDelegate const &) = delete;
    FallingBlockDelegate() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   642659509
     */
    virtual ~FallingBlockDelegate();
    /**
     * @vftbl  1
     * @symbol ?onLand@FallingBlockDelegate@@UEAAXAEBVHeavyBlock@@AEAVIBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1497706854
     */
    virtual void onLand(class HeavyBlock const &, class IBlockSource &, class BlockPos const &);
    /**
     * @vftbl  2
     * @symbol ?breakBlock@FallingBlockDelegate@@UEAAXAEAVFallingBlock@@@Z
     * @hash   1468803508
     */
    virtual void breakBlock(class FallingBlock &);

};