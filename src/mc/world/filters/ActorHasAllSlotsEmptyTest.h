#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorHasAllSlotsEmptyTest : public ::FilterTest {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORHASALLSLOTSEMPTYTEST
public:
    ActorHasAllSlotsEmptyTest& operator=(ActorHasAllSlotsEmptyTest const&) = delete;
    ActorHasAllSlotsEmptyTest(ActorHasAllSlotsEmptyTest const&)            = delete;
    ActorHasAllSlotsEmptyTest()                                            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?setup\@ActorHasAllSlotsEmptyTest\@\@UEAA_NAEBUDefinition\@FilterTest\@\@AEBUFilterInputs\@\@\@Z
     */
    virtual bool setup(struct FilterTest::Definition const&, struct FilterInputs const&);
    /**
     * @vftbl 2
     * @symbol ?evaluate\@ActorHasAllSlotsEmptyTest\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const&) const;
    /**
     * @vftbl 4
     * @symbol ?getName\@ActorHasAllSlotsEmptyTest\@\@UEBA?AV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@XZ
     */
    virtual class std::basic_string_view<char, struct std::char_traits<char>> getName() const;
    /**
     * @vftbl 6
     * @symbol ?_serializeValue\@ActorHasAllSlotsEmptyTest\@\@MEBA?AVValue\@Json\@\@XZ
     */
    virtual class Json::Value _serializeValue() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORHASALLSLOTSEMPTYTEST
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActorHasAllSlotsEmptyTest();
#endif
};
