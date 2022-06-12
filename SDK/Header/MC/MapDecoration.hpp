// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MapDecoration {

#define AFTER_EXTRA
// Add Member There
public:
enum Type;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPDECORATION
public:
    class MapDecoration& operator=(class MapDecoration const &) = delete;
    MapDecoration(class MapDecoration const &) = delete;
    MapDecoration() = delete;
#endif

public:
    MCAPI MapDecoration(enum MapDecoration::Type, signed char, signed char, signed char, std::string const &, class mce::Color const &);
    MCAPI class mce::Color const & getColor() const;
    MCAPI enum MapDecoration::Type getImg() const;
    MCAPI std::string const & getLabel() const;
    MCAPI signed char getRot() const;
    MCAPI signed char getX() const;
    MCAPI signed char getY() const;
    MCAPI ~MapDecoration();

protected:

private:

};