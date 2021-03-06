// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class JumpControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JUMPCONTROL
public:
    class JumpControl& operator=(class JumpControl const &) = delete;
    JumpControl(class JumpControl const &) = delete;
#endif

public:
    /*0*/ virtual ~JumpControl();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void tick(class JumpControlComponent &, class Mob &);
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual float getJumpPower(class JumpControlComponent const &, class Mob const &) const;
    /*
    inline enum JumpType getJumpType(class JumpControlComponent const & a0, class Mob const & a1) const{
        enum JumpType (JumpControl::*rv)(class JumpControlComponent const &, class Mob const &) const;
        *((void**)&rv) = dlsym("?getJumpType@JumpControl@@MEBA?AW4JumpType@@AEBVJumpControlComponent@@AEBVMob@@@Z");
        return (this->*rv)(std::forward<class JumpControlComponent const &>(a0), std::forward<class Mob const &>(a1));
    }
    inline int getJumpDelay(class JumpControlComponent const & a0, class Mob const & a1) const{
        int (JumpControl::*rv)(class JumpControlComponent const &, class Mob const &) const;
        *((void**)&rv) = dlsym("?getJumpDelay@JumpControl@@MEBAHAEBVJumpControlComponent@@AEBVMob@@@Z");
        return (this->*rv)(std::forward<class JumpControlComponent const &>(a0), std::forward<class Mob const &>(a1));
    }
    inline void setJumpType(class JumpControlComponent & a0, class Mob & a1, enum JumpType a2){
        void (JumpControl::*rv)(class JumpControlComponent &, class Mob &, enum JumpType);
        *((void**)&rv) = dlsym("?setJumpType@JumpControl@@MEAAXAEAVJumpControlComponent@@AEAVMob@@W4JumpType@@@Z");
        return (this->*rv)(std::forward<class JumpControlComponent &>(a0), std::forward<class Mob &>(a1), std::forward<enum JumpType>(a2));
    }
    inline void resetSpeedModifier(class JumpControlComponent const & a0, class Mob & a1){
        void (JumpControl::*rv)(class JumpControlComponent const &, class Mob &);
        *((void**)&rv) = dlsym("?resetSpeedModifier@JumpControl@@MEAAXAEBVJumpControlComponent@@AEAVMob@@@Z");
        return (this->*rv)(std::forward<class JumpControlComponent const &>(a0), std::forward<class Mob &>(a1));
    }
    inline void initializeInternal(class Mob & a0, struct JumpControlDescription * a1){
        void (JumpControl::*rv)(class Mob &, struct JumpControlDescription *);
        *((void**)&rv) = dlsym("?initializeInternal@JumpControl@@UEAAXAEAVMob@@PEAUJumpControlDescription@@@Z");
        return (this->*rv)(std::forward<class Mob &>(a0), std::forward<struct JumpControlDescription *>(a1));
    }
    inline  ~JumpControl(){
         (JumpControl::*rv)();
        *((void**)&rv) = dlsym("??1JumpControl@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI JumpControl();

protected:

private:

};