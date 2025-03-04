#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptHealableComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTHEALABLECOMPONENT
public:
    ScriptHealableComponent& operator=(ScriptHealableComponent const&) = delete;
    ScriptHealableComponent(ScriptHealableComponent const&)            = delete;
    ScriptHealableComponent()                                          = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?_isValid\@?$ECSScriptActorComponent\@VHealableComponent\@\@VHealableDefinition\@\@\@ScriptModuleMinecraft\@\@MEBA_NXZ
     */
    virtual bool _isValid() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTHEALABLECOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptHealableComponent();
#endif
    /**
     * @symbol
     * ??0ScriptHealableComponent\@ScriptModuleMinecraft\@\@QEAA\@AEBVWeakEntityRef\@\@AEBVWeakLifetimeScope\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI
    ScriptHealableComponent(class WeakEntityRef const&, class Scripting::WeakLifetimeScope const&, std::string const&);
    /**
     * @symbol
     * ?getFilters\@ScriptHealableComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@VActorFilterGroup\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<class ActorFilterGroup> getFilters() const;
    /**
     * @symbol ?getForceUse\@ScriptHealableComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<bool> getForceUse() const;
    /**
     * @symbol
     * ?getItems\@ScriptHealableComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$vector\@UFeedItem\@\@V?$allocator\@UFeedItem\@\@\@std\@\@\@std\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<std::vector<struct FeedItem>> getItems() const;
    /**
     * @symbol ?ComponentId\@ScriptHealableComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId;
    /**
     * @symbol
     * ?bind\@ScriptHealableComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptHealableComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptHealableComponent> bind();
};

}; // namespace ScriptModuleMinecraft
