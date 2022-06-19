#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
        : Form("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
        : Form("RobotomyRequestForm", 72, 45), _target(other.getTarget()) {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)  {
    if (this == &other)
        return (*this);
    *this = other;
    return *this;
}

const std::string&    RobotomyRequestForm::getTarget(void) const
{
    return (this->_target);
}

bool 				RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
    try {
        Form::burChecksPermission(executor);

        std::cout << "* Some drilling noises. *" << std::endl;
        if (rand() % 2)
            std::cout << this->_target << " has been robotomized successfully 50% of the time" << std::endl;
        else
            std::cout << "Robotomy " << this->_target << " failed" << std::endl;
    }catch(std::exception& e){
        std::cout << e.what() << std::endl;
        return (0);
    }
    return (1);
}

