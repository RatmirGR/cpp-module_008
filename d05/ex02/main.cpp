#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void){

    std::cout << "================== Bureaucrat1 grade = 100 =====================" << std::endl;
    std::cout << "================== ShrubberyCreationForm (145, 137) ==========" << std::endl;

    try{
        Bureaucrat bureaucrat("Bureaucrat1", 100);
        ShrubberyCreationForm shrubberyCreationForm("home");

        bureaucrat.signForm(shrubberyCreationForm);
        shrubberyCreationForm.execute(bureaucrat);
    }catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;
    std::cout << "================== Bureaucrat2 grade = 40 =====================" << std::endl;
    std::cout << "================== RobotomyRequestForm (72, 45) ===============" << std::endl;

    try{
        Bureaucrat bureaucrat("Bureaucrat2", 40);
        RobotomyRequestForm robotomyRequestForm("robot");

        bureaucrat.signForm(robotomyRequestForm);
        robotomyRequestForm.execute(bureaucrat);
    }catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;
    std::cout << "================== Bureaucrat3 grade = 5 =====================" << std::endl;
    std::cout << "================== PresidentialPardonForm (25, 5) ==============" << std::endl;

    try{
        Bureaucrat bureaucrat("Bureaucrat3", 5);
        PresidentialPardonForm presidentialPardonForm("Zaphod Beeblebrox");

        bureaucrat.signForm(presidentialPardonForm);
        presidentialPardonForm.execute(bureaucrat);
    }catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;
    std::cout << "================== Exception ===================================" << std::endl;
    std::cout << "================== Bureaucrat4 grade = 26 ======================" << std::endl;
    std::cout << "================== PresidentialPardonForm (25, 5) ==============" << std::endl;

    try{
        Bureaucrat bureaucrat("Bureaucrat4", 26);
        PresidentialPardonForm presidentialPardonForm("Zaphod Beeblebrox");

        bureaucrat.signForm(presidentialPardonForm);
        presidentialPardonForm.execute(bureaucrat);
    }catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }

    return (0);
}