#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptBlockProperty {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_ISCRIPTBLOCKPROPERTY
public:
    IScriptBlockProperty& operator=(IScriptBlockProperty const&) = delete;
    IScriptBlockProperty(IScriptBlockProperty const&)            = delete;
    IScriptBlockProperty()                                       = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_ISCRIPTBLOCKPROPERTY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IScriptBlockProperty();
#endif
    /**
     * @symbol ??0IScriptBlockProperty\@ScriptModuleMinecraft\@\@QEAA\@$$QEAV01\@\@Z
     */
    MCAPI IScriptBlockProperty(class ScriptModuleMinecraft::IScriptBlockProperty&&);
    /**
     * @symbol
     * ??0IScriptBlockProperty\@ScriptModuleMinecraft\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlockState\@\@V?$StrongTypedObjectHandle\@VScriptBlockPermutation\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCAPI
    IScriptBlockProperty(std::string, class BlockState const&, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>);
    /**
     * @symbol ??4IScriptBlockProperty\@ScriptModuleMinecraft\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::IScriptBlockProperty&
    operator=(class ScriptModuleMinecraft::IScriptBlockProperty&&);
    /**
     * @symbol
     * ?bindV010\@IScriptBlockProperty\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VIScriptBlockProperty\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::IScriptBlockProperty> bindV010();
};

}; // namespace ScriptModuleMinecraft
