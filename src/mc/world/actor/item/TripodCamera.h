#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/Mob.h"

class TripodCamera : public ::Mob {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIPODCAMERA
public:
    TripodCamera& operator=(TripodCamera const&) = delete;
    TripodCamera(TripodCamera const&)            = delete;
    TripodCamera()                               = delete;
#endif

public:
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@TripodCamera\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const&);
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 19
     * @symbol ?remove\@TripodCamera\@\@UEAAXXZ
     */
    virtual void remove();
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 55
     * @symbol __unk_vfn_55
     */
    virtual void __unk_vfn_55();
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl 68
     * @symbol ?getShadowHeightOffs\@TripodCamera\@\@UEAAMXZ
     */
    virtual float getShadowHeightOffs();
    /**
     * @vftbl 69
     * @symbol ?getShadowRadius\@TripodCamera\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77();
    /**
     * @vftbl 82
     * @symbol ?isPickable\@TripodCamera\@\@UEAA_NXZ
     */
    virtual bool isPickable();
    /**
     * @vftbl 83
     * @symbol __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl 93
     * @symbol __unk_vfn_93
     */
    virtual void __unk_vfn_93();
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96();
    /**
     * @vftbl 98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164();
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178();
    /**
     * @vftbl 202
     * @symbol __unk_vfn_202
     */
    virtual void __unk_vfn_202();
    /**
     * @vftbl 203
     * @symbol __unk_vfn_203
     */
    virtual void __unk_vfn_203();
    /**
     * @vftbl 219
     * @symbol __unk_vfn_219
     */
    virtual void __unk_vfn_219();
    /**
     * @vftbl 222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl 237
     * @symbol ?updateEntitySpecificMolangVariables\@TripodCamera\@\@UEAAXAEAVRenderParams\@\@\@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);
    /**
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239();
    /**
     * @vftbl 240
     * @symbol ?_hurt\@TripodCamera\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247();
    /**
     * @vftbl 253
     * @symbol __unk_vfn_253
     */
    virtual void __unk_vfn_253();
    /**
     * @vftbl 276
     * @symbol __unk_vfn_276
     */
    virtual void __unk_vfn_276();
    /**
     * @vftbl 280
     * @symbol __unk_vfn_280
     */
    virtual void __unk_vfn_280();
    /**
     * @vftbl 313
     * @symbol ?canExistWhenDisallowMob\@TripodCamera\@\@UEBA_NXZ
     */
    virtual bool canExistWhenDisallowMob() const;
    /**
     * @vftbl 323
     * @symbol __unk_vfn_323
     */
    virtual void __unk_vfn_323();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TRIPODCAMERA
    /**
     * @symbol ?breaksFallingBlocks\@TripodCamera\@\@UEBA_NXZ
     */
    MCVAPI bool breaksFallingBlocks() const;
    /**
     * @symbol ?interactPreventDefault\@TripodCamera\@\@UEAA_NXZ
     */
    MCVAPI bool interactPreventDefault();
    /**
     * @symbol ?isTargetable\@TripodCamera\@\@UEBA_NXZ
     */
    MCVAPI bool isTargetable() const;
#endif
    /**
     * @symbol
     * ??0TripodCamera\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI TripodCamera(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);
    /**
     * @symbol ?interactWithPlayer\@TripodCamera\@\@QEAA_NAEAVPlayer\@\@\@Z
     */
    MCAPI bool interactWithPlayer(class Player&);
    /**
     * @symbol ?isActivated\@TripodCamera\@\@QEBA_NXZ
     */
    MCAPI bool isActivated() const;
    /**
     * @symbol ?startTakingPicture\@TripodCamera\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void startTakingPicture(class Player&);
};
