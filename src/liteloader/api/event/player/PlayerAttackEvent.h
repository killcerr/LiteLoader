#pragma once

#include "liteloader/api/event/Event.h"
#include "mc/Player.hpp"
#include "liteloader/api/utils/AccessorMacro.h"


namespace ll::event::player {
/**
 * @brief Player attack event.
 */
class PlayerAttackEvent : public Event<PlayerAttackEvent>, public Cancellable {
    LL_RO_MEMBER(Player*, player, getPlayer);
    LL_RO_MEMBER(Player*, target, getTarget);
    LL_RW_MEMBER(float, damage, getDamage, setDamage);

    PlayerAttackEvent(Player* player, Player* target, float damage);

    LL_DELETE_COPY(PlayerAttackEvent);
    LL_DELETE_MOVE(PlayerAttackEvent);
};

} // namespace ll::event::player
