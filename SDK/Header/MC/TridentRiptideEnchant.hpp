// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Enchant.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TridentRiptideEnchant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIDENTRIPTIDEENCHANT
public:
    class TridentRiptideEnchant& operator=(class TridentRiptideEnchant const &) = delete;
    TridentRiptideEnchant(class TridentRiptideEnchant const &) = delete;
    TridentRiptideEnchant() = delete;
#endif

public:
    /*0*/ virtual ~TridentRiptideEnchant();
    /*1*/ virtual bool isCompatibleWith(enum Enchant::Type) const;
    /*2*/ virtual int getMinCost(int) const;
    /*
    inline int getMaxCost(int a0) const{
        int (TridentRiptideEnchant::*rv)(int) const;
        *((void**)&rv) = dlsym("?getMaxCost@TridentRiptideEnchant@@UEBAHH@Z");
        return (this->*rv)(std::forward<int>(a0));
    }
    inline int getMaxLevel() const{
        int (TridentRiptideEnchant::*rv)() const;
        *((void**)&rv) = dlsym("?getMaxLevel@TridentRiptideEnchant@@UEBAHXZ");
        return (this->*rv)();
    }
    */

protected:

private:

};