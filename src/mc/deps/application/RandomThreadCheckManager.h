#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RandomThreadCheckManager {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMTHREADCHECKMANAGER
public:
    RandomThreadCheckManager& operator=(RandomThreadCheckManager const&) = delete;
    RandomThreadCheckManager(RandomThreadCheckManager const&)            = delete;
    RandomThreadCheckManager()                                           = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol ?onAppResumed\@RandomThreadCheckManager\@\@UEAAXXZ
     */
    virtual void onAppResumed();

    // private:

private:
    /**
     * @symbol
     * ?mInstance\@RandomThreadCheckManager\@\@0V?$unique_ptr\@VRandomThreadCheckManager\@\@U?$default_delete\@VRandomThreadCheckManager\@\@\@std\@\@\@std\@\@A
     */
    MCAPI static std::unique_ptr<class RandomThreadCheckManager> mInstance;
    /**
     * @symbol ?mMutex\@RandomThreadCheckManager\@\@0Vrecursive_mutex\@std\@\@A
     */
    MCAPI static class std::recursive_mutex mMutex;
};
