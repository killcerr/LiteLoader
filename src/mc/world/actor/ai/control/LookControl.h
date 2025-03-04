#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LookControl {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOKCONTROL
public:
    LookControl& operator=(LookControl const&) = delete;
    LookControl(LookControl const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?initializeInternal\@LookControl\@\@UEAAXAEAVMob\@\@\@Z
     */
    virtual void initializeInternal(class Mob&);
    /**
     * @vftbl 2
     * @symbol ?tick\@LookControl\@\@UEAAXAEAVMob\@\@\@Z
     */
    virtual void tick(class Mob&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOOKCONTROL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LookControl();
#endif
    /**
     * @symbol ??0LookControl\@\@QEAA\@XZ
     */
    MCAPI LookControl();
};
