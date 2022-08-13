#include "Bureaucrat.hpp"

int main(void){

    std::cout << "================== Form0 grade sign = 1 and exec = 1 =====================" << std::endl;

    try
    {
        Form    form("Form0", 1, 1);
        std::cout << " done! " << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "================== Form1 grade sign = 0 and exec = 1 =====================" << std::endl;

    try
    {
        Form    form("Form1", 0, 1);
        std::cout << " done! " << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << std::endl;
    std::cout << "================== Form2 grade sign = 1 and exec = 0 =====================" << std::endl;

    try
    {
        Form	form("Form2", 1, 0);
        std::cout << " done! " << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << std::endl;
    std::cout << "================== Form3 grade sign = 1 and exec = 151 =====================" << std::endl;

    try
    {
        Form	form("Form3", 1, 151);
        std::cout << " done! " << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << std::endl;
    std::cout << "================== Form4 grade sign = 151 and exec = 1 =====================" << std::endl;

    try
    {
        Form	form("Form4", 151, 1);
        std::cout << " done! " << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exeption: " << e.what() << std::endl;
    }

    std::cout << std::endl;
    std::cout << "================== Bureaucrat1 grade = 4 =====================" << std::endl;
    std::cout << "================== Form5 grade sign = 5 and exec = 5 =====================" << std::endl;
    try
    {
        Bureaucrat	bureaucrat("Bureaucrat1", 4);
        Form		form("Form5", 5, 5);

        std::cout << form;
        std::cout << "----------" << std::endl;
        bureaucrat.signForm(form);
        std::cout << "----------" << std::endl;
        std::cout << form << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "================== Bureaucrat2 grade = 7 =====================" << std::endl;
    std::cout << "================== Form6 grade sign = 5 and exec = 5 =====================" << std::endl;

    try
    {
        Bureaucrat	bureaucrat("Bureaucrat2", 7);
        Form		form("Form6", 5, 5);

        std::cout << form;
        std::cout << "----------" << std::endl;
        bureaucrat.signForm(form);
        std::cout << "----------" << std::endl;
        std::cout << form << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}