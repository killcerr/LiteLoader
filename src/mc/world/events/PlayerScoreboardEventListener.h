#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerScoreboardEventListener {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERSCOREBOARDEVENTLISTENER
public:
    PlayerScoreboardEventListener& operator=(PlayerScoreboardEventListener const&) = delete;
    PlayerScoreboardEventListener(PlayerScoreboardEventListener const&)            = delete;
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
     * @symbol
     * ?onScoreChanged\@PlayerScoreboardEventListener\@\@UEAA?AW4EventResult\@\@AEBUScoreboardId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    virtual enum class EventResult onScoreChanged(struct ScoreboardId const&, std::string const&, int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERSCOREBOARDEVENTLISTENER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PlayerScoreboardEventListener();
#endif
    /**
     * @symbol ??0PlayerScoreboardEventListener\@\@QEAA\@XZ
     */
    MCAPI PlayerScoreboardEventListener();
    /**
     * @symbol
     * ?getPlayerSubscriptions\@PlayerScoreboardEventListener\@\@QEAAAEAVSubscribedObjectives\@\@AEBUScoreboardId\@\@AEBVPlayer\@\@\@Z
     */
    MCAPI class SubscribedObjectives& getPlayerSubscriptions(struct ScoreboardId const&, class Player const&);
    /**
     * @symbol ?removePlayerSubscriptions\@PlayerScoreboardEventListener\@\@QEAAXAEBUScoreboardId\@\@\@Z
     */
    MCAPI void removePlayerSubscriptions(struct ScoreboardId const&);
};
