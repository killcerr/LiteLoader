#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntityComponentFactoryJson {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYCOMPONENTFACTORYJSON
public:
    EntityComponentFactoryJson& operator=(EntityComponentFactoryJson const&) = delete;
    EntityComponentFactoryJson(EntityComponentFactoryJson const&)            = delete;
    EntityComponentFactoryJson()                                             = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENTITYCOMPONENTFACTORYJSON
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~EntityComponentFactoryJson();
#endif
    /**
     * @symbol
     * ?tryGetDefinitionSerializer\@EntityComponentFactoryJson\@\@QEBAPEAVIJsonDefinitionSerializer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class IJsonDefinitionSerializer* tryGetDefinitionSerializer(std::string const&) const;
};
