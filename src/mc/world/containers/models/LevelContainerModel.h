#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/models/ContainerModel.h"

class LevelContainerModel : public ::ContainerModel {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCONTAINERMODEL
public:
    LevelContainerModel& operator=(LevelContainerModel const&) = delete;
    LevelContainerModel(LevelContainerModel const&)            = delete;
    LevelContainerModel()                                      = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?containerContentChanged\@LevelContainerModel\@\@UEAAXH\@Z
     */
    virtual void containerContentChanged(int);
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?postInit\@LevelContainerModel\@\@UEAAXXZ
     */
    virtual void postInit();
    /**
     * @vftbl 3
     * @symbol ?releaseResources\@LevelContainerModel\@\@UEAAXXZ
     */
    virtual void releaseResources();
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl 7
     * @symbol ?getContainerWeakRef\@LevelContainerModel\@\@UEBA?AVContainerWeakRef\@\@XZ
     */
    virtual class ContainerWeakRef getContainerWeakRef() const;
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl 14
     * @symbol ?isValid\@LevelContainerModel\@\@UEAA_NXZ
     */
    virtual bool isValid();
    /**
     * @vftbl 15
     * @symbol __unk_vfn_15
     */
    virtual void __unk_vfn_15();
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl 20
     * @symbol ?_getContainer\@LevelContainerModel\@\@EEBAPEAVContainer\@\@XZ
     */
    virtual class Container* _getContainer() const;
    /**
     * @vftbl 21
     * @symbol ?_getContainerOffset\@LevelContainerModel\@\@MEBAHXZ
     */
    virtual int _getContainerOffset() const;
    /**
     * @vftbl 22
     * @symbol ?_onItemChanged\@LevelContainerModel\@\@MEAAXHAEBVItemStack\@\@0\@Z
     */
    virtual void _onItemChanged(int, class ItemStack const&, class ItemStack const&);
    /**
     * @symbol
     * ??0LevelContainerModel\@\@QEAA\@W4ContainerEnumName\@\@HAEAVPlayer\@\@W4BlockActorType\@\@AEBVBlockPos\@\@W4ContainerCategory\@\@\@Z
     */
    MCAPI LevelContainerModel(
        enum class ContainerEnumName,
        int,
        class Player&,
        enum class BlockActorType,
        class BlockPos const&,
        enum class ContainerCategory
    );
    /**
     * @symbol
     * ??0LevelContainerModel\@\@QEAA\@W4ContainerEnumName\@\@HAEAVPlayer\@\@UActorUniqueID\@\@W4ContainerCategory\@\@\@Z
     */
    MCAPI LevelContainerModel(
        enum class ContainerEnumName,
        int,
        class Player&,
        struct ActorUniqueID,
        enum class ContainerCategory
    );
    /**
     * @symbol
     * ?getContainerHelper\@LevelContainerModel\@\@SAPEAVContainer\@\@AEAVPlayer\@\@W4BlockActorType\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static class Container* getContainerHelper(class Player&, enum class BlockActorType, class BlockPos const&);

    // private:
    /**
     * @symbol ?_getEntity\@LevelContainerModel\@\@AEBAPEAVActor\@\@XZ
     */
    MCAPI class Actor* _getEntity() const;
    /**
     * @symbol ?_refreshSlot\@LevelContainerModel\@\@AEAAXH\@Z
     */
    MCAPI void _refreshSlot(int);

private:
};
