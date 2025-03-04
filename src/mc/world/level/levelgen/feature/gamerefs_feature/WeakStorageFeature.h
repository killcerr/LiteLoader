#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WeakStorageFeature {
public:
    // WeakStorageFeature inner types declare
    // clang-format off

    // clang-format on

    // WeakStorageFeature inner types define
    enum class EmptyInit {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEAKSTORAGEFEATURE
public:
    WeakStorageFeature& operator=(WeakStorageFeature const&) = delete;
    WeakStorageFeature(WeakStorageFeature const&)            = delete;
    WeakStorageFeature()                                     = delete;
#endif

public:
    // protected:
    /**
     * @symbol ??0WeakStorageFeature\@\@IEAA\@W4EmptyInit\@0\@\@Z
     */
    MCAPI WeakStorageFeature(enum class WeakStorageFeature::EmptyInit);
    /**
     * @symbol ??0WeakStorageFeature\@\@IEAA\@$$QEAV0\@\@Z
     */
    MCAPI WeakStorageFeature(class WeakStorageFeature&&);
    /**
     * @symbol ??0WeakStorageFeature\@\@IEAA\@AEBVOwnerStorageFeature\@\@\@Z
     */
    MCAPI WeakStorageFeature(class OwnerStorageFeature const&);
    /**
     * @symbol ?_isSet\@WeakStorageFeature\@\@IEBA_NXZ
     */
    MCAPI bool _isSet() const;
    /**
     * @symbol ??4WeakStorageFeature\@\@IEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class WeakStorageFeature& operator=(class WeakStorageFeature&&);

protected:
};
