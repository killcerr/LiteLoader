#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class SliderControl {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFTSERVERUI_SLIDERCONTROL
public:
    SliderControl& operator=(SliderControl const&) = delete;
    SliderControl(SliderControl const&)            = delete;
    SliderControl()                                = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getJson\@SliderControl\@ScriptModuleMinecraftServerUI\@\@UEBA?AVValue\@Json\@\@XZ
     */
    virtual class Json::Value getJson() const;
    /**
     * @symbol ??0SliderControl\@ScriptModuleMinecraftServerUI\@\@QEAA\@VValue\@Json\@\@MMMV?$optional\@H\@std\@\@\@Z
     */
    MCAPI SliderControl(class Json::Value, float, float, float, class std::optional<int>);
};

}; // namespace ScriptModuleMinecraftServerUI
