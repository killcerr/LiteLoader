#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Closure.h"
#include "mc/external/scripting/TypedObjectHandle.h"
#include "mc/external/scripting/gametest/BaseScriptGameTestFunction.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleGameTest { class ScriptGameTestHelper; }
namespace Scripting { class WeakLifetimeScope; }
namespace gametest { class BaseGameTestHelper; }
namespace gametest { class IGameTestFunctionContext; }
namespace gametest { class IGameTestFunctionRunResult; }
// clang-format on

namespace ScriptModuleGameTest {

class SyncScriptGameTestFunction : public ::ScriptModuleGameTest::BaseScriptGameTestFunction {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEGAMETEST_SYNCSCRIPTGAMETESTFUNCTION
public:
    SyncScriptGameTestFunction& operator=(SyncScriptGameTestFunction const&) = delete;
    SyncScriptGameTestFunction(SyncScriptGameTestFunction const&)            = delete;
    SyncScriptGameTestFunction()                                             = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol
     * ?run\@SyncScriptGameTestFunction\@ScriptModuleGameTest\@\@UEBA?AV?$unique_ptr\@VIGameTestFunctionRunResult\@gametest\@\@U?$default_delete\@VIGameTestFunctionRunResult\@gametest\@\@\@std\@\@\@std\@\@AEAVBaseGameTestHelper\@gametest\@\@AEAVIGameTestFunctionContext\@6\@\@Z
     */
    virtual std::unique_ptr<class gametest::IGameTestFunctionRunResult>
    run(class gametest::BaseGameTestHelper&, class gametest::IGameTestFunctionContext&) const;
    /**
     * @symbol
     * ??0SyncScriptGameTestFunction\@ScriptModuleGameTest\@\@QEAA\@VWeakLifetimeScope\@Scripting\@\@V?$Closure\@$$A6AXU?$TypedObjectHandle\@VScriptGameTestHelper\@ScriptModuleGameTest\@\@\@Scripting\@\@\@Z$$V\@3\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI
    SyncScriptGameTestFunction(class Scripting::WeakLifetimeScope, class Scripting::Closure<void(struct Scripting::TypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestHelper>)>, std::string const&);
};

}; // namespace ScriptModuleGameTest
