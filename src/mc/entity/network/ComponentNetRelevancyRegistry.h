#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ComponentNetRelevancyRegistry {
public:
    // ComponentNetRelevancyRegistry inner types declare
    // clang-format off
    struct NetSerializationCallbacks;
    // clang-format on

    // ComponentNetRelevancyRegistry inner types define
    struct NetSerializationCallbacks {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPONENTNETRELEVANCYREGISTRY_NETSERIALIZATIONCALLBACKS
    public:
        NetSerializationCallbacks& operator=(NetSerializationCallbacks const&) = delete;
        NetSerializationCallbacks(NetSerializationCallbacks const&)            = delete;
        NetSerializationCallbacks()                                            = delete;
#endif

    public:
        /**
         * @symbol ?setNeverClientSide\@NetSerializationCallbacks\@ComponentNetRelevancyRegistry\@\@QEAAAEAU12\@XZ
         */
        MCAPI struct ComponentNetRelevancyRegistry::NetSerializationCallbacks& setNeverClientSide();
        /**
         * @symbol ?setNeverServerSide\@NetSerializationCallbacks\@ComponentNetRelevancyRegistry\@\@QEAAAEAU12\@XZ
         */
        MCAPI struct ComponentNetRelevancyRegistry::NetSerializationCallbacks& setNeverServerSide();
        /**
         * @symbol ??1NetSerializationCallbacks\@ComponentNetRelevancyRegistry\@\@QEAA\@XZ
         */
        MCAPI ~NetSerializationCallbacks();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPONENTNETRELEVANCYREGISTRY
public:
    ComponentNetRelevancyRegistry& operator=(ComponentNetRelevancyRegistry const&) = delete;
    ComponentNetRelevancyRegistry(ComponentNetRelevancyRegistry const&)            = delete;
    ComponentNetRelevancyRegistry()                                                = delete;
#endif

public:
    /**
     * @symbol
     * ?getFilteredDefinitionsForServer\@ComponentNetRelevancyRegistry\@\@QEBA?AVDefinitionInstanceGroup\@\@AEBV2\@\@Z
     */
    MCAPI class DefinitionInstanceGroup getFilteredDefinitionsForServer(class DefinitionInstanceGroup const&) const;
    /**
     * @symbol
     * ?registerNetSerialization\@ComponentNetRelevancyRegistry\@\@QEAAAEAUNetSerializationCallbacks\@1\@AEBVHashedString\@\@V?$function\@$$A6A_NAEBVDefinitionInstanceGroup\@\@AEAVCompoundTag\@\@\@Z\@std\@\@\@Z
     */
    MCAPI struct ComponentNetRelevancyRegistry::NetSerializationCallbacks&
    registerNetSerialization(class HashedString const&, class std::function<bool(class DefinitionInstanceGroup const&, class CompoundTag&)>);
    /**
     * @symbol
     * ?serializeComponentDefinitionsForClient\@ComponentNetRelevancyRegistry\@\@QEBA_NAEBVDefinitionInstanceGroup\@\@AEAVCompoundTag\@\@\@Z
     */
    MCAPI bool serializeComponentDefinitionsForClient(class DefinitionInstanceGroup const&, class CompoundTag&) const;
    /**
     * @symbol ??1ComponentNetRelevancyRegistry\@\@QEAA\@XZ
     */
    MCAPI ~ComponentNetRelevancyRegistry();
};
