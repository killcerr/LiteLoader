/**
 * @file  GuardianPreAIStepSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class GuardianPreAIStepSystem.
 *
 */
class GuardianPreAIStepSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GUARDIANPREAISTEPSYSTEM
public:
    class GuardianPreAIStepSystem& operator=(class GuardianPreAIStepSystem const &) = delete;
    GuardianPreAIStepSystem(class GuardianPreAIStepSystem const &) = delete;
    GuardianPreAIStepSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@GuardianPreAIStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?_doGuardianPreAIStepSystem\@GuardianPreAIStepSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doGuardianPreAIStepSystem(class StrictEntityContext const &, class ActorOwnerComponent &);

private:

};