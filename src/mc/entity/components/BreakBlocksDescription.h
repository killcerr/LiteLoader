#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BreakBlocksDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREAKBLOCKSDESCRIPTION
public:
    BreakBlocksDescription& operator=(BreakBlocksDescription const&) = delete;
    BreakBlocksDescription(BreakBlocksDescription const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@BreakBlocksDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@BreakBlocksDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BREAKBLOCKSDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BreakBlocksDescription();
#endif
    /**
     * @symbol ??0BreakBlocksDescription\@\@QEAA\@XZ
     */
    MCAPI BreakBlocksDescription();
};
