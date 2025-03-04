#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/websockets/CommandOrigin.h"
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class UUID; }
// clang-format on

class BlockCommandOrigin : public ::CommandOrigin {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCOMMANDORIGIN
public:
    BlockCommandOrigin& operator=(BlockCommandOrigin const&) = delete;
    BlockCommandOrigin(BlockCommandOrigin const&)            = delete;
    BlockCommandOrigin()                                     = delete;
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
     * ?getRequestId\@BlockCommandOrigin\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getRequestId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@BlockCommandOrigin\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?getBlockPosition\@BlockCommandOrigin\@\@UEBA?AVBlockPos\@\@XZ
     */
    virtual class BlockPos getBlockPosition() const;
    /**
     * @vftbl 4
     * @symbol ?getWorldPosition\@BlockCommandOrigin\@\@UEBA?AVVec3\@\@XZ
     */
    virtual class Vec3 getWorldPosition() const;
    /**
     * @vftbl 5
     * @symbol ?getRotation\@BlockCommandOrigin\@\@UEBA?AV?$optional\@VVec2\@\@\@std\@\@XZ
     */
    virtual class std::optional<class Vec2> getRotation() const;
    /**
     * @vftbl 6
     * @symbol ?getLevel\@BlockCommandOrigin\@\@UEBAPEAVLevel\@\@XZ
     */
    virtual class Level* getLevel() const;
    /**
     * @vftbl 7
     * @symbol ?getDimension\@BlockCommandOrigin\@\@UEBAPEAVDimension\@\@XZ
     */
    virtual class Dimension* getDimension() const;
    /**
     * @vftbl 8
     * @symbol ?getEntity\@BlockCommandOrigin\@\@UEBAPEAVActor\@\@XZ
     */
    virtual class Actor* getEntity() const;
    /**
     * @vftbl 9
     * @symbol ?getPermissionsLevel\@BlockCommandOrigin\@\@UEBA?AW4CommandPermissionLevel\@\@XZ
     */
    virtual enum class CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @vftbl 10
     * @symbol
     * ?clone\@BlockCommandOrigin\@\@UEBA?AV?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @vftbl 17
     * @symbol ?canUseCommandsWithoutCheatsEnabled\@BlockCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /**
     * @vftbl 18
     * @symbol ?isSelectorExpansionAllowed\@BlockCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isSelectorExpansionAllowed() const;
    /**
     * @vftbl 23
     * @symbol ?getOriginType\@BlockCommandOrigin\@\@UEBA?AW4CommandOriginType\@\@XZ
     */
    virtual enum class CommandOriginType getOriginType() const;
    /**
     * @vftbl 29
     * @symbol ?serialize\@BlockCommandOrigin\@\@UEBA?AVCompoundTag\@\@XZ
     */
    virtual class CompoundTag serialize() const;
    /**
     * @vftbl 30
     * @symbol ?isValid\@BlockCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @vftbl 32
     * @symbol ?_getBaseCommandBlock\@BlockCommandOrigin\@\@MEBAPEAVBaseCommandBlock\@\@AEAVBlockSource\@\@\@Z
     */
    virtual class BaseCommandBlock* _getBaseCommandBlock(class BlockSource&) const;
    /**
     * @vftbl 33
     * @symbol ?_getBlockEntity\@BlockCommandOrigin\@\@MEBAPEAVCommandBlockActor\@\@AEAVBlockSource\@\@\@Z
     */
    virtual class CommandBlockActor* _getBlockEntity(class BlockSource&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKCOMMANDORIGIN
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockCommandOrigin();
#endif
    /**
     * @symbol
     * ??0BlockCommandOrigin\@\@QEAA\@AEAVLevel\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI
    BlockCommandOrigin(class Level&, class AutomaticID<class Dimension, int>, std::string const&, class BlockPos const&);
    /**
     * @symbol ??0BlockCommandOrigin\@\@QEAA\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI BlockCommandOrigin(class BlockSource&, class BlockPos const&);

    // protected:
    /**
     * @symbol
     * ?_getName\@BlockCommandOrigin\@\@IEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI std::string _getName(class BlockSource&) const;

protected:
};
