#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/PlayerPositionModeComponent.h"

namespace PlayerMovement {
/**
 * @symbol ?applyInputLocks\@PlayerMovement\@\@YAXAEBUClientInputLockComponent\@\@AEAUMoveInputState\@\@\@Z
 */
MCAPI void applyInputLocks(struct ClientInputLockComponent const&, struct MoveInputState&);
/**
 * @symbol
 * ?calculateMoveVector\@PlayerMovement\@\@YA?AVVec2\@\@AEBUMoveInputState\@\@AEBVLayeredAbilities\@\@AEBVSynchedActorData\@\@_NPEBUSneakingComponent\@\@\@Z
 */
MCAPI class Vec2
calculateMoveVector(struct MoveInputState const&, class LayeredAbilities const&, class SynchedActorData const&, bool, struct SneakingComponent const*);
/**
 * @symbol ?calculateMoveVector\@PlayerMovement\@\@YA?AVVec2\@\@AEBUMoveInputState\@\@AEAUIPlayerMovementProxy\@\@\@Z
 */
MCAPI class Vec2 calculateMoveVector(struct MoveInputState const&, struct IPlayerMovementProxy&);
/**
 * @symbol ?clearInputState\@PlayerMovement\@\@YAXAEAUMoveInputComponent\@\@\@Z
 */
MCAPI void clearInputState(struct MoveInputComponent&);
/**
 * @symbol
 * ?getControllingPassengerID\@PlayerMovement\@\@YA?AUActorUniqueID\@\@AEBV?$vector\@UStrictActorIDEntityContextPair\@\@V?$allocator\@UStrictActorIDEntityContextPair\@\@\@std\@\@\@std\@\@H\@Z
 */
MCAPI struct ActorUniqueID getControllingPassengerID(std::vector<struct StrictActorIDEntityContextPair> const&, int);
/**
 * @symbol ?getInputMode\@PlayerMovement\@\@YA?AW4InputMode\@\@AEBVEntityContext\@\@\@Z
 */
MCAPI enum class InputMode getInputMode(class EntityContext const&);
/**
 * @symbol
 * ?getPositionMode\@PlayerMovement\@\@YA?AW4PositionMode\@PlayerPositionModeComponent\@\@AEBVEntityContext\@\@\@Z
 */
MCAPI enum class PlayerPositionModeComponent::PositionMode getPositionMode(class EntityContext const&);
/**
 * @symbol ?initializePlayer\@PlayerMovement\@\@YAXAEAVEntityContext\@\@\@Z
 */
MCAPI void initializePlayer(class EntityContext&);
/**
 * @symbol ?setElytraFlightTimeTicks\@PlayerMovement\@\@YAXAEAVEntityContext\@\@AEBUTick\@\@\@Z
 */
MCAPI void setElytraFlightTimeTicks(class EntityContext&, struct Tick const&);
/**
 * @symbol
 * ?setPositionMode\@PlayerMovement\@\@YAXAEAVEntityContext\@\@W4PositionMode\@PlayerPositionModeComponent\@\@\@Z
 */
MCAPI void setPositionMode(class EntityContext&, enum class PlayerPositionModeComponent::PositionMode);

}; // namespace PlayerMovement
