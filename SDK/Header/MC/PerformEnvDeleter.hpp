// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct PerformEnvDeleter {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERFORMENVDELETER
public:
    struct PerformEnvDeleter& operator=(struct PerformEnvDeleter const &) = delete;
    PerformEnvDeleter(struct PerformEnvDeleter const &) = delete;
    PerformEnvDeleter() = delete;
#endif

public:
    MCAPI void operator()(struct HC_PERFORM_ENV *);

protected:

private:

};