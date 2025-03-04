#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPalette.h"

class BlockHashPalette {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKHASHPALETTE
public:
    BlockHashPalette& operator=(BlockHashPalette const&) = delete;
    BlockHashPalette(BlockHashPalette const&)            = delete;
    BlockHashPalette()                                   = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getPaletteType\@BlockHashPalette\@\@UEAA?AW4PaletteType\@BlockPalette\@\@XZ
     */
    virtual enum class BlockPalette::PaletteType getPaletteType();
    /**
     * @vftbl 2
     * @symbol ?appendBlock\@BlockHashPalette\@\@UEAAXAEBVBlock\@\@\@Z
     */
    virtual void appendBlock(class Block const&);
    /**
     * @vftbl 3
     * @symbol ?getBlock\@BlockHashPalette\@\@UEBAAEBVBlock\@\@AEBI\@Z
     */
    virtual class Block const& getBlock(unsigned int const&) const;
    /**
     * @vftbl 4
     * @symbol ?assignBlockNetworkId\@BlockHashPalette\@\@MEBAXAEBVBlock\@\@_K\@Z
     */
    virtual void assignBlockNetworkId(class Block const&, unsigned __int64) const;
    /**
     * @symbol ??0BlockHashPalette\@\@QEAA\@AEAVLevel\@\@\@Z
     */
    MCAPI BlockHashPalette(class Level&);
};
