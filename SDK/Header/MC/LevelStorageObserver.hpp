// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LevelStorageObserver {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSTORAGEOBSERVER
public:
    class LevelStorageObserver& operator=(class LevelStorageObserver const &) = delete;
    LevelStorageObserver(class LevelStorageObserver const &) = delete;
    LevelStorageObserver() = delete;
#endif

public:
    MCAPI void onSave(std::string const &);

protected:

private:

};