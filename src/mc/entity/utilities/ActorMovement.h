#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorMovement {
/**
 * @symbol ?getHasTeleported\@ActorMovement\@\@YA_NAEBVEntityContext\@\@\@Z
 */
MCAPI bool getHasTeleported(class EntityContext const&);
/**
 * @symbol ?getWalkDist\@ActorMovement\@\@YAMAEBVEntityContext\@\@\@Z
 */
MCAPI float getWalkDist(class EntityContext const&);
/**
 * @symbol ?getWalkDistPrev\@ActorMovement\@\@YAMAEBVEntityContext\@\@\@Z
 */
MCAPI float getWalkDistPrev(class EntityContext const&);
/**
 * @symbol ?initializeActor\@ActorMovement\@\@YAXAEAVEntityContext\@\@\@Z
 */
MCAPI void initializeActor(class EntityContext&);
/**
 * @symbol ?isImmobile\@ActorMovement\@\@YA_NAEBVEntityContext\@\@\@Z
 */
MCAPI bool isImmobile(class EntityContext const&);
/**
 * @symbol ?setHasTeleported\@ActorMovement\@\@YAXAEAVEntityContext\@\@_N\@Z
 */
MCAPI void setHasTeleported(class EntityContext&, bool);
/**
 * @symbol ?setIsImmobile\@ActorMovement\@\@YAXAEAVEntityContext\@\@_N\@Z
 */
MCAPI void setIsImmobile(class EntityContext&, bool);
/**
 * @symbol ?setWalkDist\@ActorMovement\@\@YAXAEAVEntityContext\@\@M\@Z
 */
MCAPI void setWalkDist(class EntityContext&, float);

}; // namespace ActorMovement
