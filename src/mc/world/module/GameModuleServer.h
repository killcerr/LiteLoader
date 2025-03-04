#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameModuleServer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEMODULESERVER
public:
    GameModuleServer& operator=(GameModuleServer const&) = delete;
    GameModuleServer(GameModuleServer const&)            = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GAMEMODULESERVER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~GameModuleServer();
#endif
    /**
     * @symbol ??0GameModuleServer\@\@QEAA\@XZ
     */
    MCAPI GameModuleServer();
};
