// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ITickingArea {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITICKINGAREA
public:
    class ITickingArea& operator=(class ITickingArea const &) = delete;
    ITickingArea(class ITickingArea const &) = delete;
    ITickingArea() = delete;
#endif

public:
    /*0*/ virtual ~ITickingArea();
    /*
    inline  ~ITickingArea(){
         (ITickingArea::*rv)();
        *((void**)&rv) = dlsym("??1ITickingArea@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI class CompoundTag serialize() const;

protected:

private:

};