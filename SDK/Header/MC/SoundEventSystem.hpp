// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SoundEventSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SOUNDEVENTSYSTEM
public:
    class SoundEventSystem& operator=(class SoundEventSystem const &) = delete;
    SoundEventSystem(class SoundEventSystem const &) = delete;
    SoundEventSystem() = delete;
#endif

public:
    MCAPI static void _tick(class StrictEntityContext const &, class LevelComponent &, struct SoundEventRequestQueueComponent &);
    MCAPI static struct TickingSystemWithInfo create();

protected:

private:

};