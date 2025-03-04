#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class StructureAnimationAction {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREANIMATIONACTION
public:
    StructureAnimationAction& operator=(StructureAnimationAction const&) = delete;
    StructureAnimationAction(StructureAnimationAction const&)            = delete;
    StructureAnimationAction()                                           = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@StructureAnimationAction\@\@UEAAXAEAVServerLevel\@\@AEAVDimension\@\@\@Z
     */
    virtual void execute(class ServerLevel&, class Dimension&);
    /**
     * @vftbl 2
     * @symbol ?serialize\@StructureAnimationAction\@\@UEAAXAEAVCompoundTag\@\@\@Z
     */
    virtual void serialize(class CompoundTag&);
    /**
     * @vftbl 3
     * @symbol ??8StructureAnimationAction\@\@UEBA_NAEAVIRequestAction\@\@\@Z
     */
    virtual bool operator==(class IRequestAction&) const;
    /**
     * @symbol
     * ??0StructureAnimationAction\@\@QEAA\@V?$unique_ptr\@VStructureAnimationData\@\@U?$default_delete\@VStructureAnimationData\@\@\@std\@\@\@std\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI
        StructureAnimationAction(std::unique_ptr<class StructureAnimationData>, class AutomaticID<class Dimension, int>);
    /**
     * @symbol
     * ??0StructureAnimationAction\@\@QEAA\@AEBVStructureSettings\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEBVBlockPos\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI
    StructureAnimationAction(class StructureSettings const&, class AutomaticID<class Dimension, int>, class BlockPos const&, std::string const&);
    /**
     * @symbol
     * ?load\@StructureAnimationAction\@\@SA?AV?$unique_ptr\@VStructureAnimationAction\@\@U?$default_delete\@VStructureAnimationAction\@\@\@std\@\@\@std\@\@AEBVCompoundTag\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI static std::unique_ptr<class StructureAnimationAction> load(class CompoundTag const&, std::string const&);
};
