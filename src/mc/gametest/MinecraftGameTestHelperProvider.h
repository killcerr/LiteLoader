#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestHelper; }
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class IGameTestHelperProvider; }
// clang-format on

class MinecraftGameTestHelperProvider {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECRAFTGAMETESTHELPERPROVIDER
public:
    MinecraftGameTestHelperProvider& operator=(MinecraftGameTestHelperProvider const&) = delete;
    MinecraftGameTestHelperProvider(MinecraftGameTestHelperProvider const&)            = delete;
    MinecraftGameTestHelperProvider()                                                  = delete;
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
     * ?createGameTestHelper\@MinecraftGameTestHelperProvider\@\@UEAA?AV?$unique_ptr\@VBaseGameTestHelper\@gametest\@\@U?$default_delete\@VBaseGameTestHelper\@gametest\@\@\@std\@\@\@std\@\@AEAVBaseGameTestInstance\@gametest\@\@\@Z
     */
    virtual std::unique_ptr<class gametest::BaseGameTestHelper>
    createGameTestHelper(class gametest::BaseGameTestInstance&);
    /**
     * @vftbl 2
     * @symbol
     * ?clone\@MinecraftGameTestHelperProvider\@\@UEAA?AV?$unique_ptr\@VIGameTestHelperProvider\@gametest\@\@U?$default_delete\@VIGameTestHelperProvider\@gametest\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class gametest::IGameTestHelperProvider> clone();
};
