#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MountTamingComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOUNTTAMINGCOMPONENT
public:
    MountTamingComponent& operator=(MountTamingComponent const&) = delete;
    MountTamingComponent(MountTamingComponent const&)            = delete;
#endif

public:
    /**
     * @symbol ??0MountTamingComponent\@\@QEAA\@XZ
     */
    MCAPI MountTamingComponent();
    /**
     * @symbol ?addAdditionalSaveData\@MountTamingComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @symbol ?becomeTame\@MountTamingComponent\@\@QEAAXAEAVActor\@\@_N\@Z
     */
    MCAPI void becomeTame(class Actor&, bool);
    /**
     * @symbol ?getCounter\@MountTamingComponent\@\@QEAAAEAHXZ
     */
    MCAPI int& getCounter();
    /**
     * @symbol ?getInteraction\@MountTamingComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&);
    /**
     * @symbol ?getTemper\@MountTamingComponent\@\@QEAAAEAHXZ
     */
    MCAPI int& getTemper();
    /**
     * @symbol ?getTemperMod\@MountTamingComponent\@\@QEBAHXZ
     */
    MCAPI int getTemperMod() const;
    /**
     * @symbol ?getWaitCount\@MountTamingComponent\@\@QEBAHXZ
     */
    MCAPI int getWaitCount() const;
    /**
     * @symbol
     * ?readAdditionalSaveData\@MountTamingComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
    /**
     * @symbol ?tameToPlayer\@MountTamingComponent\@\@QEAAXAEAVActor\@\@AEAVPlayer\@\@_N\@Z
     */
    MCAPI void tameToPlayer(class Actor&, class Player&, bool);

    // private:
    /**
     * @symbol ?_feedItem\@MountTamingComponent\@\@AEAAXAEAVActor\@\@AEAVPlayer\@\@H\@Z
     */
    MCAPI void _feedItem(class Actor&, class Player&, int);
    /**
     * @symbol ?_autoReject\@MountTamingComponent\@\@CA_NAEBVItemStack\@\@PEBVMountTameableDefinition\@\@\@Z
     */
    MCAPI static bool _autoReject(class ItemStack const&, class MountTameableDefinition const*);

private:
};
