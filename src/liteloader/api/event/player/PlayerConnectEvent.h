#pragma once

#include "liteloader/api/event/Event.h"
#include "mc/Player.hpp"
#include "liteloader/api/utils/AccessorMacro.h"


namespace ll::event::player {
/**
 * @brief Player connect event(aka PlayerPreJoinEvent).
 * @details This event is called when a player connects to the server.
 */
class PlayerConnectEvent : public Event<PlayerConnectEvent>, public Cancellable {
    LL_RO_MEMBER(Player*, player, getPlayer);

    explicit PlayerConnectEvent(Player* player);

    LL_DELETE_COPY(PlayerConnectEvent);
    LL_DELETE_MOVE(PlayerConnectEvent);
};

} // namespace ll::event::player
