#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/models/ContainerManagerModel.h"

class EnchantingContainerManagerModel : public ::ContainerManagerModel {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCHANTINGCONTAINERMANAGERMODEL
public:
    EnchantingContainerManagerModel& operator=(EnchantingContainerManagerModel const&) = delete;
    EnchantingContainerManagerModel(EnchantingContainerManagerModel const&)            = delete;
    EnchantingContainerManagerModel()                                                  = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 6
     * @symbol
     * ?getItemCopies\@EnchantingContainerManagerModel\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @vftbl 7
     * @symbol ?setSlot\@EnchantingContainerManagerModel\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setSlot(int, class ItemStack const&, bool);
    /**
     * @vftbl 8
     * @symbol ?getSlot\@EnchantingContainerManagerModel\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const& getSlot(int) const;
    /**
     * @vftbl 9
     * @symbol ?setData\@EnchantingContainerManagerModel\@\@UEAAXHH\@Z
     */
    virtual void setData(int, int);
    /**
     * @vftbl 10
     * @symbol ?broadcastChanges\@EnchantingContainerManagerModel\@\@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @vftbl 16
     * @symbol ?isValid\@EnchantingContainerManagerModel\@\@UEAA_NM\@Z
     */
    virtual bool isValid(float);
    /**
     * @vftbl 17
     * @symbol ?_postInit\@EnchantingContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @symbol ??0EnchantingContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI EnchantingContainerManagerModel(enum class ContainerID, class Player&, class BlockPos const&);
    /**
     * @symbol
     * ?getEnchantOptions\@EnchantingContainerManagerModel\@\@QEBAAEBV?$vector\@VItemEnchantOption\@\@V?$allocator\@VItemEnchantOption\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class ItemEnchantOption> const& getEnchantOptions() const;
    /**
     * @symbol ?recalculateOptions\@EnchantingContainerManagerModel\@\@QEAAXXZ
     */
    MCAPI void recalculateOptions();
    /**
     * @symbol ?NUM_OPTIONS\@EnchantingContainerManagerModel\@\@2HB
     */
    MCAPI static int const NUM_OPTIONS;
};
