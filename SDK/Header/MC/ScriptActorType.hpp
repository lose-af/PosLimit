// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptActorType {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTACTORTYPE
public:
    class ScriptActorType& operator=(class ScriptActorType const &) = delete;
    ScriptActorType(class ScriptActorType const &) = delete;
    ScriptActorType() = delete;
#endif

public:
    MCAPI ScriptActorType(class ActorDefinition &);
    MCAPI std::string getId() const;
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptActorType> bind(struct Scripting::Version);

protected:

private:

};