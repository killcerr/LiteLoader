#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptMusicOptions {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTMUSICOPTIONS
public:
    ScriptMusicOptions& operator=(ScriptMusicOptions const&) = delete;
    ScriptMusicOptions(ScriptMusicOptions const&)            = delete;
    ScriptMusicOptions()                                     = delete;
#endif

public:
    /**
     * @symbol ?getFade\@ScriptMusicOptions\@ScriptModuleMinecraft\@\@QEBAMXZ
     */
    MCAPI float getFade() const;
    /**
     * @symbol ?getLoop\@ScriptMusicOptions\@ScriptModuleMinecraft\@\@QEBA_NXZ
     */
    MCAPI bool getLoop() const;
    /**
     * @symbol ?getVolume\@ScriptMusicOptions\@ScriptModuleMinecraft\@\@QEBAMXZ
     */
    MCAPI float getVolume() const;
    /**
     * @symbol
     * ?validate\@ScriptMusicOptions\@ScriptModuleMinecraft\@\@QEBA?AV?$optional\@UError\@Scripting\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<struct Scripting::Error> validate() const;
    /**
     * @symbol ?FADE_DEFAULT\@ScriptMusicOptions\@ScriptModuleMinecraft\@\@2MB
     */
    MCAPI static float const FADE_DEFAULT;
    /**
     * @symbol ?FADE_MIN\@ScriptMusicOptions\@ScriptModuleMinecraft\@\@2MB
     */
    MCAPI static float const FADE_MIN;
    /**
     * @symbol ?LOOP_DEFAULT\@ScriptMusicOptions\@ScriptModuleMinecraft\@\@2_NB
     */
    MCAPI static bool const LOOP_DEFAULT;
    /**
     * @symbol ?VOLUME_DEFAULT\@ScriptMusicOptions\@ScriptModuleMinecraft\@\@2MB
     */
    MCAPI static float const VOLUME_DEFAULT;
    /**
     * @symbol ?VOLUME_MIN\@ScriptMusicOptions\@ScriptModuleMinecraft\@\@2MB
     */
    MCAPI static float const VOLUME_MIN;
    /**
     * @symbol
     * ?bindV010\@ScriptMusicOptions\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptMusicOptions\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptMusicOptions> bindV010();
    /**
     * @symbol
     * ?bindV1\@ScriptMusicOptions\@ScriptModuleMinecraft\@\@SA?AV?$InterfaceBindingBuilder\@UScriptMusicOptions\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptMusicOptions> bindV1();
};

}; // namespace ScriptModuleMinecraft
