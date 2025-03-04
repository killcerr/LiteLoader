#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Hash {

class md5 {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRYPTO_HASH_MD5
public:
    md5& operator=(md5 const&) = delete;
    md5(md5 const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?reset\@md5\@Hash\@Crypto\@\@UEAAXXZ
     */
    virtual void reset();
    /**
     * @vftbl 2
     * @symbol ?update\@md5\@Hash\@Crypto\@\@UEAAXPEBXI\@Z
     */
    virtual void update(void const*, unsigned int);
    /**
     * @vftbl 3
     * @symbol ?final\@md5\@Hash\@Crypto\@\@UEAAXPEAE\@Z
     */
    virtual void final(unsigned char*);
    /**
     * @vftbl 4
     * @symbol ?resultSize\@md5\@Hash\@Crypto\@\@UEBA_KXZ
     */
    virtual unsigned __int64 resultSize() const;
    /**
     * @symbol ??0md5\@Hash\@Crypto\@\@QEAA\@XZ
     */
    MCAPI md5();

    // private:
    /**
     * @symbol ?_body\@md5\@Hash\@Crypto\@\@AEAAPEBXPEBXI\@Z
     */
    MCAPI void const* _body(void const*, unsigned int);

private:
};

}; // namespace Crypto::Hash
