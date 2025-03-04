#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeInstanceDelegate.h"

class HungerAttributeDelegate : public ::AttributeInstanceDelegate {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HUNGERATTRIBUTEDELEGATE
public:
    HungerAttributeDelegate& operator=(HungerAttributeDelegate const&) = delete;
    HungerAttributeDelegate(HungerAttributeDelegate const&)            = delete;
    HungerAttributeDelegate()                                          = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@HungerAttributeDelegate\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 2
     * @symbol ?notify\@HungerAttributeDelegate\@\@UEAAX_J\@Z
     */
    virtual void notify(__int64);
    /**
     * @symbol ??0HungerAttributeDelegate\@\@QEAA\@AEBVAttributeInstance\@\@PEAVPlayer\@\@\@Z
     */
    MCAPI HungerAttributeDelegate(class AttributeInstance const&, class Player*);
};
