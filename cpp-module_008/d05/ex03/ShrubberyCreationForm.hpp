#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm: public Form{

    private:
        const std::string	_target;

        ShrubberyCreationForm(void);
    public:
        ShrubberyCreationForm(std::string const &target);
        ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyCreationForm);
        ~ShrubberyCreationForm(void);

        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);

        const std::string&	getTarget(void) const;
        bool				execute(const Bureaucrat& executor) const;
};

#endif
