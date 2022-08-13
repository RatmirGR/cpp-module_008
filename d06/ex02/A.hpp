#ifndef A_HPP
#define A_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"

class A: public Base{
    public:
        A(void);
        A(const A& a);
        ~A(void);

        A& operator=(const A& other);
};

#endif
