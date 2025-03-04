#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ShulkerPeekGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHULKERPEEKGOAL
public:
    ShulkerPeekGoal& operator=(ShulkerPeekGoal const&) = delete;
    ShulkerPeekGoal(ShulkerPeekGoal const&)            = delete;
    ShulkerPeekGoal()                                  = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@ShulkerPeekGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@ShulkerPeekGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@ShulkerPeekGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@ShulkerPeekGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@ShulkerPeekGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@ShulkerPeekGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0ShulkerPeekGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI ShulkerPeekGoal(class Mob&);
};
