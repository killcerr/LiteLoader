#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ScriptEngine; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

class ServerScriptManager {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERSCRIPTMANAGER
public:
    ServerScriptManager& operator=(ServerScriptManager const&) = delete;
    ServerScriptManager(ServerScriptManager const&)            = delete;
    ServerScriptManager()                                      = delete;
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
     * ?onServerLevelInitialized\@ServerScriptManager\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@AEAVLevel\@\@\@Z
     */
    virtual enum class EventResult onServerLevelInitialized(class ServerInstance&, class Level&);
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol ?onServerUpdateStart\@ServerScriptManager\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@\@Z
     */
    virtual enum class EventResult onServerUpdateStart(class ServerInstance&);
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl 9
     * @symbol ?onServerThreadStarted\@ServerScriptManager\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@\@Z
     */
    virtual enum class EventResult onServerThreadStarted(class ServerInstance&);
    /**
     * @vftbl 10
     * @symbol ?onServerThreadStopped\@ServerScriptManager\@\@UEAA?AW4EventResult\@\@AEAVServerInstance\@\@\@Z
     */
    virtual enum class EventResult onServerThreadStopped(class ServerInstance&);
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl 12
     * @symbol ?onEvent\@ServerScriptManager\@\@UEAA?AW4EventResult\@\@AEBUServerInstanceRequestResourceReload\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ServerInstanceRequestResourceReload const&);
    /**
     * @vftbl 13
     * @symbol
     * ?onEvent\@?$EventListenerDispatcher\@VServerInstanceEventListener\@\@\@\@MEAA?AW4EventResult\@\@AEBUServerInstanceNotificationEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ServerInstanceNotificationEvent const&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERSCRIPTMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ServerScriptManager();
#endif
    /**
     * @symbol
     * ??0ServerScriptManager\@\@QEAA\@UScriptSettings\@\@V?$NonOwnerPointer\@VScheduler\@\@\@Bedrock\@\@AEAVIMinecraftEventing\@\@_N\@Z
     */
    MCAPI ServerScriptManager(
        struct ScriptSettings,
        class Bedrock::NonOwnerPointer<class Scheduler>,
        class IMinecraftEventing&,
        bool
    );
    /**
     * @symbol
     * ?addModuleFilter\@ServerScriptManager\@\@QEAAXAEBV?$function\@$$A6A_NAEBVPackManifest\@\@AEBUModuleDescriptor\@Scripting\@\@1AEAVScriptPluginResult\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void
    addModuleFilter(class std::function<
                    bool(class PackManifest const&, struct Scripting::ModuleDescriptor const&, struct Scripting::ModuleDescriptor const&, class ScriptPluginResult&)> const&);
    /**
     * @symbol ?getScriptEngine\@ServerScriptManager\@\@QEAAAEAVScriptEngine\@Scripting\@\@XZ
     */
    MCAPI class Scripting::ScriptEngine& getScriptEngine();
    /**
     * @symbol ?getScriptSettings\@ServerScriptManager\@\@QEAAAEAUScriptSettings\@\@XZ
     */
    MCAPI struct ScriptSettings& getScriptSettings();
    /**
     * @symbol ?onMainThreadStartLeaveGame\@ServerScriptManager\@\@QEAAXXZ
     */
    MCAPI void onMainThreadStartLeaveGame();

    // private:
    /**
     * @symbol ?_loadAndRunAllPlugins\@ServerScriptManager\@\@AEAA_NAEAVServerInstance\@\@AEAVServerLevel\@\@\@Z
     */
    MCAPI bool _loadAndRunAllPlugins(class ServerInstance&, class ServerLevel&);
    /**
     * @symbol ?_registerEventHandlers\@ServerScriptManager\@\@AEBAXAEAVLevel\@\@\@Z
     */
    MCAPI void _registerEventHandlers(class Level&) const;
    /**
     * @symbol ?_unregisterEventHandlers\@ServerScriptManager\@\@AEBAXAEAVLevel\@\@\@Z
     */
    MCAPI void _unregisterEventHandlers(class Level&) const;
    /**
     * @symbol
     * ?_sendWorldInitializeEvent\@ServerScriptManager\@\@CAXAEAVServerLevel\@\@VWeakLifetimeScope\@Scripting\@\@\@Z
     */
    MCAPI static void _sendWorldInitializeEvent(class ServerLevel&, class Scripting::WeakLifetimeScope);

private:
};
