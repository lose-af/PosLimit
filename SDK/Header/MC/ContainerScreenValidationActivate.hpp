// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerScreenValidation.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ContainerScreenValidationActivate : public ContainerScreenValidation {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERSCREENVALIDATIONACTIVATE
public:
    class ContainerScreenValidationActivate& operator=(class ContainerScreenValidationActivate const &) = delete;
    ContainerScreenValidationActivate(class ContainerScreenValidationActivate const &) = delete;
    ContainerScreenValidationActivate() = delete;
#endif

public:
    /*0*/ virtual ~ContainerScreenValidationActivate();
    /*
    inline struct ContainerValidationResult tryActivate(){
        struct ContainerValidationResult (ContainerScreenValidationActivate::*rv)();
        *((void**)&rv) = dlsym("?tryActivate@ContainerScreenValidationActivate@@EEAA?AUContainerValidationResult@@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};