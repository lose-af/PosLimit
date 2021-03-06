// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Npc : public Mob {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPC
public:
    class Npc& operator=(class Npc const &) = delete;
    Npc(class Npc const &) = delete;
    Npc() = delete;
#endif

public:
    /*8*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*10*/ virtual void initializeComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*14*/ virtual ~Npc();
    /*16*/ virtual void resetUserPos(bool);
    /*20*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*40*/ virtual void __unk_vfn_40();
    /*60*/ virtual bool canShowNameTag() const;
    /*61*/ virtual void __unk_vfn_61();
    /*65*/ virtual std::string getFormattedNameTag() const;
    /*68*/ virtual void __unk_vfn_68();
    /*78*/ virtual float getCameraOffset() const;
    /*82*/ virtual void __unk_vfn_82();
    /*85*/ virtual bool canInteractWithOtherEntitiesInGame() const;
    /*88*/ virtual void __unk_vfn_88();
    /*89*/ virtual void playerTouch(class Player &);
    /*95*/ virtual void __unk_vfn_95();
    /*98*/ virtual void __unk_vfn_98();
    /*101*/ virtual bool isDamageBlocked(class ActorDamageSource const &) const;
    /*105*/ virtual void __unk_vfn_105();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*113*/ virtual class Actor * findAttackTarget();
    /*114*/ virtual bool isValidTarget(class Actor *) const;
    /*120*/ virtual void onTame();
    /*121*/ virtual void onFailedTame();
    /*130*/ virtual void vehicleLanded(class Vec3 const &, class Vec3 const &);
    /*139*/ virtual void onBounceStarted(class BlockPos const &, class Block const &);
    /*151*/ virtual void awardKillScore(class Actor &, int);
    /*171*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*178*/ virtual int getPortalWaitTime() const;
    /*180*/ virtual bool canChangeDimensions() const;
    /*181*/ virtual void __unk_vfn_181();
    /*183*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*192*/ virtual bool canPickupItem(class ItemStack const &) const;
    /*193*/ virtual bool canBePulledIntoVehicle() const;
    /*195*/ virtual void __unk_vfn_195();
    /*198*/ virtual bool canSynchronizeNewEntity() const;
    /*202*/ virtual void buildDebugInfo(std::string &) const;
    /*211*/ virtual bool canBeAffected(class MobEffectInstance const &) const;
    /*220*/ virtual void __unk_vfn_220();
    /*221*/ virtual void __unk_vfn_221();
    /*228*/ virtual bool isWorldBuilder() const;
    /*229*/ virtual bool isCreative() const;
    /*230*/ virtual bool isAdventure() const;
    /*231*/ virtual bool isSurvival() const;
    /*232*/ virtual bool isSpectator() const;
    /*237*/ virtual bool canDestroyBlock(class Block const &) const;
    /*238*/ virtual void setAuxValue(int);
    /*244*/ virtual void stopSpinAttack();
    /*246*/ virtual void __unk_vfn_246();
    /*249*/ virtual void __unk_vfn_249();
    /*251*/ virtual void die(class ActorDamageSource const &);
    /*261*/ virtual void __unk_vfn_261();
    /*262*/ virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /*269*/ virtual void __unk_vfn_269();
    /*277*/ virtual void _onSizeUpdated();
    /*278*/ virtual void __unk_vfn_278();
    /*279*/ virtual void knockback(class Actor *, int, float, float, float, float, float);
    /*280*/ virtual void spawnAnim();
    /*302*/ virtual int getItemUseDuration() const;
    /*303*/ virtual float getItemUseStartupProgress() const;
    /*304*/ virtual float getItemUseIntervalProgress() const;
    /*307*/ virtual void __unk_vfn_307();
    /*309*/ virtual bool isAlliedTo(class Mob *);
    /*311*/ virtual void __unk_vfn_311();
    /*321*/ virtual void sendArmorDamage(class std::bitset<4> const &);
    /*338*/ virtual void onBorn(class Actor &, class Actor &);
    /*343*/ virtual float _getWalkTargetValue(class BlockPos const &);
    /*344*/ virtual bool canExistWhenDisallowMob() const;
    /*345*/ virtual void __unk_vfn_345();
    /*354*/ virtual void newServerAiStep();
    /*355*/ virtual void _serverAiMobStep();
    /*359*/ virtual void __unk_vfn_359();
    /*
    inline bool isFishable() const{
        bool (Npc::*rv)() const;
        *((void**)&rv) = dlsym("?isFishable@Npc@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isTargetable() const{
        bool (Npc::*rv)() const;
        *((void**)&rv) = dlsym("?isTargetable@Npc@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool interactPreventDefault(){
        bool (Npc::*rv)();
        *((void**)&rv) = dlsym("?interactPreventDefault@Npc@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline bool breaksFallingBlocks() const{
        bool (Npc::*rv)() const;
        *((void**)&rv) = dlsym("?breaksFallingBlocks@Npc@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool useNewAi() const{
        bool (Npc::*rv)() const;
        *((void**)&rv) = dlsym("?useNewAi@Npc@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline void _serverAiMobStep(){
        void (Npc::*rv)();
        *((void**)&rv) = dlsym("?_serverAiMobStep@Npc@@MEAAXXZ");
        return (this->*rv)();
    }
    */
    MCAPI Npc(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI static std::string const SKIN_ID_TAG;
    MCAPI static std::vector<struct std::pair<std::string, std::string>> const Skins;

protected:

private:

};