// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructurePiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RuinedPortalPiece : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RUINEDPORTALPIECE
public:
    class RuinedPortalPiece& operator=(class RuinedPortalPiece const &) = delete;
    RuinedPortalPiece(class RuinedPortalPiece const &) = delete;
    RuinedPortalPiece() = delete;
#endif

public:
    /*0*/ virtual ~RuinedPortalPiece();
    /*2*/ virtual class PoolElementStructurePiece * asPoolElement();
    /*3*/ virtual enum StructurePieceType getType() const;
    /*4*/ virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /*5*/ virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /*6*/ virtual void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);
    /*10*/ virtual bool canBeReplaced(class BlockSource &, int, int, int, class BoundingBox const &);
    /*12*/ virtual void addHardcodedSpawnAreas(class LevelChunk &) const;

protected:

private:
    MCAPI void _addNetherrackDripColumn(class Random &, class BlockSource &, class BlockPos);
    MCAPI void _maybeReplaceBlock(class Random &, class BlockSource &, class BlockPos, struct PortalEnvironmentModifiers const &);
    MCAPI void _maybeReplaceFullStoneBlock(class Random &, class BlockSource &, class BlockPos, class Block const &, struct PortalEnvironmentModifiers const &);
    MCAPI void _maybeReplaceStairs(class Random &, class BlockSource &, class BlockPos, struct PortalEnvironmentModifiers const &);
    MCAPI void _moveStructureBoundsToSuitableY(class Random &, class BlockSource &, struct PortalEnvironmentModifiers const &);
    MCAPI void _spreadNetherrack(class Random &, class BlockSource &, struct PortalEnvironmentModifiers const &);
    MCAPI static class Block const & _getRandomFacingStairs(class Random &, class Block const &);
    MCAPI static bool _willLavaFlowIn(class BlockSource &, class BlockPos);

};