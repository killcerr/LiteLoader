#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptEventCommandMessageAfterEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTEVENTCOMMANDMESSAGEAFTEREVENT
public:
    ScriptEventCommandMessageAfterEvent& operator=(ScriptEventCommandMessageAfterEvent const&) = delete;
    ScriptEventCommandMessageAfterEvent()                                                      = delete;
#endif

public:
    /**
     * @symbol ??0ScriptEventCommandMessageAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@$$QEAU01\@\@Z
     */
    MCAPI ScriptEventCommandMessageAfterEvent(struct ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent&&);
    /**
     * @symbol ??0ScriptEventCommandMessageAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI ScriptEventCommandMessageAfterEvent(struct ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent const&);
    /**
     * @symbol ??4ScriptEventCommandMessageAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent&&);
    /**
     * @symbol ??1ScriptEventCommandMessageAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptEventCommandMessageAfterEvent();
    /**
     * @symbol
     * ?bind\@ScriptEventCommandMessageAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptEventCommandMessageAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent>
    bind();
};

}; // namespace ScriptModuleMinecraft
