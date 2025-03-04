/**
 * @file  reflection.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace reflection.
 *
 */
namespace reflection {

#define AFTER_EXTRA
    class details {
    class BasicCompositeSchema;
    };
    struct Schema;
#undef AFTER_EXTRA
    /**
     * @symbol ?schemaMap@reflection@@YAAEAV?$dense_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$dense_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VBasicCompositeSchema@details@reflection@@U?$default_delete@VBasicCompositeSchema@details@reflection@@@std@@@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VBasicCompositeSchema@details@reflection@@U?$default_delete@VBasicCompositeSchema@details@reflection@@@std@@@2@@std@@@2@@entt@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$dense_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VBasicCompositeSchema@details@reflection@@U?$default_delete@VBasicCompositeSchema@details@reflection@@@std@@@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VBasicCompositeSchema@details@reflection@@U?$default_delete@VBasicCompositeSchema@details@reflection@@@std@@@2@@std@@@2@@entt@@@std@@@2@@entt@@XZ
     * @hash   185646711
     */
    MCAPI class entt::dense_map<std::string, class entt::dense_map<std::string, std::unique_ptr<class reflection::details::BasicCompositeSchema>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::unique_ptr<class reflection::details::BasicCompositeSchema>>>>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, class entt::dense_map<std::string, std::unique_ptr<class reflection::details::BasicCompositeSchema>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::unique_ptr<class reflection::details::BasicCompositeSchema>>>>>>> & schemaMap();

};