#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntityComponentFactoryCereal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYCOMPONENTFACTORYCEREAL
public:
    EntityComponentFactoryCereal& operator=(EntityComponentFactoryCereal const&) = delete;
    EntityComponentFactoryCereal(EntityComponentFactoryCereal const&)            = delete;
    EntityComponentFactoryCereal()                                               = delete;
#endif

public:
    /**
     * @symbol
     * ?serializeComponentDefinitions\@EntityComponentFactoryCereal\@\@QEBAXAEAVDefinitionInstanceGroup\@\@AEBV?$GenericValue\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@\@rapidjson\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI void
    serializeComponentDefinitions(class DefinitionInstanceGroup&, class rapidjson::GenericValue<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>> const&, class SemVersion const&)
        const;
    /**
     * @symbol
     * ?tryGetDefinitionSerializer\@EntityComponentFactoryCereal\@\@QEBAPEAVICerealDefinitionSerializer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class ICerealDefinitionSerializer* tryGetDefinitionSerializer(std::string const&) const;
};
