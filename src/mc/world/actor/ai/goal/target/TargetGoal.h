#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TargetGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TARGETGOAL
public:
    TargetGoal& operator=(TargetGoal const&) = delete;
    TargetGoal(TargetGoal const&)            = delete;
    TargetGoal()                             = delete;
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
    virtual bool canUse() = 0;
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@TargetGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol ?isTargetGoal\@TargetGoal\@\@UEBA_NXZ
     */
    virtual bool isTargetGoal() const;
    /**
     * @vftbl 4
     * @symbol ?start\@TargetGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@TargetGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@TargetGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@TargetGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
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
     * @symbol ?_canAttack\@TargetGoal\@\@MEAA_NPEAVMob\@\@PEAVActor\@\@_N2PEAPEBUMobDescriptor\@\@\@Z
     */
    virtual bool _canAttack(class Mob*, class Actor*, bool, bool, struct MobDescriptor const**);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TARGETGOAL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TargetGoal();
#endif
    /**
     * @symbol
     * ??0TargetGoal\@\@QEAA\@AEAVMob\@\@AEBV?$vector\@UMobDescriptor\@\@V?$allocator\@UMobDescriptor\@\@\@std\@\@\@std\@\@_NH2M2H\@Z
     */
    MCAPI TargetGoal(class Mob&, std::vector<struct MobDescriptor> const&, bool, int, bool, float, bool, int);
    /**
     * @symbol ??0TargetGoal\@\@QEAA\@AEAVMob\@\@_NH1M1H\@Z
     */
    MCAPI TargetGoal(class Mob&, bool, int, bool, float, bool, int);

    // protected:
    /**
     * @symbol ?_canAttack\@TargetGoal\@\@IEAA_NPEAVActor\@\@_NPEAPEBUMobDescriptor\@\@\@Z
     */
    MCAPI bool _canAttack(class Actor*, bool, struct MobDescriptor const**);
    /**
     * @symbol ?_canReachAfterDelay\@TargetGoal\@\@IEAA_NAEAVActor\@\@\@Z
     */
    MCAPI bool _canReachAfterDelay(class Actor&);
    /**
     * @symbol ?_matchesTargetTypes\@TargetGoal\@\@IEAA_NPEAVMob\@\@PEAVActor\@\@_NPEAPEBUMobDescriptor\@\@\@Z
     */
    MCAPI bool _matchesTargetTypes(class Mob*, class Actor*, bool, struct MobDescriptor const**);
    /**
     * @symbol ?_withinRange\@TargetGoal\@\@IEAA_NAEBVActor\@\@\@Z
     */
    MCAPI bool _withinRange(class Actor const&);

protected:
};
