#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

#define MAX_GRADE 1
#define MIN_GRADE 150

class Bureaucrat;

class Form{

    private:
        const std::string   _name;
        bool                _sign;
        const int           _gradeSign;
        const int           _gradeExec;

        Form(void);
    public:
        Form(const std::string& name, int gradeSign, int gradeExec);
        Form(const Form& form);
        virtual ~Form(void);

        Form&   operator=(const Form& other);

        const std::string&  getName() const;
        bool                isSigned(void) const;
        int                 getGradeSign(void) const;
        int                 getGradeExec(void) const;
        void                beSigned(const Bureaucrat& bureaucrat);
        virtual bool		execute(const Bureaucrat& executor) const = 0;
        bool                burChecksPermission(Bureaucrat const &executor) const;

        class GradeTooHighException : public std::exception{
            public:
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception{
            public:
                const char* what() const throw();
        };
};

std::ostream	&operator<<(std::ostream &output, const Form &form);

#endif
