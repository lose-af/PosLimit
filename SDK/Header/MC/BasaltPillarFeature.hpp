// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BasaltPillarFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASALTPILLARFEATURE
public:
    class BasaltPillarFeature& operator=(class BasaltPillarFeature const &) = delete;
    BasaltPillarFeature(class BasaltPillarFeature const &) = delete;
    BasaltPillarFeature() = delete;
#endif

public:
    /*0*/ virtual ~BasaltPillarFeature();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

protected:

private:
    MCAPI bool _growColumn(class BlockSource &, class BlockPos const &, class Random &, float) const;

};