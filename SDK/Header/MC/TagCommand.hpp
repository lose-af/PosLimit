// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TagCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TAGCOMMAND
public:
    class TagCommand& operator=(class TagCommand const &) = delete;
    TagCommand(class TagCommand const &) = delete;
    TagCommand() = delete;
#endif

public:
    /*0*/ virtual ~TagCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    MCAPI static void setup(class CommandRegistry &);

protected:

private:
    MCAPI void _addTag(class CommandOutput &, std::vector<class std::reference_wrapper<class Actor>> const &) const;
    MCAPI std::vector<class std::reference_wrapper<class Actor>> _getSelectorResults(class CommandOrigin const &, class CommandOutput &) const;
    MCAPI void _listTags(class CommandOutput &, std::vector<class std::reference_wrapper<class Actor>> const &) const;
    MCAPI void _removeTag(class CommandOutput &, std::vector<class std::reference_wrapper<class Actor>> const &) const;

};