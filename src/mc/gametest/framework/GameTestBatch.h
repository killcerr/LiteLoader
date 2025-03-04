#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestFunction; }
// clang-format on

namespace gametest {

class GameTestBatch {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETEST_GAMETESTBATCH
public:
    GameTestBatch& operator=(GameTestBatch const&) = delete;
    GameTestBatch(GameTestBatch const&)            = delete;
    GameTestBatch()                                = delete;
#endif

public:
    /**
     * @symbol
     * ??0GameTestBatch\@gametest\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@V?$shared_ptr\@VBaseGameTestFunction\@gametest\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VBaseGameTestFunction\@gametest\@\@\@std\@\@\@2\@\@3\@V?$function\@$$A6AXXZ\@3\@\@Z
     */
    MCAPI
        GameTestBatch(std::string, std::vector<class std::shared_ptr<class gametest::BaseGameTestFunction>>, class std::function<void(void)>);
    /**
     * @symbol ??0GameTestBatch\@gametest\@\@QEAA\@$$QEAV01\@\@Z
     */
    MCAPI GameTestBatch(class gametest::GameTestBatch&&);
    /**
     * @symbol ??1GameTestBatch\@gametest\@\@QEAA\@XZ
     */
    MCAPI ~GameTestBatch();
};

}; // namespace gametest
