#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ParticlesBlockExplosionEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PARTICLESBLOCKEXPLOSIONEVENT
public:
    ParticlesBlockExplosionEvent& operator=(ParticlesBlockExplosionEvent const&) = delete;
    ParticlesBlockExplosionEvent(ParticlesBlockExplosionEvent const&)            = delete;
    ParticlesBlockExplosionEvent()                                               = delete;
#endif

public:
    /**
     * @symbol ?addExplodePosition\@ParticlesBlockExplosionEvent\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void addExplodePosition(class Vec3 const&);
    /**
     * @symbol
     * ?save\@ParticlesBlockExplosionEvent\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> save() const;
    /**
     * @symbol ??1ParticlesBlockExplosionEvent\@\@QEAA\@XZ
     */
    MCAPI ~ParticlesBlockExplosionEvent();
};
