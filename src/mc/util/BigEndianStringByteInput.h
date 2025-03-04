#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/StringByteInput.h"

class BigEndianStringByteInput : public ::StringByteInput {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIGENDIANSTRINGBYTEINPUT
public:
    BigEndianStringByteInput& operator=(BigEndianStringByteInput const&) = delete;
    BigEndianStringByteInput(BigEndianStringByteInput const&)            = delete;
    BigEndianStringByteInput()                                           = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?readFloat\@BigEndianStringByteInput\@\@UEAAMXZ
     */
    virtual float readFloat();
    /**
     * @vftbl 4
     * @symbol ?readDouble\@BigEndianStringByteInput\@\@UEAANXZ
     */
    virtual double readDouble();
    /**
     * @vftbl 6
     * @symbol ?readShort\@BigEndianStringByteInput\@\@UEAAFXZ
     */
    virtual short readShort();
    /**
     * @vftbl 7
     * @symbol ?readInt\@BigEndianStringByteInput\@\@UEAAHXZ
     */
    virtual int readInt();
    /**
     * @vftbl 8
     * @symbol ?readLongLong\@BigEndianStringByteInput\@\@UEAA_JXZ
     */
    virtual __int64 readLongLong();
    /**
     * @vftbl 9
     * @symbol ?readBytes\@BigEndianStringByteInput\@\@UEAA_NPEAX_K\@Z
     */
    virtual bool readBytes(void*, unsigned __int64);
    /**
     * @vftbl 11
     * @symbol ?readBigEndianBytes\@BigEndianStringByteInput\@\@UEAA_NPEAX_K\@Z
     */
    virtual bool readBigEndianBytes(void*, unsigned __int64);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BIGENDIANSTRINGBYTEINPUT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BigEndianStringByteInput();
#endif
};
