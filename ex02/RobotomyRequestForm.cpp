#include "RobotomyRequestForm.hpp"

void RobotomyRequestForm::doTask() const {
    print_color("*Rrrrrrr*");
    static bool first = true;
    if (first) {
        srand(time(NULL));
        first = false;
    }
    if (rand() % 2) print_color(_target + " has successfully been robotomized");
    else print_color("the robotomy of " + _target + " has failed");
};

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy", 72, 45), _target("") {};
RobotomyRequestForm::~RobotomyRequestForm() {};
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) { *this = src; };
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& src) {
    _target = src._target;
    return *this;
};
RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : AForm("Robotomy", 72, 45), _target(target) {};
