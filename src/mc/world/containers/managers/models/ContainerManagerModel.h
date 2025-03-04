#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerManagerModel {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERMANAGERMODEL
public:
    ContainerManagerModel& operator=(ContainerManagerModel const&) = delete;
    ContainerManagerModel(ContainerManagerModel const&)            = delete;
    ContainerManagerModel()                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getContainerId\@ContainerManagerModel\@\@UEBA?AW4ContainerID\@\@XZ
     */
    virtual enum class ContainerID getContainerId() const;
    /**
     * @vftbl 2
     * @symbol ?setContainerId\@ContainerManagerModel\@\@UEAAXW4ContainerID\@\@\@Z
     */
    virtual void setContainerId(enum class ContainerID);
    /**
     * @vftbl 3
     * @symbol ?getContainerType\@ContainerManagerModel\@\@UEBA?AW4ContainerType\@\@XZ
     */
    virtual enum class ContainerType getContainerType() const;
    /**
     * @vftbl 4
     * @symbol ?setContainerType\@ContainerManagerModel\@\@UEAAXW4ContainerType\@\@\@Z
     */
    virtual void setContainerType(enum class ContainerType);
    /**
     * @vftbl 5
     * @symbol ?serverInitItemStackIds\@ContainerManagerModel\@\@UEAAXXZ
     */
    virtual void serverInitItemStackIds();
    /**
     * @vftbl 6
     * @symbol
     * ?getItemCopies\@FurnaceContainerManagerModel\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const = 0;
    /**
     * @vftbl 7
     * @symbol ?setSlot\@FurnaceContainerManagerModel\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setSlot(int, class ItemStack const&, bool) = 0;
    /**
     * @vftbl 8
     * @symbol ?getSlot\@FurnaceContainerManagerModel\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const& getSlot(int) const = 0;
    /**
     * @vftbl 9
     * @symbol ?setData\@ElementConstructorContainerManagerModel\@\@UEAAXHH\@Z
     */
    virtual void setData(int, int) = 0;
    /**
     * @vftbl 10
     * @symbol ?broadcastChanges\@FurnaceContainerManagerModel\@\@UEAAXXZ
     */
    virtual void broadcastChanges() = 0;
    /**
     * @vftbl 11
     * @symbol ?tick\@ContainerManagerModel\@\@MEAA_NXZ
     */
    virtual bool tick();
    /**
     * @vftbl 12
     * @symbol ?debitPlayerLevels\@ContainerManagerModel\@\@UEAAXH\@Z
     */
    virtual void debitPlayerLevels(int);
    /**
     * @vftbl 13
     * @symbol ?isCreativeMode\@ContainerManagerModel\@\@UEBA_NXZ
     */
    virtual bool isCreativeMode() const;
    /**
     * @vftbl 14
     * @symbol ?isClientSide\@ContainerManagerModel\@\@UEBA_NXZ
     */
    virtual bool isClientSide() const;
    /**
     * @vftbl 15
     * @symbol ?isServerAuthoritative\@ContainerManagerModel\@\@UEBA_NXZ
     */
    virtual bool isServerAuthoritative() const;
    /**
     * @vftbl 16
     * @symbol ?isValid\@ContainerManagerModel\@\@UEAA_NM\@Z
     */
    virtual bool isValid(float);
    /**
     * @vftbl 17
     * @symbol ?_postInit\@DispenserContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit() = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINERMANAGERMODEL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ContainerManagerModel();
#endif
    /**
     * @symbol ??0ContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI ContainerManagerModel(enum class ContainerID, class Player&);
    /**
     * @symbol ?getPlayer\@ContainerManagerModel\@\@QEBAAEAVPlayer\@\@XZ
     */
    MCAPI class Player& getPlayer() const;
    /**
     * @symbol ?postInit\@ContainerManagerModel\@\@QEAAXXZ
     */
    MCAPI void postInit();

    // protected:
    /**
     * @symbol ?_addContainer\@ContainerManagerModel\@\@IEAAXV?$shared_ptr\@VContainerModel\@\@\@std\@\@\@Z
     */
    MCAPI void _addContainer(class std::shared_ptr<class ContainerModel>);
    /**
     * @symbol ?_containerScreenContext\@ContainerManagerModel\@\@IEAA?AVContainerScreenContext\@\@UActorUniqueID\@\@\@Z
     */
    MCAPI class ContainerScreenContext _containerScreenContext(struct ActorUniqueID);
    /**
     * @symbol ?_containerScreenContext\@ContainerManagerModel\@\@IEAA?AVContainerScreenContext\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class ContainerScreenContext _containerScreenContext(class BlockPos const&);
    /**
     * @symbol
     * ?_getContainer\@ContainerManagerModel\@\@IEBA?AV?$shared_ptr\@VContainerModel\@\@\@std\@\@W4ContainerEnumName\@\@\@Z
     */
    MCAPI class std::shared_ptr<class ContainerModel> _getContainer(enum class ContainerEnumName) const;
    /**
     * @symbol ?_isPlayerInRangeOfPosition\@ContainerManagerModel\@\@IEBA_NAEBVBlockPos\@\@M\@Z
     */
    MCAPI bool _isPlayerInRangeOfPosition(class BlockPos const&, float) const;
    /**
     * @symbol
     * ?_appendCopies\@ContainerManagerModel\@\@KAXAEAV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI static void _appendCopies(std::vector<class ItemStack>&, std::vector<class ItemStack> const&);

protected:
};
