#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace PlayerCapabilities { struct IPlayerData; }
// clang-format on

namespace PlayerCapabilities {

class SharedController {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERCAPABILITIES_SHAREDCONTROLLER
public:
    SharedController& operator=(SharedController const&) = delete;
    SharedController(SharedController const&)            = delete;
    SharedController()                                   = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canChat\@SharedController\@PlayerCapabilities\@\@UEBA_NAEBUIPlayerData\@2\@\@Z
     */
    virtual bool canChat(struct PlayerCapabilities::IPlayerData const&) const;
    /**
     * @vftbl 2
     * @symbol ?canTell\@SharedController\@PlayerCapabilities\@\@UEBA_NAEBUIPlayerData\@2\@\@Z
     */
    virtual bool canTell(struct PlayerCapabilities::IPlayerData const&) const;
    /**
     * @vftbl 3
     * @symbol ?canOpenChat\@SharedController\@PlayerCapabilities\@\@UEBA_NAEBUIPlayerData\@2\@\@Z
     */
    virtual bool canOpenChat(struct PlayerCapabilities::IPlayerData const&) const;
};

}; // namespace PlayerCapabilities
