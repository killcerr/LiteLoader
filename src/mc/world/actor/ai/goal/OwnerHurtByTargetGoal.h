#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/target/TargetGoal.h"

class OwnerHurtByTargetGoal : public ::TargetGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OWNERHURTBYTARGETGOAL
public:
    OwnerHurtByTargetGoal& operator=(OwnerHurtByTargetGoal const&) = delete;
    OwnerHurtByTargetGoal(OwnerHurtByTargetGoal const&)            = delete;
    OwnerHurtByTargetGoal()                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@OwnerHurtByTargetGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 4
     * @symbol ?start\@OwnerHurtByTargetGoal\@\@UEAAXXZ
     */
    virtual void start();
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
     * @symbol
     * ??0OwnerHurtByTargetGoal\@\@QEAA\@AEAVMob\@\@AEBV?$vector\@UMobDescriptor\@\@V?$allocator\@UMobDescriptor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI OwnerHurtByTargetGoal(class Mob&, std::vector<struct MobDescriptor> const&);
};
