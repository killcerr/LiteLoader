#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class Certificate {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CERTIFICATE
public:
    Certificate& operator=(Certificate const&) = delete;
    Certificate()                              = delete;
#endif

public:
    /**
     * @symbol ??0Certificate\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI Certificate(class Certificate const&);
    /**
     * @symbol ?getExpirationDate\@Certificate\@\@QEBA_JXZ
     */
    MCAPI __int64 getExpirationDate() const;
    /**
     * @symbol
     * ?getExtraData\@Certificate\@\@QEBA?AVValue\@Json\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI class Json::Value getExtraData(std::string const&, class Json::Value const&) const;
    /**
     * @symbol
     * ?getIdentityPublicKey\@Certificate\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getIdentityPublicKey() const;
    /**
     * @symbol ?getNotBeforeDate\@Certificate\@\@QEBA_JXZ
     */
    MCAPI __int64 getNotBeforeDate() const;
    /**
     * @symbol ?isSelfSigned\@Certificate\@\@QEBA_NXZ
     */
    MCAPI bool isSelfSigned() const;
    /**
     * @symbol ?isValid\@Certificate\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @symbol
     * ?toString\@Certificate\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString() const;
    /**
     * @symbol ?validate\@Certificate\@\@QEAA_N_J_N\@Z
     */
    MCAPI bool validate(__int64, bool);
    /**
     * @symbol ??1Certificate\@\@QEAA\@XZ
     */
    MCAPI ~Certificate();
    /**
     * @symbol
     * ?createWrappedCertificate\@Certificate\@\@SA?AV?$unique_ptr\@VCertificate\@\@U?$default_delete\@VCertificate\@\@\@std\@\@\@std\@\@AEAVPrivateKeyManager\@\@_J1AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@_NPEBVValue\@Json\@\@V23\@\@Z
     */
    MCAPI static std::unique_ptr<class Certificate>
    createWrappedCertificate(class PrivateKeyManager&, __int64, __int64, std::string const&, bool, class Json::Value const*, std::unique_ptr<class Certificate>);

    // private:
    /**
     * @symbol
     * ??0Certificate\@\@AEAA\@AEBVUnverifiedCertificate\@\@V?$unique_ptr\@VCertificate\@\@U?$default_delete\@VCertificate\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI Certificate(class UnverifiedCertificate const&, std::unique_ptr<class Certificate>);
    /**
     * @symbol
     * ?createWebToken\@Certificate\@\@CA?AV?$unique_ptr\@VWebToken\@\@U?$default_delete\@VWebToken\@\@\@std\@\@\@std\@\@AEAVPrivateKeyManager\@\@_J1AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@_NPEBVValue\@Json\@\@\@Z
     */
    MCAPI static std::unique_ptr<class WebToken>
    createWebToken(class PrivateKeyManager&, __int64, __int64, std::string const&, bool, class Json::Value const*);

private:
};
