#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerValidatorFactory {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERVALIDATORFACTORY
public:
    ContainerValidatorFactory& operator=(ContainerValidatorFactory const&) = delete;
    ContainerValidatorFactory(ContainerValidatorFactory const&)            = delete;
    ContainerValidatorFactory()                                            = delete;
#endif

public:
    /**
     * @symbol
     * ?createContainerScreenValidator\@ContainerValidatorFactory\@\@SA?AV?$unique_ptr\@VContainerScreenValidatorBase\@\@U?$default_delete\@VContainerScreenValidatorBase\@\@\@std\@\@\@std\@\@AEBVContainerScreenContext\@\@\@Z
     */
    MCAPI static std::unique_ptr<class ContainerScreenValidatorBase>
    createContainerScreenValidator(class ContainerScreenContext const&);
    /**
     * @symbol
     * ?createContainerValidator\@ContainerValidatorFactory\@\@SA?AV?$shared_ptr\@$$CBVContainerValidationBase\@\@\@std\@\@W4ContainerEnumName\@\@AEBVContainerScreenContext\@\@W4ContainerValidationCaller\@\@\@Z
     */
    MCAPI static class std::shared_ptr<class ContainerValidationBase const> createContainerValidator(
        enum class ContainerEnumName,
        class ContainerScreenContext const&,
        enum class ContainerValidationCaller
    );
    /**
     * @symbol
     * ?getBackingContainer\@ContainerValidatorFactory\@\@SAPEAVContainer\@\@W4ContainerEnumName\@\@AEBVContainerScreenContext\@\@\@Z
     */
    MCAPI static class Container*
    getBackingContainer(enum class ContainerEnumName, class ContainerScreenContext const&);
};
