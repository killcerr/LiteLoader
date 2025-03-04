#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/pubsub/DeferredSubscriptionHub.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class DeferredSubscription; }
namespace Bedrock::PubSub { class RawSubscription; }
namespace Bedrock::PubSub { enum class ConnectPosition; }
// clang-format on

namespace Bedrock::PubSub {

class DeferredSubscriptionHubBase {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_PUBSUB_DEFERREDSUBSCRIPTIONHUBBASE
public:
    DeferredSubscriptionHubBase& operator=(DeferredSubscriptionHubBase const&) = delete;
    DeferredSubscriptionHubBase(DeferredSubscriptionHubBase const&)            = delete;
    DeferredSubscriptionHubBase()                                              = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?runDeferredEvents\@DeferredSubscriptionHubBase\@PubSub\@Bedrock\@\@UEAA_K_K\@Z
     */
    virtual unsigned __int64 runDeferredEvents(unsigned __int64);
    /**
     * @vftbl 2
     * @symbol
     * ?runDeferredEventsForDuration\@DeferredSubscriptionHubBase\@PubSub\@Bedrock\@\@UEAA_KV?$duration\@_JU?$ratio\@$00$0DOI\@\@std\@\@\@chrono\@std\@\@\@Z
     */
    virtual unsigned __int64
        runDeferredEventsForDuration(class std::chrono::duration<__int64, struct std::ratio<1, 1000>>);
    /**
     * @vftbl 3
     * @symbol ?flushPendingEvents\@PriorityDeferredSubscriptionHub\@PubSub\@Bedrock\@\@UEAAXXZ
     */
    virtual void flushPendingEvents() = 0;
    /**
     * @vftbl 4
     * @symbol ?clear\@DeferredSubscriptionHubBase\@PubSub\@Bedrock\@\@UEAAXXZ
     */
    virtual void clear();
    /**
     * @vftbl 5
     * @symbol ?erase\@DeferredSubscriptionHubBase\@PubSub\@Bedrock\@\@UEAA_KAEAVRawSubscription\@23\@\@Z
     */
    virtual unsigned __int64 erase(class Bedrock::PubSub::RawSubscription&);
    /**
     * @vftbl 6
     * @symbol ?size\@DeferredSubscriptionHubBase\@PubSub\@Bedrock\@\@UEBA_KXZ
     */
    virtual unsigned __int64 size() const;
    /**
     * @vftbl 7
     * @symbol ?empty\@DeferredSubscriptionHubBase\@PubSub\@Bedrock\@\@UEBA_NXZ
     */
    virtual bool empty() const;
    /**
     * @vftbl 8
     * @symbol
     * ?getHubType\@PriorityDeferredSubscriptionHub\@PubSub\@Bedrock\@\@UEBA?AW4HubType\@DeferredSubscriptionHub\@23\@XZ
     */
    virtual enum class Bedrock::PubSub::DeferredSubscriptionHub::HubType getHubType() const = 0;
    /**
     * @vftbl 9
     * @symbol ?_join\@DeferredSubscriptionHubBase\@PubSub\@Bedrock\@\@EEAAX$$QEAVDeferredSubscription\@23\@\@Z
     */
    virtual void _join(class Bedrock::PubSub::DeferredSubscription&&);
    /**
     * @vftbl 10
     * @symbol
     * ?_enqueue\@PriorityDeferredSubscriptionHub\@PubSub\@Bedrock\@\@EEAAXV?$function\@$$A6AXXZ\@std\@\@W4ConnectPosition\@23\@V?$optional\@H\@5\@\@Z
     */
    virtual void
        _enqueue(class std::function<void(void)>, enum class Bedrock::PubSub::ConnectPosition, class std::optional<int>) = 0;
    /**
     * @vftbl 11
     * @symbol ?_runOneEvent\@PriorityDeferredSubscriptionHub\@PubSub\@Bedrock\@\@EEAA_NXZ
     */
    virtual bool _runOneEvent() = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_PUBSUB_DEFERREDSUBSCRIPTIONHUBBASE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DeferredSubscriptionHubBase();
#endif
};

}; // namespace Bedrock::PubSub
