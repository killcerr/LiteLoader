#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class SayCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SAYCOMMAND
public:
    SayCommand& operator=(SayCommand const&) = delete;
    SayCommand(SayCommand const&)            = delete;
    SayCommand()                             = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@SayCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@SayCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);

    // private:
    /**
     * @symbol
     * ?_sendMessage\@SayCommand\@\@CAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0AEBUCommandOriginIdentity\@\@AEAVLevel\@\@\@Z
     */
    MCAPI static void
    _sendMessage(std::string const&, std::string const&, struct CommandOriginIdentity const&, class Level&);
    /**
     * @symbol
     * ?_trySendSayCommandEvent\@SayCommand\@\@CA_NAEBVPlayer\@\@AEAVLevel\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool _trySendSayCommandEvent(class Player const&, class Level&, std::string const&);

private:
};
