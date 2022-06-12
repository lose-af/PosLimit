// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class GameTestInstanceLedger {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETESTINSTANCELEDGER
public:
    class GameTestInstanceLedger& operator=(class GameTestInstanceLedger const &) = delete;
    GameTestInstanceLedger(class GameTestInstanceLedger const &) = delete;
    GameTestInstanceLedger() = delete;
#endif

public:
    /*0*/ virtual ~GameTestInstanceLedger();
    /*1*/ virtual void onTestStructureLoaded(class gametest::BaseGameTestInstance &);
    MCAPI void clear(class AutomaticID<class Dimension, int>);

protected:

private:
    MCAPI static std::string const GAME_TEST_INSTANCE_PREFIX;

};