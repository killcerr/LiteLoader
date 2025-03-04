#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class MemoryMappedFileAccess {
public:
    // MemoryMappedFileAccess inner types declare
    // clang-format off
    class MemoryMappedFileReadAccess;
    class MemoryMappedFileWriteAccess;
    struct StreamDetails;
    // clang-format on

    // MemoryMappedFileAccess inner types define
    class MemoryMappedFileReadAccess {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MEMORYMAPPEDFILEACCESS_MEMORYMAPPEDFILEREADACCESS
    public:
        MemoryMappedFileReadAccess& operator=(MemoryMappedFileReadAccess const&) = delete;
        MemoryMappedFileReadAccess(MemoryMappedFileReadAccess const&)            = delete;
        MemoryMappedFileReadAccess()                                             = delete;
#endif

    public:
        /**
         * @vftbl 0
         * @symbol __unk_vfn_0
         */
        virtual void __unk_vfn_0();
        /**
         * @vftbl 1
         * @symbol ?fread\@MemoryMappedFileReadAccess\@MemoryMappedFileAccess\@\@UEBA_KPEAX_K10\@Z
         */
        virtual unsigned __int64 fread(void*, unsigned __int64, unsigned __int64, void*) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MEMORYMAPPEDFILEACCESS_MEMORYMAPPEDFILEREADACCESS
        /**
         * @symbol __unk_destructor_-1
         */
        MCVAPI ~MemoryMappedFileReadAccess();
#endif
    };

    class MemoryMappedFileWriteAccess {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MEMORYMAPPEDFILEACCESS_MEMORYMAPPEDFILEWRITEACCESS
    public:
        MemoryMappedFileWriteAccess& operator=(MemoryMappedFileWriteAccess const&) = delete;
        MemoryMappedFileWriteAccess(MemoryMappedFileWriteAccess const&)            = delete;
        MemoryMappedFileWriteAccess()                                              = delete;
#endif

    public:
        /**
         * @vftbl 0
         * @symbol __unk_vfn_0
         */
        virtual void __unk_vfn_0();
        /**
         * @vftbl 1
         * @symbol ?fwrite\@MemoryMappedFileWriteAccess\@MemoryMappedFileAccess\@\@UEAA_KPEBX_K1PEAX\@Z
         */
        virtual unsigned __int64 fwrite(void const*, unsigned __int64, unsigned __int64, void*);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MEMORYMAPPEDFILEACCESS_MEMORYMAPPEDFILEWRITEACCESS
        /**
         * @symbol __unk_destructor_-1
         */
        MCVAPI ~MemoryMappedFileWriteAccess();
#endif
    };

    struct StreamDetails {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MEMORYMAPPEDFILEACCESS_STREAMDETAILS
    public:
        StreamDetails& operator=(StreamDetails const&) = delete;
        StreamDetails(StreamDetails const&)            = delete;
        StreamDetails()                                = delete;
#endif

    public:
        /**
         * @symbol ??1StreamDetails\@MemoryMappedFileAccess\@\@QEAA\@XZ
         */
        MCAPI ~StreamDetails();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MEMORYMAPPEDFILEACCESS
public:
    MemoryMappedFileAccess& operator=(MemoryMappedFileAccess const&) = delete;
    MemoryMappedFileAccess(MemoryMappedFileAccess const&)            = delete;
    MemoryMappedFileAccess()                                         = delete;
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
     * ?fopen\@MemoryMappedFileAccess\@\@UEAAPEAXAEBVPath\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void* fopen(class Core::Path const&, std::string const&);
    /**
     * @vftbl 2
     * @symbol ?fclose\@MemoryMappedFileAccess\@\@UEAAHPEAX\@Z
     */
    virtual int fclose(void*);
    /**
     * @vftbl 3
     * @symbol ?fseek\@MemoryMappedFileAccess\@\@UEAAHPEAX_JH\@Z
     */
    virtual int fseek(void*, __int64, int);
    /**
     * @vftbl 4
     * @symbol ?ftell\@MemoryMappedFileAccess\@\@UEAA_JPEAX\@Z
     */
    virtual __int64 ftell(void*);
    /**
     * @vftbl 5
     * @symbol ?getReadInterface\@MemoryMappedFileAccess\@\@UEBAPEBVIFileReadAccess\@\@XZ
     */
    virtual class IFileReadAccess const* getReadInterface() const;
    /**
     * @vftbl 6
     * @symbol ?getWriteInterface\@MemoryMappedFileAccess\@\@UEAAPEAVIFileWriteAccess\@\@XZ
     */
    virtual class IFileWriteAccess* getWriteInterface();
    /**
     * @vftbl 7
     * @symbol ?unload\@MemoryMappedFileAccess\@\@UEAAXXZ
     */
    virtual void unload();
    /**
     * @symbol
     * ??0MemoryMappedFileAccess\@\@QEAA\@AEBV?$not_null\@V?$NonOwnerPointer\@VIFileAccess\@\@\@Bedrock\@\@\@gsl\@\@V?$unique_ptr\@VFileAccessTransforms\@\@U?$default_delete\@VFileAccessTransforms\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI
    MemoryMappedFileAccess(class gsl::not_null<class Bedrock::NonOwnerPointer<class IFileAccess>> const&, std::unique_ptr<class FileAccessTransforms>);
    /**
     * @symbol ?EMPTY_TRANSFORMS\@MemoryMappedFileAccess\@\@2VFileAccessTransforms\@\@B
     */
    MCAPI static class FileAccessTransforms const EMPTY_TRANSFORMS;
};
