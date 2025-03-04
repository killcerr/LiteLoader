#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

struct WebSocketPacketData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEBSOCKETPACKETDATA
public:
    WebSocketPacketData& operator=(WebSocketPacketData const&) = delete;
    WebSocketPacketData(WebSocketPacketData const&)            = delete;
    WebSocketPacketData()                                      = delete;
#endif

public:
    /**
     * @symbol
     * ??0WebSocketPacketData\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI WebSocketPacketData(std::string const&);
    /**
     * @symbol
     * ?read\@WebSocketPacketData\@\@QEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI class Bedrock::Result<void, class std::error_code> read(class ReadOnlyBinaryStream&);
};
