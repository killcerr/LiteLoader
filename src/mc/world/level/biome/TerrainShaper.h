#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/ToFloatFunction.h"

class TerrainShaper {
public:
    // TerrainShaper inner types declare
    // clang-format off
    struct Point;
    // clang-format on

    // TerrainShaper inner types define
    struct Point {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TERRAINSHAPER_POINT
    public:
        Point& operator=(Point const&) = delete;
        Point(Point const&)            = delete;
        Point()                        = delete;
#endif

    public:
        /**
         * @symbol ?CONTINENTS_EXTRACTOR\@Point\@TerrainShaper\@\@2V?$ToFloatFunction\@UPoint\@TerrainShaper\@\@\@\@A
         */
        MCAPI static class ToFloatFunction<struct TerrainShaper::Point> CONTINENTS_EXTRACTOR;
        /**
         * @symbol ?EROSION_EXTRACTOR\@Point\@TerrainShaper\@\@2V?$ToFloatFunction\@UPoint\@TerrainShaper\@\@\@\@A
         */
        MCAPI static class ToFloatFunction<struct TerrainShaper::Point> EROSION_EXTRACTOR;
        /**
         * @symbol ?RIDGES_EXTRACTOR\@Point\@TerrainShaper\@\@2V?$ToFloatFunction\@UPoint\@TerrainShaper\@\@\@\@A
         */
        MCAPI static class ToFloatFunction<struct TerrainShaper::Point> RIDGES_EXTRACTOR;
        /**
         * @symbol ?WEIRDNESS_EXTRACTOR\@Point\@TerrainShaper\@\@2V?$ToFloatFunction\@UPoint\@TerrainShaper\@\@\@\@A
         */
        MCAPI static class ToFloatFunction<struct TerrainShaper::Point> WEIRDNESS_EXTRACTOR;
        /**
         * @symbol ?getContinents\@Point\@TerrainShaper\@\@SAMAEBU12\@\@Z
         */
        MCAPI static float getContinents(struct TerrainShaper::Point const&);
        /**
         * @symbol ?getErosion\@Point\@TerrainShaper\@\@SAMAEBU12\@\@Z
         */
        MCAPI static float getErosion(struct TerrainShaper::Point const&);
        /**
         * @symbol ?getRidges\@Point\@TerrainShaper\@\@SAMAEBU12\@\@Z
         */
        MCAPI static float getRidges(struct TerrainShaper::Point const&);
        /**
         * @symbol ?getWeirdness\@Point\@TerrainShaper\@\@SAMAEBU12\@\@Z
         */
        MCAPI static float getWeirdness(struct TerrainShaper::Point const&);
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TERRAINSHAPER
public:
    TerrainShaper& operator=(TerrainShaper const&) = delete;
    TerrainShaper(TerrainShaper const&)            = delete;
    TerrainShaper()                                = delete;
#endif

public:
    /**
     * @symbol ?factor\@TerrainShaper\@\@QEBAMMMM\@Z
     */
    MCAPI float factor(float, float, float) const;
    /**
     * @symbol ?jaggedness\@TerrainShaper\@\@QEBAMMMM\@Z
     */
    MCAPI float jaggedness(float, float, float) const;
    /**
     * @symbol ?offset\@TerrainShaper\@\@QEBAMMMM\@Z
     */
    MCAPI float offset(float, float, float) const;
    /**
     * @symbol ?buildOverworld\@TerrainShaper\@\@SA?AV1\@XZ
     */
    MCAPI static class TerrainShaper buildOverworld();

    // private:
    /**
     * @symbol
     * ?buildErosionJaggednessSpline\@TerrainShaper\@\@CA?AV?$ToFloatFunction\@UPoint\@TerrainShaper\@\@\@\@MMMM\@Z
     */
    MCAPI static class ToFloatFunction<struct TerrainShaper::Point>
    buildErosionJaggednessSpline(float, float, float, float);
    /**
     * @symbol
     * ?buildErosionOffsetSpline\@TerrainShaper\@\@CA?AV?$ToFloatFunction\@UPoint\@TerrainShaper\@\@\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@MMMMMM_N1\@Z
     */
    MCAPI static class ToFloatFunction<struct TerrainShaper::Point>
    buildErosionOffsetSpline(std::string const&, float, float, float, float, float, float, bool, bool);
    /**
     * @symbol
     * ?buildMountainRidgeSplineWithPoints\@TerrainShaper\@\@CA?AV?$ToFloatFunction\@UPoint\@TerrainShaper\@\@\@\@M_N\@Z
     */
    MCAPI static class ToFloatFunction<struct TerrainShaper::Point> buildMountainRidgeSplineWithPoints(float, bool);
    /**
     * @symbol ?buildRidgeJaggednessSpline\@TerrainShaper\@\@CA?AV?$ToFloatFunction\@UPoint\@TerrainShaper\@\@\@\@MM\@Z
     */
    MCAPI static class ToFloatFunction<struct TerrainShaper::Point> buildRidgeJaggednessSpline(float, float);
    /**
     * @symbol
     * ?buildWeirdnessJaggednessSpline\@TerrainShaper\@\@CA?AV?$ToFloatFunction\@UPoint\@TerrainShaper\@\@\@\@M\@Z
     */
    MCAPI static class ToFloatFunction<struct TerrainShaper::Point> buildWeirdnessJaggednessSpline(float);
    /**
     * @symbol ?getErosionFactor\@TerrainShaper\@\@CA?AV?$ToFloatFunction\@UPoint\@TerrainShaper\@\@\@\@M_N\@Z
     */
    MCAPI static class ToFloatFunction<struct TerrainShaper::Point> getErosionFactor(float, bool);
    /**
     * @symbol
     * ?ridgeSpline\@TerrainShaper\@\@CA?AV?$ToFloatFunction\@UPoint\@TerrainShaper\@\@\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@MMMMMM\@Z
     */
    MCAPI static class ToFloatFunction<struct TerrainShaper::Point>
    ridgeSpline(std::string const&, float, float, float, float, float, float);

private:
};
