#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Symmetric {

class OpenSSLSymmetricInterface {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRYPTO_SYMMETRIC_OPENSSLSYMMETRICINTERFACE
public:
    OpenSSLSymmetricInterface& operator=(OpenSSLSymmetricInterface const&) = delete;
    OpenSSLSymmetricInterface(OpenSSLSymmetricInterface const&)            = delete;
    OpenSSLSymmetricInterface()                                            = delete;
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
     * ?init\@OpenSSLSymmetricInterface\@Symmetric\@Crypto\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    virtual void init(std::string const&, std::string const&);
    /**
     * @vftbl 2
     * @symbol
     * ?encrypt\@OpenSSLSymmetricInterface\@Symmetric\@Crypto\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV45\@\@Z
     */
    virtual void encrypt(std::string const&, std::string&);
    /**
     * @vftbl 3
     * @symbol
     * ?decrypt\@OpenSSLSymmetricInterface\@Symmetric\@Crypto\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV45\@\@Z
     */
    virtual void decrypt(std::string const&, std::string&);
    /**
     * @vftbl 4
     * @symbol ?getKeySize\@OpenSSLSymmetricInterface\@Symmetric\@Crypto\@\@UEBA_KXZ
     */
    virtual unsigned __int64 getKeySize() const;
    /**
     * @vftbl 5
     * @symbol ?getBlockSize\@OpenSSLSymmetricInterface\@Symmetric\@Crypto\@\@UEBA_KXZ
     */
    virtual unsigned __int64 getBlockSize() const;
    /**
     * @vftbl 6
     * @symbol ?getEncryptionBufferSize\@OpenSSLSymmetricInterface\@Symmetric\@Crypto\@\@UEBA_K_K\@Z
     */
    virtual unsigned __int64 getEncryptionBufferSize(unsigned __int64) const;
    /**
     * @vftbl 7
     * @symbol
     * ?encryptToBuffer\@OpenSSLSymmetricInterface\@Symmetric\@Crypto\@\@UEAA_NV?$span\@$$CBD$0?0\@gsl\@\@V?$span\@D$0?0\@5\@AEA_K\@Z
     */
    virtual bool encryptToBuffer(class gsl::span<char const, -1>, class gsl::span<char, -1>, unsigned __int64&);
};

}; // namespace Crypto::Symmetric
