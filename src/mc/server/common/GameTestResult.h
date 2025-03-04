#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameTestResult {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETESTRESULT
public:
    GameTestResult() = delete;
#endif

public:
    /**
     * @symbol ??0GameTestResult\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI GameTestResult(struct GameTestResult const&);
    /**
     * @symbol ??4GameTestResult\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct GameTestResult& operator=(struct GameTestResult const&);
    /**
     * @symbol ??4GameTestResult\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct GameTestResult& operator=(struct GameTestResult&&);
    /**
     * @symbol ??8GameTestResult\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator==(struct GameTestResult const&) const;
    /**
     * @symbol ??1GameTestResult\@\@QEAA\@XZ
     */
    MCAPI ~GameTestResult();
    /**
     * @symbol ?bindType\@GameTestResult\@\@SAXXZ
     */
    MCAPI static void bindType();
};
