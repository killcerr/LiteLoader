#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorFloatPropertyTest {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORFLOATPROPERTYTEST
public:
    ActorFloatPropertyTest& operator=(ActorFloatPropertyTest const&) = delete;
    ActorFloatPropertyTest(ActorFloatPropertyTest const&)            = delete;
    ActorFloatPropertyTest()                                         = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?setup\@ActorFloatPropertyTest\@\@UEAA_NAEBUDefinition\@FilterTest\@\@AEBUFilterInputs\@\@\@Z
     */
    virtual bool setup(struct FilterTest::Definition const&, struct FilterInputs const&);
    /**
     * @vftbl 2
     * @symbol ?evaluate\@ActorFloatPropertyTest\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const&) const;
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?getName\@ActorFloatPropertyTest\@\@UEBA?AV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@XZ
     */
    virtual class std::basic_string_view<char, struct std::char_traits<char>> getName() const;
    /**
     * @vftbl 5
     * @symbol ?_serializeDomain\@ActorFloatPropertyTest\@\@MEBA?AVValue\@Json\@\@XZ
     */
    virtual class Json::Value _serializeDomain() const;
    /**
     * @vftbl 6
     * @symbol ?_serializeValue\@ActorFloatPropertyTest\@\@MEBA?AVValue\@Json\@\@XZ
     */
    virtual class Json::Value _serializeValue() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORFLOATPROPERTYTEST
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActorFloatPropertyTest();
#endif
};
