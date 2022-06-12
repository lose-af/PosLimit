// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptObject.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptBlockPermutation : public ScriptObject {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTBLOCKPERMUTATION
public:
    class ScriptBlockPermutation& operator=(class ScriptBlockPermutation const &) = delete;
    ScriptBlockPermutation(class ScriptBlockPermutation const &) = delete;
    ScriptBlockPermutation() = delete;
#endif

public:
    /*0*/ virtual ~ScriptBlockPermutation();
    /*
    inline  ~ScriptBlockPermutation(){
         (ScriptBlockPermutation::*rv)();
        *((void**)&rv) = dlsym("??1ScriptBlockPermutation@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI ScriptBlockPermutation(class ScriptBlockPermutation &&);
    MCAPI ScriptBlockPermutation(class Block const &, class Scripting::WeakLifetimeScope const &);
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptBlockPermutation> clone() const;
    MCAPI std::vector<class Scripting::StrongTypedObjectHandle<class IScriptBlockProperty>> getAllProperties();
    MCAPI class Block const & getBlock() const;
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class IScriptBlockProperty>> getProperty(std::string const &);
    MCAPI std::vector<std::string> getTags() const;
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptBlockType> getType() const;
    MCAPI bool hasTag(std::string const &) const;
    MCAPI class ScriptBlockPermutation & operator=(class ScriptBlockPermutation &&);
    MCAPI void setBlock(class Block const &);
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptBlockPermutation> bind(struct Scripting::Version);

protected:

private:
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class IScriptBlockProperty>> _createProperty(std::string const &);

};