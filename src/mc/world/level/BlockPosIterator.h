#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockPosIterator {
public:
    // BlockPosIterator inner types declare
    // clang-format off
    class FromCenter;
    class ManhattanDistance;
    // clang-format on

    // BlockPosIterator inner types define
    class FromCenter {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKPOSITERATOR_FROMCENTER
    public:
        FromCenter& operator=(FromCenter const&) = delete;
        FromCenter(FromCenter const&)            = delete;
        FromCenter()                             = delete;
#endif

    public:
        /**
         * @symbol ??0FromCenter\@BlockPosIterator\@\@QEAA\@AEBVBlockPos\@\@0\@Z
         */
        MCAPI FromCenter(class BlockPos const&, class BlockPos const&);
        /**
         * @symbol ?begin\@FromCenter\@BlockPosIterator\@\@QEBA?AV12\@XZ
         */
        MCAPI class BlockPosIterator::FromCenter begin() const;
        /**
         * @symbol ?end\@FromCenter\@BlockPosIterator\@\@QEBA?AV12\@XZ
         */
        MCAPI class BlockPosIterator::FromCenter end() const;
        /**
         * @symbol ??9FromCenter\@BlockPosIterator\@\@QEBA_NAEBV01\@\@Z
         */
        MCAPI bool operator!=(class BlockPosIterator::FromCenter const&) const;
        /**
         * @symbol ??DFromCenter\@BlockPosIterator\@\@QEAAAEBVBlockPos\@\@XZ
         */
        MCAPI class BlockPos const& operator*();
        /**
         * @symbol ??EFromCenter\@BlockPosIterator\@\@QEAAAEAV01\@XZ
         */
        MCAPI class BlockPosIterator::FromCenter& operator++();
    };

    class ManhattanDistance {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKPOSITERATOR_MANHATTANDISTANCE
    public:
        ManhattanDistance& operator=(ManhattanDistance const&) = delete;
        ManhattanDistance(ManhattanDistance const&)            = delete;
        ManhattanDistance()                                    = delete;
#endif

    public:
        /**
         * @symbol ??0ManhattanDistance\@BlockPosIterator\@\@QEAA\@AEBVBlockPos\@\@H\@Z
         */
        MCAPI ManhattanDistance(class BlockPos const&, int);
        /**
         * @symbol ?begin\@ManhattanDistance\@BlockPosIterator\@\@QEBA?AV12\@XZ
         */
        MCAPI class BlockPosIterator::ManhattanDistance begin() const;
        /**
         * @symbol ?end\@ManhattanDistance\@BlockPosIterator\@\@QEBA?AV12\@XZ
         */
        MCAPI class BlockPosIterator::ManhattanDistance end() const;
        /**
         * @symbol ??9ManhattanDistance\@BlockPosIterator\@\@QEBA_NAEBV01\@\@Z
         */
        MCAPI bool operator!=(class BlockPosIterator::ManhattanDistance const&) const;
        /**
         * @symbol ??DManhattanDistance\@BlockPosIterator\@\@QEAAAEBVBlockPos\@\@XZ
         */
        MCAPI class BlockPos const& operator*();
        /**
         * @symbol ??EManhattanDistance\@BlockPosIterator\@\@QEAAAEAV01\@XZ
         */
        MCAPI class BlockPosIterator::ManhattanDistance& operator++();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKPOSITERATOR
public:
    BlockPosIterator& operator=(BlockPosIterator const&) = delete;
    BlockPosIterator(BlockPosIterator const&)            = delete;
    BlockPosIterator()                                   = delete;
#endif

public:
    /**
     * @symbol ??0BlockPosIterator\@\@QEAA\@AEBVBlockPos\@\@0\@Z
     */
    MCAPI BlockPosIterator(class BlockPos const&, class BlockPos const&);
    /**
     * @symbol ?begin\@BlockPosIterator\@\@QEBA?AV1\@XZ
     */
    MCAPI class BlockPosIterator begin() const;
    /**
     * @symbol ?end\@BlockPosIterator\@\@QEBA?AV1\@XZ
     */
    MCAPI class BlockPosIterator end() const;
    /**
     * @symbol ??9BlockPosIterator\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class BlockPosIterator const&) const;
    /**
     * @symbol ??DBlockPosIterator\@\@QEAAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const& operator*();
    /**
     * @symbol ??EBlockPosIterator\@\@QEAAAEAV0\@XZ
     */
    MCAPI class BlockPosIterator& operator++();
};
