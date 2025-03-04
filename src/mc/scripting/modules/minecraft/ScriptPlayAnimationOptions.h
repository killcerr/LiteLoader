#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayAnimationOptions {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTPLAYANIMATIONOPTIONS
public:
    ScriptPlayAnimationOptions() = delete;
#endif

public:
    /**
     * @symbol ??0ScriptPlayAnimationOptions\@ScriptModuleMinecraft\@\@QEAA\@$$QEAU01\@\@Z
     */
    MCAPI ScriptPlayAnimationOptions(struct ScriptModuleMinecraft::ScriptPlayAnimationOptions&&);
    /**
     * @symbol ??0ScriptPlayAnimationOptions\@ScriptModuleMinecraft\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI ScriptPlayAnimationOptions(struct ScriptModuleMinecraft::ScriptPlayAnimationOptions const&);
    /**
     * @symbol ??4ScriptPlayAnimationOptions\@ScriptModuleMinecraft\@\@QEAAAEAU01\@AEBU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptPlayAnimationOptions&
    operator=(struct ScriptModuleMinecraft::ScriptPlayAnimationOptions const&);
    /**
     * @symbol ??4ScriptPlayAnimationOptions\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptPlayAnimationOptions&
    operator=(struct ScriptModuleMinecraft::ScriptPlayAnimationOptions&&);
    /**
     * @symbol ??1ScriptPlayAnimationOptions\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptPlayAnimationOptions();
    /**
     * @symbol
     * ?bind\@ScriptPlayAnimationOptions\@ScriptModuleMinecraft\@\@SA?AV?$InterfaceBindingBuilder\@UScriptPlayAnimationOptions\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptPlayAnimationOptions>
    bind();
};

}; // namespace ScriptModuleMinecraft
