#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Features; }
namespace Json { class Value; }
namespace Json { enum class CommentPlacement; }
// clang-format on

namespace Json {

class Reader {
public:
    // Reader inner types declare
    // clang-format off
    class ErrorInfo;
    class Token;
    // clang-format on

    // Reader inner types define
    enum class TokenType {};

    class ErrorInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JSON_READER_ERRORINFO
    public:
        ErrorInfo& operator=(ErrorInfo const&) = delete;
        ErrorInfo(ErrorInfo const&)            = delete;
        ErrorInfo()                            = delete;
#endif

    public:
        /**
         * @symbol ??1ErrorInfo\@Reader\@Json\@\@QEAA\@XZ
         */
        MCAPI ~ErrorInfo();
    };

    class Token {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JSON_READER_TOKEN
    public:
        Token& operator=(Token const&) = delete;
        Token(Token const&)            = delete;
        Token()                        = delete;
#endif

    public:
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JSON_READER
public:
    Reader& operator=(Reader const&) = delete;
    Reader(Reader const&)            = delete;
#endif

public:
    /**
     * @symbol ??0Reader\@Json\@\@QEAA\@AEBVFeatures\@1\@\@Z
     */
    MCAPI Reader(class Json::Features const&);
    /**
     * @symbol ??0Reader\@Json\@\@QEAA\@XZ
     */
    MCAPI Reader();
    /**
     * @symbol
     * ?getFormattedErrorMessages\@Reader\@Json\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getFormattedErrorMessages() const;
    /**
     * @symbol ?parse\@Reader\@Json\@\@QEAA_NPEBD_KAEAVValue\@2\@_N\@Z
     */
    MCAPI bool parse(char const*, unsigned __int64, class Json::Value&, bool);
    /**
     * @symbol
     * ?parse\@Reader\@Json\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVValue\@2\@_N\@Z
     */
    MCAPI bool parse(std::string const&, class Json::Value&, bool);
    /**
     * @symbol
     * ?parse\@Reader\@Json\@\@QEAA_NAEAV?$basic_istream\@DU?$char_traits\@D\@std\@\@\@std\@\@AEAVValue\@2\@_N\@Z
     */
    MCAPI bool parse(class std::basic_istream<char, struct std::char_traits<char>>&, class Json::Value&, bool);
    /**
     * @symbol ??1Reader\@Json\@\@QEAA\@XZ
     */
    MCAPI ~Reader();

    // private:
    /**
     * @symbol ?addComment\@Reader\@Json\@\@AEAAXPEBD0W4CommentPlacement\@2\@\@Z
     */
    MCAPI void addComment(char const*, char const*, enum class Json::CommentPlacement);
    /**
     * @symbol
     * ?addError\@Reader\@Json\@\@AEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVToken\@12\@PEBD\@Z
     */
    MCAPI bool addError(std::string const&, class Json::Reader::Token&, char const*);
    /**
     * @symbol ?decodeDouble\@Reader\@Json\@\@AEAA_NAEAVToken\@12\@\@Z
     */
    MCAPI bool decodeDouble(class Json::Reader::Token&);
    /**
     * @symbol ?decodeNumber\@Reader\@Json\@\@AEAA_NAEAVToken\@12\@\@Z
     */
    MCAPI bool decodeNumber(class Json::Reader::Token&);
    /**
     * @symbol
     * ?decodeString\@Reader\@Json\@\@AEAA_NAEAVToken\@12\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool decodeString(class Json::Reader::Token&, std::string&);
    /**
     * @symbol ?decodeUnicodeCodePoint\@Reader\@Json\@\@AEAA_NAEAVToken\@12\@AEAPEBDPEBDAEAI\@Z
     */
    MCAPI bool decodeUnicodeCodePoint(class Json::Reader::Token&, char const*&, char const*, unsigned int&);
    /**
     * @symbol ?decodeUnicodeEscapeSequence\@Reader\@Json\@\@AEAA_NAEAVToken\@12\@AEAPEBDPEBDAEAI\@Z
     */
    MCAPI bool decodeUnicodeEscapeSequence(class Json::Reader::Token&, char const*&, char const*, unsigned int&);
    /**
     * @symbol
     * ?getLocationLineAndColumn\@Reader\@Json\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBD\@Z
     */
    MCAPI std::string getLocationLineAndColumn(char const*) const;
    /**
     * @symbol ?parse\@Reader\@Json\@\@AEAA_NPEBD0AEAVValue\@2\@_N\@Z
     */
    MCAPI bool parse(char const*, char const*, class Json::Value&, bool);
    /**
     * @symbol ?readArray\@Reader\@Json\@\@AEAA_NAEAVToken\@12\@\@Z
     */
    MCAPI bool readArray(class Json::Reader::Token&);
    /**
     * @symbol ?readComment\@Reader\@Json\@\@AEAA_NXZ
     */
    MCAPI bool readComment();
    /**
     * @symbol ?readObject\@Reader\@Json\@\@AEAA_NAEAVToken\@12\@\@Z
     */
    MCAPI bool readObject(class Json::Reader::Token&);
    /**
     * @symbol ?readToken\@Reader\@Json\@\@AEAA_NAEAVToken\@12\@\@Z
     */
    MCAPI bool readToken(class Json::Reader::Token&);
    /**
     * @symbol ?readValue\@Reader\@Json\@\@AEAA_NXZ
     */
    MCAPI bool readValue();
    /**
     * @symbol ?recoverFromError\@Reader\@Json\@\@AEAA_NW4TokenType\@12\@\@Z
     */
    MCAPI bool recoverFromError(enum class Json::Reader::TokenType);
    /**
     * @symbol ?skipCommentTokens\@Reader\@Json\@\@AEAAXAEAVToken\@12\@\@Z
     */
    MCAPI void skipCommentTokens(class Json::Reader::Token&);

private:
};

}; // namespace Json
