#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandOriginLoader {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDORIGINLOADER
public:
    CommandOriginLoader& operator=(CommandOriginLoader const&) = delete;
    CommandOriginLoader(CommandOriginLoader const&)            = delete;
    CommandOriginLoader()                                      = delete;
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
     * ?load\@CommandOriginLoader\@\@UEAA?AV?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@std\@\@AEBVCompoundTag\@\@\@Z
     */
    virtual std::unique_ptr<class CommandOrigin> load(class CompoundTag const&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMMANDORIGINLOADER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CommandOriginLoader();
#endif
    /**
     * @symbol ??0CommandOriginLoader\@\@QEAA\@AEAVServerLevel\@\@\@Z
     */
    MCAPI CommandOriginLoader(class ServerLevel&);
    /**
     * @symbol
     * ?load\@CommandOriginLoader\@\@SA?AV?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@std\@\@AEBVCompoundTag\@\@AEAVServerLevel\@\@\@Z
     */
    MCAPI static std::unique_ptr<class CommandOrigin> load(class CompoundTag const&, class ServerLevel&);
};
