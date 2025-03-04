#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Experiments {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPERIMENTS
public:
    Experiments& operator=(Experiments const&) = delete;
    Experiments(Experiments const&)            = delete;
#endif

public:
    /**
     * @symbol ?Cameras\@Experiments\@\@QEBA_NXZ
     */
    MCAPI bool Cameras() const;
    /**
     * @symbol ?DataDrivenBiomes\@Experiments\@\@QEBA_NXZ
     */
    MCAPI bool DataDrivenBiomes() const;
    /**
     * @symbol ?DataDrivenItems\@Experiments\@\@QEBA_NXZ
     */
    MCAPI bool DataDrivenItems() const;
    /**
     * @symbol ??0Experiments\@\@QEAA\@XZ
     */
    MCAPI Experiments();
    /**
     * @symbol ?Gametest\@Experiments\@\@QEBA_NXZ
     */
    MCAPI bool Gametest() const;
    /**
     * @symbol ?RecipeUnlocking\@Experiments\@\@QEBA_NXZ
     */
    MCAPI bool RecipeUnlocking() const;
    /**
     * @symbol ?ShortSneaking\@Experiments\@\@QEBA_NXZ
     */
    MCAPI bool ShortSneaking() const;
    /**
     * @symbol ?UpcomingCreatorFeatures\@Experiments\@\@QEBA_NXZ
     */
    MCAPI bool UpcomingCreatorFeatures() const;
    /**
     * @symbol
     * ?getExperimentsActiveAsJSONList\@Experiments\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getExperimentsActiveAsJSONList() const;
    /**
     * @symbol
     * ?getExperimentsActiveForTelemetry\@Experiments\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getExperimentsActiveForTelemetry() const;
    /**
     * @symbol ?getTagData\@Experiments\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void getTagData(class CompoundTag const&);
    /**
     * @symbol ?isExperimentEnabled\@Experiments\@\@QEBA_NW4AllExperiments\@\@\@Z
     */
    MCAPI bool isExperimentEnabled(enum class AllExperiments) const;
    /**
     * @symbol ?setExperimentByToggleIndex\@Experiments\@\@QEAAX_K_N\@Z
     */
    MCAPI void setExperimentByToggleIndex(unsigned __int64, bool);
    /**
     * @symbol ?setExperimentEnabled\@Experiments\@\@QEAAXW4AllExperiments\@\@_N\@Z
     */
    MCAPI void setExperimentEnabled(enum class AllExperiments, bool);
    /**
     * @symbol ?setTagData\@Experiments\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void setTagData(class CompoundTag&) const;
    /**
     * @symbol ??1Experiments\@\@QEAA\@XZ
     */
    MCAPI ~Experiments();
    /**
     * @symbol ?MinecraftExplorer\@Experiments\@\@SA_NXZ
     */
    MCAPI static bool MinecraftExplorer();
    /**
     * @symbol
     * ?getExperimentTextID\@Experiments\@\@SAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4AllExperiments\@\@\@Z
     */
    MCAPI static std::string const& getExperimentTextID(enum class AllExperiments);
    /**
     * @symbol
     * ?getToggleNames\@Experiments\@\@SAAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI static std::vector<std::string> const& getToggleNames();
};
