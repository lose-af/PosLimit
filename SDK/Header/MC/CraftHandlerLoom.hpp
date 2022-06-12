// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "CraftHandlerBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CraftHandlerLoom : public CraftHandlerBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTHANDLERLOOM
public:
    class CraftHandlerLoom& operator=(class CraftHandlerLoom const &) = delete;
    CraftHandlerLoom(class CraftHandlerLoom const &) = delete;
    CraftHandlerLoom() = delete;
#endif

public:
    /*0*/ virtual ~CraftHandlerLoom();
    /*3*/ virtual void endRequestBatch();
    /*4*/ virtual enum ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const &);
    /*5*/ virtual void _postCraftRequest(bool);
    /*7*/ virtual void __unk_vfn_7();
    MCAPI CraftHandlerLoom(class ItemStackRequestActionCraftHandler &);

protected:

private:

};