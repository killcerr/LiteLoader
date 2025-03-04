#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class GetInteractionPositionForBlockDefinition : public ::BehaviorDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GETINTERACTIONPOSITIONFORBLOCKDEFINITION
public:
    GetInteractionPositionForBlockDefinition& operator=(GetInteractionPositionForBlockDefinition const&) = delete;
    GetInteractionPositionForBlockDefinition(GetInteractionPositionForBlockDefinition const&)            = delete;
    GetInteractionPositionForBlockDefinition()                                                           = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?load\@GetInteractionPositionForBlockDefinition\@\@UEAAXVValue\@Json\@\@AEBVBehaviorFactory\@\@\@Z
     */
    virtual void load(class Json::Value, class BehaviorFactory const&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GETINTERACTIONPOSITIONFORBLOCKDEFINITION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~GetInteractionPositionForBlockDefinition();
#endif
};
