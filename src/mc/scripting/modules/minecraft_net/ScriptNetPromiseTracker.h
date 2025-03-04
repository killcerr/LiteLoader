#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftNet { struct ScriptNetHeader; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptNetPromiseTracker {
public:
    // ScriptNetPromiseTracker inner types declare
    // clang-format off
    struct InProgressRequest;
    // clang-format on

    // ScriptNetPromiseTracker inner types define
    struct InProgressRequest {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFTNET_SCRIPTNETPROMISETRACKER_INPROGRESSREQUEST
    public:
        InProgressRequest& operator=(InProgressRequest const&) = delete;
        InProgressRequest(InProgressRequest const&)            = delete;
        InProgressRequest()                                    = delete;
#endif

    public:
        /**
         * @symbol ??1InProgressRequest\@ScriptNetPromiseTracker\@ScriptModuleMinecraftNet\@\@QEAA\@XZ
         */
        MCAPI ~InProgressRequest();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFTNET_SCRIPTNETPROMISETRACKER
public:
    ScriptNetPromiseTracker& operator=(ScriptNetPromiseTracker const&) = delete;
    ScriptNetPromiseTracker(ScriptNetPromiseTracker const&)            = delete;
    ScriptNetPromiseTracker()                                          = delete;
#endif

public:
    /**
     * @symbol
     * ?handleFailure\@ScriptNetPromiseTracker\@ScriptModuleMinecraftNet\@\@QEAAXIAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void handleFailure(unsigned int, std::string const&);
    /**
     * @symbol
     * ?handleResponse\@ScriptNetPromiseTracker\@ScriptModuleMinecraftNet\@\@QEAAXIAEBV?$vector\@UScriptNetHeader\@ScriptModuleMinecraftNet\@\@V?$allocator\@UScriptNetHeader\@ScriptModuleMinecraftNet\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@4\@I\@Z
     */
    MCAPI void handleResponse(
        unsigned int,
        std::vector<struct ScriptModuleMinecraftNet::ScriptNetHeader> const&,
        std::string const&,
        unsigned int
    );
    /**
     * @symbol
     * ?rejectAll\@ScriptNetPromiseTracker\@ScriptModuleMinecraftNet\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void rejectAll(std::string const&);
};

}; // namespace ScriptModuleMinecraftNet
