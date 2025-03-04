#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/ProducerComponent.h"

class RedstoneTorchCapacitor : public ::ProducerComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REDSTONETORCHCAPACITOR
public:
    RedstoneTorchCapacitor& operator=(RedstoneTorchCapacitor const&) = delete;
    RedstoneTorchCapacitor(RedstoneTorchCapacitor const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getStrength\@RedstoneTorchCapacitor\@\@UEBAHXZ
     */
    virtual int getStrength() const;
    /**
     * @vftbl 10
     * @symbol ?removeSource\@RedstoneTorchCapacitor\@\@UEAAXAEBVBlockPos\@\@PEBVBaseCircuitComponent\@\@\@Z
     */
    virtual void removeSource(class BlockPos const&, class BaseCircuitComponent const*);
    /**
     * @vftbl 11
     * @symbol
     * ?addSource\@RedstoneTorchCapacitor\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEAHAEA_N\@Z
     */
    virtual bool addSource(class CircuitSceneGraph&, class CircuitTrackingInfo const&, int&, bool&);
    /**
     * @vftbl 12
     * @symbol
     * ?allowConnection\@RedstoneTorchCapacitor\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEA_N\@Z
     */
    virtual bool allowConnection(class CircuitSceneGraph&, class CircuitTrackingInfo const&, bool&);
    /**
     * @vftbl 14
     * @symbol ?evaluate\@RedstoneTorchCapacitor\@\@UEAA_NAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool evaluate(class CircuitSystem&, class BlockPos const&);
    /**
     * @vftbl 15
     * @symbol ?cacheValues\@RedstoneTorchCapacitor\@\@UEAAXAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void cacheValues(class CircuitSystem&, class BlockPos const&);
    /**
     * @vftbl 16
     * @symbol ?updateDependencies\@RedstoneTorchCapacitor\@\@EEAAXAEAVCircuitSceneGraph\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void updateDependencies(class CircuitSceneGraph&, class BlockPos const&);
    /**
     * @vftbl 17
     * @symbol __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl 18
     * @symbol ?isHalfPulse\@RedstoneTorchCapacitor\@\@UEBA_NXZ
     */
    virtual bool isHalfPulse() const;
    /**
     * @vftbl 20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20();
    /**
     * @vftbl 23
     * @symbol ?getCircuitComponentType\@RedstoneTorchCapacitor\@\@UEBA?AW4CircuitComponentType\@\@XZ
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const;
    /**
     * @vftbl 25
     * @symbol ?getPoweroutDirection\@RedstoneTorchCapacitor\@\@UEBAEXZ
     */
    virtual unsigned char getPoweroutDirection() const;
    /**
     * @symbol ??0RedstoneTorchCapacitor\@\@QEAA\@XZ
     */
    MCAPI RedstoneTorchCapacitor();
    /**
     * @symbol ?resetBurnOutCount\@RedstoneTorchCapacitor\@\@QEAAXXZ
     */
    MCAPI void resetBurnOutCount();
    /**
     * @symbol ?setOn\@RedstoneTorchCapacitor\@\@QEAAX_N\@Z
     */
    MCAPI void setOn(bool);

    // private:
    /**
     * @symbol ?FindStrongestStrength\@RedstoneTorchCapacitor\@\@AEAAHAEBVBlockPos\@\@AEAVCircuitSystem\@\@AEA_N\@Z
     */
    MCAPI int FindStrongestStrength(class BlockPos const&, class CircuitSystem&, bool&);

private:
};
