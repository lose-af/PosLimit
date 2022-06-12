// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RideableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RIDEABLEDEFINITION
public:
    class RideableDefinition& operator=(class RideableDefinition const &) = delete;
    RideableDefinition(class RideableDefinition const &) = delete;
    RideableDefinition() = delete;
#endif

public:
    MCAPI void addFamilyTypeByName(std::string const &);
    MCAPI void initialize(class EntityContext &, class RideableComponent &);
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class RideableDefinition>> &);

protected:

private:

};