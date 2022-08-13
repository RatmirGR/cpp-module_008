#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern{

public:
    Intern(void);
    Intern(std::string const &target);
    Intern(const Intern& intern);
    ~Intern(void);

    Intern &operator=(const Intern &other);

    Form* CreateShrubberyCreationForm(std::string target);
    Form* CreateRobotomyRequestForm(std::string target);
    Form* CreatePresidentialPardonForm(std::string target);
    Form* makeForm(std::string form_name, std::string target);
};

#endif
