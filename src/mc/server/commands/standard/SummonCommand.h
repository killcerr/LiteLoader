#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

// auto generated forward declare list
// clang-format off
namespace RotationCommandUtils { enum class FacingResult; }
// clang-format on

class SummonCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUMMONCOMMAND
public:
    SummonCommand& operator=(SummonCommand const&) = delete;
    SummonCommand(SummonCommand const&)            = delete;
    SummonCommand()                                = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@SummonCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@SummonCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);

    // private:
    /**
     * @symbol
     * ?_getFacingDirection\@SummonCommand\@\@AEBA?AW4FacingResult\@RotationCommandUtils\@\@AEBVCommandOrigin\@\@AEAVCommandOutput\@\@AEAVVec3\@\@\@Z
     */
    MCAPI enum class RotationCommandUtils::FacingResult
    _getFacingDirection(class CommandOrigin const&, class CommandOutput&, class Vec3&) const;

private:
};
