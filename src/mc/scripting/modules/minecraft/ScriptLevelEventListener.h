#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/TypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IScriptAfterEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLevelEventListener {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTLEVELEVENTLISTENER
public:
    ScriptLevelEventListener& operator=(ScriptLevelEventListener const&) = delete;
    ScriptLevelEventListener(ScriptLevelEventListener const&)            = delete;
    ScriptLevelEventListener()                                           = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol
     * ?onLevelAddedPlayer\@ScriptLevelEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEAVLevel\@\@AEAVPlayer\@\@\@Z
     */
    virtual enum class EventResult onLevelAddedPlayer(class Level&, class Player&);
    /**
     * @vftbl 3
     * @symbol
     * ?onLevelRemovedPlayer\@ScriptLevelEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEAVLevel\@\@AEAVPlayer\@\@\@Z
     */
    virtual enum class EventResult onLevelRemovedPlayer(class Level&, class Player&);
    /**
     * @vftbl 4
     * @symbol
     * ?onLevelRemovedActor\@ScriptLevelEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEAVLevel\@\@AEAVActor\@\@\@Z
     */
    virtual enum class EventResult onLevelRemovedActor(class Level&, class Actor&);
    /**
     * @vftbl 5
     * @symbol ?onLevelTick\@ScriptLevelEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEAVLevel\@\@\@Z
     */
    virtual enum class EventResult onLevelTick(class Level&);
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl 7
     * @symbol
     * ?onLevelWeatherChange\@ScriptLevelEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N1\@Z
     */
    virtual enum class EventResult onLevelWeatherChange(std::string const&, bool, bool);
    /**
     * @vftbl 8
     * @symbol
     * ?onEvent\@ScriptLevelEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBULevelStartLeaveGameEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct LevelStartLeaveGameEvent const&);
    /**
     * @vftbl 9
     * @symbol
     * ?onEvent\@ScriptLevelEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUScriptingInitializeEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ScriptingInitializeEvent const&);
    /**
     * @vftbl 10
     * @symbol
     * ?onEvent\@?$EventListenerDispatcher\@VLevelEventListener\@\@\@\@MEAA?AW4EventResult\@\@AEBULevelNotificationEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct LevelNotificationEvent const&);
    /**
     * @symbol
     * ??0ScriptLevelEventListener\@ScriptModuleMinecraft\@\@QEAA\@AEBVWeakLifetimeScope\@Scripting\@\@U?$TypedObjectHandle\@VIScriptAfterEvents\@ScriptModuleMinecraft\@\@\@3\@_N\@Z
     */
    MCAPI ScriptLevelEventListener(
        class Scripting::WeakLifetimeScope const&,
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptAfterEvents>,
        bool
    );
};

}; // namespace ScriptModuleMinecraft
