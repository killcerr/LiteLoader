#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Description.h"

class OpenDoorAnnotationDescription : public ::Description {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPENDOORANNOTATIONDESCRIPTION
public:
    OpenDoorAnnotationDescription& operator=(OpenDoorAnnotationDescription const&) = delete;
    OpenDoorAnnotationDescription(OpenDoorAnnotationDescription const&)            = delete;
    OpenDoorAnnotationDescription()                                                = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@OpenDoorAnnotationDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OPENDOORANNOTATIONDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~OpenDoorAnnotationDescription();
#endif
};
