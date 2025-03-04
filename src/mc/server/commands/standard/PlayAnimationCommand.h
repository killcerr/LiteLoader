#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class PlayAnimationCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYANIMATIONCOMMAND
public:
    PlayAnimationCommand& operator=(PlayAnimationCommand const&) = delete;
    PlayAnimationCommand(PlayAnimationCommand const&)            = delete;
    PlayAnimationCommand()                                       = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@PlayAnimationCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYANIMATIONCOMMAND
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PlayAnimationCommand();
#endif
    /**
     * @symbol ?setup\@PlayAnimationCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);

    // private:

private:
    /**
     * @symbol ?mStopExpressionVersion\@PlayAnimationCommand\@\@0W4MolangVersion\@\@B
     */
    MCAPI static enum class MolangVersion const mStopExpressionVersion;
};
