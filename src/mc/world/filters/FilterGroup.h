#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FilterGroup {
public:
    // FilterGroup inner types declare
    // clang-format off

    // clang-format on

    // FilterGroup inner types define
    enum class CollectionType {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERGROUP
public:
    FilterGroup& operator=(FilterGroup const&) = delete;
    FilterGroup()                              = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?_createSubgroup\@BiomeFilterGroup\@\@MEBA?AV?$shared_ptr\@VFilterGroup\@\@\@std\@\@W4CollectionType\@FilterGroup\@\@\@Z
     */
    virtual class std::shared_ptr<class FilterGroup> _createSubgroup(enum class FilterGroup::CollectionType) const = 0;
    /**
     * @vftbl 2
     * @symbol ?_setupContext\@FilterGroup\@\@MEBA_NAEBVFilterTest\@\@AEAUFilterContext\@\@\@Z
     */
    virtual bool _setupContext(class FilterTest const&, struct FilterContext&) const;
    /**
     * @vftbl 3
     * @symbol
     * ?_handleUnknownMember\@FilterGroup\@\@MEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVValue\@Json\@\@\@Z
     */
    virtual bool _handleUnknownMember(std::string const&, class Json::Value const&);
    /**
     * @symbol ??0FilterGroup\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI FilterGroup(class FilterGroup const&);
    /**
     * @symbol ?addFilterTest\@FilterGroup\@\@QEAA_NAEBUDefinition\@FilterTest\@\@AEBUFilterInputs\@\@\@Z
     */
    MCAPI bool addFilterTest(struct FilterTest::Definition const&, struct FilterInputs const&);
    /**
     * @symbol
     * ?addFilterTest\@FilterGroup\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUFilterInputs\@\@\@Z
     */
    MCAPI bool addFilterTest(std::string const&, struct FilterInputs const&);
    /**
     * @symbol ?empty\@FilterGroup\@\@QEBA_NXZ
     */
    MCAPI bool empty() const;
    /**
     * @symbol ?evaluate\@FilterGroup\@\@QEBA_NAEAV?$array\@UFilterContext\@\@$09\@std\@\@\@Z
     */
    MCAPI bool evaluate(class std::array<struct FilterContext, 10>&) const;
    /**
     * @symbol
     * ?getChildren\@FilterGroup\@\@QEBAAEBV?$vector\@V?$shared_ptr\@VFilterGroup\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VFilterGroup\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<class std::shared_ptr<class FilterGroup>> const& getChildren() const;
    /**
     * @symbol
     * ?getMembers\@FilterGroup\@\@QEBAAEBV?$vector\@V?$shared_ptr\@VFilterTest\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VFilterTest\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<class std::shared_ptr<class FilterTest>> const& getMembers() const;
    /**
     * @symbol ?parse\@FilterGroup\@\@QEAA_NAEBVValue\@Json\@\@\@Z
     */
    MCAPI bool parse(class Json::Value const&);
    /**
     * @symbol ?serialize\@FilterGroup\@\@QEBAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void serialize(class Json::Value&) const;

    // protected:
    /**
     * @symbol
     * ?_parseFilterInputs\@FilterGroup\@\@IEAA_NAEBVValue\@Json\@\@AEBUDefinition\@FilterTest\@\@AEAUFilterInputs\@\@\@Z
     */
    MCAPI bool _parseFilterInputs(class Json::Value const&, struct FilterTest::Definition const&, struct FilterInputs&);
    /**
     * @symbol
     * ?_parseFilterParam\@FilterGroup\@\@IEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0AEBVValue\@Json\@\@AEBUFilterParamDefinition\@\@AEAVFilterInput\@\@\@Z
     */
    MCAPI bool
    _parseFilterParam(std::string const&, std::string const&, class Json::Value const&, struct FilterParamDefinition const&, class FilterInput&);
    /**
     * @symbol
     * ?_parseMember\@FilterGroup\@\@IEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI bool _parseMember(std::string const&, class Json::Value const&);
    /**
     * @symbol
     * ?_parseObject\@FilterGroup\@\@IEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI bool _parseObject(std::string const&, class Json::Value const&);
    /**
     * @symbol ?_parseTest\@FilterGroup\@\@IEAA_NAEBVValue\@Json\@\@\@Z
     */
    MCAPI bool _parseTest(class Json::Value const&);

protected:
};
