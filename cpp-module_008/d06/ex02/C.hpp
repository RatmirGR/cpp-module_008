#ifndef C_HPP
#define C_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"

class C: public Base{
    public:
        C(void);
        C(const C& c);
        ~C(void);

        C& operator=(const C& other);
};

#endif