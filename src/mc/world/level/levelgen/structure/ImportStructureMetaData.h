#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ImportStructureMetaData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IMPORTSTRUCTUREMETADATA
public:
    ImportStructureMetaData& operator=(ImportStructureMetaData const&) = delete;
    ImportStructureMetaData(ImportStructureMetaData const&)            = delete;
    ImportStructureMetaData()                                          = delete;
#endif

public:
    /**
     * @symbol
     * ?getStructure\@ImportStructureMetaData\@\@QEAAPEBVStructureTemplate\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class StructureTemplate const* getStructure(std::string const&);
    /**
     * @symbol
     * ?isSpecificStructureDirty\@ImportStructureMetaData\@\@QEAA?B_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool const isSpecificStructureDirty(std::string const&);
    /**
     * @symbol
     * ?setSpecificStructureDirty\@ImportStructureMetaData\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI void setSpecificStructureDirty(std::string const&, bool);
};
