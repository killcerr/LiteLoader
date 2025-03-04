#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/IApplicationDataStores.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class DataStore; }
// clang-format on

namespace Bedrock {

class ApplicationDataStores {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_APPLICATIONDATASTORES
public:
    ApplicationDataStores& operator=(ApplicationDataStores const&) = delete;
    ApplicationDataStores(ApplicationDataStores const&)            = delete;
    ApplicationDataStores()                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?init\@ApplicationDataStores\@Bedrock\@\@UEAAXXZ
     */
    virtual void init();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_APPLICATIONDATASTORES
    /**
     * @symbol
     * ?getDataStore\@ApplicationDataStores\@Bedrock\@\@UEBA?AV?$NonOwnerPointer\@$$CBVDataStore\@Bedrock\@\@\@2\@W4DataStores\@IApplicationDataStores\@2\@\@Z
     */
    MCVAPI class Bedrock::NonOwnerPointer<class Bedrock::DataStore const>
        getDataStore(enum class Bedrock::IApplicationDataStores::DataStores) const;
    /**
     * @symbol
     * ?getDataStore\@ApplicationDataStores\@Bedrock\@\@UEAA?AV?$NonOwnerPointer\@VDataStore\@Bedrock\@\@\@2\@W4DataStores\@IApplicationDataStores\@2\@\@Z
     */
    MCVAPI class Bedrock::NonOwnerPointer<class Bedrock::DataStore>
        getDataStore(enum class Bedrock::IApplicationDataStores::DataStores);
#endif

    // private:
    /**
     * @symbol ?_initDataStore\@ApplicationDataStores\@Bedrock\@\@AEAAXW4DataStores\@IApplicationDataStores\@2\@\@Z
     */
    MCAPI void _initDataStore(enum class Bedrock::IApplicationDataStores::DataStores);

private:
};

}; // namespace Bedrock
