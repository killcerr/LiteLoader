#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FakeThermalMonitorInterface {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FAKETHERMALMONITORINTERFACE
public:
    FakeThermalMonitorInterface& operator=(FakeThermalMonitorInterface const&) = delete;
    FakeThermalMonitorInterface(FakeThermalMonitorInterface const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getThermalState\@FakeThermalMonitorInterface\@\@UEBA?AW4ThermalState\@\@XZ
     */
    virtual enum class ThermalState getThermalState() const;
    /**
     * @vftbl 2
     * @symbol ?getThermalValueCelsius\@FakeThermalMonitorInterface\@\@UEBAMXZ
     */
    virtual float getThermalValueCelsius() const;
    /**
     * @vftbl 3
     * @symbol ?isLowBatteryModeEnabled\@FakeThermalMonitorInterface\@\@UEBA_NXZ
     */
    virtual bool isLowBatteryModeEnabled() const;
    /**
     * @symbol ??0FakeThermalMonitorInterface\@\@QEAA\@XZ
     */
    MCAPI FakeThermalMonitorInterface();
};
