#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScreenCapabilitiesRepo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCREENCAPABILITIESREPO
public:
    ScreenCapabilitiesRepo& operator=(ScreenCapabilitiesRepo const&) = delete;
    ScreenCapabilitiesRepo(ScreenCapabilitiesRepo const&)            = delete;
#endif

public:
    /**
     * @symbol ??0ScreenCapabilitiesRepo\@\@QEAA\@XZ
     */
    MCAPI ScreenCapabilitiesRepo();
    /**
     * @symbol
     * ?get\@ScreenCapabilitiesRepo\@\@QEBA?AV?$unique_ptr\@VIScreenCapabilities\@\@U?$default_delete\@VIScreenCapabilities\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI std::unique_ptr<class IScreenCapabilities> get(std::string const&) const;
};
