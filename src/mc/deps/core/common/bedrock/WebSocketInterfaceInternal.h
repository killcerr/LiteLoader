#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class WebSocketInterfaceInternal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_HTTP_WEBSOCKETINTERFACEINTERNAL
public:
    WebSocketInterfaceInternal& operator=(WebSocketInterfaceInternal const&) = delete;
    WebSocketInterfaceInternal(WebSocketInterfaceInternal const&)            = delete;
    WebSocketInterfaceInternal()                                             = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_HTTP_WEBSOCKETINTERFACEINTERNAL
    /**
     * @symbol
     * ?connect\@WebSocketInterfaceInternal\@Http\@Bedrock\@\@UEAAJPEBD0V?$not_null\@PEAUHC_WEBSOCKET_OBSERVER\@\@\@gsl\@\@V?$not_null\@PEAUXAsyncBlock\@\@\@5\@PEAUHC_PERFORM_ENV\@\@\@Z
     */
    MCVAPI long
    connect(char const*, char const*, class gsl::not_null<struct HC_WEBSOCKET_OBSERVER*>, class gsl::not_null<struct XAsyncBlock*>, struct HC_PERFORM_ENV*);
    /**
     * @symbol
     * ?disconnect\@WebSocketInterfaceInternal\@Http\@Bedrock\@\@UEAAJV?$not_null\@PEAUHC_WEBSOCKET_OBSERVER\@\@\@gsl\@\@W4HCWebSocketCloseStatus\@\@\@Z
     */
    MCVAPI long disconnect(class gsl::not_null<struct HC_WEBSOCKET_OBSERVER*>, enum class HCWebSocketCloseStatus);
    /**
     * @symbol
     * ?sendBinaryMessage\@WebSocketInterfaceInternal\@Http\@Bedrock\@\@UEAAJV?$not_null\@PEAUHC_WEBSOCKET_OBSERVER\@\@\@gsl\@\@V?$span\@$$CBE$0?0\@5\@V?$not_null\@PEAUXAsyncBlock\@\@\@5\@\@Z
     */
    MCVAPI long
        sendBinaryMessage(class gsl::not_null<struct HC_WEBSOCKET_OBSERVER*>, class gsl::span<unsigned char const, -1>, class gsl::not_null<struct XAsyncBlock*>);
    /**
     * @symbol
     * ?sendMessage\@WebSocketInterfaceInternal\@Http\@Bedrock\@\@UEAAJV?$not_null\@PEAUHC_WEBSOCKET_OBSERVER\@\@\@gsl\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@V?$not_null\@PEAUXAsyncBlock\@\@\@5\@\@Z
     */
    MCVAPI long
        sendMessage(class gsl::not_null<struct HC_WEBSOCKET_OBSERVER*>, class std::basic_string_view<char, struct std::char_traits<char>>, class gsl::not_null<struct XAsyncBlock*>);
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~WebSocketInterfaceInternal();
#endif
};

}; // namespace Bedrock::Http
