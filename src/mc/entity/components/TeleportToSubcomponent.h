#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class TeleportToSubcomponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TELEPORTTOSUBCOMPONENT
public:
    TeleportToSubcomponent& operator=(TeleportToSubcomponent const&) = delete;
    TeleportToSubcomponent(TeleportToSubcomponent const&)            = delete;
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
     * @symbol ?doOnHitEffect\@TeleportToSubcomponent\@\@UEAAXAEAVActor\@\@AEAVProjectileComponent\@\@\@Z
     */
    virtual void doOnHitEffect(class Actor&, class ProjectileComponent&);
    /**
     * @vftbl 4
     * @symbol ?getName\@TeleportToSubcomponent\@\@UEAAPEBDXZ
     */
    virtual char const* getName();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TELEPORTTOSUBCOMPONENT
    /**
     * @symbol ?readfromJSON\@TeleportToSubcomponent\@\@UEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCVAPI void readfromJSON(class Json::Value&, class SemVersion const&);
    /**
     * @symbol ?writetoJSON\@TeleportToSubcomponent\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    MCVAPI void writetoJSON(class Json::Value&) const;
#endif
    /**
     * @symbol ??0TeleportToSubcomponent\@\@QEAA\@XZ
     */
    MCAPI TeleportToSubcomponent();
};
