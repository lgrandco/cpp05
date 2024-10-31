#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "AForm.hpp"
#include <fstream>
#include <iostream>
#include <sstream>
#include <stdlib.h>

class ShrubberyCreationForm : virtual public AForm {
private:
    std::string _target;

public:
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm&);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);
    ShrubberyCreationForm(std::string target);
    void doTask() const;
};

#endif // !SHRUBBERYCREATIONFORM_HPP
