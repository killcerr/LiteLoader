#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandPosition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDPOSITION
public:
    CommandPosition& operator=(CommandPosition const&) = delete;
    CommandPosition(CommandPosition const&)            = delete;
#endif

public:
    /**
     * @symbol ??0CommandPosition\@\@QEAA\@XZ
     */
    MCAPI CommandPosition();
    /**
     * @symbol ??0CommandPosition\@\@QEAA\@AEBVVec3\@\@\@Z
     */
    MCAPI CommandPosition(class Vec3 const&);
    /**
     * @symbol ?getBlockPos\@CommandPosition\@\@QEBA?AVBlockPos\@\@AEBVVec3\@\@0\@Z
     */
    MCAPI class BlockPos getBlockPos(class Vec3 const&, class Vec3 const&) const;
    /**
     * @symbol ?getBlockPos\@CommandPosition\@\@QEBA?AVBlockPos\@\@HAEBVCommandOrigin\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class BlockPos getBlockPos(int, class CommandOrigin const&, class Vec3 const&) const;
    /**
     * @symbol ?getPosition\@CommandPosition\@\@QEBA?AVVec3\@\@AEBV2\@0\@Z
     */
    MCAPI class Vec3 getPosition(class Vec3 const&, class Vec3 const&) const;
    /**
     * @symbol ?getPosition\@CommandPosition\@\@QEBA?AVVec3\@\@HAEBVCommandOrigin\@\@AEBV2\@\@Z
     */
    MCAPI class Vec3 getPosition(int, class CommandOrigin const&, class Vec3 const&) const;
    /**
     * @symbol ?serialize\@CommandPosition\@\@QEBA?AVCompoundTag\@\@XZ
     */
    MCAPI class CompoundTag serialize() const;
};
