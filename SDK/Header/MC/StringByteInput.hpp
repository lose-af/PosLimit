// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class StringByteInput {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRINGBYTEINPUT
public:
    class StringByteInput& operator=(class StringByteInput const &) = delete;
    StringByteInput(class StringByteInput const &) = delete;
    StringByteInput() = delete;
#endif

public:
    /*0*/ virtual ~StringByteInput();
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual unsigned __int64 numBytesLeft() const;
    /*
    inline  ~StringByteInput(){
         (StringByteInput::*rv)();
        *((void**)&rv) = dlsym("??1StringByteInput@@UEAA@XZ");
        return (this->*rv)();
    }
    inline bool readBytes(void * a0, unsigned __int64 a1){
        bool (StringByteInput::*rv)(void *, unsigned __int64);
        *((void**)&rv) = dlsym("?readBytes@StringByteInput@@UEAA_NPEAX_K@Z");
        return (this->*rv)(std::forward<void *>(a0), std::forward<unsigned __int64>(a1));
    }
    */

protected:

private:

};