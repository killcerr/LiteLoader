#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SquidOutOfWaterGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SQUIDOUTOFWATERGOAL
public:
    SquidOutOfWaterGoal& operator=(SquidOutOfWaterGoal const&) = delete;
    SquidOutOfWaterGoal(SquidOutOfWaterGoal const&)            = delete;
    SquidOutOfWaterGoal()                                      = delete;
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
     * @symbol ?start\@SquidOutOfWaterGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@SquidOutOfWaterGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SQUIDOUTOFWATERGOAL
    /**
     * @symbol ?canContinueToUse\@SquidOutOfWaterGoal\@\@UEAA_NXZ
     */
    MCVAPI bool canContinueToUse();
    /**
     * @symbol ?canUse\@SquidOutOfWaterGoal\@\@UEAA_NXZ
     */
    MCVAPI bool canUse();
    /**
     * @symbol ?stop\@SquidOutOfWaterGoal\@\@UEAAXXZ
     */
    MCVAPI void stop();
    /**
     * @symbol ?tick\@SquidOutOfWaterGoal\@\@UEAAXXZ
     */
    MCVAPI void tick();
#endif
};
