#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class BossEventSubscriptionManagerImpl {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOSSEVENTSUBSCRIPTIONMANAGERIMPL
public:
    BossEventSubscriptionManagerImpl& operator=(BossEventSubscriptionManagerImpl const&) = delete;
    BossEventSubscriptionManagerImpl(BossEventSubscriptionManagerImpl const&)            = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BOSSEVENTSUBSCRIPTIONMANAGERIMPL
    /**
     * @symbol ?areBossEventSubscribersReady\@BossEventSubscriptionManagerImpl\@\@UEBA_NXZ
     */
    MCVAPI bool areBossEventSubscribersReady() const;
    /**
     * @symbol ?broadcastBossEvent\@BossEventSubscriptionManagerImpl\@\@UEAAXW4BossEventUpdateType\@\@\@Z
     */
    MCVAPI void broadcastBossEvent(enum class BossEventUpdateType);
    /**
     * @symbol
     * ?broadcastBossEvent\@BossEventSubscriptionManagerImpl\@\@UEAAXW4BossEventUpdateType\@\@AEBUActorUniqueID\@\@AEBVBossEventPacket\@\@\@Z
     */
    MCVAPI void
    broadcastBossEvent(enum class BossEventUpdateType, struct ActorUniqueID const&, class BossEventPacket const&);
    /**
     * @symbol
     * ?subscribeToBossEvent\@BossEventSubscriptionManagerImpl\@\@UEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXW4BossEventUpdateType\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI class Bedrock::PubSub::Subscription
        subscribeToBossEvent(class std::function<void(enum class BossEventUpdateType)>);
    /**
     * @symbol
     * ?subscribeToBossEvent\@BossEventSubscriptionManagerImpl\@\@UEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXW4BossEventUpdateType\@\@AEBUActorUniqueID\@\@AEBVBossEventPacket\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI class Bedrock::PubSub::Subscription
        subscribeToBossEvent(class std::function<
                             void(enum class BossEventUpdateType, struct ActorUniqueID const&, class BossEventPacket const&)>);
#endif
    /**
     * @symbol ??0BossEventSubscriptionManagerImpl\@\@QEAA\@XZ
     */
    MCAPI BossEventSubscriptionManagerImpl();
};
