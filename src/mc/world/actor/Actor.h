#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/SharePtrRefTraits.h"
#include "mc/common/wrapper/StackRefResultT.h"
#include "mc/common/wrapper/WeakRefT.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/world/AutomaticID.h"

class Actor {
public:
    // Actor inner types declare
    // clang-format off

    // clang-format on

    // Actor inner types define
    enum class InitializationMethod {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTOR
public:
    Actor& operator=(Actor const&) = delete;
    Actor(Actor const&)            = delete;
    Actor()                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getStatusFlag\@Actor\@\@UEBA_NW4ActorFlags\@\@\@Z
     */
    virtual bool getStatusFlag(enum class ActorFlags) const;
    /**
     * @vftbl 1
     * @symbol ?setStatusFlag\@Actor\@\@UEAAXW4ActorFlags\@\@_N\@Z
     */
    virtual void setStatusFlag(enum class ActorFlags, bool);
    /**
     * @vftbl 2
     * @symbol ?hasComponent\@Actor\@\@UEBA_NAEBVHashedString\@\@\@Z
     */
    virtual bool hasComponent(class HashedString const&) const;
    /**
     * @vftbl 3
     * @symbol ?getLastHurtByMob\@Actor\@\@UEAAPEAVMob\@\@XZ
     */
    virtual class Mob* getLastHurtByMob();
    /**
     * @vftbl 4
     * @symbol ?setLastHurtByMob\@Actor\@\@UEAAXPEAVMob\@\@\@Z
     */
    virtual void setLastHurtByMob(class Mob*);
    /**
     * @vftbl 5
     * @symbol ?getLastHurtByPlayer\@Actor\@\@UEAAPEAVPlayer\@\@XZ
     */
    virtual class Player* getLastHurtByPlayer();
    /**
     * @vftbl 6
     * @symbol ?setLastHurtByPlayer\@Actor\@\@UEAAXPEAVPlayer\@\@\@Z
     */
    virtual void setLastHurtByPlayer(class Player*);
    /**
     * @vftbl 7
     * @symbol ?getLastHurtMob\@Actor\@\@UEAAPEAVMob\@\@XZ
     */
    virtual class Mob* getLastHurtMob();
    /**
     * @vftbl 8
     * @symbol ?setLastHurtMob\@Actor\@\@UEAAXPEAV1\@\@Z
     */
    virtual void setLastHurtMob(class Actor*);
    /**
     * @vftbl 9
     * @symbol ?outOfWorld\@Actor\@\@UEAAXXZ
     */
    virtual void outOfWorld();
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@Actor\@\@MEAAXW4InitializationMethod\@1\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const&);
    /**
     * @vftbl 11
     * @symbol ?reloadHardcodedClient\@Actor\@\@MEAAXW4InitializationMethod\@1\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcodedClient(enum class Actor::InitializationMethod, class VariantParameterList const&);
    /**
     * @vftbl 12
     * @symbol ?initializeComponents\@Actor\@\@MEAAXW4InitializationMethod\@1\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const&);
    /**
     * @vftbl 13
     * @symbol ?reloadComponents\@Actor\@\@MEAAXW4InitializationMethod\@1\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadComponents(enum class Actor::InitializationMethod, class VariantParameterList const&);
    /**
     * @vftbl 14
     * @symbol ?_serverInitItemStackIds\@Actor\@\@MEAAXXZ
     */
    virtual void _serverInitItemStackIds();
    /**
     * @vftbl 15
     * @symbol ?_doInitialMove\@Actor\@\@MEAAXXZ
     */
    virtual void _doInitialMove();
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 17
     * @symbol ?resetUserPos\@Actor\@\@UEAAX_N\@Z
     */
    virtual void resetUserPos(bool);
    /**
     * @vftbl 18
     * @symbol ?getOwnerEntityType\@Actor\@\@UEAA?AW4ActorType\@\@XZ
     */
    virtual enum class ActorType getOwnerEntityType();
    /**
     * @vftbl 19
     * @symbol ?remove\@Actor\@\@UEAAXXZ
     */
    virtual void remove();
    /**
     * @vftbl 20
     * @symbol ?isRuntimePredictedMovementEnabled\@Actor\@\@UEBA_NXZ
     */
    virtual bool isRuntimePredictedMovementEnabled() const;
    /**
     * @vftbl 21
     * @symbol ?getPredictedMovementValues\@Actor\@\@UEBAAEBUPredictedMovementValues\@\@XZ
     */
    virtual struct PredictedMovementValues const& getPredictedMovementValues() const;
    /**
     * @vftbl 22
     * @symbol ?getPosition\@Actor\@\@UEBAAEBVVec3\@\@XZ
     */
    virtual class Vec3 const& getPosition() const;
    /**
     * @vftbl 23
     * @symbol ?getPosPrev\@Actor\@\@UEBAAEBVVec3\@\@XZ
     */
    virtual class Vec3 const& getPosPrev() const;
    /**
     * @vftbl 24
     * @symbol ?getPosExtrapolated\@Actor\@\@UEBA?BVVec3\@\@M\@Z
     */
    virtual class Vec3 const getPosExtrapolated(float) const;
    /**
     * @vftbl 25
     * @symbol ?getFiringPos\@Actor\@\@UEBA?AVVec3\@\@XZ
     */
    virtual class Vec3 getFiringPos() const;
    /**
     * @vftbl 26
     * @symbol ?getInterpolatedRidingPosition\@Actor\@\@UEBA?AVVec3\@\@M\@Z
     */
    virtual class Vec3 getInterpolatedRidingPosition(float) const;
    /**
     * @vftbl 27
     * @symbol ?getInterpolatedBodyRot\@Actor\@\@UEBAMM\@Z
     */
    virtual float getInterpolatedBodyRot(float) const;
    /**
     * @vftbl 28
     * @symbol ?getInterpolatedHeadRot\@Actor\@\@UEBAMM\@Z
     */
    virtual float getInterpolatedHeadRot(float) const;
    /**
     * @vftbl 29
     * @symbol ?getInterpolatedBodyYaw\@Actor\@\@UEBAMM\@Z
     */
    virtual float getInterpolatedBodyYaw(float) const;
    /**
     * @vftbl 30
     * @symbol ?getYawSpeedInDegreesPerSecond\@Actor\@\@UEBAMXZ
     */
    virtual float getYawSpeedInDegreesPerSecond() const;
    /**
     * @vftbl 31
     * @symbol ?getInterpolatedWalkAnimSpeed\@Actor\@\@UEBAMM\@Z
     */
    virtual float getInterpolatedWalkAnimSpeed(float) const;
    /**
     * @vftbl 32
     * @symbol ?getInterpolatedRidingOffset\@Actor\@\@UEBA?AVVec3\@\@MH\@Z
     */
    virtual class Vec3 getInterpolatedRidingOffset(float, int) const;
    /**
     * @vftbl 33
     * @symbol ?resetInterpolated\@Actor\@\@UEAAXXZ
     */
    virtual void resetInterpolated();
    /**
     * @vftbl 34
     * @symbol ?isFireImmune\@Actor\@\@UEBA_NXZ
     */
    virtual bool isFireImmune() const;
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 36
     * @symbol ?blockedByShield\@Actor\@\@UEAAXAEBVActorDamageSource\@\@AEAV1\@\@Z
     */
    virtual void blockedByShield(class ActorDamageSource const&, class Actor&);
    /**
     * @vftbl 37
     * @symbol ?canDisableShield\@Actor\@\@UEAA_NXZ
     */
    virtual bool canDisableShield();
    /**
     * @vftbl 38
     * @symbol ?teleportTo\@Actor\@\@UEAAXAEBVVec3\@\@_NHH1\@Z
     */
    virtual void teleportTo(class Vec3 const&, bool, int, int, bool);
    /**
     * @vftbl 39
     * @symbol ?tryTeleportTo\@Actor\@\@UEAA_NAEBVVec3\@\@_N1HH\@Z
     */
    virtual bool tryTeleportTo(class Vec3 const&, bool, bool, int, int);
    /**
     * @vftbl 40
     * @symbol ?chorusFruitTeleport\@Actor\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void chorusFruitTeleport(class Vec3 const&);
    /**
     * @vftbl 41
     * @symbol ?lerpMotion\@Actor\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void lerpMotion(class Vec3 const&);
    /**
     * @vftbl 42
     * @symbol
     * ?tryCreateAddActorPacket\@Actor\@\@UEAA?AV?$unique_ptr\@VAddActorBasePacket\@\@U?$default_delete\@VAddActorBasePacket\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();
    /**
     * @vftbl 43
     * @symbol ?normalTick\@Actor\@\@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @vftbl 44
     * @symbol ?baseTick\@Actor\@\@UEAAXXZ
     */
    virtual void baseTick();
    /**
     * @vftbl 45
     * @symbol ?passengerTick\@Actor\@\@UEAAXXZ
     */
    virtual void passengerTick();
    /**
     * @vftbl 46
     * @symbol ?positionPassenger\@Actor\@\@UEAAXAEAV1\@M\@Z
     */
    virtual void positionPassenger(class Actor&, float);
    /**
     * @vftbl 47
     * @symbol ?startRiding\@Actor\@\@UEAA_NAEAV1\@\@Z
     */
    virtual bool startRiding(class Actor&);
    /**
     * @vftbl 48
     * @symbol ?addPassenger\@Actor\@\@UEAAXAEAV1\@\@Z
     */
    virtual void addPassenger(class Actor&);
    /**
     * @vftbl 49
     * @symbol
     * ?getExitTip\@Actor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@W4InputMode\@\@W4NewInteractionModel\@\@\@Z
     */
    virtual std::string getExitTip(std::string const&, enum class InputMode, enum class NewInteractionModel) const;
    /**
     * @vftbl 50
     * @symbol
     * ?getEntityLocNameString\@Actor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getEntityLocNameString() const;
    /**
     * @vftbl 51
     * @symbol ?intersects\@Actor\@\@UEBA_NAEBVVec3\@\@0\@Z
     */
    virtual bool intersects(class Vec3 const&, class Vec3 const&) const;
    /**
     * @vftbl 52
     * @symbol ?isInWall\@Actor\@\@UEBA_NXZ
     */
    virtual bool isInWall() const;
    /**
     * @vftbl 53
     * @symbol ?isInvisible\@Actor\@\@UEBA_NXZ
     */
    virtual bool isInvisible() const;
    /**
     * @vftbl 54
     * @symbol ?canShowNameTag\@Actor\@\@UEBA_NXZ
     */
    virtual bool canShowNameTag() const;
    /**
     * @vftbl 55
     * @symbol __unk_vfn_55
     */
    virtual void __unk_vfn_55();
    /**
     * @vftbl 56
     * @symbol ?setNameTagVisible\@Actor\@\@UEAAX_N\@Z
     */
    virtual void setNameTagVisible(bool);
    /**
     * @vftbl 57
     * @symbol ?getNameTag\@Actor\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getNameTag() const;
    /**
     * @vftbl 58
     * @symbol ?getNameTagAsHash\@Actor\@\@UEBA_KXZ
     */
    virtual unsigned __int64 getNameTagAsHash() const;
    /**
     * @vftbl 59
     * @symbol
     * ?getFormattedNameTag\@Actor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getFormattedNameTag() const;
    /**
     * @vftbl 60
     * @symbol ?filterFormattedNameTag\@Actor\@\@UEAAXAEBVUIProfanityContext\@\@\@Z
     */
    virtual void filterFormattedNameTag(class UIProfanityContext const&);
    /**
     * @vftbl 61
     * @symbol
     * ?setNameTag\@Actor\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void setNameTag(std::string const&);
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl 63
     * @symbol
     * ?setScoreTag\@Actor\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void setScoreTag(std::string const&);
    /**
     * @vftbl 64
     * @symbol ?getScoreTag\@Actor\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getScoreTag() const;
    /**
     * @vftbl 65
     * @symbol ?isInWater\@Actor\@\@UEBA_NXZ
     */
    virtual bool isInWater() const;
    /**
     * @vftbl 66
     * @symbol ?isUnderLiquid\@Actor\@\@UEBA_NW4MaterialType\@\@\@Z
     */
    virtual bool isUnderLiquid(enum class MaterialType) const;
    /**
     * @vftbl 67
     * @symbol ?isOverWater\@Actor\@\@UEBA_NXZ
     */
    virtual bool isOverWater() const;
    /**
     * @vftbl 68
     * @symbol ?getShadowHeightOffs\@Actor\@\@UEAAMXZ
     */
    virtual float getShadowHeightOffs();
    /**
     * @vftbl 69
     * @symbol ?getShadowRadius\@Actor\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl 70
     * @symbol ?getHeadLookVector\@Actor\@\@UEBA?AVVec3\@\@M\@Z
     */
    virtual class Vec3 getHeadLookVector(float) const;
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl 72
     * @symbol ?canSee\@Actor\@\@UEBA_NAEBV1\@\@Z
     */
    virtual bool canSee(class Actor const&) const;
    /**
     * @vftbl 73
     * @symbol ?canSee\@Actor\@\@UEBA_NAEBVVec3\@\@\@Z
     */
    virtual bool canSee(class Vec3 const&) const;
    /**
     * @vftbl 74
     * @symbol ?canInteractWithOtherEntitiesInGame\@Actor\@\@UEBA_NXZ
     */
    virtual bool canInteractWithOtherEntitiesInGame() const;
    /**
     * @vftbl 75
     * @symbol ?isSkyLit\@Actor\@\@UEAA_NM\@Z
     */
    virtual bool isSkyLit(float);
    /**
     * @vftbl 76
     * @symbol ?getBrightness\@Actor\@\@UEBAMMAEBVIConstBlockSource\@\@\@Z
     */
    virtual float getBrightness(float, class IConstBlockSource const&) const;
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77();
    /**
     * @vftbl 78
     * @symbol ?playerTouch\@Actor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void playerTouch(class Player&);
    /**
     * @vftbl 79
     * @symbol ?isImmobile\@Actor\@\@UEBA_NXZ
     */
    virtual bool isImmobile() const;
    /**
     * @vftbl 80
     * @symbol ?isSilent\@Actor\@\@UEBA_NXZ
     */
    virtual bool isSilent() const;
    /**
     * @vftbl 81
     * @symbol ?isSilentObserver\@Actor\@\@UEBA_NXZ
     */
    virtual bool isSilentObserver() const;
    /**
     * @vftbl 82
     * @symbol ?isPickable\@Actor\@\@UEAA_NXZ
     */
    virtual bool isPickable();
    /**
     * @vftbl 83
     * @symbol __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @vftbl 84
     * @symbol ?isSleeping\@Actor\@\@UEBA_NXZ
     */
    virtual bool isSleeping() const;
    /**
     * @vftbl 85
     * @symbol ?setSleeping\@Actor\@\@UEAAX_N\@Z
     */
    virtual void setSleeping(bool);
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl 87
     * @symbol ?setSneaking\@Actor\@\@UEAAX_N\@Z
     */
    virtual void setSneaking(bool);
    /**
     * @vftbl 88
     * @symbol ?isBlocking\@Actor\@\@UEBA_NXZ
     */
    virtual bool isBlocking() const;
    /**
     * @vftbl 89
     * @symbol ?isDamageBlocked\@Actor\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isDamageBlocked(class ActorDamageSource const&) const;
    /**
     * @vftbl 90
     * @symbol ?isAlive\@Actor\@\@UEBA_NXZ
     */
    virtual bool isAlive() const;
    /**
     * @vftbl 91
     * @symbol ?isOnFire\@Actor\@\@UEBA_NXZ
     */
    virtual bool isOnFire() const;
    /**
     * @vftbl 92
     * @symbol ?isOnHotBlock\@Actor\@\@UEBA_NXZ
     */
    virtual bool isOnHotBlock() const;
    /**
     * @vftbl 93
     * @symbol __unk_vfn_93
     */
    virtual void __unk_vfn_93();
    /**
     * @vftbl 94
     * @symbol ?isSurfaceMob\@Actor\@\@UEBA_NXZ
     */
    virtual bool isSurfaceMob() const;
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
     * @vftbl 97
     * @symbol ?isRemotePlayer\@Actor\@\@UEBA_NXZ
     */
    virtual bool isRemotePlayer() const;
    /**
     * @vftbl 98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl 99
     * @symbol ?isAffectedByWaterBottle\@Actor\@\@UEBA_NXZ
     */
    virtual bool isAffectedByWaterBottle() const;
    /**
     * @vftbl 100
     * @symbol ?canAttack\@Actor\@\@UEBA_NPEAV1\@_N\@Z
     */
    virtual bool canAttack(class Actor*, bool) const;
    /**
     * @vftbl 101
     * @symbol ?setTarget\@Actor\@\@UEAAXPEAV1\@\@Z
     */
    virtual void setTarget(class Actor*);
    /**
     * @vftbl 102
     * @symbol ?isValidTarget\@Actor\@\@UEBA_NPEAV1\@\@Z
     */
    virtual bool isValidTarget(class Actor*) const;
    /**
     * @vftbl 103
     * @symbol ?attack\@Actor\@\@UEAA_NAEAV1\@AEBW4ActorDamageCause\@\@\@Z
     */
    virtual bool attack(class Actor&, enum class ActorDamageCause const&);
    /**
     * @vftbl 104
     * @symbol ?performRangedAttack\@Actor\@\@UEAAXAEAV1\@M\@Z
     */
    virtual void performRangedAttack(class Actor&, float);
    /**
     * @vftbl 105
     * @symbol ?getEquipmentCount\@Actor\@\@UEBAHXZ
     */
    virtual int getEquipmentCount() const;
    /**
     * @vftbl 106
     * @symbol ?setOwner\@Actor\@\@UEAAXUActorUniqueID\@\@\@Z
     */
    virtual void setOwner(struct ActorUniqueID);
    /**
     * @vftbl 107
     * @symbol ?setSitting\@Actor\@\@UEAAX_N\@Z
     */
    virtual void setSitting(bool);
    /**
     * @vftbl 108
     * @symbol ?onTame\@Actor\@\@UEAAXXZ
     */
    virtual void onTame();
    /**
     * @vftbl 109
     * @symbol ?onFailedTame\@Actor\@\@UEAAXXZ
     */
    virtual void onFailedTame();
    /**
     * @vftbl 110
     * @symbol ?getInventorySize\@Actor\@\@UEBAHXZ
     */
    virtual int getInventorySize() const;
    /**
     * @vftbl 111
     * @symbol ?getEquipSlots\@Actor\@\@UEBAHXZ
     */
    virtual int getEquipSlots() const;
    /**
     * @vftbl 112
     * @symbol ?getChestSlots\@Actor\@\@UEBAHXZ
     */
    virtual int getChestSlots() const;
    /**
     * @vftbl 113
     * @symbol ?setStanding\@Actor\@\@UEAAX_N\@Z
     */
    virtual void setStanding(bool);
    /**
     * @vftbl 114
     * @symbol ?canPowerJump\@Actor\@\@UEBA_NXZ
     */
    virtual bool canPowerJump() const;
    /**
     * @vftbl 115
     * @symbol ?setCanPowerJump\@Actor\@\@UEAAX_N\@Z
     */
    virtual void setCanPowerJump(bool);
    /**
     * @vftbl 116
     * @symbol ?isEnchanted\@Actor\@\@UEBA_NXZ
     */
    virtual bool isEnchanted() const;
    /**
     * @vftbl 117
     * @symbol ?shouldRender\@Actor\@\@UEBA_NXZ
     */
    virtual bool shouldRender() const;
    /**
     * @vftbl 118
     * @symbol ?playAmbientSound\@Actor\@\@UEAAXXZ
     */
    virtual void playAmbientSound();
    /**
     * @vftbl 119
     * @symbol ?getAmbientSound\@Actor\@\@UEBA?AW4LevelSoundEvent\@\@XZ
     */
    virtual enum class LevelSoundEvent getAmbientSound() const;
    /**
     * @vftbl 120
     * @symbol ?isInvulnerableTo\@Actor\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const;
    /**
     * @vftbl 121
     * @symbol ?getBlockDamageCause\@Actor\@\@UEBA?AW4ActorDamageCause\@\@AEBVBlock\@\@\@Z
     */
    virtual enum class ActorDamageCause getBlockDamageCause(class Block const&) const;
    /**
     * @vftbl 122
     * @symbol ?animateHurt\@Actor\@\@UEAAXXZ
     */
    virtual void animateHurt();
    /**
     * @vftbl 123
     * @symbol ?doFireHurt\@Actor\@\@UEAA_NH\@Z
     */
    virtual bool doFireHurt(int);
    /**
     * @vftbl 124
     * @symbol ?onLightningHit\@Actor\@\@UEAAXXZ
     */
    virtual void onLightningHit();
    /**
     * @vftbl 125
     * @symbol ?onBounceStarted\@Actor\@\@UEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /**
     * @vftbl 126
     * @symbol ?feed\@Actor\@\@UEAAXH\@Z
     */
    virtual void feed(int);
    /**
     * @vftbl 127
     * @symbol ?handleEntityEvent\@Actor\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl 128
     * @symbol ?getPickRadius\@Actor\@\@UEAAMXZ
     */
    virtual float getPickRadius();
    /**
     * @vftbl 129
     * @symbol ?getActorRendererId\@Actor\@\@UEBAAEBVHashedString\@\@XZ
     */
    virtual class HashedString const& getActorRendererId() const;
    /**
     * @vftbl 130
     * @symbol ?spawnAtLocation\@Actor\@\@UEAAPEAVItemActor\@\@HH\@Z
     */
    virtual class ItemActor* spawnAtLocation(int, int);
    /**
     * @vftbl 131
     * @symbol ?spawnAtLocation\@Actor\@\@UEAAPEAVItemActor\@\@HHM\@Z
     */
    virtual class ItemActor* spawnAtLocation(int, int, float);
    /**
     * @vftbl 132
     * @symbol ?spawnAtLocation\@Actor\@\@UEAAPEAVItemActor\@\@AEBVItemStack\@\@M\@Z
     */
    virtual class ItemActor* spawnAtLocation(class ItemStack const&, float);
    /**
     * @vftbl 133
     * @symbol ?despawn\@Actor\@\@UEAAXXZ
     */
    virtual void despawn();
    /**
     * @vftbl 134
     * @symbol ?killed\@Actor\@\@UEAAXAEAV1\@\@Z
     */
    virtual void killed(class Actor&);
    /**
     * @vftbl 135
     * @symbol ?awardKillScore\@Actor\@\@UEAAXAEAV1\@H\@Z
     */
    virtual void awardKillScore(class Actor&, int);
    /**
     * @vftbl 136
     * @symbol ?setArmor\@Actor\@\@UEAAXW4ArmorSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual void setArmor(enum class ArmorSlot, class ItemStack const&);
    /**
     * @vftbl 137
     * @symbol ?getArmor\@Actor\@\@UEBAAEBVItemStack\@\@W4ArmorSlot\@\@\@Z
     */
    virtual class ItemStack const& getArmor(enum class ArmorSlot) const;
    /**
     * @vftbl 138
     * @symbol
     * ?getAllArmor\@Actor\@\@UEBA?AV?$vector\@PEBVItemStack\@\@V?$allocator\@PEBVItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack const*> getAllArmor() const;
    /**
     * @vftbl 139
     * @symbol ?getArmorMaterialTypeInSlot\@Actor\@\@UEBA?AW4ArmorMaterialType\@\@W4ArmorSlot\@\@\@Z
     */
    virtual enum class ArmorMaterialType getArmorMaterialTypeInSlot(enum class ArmorSlot) const;
    /**
     * @vftbl 140
     * @symbol ?getArmorMaterialTextureTypeInSlot\@Actor\@\@UEBA?AW4ArmorTextureType\@\@W4ArmorSlot\@\@\@Z
     */
    virtual enum class ArmorTextureType getArmorMaterialTextureTypeInSlot(enum class ArmorSlot) const;
    /**
     * @vftbl 141
     * @symbol ?getArmorColorInSlot\@Actor\@\@UEBAMW4ArmorSlot\@\@H\@Z
     */
    virtual float getArmorColorInSlot(enum class ArmorSlot, int) const;
    /**
     * @vftbl 142
     * @symbol ?getEquippedSlot\@Actor\@\@UEBAAEBVItemStack\@\@W4EquipmentSlot\@\@\@Z
     */
    virtual class ItemStack const& getEquippedSlot(enum class EquipmentSlot) const;
    /**
     * @vftbl 143
     * @symbol ?setEquippedSlot\@Actor\@\@UEAAXW4EquipmentSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual void setEquippedSlot(enum class EquipmentSlot, class ItemStack const&);
    /**
     * @vftbl 144
     * @symbol ?setCarriedItem\@Actor\@\@UEAAXAEBVItemStack\@\@\@Z
     */
    virtual void setCarriedItem(class ItemStack const&);
    /**
     * @vftbl 145
     * @symbol ?getCarriedItem\@Actor\@\@UEBAAEBVItemStack\@\@XZ
     */
    virtual class ItemStack const& getCarriedItem() const;
    /**
     * @vftbl 146
     * @symbol ?setOffhandSlot\@Actor\@\@UEAAXAEBVItemStack\@\@\@Z
     */
    virtual void setOffhandSlot(class ItemStack const&);
    /**
     * @vftbl 147
     * @symbol ?getEquippedTotem\@Actor\@\@UEBAAEBVItemStack\@\@XZ
     */
    virtual class ItemStack const& getEquippedTotem() const;
    /**
     * @vftbl 148
     * @symbol ?consumeTotem\@Actor\@\@UEAA_NXZ
     */
    virtual bool consumeTotem();
    /**
     * @vftbl 149
     * @symbol ?save\@Actor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag&) const;
    /**
     * @vftbl 150
     * @symbol ?saveWithoutId\@Actor\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void saveWithoutId(class CompoundTag&) const;
    /**
     * @vftbl 151
     * @symbol ?load\@Actor\@\@UEAA_NAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual bool load(class CompoundTag const&, class DataLoadHelper&);
    /**
     * @vftbl 152
     * @symbol
     * ?loadLinks\@Actor\@\@UEAAXAEBVCompoundTag\@\@AEAV?$vector\@UActorLink\@\@V?$allocator\@UActorLink\@\@\@std\@\@\@std\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void loadLinks(class CompoundTag const&, std::vector<struct ActorLink>&, class DataLoadHelper&);
    /**
     * @vftbl 153
     * @symbol ?getEntityTypeId\@Actor\@\@UEBA?AW4ActorType\@\@XZ
     */
    virtual enum class ActorType getEntityTypeId() const;
    /**
     * @vftbl 154
     * @symbol ?queryEntityRenderer\@Actor\@\@UEBAAEBVHashedString\@\@XZ
     */
    virtual class HashedString const& queryEntityRenderer() const;
    /**
     * @vftbl 155
     * @symbol ?getSourceUniqueID\@Actor\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getSourceUniqueID() const;
    /**
     * @vftbl 156
     * @symbol ?thawFreezeEffect\@Actor\@\@UEAAXXZ
     */
    virtual void thawFreezeEffect();
    /**
     * @vftbl 157
     * @symbol ?canFreeze\@Actor\@\@UEBA_NXZ
     */
    virtual bool canFreeze() const;
    /**
     * @vftbl 158
     * @symbol ?isWearingLeatherArmor\@Actor\@\@UEBA?B_NXZ
     */
    virtual bool const isWearingLeatherArmor() const;
    /**
     * @vftbl 159
     * @symbol ?getLiquidAABB\@Actor\@\@UEBA?AVAABB\@\@W4MaterialType\@\@\@Z
     */
    virtual class AABB getLiquidAABB(enum class MaterialType) const;
    /**
     * @vftbl 160
     * @symbol ?handleInsidePortal\@Actor\@\@UEAAXAEBVBlockPos\@\@\@Z
     */
    virtual void handleInsidePortal(class BlockPos const&);
    /**
     * @vftbl 161
     * @symbol ?getPortalCooldown\@Actor\@\@UEBAHXZ
     */
    virtual int getPortalCooldown() const;
    /**
     * @vftbl 162
     * @symbol ?getPortalWaitTime\@Actor\@\@UEBAHXZ
     */
    virtual int getPortalWaitTime() const;
    /**
     * @vftbl 163
     * @symbol ?canChangeDimensionsUsingPortal\@Actor\@\@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const;
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164();
    /**
     * @vftbl 165
     * @symbol ?changeDimension\@Actor\@\@UEAAXV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    virtual void changeDimension(class AutomaticID<class Dimension, int>);
    /**
     * @vftbl 166
     * @symbol ?getControllingPlayer\@Actor\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getControllingPlayer() const;
    /**
     * @vftbl 167
     * @symbol ?checkFallDamage\@Actor\@\@UEAAXM_N\@Z
     */
    virtual void checkFallDamage(float, bool);
    /**
     * @vftbl 168
     * @symbol ?causeFallDamage\@Actor\@\@UEAAXMMVActorDamageSource\@\@\@Z
     */
    virtual void causeFallDamage(float, float, class ActorDamageSource);
    /**
     * @vftbl 169
     * @symbol ?handleFallDistanceOnServer\@Actor\@\@UEAAXMM_N\@Z
     */
    virtual void handleFallDistanceOnServer(float, float, bool);
    /**
     * @vftbl 170
     * @symbol ?playSynchronizedSound\@Actor\@\@UEAAXW4LevelSoundEvent\@\@AEBVVec3\@\@AEBVBlock\@\@_N\@Z
     */
    virtual void playSynchronizedSound(enum class LevelSoundEvent, class Vec3 const&, class Block const&, bool);
    /**
     * @vftbl 171
     * @symbol ?playSynchronizedSound\@Actor\@\@UEAAXW4LevelSoundEvent\@\@AEBVVec3\@\@H_N\@Z
     */
    virtual void playSynchronizedSound(enum class LevelSoundEvent, class Vec3 const&, int, bool);
    /**
     * @vftbl 172
     * @symbol ?onSynchedFlagUpdate\@Actor\@\@UEAAXH_J0\@Z
     */
    virtual void onSynchedFlagUpdate(int, __int64, __int64);
    /**
     * @vftbl 173
     * @symbol ?onSynchedDataUpdate\@Actor\@\@UEAAXH\@Z
     */
    virtual void onSynchedDataUpdate(int);
    /**
     * @vftbl 174
     * @symbol ?canAddPassenger\@Actor\@\@UEBA_NAEAV1\@\@Z
     */
    virtual bool canAddPassenger(class Actor&) const;
    /**
     * @vftbl 175
     * @symbol ?canPickupItem\@Actor\@\@UEBA_NAEBVItemStack\@\@\@Z
     */
    virtual bool canPickupItem(class ItemStack const&) const;
    /**
     * @vftbl 176
     * @symbol ?canBePulledIntoVehicle\@Actor\@\@UEBA_NXZ
     */
    virtual bool canBePulledIntoVehicle() const;
    /**
     * @vftbl 177
     * @symbol ?inCaravan\@Actor\@\@UEBA_NXZ
     */
    virtual bool inCaravan() const;
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178();
    /**
     * @vftbl 179
     * @symbol ?tickLeash\@Actor\@\@UEAAXXZ
     */
    virtual void tickLeash();
    /**
     * @vftbl 180
     * @symbol ?sendMotionPacketIfNeeded\@Actor\@\@UEAAXXZ
     */
    virtual void sendMotionPacketIfNeeded();
    /**
     * @vftbl 181
     * @symbol ?canSynchronizeNewEntity\@Actor\@\@UEBA_NXZ
     */
    virtual bool canSynchronizeNewEntity() const;
    /**
     * @vftbl 182
     * @symbol ?startSwimming\@Actor\@\@UEAAXXZ
     */
    virtual void startSwimming();
    /**
     * @vftbl 183
     * @symbol ?stopSwimming\@Actor\@\@UEAAXXZ
     */
    virtual void stopSwimming();
    /**
     * @vftbl 184
     * @symbol
     * ?buildDebugInfo\@Actor\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void buildDebugInfo(std::string&) const;
    /**
     * @vftbl 185
     * @symbol ?getCommandPermissionLevel\@Actor\@\@UEBA?AW4CommandPermissionLevel\@\@XZ
     */
    virtual enum class CommandPermissionLevel getCommandPermissionLevel() const;
    /**
     * @vftbl 186
     * @symbol ?isClientSide\@Actor\@\@UEBA_NXZ
     */
    virtual bool isClientSide() const;
    /**
     * @vftbl 187
     * @symbol ?getMutableAttribute\@Actor\@\@UEAAPEAVAttributeInstance\@\@AEBVAttribute\@\@\@Z
     */
    virtual class AttributeInstance* getMutableAttribute(class Attribute const&);
    /**
     * @vftbl 188
     * @symbol ?getAttribute\@Actor\@\@UEBAAEBVAttributeInstance\@\@AEBVAttribute\@\@\@Z
     */
    virtual class AttributeInstance const& getAttribute(class Attribute const&) const;
    /**
     * @vftbl 189
     * @symbol ?getDeathTime\@Actor\@\@UEBAHXZ
     */
    virtual int getDeathTime() const;
    /**
     * @vftbl 190
     * @symbol ?heal\@Actor\@\@UEAAXH\@Z
     */
    virtual void heal(int);
    /**
     * @vftbl 191
     * @symbol ?isInvertedHealAndHarm\@Actor\@\@UEBA_NXZ
     */
    virtual bool isInvertedHealAndHarm() const;
    /**
     * @vftbl 192
     * @symbol ?canBeAffected\@Actor\@\@UEBA_NI\@Z
     */
    virtual bool canBeAffected(unsigned int) const;
    /**
     * @vftbl 193
     * @symbol ?canBeAffectedByArrow\@Actor\@\@UEBA_NAEBVMobEffectInstance\@\@\@Z
     */
    virtual bool canBeAffectedByArrow(class MobEffectInstance const&) const;
    /**
     * @vftbl 194
     * @symbol ?onEffectAdded\@Actor\@\@UEAAXAEAVMobEffectInstance\@\@\@Z
     */
    virtual void onEffectAdded(class MobEffectInstance&);
    /**
     * @vftbl 195
     * @symbol ?onEffectUpdated\@Actor\@\@UEAAXAEAVMobEffectInstance\@\@\@Z
     */
    virtual void onEffectUpdated(class MobEffectInstance&);
    /**
     * @vftbl 196
     * @symbol ?onEffectRemoved\@Actor\@\@UEAAXAEAVMobEffectInstance\@\@\@Z
     */
    virtual void onEffectRemoved(class MobEffectInstance&);
    /**
     * @vftbl 197
     * @symbol ?canObstructSpawningAndBlockPlacement\@Actor\@\@UEBA_NXZ
     */
    virtual bool canObstructSpawningAndBlockPlacement() const;
    /**
     * @vftbl 198
     * @symbol ?getAnimationComponent\@Actor\@\@UEAAAEAVAnimationComponent\@\@XZ
     */
    virtual class AnimationComponent& getAnimationComponent();
    /**
     * @vftbl 199
     * @symbol ?openContainerComponent\@Actor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void openContainerComponent(class Player&);
    /**
     * @vftbl 200
     * @symbol ?swing\@Actor\@\@UEAAXXZ
     */
    virtual void swing();
    /**
     * @vftbl 201
     * @symbol ?useItem\@Actor\@\@UEAAXAEAVItemStackBase\@\@W4ItemUseMethod\@\@_N\@Z
     */
    virtual void useItem(class ItemStackBase&, enum class ItemUseMethod, bool);
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
     * @vftbl 204
     * @symbol
     * ?getDebugText\@Actor\@\@UEAAXAEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    virtual void getDebugText(std::vector<std::string>&);
    /**
     * @vftbl 205
     * @symbol ?getMapDecorationRotation\@Actor\@\@UEBAMXZ
     */
    virtual float getMapDecorationRotation() const;
    /**
     * @vftbl 206
     * @symbol ?getPassengerYRotation\@Actor\@\@UEBAMAEBV1\@\@Z
     */
    virtual float getPassengerYRotation(class Actor const&) const;
    /**
     * @vftbl 207
     * @symbol ?add\@Actor\@\@UEAA_NAEAVItemStack\@\@\@Z
     */
    virtual bool add(class ItemStack&);
    /**
     * @vftbl 208
     * @symbol ?drop\@Actor\@\@UEAA_NAEBVItemStack\@\@_N\@Z
     */
    virtual bool drop(class ItemStack const&, bool);
    /**
     * @vftbl 209
     * @symbol ?getInteraction\@Actor\@\@UEAA_NAEAVPlayer\@\@AEAVActorInteraction\@\@AEBVVec3\@\@\@Z
     */
    virtual bool getInteraction(class Player&, class ActorInteraction&, class Vec3 const&);
    /**
     * @vftbl 210
     * @symbol ?canDestroyBlock\@Actor\@\@UEBA_NAEBVBlock\@\@\@Z
     */
    virtual bool canDestroyBlock(class Block const&) const;
    /**
     * @vftbl 211
     * @symbol ?setAuxValue\@Actor\@\@UEAAXH\@Z
     */
    virtual void setAuxValue(int);
    /**
     * @vftbl 212
     * @symbol ?setSize\@Actor\@\@UEAAXMM\@Z
     */
    virtual void setSize(float, float);
    /**
     * @vftbl 213
     * @symbol ?onOrphan\@Actor\@\@UEAAXXZ
     */
    virtual void onOrphan();
    /**
     * @vftbl 214
     * @symbol ?wobble\@Actor\@\@UEAAXXZ
     */
    virtual void wobble();
    /**
     * @vftbl 215
     * @symbol ?wasHurt\@Actor\@\@UEAA_NXZ
     */
    virtual bool wasHurt();
    /**
     * @vftbl 216
     * @symbol ?startSpinAttack\@Actor\@\@UEAAXXZ
     */
    virtual void startSpinAttack();
    /**
     * @vftbl 217
     * @symbol ?stopSpinAttack\@Actor\@\@UEAAXXZ
     */
    virtual void stopSpinAttack();
    /**
     * @vftbl 218
     * @symbol ?setDamageNearbyMobs\@Actor\@\@UEAAX_N\@Z
     */
    virtual void setDamageNearbyMobs(bool);
    /**
     * @vftbl 219
     * @symbol __unk_vfn_219
     */
    virtual void __unk_vfn_219();
    /**
     * @vftbl 220
     * @symbol ?reloadLootTable\@Actor\@\@UEAAXXZ
     */
    virtual void reloadLootTable();
    /**
     * @vftbl 221
     * @symbol ?reloadLootTable\@Actor\@\@UEAAXAEBUEquipmentTableDefinition\@\@\@Z
     */
    virtual void reloadLootTable(struct EquipmentTableDefinition const&);
    /**
     * @vftbl 222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl 223
     * @symbol ?kill\@Actor\@\@UEAAXXZ
     */
    virtual void kill();
    /**
     * @vftbl 224
     * @symbol ?die\@Actor\@\@UEAAXAEBVActorDamageSource\@\@\@Z
     */
    virtual void die(class ActorDamageSource const&);
    /**
     * @vftbl 225
     * @symbol ?shouldDropDeathLoot\@Actor\@\@UEBA_NXZ
     */
    virtual bool shouldDropDeathLoot() const;
    /**
     * @vftbl 226
     * @symbol ?shouldTick\@Actor\@\@UEBA_NXZ
     */
    virtual bool shouldTick() const;
    /**
     * @vftbl 227
     * @symbol ?applySnapshot\@Actor\@\@UEAAXAEBVEntityContext\@\@0\@Z
     */
    virtual void applySnapshot(class EntityContext const&, class EntityContext const&);
    /**
     * @vftbl 228
     * @symbol ?getNextStep\@Actor\@\@UEAAMM\@Z
     */
    virtual float getNextStep(float);
    /**
     * @vftbl 229
     * @symbol ?getLootTable\@Actor\@\@UEAAPEAVLootTable\@\@XZ
     */
    virtual class LootTable* getLootTable();
    /**
     * @vftbl 230
     * @symbol ?onPush\@Actor\@\@UEAAXAEAV1\@\@Z
     */
    virtual void onPush(class Actor&);
    /**
     * @vftbl 231
     * @symbol ?getLastDeathPos\@Actor\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@XZ
     */
    virtual class std::optional<class BlockPos> getLastDeathPos() const;
    /**
     * @vftbl 232
     * @symbol ?getLastDeathDimension\@Actor\@\@UEBA?AV?$optional\@V?$AutomaticID\@VDimension\@\@H\@\@\@std\@\@XZ
     */
    virtual class std::optional<class AutomaticID<class Dimension, int>> getLastDeathDimension() const;
    /**
     * @vftbl 233
     * @symbol ?hasDiedBefore\@Actor\@\@UEBA_NXZ
     */
    virtual bool hasDiedBefore() const;
    /**
     * @vftbl 234
     * @symbol ?doWaterSplashEffect\@Actor\@\@UEAAXXZ
     */
    virtual void doWaterSplashEffect();
    /**
     * @vftbl 235
     * @symbol ?_shouldProvideFeedbackOnHandContainerItemSet\@Actor\@\@MEBA_NW4HandSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual bool _shouldProvideFeedbackOnHandContainerItemSet(enum class HandSlot, class ItemStack const&) const;
    /**
     * @vftbl 236
     * @symbol ?_shouldProvideFeedbackOnArmorSet\@Actor\@\@MEBA_NW4ArmorSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual bool _shouldProvideFeedbackOnArmorSet(enum class ArmorSlot, class ItemStack const&) const;
    /**
     * @vftbl 237
     * @symbol ?updateEntitySpecificMolangVariables\@Actor\@\@MEAAXAEAVRenderParams\@\@\@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);
    /**
     * @vftbl 238
     * @symbol ?shouldTryMakeStepSound\@Actor\@\@MEAA_NXZ
     */
    virtual bool shouldTryMakeStepSound();
    /**
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239();
    /**
     * @vftbl 240
     * @symbol ?_hurt\@Actor\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);
    /**
     * @vftbl 241
     * @symbol ?markHurt\@Actor\@\@MEAAXXZ
     */
    virtual void markHurt();
    /**
     * @vftbl 242
     * @symbol
     * ?_getAnimationComponent\@Actor\@\@MEAAAEAVAnimationComponent\@\@AEAV?$shared_ptr\@VAnimationComponent\@\@\@std\@\@W4AnimationComponentGroupType\@\@\@Z
     */
    virtual class AnimationComponent&
    _getAnimationComponent(class std::shared_ptr<class AnimationComponent>&, enum class AnimationComponentGroupType);
    /**
     * @vftbl 243
     * @symbol ?readAdditionalSaveData\@Actor\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    /**
     * @vftbl 244
     * @symbol ?addAdditionalSaveData\@Actor\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @vftbl 245
     * @symbol ?_playStepSound\@Actor\@\@MEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void _playStepSound(class BlockPos const&, class Block const&);
    /**
     * @vftbl 246
     * @symbol ?_playFlySound\@Actor\@\@MEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void _playFlySound(class BlockPos const&, class Block const&);
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247();
    /**
     * @vftbl 248
     * @symbol ?pushOutOfBlocks\@Actor\@\@MEAAXAEBVVec3\@\@\@Z
     */
    virtual void pushOutOfBlocks(class Vec3 const&);
    /**
     * @vftbl 249
     * @symbol ?spawnTrailBubbles\@Actor\@\@MEAAXXZ
     */
    virtual void spawnTrailBubbles();
    /**
     * @vftbl 250
     * @symbol ?updateInsideBlock\@Actor\@\@MEAAXXZ
     */
    virtual void updateInsideBlock();
    /**
     * @vftbl 251
     * @symbol ?_removePassenger\@Actor\@\@MEAAXAEBUActorUniqueID\@\@_N11\@Z
     */
    virtual void _removePassenger(struct ActorUniqueID const&, bool, bool, bool);
    /**
     * @vftbl 252
     * @symbol ?_onSizeUpdated\@Actor\@\@EEAAXXZ
     */
    virtual void _onSizeUpdated();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTOR
    /**
     * @symbol ?_doAutoAttackOnTouch\@Actor\@\@EEAAXAEAV1\@\@Z
     */
    MCVAPI void _doAutoAttackOnTouch(class Actor&);
    /**
     * @symbol ?_makeFlySound\@Actor\@\@MEBA_NXZ
     */
    MCVAPI bool _makeFlySound() const;
    /**
     * @symbol ?breaksFallingBlocks\@Actor\@\@UEBA_NXZ
     */
    MCVAPI bool breaksFallingBlocks() const;
    /**
     * @symbol ?canExistInPeaceful\@Actor\@\@UEBA_NXZ
     */
    MCVAPI bool canExistInPeaceful() const;
    /**
     * @symbol ?canMakeStepSound\@Actor\@\@MEBA_NXZ
     */
    MCVAPI bool canMakeStepSound() const;
    /**
     * @symbol ?canSeeInvisible\@Actor\@\@UEBA_NXZ
     */
    MCVAPI bool canSeeInvisible() const;
    /**
     * @symbol ?changeDimension\@Actor\@\@UEAAXAEBVChangeDimensionPacket\@\@\@Z
     */
    MCVAPI void changeDimension(class ChangeDimensionPacket const&);
    /**
     * @symbol ?getAlwaysShowNameTag\@Actor\@\@UEBA_NXZ
     */
    MCVAPI bool getAlwaysShowNameTag() const;
    /**
     * @symbol ?getDeletionDelayTimeSeconds\@Actor\@\@UEBAMXZ
     */
    MCVAPI float getDeletionDelayTimeSeconds() const;
    /**
     * @symbol ?getOutputSignal\@Actor\@\@UEBAHXZ
     */
    MCVAPI int getOutputSignal() const;
    /**
     * @symbol ?hasOutputSignal\@Actor\@\@UEBA_NE\@Z
     */
    MCVAPI bool hasOutputSignal(unsigned char) const;
    /**
     * @symbol ?interactPreventDefault\@Actor\@\@UEAA_NXZ
     */
    MCVAPI bool interactPreventDefault();
    /**
     * @symbol ?isCreativeModeAllowed\@Actor\@\@UEAA_NXZ
     */
    MCVAPI bool isCreativeModeAllowed();
    /**
     * @symbol ?isFishable\@Actor\@\@UEBA_NXZ
     */
    MCVAPI bool isFishable() const;
    /**
     * @symbol ?isLeashableType\@Actor\@\@UEAA_NXZ
     */
    MCVAPI bool isLeashableType();
    /**
     * @symbol ?isLocalPlayer\@Actor\@\@UEBA_NXZ
     */
    MCVAPI bool isLocalPlayer() const;
    /**
     * @symbol ?isPlayer\@Actor\@\@UEBA_NXZ
     */
    MCVAPI bool isPlayer() const;
    /**
     * @symbol ?isShootable\@Actor\@\@UEAA_NXZ
     */
    MCVAPI bool isShootable();
    /**
     * @symbol ?isTargetable\@Actor\@\@UEBA_NXZ
     */
    MCVAPI bool isTargetable() const;
    /**
     * @symbol ?renderDebugServerState\@Actor\@\@UEAAXAEBVOptions\@\@\@Z
     */
    MCVAPI void renderDebugServerState(class Options const&);
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Actor();
#endif
    /**
     * @symbol ??0Actor\@\@QEAA\@AEAVILevel\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Actor(class ILevel&, class EntityContext&);
    /**
     * @symbol ??0Actor\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Actor(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);
    /**
     * @symbol ?_sendDirtyActorData\@Actor\@\@QEAAXXZ
     */
    MCAPI void _sendDirtyActorData();
    /**
     * @symbol ?_setActorTypeId\@Actor\@\@QEAAXW4ActorType\@\@\@Z
     */
    MCAPI void _setActorTypeId(enum class ActorType);
    /**
     * @symbol ?_setLevelPtr\@Actor\@\@QEAAXPEAVILevel\@\@\@Z
     */
    MCAPI void _setLevelPtr(class ILevel*);
    /**
     * @symbol ?addCategory\@Actor\@\@QEAAXAEBW4ActorCategory\@\@\@Z
     */
    MCAPI void addCategory(enum class ActorCategory const&);
    /**
     * @symbol
     * ?addDefinitionGroup\@Actor\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addDefinitionGroup(std::string const&);
    /**
     * @symbol ?addEffect\@Actor\@\@QEAAXAEBVMobEffectInstance\@\@\@Z
     */
    MCAPI void addEffect(class MobEffectInstance const&);
    /**
     * @symbol ?addTag\@Actor\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool addTag(std::string const&);
    /**
     * @symbol ?applyImpulse\@Actor\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void applyImpulse(class Vec3 const&);
    /**
     * @symbol
     * ?buildDebugGroupInfo\@Actor\@\@QEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void buildDebugGroupInfo(std::string&) const;
    /**
     * @symbol ?buildForward\@Actor\@\@QEBA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 buildForward() const;
    /**
     * @symbol ?burn\@Actor\@\@QEAAXH_N\@Z
     */
    MCAPI void burn(int, bool);
    /**
     * @symbol ?calcCenterPos\@Actor\@\@QEBA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 calcCenterPos() const;
    /**
     * @symbol ?calculateAttackDamage\@Actor\@\@QEAAMAEAV1\@\@Z
     */
    MCAPI float calculateAttackDamage(class Actor&);
    /**
     * @symbol ?canAscendCurrentBlockByJumping\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool canAscendCurrentBlockByJumping() const;
    /**
     * @symbol ?canBeginOrContinueClimbingLadder\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool canBeginOrContinueClimbingLadder() const;
    /**
     * @symbol ?canCurrentlySwim\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool canCurrentlySwim() const;
    /**
     * @symbol ?canDescendBlockBelowByCrouching\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool canDescendBlockBelowByCrouching() const;
    /**
     * @symbol ?canFly\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool canFly() const;
    /**
     * @symbol ?canMate\@Actor\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool canMate(class Actor const&) const;
    /**
     * @symbol ?canReceiveMobEffectsFromGameplay\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool canReceiveMobEffectsFromGameplay() const;
    /**
     * @symbol ?canSeeDaylight\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool canSeeDaylight() const;
    /**
     * @symbol ?celebrateHunt\@Actor\@\@QEAAXH_N\@Z
     */
    MCAPI void celebrateHunt(int, bool);
    /**
     * @symbol ?clearFishingHookID\@Actor\@\@QEAAXXZ
     */
    MCAPI void clearFishingHookID();
    /**
     * @symbol ?closerThan\@Actor\@\@QEBA_NAEBV1\@M\@Z
     */
    MCAPI bool closerThan(class Actor const&, float) const;
    /**
     * @symbol ?closerThan\@Actor\@\@QEBA_NAEBV1\@MM\@Z
     */
    MCAPI bool closerThan(class Actor const&, float, float) const;
    /**
     * @symbol ?consumeItem\@Actor\@\@QEAAXAEAVItemActor\@\@H\@Z
     */
    MCAPI void consumeItem(class ItemActor&, int);
    /**
     * @symbol ?createUpdateEquipPacket\@Actor\@\@QEAA?AVUpdateEquipPacket\@\@H\@Z
     */
    MCAPI class UpdateEquipPacket createUpdateEquipPacket(int);
    /**
     * @symbol ?createUpdateTradePacket\@Actor\@\@QEAA?AVUpdateTradePacket\@\@H\@Z
     */
    MCAPI class UpdateTradePacket createUpdateTradePacket(int);
    /**
     * @symbol ?damageSensorComponentHurt\@Actor\@\@QEAA_NAEAMAEBVActorDamageSource\@\@_N\@Z
     */
    MCAPI bool damageSensorComponentHurt(float&, class ActorDamageSource const&, bool);
    /**
     * @symbol ?deregisterTagsFromLevelCache\@Actor\@\@QEAAXXZ
     */
    MCAPI void deregisterTagsFromLevelCache();
    /**
     * @symbol ?distanceSqrToBlockPosCenter\@Actor\@\@QEBAMAEBVBlockPos\@\@\@Z
     */
    MCAPI float distanceSqrToBlockPosCenter(class BlockPos const&) const;
    /**
     * @symbol ?distanceTo\@Actor\@\@QEBAMAEBV1\@\@Z
     */
    MCAPI float distanceTo(class Actor const&) const;
    /**
     * @symbol ?distanceTo\@Actor\@\@QEBAMAEBVVec3\@\@\@Z
     */
    MCAPI float distanceTo(class Vec3 const&) const;
    /**
     * @symbol ?distanceToSqr\@Actor\@\@QEBAMAEBV1\@\@Z
     */
    MCAPI float distanceToSqr(class Actor const&) const;
    /**
     * @symbol ?distanceToSqr\@Actor\@\@QEBAMAEBVVec3\@\@\@Z
     */
    MCAPI float distanceToSqr(class Vec3 const&) const;
    /**
     * @symbol ?dropLeash\@Actor\@\@QEAAX_N0\@Z
     */
    MCAPI void dropLeash(bool, bool);
    /**
     * @symbol ?dropTowards\@Actor\@\@QEAAXAEBVItemStack\@\@VVec3\@\@\@Z
     */
    MCAPI void dropTowards(class ItemStack const&, class Vec3);
    /**
     * @symbol ?evaluateSeatRotation\@Actor\@\@QEAAMAEBVRideableComponent\@\@_N\@Z
     */
    MCAPI float evaluateSeatRotation(class RideableComponent const&, bool);
    /**
     * @symbol
     * ?executeEvent\@Actor\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVVariantParameterList\@\@\@Z
     */
    MCAPI bool executeEvent(std::string const&, class VariantParameterList const&);
    /**
     * @symbol ?exitVehicle\@Actor\@\@QEAAX_N00\@Z
     */
    MCAPI void exitVehicle(bool, bool, bool);
    /**
     * @symbol ?fetchFishingHook\@Actor\@\@QEAAPEAVFishingHook\@\@XZ
     */
    MCAPI class FishingHook* fetchFishingHook();
    /**
     * @symbol
     * ?fetchNearbyActorsSorted\@Actor\@\@QEAA?AV?$vector\@UDistanceSortedActor\@\@V?$allocator\@UDistanceSortedActor\@\@\@std\@\@\@std\@\@AEBVVec3\@\@W4ActorType\@\@\@Z
     */
    MCAPI std::vector<struct DistanceSortedActor> fetchNearbyActorsSorted(class Vec3 const&, enum class ActorType);
    /**
     * @symbol ?forEachLeashedActor\@Actor\@\@QEAAXV?$function\@$$A6AXV?$not_null\@PEAVActor\@\@\@gsl\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachLeashedActor(class std::function<void(class gsl::not_null<class Actor*>)>);
    /**
     * @symbol ?getAABB\@Actor\@\@QEBAAEBVAABB\@\@XZ
     */
    MCAPI class AABB const& getAABB() const;
    /**
     * @symbol ?getAABBDim\@Actor\@\@QEBAAEBVVec2\@\@XZ
     */
    MCAPI class Vec2 const& getAABBDim() const;
    /**
     * @symbol ?getActiveEffectCount\@Actor\@\@QEBAHXZ
     */
    MCAPI int getActiveEffectCount() const;
    /**
     * @symbol ?getActorIdentifier\@Actor\@\@QEBAAEBUActorDefinitionIdentifier\@\@XZ
     */
    MCAPI struct ActorDefinitionIdentifier const& getActorIdentifier() const;
    /**
     * @symbol
     * ?getAllEffects\@Actor\@\@QEBAAEBV?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class MobEffectInstance> const& getAllEffects() const;
    /**
     * @symbol ?getArmorContainer\@Actor\@\@QEBAAEBVSimpleContainer\@\@XZ
     */
    MCAPI class SimpleContainer const& getArmorContainer() const;
    /**
     * @symbol ?getArmorContainer\@Actor\@\@QEAAAEAVSimpleContainer\@\@XZ
     */
    MCAPI class SimpleContainer& getArmorContainer();
    /**
     * @symbol ?getAttachPos\@Actor\@\@QEBA?AVVec3\@\@W4ActorLocation\@\@M\@Z
     */
    MCAPI class Vec3 getAttachPos(enum class ActorLocation, float) const;
    /**
     * @symbol ?getAttributes\@Actor\@\@QEBA?AV?$not_null\@PEBVBaseAttributeMap\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class BaseAttributeMap const*> getAttributes() const;
    /**
     * @symbol ?getAttributes\@Actor\@\@QEAA?AV?$not_null\@PEAVBaseAttributeMap\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class BaseAttributeMap*> getAttributes();
    /**
     * @symbol ?getBlockPosCurrentlyStandingOn\@Actor\@\@QEBA?AVBlockPos\@\@PEBV1\@\@Z
     */
    MCAPI class BlockPos getBlockPosCurrentlyStandingOn(class Actor const*) const;
    /**
     * @symbol ?getBlockTarget\@Actor\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos getBlockTarget() const;
    /**
     * @symbol ?getBrightness\@Actor\@\@QEBAMM\@Z
     */
    MCAPI float getBrightness(float) const;
    /**
     * @symbol ?getCanPickupItems\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool getCanPickupItems() const;
    /**
     * @symbol ?getCarriedItemInSlotPreferredBy\@Actor\@\@QEBAAEBVItemStack\@\@AEBV2\@\@Z
     */
    MCAPI class ItemStack const& getCarriedItemInSlotPreferredBy(class ItemStack const&) const;
    /**
     * @symbol ?getChainedDamageEffects\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool getChainedDamageEffects() const;
    /**
     * @symbol ?getCollidableMob\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool getCollidableMob() const;
    /**
     * @symbol ?getColor\@Actor\@\@QEBA?AW4PaletteColor\@\@XZ
     */
    MCAPI enum class PaletteColor getColor() const;
    /**
     * @symbol ?getColor2\@Actor\@\@QEBA?AW4PaletteColor\@\@XZ
     */
    MCAPI enum class PaletteColor getColor2() const;
    /**
     * @symbol ?getControllingSeat\@Actor\@\@QEBAHXZ
     */
    MCAPI int getControllingSeat() const;
    /**
     * @symbol ?getCurrentSwimAmount\@Actor\@\@QEBAMXZ
     */
    MCAPI float getCurrentSwimAmount() const;
    /**
     * @symbol ?getDamageNearbyMobs\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool getDamageNearbyMobs() const;
    /**
     * @symbol ?getDiffList\@Actor\@\@QEBAPEBVActorDefinitionDiffList\@\@XZ
     */
    MCAPI class ActorDefinitionDiffList const* getDiffList() const;
    /**
     * @symbol ?getDiffListNonConst\@Actor\@\@QEAAPEAVActorDefinitionDiffList\@\@XZ
     */
    MCAPI class ActorDefinitionDiffList* getDiffListNonConst();
    /**
     * @symbol ?getDimension\@Actor\@\@QEBAAEAVDimension\@\@XZ
     */
    MCAPI class Dimension& getDimension() const;
    /**
     * @symbol ?getDimensionBlockSource\@Actor\@\@QEBAAEAVBlockSource\@\@XZ
     */
    MCAPI class BlockSource& getDimensionBlockSource() const;
    /**
     * @symbol ?getDimensionBlockSourceConst\@Actor\@\@QEBAAEBVBlockSource\@\@XZ
     */
    MCAPI class BlockSource const& getDimensionBlockSourceConst() const;
    /**
     * @symbol ?getDimensionConst\@Actor\@\@QEBAAEBVDimension\@\@XZ
     */
    MCAPI class Dimension const& getDimensionConst() const;
    /**
     * @symbol ?getDimensionId\@Actor\@\@QEBA?AV?$AutomaticID\@VDimension\@\@H\@\@XZ
     */
    MCAPI class AutomaticID<class Dimension, int> getDimensionId() const;
    /**
     * @symbol ?getEffect\@Actor\@\@QEBAPEBVMobEffectInstance\@\@AEBVMobEffect\@\@\@Z
     */
    MCAPI class MobEffectInstance const* getEffect(class MobEffect const&) const;
    /**
     * @symbol ?getEffect\@Actor\@\@QEBAPEBVMobEffectInstance\@\@I\@Z
     */
    MCAPI class MobEffectInstance const* getEffect(unsigned int) const;
    /**
     * @symbol ?getEntityData\@Actor\@\@QEBAAEBVSynchedActorDataEntityWrapper\@\@XZ
     */
    MCAPI class SynchedActorDataEntityWrapper const& getEntityData() const;
    /**
     * @symbol ?getEntityData\@Actor\@\@QEAAAEAVSynchedActorDataEntityWrapper\@\@XZ
     */
    MCAPI class SynchedActorDataEntityWrapper& getEntityData();
    /**
     * @symbol ?getEntityRegistry\@Actor\@\@QEAA?AV?$StackRefResultT\@UEntityRegistryRefTraits\@\@\@\@XZ
     */
    MCAPI class StackRefResultT<struct EntityRegistryRefTraits> getEntityRegistry();
    /**
     * @symbol ?getEntityTerrainInterlockData\@Actor\@\@QEAAAEAVActorTerrainInterlockData\@\@XZ
     */
    MCAPI class ActorTerrainInterlockData& getEntityTerrainInterlockData();
    /**
     * @symbol ?getEquipmentSlotForItem\@Actor\@\@QEBA?AW4EquipmentSlot\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI enum class EquipmentSlot getEquipmentSlotForItem(class ItemStack const&) const;
    /**
     * @symbol ?getFallDistance\@Actor\@\@QEBAMXZ
     */
    MCAPI float getFallDistance() const;
    /**
     * @symbol ?getFirstAvailableSeatPos\@Actor\@\@QEBA_NAEAV1\@AEAVVec3\@\@\@Z
     */
    MCAPI bool getFirstAvailableSeatPos(class Actor&, class Vec3&) const;
    /**
     * @symbol ?getFirstPassenger\@Actor\@\@QEBAPEAV1\@XZ
     */
    MCAPI class Actor* getFirstPassenger() const;
    /**
     * @symbol ?getHandContainer\@Actor\@\@QEBAAEBVSimpleContainer\@\@XZ
     */
    MCAPI class SimpleContainer const& getHandContainer() const;
    /**
     * @symbol ?getHandContainer\@Actor\@\@QEAAAEAVSimpleContainer\@\@XZ
     */
    MCAPI class SimpleContainer& getHandContainer();
    /**
     * @symbol ?getHealth\@Actor\@\@QEBAHXZ
     */
    MCAPI int getHealth() const;
    /**
     * @symbol ?getHurtDir\@Actor\@\@QEBAHXZ
     */
    MCAPI int getHurtDir() const;
    /**
     * @symbol ?getHurtTime\@Actor\@\@QEBAHXZ
     */
    MCAPI int getHurtTime() const;
    /**
     * @symbol ?getInitializationMethod\@Actor\@\@QEAA?AW4InitializationMethod\@1\@XZ
     */
    MCAPI enum class Actor::InitializationMethod getInitializationMethod();
    /**
     * @symbol ?getInterpolatedPosition\@Actor\@\@QEBA?AVVec3\@\@M\@Z
     */
    MCAPI class Vec3 getInterpolatedPosition(float) const;
    /**
     * @symbol ?getInterpolatedRotation\@Actor\@\@QEBA?AVVec2\@\@M\@Z
     */
    MCAPI class Vec2 getInterpolatedRotation(float) const;
    /**
     * @symbol ?getIsExperienceDropEnabled\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool getIsExperienceDropEnabled() const;
    /**
     * @symbol ?getJumpDuration\@Actor\@\@QEBAHXZ
     */
    MCAPI int getJumpDuration() const;
    /**
     * @symbol ?getLastHurtByMobTime\@Actor\@\@QEAAHXZ
     */
    MCAPI int getLastHurtByMobTime();
    /**
     * @symbol ?getLastHurtByMobTimestamp\@Actor\@\@QEAAHXZ
     */
    MCAPI int getLastHurtByMobTimestamp();
    /**
     * @symbol ?getLastHurtCause\@Actor\@\@QEBA?AW4ActorDamageCause\@\@XZ
     */
    MCAPI enum class ActorDamageCause getLastHurtCause() const;
    /**
     * @symbol ?getLastHurtDamage\@Actor\@\@QEBAMXZ
     */
    MCAPI float getLastHurtDamage() const;
    /**
     * @symbol ?getLastHurtMobTimestamp\@Actor\@\@QEAAHXZ
     */
    MCAPI int getLastHurtMobTimestamp();
    /**
     * @symbol ?getLastHurtTimestamp\@Actor\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getLastHurtTimestamp() const;
    /**
     * @symbol ?getLeashHolder\@Actor\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getLeashHolder() const;
    /**
     * @symbol ?getLevel\@Actor\@\@QEBAAEBVLevel\@\@XZ
     */
    MCAPI class Level const& getLevel() const;
    /**
     * @symbol ?getLevel\@Actor\@\@QEAAAEAVLevel\@\@XZ
     */
    MCAPI class Level& getLevel();
    /**
     * @symbol ?getLevelTimeStamp\@Actor\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getLevelTimeStamp() const;
    /**
     * @symbol ?getLimitedLifetimeTicks\@Actor\@\@QEBAHXZ
     */
    MCAPI int getLimitedLifetimeTicks() const;
    /**
     * @symbol ?getLinks\@Actor\@\@QEBA?AV?$vector\@UActorLink\@\@V?$allocator\@UActorLink\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ActorLink> getLinks() const;
    /**
     * @symbol ?getMarkVariant\@Actor\@\@QEBAHXZ
     */
    MCAPI int getMarkVariant() const;
    /**
     * @symbol ?getMaxAutoStep\@Actor\@\@QEBAMXZ
     */
    MCAPI float getMaxAutoStep() const;
    /**
     * @symbol ?getMaxHealth\@Actor\@\@QEBAHXZ
     */
    MCAPI int getMaxHealth() const;
    /**
     * @symbol ?getMolangVariables\@Actor\@\@QEAAAEAVMolangVariableMap\@\@XZ
     */
    MCAPI class MolangVariableMap& getMolangVariables();
    /**
     * @symbol
     * ?getMovementProxy\@Actor\@\@QEBA?AV?$not_null\@V?$shared_ptr\@$$CBUIActorMovementProxy\@\@\@std\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class std::shared_ptr<struct IActorMovementProxy const>> getMovementProxy() const;
    /**
     * @symbol
     * ?getMovementProxy\@Actor\@\@QEAA?AV?$not_null\@V?$shared_ptr\@UIActorMovementProxy\@\@\@std\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class std::shared_ptr<struct IActorMovementProxy>> getMovementProxy();
    /**
     * @symbol ?getOffhandSlot\@Actor\@\@QEBAAEBVItemStack\@\@XZ
     */
    MCAPI class ItemStack const& getOffhandSlot() const;
    /**
     * @symbol ?getOnDeathExperience\@Actor\@\@QEAAHXZ
     */
    MCAPI int getOnDeathExperience();
    /**
     * @symbol ?getOrAddDynamicProperties\@Actor\@\@QEAAAEAVDynamicProperties\@\@XZ
     */
    MCAPI class DynamicProperties& getOrAddDynamicProperties();
    /**
     * @symbol ?getOrCreateUniqueID\@Actor\@\@QEBAAEBUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID const& getOrCreateUniqueID() const;
    /**
     * @symbol ?getOwner\@Actor\@\@QEBAPEAVMob\@\@XZ
     */
    MCAPI class Mob* getOwner() const;
    /**
     * @symbol ?getOwnerId\@Actor\@\@QEBA?BUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID const getOwnerId() const;
    /**
     * @symbol ?getPassengerIndex\@Actor\@\@QEBAHAEBV1\@\@Z
     */
    MCAPI int getPassengerIndex(class Actor const&) const;
    /**
     * @symbol
     * ?getPersistingTradeOffers\@Actor\@\@QEAA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> getPersistingTradeOffers();
    /**
     * @symbol ?getPersistingTradeRiches\@Actor\@\@QEAAHXZ
     */
    MCAPI int getPersistingTradeRiches();
    /**
     * @symbol ?getPlayerOwner\@Actor\@\@QEBAPEAVPlayer\@\@XZ
     */
    MCAPI class Player* getPlayerOwner() const;
    /**
     * @symbol ?getPosDelta\@Actor\@\@QEBAAEBVVec3\@\@XZ
     */
    MCAPI class Vec3 const& getPosDelta() const;
    /**
     * @symbol ?getPosDeltaNonConst\@Actor\@\@QEAAAEAVVec3\@\@XZ
     */
    MCAPI class Vec3& getPosDeltaNonConst();
    /**
     * @symbol ?getRadius\@Actor\@\@QEBAMXZ
     */
    MCAPI float getRadius() const;
    /**
     * @symbol ?getRandom\@Actor\@\@QEBAAEAVRandom\@\@XZ
     */
    MCAPI class Random& getRandom() const;
    /**
     * @symbol ?getRenderParams\@Actor\@\@QEAAAEAVRenderParams\@\@XZ
     */
    MCAPI class RenderParams& getRenderParams();
    /**
     * @symbol ?getRidingHeight\@Actor\@\@QEBAMXZ
     */
    MCAPI float getRidingHeight() const;
    /**
     * @symbol ?getRotation\@Actor\@\@QEBAAEBVVec2\@\@XZ
     */
    MCAPI class Vec2 const& getRotation() const;
    /**
     * @symbol ?getRotationPrev\@Actor\@\@QEBAAEBVVec2\@\@XZ
     */
    MCAPI class Vec2 const& getRotationPrev() const;
    /**
     * @symbol ?getRuntimeID\@Actor\@\@QEBA?AVActorRuntimeID\@\@XZ
     */
    MCAPI class ActorRuntimeID getRuntimeID() const;
    /**
     * @symbol ?getShakeTime\@Actor\@\@QEBAHXZ
     */
    MCAPI int getShakeTime() const;
    /**
     * @symbol ?getSkinID\@Actor\@\@QEBAHXZ
     */
    MCAPI int getSkinID() const;
    /**
     * @symbol ?getSlideOffset\@Actor\@\@QEBA?AVVec2\@\@XZ
     */
    MCAPI class Vec2 getSlideOffset() const;
    /**
     * @symbol ?getSpatialNetworkData\@Actor\@\@QEAAAEAVSpatialActorNetworkData\@\@XZ
     */
    MCAPI class SpatialActorNetworkData& getSpatialNetworkData();
    /**
     * @symbol ?getSpatialNetworkData\@Actor\@\@QEBAAEBVSpatialActorNetworkData\@\@XZ
     */
    MCAPI class SpatialActorNetworkData const& getSpatialNetworkData() const;
    /**
     * @symbol ?getSpeedInMetersPerSecond\@Actor\@\@QEBAMXZ
     */
    MCAPI float getSpeedInMetersPerSecond() const;
    /**
     * @symbol ?getStrength\@Actor\@\@QEBAHXZ
     */
    MCAPI int getStrength() const;
    /**
     * @symbol ?getStrengthMax\@Actor\@\@QEBAHXZ
     */
    MCAPI int getStrengthMax() const;
    /**
     * @symbol ?getStructuralIntegrity\@Actor\@\@QEBAHXZ
     */
    MCAPI int getStructuralIntegrity() const;
    /**
     * @symbol ?getSwimAmount\@Actor\@\@QEBAMM\@Z
     */
    MCAPI float getSwimAmount(float) const;
    /**
     * @symbol
     * ?getTags\@Actor\@\@QEBA?BV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> const getTags() const;
    /**
     * @symbol ?getTarget\@Actor\@\@QEBAPEAV1\@XZ
     */
    MCAPI class Actor* getTarget() const;
    /**
     * @symbol ?getTargetId\@Actor\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getTargetId() const;
    /**
     * @symbol ?getTradeInterest\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool getTradeInterest() const;
    /**
     * @symbol ?getTradeOffers\@Actor\@\@QEAAPEAVMerchantRecipeList\@\@XZ
     */
    MCAPI class MerchantRecipeList* getTradeOffers();
    /**
     * @symbol ?getTradingPlayer\@Actor\@\@QEBAPEAVPlayer\@\@XZ
     */
    MCAPI class Player* getTradingPlayer() const;
    /**
     * @symbol ?getVariant\@Actor\@\@QEBAHXZ
     */
    MCAPI int getVariant() const;
    /**
     * @symbol ?getVehicle\@Actor\@\@QEBAPEAV1\@XZ
     */
    MCAPI class Actor* getVehicle() const;
    /**
     * @symbol ?getVehicleRoot\@Actor\@\@QEBAPEAV1\@XZ
     */
    MCAPI class Actor* getVehicleRoot() const;
    /**
     * @symbol ?getVehicleRuntimeID\@Actor\@\@QEBA?AVActorRuntimeID\@\@XZ
     */
    MCAPI class ActorRuntimeID getVehicleRuntimeID() const;
    /**
     * @symbol ?getVerticalSpeedInMetersPerSecond\@Actor\@\@QEBAMXZ
     */
    MCAPI float getVerticalSpeedInMetersPerSecond() const;
    /**
     * @symbol ?getViewVector\@Actor\@\@QEBA?AVVec3\@\@M\@Z
     */
    MCAPI class Vec3 getViewVector(float) const;
    /**
     * @symbol ?getWeakEntity\@Actor\@\@QEBA?BV?$WeakRefT\@UEntityRefTraits\@\@\@\@XZ
     */
    MCAPI class WeakRefT<struct EntityRefTraits> const getWeakEntity() const;
    /**
     * @symbol ?getYHeadRot\@Actor\@\@QEBAMXZ
     */
    MCAPI float getYHeadRot() const;
    /**
     * @symbol ?getYHeadRotationsNewOld\@Actor\@\@QEBA?AUInterpolationPair\@\@XZ
     */
    MCAPI struct InterpolationPair getYHeadRotationsNewOld() const;
    /**
     * @symbol ?hasAnyEffects\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasAnyEffects() const;
    /**
     * @symbol ?hasAnyVisibleEffects\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasAnyVisibleEffects() const;
    /**
     * @symbol ?hasBeenHurtByMobInLastTicks\@Actor\@\@QEBA_NH\@Z
     */
    MCAPI bool hasBeenHurtByMobInLastTicks(int) const;
    /**
     * @symbol ?hasCategory\@Actor\@\@QEBA_NW4ActorCategory\@\@\@Z
     */
    MCAPI bool hasCategory(enum class ActorCategory) const;
    /**
     * @symbol
     * ?hasDefinitionGroup\@Actor\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool hasDefinitionGroup(std::string const&) const;
    /**
     * @symbol ?hasDimension\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasDimension() const;
    /**
     * @symbol ?hasEffect\@Actor\@\@QEBA_NAEBVMobEffect\@\@\@Z
     */
    MCAPI bool hasEffect(class MobEffect const&) const;
    /**
     * @symbol ?hasFamily\@Actor\@\@QEBA_NAEBVHashedString\@\@\@Z
     */
    MCAPI bool hasFamily(class HashedString const&) const;
    /**
     * @symbol ?hasFishingHook\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasFishingHook() const;
    /**
     * @symbol ?hasLevel\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasLevel() const;
    /**
     * @symbol ?hasPassenger\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasPassenger() const;
    /**
     * @symbol ?hasPersistingTrade\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasPersistingTrade() const;
    /**
     * @symbol ?hasPlayerPassenger\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasPlayerPassenger() const;
    /**
     * @symbol ?hasPriorityAmmunition\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasPriorityAmmunition() const;
    /**
     * @symbol ?hasRuntimeID\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasRuntimeID() const;
    /**
     * @symbol ?hasSaddle\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasSaddle() const;
    /**
     * @symbol ?hasTag\@Actor\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool hasTag(std::string const&) const;
    /**
     * @symbol ?hasTags\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasTags() const;
    /**
     * @symbol ?hasTeleported\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasTeleported() const;
    /**
     * @symbol ?hasTotemEquipped\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasTotemEquipped() const;
    /**
     * @symbol ?hasType\@Actor\@\@QEBA_NW4ActorType\@\@\@Z
     */
    MCAPI bool hasType(enum class ActorType) const;
    /**
     * @symbol ?hasUniqueID\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool hasUniqueID() const;
    /**
     * @symbol ?healEffects\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void healEffects(int);
    /**
     * @symbol ?hurt\@Actor\@\@QEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    MCAPI bool hurt(class ActorDamageSource const&, float, bool, bool);
    /**
     * @symbol ?inDownwardFlowingLiquid\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool inDownwardFlowingLiquid() const;
    /**
     * @symbol ?initActorProperties\@Actor\@\@QEAAXXZ
     */
    MCAPI void initActorProperties();
    /**
     * @symbol ?initParams\@Actor\@\@QEAAXAEAVVariantParameterList\@\@\@Z
     */
    MCAPI void initParams(class VariantParameterList&);
    /**
     * @symbol ?initParams\@Actor\@\@QEAAXAEAVRenderParams\@\@\@Z
     */
    MCAPI void initParams(class RenderParams&);
    /**
     * @symbol ?isActorLocationInMaterial\@Actor\@\@QEBA_NW4ActorLocation\@\@W4MaterialType\@\@\@Z
     */
    MCAPI bool isActorLocationInMaterial(enum class ActorLocation, enum class MaterialType) const;
    /**
     * @symbol ?isAdventure\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isAdventure() const;
    /**
     * @symbol ?isAngry\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isAngry() const;
    /**
     * @symbol ?isAttackableGamemode\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isAttackableGamemode() const;
    /**
     * @symbol ?isAutonomous\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isAutonomous() const;
    /**
     * @symbol ?isBaby\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isBaby() const;
    /**
     * @symbol ?isBreakingObstruction\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isBreakingObstruction() const;
    /**
     * @symbol ?isBribed\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isBribed() const;
    /**
     * @symbol ?isCharged\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isCharged() const;
    /**
     * @symbol ?isChested\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isChested() const;
    /**
     * @symbol ?isClimbing\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isClimbing() const;
    /**
     * @symbol ?isControlledByLocalInstance\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isControlledByLocalInstance() const;
    /**
     * @symbol ?isCreative\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isCreative() const;
    /**
     * @symbol ?isDancing\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isDancing() const;
    /**
     * @symbol ?isDead\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isDead() const;
    /**
     * @symbol ?isDoorBreaker\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isDoorBreaker() const;
    /**
     * @symbol ?isDoorOpener\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isDoorOpener() const;
    /**
     * @symbol ?isGlobal\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isGlobal() const;
    /**
     * @symbol ?isIgnited\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isIgnited() const;
    /**
     * @symbol ?isImmersedInWater\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isImmersedInWater() const;
    /**
     * @symbol ?isInClouds\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isInClouds() const;
    /**
     * @symbol ?isInContactWithWater\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isInContactWithWater() const;
    /**
     * @symbol ?isInLove\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isInLove() const;
    /**
     * @symbol ?isInPrecipitation\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isInPrecipitation() const;
    /**
     * @symbol ?isInRain\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isInRain() const;
    /**
     * @symbol ?isInScaffolding\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isInScaffolding() const;
    /**
     * @symbol ?isInSnow\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isInSnow() const;
    /**
     * @symbol ?isInThunderstorm\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isInThunderstorm() const;
    /**
     * @symbol ?isInWaterOrRain\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isInWaterOrRain() const;
    /**
     * @symbol ?isInWorld\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isInWorld() const;
    /**
     * @symbol ?isInsideBorderBlock\@Actor\@\@QEBA_NM\@Z
     */
    MCAPI bool isInsideBorderBlock(float) const;
    /**
     * @symbol ?isInsidePortal\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isInsidePortal() const;
    /**
     * @symbol ?isJumping\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isJumping() const;
    /**
     * @symbol ?isLayingDown\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isLayingDown() const;
    /**
     * @symbol ?isLeashed\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isLeashed() const;
    /**
     * @symbol ?isMovedToLimbo\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isMovedToLimbo() const;
    /**
     * @symbol ?isMovedToUnloadedChunk\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isMovedToUnloadedChunk() const;
    /**
     * @symbol ?isMoving\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isMoving() const;
    /**
     * @symbol ?isOrphan\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isOrphan() const;
    /**
     * @symbol ?isOutOfControl\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isOutOfControl() const;
    /**
     * @symbol ?isOverScaffolding\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isOverScaffolding() const;
    /**
     * @symbol ?isPacified\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isPacified() const;
    /**
     * @symbol ?isPassenger\@Actor\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool isPassenger(class Actor const&) const;
    /**
     * @symbol ?isPersistent\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isPersistent() const;
    /**
     * @symbol ?isPlayingDead\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isPlayingDead() const;
    /**
     * @symbol ?isPowered\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isPowered() const;
    /**
     * @symbol ?isRemoved\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isRemoved() const;
    /**
     * @symbol ?isResting\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isResting() const;
    /**
     * @symbol ?isRiding\@Actor\@\@QEBA_NPEAV1\@\@Z
     */
    MCAPI bool isRiding(class Actor*) const;
    /**
     * @symbol ?isRiding\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isRiding() const;
    /**
     * @symbol ?isSheared\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isSheared() const;
    /**
     * @symbol ?isSitting\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isSitting() const;
    /**
     * @symbol ?isSneaking\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isSneaking() const;
    /**
     * @symbol ?isSpectator\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isSpectator() const;
    /**
     * @symbol ?isStackable\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isStackable() const;
    /**
     * @symbol ?isStanding\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isStanding() const;
    /**
     * @symbol ?isSurvival\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isSurvival() const;
    /**
     * @symbol ?isSwimmer\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isSwimmer() const;
    /**
     * @symbol ?isSwimming\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isSwimming() const;
    /**
     * @symbol ?isTame\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isTame() const;
    /**
     * @symbol ?isTickingEntity\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isTickingEntity() const;
    /**
     * @symbol ?isTouchingDamageBlock\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isTouchingDamageBlock() const;
    /**
     * @symbol ?isTrading\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isTrading() const;
    /**
     * @symbol ?isTrusting\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isTrusting() const;
    /**
     * @symbol ?isType\@Actor\@\@QEBA_NW4ActorType\@\@\@Z
     */
    MCAPI bool isType(enum class ActorType) const;
    /**
     * @symbol ?isUseNewTradeScreen\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isUseNewTradeScreen() const;
    /**
     * @symbol ?isWASDControlled\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isWASDControlled() const;
    /**
     * @symbol ?isWalker\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isWalker() const;
    /**
     * @symbol ?isWorldBuilder\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool isWorldBuilder() const;
    /**
     * @symbol ?lerpTo\@Actor\@\@QEAAXAEBVVec3\@\@AEBVVec2\@\@MH\@Z
     */
    MCAPI void lerpTo(class Vec3 const&, class Vec2 const&, float, int);
    /**
     * @symbol ?lerpTo\@Actor\@\@QEAAXAEBVVec3\@\@AEBVVec2\@\@H\@Z
     */
    MCAPI void lerpTo(class Vec3 const&, class Vec2 const&, int);
    /**
     * @symbol ?loadEntityFlags\@Actor\@\@QEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void loadEntityFlags(class CompoundTag const&, class DataLoadHelper&);
    /**
     * @symbol ?lovePartnerId\@Actor\@\@QEBAAEBUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID const& lovePartnerId() const;
    /**
     * @symbol ?migrateUniqueID\@Actor\@\@QEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void migrateUniqueID(struct ActorUniqueID);
    /**
     * @symbol ?move\@Actor\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void move(class Vec3 const&);
    /**
     * @symbol ?moveRelative\@Actor\@\@QEAAXMMMM\@Z
     */
    MCAPI void moveRelative(float, float, float, float);
    /**
     * @symbol ?moveTo\@Actor\@\@QEAAXAEBVVec3\@\@AEBVVec2\@\@\@Z
     */
    MCAPI void moveTo(class Vec3 const&, class Vec2 const&);
    /**
     * @symbol ?onAffectedByWaterBottle\@Actor\@\@QEAAXXZ
     */
    MCAPI void onAffectedByWaterBottle();
    /**
     * @symbol ?onClimbableBlock\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool onClimbableBlock() const;
    /**
     * @symbol ?onOnewayCollision\@Actor\@\@QEAAXAEBVAABB\@\@\@Z
     */
    MCAPI void onOnewayCollision(class AABB const&);
    /**
     * @symbol ??9Actor\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class Actor const&) const;
    /**
     * @symbol ??8Actor\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class Actor const&) const;
    /**
     * @symbol ?pickUpItem\@Actor\@\@QEAAXAEAVItemActor\@\@H\@Z
     */
    MCAPI void pickUpItem(class ItemActor&, int);
    /**
     * @symbol ?playMovementSound\@Actor\@\@QEAAXXZ
     */
    MCAPI void playMovementSound();
    /**
     * @symbol ?playSound\@Actor\@\@QEAAXAEBVIConstBlockSource\@\@W4LevelSoundEvent\@\@AEBVVec3\@\@H\@Z
     */
    MCAPI void playSound(class IConstBlockSource const&, enum class LevelSoundEvent, class Vec3 const&, int);
    /**
     * @symbol ?playSound\@Actor\@\@QEAAXW4LevelSoundEvent\@\@AEBVVec3\@\@H\@Z
     */
    MCAPI void playSound(enum class LevelSoundEvent, class Vec3 const&, int);
    /**
     * @symbol ?playSound\@Actor\@\@QEAAXW4LevelSoundEvent\@\@AEBVVec3\@\@AEBVBlock\@\@\@Z
     */
    MCAPI void playSound(enum class LevelSoundEvent, class Vec3 const&, class Block const&);
    /**
     * @symbol ?positionAllPassengers\@Actor\@\@QEAAXXZ
     */
    MCAPI void positionAllPassengers();
    /**
     * @symbol ?postSplashGameEvent\@Actor\@\@QEAAXXZ
     */
    MCAPI void postSplashGameEvent();
    /**
     * @symbol ?pullInEntity\@Actor\@\@QEAA_NAEAV1\@\@Z
     */
    MCAPI bool pullInEntity(class Actor&);
    /**
     * @symbol ?pushBackActionEventToActionQueue\@Actor\@\@QEAAXVActionEvent\@\@\@Z
     */
    MCAPI void pushBackActionEventToActionQueue(class ActionEvent);
    /**
     * @symbol ?queueBBUpdateFromDefinition\@Actor\@\@QEAAXXZ
     */
    MCAPI void queueBBUpdateFromDefinition();
    /**
     * @symbol ?queueBBUpdateFromValue\@Actor\@\@QEAAXAEBVVec2\@\@\@Z
     */
    MCAPI void queueBBUpdateFromValue(class Vec2 const&);
    /**
     * @symbol ?refreshComponents\@Actor\@\@QEAAXXZ
     */
    MCAPI void refreshComponents();
    /**
     * @symbol ?reload\@Actor\@\@QEAAXXZ
     */
    MCAPI void reload();
    /**
     * @symbol ?removeAllEffects\@Actor\@\@QEAAXXZ
     */
    MCAPI void removeAllEffects();
    /**
     * @symbol ?removeAllPassengers\@Actor\@\@QEAAX_N0\@Z
     */
    MCAPI void removeAllPassengers(bool, bool);
    /**
     * @symbol
     * ?removeDefinitionGroup\@Actor\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void removeDefinitionGroup(std::string const&);
    /**
     * @symbol ?removeEffect\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void removeEffect(int);
    /**
     * @symbol ?removePersistingTrade\@Actor\@\@QEAAXXZ
     */
    MCAPI void removePersistingTrade();
    /**
     * @symbol
     * ?removeTag\@Actor\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool removeTag(std::string const&);
    /**
     * @symbol ?resetSlideYOffset\@Actor\@\@QEAAXXZ
     */
    MCAPI void resetSlideYOffset();
    /**
     * @symbol ?saveEntityFlags\@Actor\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void saveEntityFlags(class CompoundTag&) const;
    /**
     * @symbol ?saveLinks\@Actor\@\@QEBA?AV?$unique_ptr\@VListTag\@\@U?$default_delete\@VListTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class ListTag> saveLinks() const;
    /**
     * @symbol
     * ?savePersistingTrade\@Actor\@\@QEAAXV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@H\@Z
     */
    MCAPI void savePersistingTrade(std::unique_ptr<class CompoundTag>, int);
    /**
     * @symbol
     * ?sendActorDefinitionEventTriggered\@Actor\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void sendActorDefinitionEventTriggered(std::string const&);
    /**
     * @symbol ?sendMotionToServer\@Actor\@\@QEAAXXZ
     */
    MCAPI void sendMotionToServer();
    /**
     * @symbol ?serializationSetHealth\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void serializationSetHealth(int);
    /**
     * @symbol ?setAABB\@Actor\@\@QEAAXAEBVAABB\@\@\@Z
     */
    MCAPI void setAABB(class AABB const&);
    /**
     * @symbol ?setAABBDim\@Actor\@\@QEAAXAEBVVec2\@\@\@Z
     */
    MCAPI void setAABBDim(class Vec2 const&);
    /**
     * @symbol ?setActorRendererId\@Actor\@\@QEAAXVHashedString\@\@\@Z
     */
    MCAPI void setActorRendererId(class HashedString);
    /**
     * @symbol ?setAutonomous\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setAutonomous(bool);
    /**
     * @symbol ?setBaseDefinition\@Actor\@\@QEAAXAEBUActorDefinitionIdentifier\@\@_N1\@Z
     */
    MCAPI void setBaseDefinition(struct ActorDefinitionIdentifier const&, bool, bool);
    /**
     * @symbol ?setBlockTarget\@Actor\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setBlockTarget(class BlockPos const&);
    /**
     * @symbol ?setBreakingObstruction\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setBreakingObstruction(bool);
    /**
     * @symbol ?setCanClimb\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setCanClimb(bool);
    /**
     * @symbol ?setCanFly\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setCanFly(bool);
    /**
     * @symbol ?setChainedDamageEffects\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setChainedDamageEffects(bool);
    /**
     * @symbol ?setCharged\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setCharged(bool);
    /**
     * @symbol ?setClimbing\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setClimbing(bool);
    /**
     * @symbol ?setColor\@Actor\@\@QEAAXW4PaletteColor\@\@\@Z
     */
    MCAPI void setColor(enum class PaletteColor);
    /**
     * @symbol ?setColor2\@Actor\@\@QEAAXW4PaletteColor\@\@\@Z
     */
    MCAPI void setColor2(enum class PaletteColor);
    /**
     * @symbol ?setControllingSeat\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setControllingSeat(int);
    /**
     * @symbol ?setDancing\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setDancing(bool);
    /**
     * @symbol ?setDead\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setDead(bool);
    /**
     * @symbol ?setDimension\@Actor\@\@QEAAXV?$WeakRefT\@U?$SharePtrRefTraits\@VDimension\@\@\@\@\@\@\@Z
     */
    MCAPI void setDimension(class WeakRefT<struct SharePtrRefTraits<class Dimension>>);
    /**
     * @symbol ?setDoorBreaker\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setDoorBreaker(bool);
    /**
     * @symbol ?setDoorOpener\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setDoorOpener(bool);
    /**
     * @symbol ?setEnchanted\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setEnchanted(bool);
    /**
     * @symbol ?setFallDistance\@Actor\@\@QEAAXM\@Z
     */
    MCAPI void setFallDistance(float);
    /**
     * @symbol ?setFishingHookID\@Actor\@\@QEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void setFishingHookID(struct ActorUniqueID);
    /**
     * @symbol ?setGlobal\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setGlobal(bool);
    /**
     * @symbol ?setHurtDir\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setHurtDir(int);
    /**
     * @symbol ?setHurtTime\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setHurtTime(int);
    /**
     * @symbol ?setInLove\@Actor\@\@QEAAXPEAV1\@\@Z
     */
    MCAPI void setInLove(class Actor*);
    /**
     * @symbol ?setInterpolation\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setInterpolation(bool);
    /**
     * @symbol ?setInvisible\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setInvisible(bool);
    /**
     * @symbol ?setIsExperienceDropEnabled\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setIsExperienceDropEnabled(bool);
    /**
     * @symbol ?setJumpDuration\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setJumpDuration(int);
    /**
     * @symbol ?setJumping\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setJumping(bool);
    /**
     * @symbol ?setLastHitBB\@Actor\@\@QEAAXAEBVVec3\@\@0\@Z
     */
    MCAPI void setLastHitBB(class Vec3 const&, class Vec3 const&);
    /**
     * @symbol ?setLayingDown\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setLayingDown(bool);
    /**
     * @symbol ?setLeashHolder\@Actor\@\@QEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void setLeashHolder(struct ActorUniqueID);
    /**
     * @symbol ?setLimitedLifetimeTicks\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setLimitedLifetimeTicks(int);
    /**
     * @symbol ?setMarkVariant\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setMarkVariant(int);
    /**
     * @symbol ?setMovedToLimbo\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setMovedToLimbo(bool);
    /**
     * @symbol ?setMovedToUnloadedChunk\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setMovedToUnloadedChunk(bool);
    /**
     * @symbol ?setMoving\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setMoving(bool);
    /**
     * @symbol ?setPersistent\@Actor\@\@QEAAXXZ
     */
    MCAPI void setPersistent();
    /**
     * @symbol ?setPos\@Actor\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void setPos(class Vec3 const&);
    /**
     * @symbol ?setPosDirectLegacy\@Actor\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void setPosDirectLegacy(class Vec3 const&);
    /**
     * @symbol ?setPosPrev\@Actor\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void setPosPrev(class Vec3 const&);
    /**
     * @symbol ?setPrevPosRotSetThisTick\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setPrevPosRotSetThisTick(bool);
    /**
     * @symbol ?setPreviousPosRot\@Actor\@\@QEAAXXZ
     */
    MCAPI void setPreviousPosRot();
    /**
     * @symbol ?setResting\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setResting(bool);
    /**
     * @symbol ?setRotationDirectly\@Actor\@\@QEAAXAEBVVec2\@\@\@Z
     */
    MCAPI void setRotationDirectly(class Vec2 const&);
    /**
     * @symbol ?setRotationPrev\@Actor\@\@QEAAXAEBVVec2\@\@\@Z
     */
    MCAPI void setRotationPrev(class Vec2 const&);
    /**
     * @symbol ?setRotationPrevY\@Actor\@\@QEAAXM\@Z
     */
    MCAPI void setRotationPrevY(float);
    /**
     * @symbol ?setRotationWrapped\@Actor\@\@QEAAXAEBVVec2\@\@\@Z
     */
    MCAPI void setRotationWrapped(class Vec2 const&);
    /**
     * @symbol ?setRotationX\@Actor\@\@QEAAXM\@Z
     */
    MCAPI void setRotationX(float);
    /**
     * @symbol ?setRotationY\@Actor\@\@QEAAXM\@Z
     */
    MCAPI void setRotationY(float);
    /**
     * @symbol ?setRuntimeID\@Actor\@\@QEAAXVActorRuntimeID\@\@\@Z
     */
    MCAPI void setRuntimeID(class ActorRuntimeID);
    /**
     * @symbol ?setSaddle\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setSaddle(bool);
    /**
     * @symbol ?setScared\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setScared(bool);
    /**
     * @symbol ?setShakeTime\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setShakeTime(int);
    /**
     * @symbol ?setSkinID\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setSkinID(int);
    /**
     * @symbol ?setStrength\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setStrength(int);
    /**
     * @symbol ?setStrengthMax\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setStrengthMax(int);
    /**
     * @symbol ?setStructuralIntegrity\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setStructuralIntegrity(int);
    /**
     * @symbol ?setStunned\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setStunned(bool);
    /**
     * @symbol ?setSwimmer\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setSwimmer(bool);
    /**
     * @symbol ?setTempted\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setTempted(bool);
    /**
     * @symbol ?setTradeInterest\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setTradeInterest(bool);
    /**
     * @symbol ?setTradingPlayer\@Actor\@\@QEAAXPEAVPlayer\@\@\@Z
     */
    MCAPI void setTradingPlayer(class Player*);
    /**
     * @symbol ?setUniqueID\@Actor\@\@QEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void setUniqueID(struct ActorUniqueID);
    /**
     * @symbol ?setVariant\@Actor\@\@QEAAXH\@Z
     */
    MCAPI void setVariant(int);
    /**
     * @symbol ?setVelocity\@Actor\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void setVelocity(class Vec3 const&);
    /**
     * @symbol ?setWASDControlled\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setWASDControlled(bool);
    /**
     * @symbol ?setWalker\@Actor\@\@QEAAX_N\@Z
     */
    MCAPI void setWalker(bool);
    /**
     * @symbol ?setYHeadRot\@Actor\@\@QEAAXM\@Z
     */
    MCAPI void setYHeadRot(float);
    /**
     * @symbol ?setYHeadRotO\@Actor\@\@QEAAXM\@Z
     */
    MCAPI void setYHeadRotO(float);
    /**
     * @symbol ?setYHeadRotations\@Actor\@\@QEAAXMM\@Z
     */
    MCAPI void setYHeadRotations(float, float);
    /**
     * @symbol ?shouldOrphan\@Actor\@\@QEAA_NAEAVBlockSource\@\@\@Z
     */
    MCAPI bool shouldOrphan(class BlockSource&);
    /**
     * @symbol ?shouldUpdateEffects\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool shouldUpdateEffects() const;
    /**
     * @symbol ?spawnEatParticles\@Actor\@\@QEAAXAEBVItemStack\@\@H\@Z
     */
    MCAPI void spawnEatParticles(class ItemStack const&, int);
    /**
     * @symbol ?spinAttack\@Actor\@\@QEAAXXZ
     */
    MCAPI void spinAttack();
    /**
     * @symbol ?stopRiding\@Actor\@\@QEAAX_N00\@Z
     */
    MCAPI void stopRiding(bool, bool, bool);
    /**
     * @symbol ?teleportPassengersTo\@Actor\@\@QEAAXAEBVVec3\@\@HH\@Z
     */
    MCAPI void teleportPassengersTo(class Vec3 const&, int, int);
    /**
     * @symbol ?tick\@Actor\@\@QEAA_NAEAVBlockSource\@\@\@Z
     */
    MCAPI bool tick(class BlockSource&);
    /**
     * @symbol ?transferTickingArea\@Actor\@\@QEAAXAEAVDimension\@\@\@Z
     */
    MCAPI void transferTickingArea(class Dimension&);
    /**
     * @symbol
     * ?tryGetEquippableSlotAllowedItems\@Actor\@\@QEBAPEBV?$vector\@VItemDescriptor\@\@V?$allocator\@VItemDescriptor\@\@\@std\@\@\@std\@\@H\@Z
     */
    MCAPI std::vector<class ItemDescriptor> const* tryGetEquippableSlotAllowedItems(int) const;
    /**
     * @symbol ?tryGetEquippableSlotForItem\@Actor\@\@QEBA?AV?$optional\@H\@std\@\@VItemDescriptor\@\@\@Z
     */
    MCAPI class std::optional<int> tryGetEquippableSlotForItem(class ItemDescriptor) const;
    /**
     * @symbol ?updateAnimationComponentOnServer\@Actor\@\@QEAAXXZ
     */
    MCAPI void updateAnimationComponentOnServer();
    /**
     * @symbol ?updateDescription\@Actor\@\@QEAAXXZ
     */
    MCAPI void updateDescription();
    /**
     * @symbol ?updateDimensionChunkMove\@Actor\@\@QEAAXXZ
     */
    MCAPI void updateDimensionChunkMove();
    /**
     * @symbol ?updateInvisibilityStatus\@Actor\@\@QEAAXXZ
     */
    MCAPI void updateInvisibilityStatus();
    /**
     * @symbol ?updateMolangVariables\@Actor\@\@QEAAXAEAVRenderParams\@\@\@Z
     */
    MCAPI void updateMolangVariables(class RenderParams&);
    /**
     * @symbol ?updateTickingData\@Actor\@\@QEAAXXZ
     */
    MCAPI void updateTickingData();
    /**
     * @symbol ?useSaddle\@Actor\@\@QEAA_NAEAVItemStackBase\@\@PEAVPlayer\@\@\@Z
     */
    MCAPI bool useSaddle(class ItemStackBase&, class Player*);
    /**
     * @symbol ?wasLastHitByPlayer\@Actor\@\@QEAA_NXZ
     */
    MCAPI bool wasLastHitByPlayer();
    /**
     * @symbol ?wasLoadedFromNBTThisFrame\@Actor\@\@QEBA_NXZ
     */
    MCAPI bool wasLoadedFromNBTThisFrame() const;
    /**
     * @symbol ?_moveRelative\@Actor\@\@SAXAEAVVec3\@\@MMMMM\@Z
     */
    MCAPI static void _moveRelative(class Vec3&, float, float, float, float, float);
    /**
     * @symbol ?buildForward\@Actor\@\@SA?AVVec3\@\@AEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI static class Vec3 buildForward(struct IActorMovementProxy const&);
    /**
     * @symbol ?canBeginOrContinueClimbingLadder\@Actor\@\@SA_NAEBUIActorMovementProxy\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static bool
    canBeginOrContinueClimbingLadder(struct IActorMovementProxy const&, class IConstBlockSource const&);
    /**
     * @symbol
     * ?getBlockPosCurrentlyStandingOn\@Actor\@\@SA?AVBlockPos\@\@AEBVVec3\@\@VAABB\@\@AEBVIConstBlockSource\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@\@Z
     */
    MCAPI static class BlockPos
    getBlockPosCurrentlyStandingOn(class Vec3 const&, class AABB, class IConstBlockSource const&, class optional_ref<class GetCollisionShapeInterface const>);
    /**
     * @symbol
     * ?getBlockPosCurrentlyStandingOn\@Actor\@\@SA?AVBlockPos\@\@AEBUIActorMovementProxy\@\@PEBU3\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static class BlockPos
    getBlockPosCurrentlyStandingOn(struct IActorMovementProxy const&, struct IActorMovementProxy const*, class IConstBlockSource const&);
    /**
     * @symbol ?getCenter\@Actor\@\@SA?AVVec3\@\@MAEBUAABBShapeComponent\@\@AEBUStateVectorComponent\@\@M\@Z
     */
    MCAPI static class Vec3
    getCenter(float, struct AABBShapeComponent const&, struct StateVectorComponent const&, float);
    /**
     * @symbol
     * ?getEffect\@Actor\@\@SAPEBVMobEffectInstance\@\@AEBV?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@std\@\@AEBVMobEffect\@\@\@Z
     */
    MCAPI static class MobEffectInstance const*
    getEffect(std::vector<class MobEffectInstance> const&, class MobEffect const&);
    /**
     * @symbol ?getInterpolatedRotation\@Actor\@\@SA?AVVec2\@\@AEBV2\@0M\@Z
     */
    MCAPI static class Vec2 getInterpolatedRotation(class Vec2 const&, class Vec2 const&, float);
    /**
     * @symbol ?getLiquidAABB\@Actor\@\@SA?AVAABB\@\@AEBV2\@W4MaterialType\@\@\@Z
     */
    MCAPI static class AABB getLiquidAABB(class AABB const&, enum class MaterialType);
    /**
     * @symbol ?getLiquidFlowStrength\@Actor\@\@SAMW4MaterialType\@\@\@Z
     */
    MCAPI static float getLiquidFlowStrength(enum class MaterialType);
    /**
     * @symbol ?getStatusFlag\@Actor\@\@SA_NAEBVSynchedActorData\@\@W4ActorFlags\@\@\@Z
     */
    MCAPI static bool getStatusFlag(class SynchedActorData const&, enum class ActorFlags);
    /**
     * @symbol ?getViewVector\@Actor\@\@SA?AVVec3\@\@AEBUIActorMovementProxy\@\@M\@Z
     */
    MCAPI static class Vec3 getViewVector(struct IActorMovementProxy const&, float);
    /**
     * @symbol ?getViewVector\@Actor\@\@SA?AVVec3\@\@AEBVVec2\@\@0M\@Z
     */
    MCAPI static class Vec3 getViewVector(class Vec2 const&, class Vec2 const&, float);
    /**
     * @symbol ?isImmersedInWater\@Actor\@\@SA_NAEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI static bool isImmersedInWater(struct IActorMovementProxy const&);
    /**
     * @symbol ?isImmobile\@Actor\@\@SA_NAEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI static bool isImmobile(struct IActorMovementProxy const&);
    /**
     * @symbol ?isInScaffolding\@Actor\@\@SA_NAEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI static bool isInScaffolding(struct IActorMovementProxy const&);
    /**
     * @symbol ?isSitting\@Actor\@\@SA_NAEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI static bool isSitting(struct IActorMovementProxy const&);
    /**
     * @symbol ?isStanding\@Actor\@\@SA_NAEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI static bool isStanding(struct IActorMovementProxy const&);
    /**
     * @symbol ?onClimbableBlock\@Actor\@\@SA_NAEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI static bool onClimbableBlock(struct IActorMovementProxy const&);
    /**
     * @symbol ?onClimbableBlock\@Actor\@\@SA_NAEBUIActorMovementProxy\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static bool onClimbableBlock(struct IActorMovementProxy const&, class IConstBlockSource const&);
    /**
     * @symbol ?tryGetFromComponent\@Actor\@\@SAPEAV1\@AEAVActorOwnerComponent\@\@_N\@Z
     */
    MCAPI static class Actor* tryGetFromComponent(class ActorOwnerComponent&, bool);
    /**
     * @symbol ?tryGetFromComponent\@Actor\@\@SAPEBV1\@AEBVActorOwnerComponent\@\@_N\@Z
     */
    MCAPI static class Actor const* tryGetFromComponent(class ActorOwnerComponent const&, bool);
    /**
     * @symbol ?tryGetFromEntity\@Actor\@\@SAPEAV1\@AEAVEntityContext\@\@_N\@Z
     */
    MCAPI static class Actor* tryGetFromEntity(class EntityContext&, bool);
    /**
     * @symbol ?tryGetFromEntity\@Actor\@\@SAPEBV1\@AEBVEntityContext\@\@_N\@Z
     */
    MCAPI static class Actor const* tryGetFromEntity(class EntityContext const&, bool);
    /**
     * @symbol ?tryGetFromEntity\@Actor\@\@SAPEAV1\@V?$StackRefResultT\@UEntityRefTraits\@\@\@\@_N\@Z
     */
    MCAPI static class Actor* tryGetFromEntity(class StackRefResultT<struct EntityRefTraits>, bool);
    /**
     * @symbol ?tryGetFromEntity\@Actor\@\@SAPEAV1\@AEBVStrictEntityContext\@\@AEAVEntityRegistry\@\@_N\@Z
     */
    MCAPI static class Actor* tryGetFromEntity(class StrictEntityContext const&, class EntityRegistry&, bool);

    // protected:
    /**
     * @symbol
     * ?_assignActorMovementProxy\@Actor\@\@IEAAXV?$not_null\@V?$shared_ptr\@UIActorMovementProxy\@\@\@std\@\@\@gsl\@\@\@Z
     */
    MCAPI void _assignActorMovementProxy(class gsl::not_null<class std::shared_ptr<struct IActorMovementProxy>>);
    /**
     * @symbol ?_drop\@Actor\@\@IEAAPEBVItemActor\@\@AEBVItemStack\@\@_N\@Z
     */
    MCAPI class ItemActor const* _drop(class ItemStack const&, bool);
    /**
     * @symbol
     * ?_getAllEffectsNonConst\@Actor\@\@IEAAAEAV?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class MobEffectInstance>& _getAllEffectsNonConst();
    /**
     * @symbol ?_initializeMaxAutoStep\@Actor\@\@IEAAXM\@Z
     */
    MCAPI void _initializeMaxAutoStep(float);
    /**
     * @symbol ?_isDeathLootAllowed\@Actor\@\@IEBA_NXZ
     */
    MCAPI bool _isDeathLootAllowed() const;
    /**
     * @symbol ?_isHeadInWater\@Actor\@\@IEBA_NXZ
     */
    MCAPI bool _isHeadInWater() const;
    /**
     * @symbol
     * ?_setArmorContainer\@Actor\@\@IEAAXV?$unique_ptr\@VSimpleContainer\@\@U?$default_delete\@VSimpleContainer\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void _setArmorContainer(std::unique_ptr<class SimpleContainer>);
    /**
     * @symbol ?_setDimensionTransitionComponent\@Actor\@\@IEAAXV?$AutomaticID\@VDimension\@\@H\@\@0H\@Z
     */
    MCAPI void _setDimensionTransitionComponent(
        class AutomaticID<class Dimension, int>,
        class AutomaticID<class Dimension, int>,
        int
    );
    /**
     * @symbol
     * ?_setHandContainer\@Actor\@\@IEAAXV?$unique_ptr\@VSimpleContainer\@\@U?$default_delete\@VSimpleContainer\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void _setHandContainer(std::unique_ptr<class SimpleContainer>);
    /**
     * @symbol ?_setHandContainerItem\@Actor\@\@IEAAXAEBVItemStack\@\@W4HandSlot\@\@\@Z
     */
    MCAPI void _setHandContainerItem(class ItemStack const&, enum class HandSlot);
    /**
     * @symbol ?_setHeightOffset\@Actor\@\@IEAAXM\@Z
     */
    MCAPI void _setHeightOffset(float);
    /**
     * @symbol ?_setPos\@Actor\@\@IEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void _setPos(class Vec3 const&);
    /**
     * @symbol ?_setPosPrev\@Actor\@\@IEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void _setPosPrev(class Vec3 const&);
    /**
     * @symbol ?enableAutoSendPosRot\@Actor\@\@IEAAX_N\@Z
     */
    MCAPI void enableAutoSendPosRot(bool);
    /**
     * @symbol ?updateWaterState\@Actor\@\@IEAAXXZ
     */
    MCAPI void updateWaterState();
    /**
     * @symbol ?getBlockWhenClimbing\@Actor\@\@KAAEBVBlock\@\@AEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI static class Block const& getBlockWhenClimbing(struct IActorMovementProxy const&);

    // private:
    /**
     * @symbol ?_addActorBuiltInComponents\@Actor\@\@AEAA?AUBuiltInActorComponents\@\@XZ
     */
    MCAPI struct BuiltInActorComponents _addActorBuiltInComponents();
    /**
     * @symbol ?_addActorNonBuiltInComponents\@Actor\@\@AEAAXXZ
     */
    MCAPI void _addActorNonBuiltInComponents();
    /**
     * @symbol ?_damageNearbyMobs\@Actor\@\@AEAAXXZ
     */
    MCAPI void _damageNearbyMobs();
    /**
     * @symbol ?_defaultInitEquipmentDropChances\@Actor\@\@AEAAXXZ
     */
    MCAPI void _defaultInitEquipmentDropChances();
    /**
     * @symbol ?_initAliasProperties\@Actor\@\@AEAAXXZ
     */
    MCAPI void _initAliasProperties();
    /**
     * @symbol ?_initializeLeashRopeSystem\@Actor\@\@AEAAXPEAV1\@\@Z
     */
    MCAPI void _initializeLeashRopeSystem(class Actor*);
    /**
     * @symbol ?_isItemStackNetManagerEnabled\@Actor\@\@AEBA_NXZ
     */
    MCAPI bool _isItemStackNetManagerEnabled() const;
    /**
     * @symbol ?_moveHitboxTo\@Actor\@\@AEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void _moveHitboxTo(class Vec3 const&);
    /**
     * @symbol ?_serializeComponents\@Actor\@\@AEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void _serializeComponents(class CompoundTag&) const;
    /**
     * @symbol ?_setupServerAnimationComponent\@Actor\@\@AEAAXXZ
     */
    MCAPI void _setupServerAnimationComponent();
    /**
     * @symbol ?_tryPlantWitherRose\@Actor\@\@AEAAXXZ
     */
    MCAPI void _tryPlantWitherRose();
    /**
     * @symbol ?_updateComposition\@Actor\@\@AEAAX_N\@Z
     */
    MCAPI void _updateComposition(bool);

protected:
private:
    /**
     * @symbol ?DAMAGE_NEARBY_MOBS_DURATION\@Actor\@\@0HB
     */
    MCAPI static int const DAMAGE_NEARBY_MOBS_DURATION;
    /**
     * @symbol ?DEFAULT_MAX_DISTANCE_OPTIMIZATION\@Actor\@\@0MB
     */
    MCAPI static float const DEFAULT_MAX_DISTANCE_OPTIMIZATION;
    /**
     * @symbol ?DEFAULT_MAX_TICK_DELAY_OPTIMIZATION\@Actor\@\@0_KB
     */
    MCAPI static unsigned __int64 const DEFAULT_MAX_TICK_DELAY_OPTIMIZATION;
};
