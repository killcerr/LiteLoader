#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandSelectorResults.h"
#include "mc/world/level/Command.h"

class DamageCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DAMAGECOMMAND
public:
    DamageCommand& operator=(DamageCommand const&) = delete;
    DamageCommand(DamageCommand const&)            = delete;
    DamageCommand()                                = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@DamageCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@DamageCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);

    // private:
    /**
     * @symbol
     * ?_applyDamage\@DamageCommand\@\@AEBAXAEAV?$CommandSelectorResults\@VActor\@\@\@\@AEBVActorDamageSource\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void
    _applyDamage(class CommandSelectorResults<class Actor>&, class ActorDamageSource const&, class CommandOutput&)
        const;

private:
};
