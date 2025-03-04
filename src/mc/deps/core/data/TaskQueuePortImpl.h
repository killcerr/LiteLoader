#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/LocklessQueue.h"

// auto generated forward declare list
// clang-format off
namespace OS { struct ThreadPoolActionStatus; }
// clang-format on

class TaskQueuePortImpl {
public:
    // TaskQueuePortImpl inner types declare
    // clang-format off
    struct QueueEntry;
    struct TerminationEntry;
    struct WaitRegistration;
    // clang-format on

    // TaskQueuePortImpl inner types define
    struct QueueEntry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TASKQUEUEPORTIMPL_QUEUEENTRY
    public:
        QueueEntry& operator=(QueueEntry const&) = delete;
        QueueEntry(QueueEntry const&)            = delete;
        QueueEntry()                             = delete;
#endif

    public:
    };

    struct TerminationEntry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TASKQUEUEPORTIMPL_TERMINATIONENTRY
    public:
        TerminationEntry& operator=(TerminationEntry const&) = delete;
        TerminationEntry(TerminationEntry const&)            = delete;
        TerminationEntry()                                   = delete;
#endif

    public:
    };

    struct WaitRegistration {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TASKQUEUEPORTIMPL_WAITREGISTRATION
    public:
        WaitRegistration& operator=(WaitRegistration const&) = delete;
        WaitRegistration(WaitRegistration const&)            = delete;
        WaitRegistration()                                   = delete;
#endif

    public:
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TASKQUEUEPORTIMPL
public:
    TaskQueuePortImpl& operator=(TaskQueuePortImpl const&) = delete;
    TaskQueuePortImpl(TaskQueuePortImpl const&)            = delete;
#endif

public:
    /**
     * @vftbl 3
     * @symbol ?GetHandle\@TaskQueuePortImpl\@\@UEAAPEAUXTaskQueuePortObject\@\@XZ
     */
    virtual struct XTaskQueuePortObject* GetHandle();
    /**
     * @vftbl 4
     * @symbol ?QueueItem\@TaskQueuePortImpl\@\@UEAAJPEAUITaskQueuePortContext\@\@IPEAXP6AX1_N\@Z\@Z
     */
    virtual long QueueItem(struct ITaskQueuePortContext*, unsigned int, void*, void (*)(void*, bool));
    /**
     * @vftbl 5
     * @symbol
     * ?RegisterWaitHandle\@TaskQueuePortImpl\@\@UEAAJPEAUITaskQueuePortContext\@\@PEAX1P6AX1_N\@ZPEAUXTaskQueueRegistrationToken\@\@\@Z
     */
    virtual long
    RegisterWaitHandle(struct ITaskQueuePortContext*, void*, void*, void (*)(void*, bool), struct XTaskQueueRegistrationToken*);
    /**
     * @vftbl 6
     * @symbol ?UnregisterWaitHandle\@TaskQueuePortImpl\@\@UEAAXUXTaskQueueRegistrationToken\@\@\@Z
     */
    virtual void UnregisterWaitHandle(struct XTaskQueueRegistrationToken);
    /**
     * @vftbl 7
     * @symbol ?PrepareTerminate\@TaskQueuePortImpl\@\@UEAAJPEAUITaskQueuePortContext\@\@PEAXP6AX1\@ZPEAPEAX\@Z
     */
    virtual long PrepareTerminate(struct ITaskQueuePortContext*, void*, void (*)(void*), void**);
    /**
     * @vftbl 8
     * @symbol ?CancelTermination\@TaskQueuePortImpl\@\@UEAAXPEAX\@Z
     */
    virtual void CancelTermination(void*);
    /**
     * @vftbl 9
     * @symbol ?Terminate\@TaskQueuePortImpl\@\@UEAAXPEAX\@Z
     */
    virtual void Terminate(void*);
    /**
     * @vftbl 10
     * @symbol ?Attach\@TaskQueuePortImpl\@\@UEAAJPEAUITaskQueuePortContext\@\@\@Z
     */
    virtual long Attach(struct ITaskQueuePortContext*);
    /**
     * @vftbl 11
     * @symbol ?Detach\@TaskQueuePortImpl\@\@UEAAXPEAUITaskQueuePortContext\@\@\@Z
     */
    virtual void Detach(struct ITaskQueuePortContext*);
    /**
     * @vftbl 12
     * @symbol ?Dispatch\@TaskQueuePortImpl\@\@UEAA_NPEAUITaskQueuePortContext\@\@I\@Z
     */
    virtual bool Dispatch(struct ITaskQueuePortContext*, unsigned int);
    /**
     * @vftbl 13
     * @symbol ?IsEmpty\@TaskQueuePortImpl\@\@UEAA_NXZ
     */
    virtual bool IsEmpty();
    /**
     * @vftbl 14
     * @symbol ?SuspendTermination\@TaskQueuePortImpl\@\@UEAAJPEAUITaskQueuePortContext\@\@\@Z
     */
    virtual long SuspendTermination(struct ITaskQueuePortContext*);
    /**
     * @vftbl 15
     * @symbol ?ResumeTermination\@TaskQueuePortImpl\@\@UEAAXPEAUITaskQueuePortContext\@\@\@Z
     */
    virtual void ResumeTermination(struct ITaskQueuePortContext*);
    /**
     * @vftbl 16
     * @symbol ?SuspendPort\@TaskQueuePortImpl\@\@UEAAXXZ
     */
    virtual void SuspendPort();
    /**
     * @vftbl 17
     * @symbol ?ResumePort\@TaskQueuePortImpl\@\@UEAAXXZ
     */
    virtual void ResumePort();
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TASKQUEUEPORTIMPL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TaskQueuePortImpl();
#endif
    /**
     * @symbol ?Initialize\@TaskQueuePortImpl\@\@QEAAJW4XTaskQueueDispatchMode\@\@\@Z
     */
    MCAPI long Initialize(enum class XTaskQueueDispatchMode);
    /**
     * @symbol ??0TaskQueuePortImpl\@\@QEAA\@XZ
     */
    MCAPI TaskQueuePortImpl();

    // private:
    /**
     * @symbol ?AppendEntry\@TaskQueuePortImpl\@\@AEAA_NAEBUQueueEntry\@1\@_K\@Z
     */
    MCAPI bool AppendEntry(struct TaskQueuePortImpl::QueueEntry const&, unsigned __int64);
    /**
     * @symbol ?AppendWaitRegistrationEntry\@TaskQueuePortImpl\@\@AEAA_NPEAUWaitRegistration\@1\@\@Z
     */
    MCAPI bool AppendWaitRegistrationEntry(struct TaskQueuePortImpl::WaitRegistration*);
    /**
     * @symbol ?CancelPendingEntries\@TaskQueuePortImpl\@\@AEAAXPEAUITaskQueuePortContext\@\@_N\@Z
     */
    MCAPI void CancelPendingEntries(struct ITaskQueuePortContext*, bool);
    /**
     * @symbol ?DrainOneItem\@TaskQueuePortImpl\@\@AEAA_NAEAUThreadPoolActionStatus\@OS\@\@\@Z
     */
    MCAPI bool DrainOneItem(struct OS::ThreadPoolActionStatus&);
    /**
     * @symbol ?InitializeWaitRegistration\@TaskQueuePortImpl\@\@AEAAJPEAUWaitRegistration\@1\@\@Z
     */
    MCAPI long InitializeWaitRegistration(struct TaskQueuePortImpl::WaitRegistration*);
    /**
     * @symbol ?NotifyItemQueued\@TaskQueuePortImpl\@\@AEAAXXZ
     */
    MCAPI void NotifyItemQueued();
    /**
     * @symbol ?ProcessThreadPoolCallback\@TaskQueuePortImpl\@\@AEAAXAEAUThreadPoolActionStatus\@OS\@\@\@Z
     */
    MCAPI void ProcessThreadPoolCallback(struct OS::ThreadPoolActionStatus&);
    /**
     * @symbol ?ScheduleTermination\@TaskQueuePortImpl\@\@AEAAXPEAUTerminationEntry\@1\@\@Z
     */
    MCAPI void ScheduleTermination(struct TaskQueuePortImpl::TerminationEntry*);
    /**
     * @symbol ?SubmitPendingCallback\@TaskQueuePortImpl\@\@AEAAXXZ
     */
    MCAPI void SubmitPendingCallback();
    /**
     * @symbol ?Wait\@TaskQueuePortImpl\@\@AEAA_NPEAUITaskQueuePortContext\@\@I\@Z
     */
    MCAPI bool Wait(struct ITaskQueuePortContext*, unsigned int);
    /**
     * @symbol ?EraseQueue\@TaskQueuePortImpl\@\@CAXPEAV?$LocklessQueue\@UQueueEntry\@TaskQueuePortImpl\@\@\@\@\@Z
     */
    MCAPI static void EraseQueue(class LocklessQueue<struct TaskQueuePortImpl::QueueEntry>*);
    /**
     * @symbol ?WaitCallback\@TaskQueuePortImpl\@\@CAXPEAU_TP_CALLBACK_INSTANCE\@\@PEAXPEAU_TP_WAIT\@\@K\@Z
     */
    MCAPI static void WaitCallback(struct _TP_CALLBACK_INSTANCE*, void*, struct _TP_WAIT*, unsigned long);

private:
};
