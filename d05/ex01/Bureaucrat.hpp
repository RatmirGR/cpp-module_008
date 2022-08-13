#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

#define MAX_GRADE 1
#define MIN_GRADE 150

class Form;

class Bureaucrat{

    private:
        const std::string   _name;
        unsigned int        _grade;
        Bureaucrat(void);

    public:
        Bureaucrat(const std::string name, unsigned int grade);
        Bureaucrat(const Bureaucrat& bureaucrat);
        ~Bureaucrat(void);

        Bureaucrat& operator=(const Bureaucrat& other);
        const std::string&  getName() const;
        int                 getGrade() const;
        void                plusGrade();
        void                minusGrade();
        void				signForm(Form& form);

        class GradeTooHighException : public std::exception{
            public:
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception{
        public:
            const char* what() const throw();
        };
};

std::ostream & operator <<(std::ostream &output, const Bureaucrat& bureaucrat);

#endif
