#include "Form.hpp"

Form::Form(const std::string &name, int gradeSign, int gradeExec)
        : _name(name), _sign(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
    if (gradeSign < MAX_GRADE || gradeExec < MAX_GRADE)
        throw Form::GradeTooHighException();
    else if (gradeSign > MIN_GRADE  || gradeExec > MIN_GRADE)
        throw Form::GradeTooLowException();
}

Form::Form(const Form &form) : _name(form._name), _sign(false), _gradeSign(form._gradeSign), _gradeExec(form._gradeExec)
{
    *this = form;
}

Form::~Form(void)
{}

Form	&Form::operator=(const Form &other)
{
    if (this == &other)
        return (*this);
    this->_sign = other._sign;
    return *this;
}

const std::string &Form::getName() const {
    return (this->_name);
}

bool Form::isSigned() const {
    return (this->_sign);
}

int Form::getGradeSign() const {
    return (this->_gradeSign);
}

int Form::getGradeExec() const {
    return (this->_gradeExec);
}

const char *Form::GradeTooHighException::what() const throw() {
    return "Grade is too high\n";
}

const char *Form::GradeTooLowException::what() const throw() {
    return "Grade is too low\n";
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() <= this->_gradeSign) {
        this->_sign = true;
        std::cout << bureaucrat.getName() << " signed " << this->getName() << std::endl;
    }else {
        std::cout << bureaucrat.getName() << " couldn’t sign " << this->getName() << " because ";
        throw Form::GradeTooLowException();
    }
}

std::ostream	&operator<<(std::ostream &output, const Form &form){
    output << "Form : " << form.getName() << std::endl;
    output << "Grade Sing : " << form.getGradeSign() << std::endl;
    output << "Grade Execute : " << form.getGradeExec() << std::endl;
    output << "Form signed (status) : " << form.isSigned() << std::endl;
    return (output);
}








