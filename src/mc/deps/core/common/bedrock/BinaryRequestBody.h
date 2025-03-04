#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/IRequestBody.h"

namespace Bedrock::Http {

class BinaryRequestBody {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_HTTP_BINARYREQUESTBODY
public:
    BinaryRequestBody& operator=(BinaryRequestBody const&) = delete;
    BinaryRequestBody(BinaryRequestBody const&)            = delete;
    BinaryRequestBody()                                    = delete;
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
     * ?read\@BinaryRequestBody\@Http\@Bedrock\@\@MEAA?AUReadResult\@IRequestBody\@Internal\@23\@V?$span\@E$0?0\@gsl\@\@\@Z
     */
    virtual struct Bedrock::Http::Internal::IRequestBody::ReadResult read(class gsl::span<unsigned char, -1>);
    /**
     * @vftbl 2
     * @symbol ?getSize\@BinaryRequestBody\@Http\@Bedrock\@\@MEAA_KXZ
     */
    virtual unsigned __int64 getSize();
    /**
     * @vftbl 3
     * @symbol ?cancel\@BinaryRequestBody\@Http\@Bedrock\@\@MEAAXXZ
     */
    virtual void cancel();
    /**
     * @vftbl 4
     * @symbol
     * ?getLoggableSource\@BinaryRequestBody\@Http\@Bedrock\@\@MEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getLoggableSource() const;
    /**
     * @vftbl 5
     * @symbol ?getLoggableData\@BinaryRequestBody\@Http\@Bedrock\@\@MEBA?AV?$span\@$$CBE$0?0\@gsl\@\@XZ
     */
    virtual class gsl::span<unsigned char const, -1> getLoggableData() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_HTTP_BINARYREQUESTBODY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BinaryRequestBody();
#endif
    /**
     * @symbol ?setData\@BinaryRequestBody\@Http\@Bedrock\@\@QEAAXV?$span\@$$CBE$0?0\@gsl\@\@\@Z
     */
    MCAPI void setData(class gsl::span<unsigned char const, -1>);

    // protected:
    /**
     * @symbol ??0BinaryRequestBody\@Http\@Bedrock\@\@IEAA\@V?$span\@$$CBE$0?0\@gsl\@\@\@Z
     */
    MCAPI BinaryRequestBody(class gsl::span<unsigned char const, -1>);
    /**
     * @symbol ?_getData\@BinaryRequestBody\@Http\@Bedrock\@\@IEBA?AV?$span\@$$CBE$0?0\@gsl\@\@XZ
     */
    MCAPI class gsl::span<unsigned char const, -1> _getData() const;

protected:
};

}; // namespace Bedrock::Http
