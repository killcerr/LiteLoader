#pragma once

#include "mc/_HeaderOutputPredefine.h"

class KeyFrameTransform {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_KEYFRAMETRANSFORM
public:
    KeyFrameTransform& operator=(KeyFrameTransform const&) = delete;
    KeyFrameTransform(KeyFrameTransform const&)            = delete;
    KeyFrameTransform()                                    = delete;
#endif

public:
    /**
     * @symbol ??0KeyFrameTransform\@\@QEAA\@M\@Z
     */
    MCAPI KeyFrameTransform(float);
    /**
     * @symbol ??4KeyFrameTransform\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class KeyFrameTransform& operator=(class KeyFrameTransform&&);
    /**
     * @symbol ?optimizeAndGetDataValues\@KeyFrameTransform\@\@QEAA_NAEAVVec3\@\@0\@Z
     */
    MCAPI bool optimizeAndGetDataValues(class Vec3&, class Vec3&);
    /**
     * @symbol ?set\@KeyFrameTransform\@\@QEAAXAEBVExpressionNode\@\@H\@Z
     */
    MCAPI void set(class ExpressionNode const&, int);
    /**
     * @symbol ?set\@KeyFrameTransform\@\@QEAAXAEBVExpressionNode\@\@\@Z
     */
    MCAPI void set(class ExpressionNode const&);
    /**
     * @symbol ??1KeyFrameTransform\@\@QEAA\@XZ
     */
    MCAPI ~KeyFrameTransform();
    /**
     * @symbol ?computeCubicPolynomial\@KeyFrameTransform\@\@SAXPEAV1\@AEAV1\@10\@Z
     */
    MCAPI static void
    computeCubicPolynomial(class KeyFrameTransform*, class KeyFrameTransform&, class KeyFrameTransform&, class KeyFrameTransform*);
};
