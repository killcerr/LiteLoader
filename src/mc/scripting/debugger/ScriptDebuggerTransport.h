#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptDebuggerTransport {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTDEBUGGERTRANSPORT
public:
    ScriptDebuggerTransport& operator=(ScriptDebuggerTransport const&) = delete;
    ScriptDebuggerTransport(ScriptDebuggerTransport const&)            = delete;
    ScriptDebuggerTransport()                                          = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?listen\@ScriptDebuggerTransport\@\@UEAA_NG\@Z
     */
    virtual bool listen(unsigned short);
    /**
     * @vftbl 2
     * @symbol
     * ?connect\@ScriptDebuggerTransport\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@G\@Z
     */
    virtual bool connect(std::string const&, unsigned short);
    /**
     * @vftbl 3
     * @symbol ?selectClient\@ScriptDebuggerTransport\@\@UEAA_NXZ
     */
    virtual bool selectClient();
    /**
     * @vftbl 4
     * @symbol ?connected\@ScriptDebuggerTransport\@\@UEBA_NXZ
     */
    virtual bool connected() const;
    /**
     * @vftbl 5
     * @symbol ?lostConnection\@ScriptDebuggerTransport\@\@UEBA_NXZ
     */
    virtual bool lostConnection() const;
    /**
     * @vftbl 6
     * @symbol ?readyClose\@ScriptDebuggerTransport\@\@UEBA_NXZ
     */
    virtual bool readyClose() const;
    /**
     * @vftbl 7
     * @symbol ?close\@ScriptDebuggerTransport\@\@UEAAXXZ
     */
    virtual void close();
    /**
     * @vftbl 8
     * @symbol ?peek\@ScriptDebuggerTransport\@\@UEBA_NXZ
     */
    virtual bool peek() const;
    /**
     * @vftbl 9
     * @symbol ?receive\@ScriptDebuggerTransport\@\@UEAA_NPEAD_K\@Z
     */
    virtual bool receive(char*, unsigned __int64);
    /**
     * @vftbl 10
     * @symbol ?send\@ScriptDebuggerTransport\@\@UEAAXPEBD_K\@Z
     */
    virtual void send(char const*, unsigned __int64);
};
