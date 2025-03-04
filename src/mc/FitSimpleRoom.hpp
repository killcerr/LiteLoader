/**
 * @file  FitSimpleRoom.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FitSimpleRoom.
 *
 */
class FitSimpleRoom {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FITSIMPLEROOM
public:
    class FitSimpleRoom& operator=(class FitSimpleRoom const &) = delete;
    FitSimpleRoom(class FitSimpleRoom const &) = delete;
    FitSimpleRoom() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FitSimpleRoom();
    /**
     * @vftbl  1
     * @symbol  ?fits\@FitSimpleRoom\@\@UEBA_NAEBVRoomDefinition\@\@\@Z
     */
    virtual bool fits(class RoomDefinition const &) const;
    /**
     * @vftbl  2
     * @symbol  ?create\@FitSimpleRoom\@\@UEAA?AV?$unique_ptr\@VOceanMonumentPiece\@\@U?$default_delete\@VOceanMonumentPiece\@\@\@std\@\@\@std\@\@AEAHV?$shared_ptr\@VRoomDefinition\@\@\@3\@AEAVRandom\@\@\@Z
     */
    virtual std::unique_ptr<class OceanMonumentPiece> create(int &, class std::shared_ptr<class RoomDefinition>, class Random &);

};