#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VanillaGameModuleDedicatedServer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAGAMEMODULEDEDICATEDSERVER
public:
    VanillaGameModuleDedicatedServer& operator=(VanillaGameModuleDedicatedServer const&) = delete;
    VanillaGameModuleDedicatedServer(VanillaGameModuleDedicatedServer const&)            = delete;
    VanillaGameModuleDedicatedServer()                                                   = delete;
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
     * ?createGameModuleServer\@VanillaGameModuleDedicatedServer\@\@UEAA?AV?$unique_ptr\@VGameModuleServer\@\@U?$default_delete\@VGameModuleServer\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class GameModuleServer> createGameModuleServer();
    /**
     * @vftbl 2
     * @symbol
     * ?createInPackagePacks\@VanillaGameModuleDedicatedServer\@\@UEAA?AV?$shared_ptr\@VIInPackagePacks\@\@\@std\@\@XZ
     */
    virtual class std::shared_ptr<class IInPackagePacks> createInPackagePacks();
    /**
     * @vftbl 3
     * @symbol ?registerMolangQueries\@VanillaGameModuleDedicatedServer\@\@UEAAXXZ
     */
    virtual void registerMolangQueries();
    /**
     * @vftbl 4
     * @symbol
     * ?registerServerInstanceHandler\@VanillaGameModuleDedicatedServer\@\@UEAAXAEAVServerInstanceEventCoordinator\@\@\@Z
     */
    virtual void registerServerInstanceHandler(class ServerInstanceEventCoordinator&);
};
