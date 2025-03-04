#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandSoftEnumRegistry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDSOFTENUMREGISTRY
public:
    CommandSoftEnumRegistry& operator=(CommandSoftEnumRegistry const&) = delete;
    CommandSoftEnumRegistry(CommandSoftEnumRegistry const&)            = delete;
    CommandSoftEnumRegistry()                                          = delete;
#endif

public:
    /**
     * @symbol ??0CommandSoftEnumRegistry\@\@QEAA\@PEAVCommandRegistry\@\@\@Z
     */
    MCAPI CommandSoftEnumRegistry(class CommandRegistry*);
    /**
     * @symbol
     * ?updateSoftEnum\@CommandSoftEnumRegistry\@\@QEAAXW4SoftEnumUpdateType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@Z
     */
    MCAPI void updateSoftEnum(enum class SoftEnumUpdateType, std::string const&, std::vector<std::string>);
    /**
     * @symbol ??1CommandSoftEnumRegistry\@\@QEAA\@XZ
     */
    MCAPI ~CommandSoftEnumRegistry();
};
