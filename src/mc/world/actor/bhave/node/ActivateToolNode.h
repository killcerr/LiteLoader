#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActivateToolNode {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTIVATETOOLNODE
public:
    ActivateToolNode& operator=(ActivateToolNode const&) = delete;
    ActivateToolNode(ActivateToolNode const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@ActivateToolNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&);
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@ActivateToolNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&);
    /**
     * @symbol ??0ActivateToolNode\@\@QEAA\@XZ
     */
    MCAPI ActivateToolNode();
};
