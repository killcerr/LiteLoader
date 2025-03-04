#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActorType; }
namespace ScriptModuleMinecraft { class ScriptDynamicPropertiesDefinition; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPropertyRegistry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTPROPERTYREGISTRY
public:
    ScriptPropertyRegistry& operator=(ScriptPropertyRegistry const&) = delete;
    ScriptPropertyRegistry(ScriptPropertyRegistry const&)            = delete;
    ScriptPropertyRegistry()                                         = delete;
#endif

public:
    /**
     * @symbol ??0ScriptPropertyRegistry\@ScriptModuleMinecraft\@\@QEAA\@AEAVServerLevel\@\@\@Z
     */
    MCAPI ScriptPropertyRegistry(class ServerLevel&);
    /**
     * @symbol
     * ?registerEntityTypeDynamicProperties\@ScriptPropertyRegistry\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBVScriptDynamicPropertiesDefinition\@2\@AEAVScriptActorType\@2\@\@Z
     */
    MCAPI class Scripting::Result<void>
    registerEntityTypeDynamicProperties(class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition const&, class ScriptModuleMinecraft::ScriptActorType&);
    /**
     * @symbol
     * ?registerWorldDynamicProperties\@ScriptPropertyRegistry\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBVScriptDynamicPropertiesDefinition\@2\@\@Z
     */
    MCAPI class Scripting::Result<void>
    registerWorldDynamicProperties(class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition const&);
    /**
     * @symbol
     * ?bind\@ScriptPropertyRegistry\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptPropertyRegistry\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptPropertyRegistry> bind();
};

}; // namespace ScriptModuleMinecraft
