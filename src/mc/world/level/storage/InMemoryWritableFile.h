#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InMemoryWritableFile {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INMEMORYWRITABLEFILE
public:
    InMemoryWritableFile& operator=(InMemoryWritableFile const&) = delete;
    InMemoryWritableFile(InMemoryWritableFile const&)            = delete;
    InMemoryWritableFile()                                       = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?Append\@InMemoryWritableFile\@\@UEAA?AVStatus\@leveldb\@\@AEBVSlice\@3\@\@Z
     */
    virtual class leveldb::Status Append(class leveldb::Slice const&);
    /**
     * @vftbl 2
     * @symbol ?Close\@InMemoryWritableFile\@\@UEAA?AVStatus\@leveldb\@\@XZ
     */
    virtual class leveldb::Status Close();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INMEMORYWRITABLEFILE
    /**
     * @symbol ?Flush\@InMemoryWritableFile\@\@UEAA?AVStatus\@leveldb\@\@XZ
     */
    MCVAPI class leveldb::Status Flush();
    /**
     * @symbol ?Sync\@InMemoryWritableFile\@\@UEAA?AVStatus\@leveldb\@\@XZ
     */
    MCVAPI class leveldb::Status Sync();
#endif
    /**
     * @symbol ??0InMemoryWritableFile\@\@QEAA\@V?$shared_ptr\@VInMemoryFile\@\@\@std\@\@\@Z
     */
    MCAPI InMemoryWritableFile(class std::shared_ptr<class InMemoryFile>);
};
