#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class RangedWeaponItem : public ::Item {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANGEDWEAPONITEM
public:
    RangedWeaponItem& operator=(RangedWeaponItem const&) = delete;
    RangedWeaponItem(RangedWeaponItem const&)            = delete;
    RangedWeaponItem()                                   = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 21
     * @symbol __unk_vfn_21
     */
    virtual void __unk_vfn_21();
    /**
     * @vftbl 51
     * @symbol __unk_vfn_51
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl 53
     * @symbol __unk_vfn_53
     */
    virtual void __unk_vfn_53();
    /**
     * @vftbl 63
     * @symbol ?getEnchantValue\@RangedWeaponItem\@\@UEBAHXZ
     */
    virtual int getEnchantValue() const;
    /**
     * @vftbl 66
     * @symbol __unk_vfn_66
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl 70
     * @symbol __unk_vfn_70
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl 72
     * @symbol __unk_vfn_72
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl 75
     * @symbol __unk_vfn_75
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl 79
     * @symbol __unk_vfn_79
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl 80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl 84
     * @symbol ?use\@RangedWeaponItem\@\@UEBAAEAVItemStack\@\@AEAV2\@AEAVPlayer\@\@\@Z
     */
    virtual class ItemStack& use(class ItemStack&, class Player&) const;
    /**
     * @vftbl 87
     * @symbol ?releaseUsing\@RangedWeaponItem\@\@UEBAXAEAVItemStack\@\@PEAVPlayer\@\@H\@Z
     */
    virtual void releaseUsing(class ItemStack&, class Player*, int) const;
    /**
     * @vftbl 89
     * @symbol ?hurtActor\@RangedWeaponItem\@\@UEBAXAEAVItemStack\@\@AEAVActor\@\@AEAVMob\@\@\@Z
     */
    virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const;
    /**
     * @vftbl 93
     * @symbol ?mineBlock\@RangedWeaponItem\@\@UEBA_NAEAVItemStack\@\@AEBVBlock\@\@HHHPEAVActor\@\@\@Z
     */
    virtual bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*) const;
    /**
     * @vftbl 115
     * @symbol __unk_vfn_115
     */
    virtual void __unk_vfn_115();
    /**
     * @vftbl 116
     * @symbol __unk_vfn_116
     */
    virtual void __unk_vfn_116();
    /**
     * @vftbl 122
     * @symbol ?getAnimationFrameFor\@RangedWeaponItem\@\@UEBAHPEAVMob\@\@_NPEBVItemStack\@\@_N\@Z
     */
    virtual int getAnimationFrameFor(class Mob*, bool, class ItemStack const*, bool) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RANGEDWEAPONITEM
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RangedWeaponItem();
#endif
    /**
     * @symbol
     * ??0RangedWeaponItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI RangedWeaponItem(std::string const&, int);
    /**
     * @symbol ?getLaunchPower\@RangedWeaponItem\@\@QEBAMHHH\@Z
     */
    MCAPI float getLaunchPower(int, int, int) const;
};
