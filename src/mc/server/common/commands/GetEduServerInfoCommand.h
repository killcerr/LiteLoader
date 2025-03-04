#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class GetEduServerInfoCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GETEDUSERVERINFOCOMMAND
public:
    GetEduServerInfoCommand& operator=(GetEduServerInfoCommand const&) = delete;
    GetEduServerInfoCommand(GetEduServerInfoCommand const&)            = delete;
    GetEduServerInfoCommand()                                          = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@GetEduServerInfoCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@GetEduServerInfoCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);
};
