#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ArmorItemComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARMORITEMCOMPONENT
public:
    ArmorItemComponent& operator=(ArmorItemComponent const&) = delete;
    ArmorItemComponent(ArmorItemComponent const&)            = delete;
    ArmorItemComponent()                                     = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isNetworkComponent\@?$NetworkedItemComponent\@VArmorItemComponent\@\@\@\@UEBA_NXZ
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
     * ?buildNetworkTag\@?$NetworkedItemComponent\@VArmorItemComponent\@\@\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl 5
     * @symbol ?initializeFromNetwork\@?$NetworkedItemComponent\@VArmorItemComponent\@\@\@\@UEAA_NAEBVCompoundTag\@\@\@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const&);
    /**
     * @symbol ?getArmorTextureType\@ArmorItemComponent\@\@QEBA?AW4ArmorTextureType\@\@XZ
     */
    MCAPI enum class ArmorTextureType getArmorTextureType() const;
    /**
     * @symbol ?bindType\@ArmorItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?getIdentifier\@ArmorItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const& getIdentifier();
};
