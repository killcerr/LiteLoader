#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { template<typename T0> class PathBuffer; }
// clang-format on

namespace Bedrock::PlatformUtils {
/**
 * @symbol
 * ?getExternalStoragePath\@PlatformUtils\@Bedrock\@\@YAAEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
 */
MCAPI class Core::PathBuffer<std::string> const& getExternalStoragePath();
/**
 * @symbol
 * ?getPackageFamilyName\@PlatformUtils\@Bedrock\@\@YAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
 */
MCAPI std::string const& getPackageFamilyName();
/**
 * @symbol ?isCentennial\@PlatformUtils\@Bedrock\@\@YA_NXZ
 */
MCAPI bool isCentennial();

}; // namespace Bedrock::PlatformUtils
