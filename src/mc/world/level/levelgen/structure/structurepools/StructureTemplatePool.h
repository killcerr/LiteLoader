#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructureTemplatePool {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURETEMPLATEPOOL
public:
    StructureTemplatePool& operator=(StructureTemplatePool const&) = delete;
    StructureTemplatePool(StructureTemplatePool const&)            = delete;
    StructureTemplatePool()                                        = delete;
#endif

public:
    /**
     * @symbol
     * ??0StructureTemplatePool\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0AEAV?$vector\@U?$pair\@PEBVStructurePoolElement\@\@H\@std\@\@V?$allocator\@U?$pair\@PEBVStructurePoolElement\@\@H\@std\@\@\@2\@\@2\@\@Z
     */
    MCAPI
    StructureTemplatePool(std::string, std::string, std::vector<struct std::pair<class StructurePoolElement const*, int>>&);
    /**
     * @symbol
     * ?getFallback\@StructureTemplatePool\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getFallback() const;
    /**
     * @symbol
     * ?getName\@StructureTemplatePool\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getName() const;
    /**
     * @symbol ?getRandomTemplate\@StructureTemplatePool\@\@QEBAPEBVStructurePoolElement\@\@AEAVRandom\@\@\@Z
     */
    MCAPI class StructurePoolElement const* getRandomTemplate(class Random&) const;
    /**
     * @symbol
     * ?getShuffledTemplateIndexes\@StructureTemplatePool\@\@QEBA?AV?$vector\@_KV?$allocator\@_K\@std\@\@\@std\@\@AEAVRandom\@\@\@Z
     */
    MCAPI std::vector<unsigned __int64> getShuffledTemplateIndexes(class Random&) const;
    /**
     * @symbol ?getTemplate\@StructureTemplatePool\@\@QEBAPEBVStructurePoolElement\@\@_K\@Z
     */
    MCAPI class StructurePoolElement const* getTemplate(unsigned __int64) const;
    /**
     * @symbol ?isValid\@StructureTemplatePool\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
};
