#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"

class ByteArrayTag : public ::Tag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BYTEARRAYTAG
public:
    ByteArrayTag& operator=(ByteArrayTag const&) = delete;
    ByteArrayTag(ByteArrayTag const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?write\@ByteArrayTag\@\@UEBAXAEAVIDataOutput\@\@\@Z
     */
    virtual void write(class IDataOutput&) const;
    /**
     * @vftbl 3
     * @symbol ?load\@ByteArrayTag\@\@UEAAXAEAVIDataInput\@\@\@Z
     */
    virtual void load(class IDataInput&);
    /**
     * @vftbl 4
     * @symbol
     * ?toString\@ByteArrayTag\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string toString() const;
    /**
     * @vftbl 5
     * @symbol ?getId\@ByteArrayTag\@\@UEBA?AW4Type\@Tag\@\@XZ
     */
    virtual enum class Tag::Type getId() const;
    /**
     * @vftbl 6
     * @symbol ?equals\@ByteArrayTag\@\@UEBA_NAEBVTag\@\@\@Z
     */
    virtual bool equals(class Tag const&) const;
    /**
     * @vftbl 9
     * @symbol ?copy\@ByteArrayTag\@\@UEBA?AV?$unique_ptr\@VTag\@\@U?$default_delete\@VTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class Tag> copy() const;
    /**
     * @vftbl 10
     * @symbol ?hash\@ByteArrayTag\@\@UEBA_KXZ
     */
    virtual unsigned __int64 hash() const;
    /**
     * @symbol ??0ByteArrayTag\@\@QEAA\@UTagMemoryChunk\@\@\@Z
     */
    MCAPI ByteArrayTag(struct TagMemoryChunk);
    /**
     * @symbol ??0ByteArrayTag\@\@QEAA\@XZ
     */
    MCAPI ByteArrayTag();
};
