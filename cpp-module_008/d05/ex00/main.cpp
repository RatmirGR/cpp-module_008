#include "Bureaucrat.hpp"

int main(void){

    try{
        Bureaucrat b1("bur", 1);
        std::cout << b1 << std::endl;
        b1.plusGrade();
        std::cout << b1 << std::endl;
    }catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }

    std::cout << "==========================" << std::endl;

    try{
        Bureaucrat b2("bur", 150);
        std::cout << b2 << std::endl;
        b2.minusGrade();
        std::cout << b2 << std::endl;
    }catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }
    return (0);
}