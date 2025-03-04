#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

class MusicBlockActor : public ::BlockActor {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MUSICBLOCKACTOR
public:
    MusicBlockActor& operator=(MusicBlockActor const&) = delete;
    MusicBlockActor(MusicBlockActor const&)            = delete;
    MusicBlockActor()                                  = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?load\@MusicBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);
    /**
     * @vftbl 2
     * @symbol ?save\@MusicBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag&) const;
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl 30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl 31
     * @symbol __unk_vfn_31
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl 32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl 33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl 34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl 39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39();
    /**
     * @symbol ??0MusicBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI MusicBlockActor(class BlockPos const&);
    /**
     * @symbol ?playNote\@MusicBlockActor\@\@QEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void playNote(class BlockSource&, class BlockPos const&);
    /**
     * @symbol ?tune\@MusicBlockActor\@\@QEAAXXZ
     */
    MCAPI void tune();
    /**
     * @symbol ?getInstrumentIndex\@MusicBlockActor\@\@SA?AV?$optional\@H\@std\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static class std::optional<int> getInstrumentIndex(class BlockSource&, class BlockPos const&);

    // private:
    /**
     * @symbol ?_getInstrumentIndexForBlock\@MusicBlockActor\@\@CAHAEBVBlockLegacy\@\@\@Z
     */
    MCAPI static int _getInstrumentIndexForBlock(class BlockLegacy const&);

private:
};
