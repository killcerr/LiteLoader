#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class DiggerItem : public ::Item {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIGGERITEM
public:
    DiggerItem& operator=(DiggerItem const&) = delete;
    DiggerItem(DiggerItem const&)            = delete;
    DiggerItem()                             = delete;
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
     * @vftbl 48
     * @symbol ?getAttackDamage\@DiggerItem\@\@UEBAHXZ
     */
    virtual int getAttackDamage() const;
    /**
     * @vftbl 49
     * @symbol ?isHandEquipped\@DiggerItem\@\@UEBA_NXZ
     */
    virtual bool isHandEquipped() const;
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
     * @vftbl 60
     * @symbol
     * ?appendFormattedHovertext\@DiggerItem\@\@UEBAXAEBVItemStackBase\@\@AEAVLevel\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const;
    /**
     * @vftbl 61
     * @symbol ?isValidRepairItem\@DiggerItem\@\@UEBA_NAEBVItemStackBase\@\@0AEBVBaseGameVersion\@\@\@Z
     */
    virtual bool
    isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&) const;
    /**
     * @vftbl 63
     * @symbol ?getEnchantValue\@DiggerItem\@\@UEBAHXZ
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
     * @vftbl 88
     * @symbol ?getDestroySpeed\@DiggerItem\@\@UEBAMAEBVItemStackBase\@\@AEBVBlock\@\@\@Z
     */
    virtual float getDestroySpeed(class ItemStackBase const&, class Block const&) const;
    /**
     * @vftbl 93
     * @symbol ?mineBlock\@DiggerItem\@\@UEBA_NAEAVItemStack\@\@AEBVBlock\@\@HHHPEAVActor\@\@\@Z
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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIGGERITEM
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DiggerItem();
#endif
    /**
     * @symbol
     * ?setBlocks\@DiggerItem\@\@QEAAXAEBV?$vector\@PEBVBlock\@\@V?$allocator\@PEBVBlock\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setBlocks(std::vector<class Block const*> const&);

    // protected:
    /**
     * @symbol
     * ??0DiggerItem\@\@IEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HHAEBVTier\@Item\@\@AEBV?$vector\@PEBVBlock\@\@V?$allocator\@PEBVBlock\@\@\@std\@\@\@2\@\@Z
     */
    MCAPI DiggerItem(std::string const&, int, int, class Item::Tier const&, std::vector<class Block const*> const&);

protected:
};
