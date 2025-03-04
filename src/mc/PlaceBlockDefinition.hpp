/**
 * @file  PlaceBlockDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"
#include "BehaviorDefinition.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlaceBlockDefinition.
 *
 */
class PlaceBlockDefinition : public BehaviorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLACEBLOCKDEFINITION
public:
    class PlaceBlockDefinition& operator=(class PlaceBlockDefinition const &) = delete;
    PlaceBlockDefinition(class PlaceBlockDefinition const &) = delete;
    PlaceBlockDefinition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PlaceBlockDefinition();

};