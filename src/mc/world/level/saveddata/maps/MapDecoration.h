#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class MapDecoration {
public:
    // MapDecoration inner types declare
    // clang-format off

    // clang-format on

    // MapDecoration inner types define
    enum class Type {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPDECORATION
public:
    MapDecoration& operator=(MapDecoration const&) = delete;
    MapDecoration(MapDecoration const&)            = delete;
    MapDecoration()                                = delete;
#endif

public:
    /**
     * @symbol
     * ??0MapDecoration\@\@QEAA\@W4Type\@0\@CCCAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVColor\@mce\@\@\@Z
     */
    MCAPI
    MapDecoration(enum class MapDecoration::Type, signed char, signed char, signed char, std::string const&, class mce::Color const&);
    /**
     * @symbol ?getColor\@MapDecoration\@\@QEBAAEBVColor\@mce\@\@XZ
     */
    MCAPI class mce::Color const& getColor() const;
    /**
     * @symbol ?getImg\@MapDecoration\@\@QEBA?AW4Type\@1\@XZ
     */
    MCAPI enum class MapDecoration::Type getImg() const;
    /**
     * @symbol
     * ?getLabel\@MapDecoration\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getLabel() const;
    /**
     * @symbol ?getRot\@MapDecoration\@\@QEBACXZ
     */
    MCAPI signed char getRot() const;
    /**
     * @symbol ?getX\@MapDecoration\@\@QEBACXZ
     */
    MCAPI signed char getX() const;
    /**
     * @symbol ?getY\@MapDecoration\@\@QEBACXZ
     */
    MCAPI signed char getY() const;
    /**
     * @symbol ??1MapDecoration\@\@QEAA\@XZ
     */
    MCAPI ~MapDecoration();
};
