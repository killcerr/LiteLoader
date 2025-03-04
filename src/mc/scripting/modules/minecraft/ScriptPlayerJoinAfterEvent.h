#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerJoinAfterEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTPLAYERJOINAFTEREVENT
public:
    ScriptPlayerJoinAfterEvent& operator=(ScriptPlayerJoinAfterEvent const&) = delete;
    ScriptPlayerJoinAfterEvent(ScriptPlayerJoinAfterEvent const&)            = delete;
    ScriptPlayerJoinAfterEvent()                                             = delete;
#endif

public:
    /**
     * @symbol ??0ScriptPlayerJoinAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@$$QEAU01\@\@Z
     */
    MCAPI ScriptPlayerJoinAfterEvent(struct ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent&&);
    /**
     * @symbol ??4ScriptPlayerJoinAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent&&);
    /**
     * @symbol ??1ScriptPlayerJoinAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptPlayerJoinAfterEvent();
    /**
     * @symbol
     * ?bind\@ScriptPlayerJoinAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptPlayerJoinAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent> bind();
    /**
     * @symbol
     * ?bindV010\@ScriptPlayerJoinAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptPlayerJoinAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent>
    bindV010();
};

}; // namespace ScriptModuleMinecraft
