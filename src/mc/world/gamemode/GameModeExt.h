#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameModeExt {
/**
 * @symbol
 * ?createDefaultMessenger\@GameModeExt\@\@YA?AV?$unique_ptr\@UIGameModeMessenger\@\@U?$default_delete\@UIGameModeMessenger\@\@\@std\@\@\@std\@\@AEAVPlayer\@\@\@Z
 */
MCAPI std::unique_ptr<struct IGameModeMessenger> createDefaultMessenger(class Player&);

}; // namespace GameModeExt
