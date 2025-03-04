#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OculusPlatformMessagePump {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCULUSPLATFORMMESSAGEPUMP
public:
    OculusPlatformMessagePump& operator=(OculusPlatformMessagePump const&) = delete;
    OculusPlatformMessagePump(OculusPlatformMessagePump const&)            = delete;
    OculusPlatformMessagePump()                                            = delete;
#endif

public:
    /**
     * @symbol
     * ?mOculusAppId\@OculusPlatformMessagePump\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const mOculusAppId;
};
