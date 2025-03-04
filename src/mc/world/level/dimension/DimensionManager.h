#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/SharePtrRefTraits.h"
#include "mc/common/wrapper/WeakRefT.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/level/dimension/DimensionDefinitionGroup.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class DimensionManager {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSIONMANAGER
public:
    DimensionManager& operator=(DimensionManager const&) = delete;
    DimensionManager(DimensionManager const&)            = delete;
    DimensionManager()                                   = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIMENSIONMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DimensionManager();
#endif
    /**
     * @symbol
     * ??0DimensionManager\@\@QEAA\@V?$not_null\@V?$NonOwnerPointer\@VIDimensionFactory\@\@\@Bedrock\@\@\@gsl\@\@V?$optional\@VDimensionDefinitionGroup\@\@\@std\@\@\@Z
     */
    MCAPI
        DimensionManager(class gsl::not_null<class Bedrock::NonOwnerPointer<class IDimensionFactory>>, class std::optional<class DimensionDefinitionGroup>);
    /**
     * @symbol ?forEachDimension\@DimensionManager\@\@QEAAXV?$function\@$$A6A_NAEAVDimension\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachDimension(class std::function<bool(class Dimension&)>);
    /**
     * @symbol ?forEachDimension\@DimensionManager\@\@QEBAXV?$function\@$$A6A_NAEBVDimension\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachDimension(class std::function<bool(class Dimension const&)>) const;
    /**
     * @symbol
     * ?getDimension\@DimensionManager\@\@QEBA?AV?$WeakRefT\@U?$SharePtrRefTraits\@VDimension\@\@\@\@\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI class WeakRefT<struct SharePtrRefTraits<class Dimension>>
        getDimension(class AutomaticID<class Dimension, int>) const;
    /**
     * @symbol
     * ?getDimensionDefinition\@DimensionManager\@\@QEBA?AV?$optional\@UDimensionDefinition\@DimensionDefinitionGroup\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI class std::optional<struct DimensionDefinitionGroup::DimensionDefinition>
    getDimensionDefinition(std::string const&) const;
    /**
     * @symbol
     * ?getDimensionDefinitionGroup\@DimensionManager\@\@QEBAAEBV?$optional\@VDimensionDefinitionGroup\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<class DimensionDefinitionGroup> const& getDimensionDefinitionGroup() const;
    /**
     * @symbol
     * ?getOrCreateDimension\@DimensionManager\@\@QEAA?AV?$WeakRefT\@U?$SharePtrRefTraits\@VDimension\@\@\@\@\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI class WeakRefT<struct SharePtrRefTraits<class Dimension>>
        getOrCreateDimension(class AutomaticID<class Dimension, int>);
    /**
     * @symbol
     * ?getRandomDimension\@DimensionManager\@\@QEAA?AV?$WeakRefT\@U?$SharePtrRefTraits\@VDimension\@\@\@\@\@\@AEAVRandom\@\@\@Z
     */
    MCAPI class WeakRefT<struct SharePtrRefTraits<class Dimension>> getRandomDimension(class Random&);
    /**
     * @symbol ?hasDimensions\@DimensionManager\@\@QEBA_NXZ
     */
    MCAPI bool hasDimensions() const;
    /**
     * @symbol
     * ?registerOnNewDimensionCreated\@DimensionManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEAVDimension\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription
        registerOnNewDimensionCreated(class std::function<void(class Dimension&)>);
    /**
     * @symbol
     * ?setDimensionDefinitionGroup\@DimensionManager\@\@QEAAXV?$optional\@VDimensionDefinitionGroup\@\@\@std\@\@\@Z
     */
    MCAPI void setDimensionDefinitionGroup(class std::optional<class DimensionDefinitionGroup>);
    /**
     * @symbol ?shutdown\@DimensionManager\@\@QEAAXXZ
     */
    MCAPI void shutdown();
};
