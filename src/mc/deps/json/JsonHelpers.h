#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace JsonHelpers {
/**
 * @symbol
 * ?addObjectArrayField\@JsonHelpers\@\@YAXAEAVValue\@Json\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@VValue\@Json\@\@V?$allocator\@VValue\@Json\@\@\@std\@\@\@5\@\@Z
 */
MCAPI void addObjectArrayField(class Json::Value&, std::string const&, std::vector<class Json::Value> const&);
/**
 * @symbol
 * ?addObjectField\@JsonHelpers\@\@YAXAEAVValue\@Json\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
 */
MCAPI void addObjectField(class Json::Value&, std::string const&, class Json::Value const&);
/**
 * @symbol
 * ?addStringField\@JsonHelpers\@\@YAXAEAVValue\@Json\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
 */
MCAPI void addStringField(class Json::Value&, std::string const&, std::string const&);
/**
 * @symbol
 * ?addUint32Field\@JsonHelpers\@\@YAXAEAVValue\@Json\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBI\@Z
 */
MCAPI void addUint32Field(class Json::Value&, std::string const&, unsigned int const&);
/**
 * @symbol
 * ?parseJson\@JsonHelpers\@\@YA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVValue\@Json\@\@\@Z
 */
MCAPI bool parseJson(std::string const&, class Json::Value&);
/**
 * @symbol
 * ?serialize\@JsonHelpers\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVValue\@Json\@\@\@Z
 */
MCAPI std::string serialize(class Json::Value const&);

}; // namespace JsonHelpers
