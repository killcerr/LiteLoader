/**
 * @file  SummonSpellData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure SummonSpellData.
 *
 */
struct SummonSpellData {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUMMONSPELLDATA
public:
    struct SummonSpellData& operator=(struct SummonSpellData const &) = delete;
    SummonSpellData() = delete;
#endif

public:
    /**
     * @symbol  ??0SummonSpellData\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI SummonSpellData(struct SummonSpellData const &);
    /**
     * @symbol  ??1SummonSpellData\@\@QEAA\@XZ
     */
    MCAPI ~SummonSpellData();

};