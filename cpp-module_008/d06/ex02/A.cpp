#include "A.hpp"

A::A(void) {}

A::A(const A &a) {
    *this = a;
}

A::~A(void) {}

A &A::operator=(const A &other) {
    if (this == &other)
        return (*this);
    return (*this);
}