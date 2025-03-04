#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToGoal.h"

class MoveToPOIGoal : public ::BaseMoveToGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOPOIGOAL
public:
    MoveToPOIGoal& operator=(MoveToPOIGoal const&) = delete;
    MoveToPOIGoal(MoveToPOIGoal const&)            = delete;
    MoveToPOIGoal()                                = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@MoveToPOIGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 5
     * @symbol ?stop\@MoveToPOIGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@MoveToPOIGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@MoveToPOIGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl 11
     * @symbol ?isValidTarget\@MoveToPOIGoal\@\@UEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool isValidTarget(class BlockSource&, class BlockPos const&);
    /**
     * @vftbl 14
     * @symbol ?_moveToBlock\@MoveToPOIGoal\@\@MEAAXXZ
     */
    virtual void _moveToBlock();
    /**
     * @vftbl 15
     * @symbol ?_getTargetPosition\@MoveToPOIGoal\@\@MEBA?AVVec3\@\@XZ
     */
    virtual class Vec3 _getTargetPosition() const;
    /**
     * @vftbl 17
     * @symbol ?_getOwnedPOI\@MoveToPOIGoal\@\@MEBA?AV?$weak_ptr\@VPOIInstance\@\@\@std\@\@W4POIType\@\@\@Z
     */
    virtual class std::weak_ptr<class POIInstance> _getOwnedPOI(enum class POIType) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVETOPOIGOAL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MoveToPOIGoal();
#endif
    /**
     * @symbol ??0MoveToPOIGoal\@\@QEAA\@AEAVMob\@\@MW4POIType\@\@M\@Z
     */
    MCAPI MoveToPOIGoal(class Mob&, float, enum class POIType, float);
    /**
     * @symbol ?getPOI\@MoveToPOIGoal\@\@QEAA_NW4POIType\@\@\@Z
     */
    MCAPI bool getPOI(enum class POIType);

    // protected:
    /**
     * @symbol ?_canReachPOI\@MoveToPOIGoal\@\@IEAA_NAEBVVec3\@\@M_N\@Z
     */
    MCAPI bool _canReachPOI(class Vec3 const&, float, bool);

    // private:
    /**
     * @symbol ?_updatePOIBooking\@MoveToPOIGoal\@\@AEAAXXZ
     */
    MCAPI void _updatePOIBooking();

protected:
private:
};
