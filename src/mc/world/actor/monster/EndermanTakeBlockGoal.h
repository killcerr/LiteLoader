#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EndermanTakeBlockGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDERMANTAKEBLOCKGOAL
public:
    EndermanTakeBlockGoal& operator=(EndermanTakeBlockGoal const&) = delete;
    EndermanTakeBlockGoal(EndermanTakeBlockGoal const&)            = delete;
    EndermanTakeBlockGoal()                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@EndermanTakeBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
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
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol ?tick\@EndermanTakeBlockGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@EndermanTakeBlockGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
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
     * @symbol ?getRandomNearbyBlockPos\@EndermanTakeBlockGoal\@\@MEBA?AVBlockPos\@\@AEBVVec3\@\@\@Z
     */
    virtual class BlockPos getRandomNearbyBlockPos(class Vec3 const&) const;
    /**
     * @symbol ??0EndermanTakeBlockGoal\@\@QEAA\@AEAVEnderMan\@\@\@Z
     */
    MCAPI EndermanTakeBlockGoal(class EnderMan&);
};
