#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/Recipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class MapUpgradingRecipe : public ::Recipe {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPUPGRADINGRECIPE
public:
    MapUpgradingRecipe& operator=(MapUpgradingRecipe const&) = delete;
    MapUpgradingRecipe(MapUpgradingRecipe const&)            = delete;
    MapUpgradingRecipe()                                     = delete;
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
     * ?assemble\@MapUpgradingRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@AEAVCraftingContainer\@\@AEAVCraftingContext\@\@\@Z
     */
    virtual std::vector<class ItemInstance> const& assemble(class CraftingContainer&, class CraftingContext&) const;
    /**
     * @vftbl 2
     * @symbol ?getCraftingSize\@MapUpgradingRecipe\@\@UEBAHXZ
     */
    virtual int getCraftingSize() const;
    /**
     * @vftbl 3
     * @symbol ?getIngredient\@MapUpgradingRecipe\@\@UEBAAEBVRecipeIngredient\@\@HH\@Z
     */
    virtual class RecipeIngredient const& getIngredient(int, int) const;
    /**
     * @vftbl 4
     * @symbol
     * ?getResultItem\@MapUpgradingRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemInstance> const& getResultItem() const;
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol ?matches\@MapUpgradingRecipe\@\@UEBA_NAEBVCraftingContainer\@\@AEBVCraftingContext\@\@\@Z
     */
    virtual bool matches(class CraftingContainer const&, class CraftingContext const&) const;
    /**
     * @vftbl 7
     * @symbol ?size\@MapUpgradingRecipe\@\@UEBAHXZ
     */
    virtual int size() const;
    /**
     * @symbol
     * ??0MapUpgradingRecipe\@\@QEAA\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@AEBVUUID\@mce\@\@\@Z
     */
    MCAPI MapUpgradingRecipe(class std::basic_string_view<char, struct std::char_traits<char>>, class mce::UUID const&);
    /**
     * @symbol ?CartographyTableID\@MapUpgradingRecipe\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const CartographyTableID;
    /**
     * @symbol ?CraftingTableID\@MapUpgradingRecipe\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const CraftingTableID;
};
