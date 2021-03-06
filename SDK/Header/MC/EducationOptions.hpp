// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EducationOptions {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EDUCATIONOPTIONS
public:
    class EducationOptions& operator=(class EducationOptions const &) = delete;
    EducationOptions(class EducationOptions const &) = delete;
    EducationOptions() = delete;
#endif

public:
    /*
    inline  ~EducationOptions(){
         (EducationOptions::*rv)();
        *((void**)&rv) = dlsym("??1EducationOptions@@UEAA@XZ");
        return (this->*rv)();
    }
    inline void onActiveResourcePacksChanged(class ResourcePackManager & a0){
        void (EducationOptions::*rv)(class ResourcePackManager &);
        *((void**)&rv) = dlsym("?onActiveResourcePacksChanged@EducationOptions@@UEAAXAEAVResourcePackManager@@@Z");
        return (this->*rv)(std::forward<class ResourcePackManager &>(a0));
    }
    */
    MCAPI EducationOptions(class ResourcePackManager *);
    MCAPI void init(class LevelData const &);
    MCAPI static class gsl::basic_string_span<char const, -1> const CHEMISTRY_ENABLED;
    MCAPI static bool isBaseCodeBuilderEnabled();
    MCAPI static bool isChemistryEnabled();
    MCAPI static bool isCodeBuilderEnabled();

protected:

private:
    MCAPI static class EducationOptions DEFAULT_OPTION;
    MCAPI static class ServiceReference<class EducationOptions> _getCurrentOptions();

};