#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResetEventObj {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESETEVENTOBJ
public:
    ResetEventObj& operator=(ResetEventObj const&) = delete;
    ResetEventObj(ResetEventObj const&)            = delete;
    ResetEventObj()                                = delete;
#endif

public:
    /**
     * @symbol
     * ?wait_until\@ResetEventObj\@\@QEAA_NV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI bool wait_until(class std::chrono::time_point<
                          struct std::chrono::steady_clock,
                          class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>);
};
