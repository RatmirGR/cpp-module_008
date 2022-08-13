#include "C.hpp"

C::C(void) {}

C::C(const C &c) {
    *this = c;
}

C::~C(void) {}

C &C::operator=(const C &other) {
    if (this == &other)
        return (*this);
    return (*this);
}