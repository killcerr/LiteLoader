#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

// auto generated forward declare list
// clang-format off
namespace gametest { struct TestParameters; }
// clang-format on

class GameTestCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETESTCOMMAND
public:
    GameTestCommand& operator=(GameTestCommand const&) = delete;
    GameTestCommand(GameTestCommand const&)            = delete;
    GameTestCommand()                                  = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@GameTestCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?addGameTestNameEnums\@GameTestCommand\@\@SAXAEAVMinecraftGameTest\@\@AEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void addGameTestNameEnums(class MinecraftGameTest&, class CommandRegistry&);
    /**
     * @symbol ?setup\@GameTestCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);

    // private:
    /**
     * @symbol
     * ?_createTestParameters\@GameTestCommand\@\@AEBA?AUTestParameters\@gametest\@\@AEAVBlockSource\@\@AEBVCommandOrigin\@\@\@Z
     */
    MCAPI struct gametest::TestParameters _createTestParameters(class BlockSource&, class CommandOrigin const&) const;
    /**
     * @symbol
     * ?_handleCreateTest\@GameTestCommand\@\@AEBAXAEAVBlockSource\@\@AEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _handleCreateTest(class BlockSource&, class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol
     * ?_handleRun\@GameTestCommand\@\@AEBAXAEAVMinecraftGameTest\@\@AEAVBlockSource\@\@AEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void
    _handleRun(class MinecraftGameTest&, class BlockSource&, class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol
     * ?_handleRunNearbyTests\@GameTestCommand\@\@AEBAXAEAVMinecraftGameTest\@\@AEAVBlockSource\@\@AEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void
    _handleRunNearbyTests(class MinecraftGameTest&, class BlockSource&, class CommandOrigin const&, class CommandOutput&)
        const;
    /**
     * @symbol
     * ?_handleRunSet\@GameTestCommand\@\@AEBAXAEAVMinecraftGameTest\@\@AEAVBlockSource\@\@AEBVCommandOrigin\@\@AEAVCommandOutput\@\@_N\@Z
     */
    MCAPI void
    _handleRunSet(class MinecraftGameTest&, class BlockSource&, class CommandOrigin const&, class CommandOutput&, bool)
        const;
    /**
     * @symbol
     * ?_handleRunThis\@GameTestCommand\@\@AEBAXAEAVMinecraftGameTest\@\@AEAVBlockSource\@\@AEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void
    _handleRunThis(class MinecraftGameTest&, class BlockSource&, class CommandOrigin const&, class CommandOutput&)
        const;
    /**
     * @symbol
     * ?_handleShowPosition\@GameTestCommand\@\@AEBAXAEAVBlockSource\@\@AEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _handleShowPosition(class BlockSource&, class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol
     * ?_runTestAt\@GameTestCommand\@\@AEBAXAEAVMinecraftGameTest\@\@AEAVBlockSource\@\@PEAVCommandOutput\@\@AEBVBlockPos\@\@V?$optional\@W4Rotation\@\@\@std\@\@\@Z
     */
    MCAPI void
    _runTestAt(class MinecraftGameTest&, class BlockSource&, class CommandOutput*, class BlockPos const&, class std::optional<enum class Rotation>)
        const;

private:
};
