// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AttributeCollection {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTRIBUTECOLLECTION
public:
    class AttributeCollection& operator=(class AttributeCollection const &) = delete;
    AttributeCollection(class AttributeCollection const &) = delete;
    AttributeCollection() = delete;
#endif

public:
    MCAPI static bool hasAttribute(class HashedString const &);

protected:

private:
    MCAPI class Attribute & getAttribute(class HashedString const &);
    MCAPI static class AttributeCollection & instance();

};