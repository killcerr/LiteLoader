#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/typeid_t.h"

struct StartScreenCapabilities {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STARTSCREENCAPABILITIES
public:
    StartScreenCapabilities& operator=(StartScreenCapabilities const&) = delete;
    StartScreenCapabilities(StartScreenCapabilities const&)            = delete;
    StartScreenCapabilities()                                          = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?isOfType\@?$TypedScreenCapabilities\@UStartScreenCapabilities\@\@\@\@UEBA_NV?$typeid_t\@VIScreenCapabilities\@\@\@Bedrock\@\@\@Z
     */
    virtual bool isOfType(class Bedrock::typeid_t<class IScreenCapabilities>) const;
};
