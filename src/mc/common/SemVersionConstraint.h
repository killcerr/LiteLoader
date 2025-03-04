#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
// clang-format on

class SemVersionConstraint {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SEMVERSIONCONSTRAINT
public:
    SemVersionConstraint& operator=(SemVersionConstraint const&) = delete;
    SemVersionConstraint(SemVersionConstraint const&)            = delete;
    SemVersionConstraint()                                       = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?doValidate\@SemVersionConstraint\@\@EEBA_NAEBVmeta_any\@entt\@\@AEAVSerializerContext\@cereal\@\@\@Z
     */
    virtual bool doValidate(class entt::meta_any const&, class cereal::SerializerContext&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SEMVERSIONCONSTRAINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SemVersionConstraint();
#endif
    /**
     * @symbol ?min\@SemVersionConstraint\@\@QEAAAEAV1\@AEBVSemVersion\@\@\@Z
     */
    MCAPI class SemVersionConstraint& min(class SemVersion const&);
};
