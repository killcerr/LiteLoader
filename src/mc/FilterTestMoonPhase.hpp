/**
 * @file  FilterTestMoonPhase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FilterTestMoonPhase.
 *
 */
class FilterTestMoonPhase : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERTESTMOONPHASE
public:
    class FilterTestMoonPhase& operator=(class FilterTestMoonPhase const &) = delete;
    FilterTestMoonPhase(class FilterTestMoonPhase const &) = delete;
    FilterTestMoonPhase() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FilterTestMoonPhase();
    /**
     * @vftbl  2
     * @symbol  ?evaluate\@FilterTestMoonPhase\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  4
     * @symbol  ?getName\@FilterTestMoonPhase\@\@UEBA?AV?$basic_string_span\@$$CBD$0?0\@gsl\@\@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};