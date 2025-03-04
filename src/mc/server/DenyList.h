#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DenyList {
public:
    // DenyList inner types declare
    // clang-format off
    struct Entry;
    // clang-format on

    // DenyList inner types define
    enum class Duration {};

    struct Entry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DENYLIST_ENTRY
    public:
        Entry& operator=(Entry const&) = delete;
        Entry(Entry const&)            = delete;
        Entry()                        = delete;
#endif

    public:
        /**
         * @symbol ??1Entry\@DenyList\@\@QEAA\@XZ
         */
        MCAPI ~Entry();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DENYLIST
public:
    DenyList& operator=(DenyList const&) = delete;
    DenyList(DenyList const&)            = delete;
    DenyList()                           = delete;
#endif

public:
    /**
     * @symbol ?addEntry\@DenyList\@\@QEAAXAEBUEntry\@1\@\@Z
     */
    MCAPI void addEntry(struct DenyList::Entry const&);
    /**
     * @symbol ?getDuration\@DenyList\@\@QEBA?AW4Duration\@1\@AEBUEntry\@1\@\@Z
     */
    MCAPI enum class DenyList::Duration getDuration(struct DenyList::Entry const&) const;
    /**
     * @symbol
     * ?getMessage\@DenyList\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUEntry\@1\@\@Z
     */
    MCAPI std::string const& getMessage(struct DenyList::Entry const&) const;
    /**
     * @symbol ?isBlocked\@DenyList\@\@QEBA_NAEBUEntry\@1\@\@Z
     */
    MCAPI bool isBlocked(struct DenyList::Entry const&) const;
    /**
     * @symbol ?removeEntry\@DenyList\@\@QEAAXAEBUEntry\@1\@\@Z
     */
    MCAPI void removeEntry(struct DenyList::Entry const&);
    /**
     * @symbol ??1DenyList\@\@QEAA\@XZ
     */
    MCAPI ~DenyList();
};
