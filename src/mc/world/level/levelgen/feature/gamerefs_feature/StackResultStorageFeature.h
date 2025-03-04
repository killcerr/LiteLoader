#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StackResultStorageFeature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STACKRESULTSTORAGEFEATURE
public:
    StackResultStorageFeature& operator=(StackResultStorageFeature const&) = delete;
    StackResultStorageFeature(StackResultStorageFeature const&)            = delete;
    StackResultStorageFeature()                                            = delete;
#endif

public:
    // protected:
    /**
     * @symbol ??0StackResultStorageFeature\@\@IEAA\@AEBVWeakStorageFeature\@\@\@Z
     */
    MCAPI StackResultStorageFeature(class WeakStorageFeature const&);
    /**
     * @symbol ?_getStackRef\@StackResultStorageFeature\@\@IEBAAEAVIFeature\@\@XZ
     */
    MCAPI class IFeature& _getStackRef() const;
    /**
     * @symbol ?_hasValue\@StackResultStorageFeature\@\@IEBA_NXZ
     */
    MCAPI bool _hasValue() const;

protected:
};
