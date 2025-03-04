#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandBlockNameResult {
public:
    // CommandBlockNameResult inner types declare
    // clang-format off

    // clang-format on

    // CommandBlockNameResult inner types define
    enum class Result {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDBLOCKNAMERESULT
public:
    CommandBlockNameResult& operator=(CommandBlockNameResult const&) = delete;
    CommandBlockNameResult(CommandBlockNameResult const&)            = delete;
    CommandBlockNameResult()                                         = delete;
#endif

public:
    /**
     * @symbol ??0CommandBlockNameResult\@\@QEAA\@AEBVHashedString\@\@PEBVBlock\@\@_N\@Z
     */
    MCAPI CommandBlockNameResult(class HashedString const&, class Block const*, bool);
    /**
     * @symbol ?getBlock\@CommandBlockNameResult\@\@QEBAPEBVBlock\@\@XZ
     */
    MCAPI class Block const* getBlock() const;
    /**
     * @symbol ?getResult\@CommandBlockNameResult\@\@QEBA?AW4Result\@1\@XZ
     */
    MCAPI enum class CommandBlockNameResult::Result getResult() const;
    /**
     * @symbol ?isComplexAlias\@CommandBlockNameResult\@\@QEBA_NXZ
     */
    MCAPI bool isComplexAlias() const;
    /**
     * @symbol ?isSameBlock\@CommandBlockNameResult\@\@QEBA_NAEBVBlock\@\@_N\@Z
     */
    MCAPI bool isSameBlock(class Block const&, bool) const;
    /**
     * @symbol ??1CommandBlockNameResult\@\@QEAA\@XZ
     */
    MCAPI ~CommandBlockNameResult();
};
