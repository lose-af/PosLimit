// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BehaviorNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEHAVIORNODE
public:
    class BehaviorNode& operator=(class BehaviorNode const &) = delete;
    BehaviorNode(class BehaviorNode const &) = delete;
#endif

public:
    /*0*/ virtual ~BehaviorNode();
    /*
    inline void initializeFromDefinition(class Actor & a0){
        void (BehaviorNode::*rv)(class Actor &);
        *((void**)&rv) = dlsym("?initializeFromDefinition@BehaviorNode@@MEAAXAEAVActor@@@Z");
        return (this->*rv)(std::forward<class Actor &>(a0));
    }
    inline  ~BehaviorNode(){
         (BehaviorNode::*rv)();
        *((void**)&rv) = dlsym("??1BehaviorNode@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI BehaviorNode();
    MCAPI class BehaviorData & getBehaviorData();

protected:

private:

};