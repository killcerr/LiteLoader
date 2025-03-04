#pragma once

#include "liteloader/api/event/Event.h"
#include "mc/Player.hpp"
#include "liteloader/api/utils/AccessorMacro.h"

namespace ll::event::player {

/**
 * @brief Player swing event.
 * @details This event is called when a player swings their arm.
 */
class PlayerSwingEvent : public Event<PlayerSwingEvent> {
    LL_RO_MEMBER(Player*, player, getPlayer);

    explicit PlayerSwingEvent(Player* player);

    LL_DELETE_COPY(PlayerSwingEvent);
    LL_DELETE_MOVE(PlayerSwingEvent);
};

} // namespace ll::event::player
