#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCRATIONFORM_HPP
#include "AForm.hpp"
class ShrubberyCreationForm : public AForm {
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm&);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);
    ShrubberyCreationForm(std::string target);
}

#endif // !SHRUBBERYCREATIONFORM_HPP
