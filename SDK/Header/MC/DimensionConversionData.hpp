// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DimensionConversionData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSIONCONVERSIONDATA
public:
    class DimensionConversionData& operator=(class DimensionConversionData const &) = delete;
    DimensionConversionData(class DimensionConversionData const &) = delete;
    DimensionConversionData() = delete;
#endif

public:
    MCAPI int getNetherScale() const;
    MCAPI class Vec3 const & getOverworldSpawnPoint() const;

protected:

private:

};