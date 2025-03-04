#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/ThreadLocalObject.h"

class Random {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOM
public:
    Random& operator=(Random const&) = delete;
    Random(Random const&)            = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RANDOM
    /**
     * @symbol ?consumeCount\@Random\@\@UEAAXI\@Z
     */
    MCVAPI void consumeCount(unsigned int);
    /**
     * @symbol ?fork\@Random\@\@UEAA?AV?$unique_ptr\@VIRandom\@\@U?$default_delete\@VIRandom\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::unique_ptr<class IRandom> fork();
    /**
     * @symbol ?nextBoolean\@Random\@\@UEAA_NXZ
     */
    MCVAPI bool nextBoolean();
    /**
     * @symbol ?nextDouble\@Random\@\@UEAANXZ
     */
    MCVAPI double nextDouble();
    /**
     * @symbol ?nextFloat\@Random\@\@UEAAMXZ
     */
    MCVAPI float nextFloat();
    /**
     * @symbol ?nextGaussianDouble\@Random\@\@UEAANXZ
     */
    MCVAPI double nextGaussianDouble();
    /**
     * @symbol ?nextInt\@Random\@\@UEAAHH\@Z
     */
    MCVAPI int nextInt(int);
    /**
     * @symbol ?nextInt\@Random\@\@UEAAHXZ
     */
    MCVAPI int nextInt();
    /**
     * @symbol ?nextLong\@Random\@\@UEAA_JXZ
     */
    MCVAPI __int64 nextLong();
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Random();
#endif
    /**
     * @symbol ??0Random\@\@QEAA\@XZ
     */
    MCAPI Random();
    /**
     * @symbol ?nextFloat\@Random\@\@QEAAMMM\@Z
     */
    MCAPI float nextFloat(float, float);
    /**
     * @symbol ?nextGaussianFloat\@Random\@\@QEAAMXZ
     */
    MCAPI float nextGaussianFloat();
    /**
     * @symbol ?nextGaussianInt\@Random\@\@QEAAHH\@Z
     */
    MCAPI int nextGaussianInt(int);
    /**
     * @symbol ?nextInt\@Random\@\@QEAAHHH\@Z
     */
    MCAPI int nextInt(int, int);
    /**
     * @symbol ?nextIntInclusive\@Random\@\@QEAAHHH\@Z
     */
    MCAPI int nextIntInclusive(int, int);
    /**
     * @symbol ?getThreadLocal\@Random\@\@SAAEAV1\@XZ
     */
    MCAPI static class Random& getThreadLocal();

    // private:

private:
    /**
     * @symbol
     * ?mThreadLocalRandom\@Random\@\@0V?$ThreadLocalObject\@VRandom\@\@V?$allocator\@VRandom\@\@\@std\@\@\@Threading\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::Threading::ThreadLocalObject<class Random, class std::allocator<class Random>>
        mThreadLocalRandom;
};
