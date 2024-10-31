#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"
#include <fstream>
#include <iostream>
#include <sstream>
#include <stdlib.h>

class RobotomyRequestForm : virtual public AForm {
private:
    std::string _target;

public:
    RobotomyRequestForm();
    ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm&);
    RobotomyRequestForm& operator=(const RobotomyRequestForm&);
    RobotomyRequestForm(std::string target);
    void doTask() const;
};

#endif // !ROBOTOMYREQUESTFORM_HPP
