#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class RobotomyRequestForm : public Form {

    private:
        const std::string   _target;

        RobotomyRequestForm(void);
    public:
        RobotomyRequestForm(std::string const &target);
        RobotomyRequestForm(const RobotomyRequestForm& robotomyRequestForm);
        ~RobotomyRequestForm(void);

        RobotomyRequestForm &operator=(const RobotomyRequestForm &other);

        const std::string&  getTarget(void) const;
        bool 			    execute(Bureaucrat const &executor) const;
};

#endif
