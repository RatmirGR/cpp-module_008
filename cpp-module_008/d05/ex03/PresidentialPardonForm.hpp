#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class PresidentialPardonForm : public Form {

    private:
        const std::string   _target;

        PresidentialPardonForm(void);
    public:
        PresidentialPardonForm(std::string const &target);
        PresidentialPardonForm(const PresidentialPardonForm& presidentialPardonForm);
        ~PresidentialPardonForm(void);

        PresidentialPardonForm&   operator=(const PresidentialPardonForm& other);

        const std::string&  getTarget(void) const;
        bool 				execute(Bureaucrat const &executor) const;
};


#endif
