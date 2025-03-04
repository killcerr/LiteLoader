#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class ToggleDownfallCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TOGGLEDOWNFALLCOMMAND
public:
    ToggleDownfallCommand& operator=(ToggleDownfallCommand const&) = delete;
    ToggleDownfallCommand(ToggleDownfallCommand const&)            = delete;
    ToggleDownfallCommand()                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@ToggleDownfallCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@ToggleDownfallCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);
};
