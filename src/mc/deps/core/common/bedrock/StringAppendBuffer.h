#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class StringAppendBuffer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_STRINGAPPENDBUFFER
public:
    StringAppendBuffer& operator=(StringAppendBuffer const&) = delete;
    StringAppendBuffer(StringAppendBuffer const&)            = delete;
    StringAppendBuffer()                                     = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?_Lock\@?$basic_streambuf\@DU?$char_traits\@D\@std\@\@\@std\@\@UEAAXXZ
     */
    virtual void _Lock();
    /**
     * @vftbl 2
     * @symbol ?_Unlock\@?$basic_streambuf\@DU?$char_traits\@D\@std\@\@\@std\@\@UEAAXXZ
     */
    virtual void _Unlock();
    /**
     * @vftbl 3
     * @symbol ?overflow\@StringAppendBuffer\@Bedrock\@\@UEAAHH\@Z
     */
    virtual int overflow(int);
    /**
     * @vftbl 4
     * @symbol ?pbackfail\@?$basic_streambuf\@DU?$char_traits\@D\@std\@\@\@std\@\@MEAAHH\@Z
     */
    virtual int pbackfail(int);
    /**
     * @vftbl 5
     * @symbol ?showmanyc\@?$basic_streambuf\@DU?$char_traits\@D\@std\@\@\@std\@\@MEAA_JXZ
     */
    virtual __int64 showmanyc();
    /**
     * @vftbl 6
     * @symbol ?underflow\@?$basic_streambuf\@DU?$char_traits\@D\@std\@\@\@std\@\@MEAAHXZ
     */
    virtual int underflow();
    /**
     * @vftbl 7
     * @symbol ?uflow\@?$basic_streambuf\@DU?$char_traits\@D\@std\@\@\@std\@\@MEAAHXZ
     */
    virtual int uflow();
    /**
     * @vftbl 8
     * @symbol ?xsgetn\@?$basic_streambuf\@DU?$char_traits\@D\@std\@\@\@std\@\@MEAA_JPEAD_J\@Z
     */
    virtual __int64 xsgetn(char*, __int64);
    /**
     * @vftbl 9
     * @symbol ?xsputn\@StringAppendBuffer\@Bedrock\@\@UEAA_JPEBD_J\@Z
     */
    virtual __int64 xsputn(char const*, __int64);
    /**
     * @vftbl 10
     * @symbol
     * ?seekoff\@?$basic_streambuf\@DU?$char_traits\@D\@std\@\@\@std\@\@MEAA?AV?$fpos\@U_Mbstatet\@\@\@2\@_JHH\@Z
     */
    virtual class std::fpos<struct _Mbstatet> seekoff(__int64, int, int);
    /**
     * @vftbl 11
     * @symbol
     * ?seekpos\@?$basic_streambuf\@DU?$char_traits\@D\@std\@\@\@std\@\@MEAA?AV?$fpos\@U_Mbstatet\@\@\@2\@V32\@H\@Z
     */
    virtual class std::fpos<struct _Mbstatet> seekpos(class std::fpos<struct _Mbstatet>, int);
    /**
     * @vftbl 12
     * @symbol ?setbuf\@?$basic_streambuf\@DU?$char_traits\@D\@std\@\@\@std\@\@MEAAPEAV12\@PEAD_J\@Z
     */
    virtual class std::basic_streambuf<char, struct std::char_traits<char>>* setbuf(char*, __int64);
    /**
     * @vftbl 13
     * @symbol ?sync\@?$basic_streambuf\@DU?$char_traits\@D\@std\@\@\@std\@\@MEAAHXZ
     */
    virtual int sync();
    /**
     * @vftbl 14
     * @symbol ?imbue\@?$basic_streambuf\@DU?$char_traits\@D\@std\@\@\@std\@\@MEAAXAEBVlocale\@2\@\@Z
     */
    virtual void imbue(class std::locale const&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_STRINGAPPENDBUFFER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~StringAppendBuffer();
#endif
};

}; // namespace Bedrock
