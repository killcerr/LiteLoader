#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BribeableComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BRIBEABLECOMPONENT
public:
    BribeableComponent& operator=(BribeableComponent const&) = delete;
    BribeableComponent(BribeableComponent const&)            = delete;
#endif

public:
    /**
     * @symbol ??0BribeableComponent\@\@QEAA\@XZ
     */
    MCAPI BribeableComponent();
    /**
     * @symbol ?addAdditionalSaveData\@BribeableComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @symbol ?clientBribeCheck\@BribeableComponent\@\@QEAA_NAEAVActor\@\@\@Z
     */
    MCAPI bool clientBribeCheck(class Actor&);
    /**
     * @symbol ?getBribeCooldown\@BribeableComponent\@\@QEAAAEAHXZ
     */
    MCAPI int& getBribeCooldown();
    /**
     * @symbol ?getBribeTimer\@BribeableComponent\@\@QEAAAEAHXZ
     */
    MCAPI int& getBribeTimer();
    /**
     * @symbol ?getInteraction\@BribeableComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&);
    /**
     * @symbol
     * ?readAdditionalSaveData\@BribeableComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
    /**
     * @symbol ?resetBribe\@BribeableComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void resetBribe(class Actor&);

    // private:
    /**
     * @symbol ?_bribe\@BribeableComponent\@\@AEAAXAEAVActor\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI void _bribe(class Actor&, class Player&);
    /**
     * @symbol ?_canBribe\@BribeableComponent\@\@AEAA_NAEBVItemStack\@\@\@Z
     */
    MCAPI bool _canBribe(class ItemStack const&);

private:
};
