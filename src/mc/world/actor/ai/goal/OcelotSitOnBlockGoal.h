#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

class OcelotSitOnBlockGoal : public ::BaseMoveToBlockGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCELOTSITONBLOCKGOAL
public:
    OcelotSitOnBlockGoal& operator=(OcelotSitOnBlockGoal const&) = delete;
    OcelotSitOnBlockGoal(OcelotSitOnBlockGoal const&)            = delete;
    OcelotSitOnBlockGoal()                                       = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@OcelotSitOnBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@OcelotSitOnBlockGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@OcelotSitOnBlockGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@OcelotSitOnBlockGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@OcelotSitOnBlockGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
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
     * @symbol ?isValidTarget\@OcelotSitOnBlockGoal\@\@UEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool isValidTarget(class BlockSource&, class BlockPos const&);
    /**
     * @vftbl 13
     * @symbol ?_canReach\@OcelotSitOnBlockGoal\@\@UEAA_NAEBVBlockPos\@\@\@Z
     */
    virtual bool _canReach(class BlockPos const&);
    /**
     * @symbol ??0OcelotSitOnBlockGoal\@\@QEAA\@AEAVMob\@\@M\@Z
     */
    MCAPI OcelotSitOnBlockGoal(class Mob&, float);
};
