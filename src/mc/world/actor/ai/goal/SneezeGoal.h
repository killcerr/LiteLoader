#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SneezeGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SNEEZEGOAL
public:
    SneezeGoal& operator=(SneezeGoal const&) = delete;
    SneezeGoal(SneezeGoal const&)            = delete;
    SneezeGoal()                             = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@SneezeGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@SneezeGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@SneezeGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@SneezeGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@SneezeGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@SneezeGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol
     * ??0SneezeGoal\@\@QEAA\@AEAVMob\@\@MMMAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@11MAEBV?$vector\@UMobDescriptor\@\@V?$allocator\@UMobDescriptor\@\@\@std\@\@\@3\@M\@Z
     */
    MCAPI SneezeGoal(
        class Mob&,
        float,
        float,
        float,
        std::string const&,
        std::string const&,
        std::string const&,
        float,
        std::vector<struct MobDescriptor> const&,
        float
    );
};
