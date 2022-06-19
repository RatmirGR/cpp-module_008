#include "Intern.hpp"

typedef Form* (Intern::*ptr_type)(std::string);

Intern::Intern(void){}

Intern::Intern(const Intern& intern){
    *this = intern;
}

Intern::~Intern(void){}

Intern& Intern::operator=(const Intern& other){
    (void)other;
    return (*this);
}

Form* Intern::CreateShrubberyCreationForm(std::string target){
    Form* shrubbery = new ShrubberyCreationForm(target);
    return (shrubbery);
}

Form* Intern::CreateRobotomyRequestForm(std::string target){
    Form* robotomy = new RobotomyRequestForm(target);
    return (robotomy);
}

Form* Intern::CreatePresidentialPardonForm(std::string target){
    Form* presidential = new PresidentialPardonForm(target);
    return (presidential);
}

Form* Intern::makeForm(std::string name, std::string target){
    const int LEN = 3;
    Form *form;

    form = NULL;
    ptr_type arrPtr[LEN] = {&Intern::CreateShrubberyCreationForm, &Intern::CreateRobotomyRequestForm, &Intern::CreatePresidentialPardonForm};
    std::string arrForms[LEN] = {"shrubbery request", "robotomy request", "presidential request"};
    for (int i = 0; i < LEN; i++)
    {
        if (name == arrForms[i]){
            form = (this->*arrPtr[i])(target);
            break;
        }
    }
    return (form);
}


