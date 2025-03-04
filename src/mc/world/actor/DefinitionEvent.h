#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DefinitionEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFINITIONEVENT
public:
    DefinitionEvent() = delete;
#endif

public:
    /**
     * @symbol ??0DefinitionEvent\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI DefinitionEvent(class DefinitionEvent const&);
    /**
     * @symbol ??0DefinitionEvent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI DefinitionEvent(class DefinitionEvent&&);
    /**
     * @symbol
     * ?evaluateEvent\@DefinitionEvent\@\@QEBAXAEAVRenderParams\@\@AEAV?$vector\@UDefinitionModifier\@\@V?$allocator\@UDefinitionModifier\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void evaluateEvent(class RenderParams&, std::vector<struct DefinitionModifier>&) const;
    /**
     * @symbol ??4DefinitionEvent\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class DefinitionEvent& operator=(class DefinitionEvent const&);
    /**
     * @symbol ??1DefinitionEvent\@\@QEAA\@XZ
     */
    MCAPI ~DefinitionEvent();
};
