#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class ValidatorRegistry {
public:
    // ValidatorRegistry inner types declare
    // clang-format off
    class ValidatorRegistryValidators;
    // clang-format on

    // ValidatorRegistry inner types define
    class ValidatorRegistryValidators {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VALIDATORREGISTRY_VALIDATORREGISTRYVALIDATORS
    public:
        ValidatorRegistryValidators& operator=(ValidatorRegistryValidators const&) = delete;
        ValidatorRegistryValidators(ValidatorRegistryValidators const&)            = delete;
        ValidatorRegistryValidators()                                              = delete;
#endif

    public:
        /**
         * @symbol ??1ValidatorRegistryValidators\@ValidatorRegistry\@\@QEAA\@XZ
         */
        MCAPI ~ValidatorRegistryValidators();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VALIDATORREGISTRY
public:
    ValidatorRegistry& operator=(ValidatorRegistry const&) = delete;
    ValidatorRegistry(ValidatorRegistry const&)            = delete;
    ValidatorRegistry()                                    = delete;
#endif

public:
    /**
     * @symbol
     * ?findValidators\@ValidatorRegistry\@\@SA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVValidatorRegistryValidators\@1\@\@Z
     */
    MCAPI static bool findValidators(std::string const&, class ValidatorRegistry::ValidatorRegistryValidators&);
    /**
     * @symbol
     * ?registerValidators\@ValidatorRegistry\@\@SAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@V?$function\@$$A6A?AVContentTierIncompatibleReason\@\@AEBVPackInstance\@\@AEBVContentTierInfo\@\@\@Z\@3\@V?$function\@$$A6A?AVContentTierIncompatibleReason\@\@AEBUSubpackInfo\@\@AEBVContentTierInfo\@\@\@Z\@3\@\@Z
     */
    MCAPI static void
        registerValidators(class std::basic_string_view<char, struct std::char_traits<char>>, class std::function<class ContentTierIncompatibleReason(class PackInstance const&, class ContentTierInfo const&)>, class std::function<class ContentTierIncompatibleReason(struct SubpackInfo const&, class ContentTierInfo const&)>);

    // private:
    /**
     * @symbol ?_get\@ValidatorRegistry\@\@CA?AV?$NonOwnerPointer\@VValidatorRegistry\@\@\@Bedrock\@\@XZ
     */
    MCAPI static class Bedrock::NonOwnerPointer<class ValidatorRegistry> _get();

private:
};
