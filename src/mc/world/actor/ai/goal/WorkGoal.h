#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/MoveToPOIGoal.h"

class WorkGoal : public ::MoveToPOIGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORKGOAL
public:
    WorkGoal& operator=(WorkGoal const&) = delete;
    WorkGoal(WorkGoal const&)            = delete;
    WorkGoal()                           = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@WorkGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@WorkGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@WorkGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@WorkGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@WorkGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@WorkGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl 18
     * @symbol ?useWorkstation\@WorkGoal\@\@UEAAXXZ
     */
    virtual void useWorkstation();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORKGOAL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~WorkGoal();
#endif
    /**
     * @symbol ??0WorkGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI WorkGoal(class Mob&);
    /**
     * @symbol ?playPOISoundEvent\@WorkGoal\@\@QEBAXXZ
     */
    MCAPI void playPOISoundEvent() const;

    // private:
    /**
     * @symbol ?_isInsideOrIsNotRaining\@WorkGoal\@\@AEAA_NXZ
     */
    MCAPI bool _isInsideOrIsNotRaining();

private:
    /**
     * @symbol ?RAIN_CHECK_MAX_COOLDOWN\@WorkGoal\@\@0HB
     */
    MCAPI static int const RAIN_CHECK_MAX_COOLDOWN;
    /**
     * @symbol ?WORK_TIMESTAMP_UPDATE_INVERVAL\@WorkGoal\@\@0HB
     */
    MCAPI static int const WORK_TIMESTAMP_UPDATE_INVERVAL;
};
