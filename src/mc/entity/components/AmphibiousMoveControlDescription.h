#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/MoveControlDescription.h"

class AmphibiousMoveControlDescription : public ::MoveControlDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AMPHIBIOUSMOVECONTROLDESCRIPTION
public:
    AmphibiousMoveControlDescription& operator=(AmphibiousMoveControlDescription const&) = delete;
    AmphibiousMoveControlDescription(AmphibiousMoveControlDescription const&)            = delete;
    AmphibiousMoveControlDescription()                                                   = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@AmphibiousMoveControlDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@MoveControlDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AMPHIBIOUSMOVECONTROLDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AmphibiousMoveControlDescription();
#endif
};
