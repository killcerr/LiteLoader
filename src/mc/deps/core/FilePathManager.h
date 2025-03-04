#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/StackString.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

namespace Core {

class FilePathManager {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORE_FILEPATHMANAGER
public:
    FilePathManager& operator=(FilePathManager const&) = delete;
    FilePathManager(FilePathManager const&)            = delete;
    FilePathManager()                                  = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CORE_FILEPATHMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~FilePathManager();
#endif
    /**
     * @symbol ??0FilePathManager\@Core\@\@QEAA\@AEBVPath\@1\@_N\@Z
     */
    MCAPI FilePathManager(class Core::Path const&, bool);
    /**
     * @symbol
     * ?getResourcePacksPath\@FilePathManager\@Core\@\@QEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getResourcePacksPath() const;
    /**
     * @symbol
     * ?getUserDataPath\@FilePathManager\@Core\@\@QEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getUserDataPath() const;
    /**
     * @symbol
     * ?getWorldsPath\@FilePathManager\@Core\@\@QEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getWorldsPath() const;
    /**
     * @symbol ?ARCHIVE_DIR\@FilePathManager\@Core\@\@2V?$PathBuffer\@V?$StackString\@D$0EAA\@\@Core\@\@\@2\@B
     */
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const ARCHIVE_DIR;
    /**
     * @symbol ?HOME_DIR\@FilePathManager\@Core\@\@2V?$PathBuffer\@V?$StackString\@D$0EAA\@\@Core\@\@\@2\@B
     */
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const HOME_DIR;
    /**
     * @symbol ?PERSONA_TEST_DIR\@FilePathManager\@Core\@\@2V?$PathBuffer\@V?$StackString\@D$0EAA\@\@Core\@\@\@2\@B
     */
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const PERSONA_TEST_DIR;
    /**
     * @symbol ?REALM_WORLDS_DIR\@FilePathManager\@Core\@\@2V?$PathBuffer\@V?$StackString\@D$0EAA\@\@Core\@\@\@2\@B
     */
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const REALM_WORLDS_DIR;
    /**
     * @symbol ?RESOURCE_PACKS_DIR\@FilePathManager\@Core\@\@2V?$PathBuffer\@V?$StackString\@D$0EAA\@\@Core\@\@\@2\@B
     */
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const RESOURCE_PACKS_DIR;
    /**
     * @symbol ?WORLDS_DIR\@FilePathManager\@Core\@\@2V?$PathBuffer\@V?$StackString\@D$0EAA\@\@Core\@\@\@2\@B
     */
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const WORLDS_DIR;
};

}; // namespace Core
