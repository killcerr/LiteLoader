#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TemporalAttributeBuff {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEMPORALATTRIBUTEBUFF
public:
    TemporalAttributeBuff() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isInstantaneous\@TemporalAttributeBuff\@\@UEBA_NXZ
     */
    virtual bool isInstantaneous() const;
    /**
     * @vftbl 2
     * @symbol ?isSerializable\@TemporalAttributeBuff\@\@UEBA_NXZ
     */
    virtual bool isSerializable() const;
    /**
     * @vftbl 3
     * @symbol ?setDurationAmplifier\@TemporalAttributeBuff\@\@UEAAXV?$shared_ptr\@VAmplifier\@\@\@std\@\@\@Z
     */
    virtual void setDurationAmplifier(class std::shared_ptr<class Amplifier>);
    /**
     * @vftbl 4
     * @symbol ?shouldBuff\@TemporalAttributeBuff\@\@UEBA_NXZ
     */
    virtual bool shouldBuff() const;
    /**
     * @vftbl 5
     * @symbol ?isComplete\@TemporalAttributeBuff\@\@UEBA_NXZ
     */
    virtual bool isComplete() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TEMPORALATTRIBUTEBUFF
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TemporalAttributeBuff();
#endif
    /**
     * @symbol
     * ??0TemporalAttributeBuff\@\@QEAA\@MHW4AttributeBuffType\@\@_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI TemporalAttributeBuff(float, int, enum class AttributeBuffType, bool, std::string const&);
    /**
     * @symbol ??0TemporalAttributeBuff\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI TemporalAttributeBuff(class TemporalAttributeBuff const&);
    /**
     * @symbol ?getBaseAmount\@TemporalAttributeBuff\@\@QEBAMXZ
     */
    MCAPI float getBaseAmount() const;
    /**
     * @symbol ?getDuration\@TemporalAttributeBuff\@\@QEBAHXZ
     */
    MCAPI int getDuration() const;
    /**
     * @symbol ?getLifeTimer\@TemporalAttributeBuff\@\@QEBAHXZ
     */
    MCAPI int getLifeTimer() const;
    /**
     * @symbol ??4TemporalAttributeBuff\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class TemporalAttributeBuff& operator=(class TemporalAttributeBuff const&);
    /**
     * @symbol ?serializationSetLifeTime\@TemporalAttributeBuff\@\@QEAAXH\@Z
     */
    MCAPI void serializationSetLifeTime(int);
};
