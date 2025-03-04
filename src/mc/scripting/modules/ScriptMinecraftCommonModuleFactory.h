#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

class ScriptMinecraftCommonModuleFactory {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMINECRAFTCOMMONMODULEFACTORY
public:
    ScriptMinecraftCommonModuleFactory& operator=(ScriptMinecraftCommonModuleFactory const&) = delete;
    ScriptMinecraftCommonModuleFactory(ScriptMinecraftCommonModuleFactory const&)            = delete;
    ScriptMinecraftCommonModuleFactory()                                                     = delete;
#endif

public:
    /**
     * @symbol ?addCommon\@ScriptMinecraftCommonModuleFactory\@\@QEAAXAEAVModuleBindingBuilder\@Scripting\@\@\@Z
     */
    MCAPI void addCommon(class Scripting::ModuleBindingBuilder&);
};
