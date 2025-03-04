#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JumpControl {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JUMPCONTROL
public:
    JumpControl& operator=(JumpControl const&) = delete;
    JumpControl(JumpControl const&)            = delete;
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
     * @symbol
     * ?clone\@JumpControl\@\@UEBA?AV?$unique_ptr\@VJumpControl\@\@U?$default_delete\@VJumpControl\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class JumpControl> clone() const;
    /**
     * @vftbl 3
     * @symbol ?tick\@JumpControl\@\@MEAAXAEAVJumpControlComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void tick(class JumpControlComponent&, class Mob&);
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol ?getJumpPower\@JumpControl\@\@MEBAMAEBVJumpControlComponent\@\@\@Z
     */
    virtual float getJumpPower(class JumpControlComponent const&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JUMPCONTROL
    /**
     * @symbol ?getJumpDelay\@JumpControl\@\@MEBAHAEBVJumpControlComponent\@\@\@Z
     */
    MCVAPI int getJumpDelay(class JumpControlComponent const&) const;
    /**
     * @symbol ?getJumpType\@JumpControl\@\@MEBA?AW4JumpType\@\@AEBVJumpControlComponent\@\@\@Z
     */
    MCVAPI enum class JumpType getJumpType(class JumpControlComponent const&) const;
    /**
     * @symbol ?initializeInternal\@JumpControl\@\@UEAAXAEAVMob\@\@PEAUJumpControlDescription\@\@\@Z
     */
    MCVAPI void initializeInternal(class Mob&, struct JumpControlDescription*);
    /**
     * @symbol ?resetSpeedModifier\@JumpControl\@\@MEAAXAEBVJumpControlComponent\@\@AEAVMob\@\@\@Z
     */
    MCVAPI void resetSpeedModifier(class JumpControlComponent const&, class Mob&);
    /**
     * @symbol ?setJumpType\@JumpControl\@\@MEAAXAEAVJumpControlComponent\@\@W4JumpType\@\@\@Z
     */
    MCVAPI void setJumpType(class JumpControlComponent&, enum class JumpType);
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~JumpControl();
#endif
    /**
     * @symbol ??0JumpControl\@\@QEAA\@XZ
     */
    MCAPI JumpControl();
};
