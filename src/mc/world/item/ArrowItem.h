#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class ArrowItem : public ::Item {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARROWITEM
public:
    ArrowItem& operator=(ArrowItem const&) = delete;
    ArrowItem(ArrowItem const&)            = delete;
    ArrowItem()                            = delete;
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
     * @vftbl 60
     * @symbol
     * ?appendFormattedHovertext\@ArrowItem\@\@UEBAXAEBVItemStackBase\@\@AEAVLevel\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const;
    /**
     * @vftbl 66
     * @symbol __unk_vfn_66
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl 67
     * @symbol ?isValidAuxValue\@ArrowItem\@\@UEBA_NH\@Z
     */
    virtual bool isValidAuxValue(int) const;
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
     * @symbol ?dispense\@ArrowItem\@\@UEBA_NAEAVBlockSource\@\@AEAVContainer\@\@HAEBVVec3\@\@E\@Z
     */
    virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
    /**
     * @vftbl 95
     * @symbol
     * ?buildDescriptionId\@ArrowItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemDescriptor\@\@PEBVCompoundTag\@\@\@Z
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;
    /**
     * @vftbl 96
     * @symbol
     * ?buildEffectDescriptionName\@ArrowItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemStackBase\@\@\@Z
     */
    virtual std::string buildEffectDescriptionName(class ItemStackBase const&) const;
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
     * @vftbl 119
     * @symbol
     * ?setIconInfo\@ArrowItem\@\@UEAAAEAVItem\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    virtual class Item& setIconInfo(std::string const&, int);
    /**
     * @vftbl 120
     * @symbol ?getIconInfo\@ArrowItem\@\@UEBA?AUResolvedItemIconInfo\@\@AEBVItemStackBase\@\@H_N\@Z
     */
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const&, int, bool) const;
    /**
     * @symbol ??0ArrowItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI ArrowItem(std::string const&, int);
    /**
     * @symbol ?applyEffect\@ArrowItem\@\@QEBAXPEAVArrow\@\@AEBVItemInstance\@\@\@Z
     */
    MCAPI void applyEffect(class Arrow*, class ItemInstance const&) const;

    // protected:
    /**
     * @symbol
     * ?getMobEffects\@ArrowItem\@\@IEBA?AV?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@std\@\@H\@Z
     */
    MCAPI std::vector<class MobEffectInstance> getMobEffects(int) const;

    // private:
    /**
     * @symbol ?_potionExistsOrContentError\@ArrowItem\@\@AEBA?AV?$shared_ptr\@$$CBVPotion\@\@\@std\@\@H\@Z
     */
    MCAPI class std::shared_ptr<class Potion const> _potionExistsOrContentError(int) const;

protected:
private:
};
