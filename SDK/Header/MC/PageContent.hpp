// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

struct PageContent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PAGECONTENT
public:
    PageContent(struct PageContent const &) = delete;
    PageContent() = delete;
#endif

public:
    MCAPI std::unique_ptr<class CompoundTag> createTag() const;
    MCAPI struct PageContent & operator=(struct PageContent const &);
    MCAPI ~PageContent();

protected:

private:

};