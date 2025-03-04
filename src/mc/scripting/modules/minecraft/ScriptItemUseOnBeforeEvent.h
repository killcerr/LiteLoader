#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemUseOnBeforeEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTITEMUSEONBEFOREEVENT
public:
    ScriptItemUseOnBeforeEvent& operator=(ScriptItemUseOnBeforeEvent const&) = delete;
    ScriptItemUseOnBeforeEvent()                                             = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTITEMUSEONBEFOREEVENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptItemUseOnBeforeEvent();
#endif
    /**
     * @symbol
     * ??0ScriptItemUseOnBeforeEvent\@ScriptModuleMinecraft\@\@QEAA\@AEAUItemUseOnEvent\@\@AEBVWeakLifetimeScope\@Scripting\@\@\@Z
     */
    MCAPI ScriptItemUseOnBeforeEvent(struct ItemUseOnEvent&, class Scripting::WeakLifetimeScope const&);
    /**
     * @symbol ??0ScriptItemUseOnBeforeEvent\@ScriptModuleMinecraft\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI ScriptItemUseOnBeforeEvent(struct ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent const&);
    /**
     * @symbol ??0ScriptItemUseOnBeforeEvent\@ScriptModuleMinecraft\@\@QEAA\@$$QEAU01\@\@Z
     */
    MCAPI ScriptItemUseOnBeforeEvent(struct ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent&&);
    /**
     * @symbol ??4ScriptItemUseOnBeforeEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent&&);
    /**
     * @symbol
     * ?bind\@ScriptItemUseOnBeforeEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptItemUseOnBeforeEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent> bind();
    /**
     * @symbol
     * ?bindV010\@ScriptItemUseOnBeforeEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptItemUseOnBeforeEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemUseOnBeforeEvent>
    bindV010();
};

}; // namespace ScriptModuleMinecraft
