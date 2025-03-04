#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RandomLookAroundGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMLOOKAROUNDGOAL
public:
    RandomLookAroundGoal& operator=(RandomLookAroundGoal const&) = delete;
    RandomLookAroundGoal(RandomLookAroundGoal const&)            = delete;
    RandomLookAroundGoal()                                       = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@RandomLookAroundGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@RandomLookAroundGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@RandomLookAroundGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol ?tick\@RandomLookAroundGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@RandomLookAroundGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0RandomLookAroundGoal\@\@QEAA\@AEAVMob\@\@HHMMM\@Z
     */
    MCAPI RandomLookAroundGoal(class Mob&, int, int, float, float, float);

    // protected:
    /**
     * @symbol ?_setRandomLook\@RandomLookAroundGoal\@\@IEAAXXZ
     */
    MCAPI void _setRandomLook();

protected:
};
