#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"
#include <fstream>
#include <iostream>
#include <sstream>
#include <stdlib.h>

class PresidentialPardonForm : virtual public AForm {
private:
    std::string _target;

public:
    PresidentialPardonForm();
    ~PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm&);
    PresidentialPardonForm& operator=(const PresidentialPardonForm&);
    PresidentialPardonForm(std::string target);
    void doTask() const;
};

#endif // !PRESIDENTIALPARDONFORMFORM_HPP
