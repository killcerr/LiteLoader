#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class OSThreadPriority; }
// clang-format on

class BackgroundWorker {
public:
    // BackgroundWorker inner types declare
    // clang-format off

    // clang-format on

    // BackgroundWorker inner types define
    enum class RunOneResult {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BACKGROUNDWORKER
public:
    BackgroundWorker& operator=(BackgroundWorker const&) = delete;
    BackgroundWorker(BackgroundWorker const&)            = delete;
    BackgroundWorker()                                   = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isAsync\@BackgroundWorker\@\@UEBA_NXZ
     */
    virtual bool isAsync() const;
    /**
     * @vftbl 2
     * @symbol ?canTaskRunAgain\@BackgroundWorker\@\@UEBA_NXZ
     */
    virtual bool canTaskRunAgain() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BACKGROUNDWORKER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BackgroundWorker();
#endif
    /**
     * @symbol
     * ??0BackgroundWorker\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_NAEBVOSThreadPriority\@Threading\@Bedrock\@\@V?$optional\@_K\@2\@V?$optional\@H\@2\@AEAVWorkerPool\@\@1\@Z
     */
    MCAPI BackgroundWorker(
        std::string,
        bool,
        class Bedrock::Threading::OSThreadPriority const&,
        class std::optional<unsigned __int64>,
        class std::optional<int>,
        class WorkerPool&,
        bool
    );
    /**
     * @symbol ?getApproximateTaskCount\@BackgroundWorker\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getApproximateTaskCount() const;
    /**
     * @symbol ?getThreadId\@BackgroundWorker\@\@QEBA?AVid\@thread\@std\@\@XZ
     */
    MCAPI class std::thread::id getThreadId() const;
    /**
     * @symbol ?isIdle\@BackgroundWorker\@\@QEBA_NXZ
     */
    MCAPI bool isIdle() const;
    /**
     * @symbol ?queue\@BackgroundWorker\@\@QEAAXV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@\@Z
     */
    MCAPI void queue(class std::shared_ptr<class BackgroundTaskBase>);
    /**
     * @symbol ?requestStop\@BackgroundWorker\@\@QEAAX_N\@Z
     */
    MCAPI void requestStop(bool);
    /**
     * @symbol ?resortPriorityQueue\@BackgroundWorker\@\@QEAAXXZ
     */
    MCAPI void resortPriorityQueue();
    /**
     * @symbol ?start\@BackgroundWorker\@\@QEAAXXZ
     */
    MCAPI void start();
    /**
     * @symbol ?wake\@BackgroundWorker\@\@QEAAXXZ
     */
    MCAPI void wake();
    /**
     * @symbol ?getLocal\@BackgroundWorker\@\@SAPEAV1\@XZ
     */
    MCAPI static class BackgroundWorker* getLocal();

    // private:
    /**
     * @symbol ?_processNextTask\@BackgroundWorker\@\@AEAA_NXZ
     */
    MCAPI bool _processNextTask();
    /**
     * @symbol ?_runOneTask\@BackgroundWorker\@\@AEAA?AW4RunOneResult\@1\@XZ
     */
    MCAPI enum class BackgroundWorker::RunOneResult _runOneTask();

private:
    /**
     * @symbol ?gLocalWorkerMappingSingleton\@BackgroundWorker\@\@0PEAV1\@EA
     */
    MCAPI static class BackgroundWorker* gLocalWorkerMappingSingleton;
};
