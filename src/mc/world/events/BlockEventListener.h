#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockEventListener {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKEVENTLISTENER
public:
    BlockEventListener& operator=(BlockEventListener const&) = delete;
    BlockEventListener(BlockEventListener const&)            = delete;
    BlockEventListener()                                     = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKEVENTLISTENER
    /**
     * @symbol
     * ?onBlockDestroyedByPlayer\@BlockEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI enum class EventResult onBlockDestroyedByPlayer(class Player&, class Block const&, class BlockPos const&);
    /**
     * @symbol
     * ?onBlockDestructionStarted\@BlockEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVBlockPos\@\@E\@Z
     */
    MCVAPI enum class EventResult onBlockDestructionStarted(class Player&, class BlockPos const&, unsigned char);
    /**
     * @symbol
     * ?onBlockDestructionStopped\@BlockEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVBlockPos\@\@H\@Z
     */
    MCVAPI enum class EventResult onBlockDestructionStopped(class Player&, class BlockPos const&, int);
    /**
     * @symbol
     * ?onBlockExploded\@BlockEventListener\@\@UEAA?AW4EventResult\@\@AEAVDimension\@\@AEBVBlockPos\@\@AEBVBlock\@\@PEAVActor\@\@\@Z
     */
    MCVAPI enum class EventResult
    onBlockExploded(class Dimension&, class BlockPos const&, class Block const&, class Actor*);
    /**
     * @symbol
     * ?onBlockInPosWillBeDestroyedByPlayer\@BlockEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI enum class EventResult onBlockInPosWillBeDestroyedByPlayer(class Player&, class BlockPos const&);
    /**
     * @symbol ?onBlockInteractedWith\@BlockEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI enum class EventResult onBlockInteractedWith(class Player&, class BlockPos const&);
    /**
     * @symbol ?onBlockModified\@BlockEventListener\@\@UEAA?AW4EventResult\@\@AEBVBlockPos\@\@AEBVBlock\@\@1\@Z
     */
    MCVAPI enum class EventResult onBlockModified(class BlockPos const&, class Block const&, class Block const&);
    /**
     * @symbol ?onBlockMovedByPiston\@BlockEventListener\@\@UEAA?AW4EventResult\@\@AEBVBlockPos\@\@0W4PistonState\@\@\@Z
     */
    MCVAPI enum class EventResult
    onBlockMovedByPiston(class BlockPos const&, class BlockPos const&, enum class PistonState);
    /**
     * @symbol
     * ?onBlockPlacedByPlayer\@BlockEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVBlock\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCVAPI enum class EventResult onBlockPlacedByPlayer(class Player&, class Block const&, class BlockPos const&, bool);
    /**
     * @symbol ?onEvent\@BlockEventListener\@\@UEAA?AW4EventResult\@\@AEBUBlockNotificationEvent\@\@\@Z
     */
    MCVAPI enum class EventResult onEvent(struct BlockNotificationEvent const&);
    /**
     * @symbol ?onUnknownBlockReceived\@BlockEventListener\@\@UEAA?AW4EventResult\@\@AEAVLevel\@\@AEBUNewBlockID\@\@G\@Z
     */
    MCVAPI enum class EventResult onUnknownBlockReceived(class Level&, struct NewBlockID const&, unsigned short);
#endif
};
