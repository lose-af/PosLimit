// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ServerNetworkEventListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERNETWORKEVENTLISTENER
public:
    class ServerNetworkEventListener& operator=(class ServerNetworkEventListener const &) = delete;
    ServerNetworkEventListener(class ServerNetworkEventListener const &) = delete;
    ServerNetworkEventListener() = delete;
#endif

public:
    /*0*/ virtual ~ServerNetworkEventListener();
    /*
    inline enum EventResult onEvent(struct ServerNetworkGameplayNotificationEvent const & a0){
        enum EventResult (ServerNetworkEventListener::*rv)(struct ServerNetworkGameplayNotificationEvent const &);
        *((void**)&rv) = dlsym("?onEvent@ServerNetworkEventListener@@UEAA?AW4EventResult@@AEBUServerNetworkGameplayNotificationEvent@@@Z");
        return (this->*rv)(std::forward<struct ServerNetworkGameplayNotificationEvent const &>(a0));
    }
    inline enum EventResult onMessage(struct MessageEvent const & a0){
        enum EventResult (ServerNetworkEventListener::*rv)(struct MessageEvent const &);
        *((void**)&rv) = dlsym("?onMessage@ServerNetworkEventListener@@UEAA?AW4EventResult@@AEBUMessageEvent@@@Z");
        return (this->*rv)(std::forward<struct MessageEvent const &>(a0));
    }
    */

protected:

private:

};