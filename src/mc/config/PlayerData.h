#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerCapabilities {

class PlayerData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERCAPABILITIES_PLAYERDATA
public:
    PlayerData& operator=(PlayerData const&) = delete;
    PlayerData(PlayerData const&)            = delete;
    PlayerData()                             = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isAbilityEnabled\@PlayerData\@PlayerCapabilities\@\@UEBA_NW4AbilitiesIndex\@\@\@Z
     */
    virtual bool isAbilityEnabled(enum class AbilitiesIndex) const;
    /**
     * @vftbl 2
     * @symbol ?isTeacher\@PlayerData\@PlayerCapabilities\@\@UEBA_NXZ
     */
    virtual bool isTeacher() const;
    /**
     * @vftbl 3
     * @symbol ?isOperator\@PlayerData\@PlayerCapabilities\@\@UEBA_NXZ
     */
    virtual bool isOperator() const;
    /**
     * @symbol ??0PlayerData\@PlayerCapabilities\@\@QEAA\@AEBVPlayer\@\@\@Z
     */
    MCAPI PlayerData(class Player const&);
};

}; // namespace PlayerCapabilities
