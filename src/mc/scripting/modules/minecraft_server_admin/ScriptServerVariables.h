#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct JSON; }
// clang-format on

namespace ScriptModuleMinecraftServerAdmin {

class ScriptServerVariables {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFTSERVERADMIN_SCRIPTSERVERVARIABLES
public:
    ScriptServerVariables& operator=(ScriptServerVariables const&) = delete;
    ScriptServerVariables(ScriptServerVariables const&)            = delete;
    ScriptServerVariables()                                        = delete;
#endif

public:
    /**
     * @symbol ??0ScriptServerVariables\@ScriptModuleMinecraftServerAdmin\@\@QEAA\@$$QEAV01\@\@Z
     */
    MCAPI ScriptServerVariables(class ScriptModuleMinecraftServerAdmin::ScriptServerVariables&&);
    /**
     * @symbol
     * ??0ScriptServerVariables\@ScriptModuleMinecraftServerAdmin\@\@QEAA\@V?$NonOwnerPointer\@VScriptPackConfigurationManager\@\@\@Bedrock\@\@AEBUContextConfig\@Scripting\@\@\@Z
     */
    MCAPI
    ScriptServerVariables(class Bedrock::NonOwnerPointer<class ScriptPackConfigurationManager>, struct Scripting::ContextConfig const&);
    /**
     * @symbol
     * ?get\@ScriptServerVariables\@ScriptModuleMinecraftServerAdmin\@\@QEBA?AV?$optional\@UJSON\@Scripting\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@4\@\@Z
     */
    MCAPI class std::optional<struct Scripting::JSON> get(std::string const&) const;
    /**
     * @symbol
     * ?getAllVariableNames\@ScriptServerVariables\@ScriptModuleMinecraftServerAdmin\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getAllVariableNames() const;
    /**
     * @symbol
     * ?bind\@ScriptServerVariables\@ScriptModuleMinecraftServerAdmin\@\@SA?AV?$ClassBindingBuilder\@VScriptServerVariables\@ScriptModuleMinecraftServerAdmin\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraftServerAdmin::ScriptServerVariables>
    bind();
};

}; // namespace ScriptModuleMinecraftServerAdmin
