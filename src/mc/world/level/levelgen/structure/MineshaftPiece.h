#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"

class MineshaftPiece : public ::StructurePiece {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINESHAFTPIECE
public:
    MineshaftPiece& operator=(MineshaftPiece const&) = delete;
    MineshaftPiece(MineshaftPiece const&)            = delete;
    MineshaftPiece()                                 = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 6
     * @symbol ?isInInvalidLocation\@MineshaftPiece\@\@UEAA_NAEAVBlockSource\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool isInInvalidLocation(class BlockSource&, class BoundingBox const&);
    /**
     * @vftbl 10
     * @symbol ?canBeReplaced\@MineshaftPiece\@\@UEAA_NAEAVBlockSource\@\@HHHAEBVBoundingBox\@\@\@Z
     */
    virtual bool canBeReplaced(class BlockSource&, int, int, int, class BoundingBox const&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MINESHAFTPIECE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MineshaftPiece();
#endif
    /**
     * @symbol
     * ?createRandomShaftPiece\@MineshaftPiece\@\@QEAA?AV?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@AEAUMineshaftData\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@3\@AEAVRandom\@\@HHHHH\@Z
     */
    MCAPI std::unique_ptr<class StructurePiece> createRandomShaftPiece(
        struct MineshaftData&,
        std::vector<std::unique_ptr<class StructurePiece>>&,
        class Random&,
        int,
        int,
        int,
        int,
        int
    );
    /**
     * @symbol
     * ?generateAndAddPiece\@MineshaftPiece\@\@QEAAPEAVStructurePiece\@\@AEAV2\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@HHHHH\@Z
     */
    MCAPI class StructurePiece* generateAndAddPiece(
        class StructurePiece&,
        std::vector<std::unique_ptr<class StructurePiece>>&,
        class Random&,
        int,
        int,
        int,
        int,
        int
    );
    /**
     * @symbol ?setPlanksBlock\@MineshaftPiece\@\@QEAAXAEAVBlockSource\@\@AEBVBlock\@\@HHH\@Z
     */
    MCAPI void setPlanksBlock(class BlockSource&, class Block const&, int, int, int);
};
