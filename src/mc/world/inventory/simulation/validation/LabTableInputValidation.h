#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

class LabTableInputValidation : public ::ContainerValidationBase {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LABTABLEINPUTVALIDATION
public:
    LabTableInputValidation& operator=(LabTableInputValidation const&) = delete;
    LabTableInputValidation(LabTableInputValidation const&)            = delete;
    LabTableInputValidation()                                          = delete;
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
     * ?isValidSlotForContainer\@ContainerValidationBase\@\@UEBA_NAEBVContainerScreenContext\@\@AEBVContainer\@\@H\@Z
     */
    virtual bool isValidSlotForContainer(class ContainerScreenContext const&, class Container const&, int) const;
    /**
     * @vftbl 2
     * @symbol
     * ?isItemAllowedInSlot\@LabTableInputValidation\@\@UEBA_NAEBVContainerScreenContext\@\@HAEBVItemStackBase\@\@H\@Z
     */
    virtual bool isItemAllowedInSlot(class ContainerScreenContext const&, int, class ItemStackBase const&, int) const;
    /**
     * @vftbl 3
     * @symbol ?getAvailableSetCount\@ContainerValidationBase\@\@UEBAHHAEBVItemStackBase\@\@\@Z
     */
    virtual int getAvailableSetCount(int, class ItemStackBase const&) const;
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol ?canItemMoveToContainer\@ContainerValidationBase\@\@UEBA_NAEBVItemStackBase\@\@\@Z
     */
    virtual bool canItemMoveToContainer(class ItemStackBase const&) const;
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl 9
     * @symbol ?getContainerSize\@LabTableInputValidation\@\@UEBAHAEBVContainerScreenContext\@\@AEBVContainer\@\@\@Z
     */
    virtual int getContainerSize(class ContainerScreenContext const&, class Container const&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LABTABLEINPUTVALIDATION
    /**
     * @symbol ?canDestroy\@LabTableInputValidation\@\@UEBA_NAEBVContainerScreenContext\@\@\@Z
     */
    MCVAPI bool canDestroy(class ContainerScreenContext const&) const;
#endif
};
