#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SynchedActorDataReader {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SYNCHEDACTORDATAREADER
public:
    SynchedActorDataReader& operator=(SynchedActorDataReader const&) = delete;
    SynchedActorDataReader(SynchedActorDataReader const&)            = delete;
    SynchedActorDataReader()                                         = delete;
#endif

public:
    /**
     * @symbol ?getInt\@SynchedActorDataReader\@\@QEBAHG\@Z
     */
    MCAPI int getInt(unsigned short) const;
    /**
     * @symbol ?getPosition\@SynchedActorDataReader\@\@QEBA?AVBlockPos\@\@G\@Z
     */
    MCAPI class BlockPos getPosition(unsigned short) const;
    /**
     * @symbol ?getStatusFlag\@SynchedActorDataReader\@\@QEBA_NW4ActorFlags\@\@\@Z
     */
    MCAPI bool getStatusFlag(enum class ActorFlags) const;
    /**
     * @symbol ?getVec3\@SynchedActorDataReader\@\@QEBA?AVVec3\@\@G\@Z
     */
    MCAPI class Vec3 getVec3(unsigned short) const;
};
