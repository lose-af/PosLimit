// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptActorComponent.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptIsBabyComponent : public ScriptActorComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTISBABYCOMPONENT
public:
    class ScriptIsBabyComponent& operator=(class ScriptIsBabyComponent const &) = delete;
    ScriptIsBabyComponent(class ScriptIsBabyComponent const &) = delete;
    ScriptIsBabyComponent() = delete;
#endif

public:
    /*0*/ virtual ~ScriptIsBabyComponent();
    /*
    inline  ~ScriptIsBabyComponent(){
         (ScriptIsBabyComponent::*rv)();
        *((void**)&rv) = dlsym("??1ScriptIsBabyComponent@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI static class HashedString const & getHashedName();

protected:

private:

};