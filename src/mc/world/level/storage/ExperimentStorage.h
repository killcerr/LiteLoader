#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ExperimentStorage {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPERIMENTSTORAGE
public:
    ExperimentStorage(ExperimentStorage const&) = delete;
    ExperimentStorage()                         = delete;
#endif

public:
    /**
     * @symbol ?isAnyToggleEnabled\@ExperimentStorage\@\@QEBA_NXZ
     */
    MCAPI bool isAnyToggleEnabled() const;
    /**
     * @symbol ??4ExperimentStorage\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ExperimentStorage& operator=(class ExperimentStorage const&);
    /**
     * @symbol ??1ExperimentStorage\@\@QEAA\@XZ
     */
    MCAPI ~ExperimentStorage();
};
