// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PerfTimer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERFTIMER
public:
    class PerfTimer& operator=(class PerfTimer const &) = delete;
    PerfTimer(class PerfTimer const &) = delete;
    PerfTimer() = delete;
#endif

public:
    MCAPI PerfTimer(class std::thread::id);
    MCAPI ~PerfTimer();
    MCAPI static bool mEnabled;
    MCAPI static class Bedrock::Threading::ThreadLocalObject<class PerfTimer, class std::allocator<class PerfTimer>> test;

protected:
    MCAPI static int const *const MultiplyDeBruijnBitPosition;
    MCAPI static class Core::PathBuffer<std::string> mPath;

private:

};