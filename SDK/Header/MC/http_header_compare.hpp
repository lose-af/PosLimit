// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct http_header_compare {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HTTP_HEADER_COMPARE
public:
    struct http_header_compare& operator=(struct http_header_compare const &) = delete;
    http_header_compare(struct http_header_compare const &) = delete;
    http_header_compare() = delete;
#endif

public:
    MCAPI bool operator()(class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>> const &) const;

protected:

private:

};