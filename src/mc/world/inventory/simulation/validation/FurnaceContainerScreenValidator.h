#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerScreenValidatorBase.h"

class FurnaceContainerScreenValidator : public ::ContainerScreenValidatorBase {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FURNACECONTAINERSCREENVALIDATOR
public:
    FurnaceContainerScreenValidator& operator=(FurnaceContainerScreenValidator const&) = delete;
    FurnaceContainerScreenValidator(FurnaceContainerScreenValidator const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?postCommitItemRemoved\@FurnaceContainerScreenValidator\@\@UEAA?AV?$shared_ptr\@VContainerValidationCommitObject\@\@\@std\@\@W4ContainerEnumName\@\@HAEBVItemStack\@\@\@Z
     */
    virtual class std::shared_ptr<class ContainerValidationCommitObject>
    postCommitItemRemoved(enum class ContainerEnumName, int, class ItemStack const&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FURNACECONTAINERSCREENVALIDATOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~FurnaceContainerScreenValidator();
#endif
    /**
     * @symbol ??0FurnaceContainerScreenValidator\@\@QEAA\@XZ
     */
    MCAPI FurnaceContainerScreenValidator();
};
