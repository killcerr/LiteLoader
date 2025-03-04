#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockRandomTickingComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKRANDOMTICKINGCOMPONENT
public:
    BlockRandomTickingComponent& operator=(BlockRandomTickingComponent const&) = delete;
    BlockRandomTickingComponent(BlockRandomTickingComponent const&)            = delete;
    BlockRandomTickingComponent()                                              = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKRANDOMTICKINGCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockRandomTickingComponent();
#endif
    /**
     * @symbol ??0BlockRandomTickingComponent\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI BlockRandomTickingComponent(struct BlockRandomTickingComponent&&);
};
