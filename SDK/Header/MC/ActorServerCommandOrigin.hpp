// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ActorCommandOrigin.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ActorServerCommandOrigin : public ActorCommandOrigin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORSERVERCOMMANDORIGIN
public:
    class ActorServerCommandOrigin& operator=(class ActorServerCommandOrigin const &) = delete;
    ActorServerCommandOrigin(class ActorServerCommandOrigin const &) = delete;
    ActorServerCommandOrigin() = delete;
#endif

public:
    /*0*/ virtual ~ActorServerCommandOrigin();
    /*9*/ virtual enum CommandPermissionLevel getPermissionsLevel() const;
    /*10*/ virtual std::unique_ptr<class CommandOrigin> clone() const;
    /*11*/ virtual class std::optional<class BlockPos> getCursorHitBlockPos() const;
    /*12*/ virtual class std::optional<class Vec3> getCursorHitPos() const;
    /*15*/ virtual bool canUseAbility(enum AbilitiesIndex) const;
    /*17*/ virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /*18*/ virtual bool isSelectorExpansionAllowed() const;
    /*20*/ virtual unsigned char getSourceSubId() const;
    /*23*/ virtual enum CommandOriginType getOriginType() const;
    /*26*/ virtual void __unk_vfn_26();
    /*27*/ virtual void updateValues();
    /*29*/ virtual class CompoundTag serialize() const;
    MCAPI ActorServerCommandOrigin(class Actor &);
    MCAPI void setTargetOther(struct ActorUniqueID);
    MCAPI static std::unique_ptr<class ActorServerCommandOrigin> load(class CompoundTag const &, class Level &);

protected:

private:

};