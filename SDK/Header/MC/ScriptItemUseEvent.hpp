// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct ScriptItemUseEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTITEMUSEEVENT
public:
    ScriptItemUseEvent(struct ScriptItemUseEvent const &) = delete;
    ScriptItemUseEvent() = delete;
#endif

public:
    MCAPI ScriptItemUseEvent(class Scripting::StrongTypedObjectHandle<class ScriptItemStack>, struct ItemUseEvent const &, class Scripting::WeakLifetimeScope const &);
    MCAPI struct ScriptItemUseEvent & operator=(struct ScriptItemUseEvent &&);
    MCAPI struct ScriptItemUseEvent & operator=(struct ScriptItemUseEvent const &);

protected:

private:

};