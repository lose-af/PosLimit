// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ActorPropertiesDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORPROPERTIESDESCRIPTION
public:
    class ActorPropertiesDescription& operator=(class ActorPropertiesDescription const &) = delete;
    ActorPropertiesDescription(class ActorPropertiesDescription const &) = delete;
    ActorPropertiesDescription() = delete;
#endif

public:
    /*0*/ virtual ~ActorPropertiesDescription();
    /*1*/ virtual char const * getJsonName() const;
    /*
    inline  ~ActorPropertiesDescription(){
         (ActorPropertiesDescription::*rv)();
        *((void**)&rv) = dlsym("??1ActorPropertiesDescription@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI void parse(class Json::Value &);

protected:

private:

};