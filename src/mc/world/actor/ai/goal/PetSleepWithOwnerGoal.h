#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PetSleepWithOwnerGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PETSLEEPWITHOWNERGOAL
public:
    PetSleepWithOwnerGoal& operator=(PetSleepWithOwnerGoal const&) = delete;
    PetSleepWithOwnerGoal(PetSleepWithOwnerGoal const&)            = delete;
    PetSleepWithOwnerGoal()                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@PetSleepWithOwnerGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@PetSleepWithOwnerGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@PetSleepWithOwnerGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@PetSleepWithOwnerGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@PetSleepWithOwnerGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@PetSleepWithOwnerGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0PetSleepWithOwnerGoal\@\@QEAA\@AEAVMob\@\@MHHM\@Z
     */
    MCAPI PetSleepWithOwnerGoal(class Mob&, float, int, int, float);
    /**
     * @symbol
     * ?setState\@PetSleepWithOwnerGoal\@\@QEAAXV?$unique_ptr\@VPetSleepWithOwnerState\@\@U?$default_delete\@VPetSleepWithOwnerState\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setState(std::unique_ptr<class PetSleepWithOwnerState>);
};
