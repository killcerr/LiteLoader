#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DirectPlayerMovementProxy {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIRECTPLAYERMOVEMENTPROXY
public:
    DirectPlayerMovementProxy& operator=(DirectPlayerMovementProxy const&) = delete;
    DirectPlayerMovementProxy(DirectPlayerMovementProxy const&)            = delete;
    DirectPlayerMovementProxy()                                            = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIRECTPLAYERMOVEMENTPROXY
    /**
     * @symbol ?_applyStateToComponents\@DirectPlayerMovementProxy\@\@MEAAXXZ
     */
    MCVAPI void _applyStateToComponents();
    /**
     * @symbol ?_extractStateFromComponents\@DirectPlayerMovementProxy\@\@MEAAXXZ
     */
    MCVAPI void _extractStateFromComponents();
    /**
     * @symbol ?_getPlayer\@DirectPlayerMovementProxy\@\@UEAAPEAVPlayer\@\@XZ
     */
    MCVAPI class Player* _getPlayer();
    /**
     * @symbol ?_onMovePlayerPacketNormal\@DirectPlayerMovementProxy\@\@UEAAXAEBVVec3\@\@AEBVVec2\@\@M\@Z
     */
    MCVAPI void _onMovePlayerPacketNormal(class Vec3 const&, class Vec2 const&, float);
    /**
     * @symbol ?_resetPos\@DirectPlayerMovementProxy\@\@UEAAX_N\@Z
     */
    MCVAPI void _resetPos(bool);
    /**
     * @symbol ?_setPositionMode\@DirectPlayerMovementProxy\@\@UEAAXH\@Z
     */
    MCVAPI void _setPositionMode(int);
    /**
     * @symbol ?areHandsBusy\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool areHandsBusy() const;
    /**
     * @symbol ?checkMovementStats\@DirectPlayerMovementProxy\@\@UEAAXAEBVVec3\@\@\@Z
     */
    MCVAPI void checkMovementStats(class Vec3 const&);
    /**
     * @symbol ?fireEventPersonaEmotePlayed\@DirectPlayerMovementProxy\@\@UEAAX_N\@Z
     */
    MCVAPI void fireEventPersonaEmotePlayed(bool);
    /**
     * @symbol ?getAbilities\@DirectPlayerMovementProxy\@\@UEBAAEBVLayeredAbilities\@\@XZ
     */
    MCVAPI class LayeredAbilities const& getAbilities() const;
    /**
     * @symbol ?getAbilityBool\@DirectPlayerMovementProxy\@\@UEBA_NW4AbilitiesIndex\@\@\@Z
     */
    MCVAPI bool getAbilityBool(enum class AbilitiesIndex) const;
    /**
     * @symbol ?getAbilityFloat\@DirectPlayerMovementProxy\@\@UEBAMW4AbilitiesIndex\@\@\@Z
     */
    MCVAPI float getAbilityFloat(enum class AbilitiesIndex) const;
    /**
     * @symbol ?getBob\@DirectPlayerMovementProxy\@\@UEBAMXZ
     */
    MCVAPI float getBob() const;
    /**
     * @symbol ?getClientInstance\@DirectPlayerMovementProxy\@\@UEAAPEAUIClientInstanceProxy\@\@XZ
     */
    MCVAPI struct IClientInstanceProxy* getClientInstance();
    /**
     * @symbol ?getClientInstance\@DirectPlayerMovementProxy\@\@UEBAPEBUIClientInstanceProxy\@\@XZ
     */
    MCVAPI struct IClientInstanceProxy const* getClientInstance() const;
    /**
     * @symbol ?getCurrentTick\@DirectPlayerMovementProxy\@\@UEBAAEBUTick\@\@XZ
     */
    MCVAPI struct Tick const& getCurrentTick() const;
    /**
     * @symbol ?getGlidingTicks\@DirectPlayerMovementProxy\@\@UEBAHXZ
     */
    MCVAPI int getGlidingTicks() const;
    /**
     * @symbol ?getItemUseMovementModifier\@DirectPlayerMovementProxy\@\@UEBAMXZ
     */
    MCVAPI float getItemUseMovementModifier() const;
    /**
     * @symbol ?getJumpRidingScale\@DirectPlayerMovementProxy\@\@UEAAMXZ
     */
    MCVAPI float getJumpRidingScale();
    /**
     * @symbol ?getLastBob\@DirectPlayerMovementProxy\@\@UEBAMXZ
     */
    MCVAPI float getLastBob() const;
    /**
     * @symbol ?getLastDelta\@DirectPlayerMovementProxy\@\@UEBA?AVVec3\@\@XZ
     */
    MCVAPI class Vec3 getLastDelta() const;
    /**
     * @symbol ?getLastPos\@DirectPlayerMovementProxy\@\@UEBA?AVVec3\@\@XZ
     */
    MCVAPI class Vec3 getLastPos() const;
    /**
     * @symbol ?getLoadingState\@DirectPlayerMovementProxy\@\@UEBA?AW4LoadingState\@\@XZ
     */
    MCVAPI enum class LoadingState getLoadingState() const;
    /**
     * @symbol ?getPlayerPaddleForce\@DirectPlayerMovementProxy\@\@UEBAMW4Side\@\@\@Z
     */
    MCVAPI float getPlayerPaddleForce(enum class Side) const;
    /**
     * @symbol ?getSneakHeight\@DirectPlayerMovementProxy\@\@UEBAMXZ
     */
    MCVAPI float getSneakHeight() const;
    /**
     * @symbol ?getVRMoveAdjustAngle\@DirectPlayerMovementProxy\@\@UEBAMXZ
     */
    MCVAPI float getVRMoveAdjustAngle() const;
    /**
     * @symbol ?isArmorFlyEnabled\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isArmorFlyEnabled() const;
    /**
     * @symbol ?isAutoJumpEnabled\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isAutoJumpEnabled() const;
    /**
     * @symbol ?isAutoJumping\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isAutoJumping() const;
    /**
     * @symbol ?isEmoting\@DirectPlayerMovementProxy\@\@UEAA_NXZ
     */
    MCVAPI bool isEmoting();
    /**
     * @symbol ?isFlying\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isFlying() const;
    /**
     * @symbol ?isLocalPlayer\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isLocalPlayer() const;
    /**
     * @symbol ?isPaddling\@DirectPlayerMovementProxy\@\@UEBA_NW4Side\@\@\@Z
     */
    MCVAPI bool isPaddling(enum class Side) const;
    /**
     * @symbol ?isServerAuthoritativeMovement\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isServerAuthoritativeMovement() const;
    /**
     * @symbol ?isSleeping\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isSleeping() const;
    /**
     * @symbol ?isSlowedByItemUse\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isSlowedByItemUse() const;
    /**
     * @symbol ?isSpectator\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isSpectator() const;
    /**
     * @symbol ?isUsingItem\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isUsingItem() const;
    /**
     * @symbol ?registerFramewiseActionOrStop\@DirectPlayerMovementProxy\@\@UEAAXXZ
     */
    MCVAPI void registerFramewiseActionOrStop();
    /**
     * @symbol ?sendClientAuthInput\@DirectPlayerMovementProxy\@\@UEAAXXZ
     */
    MCVAPI void sendClientAuthInput();
    /**
     * @symbol ?sendInput\@DirectPlayerMovementProxy\@\@UEAAXXZ
     */
    MCVAPI void sendInput();
    /**
     * @symbol ?sendPacket\@DirectPlayerMovementProxy\@\@UEAAXAEAVPassengerJumpPacket\@\@\@Z
     */
    MCVAPI void sendPacket(class PassengerJumpPacket&);
    /**
     * @symbol ?sendPacket\@DirectPlayerMovementProxy\@\@UEAAXAEAVPlayerActionPacket\@\@\@Z
     */
    MCVAPI void sendPacket(class PlayerActionPacket&);
    /**
     * @symbol ?sendPlayerInput\@DirectPlayerMovementProxy\@\@UEAAXXZ
     */
    MCVAPI void sendPlayerInput();
    /**
     * @symbol ?sendPlayerMove\@DirectPlayerMovementProxy\@\@UEAAXXZ
     */
    MCVAPI void sendPlayerMove();
    /**
     * @symbol ?sendPosition\@DirectPlayerMovementProxy\@\@UEAAXXZ
     */
    MCVAPI void sendPosition();
    /**
     * @symbol ?sendRequestAbilityPacket\@DirectPlayerMovementProxy\@\@UEAAXW4AbilitiesIndex\@\@_N\@Z
     */
    MCVAPI void sendRequestAbilityPacket(enum class AbilitiesIndex, bool);
    /**
     * @symbol ?setAbilityBool\@DirectPlayerMovementProxy\@\@UEAAXW4AbilitiesIndex\@\@_N\@Z
     */
    MCVAPI void setAbilityBool(enum class AbilitiesIndex, bool);
    /**
     * @symbol ?setAbilityFloat\@DirectPlayerMovementProxy\@\@UEAAXW4AbilitiesIndex\@\@M\@Z
     */
    MCVAPI void setAbilityFloat(enum class AbilitiesIndex, float);
    /**
     * @symbol ?setAutoJumping\@DirectPlayerMovementProxy\@\@UEAAX_N\@Z
     */
    MCVAPI void setAutoJumping(bool);
    /**
     * @symbol ?setBob\@DirectPlayerMovementProxy\@\@UEAAXM\@Z
     */
    MCVAPI void setBob(float);
    /**
     * @symbol ?setCurrentLocalMoveVelocity\@DirectPlayerMovementProxy\@\@UEAAXAEBVVec2\@\@\@Z
     */
    MCVAPI void setCurrentLocalMoveVelocity(class Vec2 const&);
    /**
     * @symbol ?setEmotingStatus\@DirectPlayerMovementProxy\@\@UEAAX_N\@Z
     */
    MCVAPI void setEmotingStatus(bool);
    /**
     * @symbol ?setHandsBusy\@DirectPlayerMovementProxy\@\@UEAAX_N\@Z
     */
    MCVAPI void setHandsBusy(bool);
    /**
     * @symbol ?setJumpRidingScale\@DirectPlayerMovementProxy\@\@UEAAXM\@Z
     */
    MCVAPI void setJumpRidingScale(float);
    /**
     * @symbol ?setLastBob\@DirectPlayerMovementProxy\@\@UEAAXM\@Z
     */
    MCVAPI void setLastBob(float);
    /**
     * @symbol ?setLastDelta\@DirectPlayerMovementProxy\@\@UEAAXAEBVVec3\@\@\@Z
     */
    MCVAPI void setLastDelta(class Vec3 const&);
    /**
     * @symbol ?setLastPos\@DirectPlayerMovementProxy\@\@UEAAXAEBVVec3\@\@\@Z
     */
    MCVAPI void setLastPos(class Vec3 const&);
    /**
     * @symbol ?setPlayerPaddleForce\@DirectPlayerMovementProxy\@\@UEAAXW4Side\@\@M\@Z
     */
    MCVAPI void setPlayerPaddleForce(enum class Side, float);
    /**
     * @symbol ?setWasAutoJumping\@DirectPlayerMovementProxy\@\@UEAAX_N\@Z
     */
    MCVAPI void setWasAutoJumping(bool);
    /**
     * @symbol ?shouldSendPosition\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool shouldSendPosition() const;
    /**
     * @symbol ?startGliding\@DirectPlayerMovementProxy\@\@UEAAXXZ
     */
    MCVAPI void startGliding();
    /**
     * @symbol ?stopGliding\@DirectPlayerMovementProxy\@\@UEAAXXZ
     */
    MCVAPI void stopGliding();
    /**
     * @symbol ?tryAsPlayer\@DirectPlayerMovementProxy\@\@UEAAPEAUIPlayerMovementProxy\@\@XZ
     */
    MCVAPI struct IPlayerMovementProxy* tryAsPlayer();
    /**
     * @symbol ?tryAsPlayer\@DirectPlayerMovementProxy\@\@UEBAPEBUIPlayerMovementProxy\@\@XZ
     */
    MCVAPI struct IPlayerMovementProxy const* tryAsPlayer() const;
    /**
     * @symbol ?tryGetPlayerActionComponent\@DirectPlayerMovementProxy\@\@UEAAPEAUPlayerActionComponent\@\@XZ
     */
    MCVAPI struct PlayerActionComponent* tryGetPlayerActionComponent();
    /**
     * @symbol ?updateClientPlayerInputState\@DirectPlayerMovementProxy\@\@UEAAXXZ
     */
    MCVAPI void updateClientPlayerInputState();
    /**
     * @symbol ?updateTouch\@DirectPlayerMovementProxy\@\@UEAAXXZ
     */
    MCVAPI void updateTouch();
    /**
     * @symbol ?wasAutoJumping\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool wasAutoJumping() const;
#endif
};
