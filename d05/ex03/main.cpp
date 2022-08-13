#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void){
    try{

        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("robotomys request", "Bender");
        if (rrf) {
            std::cout << "Intern creates " << rrf->getName() << std::endl;
            Bureaucrat bureaucrat("Bureaucrat1", 2);
            bureaucrat.signForm(*rrf);
            rrf->execute(bureaucrat);
        }else
            std::cout << "intern failed to create form " << std::endl;

    }catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    return (0);
}