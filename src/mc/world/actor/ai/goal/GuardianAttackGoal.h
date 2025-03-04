#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GuardianAttackGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GUARDIANATTACKGOAL
public:
    GuardianAttackGoal& operator=(GuardianAttackGoal const&) = delete;
    GuardianAttackGoal(GuardianAttackGoal const&)            = delete;
    GuardianAttackGoal()                                     = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@GuardianAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@GuardianAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@GuardianAttackGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@GuardianAttackGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@GuardianAttackGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@GuardianAttackGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0GuardianAttackGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI GuardianAttackGoal(class Mob&);
};
