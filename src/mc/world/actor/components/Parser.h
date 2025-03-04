#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeightedChoices.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class Parser {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PARSER
public:
    Parser& operator=(Parser const&) = delete;
    Parser(Parser const&)            = delete;
    Parser()                         = delete;
#endif

public:
    /**
     * @symbol ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAUActorDefinitionIdentifier\@\@PEBD3\@Z
     */
    MCAPI static void
    parse(class Json::Value const&, class SemVersion const&, struct ActorDefinitionIdentifier&, char const*, char const*);
    /**
     * @symbol ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAMPEBDM\@Z
     */
    MCAPI static void parse(class Json::Value const&, class SemVersion const&, float&, char const*, float);
    /**
     * @symbol ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAHPEBDH\@Z
     */
    MCAPI static void parse(class Json::Value const&, class SemVersion const&, int&, char const*, int);
    /**
     * @symbol ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAVBlockDescriptor\@\@\@Z
     */
    MCAPI static void parse(class Json::Value const&, class SemVersion const&, class BlockDescriptor&);
    /**
     * @symbol ?parse\@Parser\@\@SA_NAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAVActorDefinitionTrigger\@\@_N\@Z
     */
    MCAPI static bool parse(class Json::Value const&, class SemVersion const&, class ActorDefinitionTrigger&, bool);
    /**
     * @symbol ?parse\@Parser\@\@SA_NAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAW4FilterSubject\@\@PEBD3\@Z
     */
    MCAPI static bool
    parse(class Json::Value const&, class SemVersion const&, enum class FilterSubject&, char const*, char const*);
    /**
     * @symbol ?parse\@Parser\@\@SA_NAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAVItemDescriptor\@\@\@Z
     */
    MCAPI static bool parse(class Json::Value const&, class SemVersion const&, class ItemDescriptor&);
    /**
     * @symbol ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAEE\@Z
     */
    MCAPI static void parse(class Json::Value const&, class SemVersion const&, unsigned char&, unsigned char);
    /**
     * @symbol ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAW4ParticleType\@\@PEBD3\@Z
     */
    MCAPI static void
    parse(class Json::Value const&, class SemVersion const&, enum class ParticleType&, char const*, char const*);
    /**
     * @symbol ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAV23\@PEBD\@Z
     */
    MCAPI static void parse(class Json::Value const&, class SemVersion const&, class Json::Value&, char const*);
    /**
     * @symbol ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAVHashedString\@\@PEBD3\@Z
     */
    MCAPI static void
    parse(class Json::Value const&, class SemVersion const&, class HashedString&, char const*, char const*);
    /**
     * @symbol ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAIPEBDI\@Z
     */
    MCAPI static void
    parse(class Json::Value const&, class SemVersion const&, unsigned int&, char const*, unsigned int);
    /**
     * @symbol
     * ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@PEBD\@Z
     */
    MCAPI static void parse(class Json::Value const&, class SemVersion const&, std::vector<std::string>&, char const*);
    /**
     * @symbol ?parse\@Parser\@\@SA_NAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAVDefinitionTrigger\@\@_N\@Z
     */
    MCAPI static bool parse(class Json::Value const&, class SemVersion const&, class DefinitionTrigger&, bool);
    /**
     * @symbol
     * ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBD3\@Z
     */
    MCAPI static void parse(class Json::Value const&, class SemVersion const&, std::string&, char const*, char const*);
    /**
     * @symbol
     * ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAV?$vector\@VBlockDescriptor\@\@V?$allocator\@VBlockDescriptor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static void parse(class Json::Value const&, class SemVersion const&, std::vector<class BlockDescriptor>&);
    /**
     * @symbol ?parse\@Parser\@\@SA_NAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAVActorDefinitionTrigger\@\@PEBD\@Z
     */
    MCAPI static bool
    parse(class Json::Value const&, class SemVersion const&, class ActorDefinitionTrigger&, char const*);
    /**
     * @symbol
     * ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAV?$vector\@W4LevelSoundEvent\@\@V?$allocator\@W4LevelSoundEvent\@\@\@std\@\@\@std\@\@PEBD3\@Z
     */
    MCAPI static void
    parse(class Json::Value const&, class SemVersion const&, std::vector<enum class LevelSoundEvent>&, char const*, char const*);
    /**
     * @symbol ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAW4Difficulty\@\@PEBD3\@Z
     */
    MCAPI static void
    parse(class Json::Value const&, class SemVersion const&, enum class Difficulty&, char const*, char const*);
    /**
     * @symbol ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAW4ActorType\@\@PEBD3\@Z
     */
    MCAPI static void
    parse(class Json::Value const&, class SemVersion const&, enum class ActorType&, char const*, char const*);
    /**
     * @symbol ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEA_NPEBD_N\@Z
     */
    MCAPI static void parse(class Json::Value const&, class SemVersion const&, bool&, char const*, bool);
    /**
     * @symbol ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAVVec3\@\@PEBDAEBV5\@\@Z
     */
    MCAPI static void
    parse(class Json::Value const&, class SemVersion const&, class Vec3&, char const*, class Vec3 const&);
    /**
     * @symbol
     * ?parse\@Parser\@\@SA_NAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAV?$vector\@VActorDefinitionTrigger\@\@V?$allocator\@VActorDefinitionTrigger\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static bool
    parse(class Json::Value const&, class SemVersion const&, std::vector<class ActorDefinitionTrigger>&);
    /**
     * @symbol ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAUFloatRange\@\@PEBD\@Z
     */
    MCAPI static void parse(class Json::Value const&, class SemVersion const&, struct FloatRange&, char const*);
    /**
     * @symbol
     * ?parse\@Parser\@\@SA_NAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAV?$vector\@VItemDescriptor\@\@V?$allocator\@VItemDescriptor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static bool parse(class Json::Value const&, class SemVersion const&, std::vector<class ItemDescriptor>&);
    /**
     * @symbol ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAVMobEffectInstance\@\@PEBD\@Z
     */
    MCAPI static void parse(class Json::Value const&, class SemVersion const&, class MobEffectInstance&, char const*);
    /**
     * @symbol
     * ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAV?$WeightedChoices\@VActorDefinitionTrigger\@\@\@\@PEBD\@Z
     */
    MCAPI static void
    parse(class Json::Value const&, class SemVersion const&, class WeightedChoices<class ActorDefinitionTrigger>&, char const*);
    /**
     * @symbol
     * ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAV?$vector\@VBlockDescriptor\@\@V?$allocator\@VBlockDescriptor\@\@\@std\@\@\@std\@\@PEBD\@Z
     */
    MCAPI static void
    parse(class Json::Value const&, class SemVersion const&, std::vector<class BlockDescriptor>&, char const*);
    /**
     * @symbol
     * ?serialize\@Parser\@\@SAXAEBV?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@std\@\@AEAVValue\@Json\@\@PEBD\@Z
     */
    MCAPI static void serialize(std::vector<class MobEffectInstance> const&, class Json::Value&, char const*);
    /**
     * @symbol
     * ?serialize\@Parser\@\@SAXAEBV?$vector\@VBlockDescriptor\@\@V?$allocator\@VBlockDescriptor\@\@\@std\@\@\@std\@\@AEAVValue\@Json\@\@PEBD\@Z
     */
    MCAPI static void serialize(std::vector<class BlockDescriptor> const&, class Json::Value&, char const*);
    /**
     * @symbol ?serialize\@Parser\@\@SAXAEBUFloatRange\@\@AEAVValue\@Json\@\@PEBD\@Z
     */
    MCAPI static void serialize(struct FloatRange const&, class Json::Value&, char const*);
    /**
     * @symbol ?serialize\@Parser\@\@SAXAEBW4FilterSubject\@\@AEAVValue\@Json\@\@PEBD\@Z
     */
    MCAPI static void serialize(enum class FilterSubject const&, class Json::Value&, char const*);
    /**
     * @symbol ?serialize\@Parser\@\@SAXAEBUActorDefinitionIdentifier\@\@AEAVValue\@Json\@\@PEBD\@Z
     */
    MCAPI static void serialize(struct ActorDefinitionIdentifier const&, class Json::Value&, char const*);
    /**
     * @symbol ?serialize\@Parser\@\@SAXAEBW4ParticleType\@\@AEAVValue\@Json\@\@PEBD\@Z
     */
    MCAPI static void serialize(enum class ParticleType const&, class Json::Value&, char const*);
    /**
     * @symbol ?serialize\@Parser\@\@SAXAEBVActorDefinitionTrigger\@\@AEAVValue\@Json\@\@PEBD\@Z
     */
    MCAPI static void serialize(class ActorDefinitionTrigger const&, class Json::Value&, char const*);
    /**
     * @symbol ?serialize\@Parser\@\@SAXAEBW4ActorType\@\@AEAVValue\@Json\@\@PEBD\@Z
     */
    MCAPI static void serialize(enum class ActorType const&, class Json::Value&, char const*);
};
