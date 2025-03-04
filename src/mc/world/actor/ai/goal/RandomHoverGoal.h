#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RandomHoverGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMHOVERGOAL
public:
    RandomHoverGoal& operator=(RandomHoverGoal const&) = delete;
    RandomHoverGoal(RandomHoverGoal const&)            = delete;
    RandomHoverGoal()                                  = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@RandomHoverGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@RandomHoverGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@RandomHoverGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol ?tick\@RandomHoverGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@RandomHoverGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0RandomHoverGoal\@\@QEAA\@AEAVMob\@\@MHMMMUIntRange\@\@\@Z
     */
    MCAPI RandomHoverGoal(class Mob&, float, int, float, float, float, struct IntRange);

    // protected:
    /**
     * @symbol ?_computeNewTarget\@RandomHoverGoal\@\@IEAA_NXZ
     */
    MCAPI bool _computeNewTarget();
    /**
     * @symbol ?_moveToTarget\@RandomHoverGoal\@\@IEAAXXZ
     */
    MCAPI void _moveToTarget();

protected:
};
