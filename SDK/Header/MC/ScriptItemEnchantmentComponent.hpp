// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptObject.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptItemEnchantmentComponent : public ScriptObject {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTITEMENCHANTMENTCOMPONENT
public:
    ScriptItemEnchantmentComponent() = delete;
#endif

public:
    /*0*/ virtual ~ScriptItemEnchantmentComponent();
    /*
    inline  ~ScriptItemEnchantmentComponent(){
         (ScriptItemEnchantmentComponent::*rv)();
        *((void**)&rv) = dlsym("??1ScriptItemEnchantmentComponent@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI ScriptItemEnchantmentComponent(class ScriptItemEnchantmentComponent const &);
    MCAPI ScriptItemEnchantmentComponent(class Scripting::WeakTypedObjectHandle<class ScriptItemStack>, class Scripting::WeakLifetimeScope const &);
    MCAPI class Scripting::Result<class ScriptItemEnchantments> getEnchantments() const;
    MCAPI class ScriptItemEnchantmentComponent & operator=(class ScriptItemEnchantmentComponent const &);
    MCAPI class Scripting::Result<void> removeAllEnchantments();
    MCAPI class Scripting::Result<void> setEnchantments(class ScriptItemEnchantments const &);
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptItemEnchantmentComponent> bind(struct Scripting::Version);
    MCAPI static std::string getTypeName();

protected:

private:

};