/**
 * @file  BambooBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BambooBlock.
 *
 */
class BambooBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BAMBOOBLOCK
public:
    class BambooBlock& operator=(class BambooBlock const &) = delete;
    BambooBlock(class BambooBlock const &) = delete;
    BambooBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   97839815
     */
    virtual ~BambooBlock();
    /**
     * @vftbl  8
     * @symbol ?randomlyModifyPosition@BambooBlock@@UEBA?AVVec3@@AEBVBlockPos@@@Z
     * @hash   1979700142
     */
    virtual class Vec3 randomlyModifyPosition(class BlockPos const &) const;
    /**
     * @vftbl  10
     * @symbol ?getAABB@BambooBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
     * @hash   -1448745159
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  32
     * @hash   -176245469
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -175321948
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -174398427
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  35
     * @symbol ?isWaterBlocking@BambooBlock@@UEBA_NXZ
     * @hash   275707569
     */
    virtual bool isWaterBlocking() const;
    /**
     * @vftbl  55
     * @symbol ?isValidAuxValue@BambooBlock@@UEBA_NH@Z
     * @hash   -84921089
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @vftbl  62
     * @symbol ?canContainLiquid@BambooBlock@@UEBA_NXZ
     * @hash   1301696863
     */
    virtual bool canContainLiquid() const;
    /**
     * @vftbl  82
     * @hash   -33099714
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl  86
     * @symbol ?onFertilized@BambooBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
     * @hash   82381917
     */
    virtual bool onFertilized(class BlockSource &, class BlockPos const &, class Actor *, enum FertilizerType) const;
    /**
     * @vftbl  87
     * @symbol ?mayConsumeFertilizer@BambooBlock@@UEBA_NAEAVBlockSource@@@Z
     * @hash   -1442568966
     */
    virtual bool mayConsumeFertilizer(class BlockSource &) const;
    /**
     * @vftbl  88
     * @symbol ?canBeFertilized@BambooBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   1146808830
     */
    virtual bool canBeFertilized(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  92
     * @symbol ?mayPlace@BambooBlock@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   899626448
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  100
     * @symbol ?neighborChanged@BambooBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   685693787
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  102
     * @symbol ?asItemInstance@BambooBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
     * @hash   1358254705
     */
    virtual class ItemInstance asItemInstance(class Block const &, class BlockActor const *) const;
    /**
     * @vftbl  105
     * @hash   1432640646
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  106
     * @symbol ?getPlacementBlock@BambooBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
     * @hash   784087816
     */
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @vftbl  123
     * @hash   1488051906
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl  125
     * @hash   1489898948
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl  126
     * @hash   1490822469
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  143
     * @symbol ?getVisualShape@BambooBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@_N@Z
     * @hash   555483235
     */
    virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  156
     * @hash   1576709922
     */
    virtual void __unk_vfn_156();
    /**
     * @vftbl  169
     * @symbol ?onPlace@BambooBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1276847557
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  171
     * @symbol ?playerDestroy@BambooBlock@@UEBAXAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -1893368307
     */
    virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  173
     * @symbol ?tick@BambooBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -1843059809
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  174
     * @symbol ?randomTick@BambooBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   1128425244
     */
    virtual void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  179
     * @symbol ?canSurvive@BambooBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   2122998231
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  186
     * @hash   1662597375
     */
    virtual void __unk_vfn_186();
    /**
     * @vftbl  188
     * @symbol ?getResourceItem@BambooBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     * @hash   -365594729
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @vftbl  192
     * @hash   -391814758
     */
    virtual void __unk_vfn_192();
    /**
     * @vftbl  193
     * @hash   1668382699
     */
    virtual void __unk_vfn_193();
    /**
     * @vftbl  194
     * @hash   1669198588
     */
    virtual void __unk_vfn_194();
    /**
     * @vftbl  195
     * @hash   1670091357
     */
    virtual void __unk_vfn_195();
    /**
     * @vftbl  196
     * @hash   1671014878
     */
    virtual void __unk_vfn_196();
    /**
     * @symbol ?getDescriptionId@BlockLegacy@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1816919269
     */
    MCAPI std::string const & getDescriptionId() const;
    /**
     * @symbol ??0BambooBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -18497801
     */
    MCAPI BambooBlock(std::string const &, int);
    /**
     * @symbol ?getMaxHeight@BambooBlock@@SAHAEBVBlockPos@@@Z
     * @hash   -219513615
     */
    MCAPI static int getMaxHeight(class BlockPos const &);

//private:
    /**
     * @symbol ?_determineNewBlockState@BambooBlock@@AEBAAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -218288126
     */
    MCAPI class Block const & _determineNewBlockState(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?_getLeafSize@BambooBlock@@AEBA?AW4LeafSize@@AEBVBlock@@@Z
     * @hash   -1935665105
     */
    MCAPI enum LeafSize _getLeafSize(class Block const &) const;
    /**
     * @symbol ?_getStalkThickness@BambooBlock@@AEBA?AW4StalkThickness@@AEBVBlock@@@Z
     * @hash   2119377167
     */
    MCAPI enum StalkThickness _getStalkThickness(class Block const &) const;

private:

};