#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"

class DoorInteractGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DOORINTERACTGOAL
public:
    DoorInteractGoal& operator=(DoorInteractGoal const&) = delete;
    DoorInteractGoal(DoorInteractGoal const&)            = delete;
    DoorInteractGoal()                                   = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@DoorInteractGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@DoorInteractGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@DoorInteractGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol ?tick\@DoorInteractGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@DoorInteractGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DOORINTERACTGOAL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DoorInteractGoal();
#endif
    /**
     * @symbol ??0DoorInteractGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI DoorInteractGoal(class Mob&);

    // private:
    /**
     * @symbol
     * ?_findBlockingDoorAtPos\@DoorInteractGoal\@\@CAPEBVDoorBlock\@\@AEBVBlockPos\@\@AEBVMob\@\@PEAVPath\@\@AEAW4Type\@Direction\@\@3\@Z
     */
    MCAPI static class DoorBlock const*
    _findBlockingDoorAtPos(class BlockPos const&, class Mob const&, class Path*, enum class Direction::Type&, enum class Direction::Type&);

private:
};
