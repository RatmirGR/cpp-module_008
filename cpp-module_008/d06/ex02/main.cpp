#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void)
{
    Base *base;

    int	randNum = rand() % 3;

    if (randNum == 0) {
        base = new A();
        std::cout << "A generated" << std::endl;
    }
    if (randNum == 1) {
        base = new B();
        std::cout << "B generated" << std::endl;
    }
    if (randNum == 2){
        base = new C();
        std::cout << "B generated" << std::endl;
    }
    return (base);
}

void identify(Base* p)
{
    if (!p)
        return;

    if (dynamic_cast<A* >(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B* >(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C* >(p))
        std::cout << "C" << std::endl;
}

void identify(Base& p)
{
    try{
        A child11 = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
    }
    catch(std::exception& e) {}
    try{
        B child22 = dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
    }
    catch(std::exception& e) {}
    try{
        C child33 = dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
    }
    catch(std::exception& e) {}
}


int	main()
{
    srand(time(NULL));

    Base * base = generate();

    identify(base);
    identify(*base);
    delete base;

    base = new Base();

    identify(base);
    identify(*base);
    delete base;

    return (0);
}