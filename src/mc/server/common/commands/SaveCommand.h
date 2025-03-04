#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class SaveCommand : public ::Command {
public:
    // SaveCommand inner types declare
    // clang-format off

    // clang-format on

    // SaveCommand inner types define
    enum class State {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SAVECOMMAND
public:
    SaveCommand& operator=(SaveCommand const&) = delete;
    SaveCommand(SaveCommand const&)            = delete;
    SaveCommand()                              = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@SaveCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@SaveCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);

    // private:
    /**
     * @symbol ?saveHold\@SaveCommand\@\@CAXAEAVCommandOutput\@\@\@Z
     */
    MCAPI static void saveHold(class CommandOutput&);
    /**
     * @symbol ?saveResume\@SaveCommand\@\@CAXAEAVCommandOutput\@\@\@Z
     */
    MCAPI static void saveResume(class CommandOutput&);
    /**
     * @symbol ?saveState\@SaveCommand\@\@CAXAEAVCommandOutput\@\@\@Z
     */
    MCAPI static void saveState(class CommandOutput&);

private:
    /**
     * @symbol
     * ?mSaveAllFileList\@SaveCommand\@\@0V?$vector\@USnapshotFilenameAndLength\@\@V?$allocator\@USnapshotFilenameAndLength\@\@\@std\@\@\@std\@\@A
     */
    MCAPI static std::vector<struct SnapshotFilenameAndLength> mSaveAllFileList;
    /**
     * @symbol ?mSaveAllMutex\@SaveCommand\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex mSaveAllMutex;
    /**
     * @symbol ?mState\@SaveCommand\@\@0W4State\@1\@A
     */
    MCAPI static enum class SaveCommand::State mState;
};
