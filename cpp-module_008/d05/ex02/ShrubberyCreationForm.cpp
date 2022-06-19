#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
        : Form("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
        : Form("ShrubberyCreationForm", 145, 137), _target(other.getTarget()) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)  {
    if (this == &other)
        return (*this);
    *this = other;
    return *this;
}

const std::string&      ShrubberyCreationForm::getTarget(void) const
{
    return (this->_target);
}

bool					ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
    try {
        Form::burChecksPermission(executor);

        std::ofstream fileOutput(_target + "_shrubbery");
        if (!fileOutput) {
            std::cout << "Cannot open the file to output" << std::endl;
            return (0);
        }

        fileOutput << "       # #### #######               " << std::endl;
        fileOutput << "      ### \\/#|###### |/####        " << std::endl;
        fileOutput << "     ##\\/#/ \\||/##/_/######/_#    " << std::endl;
        fileOutput << "   ###  \\/###|/ \\/ # ############ " << std::endl;
        fileOutput << "  ##_\\_#\\_\\## | #/###_/_######   " << std::endl;
        fileOutput << " ## #### # \\ #| /  #### ##/####    " << std::endl;
        fileOutput << "  __#_--##33#`  |{,###---###-~      " << std::endl;
        fileOutput << "           \\ }{{{                  " << std::endl;
        fileOutput << "            }}{{{{                  " << std::endl;
        fileOutput << "            }}{{{                   " << std::endl;
        fileOutput << "       ejm  {{}                     " << std::endl;
        fileOutput << "      , -=-~{ .-^- _                " << std::endl;
        fileOutput << "            `}                      " << std::endl;
        fileOutput << "             {                      " << std::endl;

        fileOutput.close();
    }catch(std::exception& e){
        std::cout << e.what() << std::endl;
        return (0);
    }
    return (1);
}