// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BlendingData {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLENDINGDATA
public:
    class BlendingData& operator=(class BlendingData const &) = delete;
    BlendingData(class BlendingData const &) = delete;
    BlendingData() = delete;
#endif

public:
    MCAPI class std::optional<unsigned char> getBiome(int, int, int) const;
    MCAPI class std::optional<float> getDensity(int, int, int) const;
    MCAPI class std::optional<short> getHeight(int, int) const;
    MCAPI bool hasBlendDataAt(int, int) const;

protected:

private:

};