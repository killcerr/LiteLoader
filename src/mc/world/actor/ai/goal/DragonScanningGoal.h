#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DragonScanningGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRAGONSCANNINGGOAL
public:
    DragonScanningGoal& operator=(DragonScanningGoal const&) = delete;
    DragonScanningGoal(DragonScanningGoal const&)            = delete;
    DragonScanningGoal()                                     = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@DragonScanningGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@DragonScanningGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@DragonScanningGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@DragonScanningGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@DragonScanningGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@DragonScanningGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0DragonScanningGoal\@\@QEAA\@AEAVEnderDragon\@\@\@Z
     */
    MCAPI DragonScanningGoal(class EnderDragon&);

    // private:

private:
    /**
     * @symbol ?SITTING_ATTACK_VIEW_RANGE\@DragonScanningGoal\@\@0MA
     */
    MCAPI static float SITTING_ATTACK_VIEW_RANGE;
    /**
     * @symbol ?SITTING_CHARGE_VIEW_RANGE\@DragonScanningGoal\@\@0MA
     */
    MCAPI static float SITTING_CHARGE_VIEW_RANGE;
    /**
     * @symbol ?SITTING_SCANNING_IDLE_TICKS\@DragonScanningGoal\@\@0HA
     */
    MCAPI static int SITTING_SCANNING_IDLE_TICKS;
};
