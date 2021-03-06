// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScreenHandlerBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCREENHANDLERBASE
public:
    class ScreenHandlerBase& operator=(class ScreenHandlerBase const &) = delete;
    ScreenHandlerBase(class ScreenHandlerBase const &) = delete;
    ScreenHandlerBase() = delete;
#endif

public:
    /*0*/ virtual ~ScreenHandlerBase();
    /*
    inline enum ItemStackNetResult endRequest(){
        enum ItemStackNetResult (ScreenHandlerBase::*rv)();
        *((void**)&rv) = dlsym("?endRequest@ScreenHandlerBase@@UEAA?AW4ItemStackNetResult@@XZ");
        return (this->*rv)();
    }
    inline void postRequest(bool a0){
        void (ScreenHandlerBase::*rv)(bool);
        *((void**)&rv) = dlsym("?postRequest@ScreenHandlerBase@@UEAAX_N@Z");
        return (this->*rv)(std::forward<bool>(a0));
    }
    inline void endRequestBatch(){
        void (ScreenHandlerBase::*rv)();
        *((void**)&rv) = dlsym("?endRequestBatch@ScreenHandlerBase@@UEAAXXZ");
        return (this->*rv)();
    }
    inline enum ItemStackNetResult handleAction(class ItemStackRequestAction const & a0){
        enum ItemStackNetResult (ScreenHandlerBase::*rv)(class ItemStackRequestAction const &);
        *((void**)&rv) = dlsym("?handleAction@ScreenHandlerBase@@UEAA?AW4ItemStackNetResult@@AEBVItemStackRequestAction@@@Z");
        return (this->*rv)(std::forward<class ItemStackRequestAction const &>(a0));
    }
    inline  ~ScreenHandlerBase(){
         (ScreenHandlerBase::*rv)();
        *((void**)&rv) = dlsym("??1ScreenHandlerBase@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI ScreenHandlerBase(class ItemStackRequestActionHandler &);

protected:
    MCAPI class std::shared_ptr<class SimpleSparseContainer> _tryGetSparseContainer(enum ContainerEnumName);

private:

};