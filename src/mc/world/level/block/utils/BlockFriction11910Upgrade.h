#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockFrictionVersioning {

class BlockFriction11910Upgrade {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKFRICTIONVERSIONING_BLOCKFRICTION11910UPGRADE
public:
    BlockFriction11910Upgrade& operator=(BlockFriction11910Upgrade const&) = delete;
    BlockFriction11910Upgrade(BlockFriction11910Upgrade const&)            = delete;
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
     * ?previousSchema\@BlockFriction11910Upgrade\@BlockFrictionVersioning\@\@UEBAXAEAVSchemaFactory\@cereal\@\@\@Z
     */
    virtual void previousSchema(class cereal::SchemaFactory&) const;
    /**
     * @vftbl 2
     * @symbol
     * ?upgradeToNext\@BlockFriction11910Upgrade\@BlockFrictionVersioning\@\@UEBA_NAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@\@Z
     */
    virtual bool upgradeToNext(class rapidjson::GenericDocument<
                               struct rapidjson::UTF8<char>,
                               class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>,
                               class rapidjson::CrtAllocator>&) const;
    /**
     * @symbol ??0BlockFriction11910Upgrade\@BlockFrictionVersioning\@\@QEAA\@XZ
     */
    MCAPI BlockFriction11910Upgrade();
};

}; // namespace BlockFrictionVersioning
