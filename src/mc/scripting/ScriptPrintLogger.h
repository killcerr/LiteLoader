#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ContextId; }
// clang-format on

class ScriptPrintLogger {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTPRINTLOGGER
public:
    ScriptPrintLogger& operator=(ScriptPrintLogger const&) = delete;
    ScriptPrintLogger(ScriptPrintLogger const&)            = delete;
    ScriptPrintLogger()                                    = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?onInfo\@ScriptPrintLogger\@\@UEBAXUContextId\@Scripting\@\@AEBV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    virtual void
    onInfo(struct Scripting::ContextId, class std::basic_string_view<char, struct std::char_traits<char>> const&) const;
    /**
     * @vftbl 2
     * @symbol
     * ?onWarn\@ScriptPrintLogger\@\@UEBAXUContextId\@Scripting\@\@AEBV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    virtual void
    onWarn(struct Scripting::ContextId, class std::basic_string_view<char, struct std::char_traits<char>> const&) const;
    /**
     * @vftbl 3
     * @symbol
     * ?onError\@ScriptPrintLogger\@\@UEBAXUContextId\@Scripting\@\@AEBV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    virtual void
    onError(struct Scripting::ContextId, class std::basic_string_view<char, struct std::char_traits<char>> const&)
        const;
    /**
     * @vftbl 4
     * @symbol ?onException\@ScriptPrintLogger\@\@UEBAXUContextId\@Scripting\@\@AEBVmeta_any\@entt\@\@\@Z
     */
    virtual void onException(struct Scripting::ContextId, class entt::meta_any const&) const;
    /**
     * @vftbl 5
     * @symbol ?shouldPrintException\@ScriptPrintLogger\@\@UEBA_NUContextId\@Scripting\@\@AEBVmeta_any\@entt\@\@\@Z
     */
    virtual bool shouldPrintException(struct Scripting::ContextId, class entt::meta_any const&) const;
    /**
     * @vftbl 6
     * @symbol
     * ?onPromiseRejection\@ScriptPrintLogger\@\@UEBAXUContextId\@Scripting\@\@AEBV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@_N\@Z
     */
    virtual void onPromiseRejection(
        struct Scripting::ContextId,
        class std::basic_string_view<char, struct std::char_traits<char>> const&,
        bool
    ) const;
};
