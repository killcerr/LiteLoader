#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CompassSpriteCalculator {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPASSSPRITECALCULATOR
public:
    CompassSpriteCalculator& operator=(CompassSpriteCalculator const&) = delete;
    CompassSpriteCalculator(CompassSpriteCalculator const&)            = delete;
    CompassSpriteCalculator()                                          = delete;
#endif

public:
    /**
     * @symbol
     * ??0CompassSpriteCalculator\@\@QEAA\@V?$function\@$$A6A?AVBlockPos\@\@PEBVBlockSource\@\@PEAVActor\@\@\@Z\@std\@\@V?$function\@$$A6A_NPEBVBlockSource\@\@PEAVActor\@\@\@Z\@2\@MM\@Z
     */
    MCAPI CompassSpriteCalculator(
        class std::function<class BlockPos(class BlockSource const*, class Actor*)>,
        class std::function<bool(class BlockSource const*, class Actor*)>,
        float,
        float
    );
    /**
     * @symbol ?getFrame\@CompassSpriteCalculator\@\@QEBAHXZ
     */
    MCAPI int getFrame() const;
    /**
     * @symbol ?update\@CompassSpriteCalculator\@\@QEAAHAEAVActor\@\@_N\@Z
     */
    MCAPI int update(class Actor&, bool);
    /**
     * @symbol ?updateFromPosition\@CompassSpriteCalculator\@\@QEAAHPEBVBlockSource\@\@PEAVActor\@\@MMM_N2\@Z
     */
    MCAPI int updateFromPosition(class BlockSource const*, class Actor*, float, float, float, bool, bool);
    /**
     * @symbol ??1CompassSpriteCalculator\@\@QEAA\@XZ
     */
    MCAPI ~CompassSpriteCalculator();
    /**
     * @symbol
     * ?isInLastDeathDimension\@CompassSpriteCalculator\@\@SA?AV?$function\@$$A6A_NPEBVBlockSource\@\@PEAVActor\@\@\@Z\@std\@\@XZ
     */
    MCAPI static class std::function<bool(class BlockSource const*, class Actor*)> isInLastDeathDimension();
    /**
     * @symbol
     * ?isInOverworldDimension\@CompassSpriteCalculator\@\@SA?AV?$function\@$$A6A_NPEBVBlockSource\@\@PEAVActor\@\@\@Z\@std\@\@XZ
     */
    MCAPI static class std::function<bool(class BlockSource const*, class Actor*)> isInOverworldDimension();
    /**
     * @symbol
     * ?pointTowardsLastDeathLocation\@CompassSpriteCalculator\@\@SA?AV?$function\@$$A6A?AVBlockPos\@\@PEBVBlockSource\@\@PEAVActor\@\@\@Z\@std\@\@XZ
     */
    MCAPI static class std::function<class BlockPos(class BlockSource const*, class Actor*)>
    pointTowardsLastDeathLocation();
    /**
     * @symbol
     * ?pointTowardsSpawnPoint\@CompassSpriteCalculator\@\@SA?AV?$function\@$$A6A?AVBlockPos\@\@PEBVBlockSource\@\@PEAVActor\@\@\@Z\@std\@\@XZ
     */
    MCAPI static class std::function<class BlockPos(class BlockSource const*, class Actor*)> pointTowardsSpawnPoint();
};
