#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class PackReport {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKREPORT
public:
    PackReport& operator=(PackReport const&) = delete;
#endif

public:
    /**
     * @symbol ??0PackReport\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI PackReport(class PackReport const&);
    /**
     * @symbol ??0PackReport\@\@QEAA\@XZ
     */
    MCAPI PackReport();
    /**
     * @symbol ??0PackReport\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI PackReport(class PackReport&&);
    /**
     * @symbol
     * ?getErrors\@PackReport\@\@QEBAAEBV?$vector\@V?$shared_ptr\@VPackError\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VPackError\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<class std::shared_ptr<class PackError>> const& getErrors() const;
    /**
     * @symbol ?getIdentity\@PackReport\@\@QEBAAEBUPackIdVersion\@\@XZ
     */
    MCAPI struct PackIdVersion const& getIdentity() const;
    /**
     * @symbol ?getLocation\@PackReport\@\@QEBAAEBVResourceLocation\@\@XZ
     */
    MCAPI class ResourceLocation const& getLocation() const;
    /**
     * @symbol
     * ?getOriginalName\@PackReport\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getOriginalName() const;
    /**
     * @symbol
     * ?getOriginalVersion\@PackReport\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getOriginalVersion() const;
    /**
     * @symbol ?getPackType\@PackReport\@\@QEBA?AW4PackType\@\@XZ
     */
    MCAPI enum class PackType getPackType() const;
    /**
     * @symbol ?hasErrors\@PackReport\@\@QEBA_NXZ
     */
    MCAPI bool hasErrors() const;
    /**
     * @symbol ?serialize\@PackReport\@\@QEAAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void serialize(class Json::Value&);
    /**
     * @symbol ?setLocation\@PackReport\@\@QEAAXAEBVResourceLocation\@\@\@Z
     */
    MCAPI void setLocation(class ResourceLocation const&);
    /**
     * @symbol ?wasUpgraded\@PackReport\@\@QEBA_NXZ
     */
    MCAPI bool wasUpgraded() const;
    /**
     * @symbol ??1PackReport\@\@QEAA\@XZ
     */
    MCAPI ~PackReport();
};
