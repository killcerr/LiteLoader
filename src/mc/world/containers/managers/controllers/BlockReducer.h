#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockReducer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKREDUCER
public:
    BlockReducer& operator=(BlockReducer const&) = delete;
    BlockReducer(BlockReducer const&)            = delete;
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
     * ?registerBlock\@BlockReducer\@\@UEAAXAEBVItemStack\@\@$$QEAV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual void registerBlock(class ItemStack const&, std::vector<class ItemStack>&&);
    /**
     * @symbol ??0BlockReducer\@\@QEAA\@XZ
     */
    MCAPI BlockReducer();
    /**
     * @symbol
     * ?getReduction\@BlockReducer\@\@QEBAPEBV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEBVItemStackBase\@\@\@Z
     */
    MCAPI std::vector<class ItemStack> const* getReduction(class ItemStackBase const&) const;
    /**
     * @symbol
     * ?getReductionMap\@BlockReducer\@\@QEBAAEBV?$unordered_map\@HV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@U?$hash\@H\@2\@U?$equal_to\@H\@2\@V?$allocator\@U?$pair\@$$CBHV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<
        int,
        std::vector<class ItemStack>,
        struct std::hash<int>,
        struct std::equal_to<int>,
        class std::allocator<struct std::pair<int const, std::vector<class ItemStack>>>> const&
    getReductionMap() const;
    /**
     * @symbol ?tryGetItemDescriptorFromKey\@BlockReducer\@\@QEBA?AVItemDescriptor\@\@H\@Z
     */
    MCAPI class ItemDescriptor tryGetItemDescriptorFromKey(int) const;
};
