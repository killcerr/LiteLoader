#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

class InspectBookshelfGoal : public ::BaseMoveToBlockGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSPECTBOOKSHELFGOAL
public:
    InspectBookshelfGoal& operator=(InspectBookshelfGoal const&) = delete;
    InspectBookshelfGoal(InspectBookshelfGoal const&)            = delete;
    InspectBookshelfGoal()                                       = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@InspectBookshelfGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 6
     * @symbol ?tick\@InspectBookshelfGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@InspectBookshelfGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
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
     * @vftbl 11
     * @symbol ?isValidTarget\@InspectBookshelfGoal\@\@UEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool isValidTarget(class BlockSource&, class BlockPos const&);
    /**
     * @vftbl 13
     * @symbol ?_canReach\@InspectBookshelfGoal\@\@MEAA_NAEBVBlockPos\@\@\@Z
     */
    virtual bool _canReach(class BlockPos const&);
    /**
     * @vftbl 17
     * @symbol ?findTargetBlock\@InspectBookshelfGoal\@\@UEAA_NXZ
     */
    virtual bool findTargetBlock();
    /**
     * @symbol ??0InspectBookshelfGoal\@\@QEAA\@AEAVMob\@\@MHHHM\@Z
     */
    MCAPI InspectBookshelfGoal(class Mob&, float, int, int, int, float);
};
