#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class WrittenBookItem : public ::Item {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WRITTENBOOKITEM
public:
    WrittenBookItem& operator=(WrittenBookItem const&) = delete;
    WrittenBookItem(WrittenBookItem const&)            = delete;
    WrittenBookItem()                                  = delete;
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
     * @vftbl 50
     * @symbol ?isGlint\@WrittenBookItem\@\@MEBA_NAEBVItemStackBase\@\@\@Z
     */
    virtual bool isGlint(class ItemStackBase const&) const;
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
     * @symbol ?requiresInteract\@WrittenBookItem\@\@UEBA_NXZ
     */
    virtual bool requiresInteract() const;
    /**
     * @vftbl 60
     * @symbol
     * ?appendFormattedHovertext\@WrittenBookItem\@\@UEBAXAEBVItemStackBase\@\@AEAVLevel\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const;
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
     * @symbol ?use\@WrittenBookItem\@\@UEBAAEAVItemStack\@\@AEAV2\@AEAVPlayer\@\@\@Z
     */
    virtual class ItemStack& use(class ItemStack&, class Player&) const;
    /**
     * @vftbl 95
     * @symbol
     * ?buildDescriptionId\@WrittenBookItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemDescriptor\@\@PEBVCompoundTag\@\@\@Z
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;
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
     * ?getInteractText\@WrittenBookItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPlayer\@\@\@Z
     */
    virtual std::string getInteractText(class Player const&) const;
    /**
     * @symbol ?MAX_GENERATION\@WrittenBookItem\@\@2HB
     */
    MCAPI static int const MAX_GENERATION;
    /**
     * @symbol ?MAX_PAGES\@WrittenBookItem\@\@2HB
     */
    MCAPI static int const MAX_PAGES;
    /**
     * @symbol ?MAX_PAGE_LENGTH\@WrittenBookItem\@\@2HB
     */
    MCAPI static int const MAX_PAGE_LENGTH;
    /**
     * @symbol ?MAX_TITLE_LENGTH\@WrittenBookItem\@\@2HB
     */
    MCAPI static int const MAX_TITLE_LENGTH;
    /**
     * @symbol ?TAG_AUTHOR\@WrittenBookItem\@\@2V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@B
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> const TAG_AUTHOR;
    /**
     * @symbol ?TAG_GENERATION\@WrittenBookItem\@\@2V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@B
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> const TAG_GENERATION;
    /**
     * @symbol ?TAG_ID\@WrittenBookItem\@\@2V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@B
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> const TAG_ID;
    /**
     * @symbol ?TAG_PAGES\@WrittenBookItem\@\@2V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@B
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> const TAG_PAGES;
    /**
     * @symbol ?TAG_PAGE_PHOTO_NAME\@WrittenBookItem\@\@2V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@B
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> const TAG_PAGE_PHOTO_NAME;
    /**
     * @symbol ?TAG_PAGE_TEXT\@WrittenBookItem\@\@2V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@B
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> const TAG_PAGE_TEXT;
    /**
     * @symbol ?TAG_RESOLVED\@WrittenBookItem\@\@2V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@B
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> const TAG_RESOLVED;
    /**
     * @symbol ?TAG_TITLE\@WrittenBookItem\@\@2V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@B
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> const TAG_TITLE;
    /**
     * @symbol ?TAG_XUID\@WrittenBookItem\@\@2V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@B
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> const TAG_XUID;
    /**
     * @symbol ?canBeCopied\@WrittenBookItem\@\@SA_NPEBVCompoundTag\@\@\@Z
     */
    MCAPI static bool canBeCopied(class CompoundTag const*);
    /**
     * @symbol ?getGeneration\@WrittenBookItem\@\@SAHPEBVCompoundTag\@\@\@Z
     */
    MCAPI static int getGeneration(class CompoundTag const*);
    /**
     * @symbol ?getPageCount\@WrittenBookItem\@\@SAHAEBVItemStack\@\@\@Z
     */
    MCAPI static int getPageCount(class ItemStack const&);
    /**
     * @symbol
     * ?getPages\@WrittenBookItem\@\@SA?AV?$vector\@UPageContent\@\@V?$allocator\@UPageContent\@\@\@std\@\@\@std\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI static std::vector<struct PageContent> getPages(class ItemStack const&);
};
