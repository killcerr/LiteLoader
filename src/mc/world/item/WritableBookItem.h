#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class WritableBookItem : public ::Item {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WRITABLEBOOKITEM
public:
    WritableBookItem& operator=(WritableBookItem const&) = delete;
    WritableBookItem(WritableBookItem const&)            = delete;
    WritableBookItem()                                   = delete;
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
     * @vftbl 59
     * @symbol ?requiresInteract\@WritableBookItem\@\@UEBA_NXZ
     */
    virtual bool requiresInteract() const;
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
     * @symbol ?use\@WritableBookItem\@\@UEBAAEAVItemStack\@\@AEAV2\@AEAVPlayer\@\@\@Z
     */
    virtual class ItemStack& use(class ItemStack&, class Player&) const;
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
     * @vftbl 121
     * @symbol
     * ?getInteractText\@WritableBookItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPlayer\@\@\@Z
     */
    virtual std::string getInteractText(class Player const&) const;
    /**
     * @symbol ?addPageAt\@WritableBookItem\@\@SAXAEAVItemStack\@\@HAEBUPageContent\@\@\@Z
     */
    MCAPI static void addPageAt(class ItemStack&, int, struct PageContent const&);
    /**
     * @symbol ?deletePage\@WritableBookItem\@\@SA?AUPageContent\@\@AEAVItemStack\@\@H\@Z
     */
    MCAPI static struct PageContent deletePage(class ItemStack&, int);
    /**
     * @symbol ?replacePage\@WritableBookItem\@\@SAXAEAVItemStack\@\@HAEBUPageContent\@\@\@Z
     */
    MCAPI static void replacePage(class ItemStack&, int, struct PageContent const&);
    /**
     * @symbol
     * ?signBook\@WritableBookItem\@\@SAXAEAVItemStack\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@11\@Z
     */
    MCAPI static void signBook(class ItemStack&, std::string, std::string, std::string);
    /**
     * @symbol ?swapPages\@WritableBookItem\@\@SAXAEAVItemStack\@\@HH\@Z
     */
    MCAPI static void swapPages(class ItemStack&, int, int);
};
