#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/MeleeAttackGoal.h"

class DelayedAttackGoal : public ::MeleeAttackGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DELAYEDATTACKGOAL
public:
    DelayedAttackGoal& operator=(DelayedAttackGoal const&) = delete;
    DelayedAttackGoal(DelayedAttackGoal const&)            = delete;
    DelayedAttackGoal()                                    = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@DelayedAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@DelayedAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@DelayedAttackGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@DelayedAttackGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@DelayedAttackGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@DelayedAttackGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
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
     * @vftbl 10
     * @symbol ?_attemptMoveToTarget\@DelayedAttackGoal\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void _attemptMoveToTarget(class Actor&);
    /**
     * @symbol ??0DelayedAttackGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI DelayedAttackGoal(class Mob&);
    /**
     * @symbol ?isTargetInLineOfSightLegacy\@DelayedAttackGoal\@\@SA_NAEBVMob\@\@AEBVActor\@\@\@Z
     */
    MCAPI static bool isTargetInLineOfSightLegacy(class Mob const&, class Actor const&);
    /**
     * @symbol ?mMinLineOfSightFixVersion\@DelayedAttackGoal\@\@2VBaseGameVersion\@\@B
     */
    MCAPI static class BaseGameVersion const mMinLineOfSightFixVersion;

    // private:
    /**
     * @symbol ?_attemptStartAttacking\@DelayedAttackGoal\@\@AEBAXPEAVActor\@\@\@Z
     */
    MCAPI void _attemptStartAttacking(class Actor*) const;
    /**
     * @symbol ?_manageAttackTime\@DelayedAttackGoal\@\@AEAAXXZ
     */
    MCAPI void _manageAttackTime();

private:
};
