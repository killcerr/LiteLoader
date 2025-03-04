#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Tag {
public:
    // Tag inner types declare
    // clang-format off

    // clang-format on

    // Tag inner types define
    enum class Type {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TAG
public:
    Tag& operator=(Tag const&) = delete;
    Tag(Tag const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?deleteChildren\@Tag\@\@UEAAXXZ
     */
    virtual void deleteChildren();
    /**
     * @vftbl 2
     * @symbol ?write\@StringTag\@\@UEBAXAEAVIDataOutput\@\@\@Z
     */
    virtual void write(class IDataOutput&) const = 0;
    /**
     * @vftbl 3
     * @symbol ?load\@StringTag\@\@UEAAXAEAVIDataInput\@\@\@Z
     */
    virtual void load(class IDataInput&) = 0;
    /**
     * @vftbl 4
     * @symbol ?toString\@StringTag\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string toString() const = 0;
    /**
     * @vftbl 5
     * @symbol ?getId\@StringTag\@\@UEBA?AW4Type\@Tag\@\@XZ
     */
    virtual enum class Tag::Type getId() const = 0;
    /**
     * @vftbl 6
     * @symbol ?equals\@Tag\@\@UEBA_NAEBV1\@\@Z
     */
    virtual bool equals(class Tag const&) const;
    /**
     * @vftbl 7
     * @symbol ?print\@Tag\@\@UEBAXAEAVPrintStream\@\@\@Z
     */
    virtual void print(class PrintStream&) const;
    /**
     * @vftbl 8
     * @symbol
     * ?print\@Tag\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVPrintStream\@\@\@Z
     */
    virtual void print(std::string const&, class PrintStream&) const;
    /**
     * @vftbl 9
     * @symbol ?copy\@StringTag\@\@UEBA?AV?$unique_ptr\@VTag\@\@U?$default_delete\@VTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class Tag> copy() const = 0;
    /**
     * @vftbl 10
     * @symbol ?hash\@StringTag\@\@UEBA_KXZ
     */
    virtual unsigned __int64 hash() const = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TAG
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Tag();
#endif
    /**
     * @symbol ?NullString\@Tag\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NullString;
    /**
     * @symbol
     * ?getTagName\@Tag\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4Type\@1\@\@Z
     */
    MCAPI static std::string getTagName(enum class Tag::Type);
    /**
     * @symbol ?newTag\@Tag\@\@SA?AV?$unique_ptr\@VTag\@\@U?$default_delete\@VTag\@\@\@std\@\@\@std\@\@W4Type\@1\@\@Z
     */
    MCAPI static std::unique_ptr<class Tag> newTag(enum class Tag::Type);
    /**
     * @symbol
     * ?readNamedTag\@Tag\@\@SA?AV?$unique_ptr\@VTag\@\@U?$default_delete\@VTag\@\@\@std\@\@\@std\@\@AEAVIDataInput\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI static std::unique_ptr<class Tag> readNamedTag(class IDataInput&, std::string&);
    /**
     * @symbol
     * ?writeNamedTag\@Tag\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV1\@AEAVIDataOutput\@\@\@Z
     */
    MCAPI static void writeNamedTag(std::string const&, class Tag const&, class IDataOutput&);

    // protected:
    /**
     * @symbol ??0Tag\@\@IEAA\@XZ
     */
    MCAPI Tag();

protected:
};
