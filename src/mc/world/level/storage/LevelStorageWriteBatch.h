#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace DBHelpers { enum class Category; }
// clang-format on

class LevelStorageWriteBatch {
public:
    // LevelStorageWriteBatch inner types declare
    // clang-format off
    struct BatchEntry;
    // clang-format on

    // LevelStorageWriteBatch inner types define
    struct BatchEntry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSTORAGEWRITEBATCH_BATCHENTRY
    public:
        BatchEntry& operator=(BatchEntry const&) = delete;
        BatchEntry(BatchEntry const&)            = delete;
        BatchEntry()                             = delete;
#endif

    public:
        /**
         * @symbol ??1BatchEntry\@LevelStorageWriteBatch\@\@QEAA\@XZ
         */
        MCAPI ~BatchEntry();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSTORAGEWRITEBATCH
public:
    LevelStorageWriteBatch& operator=(LevelStorageWriteBatch const&) = delete;
    LevelStorageWriteBatch(LevelStorageWriteBatch const&)            = delete;
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
     * ?putKey\@LevelStorageWriteBatch\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@3\@W4Category\@DBHelpers\@\@\@Z
     */
    virtual void putKey(
        std::string const&,
        class std::basic_string_view<char, struct std::char_traits<char>>,
        enum class DBHelpers::Category
    );
    /**
     * @vftbl 2
     * @symbol
     * ?putKey\@LevelStorageWriteBatch\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0W4Category\@DBHelpers\@\@\@Z
     */
    virtual void putKey(std::string const&, std::string const&, enum class DBHelpers::Category);
    /**
     * @vftbl 3
     * @symbol
     * ?putKey\@LevelStorageWriteBatch\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAV23\@W4Category\@DBHelpers\@\@\@Z
     */
    virtual void putKey(std::string const&, std::string&&, enum class DBHelpers::Category);
    /**
     * @vftbl 4
     * @symbol
     * ?putKey\@LevelStorageWriteBatch\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$shared_ptr\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@3\@W4Category\@DBHelpers\@\@\@Z
     */
    virtual void putKey(std::string const&, class std::shared_ptr<std::string>, enum class DBHelpers::Category);
    /**
     * @vftbl 5
     * @symbol
     * ?deleteKey\@LevelStorageWriteBatch\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4Category\@DBHelpers\@\@\@Z
     */
    virtual void deleteKey(std::string const&, enum class DBHelpers::Category);
    /**
     * @vftbl 6
     * @symbol ?flush\@LevelStorageWriteBatch\@\@UEAAXAEAVLevelStorage\@\@\@Z
     */
    virtual void flush(class LevelStorage&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELSTORAGEWRITEBATCH
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LevelStorageWriteBatch();
#endif
    /**
     * @symbol ??0LevelStorageWriteBatch\@\@QEAA\@XZ
     */
    MCAPI LevelStorageWriteBatch();
    /**
     * @symbol ??0LevelStorageWriteBatch\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI LevelStorageWriteBatch(class LevelStorageWriteBatch&&);
    /**
     * @symbol ?addFlushCallback\@LevelStorageWriteBatch\@\@QEAAXV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI void addFlushCallback(class std::function<void(void)>);
    /**
     * @symbol ?clear\@LevelStorageWriteBatch\@\@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @symbol
     * ?erase\@LevelStorageWriteBatch\@\@QEAAXAEBV?$_Tree_const_iterator\@V?$_Tree_val\@U?$_Tree_simple_types\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UBatchEntry\@LevelStorageWriteBatch\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void erase(class std::_Tree_const_iterator<class std::_Tree_val<struct std::_Tree_simple_types<
                         struct std::pair<std::string const, struct LevelStorageWriteBatch::BatchEntry>>>> const&);
    /**
     * @symbol
     * ?find\@LevelStorageWriteBatch\@\@QEBA?AV?$_Tree_const_iterator\@V?$_Tree_val\@U?$_Tree_simple_types\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UBatchEntry\@LevelStorageWriteBatch\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI class std::_Tree_const_iterator<class std::_Tree_val<
        struct std::_Tree_simple_types<struct std::pair<std::string const, struct LevelStorageWriteBatch::BatchEntry>>>>
    find(std::string const&) const;
    /**
     * @symbol
     * ?find\@LevelStorageWriteBatch\@\@QEAA?AV?$_Tree_iterator\@V?$_Tree_val\@U?$_Tree_simple_types\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UBatchEntry\@LevelStorageWriteBatch\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI class std::_Tree_iterator<class std::_Tree_val<
        struct std::_Tree_simple_types<struct std::pair<std::string const, struct LevelStorageWriteBatch::BatchEntry>>>>
    find(std::string const&);

    // private:
    /**
     * @symbol
     * ?_writeKey\@LevelStorageWriteBatch\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAV?$shared_ptr\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@3\@W4Category\@DBHelpers\@\@\@Z
     */
    MCAPI void _writeKey(std::string const&, class std::shared_ptr<std::string>&&, enum class DBHelpers::Category);

private:
};
