#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptContainer.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptContainer; }
namespace ScriptModuleMinecraft { class ScriptContainerSlot; }
namespace ScriptModuleMinecraft { class ScriptContainerWrapper; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPlayerInventoryComponentContainer : public ::ScriptModuleMinecraft::ScriptContainer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTPLAYERINVENTORYCOMPONENTCONTAINER
public:
    ScriptPlayerInventoryComponentContainer& operator=(ScriptPlayerInventoryComponentContainer const&) = delete;
    ScriptPlayerInventoryComponentContainer(ScriptPlayerInventoryComponentContainer const&)            = delete;
    ScriptPlayerInventoryComponentContainer()                                                          = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 13
     * @symbol
     * ?_tryGetContainer\@ScriptPlayerInventoryComponentContainer\@ScriptModuleMinecraft\@\@MEBAPEAVContainer\@\@XZ
     */
    virtual class Container* _tryGetContainer() const;
    /**
     * @vftbl 14
     * @symbol
     * ?_getItemContext\@ScriptPlayerInventoryComponentContainer\@ScriptModuleMinecraft\@\@MEBA?AVItemContext\@\@H\@Z
     */
    virtual class ItemContext _getItemContext(int) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTPLAYERINVENTORYCOMPONENTCONTAINER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptPlayerInventoryComponentContainer();
#endif
    /**
     * @symbol
     * ??0ScriptPlayerInventoryComponentContainer\@ScriptModuleMinecraft\@\@QEAA\@AEBVWeakEntityRef\@\@AEBVWeakLifetimeScope\@Scripting\@\@\@Z
     */
    MCAPI
    ScriptPlayerInventoryComponentContainer(class WeakEntityRef const&, class Scripting::WeakLifetimeScope const&);
    /**
     * @symbol
     * ?bindV010\@ScriptPlayerInventoryComponentContainer\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptPlayerInventoryComponentContainer\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<
        class ScriptModuleMinecraft::ScriptPlayerInventoryComponentContainer>
    bindV010();
};

}; // namespace ScriptModuleMinecraft
