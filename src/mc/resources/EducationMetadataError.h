#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackError.h"

class EducationMetadataError : public ::PackError {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EDUCATIONMETADATAERROR
public:
    EducationMetadataError& operator=(EducationMetadataError const&) = delete;
    EducationMetadataError(EducationMetadataError const&)            = delete;
    EducationMetadataError()                                         = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
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
    getLocErrorMessageMap() const;
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
    getEventErrorMessageMap() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EDUCATIONMETADATAERROR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~EducationMetadataError();
#endif
};
