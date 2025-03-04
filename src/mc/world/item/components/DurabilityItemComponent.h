#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DurabilityItemComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DURABILITYITEMCOMPONENT
public:
    DurabilityItemComponent& operator=(DurabilityItemComponent const&) = delete;
    DurabilityItemComponent(DurabilityItemComponent const&)            = delete;
    DurabilityItemComponent()                                          = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isNetworkComponent\@?$NetworkedItemComponent\@VDurabilityItemComponent\@\@\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol
     * ?buildNetworkTag\@?$NetworkedItemComponent\@VDurabilityItemComponent\@\@\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl 5
     * @symbol
     * ?initializeFromNetwork\@?$NetworkedItemComponent\@VDurabilityItemComponent\@\@\@\@UEAA_NAEBVCompoundTag\@\@\@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const&);
    /**
     * @symbol ?getDamageChanceRange\@DurabilityItemComponent\@\@QEBA?AUIntRange\@\@XZ
     */
    MCAPI struct IntRange getDamageChanceRange() const;
    /**
     * @symbol ?getMaxDamage\@DurabilityItemComponent\@\@QEBAHXZ
     */
    MCAPI int getMaxDamage() const;
    /**
     * @symbol ?bindType\@DurabilityItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?getIdentifier\@DurabilityItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const& getIdentifier();
};
