#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SculkUtils {
/**
 * @symbol ?canSpreadIntoBlock\@SculkUtils\@\@YA_NAEAVIBlockWorldGenAPI\@\@AEBVBlock\@\@AEBVBlockPos\@\@\@Z
 */
MCAPI bool canSpreadIntoBlock(class IBlockWorldGenAPI&, class Block const&, class BlockPos const&);
/**
 * @symbol
 * ?generateSculkReplaceableBlocks\@SculkUtils\@\@YA?BV?$set\@PEBVBlock\@\@U?$less\@PEBVBlock\@\@\@std\@\@V?$allocator\@PEBVBlock\@\@\@3\@\@std\@\@XZ
 */
MCAPI class std::
    set<class Block const*, struct std::less<class Block const*>, class std::allocator<class Block const*>> const
    generateSculkReplaceableBlocks();
/**
 * @symbol
 * ?generateSculkReplaceableBlocksWorldgen\@SculkUtils\@\@YA?BV?$set\@PEBVBlock\@\@U?$less\@PEBVBlock\@\@\@std\@\@V?$allocator\@PEBVBlock\@\@\@3\@\@std\@\@XZ
 */
MCAPI class std::
    set<class Block const*, struct std::less<class Block const*>, class std::allocator<class Block const*>> const
    generateSculkReplaceableBlocksWorldgen();
/**
 * @symbol ?isSculkOrSculkVein\@SculkUtils\@\@YA_NAEBVBlock\@\@\@Z
 */
MCAPI bool isSculkOrSculkVein(class Block const&);

}; // namespace SculkUtils
