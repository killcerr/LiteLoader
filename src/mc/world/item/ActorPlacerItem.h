#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class ActorPlacerItem : public ::Item {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORPLACERITEM
public:
    ActorPlacerItem& operator=(ActorPlacerItem const&) = delete;
    ActorPlacerItem(ActorPlacerItem const&)            = delete;
    ActorPlacerItem()                                  = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?tearDown\@ActorPlacerItem\@\@UEAAXXZ
     */
    virtual void tearDown();
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 21
     * @symbol __unk_vfn_21
     */
    virtual void __unk_vfn_21();
    /**
     * @vftbl 51
     * @symbol __unk_vfn_51
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl 53
     * @symbol __unk_vfn_53
     */
    virtual void __unk_vfn_53();
    /**
     * @vftbl 57
     * @symbol ?isLiquidClipItem\@ActorPlacerItem\@\@UEBA_NH\@Z
     */
    virtual bool isLiquidClipItem(int) const;
    /**
     * @vftbl 58
     * @symbol ?shouldInteractionWithBlockBypassLiquid\@ActorPlacerItem\@\@UEBA_NAEBVBlock\@\@\@Z
     */
    virtual bool shouldInteractionWithBlockBypassLiquid(class Block const&) const;
    /**
     * @vftbl 66
     * @symbol __unk_vfn_66
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl 67
     * @symbol ?isValidAuxValue\@ActorPlacerItem\@\@UEBA_NH\@Z
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @vftbl 70
     * @symbol __unk_vfn_70
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl 72
     * @symbol __unk_vfn_72
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl 75
     * @symbol __unk_vfn_75
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl 79
     * @symbol __unk_vfn_79
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl 80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl 81
     * @symbol ?getActorIdentifier\@ActorPlacerItem\@\@UEBA?AUActorDefinitionIdentifier\@\@AEBVItemStack\@\@\@Z
     */
    virtual struct ActorDefinitionIdentifier getActorIdentifier(class ItemStack const&) const;
    /**
     * @vftbl 85
     * @symbol ?dispense\@ActorPlacerItem\@\@UEBA_NAEAVBlockSource\@\@AEAVContainer\@\@HAEBVVec3\@\@E\@Z
     */
    virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
    /**
     * @vftbl 95
     * @symbol
     * ?buildDescriptionId\@ActorPlacerItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemDescriptor\@\@PEBVCompoundTag\@\@\@Z
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;
    /**
     * @vftbl 115
     * @symbol __unk_vfn_115
     */
    virtual void __unk_vfn_115();
    /**
     * @vftbl 116
     * @symbol __unk_vfn_116
     */
    virtual void __unk_vfn_116();
    /**
     * @vftbl 120
     * @symbol ?getIconInfo\@ActorPlacerItem\@\@UEBA?AUResolvedItemIconInfo\@\@AEBVItemStackBase\@\@H_N\@Z
     */
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const&, int, bool) const;
    /**
     * @vftbl 135
     * @symbol
     * ?_useOn\@ActorPlacerItem\@\@EEBA?AVInteractionResult\@\@AEAVItemStack\@\@AEAVActor\@\@VBlockPos\@\@EAEBVVec3\@\@\@Z
     */
    virtual class InteractionResult
    _useOn(class ItemStack&, class Actor&, class BlockPos, unsigned char, class Vec3 const&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORPLACERITEM
    /**
     * @symbol ?getBaseColor\@ActorPlacerItem\@\@UEBA?AVColor\@mce\@\@AEBVItemStack\@\@\@Z
     */
    MCVAPI class mce::Color getBaseColor(class ItemStack const&) const;
    /**
     * @symbol ?getSecondaryColor\@ActorPlacerItem\@\@UEBA?AVColor\@mce\@\@AEBVItemStack\@\@\@Z
     */
    MCVAPI class mce::Color getSecondaryColor(class ItemStack const&) const;
    /**
     * @symbol ?isActorPlacerItem\@ActorPlacerItem\@\@UEBA_NXZ
     */
    MCVAPI bool isActorPlacerItem() const;
    /**
     * @symbol ?isMultiColorTinted\@ActorPlacerItem\@\@UEBA_NAEBVItemStack\@\@\@Z
     */
    MCVAPI bool isMultiColorTinted(class ItemStack const&) const;
#endif
    /**
     * @symbol
     * ??0ActorPlacerItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HAEBUActorDefinitionIdentifier\@\@\@Z
     */
    MCAPI ActorPlacerItem(std::string const&, int, struct ActorDefinitionIdentifier const&);
    /**
     * @symbol
     * ?forEachCustomEgg\@ActorPlacerItem\@\@SAXVItemRegistryRef\@\@AEBV?$function\@$$A6AXAEBVItem\@\@\@Z\@std\@\@\@Z
     */
    MCAPI static void forEachCustomEgg(class ItemRegistryRef, class std::function<void(class Item const&)> const&);
    /**
     * @symbol
     * ?getCustomSpawnEggName\@ActorPlacerItem\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI static std::string getCustomSpawnEggName(int);
    /**
     * @symbol ?registerCustomEggs\@ActorPlacerItem\@\@SAXVItemRegistryRef\@\@AEBVActorInfoRegistry\@\@\@Z
     */
    MCAPI static void registerCustomEggs(class ItemRegistryRef, class ActorInfoRegistry const&);
    /**
     * @symbol ?spawnOrMoveAgent\@ActorPlacerItem\@\@SAPEAVActor\@\@AEBVVec3\@\@AEAV2\@\@Z
     */
    MCAPI static class Actor* spawnOrMoveAgent(class Vec3 const&, class Actor&);

    // private:
    /**
     * @symbol ?_getActorID\@ActorPlacerItem\@\@AEBA?AUActorDefinitionIdentifier\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI struct ActorDefinitionIdentifier _getActorID(class BlockSource&) const;
    /**
     * @symbol
     * ?_spawnActorAt\@ActorPlacerItem\@\@AEBAPEAVActor\@\@AEAVBlockSource\@\@AEBVVec3\@\@1AEBVItemStack\@\@PEAV2\@\@Z
     */
    MCAPI class Actor*
    _spawnActorAt(class BlockSource&, class Vec3 const&, class Vec3 const&, class ItemStack const&, class Actor*) const;
    /**
     * @symbol ?_setAgentOwner\@ActorPlacerItem\@\@CAXAEAVPlayer\@\@AEAVAgent\@\@\@Z
     */
    MCAPI static void _setAgentOwner(class Player&, class Agent&);

private:
    /**
     * @symbol ?EGG_MASK_ID\@ActorPlacerItem\@\@0HB
     */
    MCAPI static int const EGG_MASK_ID;
    /**
     * @symbol ?NUM_SPAWN_EGG_TEXTURES\@ActorPlacerItem\@\@0HB
     */
    MCAPI static int const NUM_SPAWN_EGG_TEXTURES;
    /**
     * @symbol
     * ?mCustomSpawnEggs\@ActorPlacerItem\@\@0V?$unordered_map\@IV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@I\@2\@U?$equal_to\@I\@2\@V?$allocator\@U?$pair\@$$CBIV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<
        unsigned int,
        std::string,
        struct std::hash<unsigned int>,
        struct std::equal_to<unsigned int>,
        class std::allocator<struct std::pair<unsigned int const, std::string>>>
        mCustomSpawnEggs;
    /**
     * @symbol
     * ?mEggTextureInfoMap\@ActorPlacerItem\@\@0V?$unordered_map\@VHashedString\@\@UResolvedItemIconInfo\@\@U?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@4\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@UResolvedItemIconInfo\@\@\@std\@\@\@4\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<
        class HashedString,
        struct ResolvedItemIconInfo,
        struct std::hash<class HashedString>,
        struct std::equal_to<class HashedString>,
        class std::allocator<struct std::pair<class HashedString const, struct ResolvedItemIconInfo>>>
        mEggTextureInfoMap;
};
