// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ActorTypeTracker {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORTYPETRACKER
public:
    class ActorTypeTracker& operator=(class ActorTypeTracker const &) = delete;
    ActorTypeTracker(class ActorTypeTracker const &) = delete;
#endif

public:
    MCAPI ActorTypeTracker();
    MCAPI void markSeenType(class Actor const &);
    MCAPI bool shouldSendPropertyUpdate(class Actor const &);
    MCAPI ~ActorTypeTracker();

protected:

private:

};