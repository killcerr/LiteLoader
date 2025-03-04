#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class PackError {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKERROR
public:
    PackError& operator=(PackError const&) = delete;
    PackError(PackError const&)            = delete;
    PackError()                            = delete;
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
     * ?getLocErrorMessage\@PackError\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getLocErrorMessage() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getLocErrorMessageMap\@EducationMetadataError\@\@EEBAAEBV?$unordered_map\@HV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@H\@2\@U?$equal_to\@H\@2\@V?$allocator\@U?$pair\@$$CBHV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    virtual class std::unordered_map<
        int,
        std::string,
        struct std::hash<int>,
        struct std::equal_to<int>,
        class std::allocator<struct std::pair<int const, std::string>>> const&
    getLocErrorMessageMap() const = 0;
    /**
     * @vftbl 3
     * @symbol
     * ?getEventErrorMessageMap\@EducationMetadataError\@\@EEBAAEBV?$unordered_map\@HV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@H\@2\@U?$equal_to\@H\@2\@V?$allocator\@U?$pair\@$$CBHV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    virtual class std::unordered_map<
        int,
        std::string,
        struct std::hash<int>,
        struct std::equal_to<int>,
        class std::allocator<struct std::pair<int const, std::string>>> const&
    getEventErrorMessageMap() const = 0;
    /**
     * @symbol
     * ??0PackError\@\@QEAA\@W4PackErrorType\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI PackError(enum class PackErrorType, std::vector<std::string> const&);
    /**
     * @symbol
     * ?getErrorParameters\@PackError\@\@QEBAAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> const& getErrorParameters() const;
    /**
     * @symbol
     * ?getEventErrorMessage\@PackError\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getEventErrorMessage() const;
    /**
     * @symbol ?serialize\@PackError\@\@QEAAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void serialize(class Json::Value&);
};
