#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InventoryTransactionManager {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORYTRANSACTIONMANAGER
public:
    InventoryTransactionManager& operator=(InventoryTransactionManager const&) = delete;
    InventoryTransactionManager(InventoryTransactionManager const&)            = delete;
    InventoryTransactionManager()                                              = delete;
#endif

public:
    /**
     * @symbol ?_createServerSideAction\@InventoryTransactionManager\@\@QEAAXAEBVItemStack\@\@0\@Z
     */
    MCAPI void _createServerSideAction(class ItemStack const&, class ItemStack const&);
    /**
     * @symbol ?_logExpectedActions\@InventoryTransactionManager\@\@QEBAXXZ
     */
    MCAPI void _logExpectedActions() const;
    /**
     * @symbol ?addAction\@InventoryTransactionManager\@\@QEAAXAEBVInventoryAction\@\@_N\@Z
     */
    MCAPI void addAction(class InventoryAction const&, bool);
    /**
     * @symbol ?addExpectedAction\@InventoryTransactionManager\@\@QEAAXAEBVInventoryAction\@\@\@Z
     */
    MCAPI void addExpectedAction(class InventoryAction const&);
    /**
     * @symbol ?forceBalanceTransaction\@InventoryTransactionManager\@\@QEAAXXZ
     */
    MCAPI void forceBalanceTransaction();
    /**
     * @symbol ??1InventoryTransactionManager\@\@QEAA\@XZ
     */
    MCAPI ~InventoryTransactionManager();
};
