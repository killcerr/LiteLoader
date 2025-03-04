#pragma once

#include "mc/_HeaderOutputPredefine.h"

class POIInstance {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POIINSTANCE
public:
    POIInstance& operator=(POIInstance const&) = delete;
    POIInstance(POIInstance const&)            = delete;
    POIInstance()                              = delete;
#endif

public:
    /**
     * @symbol
     * ??0POIInstance\@\@QEAA\@AEBVBlockPos\@\@_NV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4POIType\@\@M_K4222\@Z
     */
    MCAPI POIInstance(
        class BlockPos const&,
        bool,
        std::string,
        enum class POIType,
        float,
        unsigned __int64,
        unsigned __int64,
        std::string,
        std::string,
        std::string
    );
    /**
     * @symbol ?getPosition\@POIInstance\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const& getPosition() const;
    /**
     * @symbol ?getRadius\@POIInstance\@\@QEBAMXZ
     */
    MCAPI float getRadius() const;
    /**
     * @symbol ?getSecondBlockFullAABB\@POIInstance\@\@QEAA?AVAABB\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI class AABB getSecondBlockFullAABB(class BlockSource&);
    /**
     * @symbol ?getSoundEvent\@POIInstance\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const& getSoundEvent() const;
    /**
     * @symbol ?incrementArrivalFailureCount\@POIInstance\@\@QEAAXXZ
     */
    MCAPI void incrementArrivalFailureCount();
    /**
     * @symbol ?resetArrivalFailureCount\@POIInstance\@\@QEAAXXZ
     */
    MCAPI void resetArrivalFailureCount();
    /**
     * @symbol ?trySpawnParticles\@POIInstance\@\@QEBAXAEAVBlockSource\@\@AEAVRandom\@\@H\@Z
     */
    MCAPI void trySpawnParticles(class BlockSource&, class Random&, int) const;
    /**
     * @symbol ?useBoundingBox\@POIInstance\@\@QEBA_NXZ
     */
    MCAPI bool useBoundingBox() const;
};
