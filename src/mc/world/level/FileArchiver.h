#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/IAsyncResult.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FilePathManager; }
namespace Core { class Path; }
// clang-format on

class FileArchiver {
public:
    // FileArchiver inner types declare
    // clang-format off
    class IWorldConverter;
    class ProgressReporter;
    struct Result;
    // clang-format on

    // FileArchiver inner types define
    class IWorldConverter {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILEARCHIVER_IWORLDCONVERTER
    public:
        IWorldConverter& operator=(IWorldConverter const&) = delete;
        IWorldConverter(IWorldConverter const&)            = delete;
        IWorldConverter()                                  = delete;
#endif

    public:
    };

    class ProgressReporter {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILEARCHIVER_PROGRESSREPORTER
    public:
        ProgressReporter& operator=(ProgressReporter const&) = delete;
        ProgressReporter(ProgressReporter const&)            = delete;
        ProgressReporter()                                   = delete;
#endif

    public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FILEARCHIVER_PROGRESSREPORTER
        /**
         * @symbol ?clear\@ProgressReporter\@FileArchiver\@\@UEAAXXZ
         */
        MCVAPI void clear();
        /**
         * @symbol __unk_destructor_-1
         */
        MCVAPI ~ProgressReporter();
#endif
    };

    struct Result {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILEARCHIVER_RESULT
    public:
        Result& operator=(Result const&) = delete;
        Result(Result const&)            = delete;
        Result()                         = delete;
#endif

    public:
        /**
         * @symbol ??1Result\@FileArchiver\@\@QEAA\@XZ
         */
        MCAPI ~Result();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILEARCHIVER
public:
    FileArchiver& operator=(FileArchiver const&) = delete;
    FileArchiver(FileArchiver const&)            = delete;
    FileArchiver()                               = delete;
#endif

public:
    /**
     * @symbol
     * ??0FileArchiver\@\@QEAA\@AEAVScheduler\@\@AEAVILevelListCache\@\@AEBV?$not_null\@V?$NonOwnerPointer\@VFilePathManager\@Core\@\@\@Bedrock\@\@\@gsl\@\@AEAVIResourcePackRepository\@\@_NV?$unique_ptr\@VIWorldConverter\@FileArchiver\@\@U?$default_delete\@VIWorldConverter\@FileArchiver\@\@\@std\@\@\@std\@\@V?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@4\@V?$not_null\@V?$NonOwnerPointer\@VLevelDbEnv\@\@\@Bedrock\@\@\@4\@V?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z\@7\@\@Z
     */
    MCAPI FileArchiver(class Scheduler&, class ILevelListCache&, class gsl::not_null<class Bedrock::NonOwnerPointer<class Core::FilePathManager>> const&, class IResourcePackRepository&, bool, std::unique_ptr<class FileArchiver::IWorldConverter>, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>>, class gsl::not_null<class Bedrock::NonOwnerPointer<class LevelDbEnv>>, class std::function<void(std::string const&)>);
    /**
     * @symbol
     * ?exportPack\@FileArchiver\@\@QEAA?AV?$shared_ptr\@V?$IAsyncResult\@UResult\@FileArchiver\@\@\@Threading\@Bedrock\@\@\@std\@\@AEBVPath\@Core\@\@0\@Z
     */
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<struct FileArchiver::Result>>
    exportPack(class Core::Path const&, class Core::Path const&);
    /**
     * @symbol
     * ?exportPack\@FileArchiver\@\@QEAAXAEBVPath\@Core\@\@0V?$function\@$$A6AXAEAUResult\@FileArchiver\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void
    exportPack(class Core::Path const&, class Core::Path const&, class std::function<void(struct FileArchiver::Result&)>);
    /**
     * @symbol
     * ?setWorldConverter\@FileArchiver\@\@QEAAXV?$unique_ptr\@VIWorldConverter\@FileArchiver\@\@U?$default_delete\@VIWorldConverter\@FileArchiver\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setWorldConverter(std::unique_ptr<class FileArchiver::IWorldConverter>);
    /**
     * @symbol
     * ?EXTENSION_ADDON\@FileArchiver\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const EXTENSION_ADDON;
    /**
     * @symbol
     * ?EXTENSION_EDITOR_ADDON\@FileArchiver\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const EXTENSION_EDITOR_ADDON;
    /**
     * @symbol
     * ?EXTENSION_PROJECT\@FileArchiver\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const EXTENSION_PROJECT;
    /**
     * @symbol
     * ?EXTENSION_RESOURCEPACK\@FileArchiver\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const EXTENSION_RESOURCEPACK;
    /**
     * @symbol
     * ?EXTENSION_TEMPLATE\@FileArchiver\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const EXTENSION_TEMPLATE;
    /**
     * @symbol
     * ?EXTENSION_VANILLA\@FileArchiver\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const EXTENSION_VANILLA;
    /**
     * @symbol
     * ?IMPORT_LOCK_FILE\@FileArchiver\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const IMPORT_LOCK_FILE;

    // private:
    /**
     * @symbol ?_printLevelResultMessage\@FileArchiver\@\@AEAAXAEBUResult\@1\@\@Z
     */
    MCAPI void _printLevelResultMessage(struct FileArchiver::Result const&);

private:
};
