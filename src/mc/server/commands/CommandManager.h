#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandManager {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDMANAGER
public:
    CommandManager& operator=(CommandManager const&) = delete;
    CommandManager(CommandManager const&)            = delete;
    CommandManager()                                 = delete;
#endif

public:
    /**
     * @symbol ??0CommandManager\@\@QEAA\@AEAVMinecraftCommands\@\@\@Z
     */
    MCAPI CommandManager(class MinecraftCommands&);
    /**
     * @symbol ?getCommands\@CommandManager\@\@QEAAAEAVMinecraftCommands\@\@XZ
     */
    MCAPI class MinecraftCommands& getCommands();
    /**
     * @symbol ?getFunctionManager\@CommandManager\@\@QEAAAEAVFunctionManager\@\@XZ
     */
    MCAPI class FunctionManager& getFunctionManager();
    /**
     * @symbol
     * ?initialize\@CommandManager\@\@QEAAXV?$unique_ptr\@VFunctionManager\@\@U?$default_delete\@VFunctionManager\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void initialize(std::unique_ptr<class FunctionManager>);
    /**
     * @symbol ?loadFunctionManager\@CommandManager\@\@QEAAXAEAVResourcePackManager\@\@\@Z
     */
    MCAPI void loadFunctionManager(class ResourcePackManager&);
    /**
     * @symbol ?runCommand\@CommandManager\@\@QEAAXAEAVCommand\@\@AEAVCommandOrigin\@\@W4CommandOriginSystem\@\@\@Z
     */
    MCAPI void runCommand(class Command&, class CommandOrigin&, enum class CommandOriginSystem);
    /**
     * @symbol
     * ?runCommand\@CommandManager\@\@QEAAXAEBVHashedString\@\@AEAVCommandOrigin\@\@W4CommandOriginSystem\@\@W4CurrentCmdVersion\@\@\@Z
     */
    MCAPI void runCommand(
        class HashedString const&,
        class CommandOrigin&,
        enum class CommandOriginSystem,
        enum class CurrentCmdVersion
    );
    /**
     * @symbol ?tick\@CommandManager\@\@QEAAXXZ
     */
    MCAPI void tick();
    /**
     * @symbol ??1CommandManager\@\@QEAA\@XZ
     */
    MCAPI ~CommandManager();
};
