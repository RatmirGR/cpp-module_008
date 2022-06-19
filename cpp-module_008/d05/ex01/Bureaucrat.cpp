#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : _name(name){
    if (grade < MAX_GRADE)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > MIN_GRADE)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : _name(bureaucrat._name), _grade(bureaucrat._grade) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other){
    if (this == &other)
        return (*this);
    this->_grade = other.getGrade();
    return (*this);
}

Bureaucrat::~Bureaucrat() {}

const std::string &Bureaucrat::getName() const {
    return (this->_name);
}

int Bureaucrat::getGrade() const {
    return (this->_grade);
}

void Bureaucrat::plusGrade() {
    if (this->_grade > MAX_GRADE)
        this->_grade--;
    else
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::minusGrade() {
    if (this->_grade < MIN_GRADE)
        this->_grade++;
    else
        throw Bureaucrat::GradeTooLowException();
}

std::ostream & operator <<(std::ostream &output, const Bureaucrat& bureaucrat){
    std::cout << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
    return (output);
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}

void	Bureaucrat::signForm(Form &form) {
    form.beSigned(*this);
}




