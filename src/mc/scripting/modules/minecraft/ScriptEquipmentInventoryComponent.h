#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptContainerSlot; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEquipmentInventoryComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTEQUIPMENTINVENTORYCOMPONENT
public:
    ScriptEquipmentInventoryComponent& operator=(ScriptEquipmentInventoryComponent const&) = delete;
    ScriptEquipmentInventoryComponent(ScriptEquipmentInventoryComponent const&)            = delete;
    ScriptEquipmentInventoryComponent()                                                    = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTEQUIPMENTINVENTORYCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptEquipmentInventoryComponent();
#endif
    /**
     * @symbol
     * ?getEquipment\@ScriptEquipmentInventoryComponent\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@V?$optional\@V?$StrongTypedObjectHandle\@VScriptItemStack\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@std\@\@\@Scripting\@\@W4EquipmentSlot\@\@\@Z
     */
    MCAPI class Scripting::Result<
        class std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>>
        getEquipment(enum class EquipmentSlot);
    /**
     * @symbol
     * ?getEquipmentSlot\@ScriptEquipmentInventoryComponent\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptContainerSlot\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@W4EquipmentSlot\@\@\@Z
     */
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptContainerSlot>>
        getEquipmentSlot(enum class EquipmentSlot);
    /**
     * @symbol
     * ?setEquipment\@ScriptEquipmentInventoryComponent\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@W4EquipmentSlot\@\@AEBV?$optional\@VScriptItemStack\@ScriptModuleMinecraft\@\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<void>
    setEquipment(enum class EquipmentSlot, class std::optional<class ScriptModuleMinecraft::ScriptItemStack> const&);
    /**
     * @symbol ?ComponentId\@ScriptEquipmentInventoryComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId;
    /**
     * @symbol
     * ?bind\@ScriptEquipmentInventoryComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptEquipmentInventoryComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptEquipmentInventoryComponent>
    bind();
};

}; // namespace ScriptModuleMinecraft
