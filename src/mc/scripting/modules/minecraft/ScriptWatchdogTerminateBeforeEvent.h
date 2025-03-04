#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWatchdogTerminateBeforeEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTWATCHDOGTERMINATEBEFOREEVENT
public:
    ScriptWatchdogTerminateBeforeEvent& operator=(ScriptWatchdogTerminateBeforeEvent const&) = delete;
    ScriptWatchdogTerminateBeforeEvent(ScriptWatchdogTerminateBeforeEvent const&)            = delete;
    ScriptWatchdogTerminateBeforeEvent()                                                     = delete;
#endif

public:
    /**
     * @symbol
     * ??0ScriptWatchdogTerminateBeforeEvent\@ScriptModuleMinecraft\@\@QEAA\@AEBUBeforeWatchdogTerminateEvent\@\@AEBVWeakLifetimeScope\@Scripting\@\@\@Z
     */
    MCAPI
    ScriptWatchdogTerminateBeforeEvent(struct BeforeWatchdogTerminateEvent const&, class Scripting::WeakLifetimeScope const&);
    /**
     * @symbol
     * ?bind\@ScriptWatchdogTerminateBeforeEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptWatchdogTerminateBeforeEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptWatchdogTerminateBeforeEvent>
    bind();
};

}; // namespace ScriptModuleMinecraft
