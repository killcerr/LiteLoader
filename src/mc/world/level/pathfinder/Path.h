#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Path {
public:
    // Path inner types declare
    // clang-format off
    class Node;
    // clang-format on

    // Path inner types define
    class Node {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PATH_NODE
    public:
        Node& operator=(Node const&) = delete;
        Node(Node const&)            = delete;
        Node()                       = delete;
#endif

    public:
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PATH
public:
    Path& operator=(Path const&) = delete;
    Path(Path const&)            = delete;
#endif

public:
    /**
     * @symbol ??0Path\@\@QEAA\@XZ
     */
    MCAPI Path();
    /**
     * @symbol ?currentPos\@Path\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const& currentPos() const;
    /**
     * @symbol ?currentPos\@Path\@\@QEBA?AVVec3\@\@PEBVActor\@\@\@Z
     */
    MCAPI class Vec3 currentPos(class Actor const*) const;
    /**
     * @symbol ?endsInXZ\@Path\@\@QEAA_NAEBVVec3\@\@\@Z
     */
    MCAPI bool endsInXZ(class Vec3 const&);
    /**
     * @symbol ?getCompletionType\@Path\@\@QEBA?AW4PathCompletionType\@\@XZ
     */
    MCAPI enum class PathCompletionType getCompletionType() const;
    /**
     * @symbol ?getEndPos\@Path\@\@QEBA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 getEndPos() const;
    /**
     * @symbol ?getIndex\@Path\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getIndex() const;
    /**
     * @symbol ?getLastPos\@Path\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const& getLastPos() const;
    /**
     * @symbol ?getNodePos\@Path\@\@QEBAAEBVBlockPos\@\@_K\@Z
     */
    MCAPI class BlockPos const& getNodePos(unsigned __int64) const;
    /**
     * @symbol ?getNodeType\@Path\@\@QEBA?AW4NodeType\@\@_K\@Z
     */
    MCAPI enum class NodeType getNodeType(unsigned __int64) const;
    /**
     * @symbol ?getPos\@Path\@\@QEBA?AVVec3\@\@PEBVActor\@\@_K\@Z
     */
    MCAPI class Vec3 getPos(class Actor const*, unsigned __int64) const;
    /**
     * @symbol ?getSize\@Path\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getSize() const;
    /**
     * @symbol ?isDone\@Path\@\@QEBA_NXZ
     */
    MCAPI bool isDone() const;
    /**
     * @symbol ?isValid\@Path\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @symbol ?makeCopy\@Path\@\@QEBA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class Path> makeCopy() const;
    /**
     * @symbol ?next\@Path\@\@QEAAXXZ
     */
    MCAPI void next();
    /**
     * @symbol ?sameAs\@Path\@\@QEBA_NPEAV1\@\@Z
     */
    MCAPI bool sameAs(class Path*) const;
    /**
     * @symbol ?setIndex\@Path\@\@QEAAX_K\@Z
     */
    MCAPI void setIndex(unsigned __int64);
    /**
     * @symbol ?setSize\@Path\@\@QEAAX_K\@Z
     */
    MCAPI void setSize(unsigned __int64);
    /**
     * @symbol ??1Path\@\@QEAA\@XZ
     */
    MCAPI ~Path();

    // private:
    /**
     * @symbol
     * ?buildFromNodes\@Path\@\@AEAAX$$QEAV?$vector\@VNode\@Path\@\@V?$allocator\@VNode\@Path\@\@\@std\@\@\@std\@\@W4PathCompletionType\@\@\@Z
     */
    MCAPI void buildFromNodes(std::vector<class Path::Node>&&, enum class PathCompletionType);

private:
};
