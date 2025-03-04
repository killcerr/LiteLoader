#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockSourceListener.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
// clang-format on

class LevelListener : public ::BlockSourceListener {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELLISTENER
public:
    LevelListener& operator=(LevelListener const&) = delete;
    LevelListener(LevelListener const&)            = delete;
    LevelListener()                                = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELLISTENER
    /**
     * @symbol
     * ?addBreakingItemParticleEffect\@LevelListener\@\@UEAAXAEBVVec3\@\@W4ParticleType\@\@AEBUResolvedItemIconInfo\@\@\@Z
     */
    MCVAPI void
    addBreakingItemParticleEffect(class Vec3 const&, enum class ParticleType, struct ResolvedItemIconInfo const&);
    /**
     * @symbol
     * ?addParticleEffect\@LevelListener\@\@UEAAXAEBVHashedString\@\@AEBVActor\@\@0AEBVVec3\@\@AEBVMolangVariableMap\@\@\@Z
     */
    MCVAPI void
    addParticleEffect(class HashedString const&, class Actor const&, class HashedString const&, class Vec3 const&, class MolangVariableMap const&);
    /**
     * @symbol ?addTerrainParticleEffect\@LevelListener\@\@UEAAXAEBVBlockPos\@\@AEBVBlock\@\@AEBVVec3\@\@MMM\@Z
     */
    MCVAPI void
    addTerrainParticleEffect(class BlockPos const&, class Block const&, class Vec3 const&, float, float, float);
    /**
     * @symbol ?addTerrainSlideEffect\@LevelListener\@\@UEAAXAEBVBlockPos\@\@AEBVBlock\@\@AEBVVec3\@\@MMM\@Z
     */
    MCVAPI void
    addTerrainSlideEffect(class BlockPos const&, class Block const&, class Vec3 const&, float, float, float);
    /**
     * @symbol ?allChanged\@LevelListener\@\@UEAAXXZ
     */
    MCVAPI void allChanged();
    /**
     * @symbol ?levelEvent\@LevelListener\@\@UEAAXW4LevelEvent\@\@AEBVCompoundTag\@\@\@Z
     */
    MCVAPI void levelEvent(enum class LevelEvent, class CompoundTag const&);
    /**
     * @symbol ?levelEvent\@LevelListener\@\@UEAAXW4LevelEvent\@\@AEBVVec3\@\@H\@Z
     */
    MCVAPI void levelEvent(enum class LevelEvent, class Vec3 const&, int);
    /**
     * @symbol ?onChunkLoaded\@LevelListener\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@\@Z
     */
    MCVAPI void onChunkLoaded(class ChunkSource&, class LevelChunk&);
    /**
     * @symbol ?onChunkReloaded\@LevelListener\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@\@Z
     */
    MCVAPI void onChunkReloaded(class ChunkSource&, class LevelChunk&);
    /**
     * @symbol ?onChunkUnloaded\@LevelListener\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void onChunkUnloaded(class LevelChunk&);
    /**
     * @symbol ?onEntityAdded\@LevelListener\@\@UEAAXAEAVActor\@\@\@Z
     */
    MCVAPI void onEntityAdded(class Actor&);
    /**
     * @symbol ?onEntityRemoved\@LevelListener\@\@UEAAXAEAVActor\@\@\@Z
     */
    MCVAPI void onEntityRemoved(class Actor&);
    /**
     * @symbol
     * ?onLevelDestruction\@LevelListener\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void onLevelDestruction(std::string const&);
    /**
     * @symbol ?onSubChunkLoaded\@LevelListener\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@F_N\@Z
     */
    MCVAPI void onSubChunkLoaded(class ChunkSource&, class LevelChunk&, short, bool);
    /**
     * @symbol
     * ?playMusic\@LevelListener\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVVec3\@\@MM\@Z
     */
    MCVAPI void playMusic(std::string const&, class Vec3 const&, float, float);
    /**
     * @symbol
     * ?playStreamingMusic\@LevelListener\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HHH\@Z
     */
    MCVAPI void playStreamingMusic(std::string const&, int, int, int);
    /**
     * @symbol ?playerListChanged\@LevelListener\@\@UEAAXXZ
     */
    MCVAPI void playerListChanged();
    /**
     * @symbol ?sendServerLegacyParticle\@LevelListener\@\@UEAAXW4ParticleType\@\@AEBVVec3\@\@1H\@Z
     */
    MCVAPI void sendServerLegacyParticle(enum class ParticleType, class Vec3 const&, class Vec3 const&, int);
    /**
     * @symbol ?takePicture\@LevelListener\@\@UEAAXAEAVImageBuffer\@cg\@\@PEAVActor\@\@1AEAUScreenshotOptions\@\@\@Z
     */
    MCVAPI void takePicture(class cg::ImageBuffer&, class Actor*, class Actor*, struct ScreenshotOptions&);
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LevelListener();
#endif
};
