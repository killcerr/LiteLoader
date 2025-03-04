#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FilterTest {
public:
    // FilterTest inner types declare
    // clang-format off
    struct Definition;
    // clang-format on

    // FilterTest inner types define
    struct Definition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERTEST_DEFINITION
    public:
        Definition& operator=(Definition const&) = delete;
        Definition(Definition const&)            = delete;
        Definition()                             = delete;
#endif

    public:
        /**
         * @symbol ??1Definition\@FilterTest\@\@QEAA\@XZ
         */
        MCAPI ~Definition();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERTEST
public:
    FilterTest& operator=(FilterTest const&) = delete;
    FilterTest(FilterTest const&)            = delete;
    FilterTest()                             = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?setup\@FilterTest\@\@UEAA_NAEBUDefinition\@1\@AEBUFilterInputs\@\@\@Z
     */
    virtual bool setup(struct FilterTest::Definition const&, struct FilterInputs const&);
    /**
     * @vftbl 2
     * @symbol ?evaluate\@ActorHealthTest\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const&) const = 0;
    /**
     * @vftbl 3
     * @symbol ?finalizeParsedValue\@FilterTest\@\@UEAAXAEAVIWorldRegistriesProvider\@\@\@Z
     */
    virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    /**
     * @vftbl 4
     * @symbol ?getName\@ActorHealthTest\@\@UEBA?AV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@XZ
     */
    virtual class std::basic_string_view<char, struct std::char_traits<char>> getName() const = 0;
    /**
     * @vftbl 5
     * @symbol ?_serializeDomain\@FilterTest\@\@MEBA?AVValue\@Json\@\@XZ
     */
    virtual class Json::Value _serializeDomain() const;
    /**
     * @vftbl 6
     * @symbol ?_serializeValue\@ActorHasAllSlotsEmptyTest\@\@MEBA?AVValue\@Json\@\@XZ
     */
    virtual class Json::Value _serializeValue() const = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FILTERTEST
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~FilterTest();
#endif
    /**
     * @symbol ?serialize\@FilterTest\@\@QEBA?AVValue\@Json\@\@XZ
     */
    MCAPI class Json::Value serialize() const;

    // protected:
    /**
     * @symbol ?_testValuesWithOperator\@FilterTest\@\@IEBA_NMM\@Z
     */
    MCAPI bool _testValuesWithOperator(float, float) const;
    /**
     * @symbol ?_testValuesWithOperator\@FilterTest\@\@IEBA_N_N0\@Z
     */
    MCAPI bool _testValuesWithOperator(bool, bool) const;
    /**
     * @symbol ?_testValuesWithOperator\@FilterTest\@\@IEBA_NHH\@Z
     */
    MCAPI bool _testValuesWithOperator(int, int) const;

protected:
};
