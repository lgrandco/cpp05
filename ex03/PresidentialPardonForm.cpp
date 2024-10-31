#include "PresidentialPardonForm.hpp"

void PresidentialPardonForm::doTask() const {
    print_color(_target + " has been pardoned by Zaphod Beeblebrox");
};

PresidentialPardonForm::PresidentialPardonForm() : AForm("Robotomy", 25, 5), _target("") {};
PresidentialPardonForm::~PresidentialPardonForm() {};
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) { *this = src; };
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& src) {
    _target = src._target;
    return *this;
};
PresidentialPardonForm::PresidentialPardonForm(std::string target)
    : AForm("Robotomy", 25, 5), _target(target) {};
