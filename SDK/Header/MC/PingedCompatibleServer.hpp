// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

struct PingedCompatibleServer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PINGEDCOMPATIBLESERVER
public:
    struct PingedCompatibleServer& operator=(struct PingedCompatibleServer const &) = delete;
    PingedCompatibleServer() = delete;
#endif

public:
    MCAPI PingedCompatibleServer(struct PingedCompatibleServer const &);
    MCAPI PingedCompatibleServer(struct PingedCompatibleServer &&);
    MCAPI struct PingedCompatibleServer & operator=(struct PingedCompatibleServer &&);
    MCAPI ~PingedCompatibleServer();

protected:

private:

};