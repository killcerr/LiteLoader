#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SculkBlockBehavior {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCULKBLOCKBEHAVIOR
public:
    SculkBlockBehavior& operator=(SculkBlockBehavior const&) = delete;
    SculkBlockBehavior(SculkBlockBehavior const&)            = delete;
    SculkBlockBehavior()                                     = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?updateDecayDelay\@SculkBlockBehavior\@\@UEBAHH\@Z
     */
    virtual int updateDecayDelay(int) const;
    /**
     * @vftbl 1
     * @symbol ?updateFacingData\@SculkBlockBehavior\@\@UEBAHHAEBVBlock\@\@\@Z
     */
    virtual int updateFacingData(int, class Block const&) const;
    /**
     * @vftbl 2
     * @symbol ?canChangeBlockOnSpread\@SculkBlockBehavior\@\@UEBA_NXZ
     */
    virtual bool canChangeBlockOnSpread() const;
    /**
     * @vftbl 3
     * @symbol
     * ?attemptSpreadVeins\@SculkBlockBehavior\@\@UEBA_NAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEBVBlock\@\@HAEAVSculkSpreader\@\@\@Z
     */
    virtual bool
    attemptSpreadVeins(class IBlockWorldGenAPI&, class BlockPos const&, class Block const&, int, class SculkSpreader&)
        const;
    /**
     * @vftbl 4
     * @symbol
     * ?attemptUseCharge\@SculkBlockBehavior\@\@UEBAHAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlockPos\@\@2HHAEAVRandom\@\@AEAVSculkSpreader\@\@_N\@Z
     */
    virtual int attemptUseCharge(
        class IBlockWorldGenAPI&,
        class BlockSource*,
        class BlockPos const&,
        class BlockPos const&,
        int,
        int,
        class Random&,
        class SculkSpreader&,
        bool
    ) const;
    /**
     * @vftbl 5
     * @symbol ?onDischarged\@SculkBlockBehavior\@\@UEBAXAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onDischarged(class IBlockWorldGenAPI&, class BlockSource*, class BlockPos const&) const;

    // private:
    /**
     * @symbol
     * ?_placeGrowthAt\@SculkBlockBehavior\@\@CAXAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVSculkSpreader\@\@\@Z
     */
    MCAPI static void
    _placeGrowthAt(class IBlockWorldGenAPI&, class BlockSource*, class BlockPos const&, class Random&, class SculkSpreader&);

private:
};
