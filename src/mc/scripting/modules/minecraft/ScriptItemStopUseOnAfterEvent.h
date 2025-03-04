#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptItemStopUseOnAfterEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTITEMSTOPUSEONAFTEREVENT
public:
    ScriptItemStopUseOnAfterEvent& operator=(ScriptItemStopUseOnAfterEvent const&) = delete;
    ScriptItemStopUseOnAfterEvent()                                                = delete;
#endif

public:
    /**
     * @symbol ??0ScriptItemStopUseOnAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI ScriptItemStopUseOnAfterEvent(struct ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent const&);
    /**
     * @symbol ??4ScriptItemStopUseOnAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent&&);
    /**
     * @symbol ??1ScriptItemStopUseOnAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptItemStopUseOnAfterEvent();
    /**
     * @symbol
     * ?bind\@ScriptItemStopUseOnAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptItemStopUseOnAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent>
    bind();
};

}; // namespace ScriptModuleMinecraft
