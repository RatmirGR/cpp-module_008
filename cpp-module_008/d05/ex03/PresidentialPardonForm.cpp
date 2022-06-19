#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
        : Form("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
        : Form("PresidentialPardonForm", 25, 5), _target(other.getTarget())
{}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)  {
    if (this == &other)
        return (*this);
    *this = other;
    return *this;
}

const std::string&		PresidentialPardonForm::getTarget(void) const
{
    return (this->_target);
}

bool					PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
    try {
        Form::burChecksPermission(executor);

        std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    }catch(std::exception& e){
        std::cout << e.what() << std::endl;
        return (0);
    }
    return (1);
}