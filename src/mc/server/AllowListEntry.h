#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class AllowListEntry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ALLOWLISTENTRY
public:
    AllowListEntry& operator=(AllowListEntry const&) = delete;
    AllowListEntry(AllowListEntry const&)            = delete;
    AllowListEntry()                                 = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?serialize\@AllowListEntry\@\@UEAAXAEAVValue\@Json\@\@\@Z
     */
    virtual void serialize(class Json::Value&);
    /**
     * @vftbl 2
     * @symbol ?deserialize\@AllowListEntry\@\@UEAAXAEAVValue\@Json\@\@\@Z
     */
    virtual void deserialize(class Json::Value&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ALLOWLISTENTRY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AllowListEntry();
#endif
    /**
     * @symbol ??0AllowListEntry\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI AllowListEntry(std::string);
};
