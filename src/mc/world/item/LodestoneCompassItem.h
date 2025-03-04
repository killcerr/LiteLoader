#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/item/AbstractCompassItem.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace PositionTrackingDB { class TrackingRecord; }
namespace mce { class Color; }
// clang-format on

class LodestoneCompassItem : public ::AbstractCompassItem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LODESTONECOMPASSITEM
public:
    LodestoneCompassItem& operator=(LodestoneCompassItem const&) = delete;
    LodestoneCompassItem(LodestoneCompassItem const&)            = delete;
    LodestoneCompassItem()                                       = delete;
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
     * @vftbl 122
     * @symbol ?getAnimationFrameFor\@LodestoneCompassItem\@\@UEBAHPEAVMob\@\@_NPEBVItemStack\@\@_N\@Z
     */
    virtual int getAnimationFrameFor(class Mob*, bool, class ItemStack const*, bool) const;
    /**
     * @vftbl 135
     * @symbol
     * ?_useOn\@LodestoneCompassItem\@\@EEBA?AVInteractionResult\@\@AEAVItemStack\@\@AEAVActor\@\@VBlockPos\@\@EAEBVVec3\@\@\@Z
     */
    virtual class InteractionResult
    _useOn(class ItemStack&, class Actor&, class BlockPos, unsigned char, class Vec3 const&) const;
    /**
     * @symbol
     * ??0LodestoneCompassItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI LodestoneCompassItem(std::string const&, int);
    /**
     * @symbol ?linkCompassToLodestone\@LodestoneCompassItem\@\@SA_NAEAVItemStack\@\@AEAVBlockSource\@\@VBlockPos\@\@\@Z
     */
    MCAPI static bool linkCompassToLodestone(class ItemStack&, class BlockSource&, class BlockPos);

    // private:
    /**
     * @symbol
     * ?_tryGetOrAddComponent\@LodestoneCompassItem\@\@CAPEAVLodestoneCompassComponent\@\@PEAVTrackingRecord\@PositionTrackingDB\@\@AEBV?$variant\@UActorUniqueID\@\@U?$pair\@VBlockPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static class LodestoneCompassComponent*
    _tryGetOrAddComponent(class PositionTrackingDB::TrackingRecord*, class std::variant<struct ActorUniqueID, struct std::pair<class BlockPos, class AutomaticID<class Dimension, int>>> const&);

private:
};
