#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/TypedServerNetId.h"
#include "mc/world/item/components/ItemStackRequestActionCraft.h"

class CraftHandlerTrade {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTHANDLERTRADE
public:
    CraftHandlerTrade& operator=(CraftHandlerTrade const&) = delete;
    CraftHandlerTrade(CraftHandlerTrade const&)            = delete;
    CraftHandlerTrade()                                    = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?handleConsumedItem\@CraftHandlerTrade\@\@EEAA?AW4ItemStackNetResult\@\@W4ContainerEnumName\@\@EAEBVItemStack\@\@\@Z
     */
    virtual enum class ItemStackNetResult
    handleConsumedItem(enum class ContainerEnumName, unsigned char, class ItemStack const&);
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
     * ?_handleCraftAction\@CraftHandlerTrade\@\@MEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionCraftBase\@\@\@Z
     */
    virtual enum class ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const&);
    /**
     * @vftbl 5
     * @symbol ?_postCraftRequest\@CraftHandlerTrade\@\@EEAAX_N\@Z
     */
    virtual void _postCraftRequest(bool);

    // private:
    /**
     * @symbol
     * ?_getMerchantRecipeFromNetId\@CraftHandlerTrade\@\@AEAA?AV?$tuple\@W4ItemStackNetResult\@\@PEBVMerchantRecipe\@\@\@std\@\@AEBV?$TypedServerNetId\@URecipeNetIdTag\@\@I$0A\@\@\@\@Z
     */
    MCAPI class std::tuple<enum class ItemStackNetResult, class MerchantRecipe const*>
    _getMerchantRecipeFromNetId(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const&);
    /**
     * @symbol
     * ?_handleTrade1\@CraftHandlerTrade\@\@AEAA?AW4ItemStackNetResult\@\@AEBV?$ItemStackRequestActionCraft\@V?$TypedServerNetId\@URecipeNetIdTag\@\@I$0A\@\@\@$0M\@\@\@\@Z
     */
    MCAPI enum class ItemStackNetResult _handleTrade1(class ItemStackRequestActionCraft<
                                                      class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0>,
                                                      12> const&);
    /**
     * @symbol
     * ?_initResultItem\@CraftHandlerTrade\@\@AEAA?AW4ItemStackNetResult\@\@AEBV?$TypedServerNetId\@URecipeNetIdTag\@\@I$0A\@\@\@\@Z
     */
    MCAPI enum class ItemStackNetResult
    _initResultItem(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const&);
    /**
     * @symbol ?_initTrade2Consumes\@CraftHandlerTrade\@\@AEAA?AW4ItemStackNetResult\@\@XZ
     */
    MCAPI enum class ItemStackNetResult _initTrade2Consumes();
    /**
     * @symbol ?_matchesAuxValueTrade2\@CraftHandlerTrade\@\@AEBA_NAEBVItemStackBase\@\@0\@Z
     */
    MCAPI bool _matchesAuxValueTrade2(class ItemStackBase const&, class ItemStackBase const&) const;

private:
};
