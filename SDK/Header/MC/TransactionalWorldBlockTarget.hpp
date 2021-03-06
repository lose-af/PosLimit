// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TransactionalWorldBlockTarget {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRANSACTIONALWORLDBLOCKTARGET
public:
    class TransactionalWorldBlockTarget& operator=(class TransactionalWorldBlockTarget const &) = delete;
    TransactionalWorldBlockTarget(class TransactionalWorldBlockTarget const &) = delete;
    TransactionalWorldBlockTarget() = delete;
#endif

public:
    /*0*/ virtual ~TransactionalWorldBlockTarget();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual class Block const & getBlock(class BlockPos const &) const;
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual class gsl::span<class BlockDataFetchResult<class Block> const, -1> fetchBlocksInBox(class BoundingBox const &, class std::function<bool (class Block const &)>);
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual bool setBlock(class BlockPos const &, class Block const &, int);
    /*10*/ virtual void __unk_vfn_10();
    /*11*/ virtual bool apply() const;
    /*12*/ virtual bool placeStructure(class BlockPos const &, class StructureTemplate &, class StructureSettings &);
    /*13*/ virtual bool mayPlace(class BlockPos const &, class Block const &) const;
    /*14*/ virtual void __unk_vfn_14();
    /*15*/ virtual void __unk_vfn_15();
    /*16*/ virtual short getMinHeight() const;
    /*17*/ virtual void __unk_vfn_17();
    /*18*/ virtual void __unk_vfn_18();
    /*19*/ virtual void __unk_vfn_19();
    /*20*/ virtual void __unk_vfn_20();
    /*21*/ virtual bool isInBounds(class Pos const &) const;
    /*22*/ virtual void __unk_vfn_22();
    /*23*/ virtual class LevelData const & getLevelData() const;
    /*24*/ virtual struct WorldGenContext const & getContext();
    /*
    inline bool shimPlaceForOldFeatures(class Feature const & a0, class BlockPos const & a1, class Random & a2) const{
        bool (TransactionalWorldBlockTarget::*rv)(class Feature const &, class BlockPos const &, class Random &) const;
        *((void**)&rv) = dlsym("?shimPlaceForOldFeatures@TransactionalWorldBlockTarget@@UEBA_NAEBVFeature@@AEBVBlockPos@@AEAVRandom@@@Z");
        return (this->*rv)(std::forward<class Feature const &>(a0), std::forward<class BlockPos const &>(a1), std::forward<class Random &>(a2));
    }
    inline void disableBlockSimple(){
        void (TransactionalWorldBlockTarget::*rv)();
        *((void**)&rv) = dlsym("?disableBlockSimple@TransactionalWorldBlockTarget@@UEAAXXZ");
        return (this->*rv)();
    }
    inline bool hasBiomeTag(unsigned __int64 a0, class BlockPos const & a1) const{
        bool (TransactionalWorldBlockTarget::*rv)(unsigned __int64, class BlockPos const &) const;
        *((void**)&rv) = dlsym("?hasBiomeTag@TransactionalWorldBlockTarget@@UEBA_N_KAEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<unsigned __int64>(a0), std::forward<class BlockPos const &>(a1));
    }
    inline class Block const & getBlockNoBoundsCheck(class BlockPos const & a0) const{
        class Block const & (TransactionalWorldBlockTarget::*rv)(class BlockPos const &) const;
        *((void**)&rv) = dlsym("?getBlockNoBoundsCheck@TransactionalWorldBlockTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockPos const &>(a0));
    }
    inline class Block const * tryGetLiquidBlock(class BlockPos const & a0) const{
        class Block const * (TransactionalWorldBlockTarget::*rv)(class BlockPos const &) const;
        *((void**)&rv) = dlsym("?tryGetLiquidBlock@TransactionalWorldBlockTarget@@UEBAPEBVBlock@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockPos const &>(a0));
    }
    inline class Biome const * getBiome(class BlockPos const & a0) const{
        class Biome const * (TransactionalWorldBlockTarget::*rv)(class BlockPos const &) const;
        *((void**)&rv) = dlsym("?getBiome@TransactionalWorldBlockTarget@@UEBAPEBVBiome@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockPos const &>(a0));
    }
    inline  ~TransactionalWorldBlockTarget(){
         (TransactionalWorldBlockTarget::*rv)();
        *((void**)&rv) = dlsym("??1TransactionalWorldBlockTarget@@UEAA@XZ");
        return (this->*rv)();
    }
    inline bool canSurvive(class BlockPos const & a0, class Block const & a1) const{
        bool (TransactionalWorldBlockTarget::*rv)(class BlockPos const &, class Block const &) const;
        *((void**)&rv) = dlsym("?canSurvive@TransactionalWorldBlockTarget@@UEBA_NAEBVBlockPos@@AEBVBlock@@@Z");
        return (this->*rv)(std::forward<class BlockPos const &>(a0), std::forward<class Block const &>(a1));
    }
    inline class Block const & getExtraBlock(class BlockPos const & a0) const{
        class Block const & (TransactionalWorldBlockTarget::*rv)(class BlockPos const &) const;
        *((void**)&rv) = dlsym("?getExtraBlock@TransactionalWorldBlockTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockPos const &>(a0));
    }
    inline short getHeightmap(int a0, int a1){
        short (TransactionalWorldBlockTarget::*rv)(int, int);
        *((void**)&rv) = dlsym("?getHeightmap@TransactionalWorldBlockTarget@@UEAAFHH@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<int>(a1));
    }
    inline short getLocalWaterLevel(class BlockPos const & a0) const{
        short (TransactionalWorldBlockTarget::*rv)(class BlockPos const &) const;
        *((void**)&rv) = dlsym("?getLocalWaterLevel@TransactionalWorldBlockTarget@@UEBAFAEBVBlockPos@@@Z");
        return (this->*rv)(std::forward<class BlockPos const &>(a0));
    }
    inline short getMaxHeight() const{
        short (TransactionalWorldBlockTarget::*rv)() const;
        *((void**)&rv) = dlsym("?getMaxHeight@TransactionalWorldBlockTarget@@UEBAFXZ");
        return (this->*rv)();
    }
    inline bool isLegacyLevel(){
        bool (TransactionalWorldBlockTarget::*rv)();
        *((void**)&rv) = dlsym("?isLegacyLevel@TransactionalWorldBlockTarget@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline bool setBlockSimple(class BlockPos const & a0, class Block const & a1){
        bool (TransactionalWorldBlockTarget::*rv)(class BlockPos const &, class Block const &);
        *((void**)&rv) = dlsym("?setBlockSimple@TransactionalWorldBlockTarget@@UEAA_NAEBVBlockPos@@AEBVBlock@@@Z");
        return (this->*rv)(std::forward<class BlockPos const &>(a0), std::forward<class Block const &>(a1));
    }
    */
    MCAPI TransactionalWorldBlockTarget(class IBlockWorldGenAPI &);

protected:

private:

};