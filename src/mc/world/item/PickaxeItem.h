#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/DiggerItem.h"
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class PickaxeItem : public ::DiggerItem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PICKAXEITEM
public:
    PickaxeItem& operator=(PickaxeItem const&) = delete;
    PickaxeItem(PickaxeItem const&)            = delete;
    PickaxeItem()                              = delete;
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
     * @symbol ?canDestroySpecial\@PickaxeItem\@\@UEBA_NAEBVBlock\@\@\@Z
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
     * @symbol ?getEnchantSlot\@PickaxeItem\@\@UEBAHXZ
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
     * @vftbl 88
     * @symbol ?getDestroySpeed\@PickaxeItem\@\@UEBAMAEBVItemStackBase\@\@AEBVBlock\@\@\@Z
     */
    virtual float getDestroySpeed(class ItemStackBase const&, class Block const&) const;
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
     * @symbol
     * ??0PickaxeItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HAEBVTier\@Item\@\@\@Z
     */
    MCAPI PickaxeItem(std::string const&, int, class Item::Tier const&);

    // private:
    /**
     * @symbol ?_isTierOneBlock\@PickaxeItem\@\@AEBA?B_NAEBVBlockLegacy\@\@\@Z
     */
    MCAPI bool const _isTierOneBlock(class BlockLegacy const&) const;

private:
};
