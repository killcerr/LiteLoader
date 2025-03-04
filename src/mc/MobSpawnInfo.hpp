/**
 * @file  MobSpawnInfo.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MobSpawnInfo.
 *
 */
class MobSpawnInfo {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBSPAWNINFO
public:
    class MobSpawnInfo& operator=(class MobSpawnInfo const &) = delete;
    MobSpawnInfo(class MobSpawnInfo const &) = delete;
    MobSpawnInfo() = delete;
#endif

public:
    /**
     * @symbol  ?categoryID\@MobSpawnInfo\@\@SAHW4ActorType\@\@\@Z
     */
    MCAPI static int categoryID(enum class ActorType);

};