#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

class AttackDamageMobEffect : public ::MobEffect {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTACKDAMAGEMOBEFFECT
public:
    AttackDamageMobEffect& operator=(AttackDamageMobEffect const&) = delete;
    AttackDamageMobEffect(AttackDamageMobEffect const&)            = delete;
    AttackDamageMobEffect()                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 6
     * @symbol ?getAttributeModifierValue\@AttackDamageMobEffect\@\@UEBAMHAEBVAttributeModifier\@\@\@Z
     */
    virtual float getAttributeModifierValue(int, class AttributeModifier const&) const;
    /**
     * @symbol
     * ??0AttackDamageMobEffect\@\@QEAA\@HAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_NHH\@Z
     */
    MCAPI AttackDamageMobEffect(int, std::string const&, std::string const&, bool, int, int);
    /**
     * @symbol ?getDamageAfterDamageBoost\@AttackDamageMobEffect\@\@SAMMH\@Z
     */
    MCAPI static float getDamageAfterDamageBoost(float, int);
    /**
     * @symbol ?getDamageAfterWeakness\@AttackDamageMobEffect\@\@SAMMH\@Z
     */
    MCAPI static float getDamageAfterWeakness(float, int);
};
