#pragma once

#include "liteloader/api/event/Event.h"
#include "mc/BlockInstance.hpp"
#include "liteloader/api/utils/AccessorMacro.h"

namespace ll::event::block {
/**
 * @brief Redstone update event.
 */
class RedStoneUpdateEvent : public Event<RedStoneUpdateEvent>, public Cancellable {
    LL_RO_MEMBER(BlockInstance, blockInstance, getBlockInstance);
    LL_RW_MEMBER(int, redStonePower, getRedStonePower, setRedStonePower);
    LL_RO_MEMBER(bool, activated, isActivated);

    RedStoneUpdateEvent(BlockInstance const& blockInstance, bool isActivated, int redStonePower = -1);

    LL_DELETE_COPY(RedStoneUpdateEvent);
    LL_DELETE_MOVE(RedStoneUpdateEvent);
};
} // namespace ll::event::block
