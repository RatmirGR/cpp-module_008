#ifndef B_HPP
#define B_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"

class B: public Base{
    public:
        B(void);
        B(const B& b);
        ~B(void);

        B& operator=(const B& other);
};

#endif