#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RecordItemComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RECORDITEMCOMPONENT
public:
    RecordItemComponent& operator=(RecordItemComponent const&) = delete;
    RecordItemComponent(RecordItemComponent const&)            = delete;
    RecordItemComponent()                                      = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isNetworkComponent\@?$NetworkedItemComponent\@VRecordItemComponent\@\@\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol
     * ?buildNetworkTag\@?$NetworkedItemComponent\@VRecordItemComponent\@\@\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl 5
     * @symbol
     * ?initializeFromNetwork\@?$NetworkedItemComponent\@VRecordItemComponent\@\@\@\@UEAA_NAEBVCompoundTag\@\@\@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const&);
    /**
     * @symbol ??0RecordItemComponent\@\@QEAA\@PEAVComponentItem\@\@W4LevelSoundEvent\@\@MH\@Z
     */
    MCAPI RecordItemComponent(class ComponentItem*, enum class LevelSoundEvent, float, int);
    /**
     * @symbol
     * ?appendFormattedHovertext\@RecordItemComponent\@\@QEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void appendFormattedHovertext(std::string&) const;
    /**
     * @symbol ?getComparatorSignal\@RecordItemComponent\@\@QEBAHXZ
     */
    MCAPI int getComparatorSignal() const;
    /**
     * @symbol ?getDuration\@RecordItemComponent\@\@QEBAMXZ
     */
    MCAPI float getDuration() const;
    /**
     * @symbol
     * ?getRecordDescription\@RecordItemComponent\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getRecordDescription() const;
    /**
     * @symbol ?getSound\@RecordItemComponent\@\@QEBA?AW4LevelSoundEvent\@\@XZ
     */
    MCAPI enum class LevelSoundEvent getSound() const;
    /**
     * @symbol ?bindType\@RecordItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?getIdentifier\@RecordItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const& getIdentifier();
    /**
     * @symbol
     * ?getRecordNameNoPrefix\@RecordItemComponent\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4LevelSoundEvent\@\@\@Z
     */
    MCAPI static std::string getRecordNameNoPrefix(enum class LevelSoundEvent);
};
