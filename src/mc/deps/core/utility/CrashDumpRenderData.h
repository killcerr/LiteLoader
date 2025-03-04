#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CrashDumpRenderData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRASHDUMPRENDERDATA
public:
    CrashDumpRenderData& operator=(CrashDumpRenderData const&) = delete;
    CrashDumpRenderData(CrashDumpRenderData const&)            = delete;
    CrashDumpRenderData()                                      = delete;
#endif

public:
    /**
     * @symbol ?kFormat\@CrashDumpRenderData\@\@2QBUCrashDumpFormatEntryImpl\@\@B
     */
    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[];
};
