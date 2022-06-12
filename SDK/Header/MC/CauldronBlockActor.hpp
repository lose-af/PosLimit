// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Potion.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CauldronBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAULDRONBLOCKACTOR
public:
    class CauldronBlockActor& operator=(class CauldronBlockActor const &) = delete;
    CauldronBlockActor(class CauldronBlockActor const &) = delete;
    CauldronBlockActor() = delete;
#endif

public:
    /*
    inline void startOpen(class Player & a0){
        void (CauldronBlockActor::*rv)(class Player &);
        *((void**)&rv) = dlsym("?startOpen@CauldronBlockActor@@UEAAXAEAVPlayer@@@Z");
        return (this->*rv)(std::forward<class Player &>(a0));
    }
    inline void stopOpen(class Player & a0){
        void (CauldronBlockActor::*rv)(class Player &);
        *((void**)&rv) = dlsym("?stopOpen@CauldronBlockActor@@UEAAXAEAVPlayer@@@Z");
        return (this->*rv)(std::forward<class Player &>(a0));
    }
    inline void onChanged(class BlockSource & a0){
        void (CauldronBlockActor::*rv)(class BlockSource &);
        *((void**)&rv) = dlsym("?onChanged@CauldronBlockActor@@UEAAXAEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0));
    }
    inline int getContainerSize() const{
        int (CauldronBlockActor::*rv)() const;
        *((void**)&rv) = dlsym("?getContainerSize@CauldronBlockActor@@UEBAHXZ");
        return (this->*rv)();
    }
    inline int getMaxStackSize() const{
        int (CauldronBlockActor::*rv)() const;
        *((void**)&rv) = dlsym("?getMaxStackSize@CauldronBlockActor@@UEBAHXZ");
        return (this->*rv)();
    }
    inline std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource & a0){
        std::unique_ptr<class BlockActorDataPacket> (CauldronBlockActor::*rv)(class BlockSource &);
        *((void**)&rv) = dlsym("?_getUpdatePacket@CauldronBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0));
    }
    inline void _onUpdatePacket(class CompoundTag const & a0, class BlockSource & a1){
        void (CauldronBlockActor::*rv)(class CompoundTag const &, class BlockSource &);
        *((void**)&rv) = dlsym("?_onUpdatePacket@CauldronBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class CompoundTag const &>(a0), std::forward<class BlockSource &>(a1));
    }
    inline class Container const * getContainer() const{
        class Container const * (CauldronBlockActor::*rv)() const;
        *((void**)&rv) = dlsym("?getContainer@CauldronBlockActor@@UEBAPEBVContainer@@XZ");
        return (this->*rv)();
    }
    inline class Container * getContainer(){
        class Container * (CauldronBlockActor::*rv)();
        *((void**)&rv) = dlsym("?getContainer@CauldronBlockActor@@UEAAPEAVContainer@@XZ");
        return (this->*rv)();
    }
    inline class ItemStack const & getItem(int a0) const{
        class ItemStack const & (CauldronBlockActor::*rv)(int) const;
        *((void**)&rv) = dlsym("?getItem@CauldronBlockActor@@UEBAAEBVItemStack@@H@Z");
        return (this->*rv)(std::forward<int>(a0));
    }
    inline std::string getName() const{
        std::string (CauldronBlockActor::*rv)() const;
        *((void**)&rv) = dlsym("?getName@CauldronBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
        return (this->*rv)();
    }
    inline void load(class Level & a0, class CompoundTag const & a1, class DataLoadHelper & a2){
        void (CauldronBlockActor::*rv)(class Level &, class CompoundTag const &, class DataLoadHelper &);
        *((void**)&rv) = dlsym("?load@CauldronBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z");
        return (this->*rv)(std::forward<class Level &>(a0), std::forward<class CompoundTag const &>(a1), std::forward<class DataLoadHelper &>(a2));
    }
    inline bool save(class CompoundTag & a0) const{
        bool (CauldronBlockActor::*rv)(class CompoundTag &) const;
        *((void**)&rv) = dlsym("?save@CauldronBlockActor@@UEBA_NAEAVCompoundTag@@@Z");
        return (this->*rv)(std::forward<class CompoundTag &>(a0));
    }
    inline void serverInitItemStackIds(int a0, int a1, class std::function<void (int, class ItemStack const &)> a2){
        void (CauldronBlockActor::*rv)(int, int, class std::function<void (int, class ItemStack const &)>);
        *((void**)&rv) = dlsym("?serverInitItemStackIds@CauldronBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<int>(a1), std::forward<class std::function<void (int, class ItemStack const &)>>(a2));
    }
    inline void setItem(int a0, class ItemStack const & a1){
        void (CauldronBlockActor::*rv)(int, class ItemStack const &);
        *((void**)&rv) = dlsym("?setItem@CauldronBlockActor@@UEAAXHAEBVItemStack@@@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<class ItemStack const &>(a1));
    }
    inline void tick(class BlockSource & a0){
        void (CauldronBlockActor::*rv)(class BlockSource &);
        *((void**)&rv) = dlsym("?tick@CauldronBlockActor@@UEAAXAEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0));
    }
    */
    MCAPI class mce::Color getColor() const;
    MCAPI class mce::Color getCustomColor() const;
    MCAPI class mce::Color getMixDyeColor();
    MCAPI class mce::Color getPotionColor() const;
    MCAPI enum Potion::PotionType getPotionType() const;
    MCAPI void mixDyes();
    MCAPI void setCustomColor(class mce::Color const &);
    MCAPI void setPotionType(enum Potion::PotionType);
    MCAPI static class mce::Color WATER_COLOR;

protected:

private:

};