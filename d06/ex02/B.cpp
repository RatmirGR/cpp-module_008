#include "B.hpp"

B::B(void) {}

B::B(const B &b) {
    *this = b;
}

B::~B(void) {}

B &B::operator=(const B &other) {
    if (this == &other)
        return (*this);
    return (*this);
}