#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorSpawnRuleGroup {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORSPAWNRULEGROUP
public:
    ActorSpawnRuleGroup& operator=(ActorSpawnRuleGroup const&) = delete;
    ActorSpawnRuleGroup(ActorSpawnRuleGroup const&)            = delete;
    ActorSpawnRuleGroup()                                      = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?getRootKey\@ActorSpawnRuleGroup\@\@MEAAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getRootKey();
    /**
     * @vftbl 2
     * @symbol
     * ?getFileType\@ActorSpawnRuleGroup\@\@MEAAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getFileType();
    /**
     * @vftbl 3
     * @symbol
     * ?processPopulationControl\@ActorSpawnRuleGroup\@\@MEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVValue\@Json\@\@\@Z
     */
    virtual bool processPopulationControl(std::string const&, class Json::Value&);
    /**
     * @vftbl 4
     * @symbol
     * ?readResourceFiles\@ActorSpawnRuleGroup\@\@MEAAXAEAVResourcePackManager\@\@AEAV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UActorSpawnRuleDefinition\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UActorSpawnRuleDefinition\@\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    virtual void
    readResourceFiles(class ResourcePackManager&, class std::unordered_map<std::string, struct ActorSpawnRuleDefinition, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, struct ActorSpawnRuleDefinition>>>&);
    /**
     * @symbol ??0ActorSpawnRuleGroup\@\@QEAA\@AEAVResourcePackManager\@\@AEAVIWorldRegistriesProvider\@\@\@Z
     */
    MCAPI ActorSpawnRuleGroup(class ResourcePackManager&, class IWorldRegistriesProvider&);
    /**
     * @symbol ?getActorSpawnPool\@ActorSpawnRuleGroup\@\@QEBAHAEBUActorDefinitionIdentifier\@\@\@Z
     */
    MCAPI int getActorSpawnPool(struct ActorDefinitionIdentifier const&) const;
    /**
     * @symbol
     * ?getDelayEnd\@ActorSpawnRuleGroup\@\@QEBAHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI int getDelayEnd(std::string const&) const;
    /**
     * @symbol ?offSetDelayByCurrentTick\@ActorSpawnRuleGroup\@\@QEAAXAEBUTick\@\@\@Z
     */
    MCAPI void offSetDelayByCurrentTick(struct Tick const&);
    /**
     * @symbol ?resetDelayEnd\@ActorSpawnRuleGroup\@\@QEAAXVMobSpawnRules\@\@_KAEAVRandom\@\@\@Z
     */
    MCAPI void resetDelayEnd(class MobSpawnRules, unsigned __int64, class Random&);
};
