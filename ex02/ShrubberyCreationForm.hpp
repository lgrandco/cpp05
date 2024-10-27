#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "AForm.hpp"
#include <fstream>
#include <iostream>
#include <sstream>
#include <stdlib.h>

class ShrubberyCreationForm : public AForm {
private:
    static const int requiredSigned = 145;
    static const int requiredExec = 137;

public:
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();
    // ShrubberyCreationForm(const ShrubberyCreationForm&);
    // ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);
    ShrubberyCreationForm(std::string target);
    void create_tree(std::string) const;
    void execute(Bureaucrat const& executor) const;
};

#endif // !SHRUBBERYCREATIONFORM_HPP
