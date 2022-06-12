// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LegacyFlowerFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYFLOWERFEATURE
public:
    class LegacyFlowerFeature& operator=(class LegacyFlowerFeature const &) = delete;
    LegacyFlowerFeature(class LegacyFlowerFeature const &) = delete;
    LegacyFlowerFeature() = delete;
#endif

public:
    /*0*/ virtual ~LegacyFlowerFeature();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    MCAPI LegacyFlowerFeature(enum FlowerPlacementType);

protected:

private:

};