#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScorePacketInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCOREPACKETINFO
public:
    ScorePacketInfo& operator=(ScorePacketInfo const&) = delete;
    ScorePacketInfo(ScorePacketInfo const&)            = delete;
    ScorePacketInfo()                                  = delete;
#endif

public:
    /**
     * @symbol ??0ScorePacketInfo\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI ScorePacketInfo(struct ScorePacketInfo&&);
    /**
     * @symbol ??1ScorePacketInfo\@\@QEAA\@XZ
     */
    MCAPI ~ScorePacketInfo();
};
