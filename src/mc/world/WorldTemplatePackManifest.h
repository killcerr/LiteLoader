#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WorldTemplatePackManifest {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDTEMPLATEPACKMANIFEST
public:
    WorldTemplatePackManifest& operator=(WorldTemplatePackManifest const&) = delete;
    WorldTemplatePackManifest(WorldTemplatePackManifest const&)            = delete;
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
     * ?clone\@WorldTemplatePackManifest\@\@UEBA?AV?$unique_ptr\@VPackManifest\@\@U?$default_delete\@VPackManifest\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class PackManifest> clone() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORLDTEMPLATEPACKMANIFEST
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~WorldTemplatePackManifest();
#endif
    /**
     * @symbol ??0WorldTemplatePackManifest\@\@QEAA\@XZ
     */
    MCAPI WorldTemplatePackManifest();
    /**
     * @symbol ?getGameType\@WorldTemplatePackManifest\@\@QEBA?AW4GameType\@\@XZ
     */
    MCAPI enum class GameType getGameType() const;
};
