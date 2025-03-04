#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ExperienceRewardComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPERIENCEREWARDCOMPONENT
public:
    ExperienceRewardComponent& operator=(ExperienceRewardComponent const&) = delete;
    ExperienceRewardComponent(ExperienceRewardComponent const&)            = delete;
    ExperienceRewardComponent()                                            = delete;
#endif

public:
    /**
     * @symbol ?addAdditionalSaveData\@ExperienceRewardComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @symbol ?getIsExperienceDropEnabled\@ExperienceRewardComponent\@\@QEBA_NXZ
     */
    MCAPI bool getIsExperienceDropEnabled() const;
    /**
     * @symbol ?getOnBredExperience\@ExperienceRewardComponent\@\@QEBAHAEAVActor\@\@\@Z
     */
    MCAPI int getOnBredExperience(class Actor&) const;
    /**
     * @symbol ?getOnDeathExperience\@ExperienceRewardComponent\@\@QEBAHAEAVActor\@\@\@Z
     */
    MCAPI int getOnDeathExperience(class Actor&) const;
    /**
     * @symbol ??4ExperienceRewardComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ExperienceRewardComponent& operator=(class ExperienceRewardComponent&&);
    /**
     * @symbol
     * ?readAdditionalSaveData\@ExperienceRewardComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
    /**
     * @symbol ?setIsExperienceDropEnabled\@ExperienceRewardComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setIsExperienceDropEnabled(bool);

    // private:

private:
    /**
     * @symbol
     * ?mIsExperienceDropEnabledTag\@ExperienceRewardComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const mIsExperienceDropEnabledTag;
};
