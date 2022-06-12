// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class OverworldGenerator {

#define AFTER_EXTRA
// Add Member There
public:
struct ThreadData {
    ThreadData() = delete;
    ThreadData(ThreadData const&) = delete;
    ThreadData(ThreadData const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OVERWORLDGENERATOR
public:
    class OverworldGenerator& operator=(class OverworldGenerator const &) = delete;
    OverworldGenerator(class OverworldGenerator const &) = delete;
    OverworldGenerator() = delete;
#endif

public:
    /*
    inline  ~OverworldGenerator(){
         (OverworldGenerator::*rv)();
        *((void**)&rv) = dlsym("??1OverworldGenerator@@UEAA@XZ");
        return (this->*rv)();
    }
    inline class ChunkLocalNoiseCache createNoiseCache(class ChunkPos a0) const{
        class ChunkLocalNoiseCache (OverworldGenerator::*rv)(class ChunkPos) const;
        *((void**)&rv) = dlsym("?createNoiseCache@OverworldGenerator@@MEBA?AVChunkLocalNoiseCache@@VChunkPos@@@Z");
        return (this->*rv)(std::forward<class ChunkPos>(a0));
    }
    inline class WorldGenCache createWorldGenCache(class ChunkPos a0) const{
        class WorldGenCache (OverworldGenerator::*rv)(class ChunkPos) const;
        *((void**)&rv) = dlsym("?createWorldGenCache@OverworldGenerator@@MEBA?AVWorldGenCache@@VChunkPos@@@Z");
        return (this->*rv)(std::forward<class ChunkPos>(a0));
    }
    inline void decorateWorldGenLoadChunk(class Biome & a0, class LevelChunk & a1, class BlockVolumeTarget & a2, class Random & a3, class ChunkPos const & a4) const{
        void (OverworldGenerator::*rv)(class Biome &, class LevelChunk &, class BlockVolumeTarget &, class Random &, class ChunkPos const &) const;
        *((void**)&rv) = dlsym("?decorateWorldGenLoadChunk@OverworldGenerator@@MEBAXAEAVBiome@@AEAVLevelChunk@@AEAVBlockVolumeTarget@@AEAVRandom@@AEBVChunkPos@@@Z");
        return (this->*rv)(std::forward<class Biome &>(a0), std::forward<class LevelChunk &>(a1), std::forward<class BlockVolumeTarget &>(a2), std::forward<class Random &>(a3), std::forward<class ChunkPos const &>(a4));
    }
    inline std::unique_ptr<class Aquifer> tryMakeAquifer(class ChunkPos const & a0, class SurfaceLevelCache const & a1, short a2, short a3, short a4) const{
        std::unique_ptr<class Aquifer> (OverworldGenerator::*rv)(class ChunkPos const &, class SurfaceLevelCache const &, short, short, short) const;
        *((void**)&rv) = dlsym("?tryMakeAquifer@OverworldGenerator@@MEBA?AV?$unique_ptr@VAquifer@@U?$default_delete@VAquifer@@@std@@@std@@AEBVChunkPos@@AEBVSurfaceLevelCache@@FFF@Z");
        return (this->*rv)(std::forward<class ChunkPos const &>(a0), std::forward<class SurfaceLevelCache const &>(a1), std::forward<short>(a2), std::forward<short>(a3), std::forward<short>(a4));
    }
    inline class BiomeArea getBiomeArea(class BoundingBox const & a0, unsigned int a1) const{
        class BiomeArea (OverworldGenerator::*rv)(class BoundingBox const &, unsigned int) const;
        *((void**)&rv) = dlsym("?getBiomeArea@OverworldGenerator@@UEBA?AVBiomeArea@@AEBVBoundingBox@@I@Z");
        return (this->*rv)(std::forward<class BoundingBox const &>(a0), std::forward<unsigned int>(a1));
    }
    inline struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const{
        struct WorldGenerator::BlockVolumeDimensions (OverworldGenerator::*rv)() const;
        *((void**)&rv) = dlsym("?getBlockVolumeDimensions@OverworldGenerator@@UEBA?AUBlockVolumeDimensions@WorldGenerator@@XZ");
        return (this->*rv)();
    }
    inline void loadChunk(class LevelChunk & a0, bool a1){
        void (OverworldGenerator::*rv)(class LevelChunk &, bool);
        *((void**)&rv) = dlsym("?loadChunk@OverworldGenerator@@UEAAXAEAVLevelChunk@@_N@Z");
        return (this->*rv)(std::forward<class LevelChunk &>(a0), std::forward<bool>(a1));
    }
    inline bool postProcess(class ChunkViewSource & a0){
        bool (OverworldGenerator::*rv)(class ChunkViewSource &);
        *((void**)&rv) = dlsym("?postProcess@OverworldGenerator@@UEAA_NAEAVChunkViewSource@@@Z");
        return (this->*rv)(std::forward<class ChunkViewSource &>(a0));
    }
    inline void prepareAndComputeHeights(class BlockVolume & a0, class ChunkPos const & a1, std::vector<short> & a2, bool a3, int a4){
        void (OverworldGenerator::*rv)(class BlockVolume &, class ChunkPos const &, std::vector<short> &, bool, int);
        *((void**)&rv) = dlsym("?prepareAndComputeHeights@OverworldGenerator@@UEAAXAEAVBlockVolume@@AEBVChunkPos@@AEAV?$vector@FV?$allocator@F@std@@@std@@_NH@Z");
        return (this->*rv)(std::forward<class BlockVolume &>(a0), std::forward<class ChunkPos const &>(a1), std::forward<std::vector<short> &>(a2), std::forward<bool>(a3), std::forward<int>(a4));
    }
    inline void prepareHeights(class BlockVolume & a0, class ChunkPos const & a1, bool a2){
        void (OverworldGenerator::*rv)(class BlockVolume &, class ChunkPos const &, bool);
        *((void**)&rv) = dlsym("?prepareHeights@OverworldGenerator@@UEAAXAEAVBlockVolume@@AEBVChunkPos@@_N@Z");
        return (this->*rv)(std::forward<class BlockVolume &>(a0), std::forward<class ChunkPos const &>(a1), std::forward<bool>(a2));
    }
    */
    MCAPI OverworldGenerator(class Dimension &, bool, std::unique_ptr<class StructureFeatureRegistry>);
    MCAPI void buildSurfaces(struct OverworldGenerator::ThreadData &, class BlockVolume &, class LevelChunk &, class ChunkPos const &, class SurfaceLevelCache const &);

protected:

private:

};