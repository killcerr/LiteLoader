#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScatterParams {
public:
    // ScatterParams inner types declare
    // clang-format off
    class ChanceInformation;
    struct CoordinateRange;
    class ScatteredPositions;
    // clang-format on

    // ScatterParams inner types define
    class ChanceInformation {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCATTERPARAMS_CHANCEINFORMATION
    public:
        ChanceInformation& operator=(ChanceInformation const&) = delete;
        ChanceInformation(ChanceInformation const&)            = delete;
        ChanceInformation()                                    = delete;
#endif

    public:
        /**
         * @symbol ??1ChanceInformation\@ScatterParams\@\@QEAA\@XZ
         */
        MCAPI ~ChanceInformation();
    };

    struct CoordinateRange {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCATTERPARAMS_COORDINATERANGE
    public:
        CoordinateRange& operator=(CoordinateRange const&) = delete;
#endif

    public:
        /**
         * @symbol ??0CoordinateRange\@ScatterParams\@\@QEAA\@XZ
         */
        MCAPI CoordinateRange();
        /**
         * @symbol ??0CoordinateRange\@ScatterParams\@\@QEAA\@AEBU01\@\@Z
         */
        MCAPI CoordinateRange(struct ScatterParams::CoordinateRange const&);
        /**
         * @symbol ??0CoordinateRange\@ScatterParams\@\@QEAA\@$$QEAU01\@\@Z
         */
        MCAPI CoordinateRange(struct ScatterParams::CoordinateRange&&);
        /**
         * @symbol ?_eval\@CoordinateRange\@ScatterParams\@\@QEBAHHHAEAIAEAVRandom\@\@\@Z
         */
        MCAPI int _eval(int, int, unsigned int&, class Random&) const;
        /**
         * @symbol ??1CoordinateRange\@ScatterParams\@\@QEAA\@XZ
         */
        MCAPI ~CoordinateRange();
    };

    class ScatteredPositions {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCATTERPARAMS_SCATTEREDPOSITIONS
    public:
        ScatteredPositions& operator=(ScatteredPositions const&) = delete;
        ScatteredPositions(ScatteredPositions const&)            = delete;
        ScatteredPositions()                                     = delete;
#endif

    public:
        /**
         * @symbol ?empty\@ScatteredPositions\@ScatterParams\@\@QEAA_NXZ
         */
        MCAPI bool empty();
        /**
         * @symbol ?nextPos\@ScatteredPositions\@ScatterParams\@\@QEAA?AVBlockPos\@\@XZ
         */
        MCAPI class BlockPos nextPos();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCATTERPARAMS
public:
    ScatterParams& operator=(ScatterParams const&) = delete;
    ScatterParams(ScatterParams const&)            = delete;
    ScatterParams()                                = delete;
#endif

public:
    /**
     * @symbol ?addAdditionalSaveData\@ScatterParams\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @symbol ?readAdditionalSaveData\@ScatterParams\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class CompoundTag const&);
    /**
     * @symbol
     * ?scatter\@ScatterParams\@\@QEBA?AVScatteredPositions\@1\@AEAVRenderParams\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    MCAPI class ScatterParams::ScatteredPositions
    scatter(class RenderParams&, class BlockPos const&, class Random&) const;
    /**
     * @symbol ??1ScatterParams\@\@QEAA\@XZ
     */
    MCAPI ~ScatterParams();
    /**
     * @symbol ?initMolangParams\@ScatterParams\@\@SAXAEAVRenderParams\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    MCAPI static void initMolangParams(class RenderParams&, class BlockPos const&, class Random&);

    // private:
    /**
     * @symbol ?_getPos\@ScatterParams\@\@AEBA?AVBlockPos\@\@IAEBV2\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    MCAPI class BlockPos _getPos(unsigned int, class BlockPos const&, class Random&, class RenderParams&) const;
    /**
     * @symbol
     * ?_parseExpressionNodeFloat\@ScatterParams\@\@AEAAXAEBVCompoundTag\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1AEAVExpressionNode\@\@M\@Z
     */
    MCAPI void _parseExpressionNodeFloat(
        class CompoundTag const&,
        std::string const&,
        std::string const&,
        class ExpressionNode&,
        float
    );

private:
};
