#ifndef INTERN_HPP
#define INTERN_HPP
#include "AForm.hpp"
#include "HashMap.hpp"

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
public:
    Intern();
    ~Intern();
    Intern(Intern&);
    Intern& operator=(Intern&);
    AForm* makeForm(std::string Name, std::string Target);
};

#endif // !INTER_HPP
