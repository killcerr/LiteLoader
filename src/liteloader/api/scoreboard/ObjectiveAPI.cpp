#include "mc/Objective.hpp"
#include "mc/ServerScoreboard.hpp"
#include "liteloader/api/GlobalServiceAPI.h"

#include "liteloader/api/utils/Hash.h"

// helper
#define H do_hash
LLAPI bool checkSlotName(const std::string& slot) {
    switch (H(slot.c_str())) {
    case H("list"):
        break;
    case H("sidebar"):
        break;
    case H("belowname"):
        break;
    default:
        return false;
    }
    return true;
}

bool Objective::setDisplay(const std::string& slotName, ObjectiveSortOrder sort) {
    if (checkSlotName(slotName)) {
        ((ServerScoreboard*)Global<Scoreboard>)->setDisplayObjective(slotName, *this, sort);
        return true;
    }
    return false;
}
