#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class ShearsItem : public ::Item {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHEARSITEM
public:
    ShearsItem& operator=(ShearsItem const&) = delete;
    ShearsItem(ShearsItem const&)            = delete;
    ShearsItem()                             = delete;
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
     * @vftbl 44
     * @symbol ?canDestroySpecial\@ShearsItem\@\@UEBA_NAEBVBlock\@\@\@Z
     */
    virtual bool canDestroySpecial(class Block const&) const;
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
     * @vftbl 62
     * @symbol ?getEnchantSlot\@ShearsItem\@\@UEBAHXZ
     */
    virtual int getEnchantSlot() const;
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
     * @vftbl 85
     * @symbol ?dispense\@ShearsItem\@\@UEBA_NAEAVBlockSource\@\@AEAVContainer\@\@HAEBVVec3\@\@E\@Z
     */
    virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
    /**
     * @vftbl 88
     * @symbol ?getDestroySpeed\@ShearsItem\@\@UEBAMAEBVItemStackBase\@\@AEBVBlock\@\@\@Z
     */
    virtual float getDestroySpeed(class ItemStackBase const&, class Block const&) const;
    /**
     * @vftbl 89
     * @symbol ?hurtActor\@ShearsItem\@\@UEBAXAEAVItemStack\@\@AEAVActor\@\@AEAVMob\@\@\@Z
     */
    virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const;
    /**
     * @vftbl 93
     * @symbol ?mineBlock\@ShearsItem\@\@UEBA_NAEAVItemStack\@\@AEBVBlock\@\@HHHPEAVActor\@\@\@Z
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
     * @vftbl 135
     * @symbol
     * ?_useOn\@ShearsItem\@\@UEBA?AVInteractionResult\@\@AEAVItemStack\@\@AEAVActor\@\@VBlockPos\@\@EAEBVVec3\@\@\@Z
     */
    virtual class InteractionResult
    _useOn(class ItemStack&, class Actor&, class BlockPos, unsigned char, class Vec3 const&) const;
    /**
     * @symbol ??0ShearsItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI ShearsItem(std::string const&, int);

    // private:
    /**
     * @symbol
     * ?_spawnLoot\@ShearsItem\@\@CAXAEAVLevel\@\@PEAVActor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static void _spawnLoot(class Level&, class Actor*, std::string const&);
    /**
     * @symbol ?_tryShearMooshroom\@ShearsItem\@\@CA_NAEAVLevel\@\@AEAVBlockSource\@\@PEAVActor\@\@\@Z
     */
    MCAPI static bool _tryShearMooshroom(class Level&, class BlockSource&, class Actor*);
    /**
     * @symbol ?_tryShearSheep\@ShearsItem\@\@CA_NAEAVLevel\@\@PEAVActor\@\@\@Z
     */
    MCAPI static bool _tryShearSheep(class Level&, class Actor*);
    /**
     * @symbol ?_tryShearSnowGolem\@ShearsItem\@\@CA_NAEAVLevel\@\@PEAVActor\@\@\@Z
     */
    MCAPI static bool _tryShearSnowGolem(class Level&, class Actor*);

private:
};
