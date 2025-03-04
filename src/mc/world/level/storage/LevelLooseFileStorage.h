#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class LevelLooseFileStorage {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELLOOSEFILESTORAGE
public:
    LevelLooseFileStorage& operator=(LevelLooseFileStorage const&) = delete;
    LevelLooseFileStorage(LevelLooseFileStorage const&)            = delete;
    LevelLooseFileStorage()                                        = delete;
#endif

public:
    /**
     * @symbol
     * ??0LevelLooseFileStorage\@\@QEAA\@AEBVPath\@Core\@\@AEBVContentIdentity\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI
    LevelLooseFileStorage(class Core::Path const&, class ContentIdentity const&, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const&);
};
