#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameVersion {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEVERSION
public:
    GameVersion& operator=(GameVersion const&) = delete;
#endif

public:
    /**
     * @symbol ??0GameVersion\@\@QEAA\@XZ
     */
    MCAPI GameVersion();
    /**
     * @symbol ??0GameVersion\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI GameVersion(class GameVersion const&);
    /**
     * @symbol ??0GameVersion\@\@QEAA\@IIIII\@Z
     */
    MCAPI GameVersion(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
    /**
     * @symbol ??0GameVersion\@\@QEAA\@AEBVListTag\@\@\@Z
     */
    MCAPI GameVersion(class ListTag const&);
    /**
     * @symbol
     * ?asString\@GameVersion\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& asString() const;
    /**
     * @symbol ??MGameVersion\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator<(class GameVersion const&) const;
    /**
     * @symbol ??4GameVersion\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class GameVersion& operator=(class GameVersion&&);
    /**
     * @symbol ??PGameVersion\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator>=(class GameVersion const&) const;
    /**
     * @symbol
     * ?serialize\@GameVersion\@\@QEBA?AV?$unique_ptr\@VListTag\@\@U?$default_delete\@VListTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class ListTag> serialize() const;
    /**
     * @symbol ??1GameVersion\@\@QEAA\@XZ
     */
    MCAPI ~GameVersion();
    /**
     * @symbol ?current\@GameVersion\@\@SA?AV1\@XZ
     */
    MCAPI static class GameVersion current();
};
