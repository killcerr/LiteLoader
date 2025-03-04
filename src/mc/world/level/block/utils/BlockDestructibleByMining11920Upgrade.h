#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SchemaFactory; }
// clang-format on

namespace BlockDestroyTimeVersioning {

class BlockDestructibleByMining11920Upgrade {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKDESTROYTIMEVERSIONING_BLOCKDESTRUCTIBLEBYMINING11920UPGRADE
public:
    BlockDestructibleByMining11920Upgrade& operator=(BlockDestructibleByMining11920Upgrade const&) = delete;
    BlockDestructibleByMining11920Upgrade(BlockDestructibleByMining11920Upgrade const&)            = delete;
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
     * ?previousSchema\@BlockDestructibleByMining11920Upgrade\@BlockDestroyTimeVersioning\@\@UEBAXAEAVSchemaFactory\@cereal\@\@\@Z
     */
    virtual void previousSchema(class cereal::SchemaFactory&) const;
    /**
     * @vftbl 2
     * @symbol
     * ?upgradeToNext\@BlockDestructibleByMining11920Upgrade\@BlockDestroyTimeVersioning\@\@UEBA_NAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@\@Z
     */
    virtual bool upgradeToNext(class rapidjson::GenericDocument<
                               struct rapidjson::UTF8<char>,
                               class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>,
                               class rapidjson::CrtAllocator>&) const;
    /**
     * @symbol ??0BlockDestructibleByMining11920Upgrade\@BlockDestroyTimeVersioning\@\@QEAA\@XZ
     */
    MCAPI BlockDestructibleByMining11920Upgrade();
};

}; // namespace BlockDestroyTimeVersioning
