#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestBatchRunner; }
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class IGameTestRuleHelper; }
// clang-format on

namespace gametest {

class GameTestTicker {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETEST_GAMETESTTICKER
public:
    GameTestTicker& operator=(GameTestTicker const&) = delete;
    GameTestTicker(GameTestTicker const&)            = delete;
    GameTestTicker()                                 = delete;
#endif

public:
    /**
     * @symbol
     * ??0GameTestTicker\@gametest\@\@QEAA\@V?$unique_ptr\@VIGameTestRuleHelper\@gametest\@\@U?$default_delete\@VIGameTestRuleHelper\@gametest\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI GameTestTicker(std::unique_ptr<class gametest::IGameTestRuleHelper>);
    /**
     * @symbol
     * ?add\@GameTestTicker\@gametest\@\@QEAAXV?$unique_ptr\@VBaseGameTestBatchRunner\@gametest\@\@U?$default_delete\@VBaseGameTestBatchRunner\@gametest\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void add(std::unique_ptr<class gametest::BaseGameTestBatchRunner>);
    /**
     * @symbol ?add\@GameTestTicker\@gametest\@\@QEAAXV?$shared_ptr\@VBaseGameTestInstance\@gametest\@\@\@std\@\@\@Z
     */
    MCAPI void add(class std::shared_ptr<class gametest::BaseGameTestInstance>);
    /**
     * @symbol
     * ?add\@GameTestTicker\@gametest\@\@QEAAXV?$unique_ptr\@VGameTestClearTask\@\@U?$default_delete\@VGameTestClearTask\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void add(std::unique_ptr<class GameTestClearTask>);
    /**
     * @symbol ?cleanupGameRules\@GameTestTicker\@gametest\@\@QEAAXXZ
     */
    MCAPI void cleanupGameRules();
    /**
     * @symbol ?clear\@GameTestTicker\@gametest\@\@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @symbol ?empty\@GameTestTicker\@gametest\@\@QEBA_NXZ
     */
    MCAPI bool empty() const;
    /**
     * @symbol ?forceStop\@GameTestTicker\@gametest\@\@QEAAXXZ
     */
    MCAPI void forceStop();
    /**
     * @symbol ?tick\@GameTestTicker\@gametest\@\@QEAAXXZ
     */
    MCAPI void tick();
    /**
     * @symbol ??1GameTestTicker\@gametest\@\@QEAA\@XZ
     */
    MCAPI ~GameTestTicker();
};

}; // namespace gametest
