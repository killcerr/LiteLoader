#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class ServerPlayerSleepManager {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERPLAYERSLEEPMANAGER
public:
    ServerPlayerSleepManager& operator=(ServerPlayerSleepManager const&) = delete;
    ServerPlayerSleepManager(ServerPlayerSleepManager const&)            = delete;
    ServerPlayerSleepManager()                                           = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?updateSleepingPlayerList\@ServerPlayerSleepManager\@\@UEAAXXZ
     */
    virtual void updateSleepingPlayerList();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERPLAYERSLEEPMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ServerPlayerSleepManager();
#endif
    /**
     * @symbol
     * ??0ServerPlayerSleepManager\@\@QEAA\@V?$not_null\@V?$NonOwnerPointer\@VGameplayUserManager\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI ServerPlayerSleepManager(class gsl::not_null<class Bedrock::NonOwnerPointer<class GameplayUserManager>>);
    /**
     * @symbol ?initializeWithPlayerDeathManager\@ServerPlayerSleepManager\@\@QEAAXAEAVPlayerDeathManager\@\@\@Z
     */
    MCAPI void initializeWithPlayerDeathManager(class PlayerDeathManager&);
    /**
     * @symbol
     * ?registerOnPlayerWakeUp\@ServerPlayerSleepManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEAVPlayer\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription registerOnPlayerWakeUp(class std::function<void(class Player&)>);
    /**
     * @symbol
     * ?registerOnSleepingPlayerListUpdated\@ServerPlayerSleepManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEBUPlayerSleepStatus\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription
        registerOnSleepingPlayerListUpdated(class std::function<void(struct PlayerSleepStatus const&)>);
    /**
     * @symbol
     * ?registerOnWakeUpAllPlayers\@ServerPlayerSleepManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription registerOnWakeUpAllPlayers(class std::function<void(void)>);
    /**
     * @symbol ?setShouldSendSleepMessage\@ServerPlayerSleepManager\@\@QEAAX_N\@Z
     */
    MCAPI void setShouldSendSleepMessage(bool);
    /**
     * @symbol ?shouldSendSleepMessage\@ServerPlayerSleepManager\@\@QEBA_NXZ
     */
    MCAPI bool shouldSendSleepMessage() const;
    /**
     * @symbol ?tickCheckToWakeUpPlayers\@ServerPlayerSleepManager\@\@QEAAXXZ
     */
    MCAPI void tickCheckToWakeUpPlayers();

    // private:
    /**
     * @symbol ?_awakenAllPlayers\@ServerPlayerSleepManager\@\@AEAAXXZ
     */
    MCAPI void _awakenAllPlayers();
    /**
     * @symbol ?_onPlayerDeath\@ServerPlayerSleepManager\@\@AEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void _onPlayerDeath(class Player&);

private:
};
