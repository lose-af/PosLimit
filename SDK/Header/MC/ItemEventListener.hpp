// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ItemEventListener {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMEVENTLISTENER
public:
    class ItemEventListener& operator=(class ItemEventListener const &) = delete;
    ItemEventListener(class ItemEventListener const &) = delete;
    ItemEventListener() = delete;
#endif

public:
    /*0*/ virtual ~ItemEventListener();
    /*
    inline enum EventResult onItemSelected(class ItemStackBase const & a0){
        enum EventResult (ItemEventListener::*rv)(class ItemStackBase const &);
        *((void**)&rv) = dlsym("?onItemSelected@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@@Z");
        return (this->*rv)(std::forward<class ItemStackBase const &>(a0));
    }
    inline enum EventResult onEvent(struct ItemNotificationEvent const & a0){
        enum EventResult (ItemEventListener::*rv)(struct ItemNotificationEvent const &);
        *((void**)&rv) = dlsym("?onEvent@ItemEventListener@@UEAA?AW4EventResult@@AEBUItemNotificationEvent@@@Z");
        return (this->*rv)(std::forward<struct ItemNotificationEvent const &>(a0));
    }
    inline enum EventResult onItemDefinitionEventTriggered(class ItemStackBase const & a0, std::string const & a1){
        enum EventResult (ItemEventListener::*rv)(class ItemStackBase const &, std::string const &);
        *((void**)&rv) = dlsym("?onItemDefinitionEventTriggered@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<class ItemStackBase const &>(a0), std::forward<std::string const &>(a1));
    }
    inline enum EventResult onInventoryLayoutSelected(int a0, int a1){
        enum EventResult (ItemEventListener::*rv)(int, int);
        *((void**)&rv) = dlsym("?onInventoryLayoutSelected@ItemEventListener@@UEAA?AW4EventResult@@HH@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<int>(a1));
    }
    inline enum EventResult onItemSpawningActor(class Actor const & a0){
        enum EventResult (ItemEventListener::*rv)(class Actor const &);
        *((void**)&rv) = dlsym("?onItemSpawningActor@ItemEventListener@@UEAA?AW4EventResult@@AEBVActor@@@Z");
        return (this->*rv)(std::forward<class Actor const &>(a0));
    }
    inline enum EventResult onInventoryItemCraftedAutomaticallyByRecipe(class ItemStackBase const & a0){
        enum EventResult (ItemEventListener::*rv)(class ItemStackBase const &);
        *((void**)&rv) = dlsym("?onInventoryItemCraftedAutomaticallyByRecipe@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@@Z");
        return (this->*rv)(std::forward<class ItemStackBase const &>(a0));
    }
    inline enum EventResult onPreviewItemPopulatedInContainer(class ItemStackBase const & a0, std::string const & a1){
        enum EventResult (ItemEventListener::*rv)(class ItemStackBase const &, std::string const &);
        *((void**)&rv) = dlsym("?onPreviewItemPopulatedInContainer@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<class ItemStackBase const &>(a0), std::forward<std::string const &>(a1));
    }
    inline enum EventResult onItemTransferredFromContainer(class ItemStackBase const & a0, std::string const & a1){
        enum EventResult (ItemEventListener::*rv)(class ItemStackBase const &, std::string const &);
        *((void**)&rv) = dlsym("?onItemTransferredFromContainer@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<class ItemStackBase const &>(a0), std::forward<std::string const &>(a1));
    }
    inline enum EventResult onItemTransferredToContainer(class ItemStackBase const & a0, std::string const & a1){
        enum EventResult (ItemEventListener::*rv)(class ItemStackBase const &, std::string const &);
        *((void**)&rv) = dlsym("?onItemTransferredToContainer@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<class ItemStackBase const &>(a0), std::forward<std::string const &>(a1));
    }
    inline enum EventResult onItemSelectedSlot(int a0){
        enum EventResult (ItemEventListener::*rv)(int);
        *((void**)&rv) = dlsym("?onItemSelectedSlot@ItemEventListener@@UEAA?AW4EventResult@@H@Z");
        return (this->*rv)(std::forward<int>(a0));
    }
    inline enum EventResult onItemModifiedActor(class ItemStackBase const & a0, class Actor const & a1){
        enum EventResult (ItemEventListener::*rv)(class ItemStackBase const &, class Actor const &);
        *((void**)&rv) = dlsym("?onItemModifiedActor@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@AEBVActor@@@Z");
        return (this->*rv)(std::forward<class ItemStackBase const &>(a0), std::forward<class Actor const &>(a1));
    }
    inline enum EventResult onItemSpawnedActor(class ItemStackBase const & a0, class Actor const & a1){
        enum EventResult (ItemEventListener::*rv)(class ItemStackBase const &, class Actor const &);
        *((void**)&rv) = dlsym("?onItemSpawnedActor@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@AEBVActor@@@Z");
        return (this->*rv)(std::forward<class ItemStackBase const &>(a0), std::forward<class Actor const &>(a1));
    }
    inline enum EventResult onInventoryItemOpened(bool a0){
        enum EventResult (ItemEventListener::*rv)(bool);
        *((void**)&rv) = dlsym("?onInventoryItemOpened@ItemEventListener@@UEAA?AW4EventResult@@_N@Z");
        return (this->*rv)(std::forward<bool>(a0));
    }
    inline enum EventResult onItemSmelted(class Player & a0, class ItemDescriptor const & a1, class ItemDescriptor const & a2){
        enum EventResult (ItemEventListener::*rv)(class Player &, class ItemDescriptor const &, class ItemDescriptor const &);
        *((void**)&rv) = dlsym("?onItemSmelted@ItemEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVItemDescriptor@@1@Z");
        return (this->*rv)(std::forward<class Player &>(a0), std::forward<class ItemDescriptor const &>(a1), std::forward<class ItemDescriptor const &>(a2));
    }
    inline enum EventResult onInventoryItemClosed(){
        enum EventResult (ItemEventListener::*rv)();
        *((void**)&rv) = dlsym("?onInventoryItemClosed@ItemEventListener@@UEAA?AW4EventResult@@XZ");
        return (this->*rv)();
    }
    inline enum EventResult onRecipeSelected(class ItemStackBase const & a0){
        enum EventResult (ItemEventListener::*rv)(class ItemStackBase const &);
        *((void**)&rv) = dlsym("?onRecipeSelected@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@@Z");
        return (this->*rv)(std::forward<class ItemStackBase const &>(a0));
    }
    */

protected:

private:

};